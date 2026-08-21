#!/usr/bin/env python3
"""Split reassembled SRS stream into frames.

Frame hypothesis: [magic:2 = 0x0140 LE? bytes '01 40'] [len:u16le] [msgid:u32le] [appid:u32le] [payload:len]
Usage: srs_split.py <binfile> [--hex N]
"""
import struct
import sys


def split(data):
    off = 0
    frames = []
    while off + 12 <= len(data):
        magic = data[off:off + 2]
        if magic != b'\x01\x40':
            frames.append(('BADMAGIC@%d' % off, data[off:off + 16].hex()))
            break
        plen = struct.unpack('<H', data[off + 2:off + 4])[0]
        msgid = struct.unpack('<I', data[off + 4:off + 8])[0]
        appid = struct.unpack('<I', data[off + 8:off + 12])[0]
        body = data[off + 12:off + 12 + plen]
        frames.append(dict(offset=off, len=plen, msgid=msgid, appid=appid,
                           body=body, truncated=len(body) < plen))
        off += 12 + plen
    return frames, off


def main():
    data = open(sys.argv[1], 'rb').read()
    frames, consumed = split(data)
    print('total %d bytes, %d frames, consumed %d' % (len(data), len(frames), consumed))
    for f in frames:
        if isinstance(f, tuple):
            print(' ', f)
            break
        print('  @%6d len=%5d msgid=%5d appid=%5d%s body=%s%s' % (
            f['offset'], f['len'], f['msgid'], f['appid'],
            ' TRUNC' if f['truncated'] else '',
            f['body'][:24].hex(), '...' if f['len'] > 24 else ''))


if __name__ == '__main__':
    main()
