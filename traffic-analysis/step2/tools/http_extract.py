#!/usr/bin/env python3
"""Extract plaintext HTTP exchanges from scene pcaps.

Reads each pcap, groups TCP packets into flows, reassembles both directions,
detects HTTP requests (method token at stream start) and parses request +
response. Emits JSON to stdout.

Usage: python3 http_extract.py <scene=pcap_path> ...
"""
import json
import re
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pcap_lib import read_pcap, reassemble  # noqa: E402

METHODS = (b'GET ', b'POST ', b'PUT ', b'HEAD ', b'DELETE ', b'OPTIONS ',
           b'PATCH ', b'CONNECT ')
INTERESTING_HEADERS = ['host', 'user-agent', 'content-type', 'content-length',
                       'referer', 'x-', 'cookie', 'authorization', 'accept',
                       'accept-encoding']


def split_headers(raw):
    """Split header block; returns (first_line, dict-of-headers, rest)."""
    idx = raw.find(b'\r\n\r\n')
    if idx < 0:
        idx2 = raw.find(b'\n\n')
        if idx2 < 0:
            return None, None, raw
        head, rest = raw[:idx2], raw[idx2 + 2:]
    else:
        head, rest = raw[:idx], raw[idx + 4:]
    lines = head.split(b'\n')
    first = lines[0].strip().decode('latin1')
    headers = {}
    for ln in lines[1:]:
        ln = ln.strip()
        if b':' in ln:
            k, v = ln.split(b':', 1)
            headers[k.decode('latin1').strip().lower()] = v.decode('latin1').strip()
    return first, headers, rest


def parse_requests(data, limit=8):
    """Parse pipelined/sequential HTTP requests from a client stream."""
    out = []
    pos = 0
    while pos < len(data) and len(out) < limit:
        if not any(data.startswith(m, pos) for m in METHODS):
            # skip ahead to next candidate
            nxt = min((data.find(m, pos + 1) for m in METHODS
                       if data.find(m, pos + 1) >= 0), default=-1)
            if nxt < 0:
                break
            pos = nxt
        first, headers, rest = split_headers(data[pos:])
        if first is None:
            break
        consumed = len(data[pos:]) - len(rest)
        body = b''
        clen = headers.get('content-length')
        if clen and clen.isdigit():
            n = int(clen)
            body = rest[:n]
            consumed += n
        out.append((first, headers, body))
        pos += consumed
    return out


def parse_responses(data, limit=8):
    out = []
    pos = 0
    while pos < len(data) and len(out) < limit:
        if not data.startswith(b'HTTP/', pos):
            nxt = data.find(b'HTTP/', pos + 1)
            if nxt < 0:
                break
            pos = nxt
        first, headers, rest = split_headers(data[pos:])
        if first is None:
            break
        consumed = len(data[pos:]) - len(rest)
        clen = headers.get('content-length')
        body = b''
        if clen and clen.isdigit():
            n = int(clen)
            body = rest[:n]
            consumed += n
        else:
            body = rest[:200]
        out.append((first, headers, body))
        pos += consumed
    return out


def summarize_body(body, limit=200):
    if not body:
        return ''
    text = body[:limit].decode('utf-8', 'replace')
    return text


def main():
    results = []
    for arg in sys.argv[1:]:
        scene, pcap_path = arg.split('=', 1)
        flows = {}
        first_ts = {}
        for p in read_pcap(pcap_path):
            if p['proto'] != 'tcp' or not p['payload']:
                continue
            a = (p['src'], p['sport'])
            b = (p['dst'], p['dport'])
            key = (a, b) if a <= b else (b, a)
            flows.setdefault(key, []).append(p)
            first_ts.setdefault(key, p['ts'])
        for (a, b), pkts in sorted(flows.items(), key=lambda kv: first_ts[kv[0]]):
            a2b, b2a, _, _ = reassemble(pkts, a, b)
            # figure which side is the client (starts with a method)
            for c2s, s2c, client, server in ((a2b, b2a, a, b), (b2a, a2b, b, a)):
                if not any(c2s.startswith(m) for m in METHODS):
                    continue
                reqs = parse_requests(c2s)
                resps = parse_responses(s2c)
                for i, (first, headers, body) in enumerate(reqs):
                    parts = first.split(' ')
                    if len(parts) < 2:
                        continue
                    method, target = parts[0], parts[1]
                    path, _, query = target.partition('?')
                    ih = {k: v for k, v in headers.items()
                          if any(k.startswith(p) for p in INTERESTING_HEADERS)}
                    resp = resps[i] if i < len(resps) else None
                    results.append({
                        'scene': scene,
                        'pcap': os.path.basename(pcap_path),
                        'flow': {'client': list(client), 'server': list(server)},
                        'first_ts': first_ts[(a, b)],
                        'method': method,
                        'host': headers.get('host', ''),
                        'path': path[:300],
                        'query': query[:500],
                        'headers_interesting': ih,
                        'body_summary': summarize_body(body),
                        'response_status': resp[0] if resp else None,
                        'response_summary': summarize_body(resp[2]) if resp else '',
                        'req_stream_bytes': len(c2s),
                        'resp_stream_bytes': len(s2c),
                    })
                break
    json.dump(results, sys.stdout, ensure_ascii=False, indent=1)
    print()


if __name__ == '__main__':
    main()
