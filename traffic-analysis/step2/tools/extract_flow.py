#!/usr/bin/env python3
"""Extract one TCP flow's reassembled streams from a pcap.

Usage: extract_flow.py <pcap> <ip> <port> <peerip> <peerport> <outprefix>
Writes <outprefix>.c2s.bin / .s2c.bin and prints head hex.
"""
import sys

sys.path.insert(0, '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis/step2/tools')
from pcap_lib import read_pcap, reassemble


def main():
    path, ip, port, pip, pport, out = sys.argv[1:6] + [sys.argv[6]]
    a = (ip, int(port))
    b = (pip, int(pport))
    pkts = []
    for p in read_pcap(path):
        if p['proto'] != 'tcp':
            continue
        if ((p['src'], p['sport']) == a and (p['dst'], p['dport']) == b) or \
           ((p['src'], p['sport']) == b and (p['dst'], p['dport']) == a):
            pkts.append(p)
    c2s, s2c, segc, segs = reassemble(pkts, a, b)
    open(out + '.c2s.bin', 'wb').write(c2s)
    open(out + '.s2c.bin', 'wb').write(s2c)
    print('c2s %d bytes (%d segs), s2c %d bytes (%d segs)' % (len(c2s), len(segc), len(s2c), len(segs)))
    print('c2s head:', c2s[:128].hex())
    print('s2c head:', s2c[:128].hex())


if __name__ == '__main__':
    main()
