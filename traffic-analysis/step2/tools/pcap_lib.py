#!/usr/bin/env python3
"""Minimal streaming pcap reader (stdlib only).

Supports libpcap LE/BE, linktype 1 (EN10MB) and 101 (RAW IPv4/IPv6).
Yields dicts: ts, proto('tcp'/'udp'/'other'), src, sport, dst, dport,
seq, ack, flags, payload(bytes), ip_proto.
"""
import struct

MAGIC_LE = 0xA1B2C3D4
MAGIC_LE_NS = 0xA1B23C4D


def read_pcap(path, max_bytes=None):
    """Generator over packets. max_bytes limits file bytes consumed."""
    with open(path, 'rb') as f:
        gh = f.read(24)
        if len(gh) < 24:
            return
        magic = struct.unpack('<I', gh[:4])[0]
        if magic in (MAGIC_LE, MAGIC_LE_NS):
            endian = '<'
        else:
            magic_be = struct.unpack('>I', gh[:4])[0]
            if magic_be in (MAGIC_LE, MAGIC_LE_NS):
                endian = '>'
            else:
                raise ValueError('not a pcap: %s' % path)
        linktype = struct.unpack(endian + 'I', gh[20:24])[0]
        consumed = 24
        while True:
            if max_bytes is not None and consumed >= max_bytes:
                return
            ph = f.read(16)
            if len(ph) < 16:
                return
            ts_sec, ts_usec, incl, orig = struct.unpack(endian + 'IIII', ph)
            data = f.read(incl)
            consumed += 16 + incl
            if len(data) < incl:
                return  # truncated (file may still be growing)
            pkt = parse_frame(data, linktype)
            if pkt is None:
                continue
            pkt['ts'] = ts_sec + ts_usec / (1e9 if magic == MAGIC_LE_NS else 1e6)
            yield pkt


def parse_frame(data, linktype):
    if linktype == 1:  # Ethernet
        if len(data) < 14:
            return None
        ethertype = struct.unpack('>H', data[12:14])[0]
        off = 14
        # VLAN tags
        while ethertype in (0x8100, 0x88A8) and len(data) >= off + 4:
            ethertype = struct.unpack('>H', data[off + 2:off + 4])[0]
            off += 4
        if ethertype == 0x0800:
            return parse_ipv4(data, off)
        return None
    elif linktype == 101:  # RAW
        if not data:
            return None
        ver = data[0] >> 4
        if ver == 4:
            return parse_ipv4(data, 0)
        return None
    elif linktype == 113:  # LINUX_SLL
        if len(data) < 16:
            return None
        proto = struct.unpack('>H', data[14:16])[0]
        if proto == 0x0800:
            return parse_ipv4(data, 16)
        return None
    return None


def parse_ipv4(data, off):
    if len(data) < off + 20:
        return None
    ihl = (data[off] & 0x0F) * 4
    total = struct.unpack('>H', data[off + 2:off + 4])[0]
    proto = data[off + 9]
    src = '.'.join(str(b) for b in data[off + 12:off + 16])
    dst = '.'.join(str(b) for b in data[off + 16:off + 20])
    end = off + total if total and off + total <= len(data) else len(data)
    l4 = data[off + ihl:end]
    if proto == 6 and len(l4) >= 20:
        sport, dport, seq, ack, doff_flags = struct.unpack('>HHIIB', l4[:13])
        doff = (doff_flags >> 4) * 4
        flags = l4[13]
        payload = l4[doff:] if len(l4) > doff else b''
        return dict(proto='tcp', src=src, sport=sport, dst=dst, dport=dport,
                    seq=seq, ack=ack, flags=flags, payload=payload, ip_proto=6)
    if proto == 17 and len(l4) >= 8:
        sport, dport, ulen = struct.unpack('>HHH', l4[:6])
        payload = l4[8:8 + max(0, ulen - 8)] if ulen >= 8 else b''
        return dict(proto='udp', src=src, sport=sport, dst=dst, dport=dport,
                    seq=0, ack=0, flags=0, payload=payload, ip_proto=17)
    return dict(proto='other', src=src, sport=0, dst=dst, dport=0, seq=0,
                ack=0, flags=0, payload=b'', ip_proto=proto)


