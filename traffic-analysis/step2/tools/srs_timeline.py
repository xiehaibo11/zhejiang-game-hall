#!/usr/bin/env python3
"""Build annotated SRS message tables + timelines per scene.

Usage: srs_timeline.py
Reads inventory_*.json to find SRS flows (samples starting with 0140/0040),
reassembles, splits frames, annotates via protocol_index_full.json,
writes step2/messages_<scene>.json (per-flow frame tables incl. inner cmdid
decode for GameMProtocol 11200 plaintext s2c) and step2/timeline_<scene>.json.
"""
import glob
import json
import os
import struct
import sys

BASE = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis'
sys.path.insert(0, BASE + '/step2/tools')
from pcap_lib import read_pcap

IDX = json.load(open(BASE + '/step2/protocol_index_full.json'))
# (proc, xy) -> best entry (prefer hotfix over apk)
BY_KEY = {}
for e in IDX['binary_protocols']:
    if e.get('xy') is None:
        continue
    k = (e.get('proc'), e['xy'])
    hot = e['file'].startswith('hotfix')
    if k not in BY_KEY or (hot and not BY_KEY[k]['file'].startswith('hotfix')):
        BY_KEY[k] = e
PB_BY_KEY = {}
for e in IDX['protobuf_messages']:
    if e.get('xy') is None:
        continue
    k = (e.get('proc'), e['xy'])
    if k not in PB_BY_KEY:
        PB_BY_KEY[k] = e
GAME_CMD = {}
for e in IDX['game_cmdids']:
    if e.get('cmdid') is not None:
        GAME_CMD.setdefault(e['cmdid'], e['name'])


def flow_packets(path, eps):
    """eps: set of (serverip, serverport). Returns {flowkey: [pkts]}"""
    flows = {}
    for p in read_pcap(path):
        if p['proto'] != 'tcp':
            continue
        srv = None
        if (p['dst'], p['dport']) in eps:
            srv = (p['dst'], p['dport'])
            cli = (p['src'], p['sport'])
            d = 'c2s'
        elif (p['src'], p['sport']) in eps:
            srv = (p['src'], p['sport'])
            cli = (p['dst'], p['dport'])
            d = 's2c'
        else:
            continue
        flows.setdefault((cli, srv), []).append((d, p))
    return flows


def reassemble_ts(plist):
    """Reassemble per direction keeping (offset, ts) of each segment start."""
    out = {}
    for d in ('c2s', 's2c'):
        segs = [(p['seq'], p['payload'], p['ts']) for dd, p in plist if dd == d and p['payload']]
        if not segs:
            out[d] = (b'', [])
            continue
        base = min(s[0] for s in segs)
        buf = bytearray()
        marks = []  # (offset, ts)
        for seq, payload, ts in sorted(segs, key=lambda s: (s[0], s[2])):
            off = seq - base
            if off < 0:
                payload = payload[-off:]
                off = 0
                if not payload:
                    continue
            if off > len(buf):
                buf.extend(b'\x00' * (off - len(buf)))
            if off + len(payload) > len(buf):
                buf.extend(payload[len(buf) - off:])
            marks.append((off, ts))
        out[d] = (bytes(buf), marks)
    return out


def ts_at(marks, off):
    t = None
    for o, ts in marks:
        if o <= off:
            t = ts
        else:
            break
    return t


def split_frames(data):
    off = 0
    n = len(data)
    while off + 12 <= n:
        if data[off + 1] not in (0x40, 0x80) or data[off] not in (0, 1):
            # resync: scan for next plausible frame header (magic + sane len +
            # next frame also starts with magic)
            start = off
            found = -1
            j = off + 1
            while j + 14 <= n:
                if data[j] in (0, 1) and data[j + 1] in (0x40, 0x80):
                    plen = struct.unpack('<H', data[j + 2:j + 4])[0]
                    nxt = j + 12 + plen
                    if nxt == n or (nxt + 2 <= n and data[nxt] in (0, 1) and data[nxt + 1] in (0x40, 0x80)):
                        found = j
                        break
                j += 1
            yield dict(offset=start, bad=True, head=data[start:min(start + 24, n)].hex(),
                       skipped=(found - start) if found >= 0 else (n - start))
            if found < 0:
                return
            off = found
            continue
        plen = struct.unpack('<H', data[off + 2:off + 4])[0]
        mid = struct.unpack('<I', data[off + 4:off + 8])[0]
        aid = struct.unpack('<I', data[off + 8:off + 12])[0]
        body = data[off + 12:off + 12 + plen]
        yield dict(offset=off, len=plen, xy=mid & 0xffff, proc=mid >> 16,
                   appid=aid, body=body, truncated=len(body) < plen)
        off += 12 + plen
    if off < n:
        yield dict(offset=off, bad=True, head=data[off:].hex(), tail=True)


