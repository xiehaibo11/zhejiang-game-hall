#!/usr/bin/env python3
"""Per-scene connection inventory from pcap.

Usage: inventory.py <pcap> <scene> <out.json> [max_bytes]
"""
import json
import struct
import sys
import time

sys.path.insert(0, '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis/step2/tools')
from pcap_lib import read_pcap, parse_sni, parse_dns

HTTP_METHODS = (b'GET ', b'POST ', b'PUT ', b'HEAD ', b'OPTIONS ', b'DELETE ', b'HTTP/')


def flow_key(p):
    a = (p['src'], p['sport'])
    b = (p['dst'], p['dport'])
    return (a, b) if a <= b else (b, a)


def main():
    path, scene, out = sys.argv[1], sys.argv[2], sys.argv[3]
    max_bytes = int(sys.argv[4]) if len(sys.argv) > 4 else None
    flows = {}
    dns_map = {}        # ip -> hostname
    dns_queries = {}    # hostname -> [ips]
    npkts = 0
    t0 = time.time()
    for p in read_pcap(path, max_bytes=max_bytes):
        npkts += 1
        if p['proto'] == 'udp' and (p['sport'] == 53 or p['dport'] == 53):
            r = parse_dns(p['payload'])
            if r:
                qr, answers = r
                for name, ip in answers:
                    dns_map.setdefault(ip, name)
                    dns_queries.setdefault(name, [])
                    if ip not in dns_queries[name]:
                        dns_queries[name].append(ip)
        if p['proto'] != 'tcp':
            continue
        k = flow_key(p)
        fl = flows.get(k)
        if fl is None:
            fl = dict(scene=scene, a=list(k[0]), b=list(k[1]), pkts=0,
                      bytes=0, bytes_ab=0, bytes_ba=0, first_ts=p['ts'],
                      last_ts=p['ts'], syn=False, sni=None, http_hint=None,
                      sample_ab='', sample_ba='', n_payload_ab=0, n_payload_ba=0)
            flows[k] = fl
        fl['pkts'] += 1
        fl['bytes'] += len(p['payload'])
        fl['last_ts'] = p['ts']
        if p['flags'] & 0x02:
            fl['syn'] = True
        if p['payload']:
            ab = (p['src'], p['sport']) == k[0]
            if ab:
                fl['bytes_ab'] += len(p['payload'])
                fl['n_payload_ab'] += 1
                if not fl['sample_ab']:
                    fl['sample_ab'] = p['payload'][:96].hex()
            else:
                fl['bytes_ba'] += len(p['payload'])
                fl['n_payload_ba'] += 1
                if not fl['sample_ba']:
                    fl['sample_ba'] = p['payload'][:96].hex()
            if fl['sni'] is None and (p['dport'] == 443 or p['sport'] == 443):
                s = parse_sni(p['payload'])
                if s:
                    fl['sni'] = s
            if fl['http_hint'] is None and p['payload'][:8].startswith(HTTP_METHODS):
                fl['http_hint'] = p['payload'][:200].decode('latin1', 'replace').split('\r\n')[0]
    out_flows = []
    for k, fl in flows.items():
        a, b = k
        for ip, port in (a, b):
            if ip in dns_map:
                fl.setdefault('names', {})[ip] = dns_map[ip]
        out_flows.append(fl)
    out_flows.sort(key=lambda f: -f['bytes'])
    result = dict(
        scene=scene, pcap=path.split('/')[-1], max_bytes=max_bytes,
        packets=npkts, tcp_flows=len(out_flows),
        elapsed_sec=round(time.time() - t0, 1),
        flows=out_flows,
        dns_map=dns_map,
        dns_queries=dns_queries,
    )
    with open(out, 'w') as fp:
        json.dump(result, fp, ensure_ascii=False, indent=1)
    print('%s: %d pkts, %d tcp flows, %d dns ips, %.1fs'
          % (scene, npkts, len(out_flows), len(dns_map), time.time() - t0))


if __name__ == '__main__':
    main()