def reassemble(pkts, a, b):
    """Reassemble two directional byte streams between endpoints a=(ip,port), b=(ip,port).

    Returns (a2b_bytes, b2a_bytes, a2b_segments, b2a_segments).
    Segments: list of (seq, offset_in_stream, len, pkt_index) with overlap noted.
    Simple approach: seq-ordered placement, tolerate retrans/dup.
    """
    dirs = {a: [], b: []}
    for i, p in enumerate(pkts):
        key = (p['src'], p['sport'])
        if key in dirs and p['payload']:
            dirs[key].append((p['seq'], p['payload'], i))
    out = {}
    segs_out = {}
    for key, segs in dirs.items():
        if not segs:
            out[key] = b''
            segs_out[key] = []
            continue
        base = min(s[0] for s in segs)
        buf = bytearray()
        seginfo = []
        for seq, payload, idx in sorted(segs, key=lambda s: (s[0], s[2])):
            off = seq - base
            if off < 0:  # retrans of earlier data
                payload = payload[-off:]
                off = 0
                if not payload:
                    continue
            if off > len(buf):
                buf.extend(b'\x00' * (off - len(buf)))  # gap; tolerate
            if off + len(payload) > len(buf):
                buf.extend(payload[len(buf) - off:])
            seginfo.append((seq, off, len(payload), idx))
        out[key] = bytes(buf)
        segs_out[key] = seginfo
    return out.get(a, b''), out.get(b, b''), segs_out.get(a, []), segs_out.get(b, [])


def parse_sni(data):
    """Extract SNI from a TLS ClientHello (possibly with TCP prefix already stripped)."""
    try:
        if len(data) < 5 or data[0] != 0x16:
            return None
        body = data[5:]
        if len(body) < 42 or body[0] != 0x01:
            return None
        pos = 2 + 2 + 32  # type+len handled loosely, skip version+random
        # body: type(1) len(3) version(2) random(32)
        pos = 1 + 3 + 2 + 32
        if pos >= len(body):
            return None
        sid_len = body[pos]
        pos += 1 + sid_len
        cs_len = struct.unpack('>H', body[pos:pos + 2])[0]
        pos += 2 + cs_len
        comp_len = body[pos]
        pos += 1 + comp_len
        ext_total = struct.unpack('>H', body[pos:pos + 2])[0]
        pos += 2
        end = pos + ext_total
        while pos + 4 <= end and pos + 4 <= len(body):
            etype, elen = struct.unpack('>HH', body[pos:pos + 4])
            pos += 4
            if etype == 0 and pos + elen <= len(body):
                # server_name list
                if elen >= 5:
                    name_len = struct.unpack('>H', body[pos + 3:pos + 5])[0]
                    return body[pos + 5:pos + 5 + name_len].decode('ascii', 'replace')
            pos += elen
    except Exception:
        return None
    return None


def parse_dns(payload):
    """Very small DNS parser: returns (is_response, [(name, [ips])]) for answers."""
    try:
        if len(payload) < 12:
            return None
        tid, flags, qd, an = struct.unpack('>HHHH', payload[:10])
        qr = flags >> 15
        pos = 12

        def skip_name(p):
            while True:
                if p >= len(payload):
                    return p
                l = payload[p]
                if l == 0:
                    return p + 1
                if l & 0xC0 == 0xC0:
                    return p + 2
                p += 1 + l

        def read_name(p):
            labels = []
            jumped = False
            endp = p
            seen = 0
            while True:
                if p >= len(payload) or seen > 20:
                    return None, endp
                l = payload[p]
                if l == 0:
                    if not jumped:
                        endp = p + 1
                    return '.'.join(labels), endp
                if l & 0xC0 == 0xC0:
                    ptr = ((l & 0x3F) << 8) | payload[p + 1]
                    if not jumped:
                        endp = p + 2
                    p = ptr
                    jumped = True
                    seen += 1
                    continue
                labels.append(payload[p + 1:p + 1 + l].decode('ascii', 'replace'))
                p += 1 + l

        for _ in range(qd):
            _, pos = read_name(pos)
            pos += 4
        answers = []
        for _ in range(an):
            name, pos = read_name(pos)
            if name is None:
                break
            rtype, rclass, ttl, rdlen = struct.unpack('>HHIH', payload[pos:pos + 10])
            pos += 10
            rdata = payload[pos:pos + rdlen]
            pos += rdlen
            if rtype == 1 and rdlen == 4:
                answers.append((name, '.'.join(str(b) for b in rdata)))
        return qr, answers
    except Exception:
        return None