def annotate(fr):
    k = (fr['proc'], fr['xy'])
    e = BY_KEY.get(k)
    if e:
        fr['name'] = e['name']
        fr['code_ref'] = '%s:%d' % (e['file'], e['line'])
    pb = PB_BY_KEY.get(k)
    if pb:
        fr['pb_name'] = pb.get('message')
        fr['pb_ref'] = pb.get('proto_file')


def inner_gamem(fr):
    """Decode GameMProtocol wrapper inner cmdid for plaintext bodies."""
    b = fr['body']
    if len(b) < 4:
        return None
    cmdid, mlen = struct.unpack('<HH', b[:4])
    inner = b[4:4 + mlen]
    return dict(cmdid=cmdid, msglen=mlen, inner_len=len(inner),
                inner_name=GAME_CMD.get(cmdid), inner=inner.hex())


def looks_encrypted(body):
    if len(body) < 8:
        return None
    zeros = body.count(0)
    printable = sum(1 for c in body if 32 <= c < 127)
    return zeros / len(body) < 0.15 and printable / len(body) < 0.4


def main():
    for inv_path in sorted(glob.glob(BASE + '/step2/inventory_*.json')):
        inv = json.load(open(inv_path))
        scene = inv['scene']
        eps = set()
        for fl in inv['flows']:
            for ip, port in (tuple(fl['a']), tuple(fl['b'])):
                if ip.startswith('10.'):
                    continue
                if fl['sample_ab'].startswith('0140') or fl['sample_ba'].startswith('0140'):
                    if ip.startswith('198.18.') and not any(True for _ in [1]):
                        pass
                    eps.add((ip, port))
        # drop adb noise flows; keep only endpoints whose sample starts with 0140
        if not eps:
            print(scene, 'no SRS flows')
            continue
        pcap = BASE + '/traffic/' + inv['pcap']
        max_bytes = 2000000000 if 's05' in scene else None
        flows = flow_packets(pcap, eps) if max_bytes is None else None
        # note: flow_packets doesn't support max_bytes; handle s05 separately by skipping (huge)
        if flows is None:
            continue
        scene_msgs = []
        timeline = []
        for (cli, srv), plist in sorted(flows.items()):
            re = reassemble_ts(plist)
            flow_id = '%s:%d-%s:%d' % (cli[0], cli[1], srv[0], srv[1])
            for d in ('c2s', 's2c'):
                data, marks = re[d]
                for fr in split_frames(data):
                    if fr.get('bad'):
                        scene_msgs.append(dict(flow=flow_id, dir=d, **fr))
                        continue
                    fr['ts'] = ts_at(marks, fr['offset'])
                    annotate(fr)
                    body = fr.pop('body')
                    fr['body_hex'] = body.hex() if len(body) <= 64 else body[:64].hex() + '...'
                    fr['enc'] = looks_encrypted(body)
                    if fr['xy'] in (11200, 11201) and fr['proc'] == 1:
                        g = inner_gamem(dict(fr, body=body))
                        if g:
                            fr['gamem'] = g
                    scene_msgs.append(dict(flow=flow_id, dir=d, **fr))
                    timeline.append((fr['ts'] or 0, flow_id, d, fr['proc'], fr['xy'],
                                     fr['len'], fr.get('name') or fr.get('pb_name') or '',
                                     fr.get('gamem', {}).get('cmdid') if fr.get('gamem') else None,
                                     fr.get('gamem', {}).get('inner_name') if fr.get('gamem') else None))
        timeline.sort()
        json.dump(scene_msgs, open(BASE + '/step2/messages_%s.json' % scene, 'w'),
                  ensure_ascii=False, indent=1)
        json.dump([dict(ts=t, flow=f, dir=d, proc=p, xy=x, len=l, name=n,
                        gamem_cmd=c, gamem_name=gn) for t, f, d, p, x, l, n, c, gn in timeline],
                  open(BASE + '/step2/timeline_%s.json' % scene, 'w'), ensure_ascii=False, indent=1)
        named = sum(1 for m in scene_msgs if m.get('name') or m.get('pb_name'))
        print('%s: eps=%s flows=%d frames=%d named=%d' % (
            scene, sorted(eps), len(flows), len(scene_msgs), named))


if __name__ == '__main__':
    main()
