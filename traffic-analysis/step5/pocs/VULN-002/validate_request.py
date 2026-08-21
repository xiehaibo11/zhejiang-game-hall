#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-002 最小验证：AES-CFB128 固定 IV 逐帧重置 → keystream 复用（纯离线、只读）。

两部分证据，均不触碰网络：

A. 同明文同密文（被动观测，step2 已证实模型的复核）：
   在同一连接内按 (proc, xy, len) 分组统计密文完全相同的帧数。
   s06 实测：IMProtocol.ReqKeepAlive 286 次密文恒定（step4 VULN-002 证据）。

B. 已知明文伪造帧（本地演算，不注入）：
   取一条真实捕获的握手帧（xy=1，明文恒为 01000000），恢复 keystream 前缀
   ks = ct XOR pt；用 ks 构造任意同长度明文 pt2 的合法密文 ct2 = pt2 XOR ks；
   再用 AES-CFB（默认 key/IV）解密 ct2 验证确实解出 pt2 —— 证明攻击者一旦知道
   某帧明文，即可伪造该偏移处的任意密文（在线注入部分 blocked，见 README）。

用法：
  python3 validate_request.py --scene s06_phone_gold_ingame
"""
import argparse
import collections
import json
import os
import shutil
import subprocess
import sys

BASE = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '..'))

# Phase 3 CRYPTO-005：默认 key/IV（握手帧 xy=1 用默认 key，明文恒为 01000000）
DEFAULT_KEY = 'f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b'
DEFAULT_IV = '15ff010034ab4cd355fea122084f1307'


def aes_cfb_decrypt(key_hex, iv_hex, ct):
    bits = len(bytes.fromhex(key_hex)) * 8
    p = subprocess.run(['openssl', 'enc', '-aes-%d-cfb' % bits, '-d', '-K', key_hex,
                        '-iv', iv_hex, '-nopad'], input=ct, capture_output=True)
    if p.returncode != 0:
        raise RuntimeError('openssl 解密失败: %s' % p.stderr.decode(errors='replace'))
    return p.stdout


def part_a(msgs):
    """同连接同 (proc,xy,len) 密文恒定统计。"""
    groups = collections.defaultdict(collections.Counter)
    names = {}
    for e in msgs:
        if not e['enc_body_hex']:
            continue
        k = (e['flow'], e['proc'], e['xy'], e['len'])
        groups[k][e['enc_body_hex']] += 1
        if e.get('name'):
            names[k] = e['name']
    rows = []
    for k, ctr in groups.items():
        total = sum(ctr.values())
        if total >= 3 and len(ctr) == 1:
            rows.append({'flow': k[0], 'proc': k[1], 'xy': k[2], 'len': k[3],
                         'name': names.get(k), 'identical_ciphertext_count': total,
                         'ciphertext_prefix': next(iter(ctr))[:16]})
    rows.sort(key=lambda r: -r['identical_ciphertext_count'])
    return rows


def part_b(msgs):
    """已知明文伪造：用真实握手帧恢复 ks，伪造明文 02000000 的密文并本地验证。"""
    hs = next((e for e in msgs if e['xy'] == 1 and e['len'] == 4 and e['enc_body_hex']), None)
    if not hs:
        return {'ok': False, 'reason': '未找到 xy=1 握手帧'}
    ct = bytes.fromhex(hs['enc_body_hex'])
    pt_known = b'\x01\x00\x00\x00'          # 已由 VULN-001 PoC 证实的常量明文
    ks = bytes(a ^ b for a, b in zip(ct, pt_known))
    pt_forge = b'\x02\x00\x00\x00'          # 攻击者任意选择的同长度明文
    ct_forge = bytes(a ^ b for a, b in zip(pt_forge, ks))
    back = aes_cfb_decrypt(DEFAULT_KEY, DEFAULT_IV, ct_forge)
    return {'ok': back == pt_forge,
            'captured_frame': {'flow': hs['flow'], 'dir': hs['dir'], 'ct': ct.hex()},
            'known_plaintext': pt_known.hex(), 'keystream': ks.hex(),
            'forged_plaintext': pt_forge.hex(), 'forged_ciphertext': ct_forge.hex(),
            'decrypt_check': back.hex()}


def main():
    ap = argparse.ArgumentParser(description='VULN-002 keystream 复用离线验证（不发送任何网络请求）')
    ap.add_argument('--scene', default='s06_phone_gold_ingame')
    ap.add_argument('--out', default='')
    args = ap.parse_args()
    if not shutil.which('openssl'):
        print('FATAL: 需要 openssl'); return 2
    msg_path = os.path.join(BASE, 'step2', 'messages_decrypted_%s.json' % args.scene)
    if not os.path.exists(msg_path):
        print('FATAL: 证据文件不存在: %s' % msg_path); return 2
    msgs = json.load(open(msg_path))

    rows = part_a(msgs)
    forge = part_b(msgs)
    report = {'scene': args.scene,
              'part_a_constant_ciphertext_groups': rows[:10],
              'part_a_total_groups': len(rows),
              'part_b_known_plaintext_forgery': forge}
    ok = len(rows) > 0 and forge.get('ok')
    report['verdict'] = 'PASS' if ok else 'FAIL'
    out = json.dumps(report, ensure_ascii=False, indent=1)
    if args.out:
        open(args.out, 'w').write(out)
        print('证据写入 %s' % args.out)
    print('A. 同明文同密文分组（top5）:')
    for r in rows[:5]:
        print('   %s %s xy=%d len=%d 恒定密文×%d (%s...)' % (
            r['flow'], r['name'] or '?', r['xy'], r['len'],
            r['identical_ciphertext_count'], r['ciphertext_prefix']))
    print('B. 已知明文伪造本地验证: %s' % ('OK ct=' + forge['forged_ciphertext']
          if forge.get('ok') else 'FAILED'))
    print('VERDICT: %s' % report['verdict'])
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
