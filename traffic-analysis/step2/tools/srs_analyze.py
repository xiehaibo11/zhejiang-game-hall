#!/usr/bin/env python3
"""Split all flows in step2/flows/*.bin into frames; report msgid histograms and gaps.

Usage: srs_analyze.py
"""
import glob
import json
import os
import struct
import sys

BASE = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis/step2/flows'


def split(data):
    off = 0
    frames = []
    while off + 12 <= len(data):
        if data[off] != 0x01 and data[off] != 0x00:
            frames.append(dict(offset=off, bad=data[off:off + 24].hex()))
            break
        if data[off + 1] != 0x40:
            frames.append(dict(offset=off, bad=data[off:off + 24].hex()))
            break
        plen = struct.unpack('<H', data[off + 2:off + 4])[0]
        msgid = struct.unpack('<I', data[off + 4:off + 8])[0]
        appid = struct.unpack('<I', data[off + 8:off + 12])[0]
        body = data[off + 12:off + 12 + plen]
        frames.append(dict(offset=off, len=plen, msgid=msgid, appid=appid,
                           body=body.hex(), truncated=len(body) < plen))
        off += 12 + plen
    return frames, off


def zero_runs(data, minlen=64):
    runs = []
    i = 0
    while i < len(data):
        if data[i] == 0:
            j = i
            while j < len(data) and data[j] == 0:
                j += 1
            if j - i >= minlen:
                runs.append((i, j - i))
            i = j
        else:
            i += 1
    return runs


report = {}
for f in sorted(glob.glob(BASE + '/*.bin')):
    name = os.path.basename(f)
    data = open(f, 'rb').read()
    frames, consumed = split(data)
    bad = [fr for fr in frames if 'bad' in fr]
    good = [fr for fr in frames if 'bad' not in fr]
    hist = {}
    for fr in good:
        hist[fr['msgid']] = hist.get(fr['msgid'], 0) + 1
    report[name] = dict(
        total=len(data), frames=len(good), consumed=consumed,
        bad=bad[:1], zero_runs=zero_runs(data),
        msgid_hist=dict(sorted(hist.items(), key=lambda kv: -kv[1])),
    )
    print('%s: %dB %d frames consumed=%d bad=%d zeroruns=%s' % (
        name, len(data), len(good), consumed, len(bad), report[name]['zero_runs']))
    top = list(report[name]['msgid_hist'].items())[:15]
    print('   top msgids:', top)

json.dump(report, open(BASE + '/../frame_report.json', 'w'), indent=1)
