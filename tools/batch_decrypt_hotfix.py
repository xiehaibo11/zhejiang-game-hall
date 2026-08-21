#!/usr/bin/env python3
"""Batch-decrypt the 浙江游戏大厅 hotfix tree (hdq container + inner xxtea for .luac)."""
import os
import sys
from multiprocessing import Pool

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from decrypt_hotfix import decrypt_container, decrypt_luac_inner, MAGIC

SRC_ROOT = 'device-files/hotfix'
DST_ROOT = 'hotfix-decrypted'
MAGIC_BYTES = MAGIC


def process(job):
    src, dst, is_luac = job
    data = open(src, 'rb').read()
    out = decrypt_container(data)
    if is_luac and out.startswith(b'devaguopeifei'):
        out = decrypt_luac_inner(out)
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    open(dst, 'wb').write(out)
    # sanity check
    enc = data.startswith(MAGIC_BYTES)
    ok = True
    if enc:
        if is_luac:
            ok = out[:4] in (b'\x1bLua', b'loca', b'--\xef', b'requ') or b'cc.' in out[:300] or len(out) == 0
        elif src.lower().endswith('.png'):
            ok = out[:4] in (b'\x89PNG', b'\xff\xd8\xff\xe0', b'\xff\xd8\xff\xdb') or out[:2] == b'\xff\xd8'
        elif src.lower().endswith('.csb'):
            ok = len(out) > 4
    return src, enc, ok, len(out)


def main():
    jobs = []
    for sub in ('src', 'res'):
        base = os.path.join(SRC_ROOT, sub)
        for root, _, files in os.walk(base):
            for fn in files:
                src = os.path.join(root, fn)
                rel = os.path.relpath(src, SRC_ROOT)
                is_luac = fn.endswith('.luac')
                if is_luac:
                    rel = os.path.splitext(rel)[0] + '.lua'
                jobs.append((src, os.path.join(DST_ROOT, rel), is_luac))
    print('total files: %d' % len(jobs))
    enc = dec_ok = 0
    fails = []
    with Pool(8) as pool:
        for i, (src, was_enc, ok, n) in enumerate(pool.imap_unordered(process, jobs, chunksize=16)):
            if was_enc:
                enc += 1
            if not ok:
                fails.append(src)
            if (i + 1) % 500 == 0:
                print('progress %d/%d' % (i + 1, len(jobs)), flush=True)
    print('done. encrypted=%d, failed=%d' % (enc, len(fails)))
    for f in fails[:30]:
        print('FAIL', f)


if __name__ == '__main__':
    main()
