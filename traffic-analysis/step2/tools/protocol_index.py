#!/usr/bin/env python3
"""Extract (XY_ID, processid, protocol name, file, line) from all protocol Lua files."""
import os
import re
import json

ROOT = '/Users/mosc/Downloads/ZJYX/浙江游戏大厅/traffic-analysis/step2/tools/luau8'
DIRS = ['lua-src-apk/app/Protocols', 'hotfix-decrypted/src/app/Protocols',
        'hotfix-decrypted/src/newgold/GoldCommon/Protocols',
        'hotfix-decrypted/src/game/Common/Protocols',
        'hotfix-decrypted/src/GameCommon/Code/GameProtocol',
        'hotfix-decrypted/src/BasicTaiZhouMahjong/Protocols',
        'hotfix-decrypted/src/TaiZhouMahjong/Protocols']

# strategy: track "local NAME = N" consts, then protocol tables "X = {" blocks with XY_ID and processid
entries = []
for d in DIRS:
    dp = os.path.join(ROOT, d)
    if not os.path.isdir(dp):
        continue
    for f in sorted(os.listdir(dp)):
        if not f.endswith('.lua'):
            continue
        path = os.path.join(dp, f)
        lines = open(path, encoding='utf-8').read().splitlines()
        consts = {}
        cur = None  # current table name
        cur_start = 0
        cur_xy = None
        cur_proc = None
        depth = 0
        for i, ln in enumerate(lines, 1):
            m = re.match(r'\s*local\s+(CMDT_\w+|CMD_\w+|[A-Z][A-Z0-9_]{2,})\s*=\s*(\d+)', ln)
            if m:
                consts[m.group(1)] = int(m.group(2))
            m = re.match(r'\s*(?:local\s+)?(\w+(?:\.\w+)?)\s*=\s*\{\s*$', ln)
            if m and depth == 0:
                cur = m.group(1)
                cur_start = i
                cur_xy = None
                cur_proc = None
                depth = 1
                continue
            if depth > 0:
                depth += ln.count('{') - ln.count('}')
                m = re.search(r'XY_ID\s*=\s*(\w+)', ln)
                if m and cur_xy is None:
                    v = m.group(1)
                    cur_xy = consts.get(v, int(v) if v.isdigit() else None)
                m = re.search(r'processid\s*=\s*(\w+)', ln)
                if m and cur_proc is None:
                    v = m.group(1)
                    cur_proc = consts.get(v, int(v) if v.isdigit() else None)
                if depth == 0:
                    if cur_xy is not None:
                        entries.append(dict(name=cur, xy=cur_xy, proc=cur_proc,
                                            file=d + '/' + f, line=cur_start))
                    cur = None
seen = set()
out = []
for e in entries:
    k = (e['xy'], e['proc'], e['name'])
    if k in seen:
        continue
    seen.add(k)
    out.append(e)
out.sort(key=lambda e: ((e['proc'] or 0), e['xy']))
json.dump(out, open(os.path.join(ROOT, '..', 'protocol_index.json'), 'w'),
          ensure_ascii=False, indent=1)
print('protocol structs with XY_ID:', len(out))
from collections import Counter
print('by proc:', Counter(e['proc'] for e in out).most_common())
