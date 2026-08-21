#!/usr/bin/env python3
"""浙江游戏大厅 hotfix 资源容器解密器。

容器格式（见 docs/hotfix-container-format.md）:
  0-3   magic 89 77 88 89
  4     0x82
  5     密钥索引 (0-4)
  6-9   小端 uint32 明文大小
  10..  Blowfish-ECB 密文 (8 字节块, 末尾零填充到 8 的倍数)

5 个 Blowfish 密钥来自 assets/local/res.rpk (120 字节 = 5*24),
res.rpk 本身用 btea(XXTEA) 解密, 密钥硬编码于 libcocos2dlua.so (0x131d42c).

.luac 解出容器后内层仍是 APK 格式: "devaguopeifei" + XXTEA(无长度前缀),
密钥 03f1fdcbf5215b45fc790aaf3b965837, 本脚本自动继续解内层。

用法:
  python3 decrypt_hotfix.py <输入文件> <输出文件> [--keep-inner]
"""
import struct
import sys
import os

DELTA = 0x9E3779B9
U32 = 0xFFFFFFFF

MAGIC = b'\x89\x77\x88\x89\x82'
RPK_BTEA_KEY = bytes.fromhex('f84c7b745c8c00ede9d6add6a605cf63')  # so @0x131d42c
XXTEA_SIGN = b'devaguopeifei'
XXTEA_KEY = b'03f1fdcbf5215b45fc790aaf3b965837'

_HERE = os.path.dirname(os.path.abspath(__file__))
DEFAULT_RPK = os.path.join(_HERE, '..', 'assets-apk', 'assets', 'local', 'res.rpk')

# ---------------------------------------------------------------- btea / xxtea

def xxtea_decrypt_block(v, k):
    """标准 btea/XXTEA 解密 (与 so 中 btea 及 tools/decrypt_luac.py 一致)。"""
    n = len(v)
    if n < 2:
        return v
    rounds = 6 + 52 // n
    s = (rounds * DELTA) & U32
    y = v[0]
    while s:
        e = (s >> 2) & 3
        for p in range(n - 1, 0, -1):
            z = v[p - 1]
            mx = ((((z >> 5) ^ ((y << 2) & U32)) + ((y >> 3) ^ ((z << 4) & U32))) & U32) ^ \
                 (((s ^ y) + (k[(p & 3) ^ e] ^ z)) & U32)
            v[p] = (v[p] - mx) & U32
            y = v[p]
        z = v[n - 1]
        mx = ((((z >> 5) ^ ((y << 2) & U32)) + ((y >> 3) ^ ((z << 4) & U32))) & U32) ^ \
             (((s ^ y) + (k[(0 & 3) ^ e] ^ z)) & U32)
        v[0] = (v[0] - mx) & U32
        y = v[0]
        s = (s - DELTA) & U32
    return v


def btea_decrypt_bytes(data, key16):
    v = list(struct.unpack('<%dI' % (len(data) // 4), data))
    k = list(struct.unpack('<4I', key16))
    xxtea_decrypt_block(v, k)
    return struct.pack('<%dI' % len(v), *v)

# ------------------------------------------------------- Blowfish 初始表 (pi)

def _bbp_frac(n):
    """pi 十六进制小数第 n 位(0 起)处的分数值 (BBP 公式)。"""
    def series(j):
        s = 0.0
        for k in range(n + 1):
            s = (s + pow(16, n - k, 8 * k + j) / (8 * k + j)) % 1.0
        t = 0.0
        k = n + 1
        while True:
            term = 16.0 ** (n - k) / (8 * k + j)
            if term < 1e-17:
                break
            t += term
            k += 1
        return (s + t) % 1.0
    return (4 * series(1) - 2 * series(4) - series(5) - series(6)) % 1.0


def _build_bf_tables():
    """P(18)+S(4*256) 共 1042 个 u32, 即 pi 十六进制小数前 8336 位。"""
    hx = []
    while len(hx) < 8336:
        x = _bbp_frac(len(hx))
        for _ in range(8):
            x *= 16
            d = int(x)
            x -= d
            hx.append('0123456789abcdef'[d])
    hx = ''.join(hx[:8336])
    words = [int(hx[i * 8:(i + 1) * 8], 16) for i in range(1042)]
    return words[:18], [words[18 + 256 * i:18 + 256 * (i + 1)] for i in range(4)]

_P_INIT, _S_INIT = None, None


def _tables():
    global _P_INIT, _S_INIT
    if _P_INIT is None:
        _P_INIT, _S_INIT = _build_bf_tables()
    return _P_INIT, _S_INIT

# ------------------------------------------------------------------- Blowfish

def blowfish_key_setup(key):
    p_init, s_init = _tables()
    P = p_init[:]
    S = [box[:] for box in s_init]
    kb = [int.from_bytes(bytes(key[(4 * i + j) % len(key)] for j in range(4)), 'big')
          for i in range(18)]
    for i in range(18):
        P[i] ^= kb[i]

    def F(x):
        return ((S[0][(x >> 24) & 0xff] + S[1][(x >> 16) & 0xff]) & U32
                ^ S[2][(x >> 8) & 0xff]) + S[3][x & 0xff] & U32

    def enc(L, R):
        for i in range(16):
            L ^= P[i]
            R ^= F(L)
            L, R = R, L
        L, R = R, L
        R ^= P[16]
        L ^= P[17]
        return L, R

    L = R = 0
    for i in range(0, 18, 2):
        L, R = enc(L, R)
        P[i], P[i + 1] = L, R
    for b in range(4):
        for i in range(0, 256, 2):
            L, R = enc(L, R)
            S[b][i], S[b][i + 1] = L, R
    return P, S


def blowfish_decrypt(data, P, S):
    """Blowfish ECB, 8 字节块, 块内大端字 (与 so 中 blowfish_decrypt 一致)。"""
    S0, S1, S2, S3 = S
    out = bytearray(len(data))
    for off in range(0, len(data), 8):
        L = int.from_bytes(data[off:off + 4], 'big')
        R = int.from_bytes(data[off + 4:off + 8], 'big')
        for i in range(17, 1, -1):
            L ^= P[i]
            R ^= ((S0[(L >> 24) & 0xff] + S1[(L >> 16) & 0xff]) & U32
                  ^ S2[(L >> 8) & 0xff]) + S3[L & 0xff] & U32
            L, R = R, L
        L, R = R, L
        R ^= P[1]
        L ^= P[0]
        out[off:off + 4] = L.to_bytes(4, 'big')
        out[off + 4:off + 8] = R.to_bytes(4, 'big')
    return bytes(out)

# ------------------------------------------------------------------ 对外接口

_ctx_cache = {}


def load_keys(rpk_path=DEFAULT_RPK):
    """解密 res.rpk, 返回 5 个 (P, S) Blowfish 上下文。"""
    raw = open(rpk_path, 'rb').read()
    if len(raw) % 24 != 0:
        raise ValueError('res.rpk 大小必须是 24 的倍数')
    plain = btea_decrypt_bytes(raw, RPK_BTEA_KEY)
    return [plain[i * 24:(i + 1) * 24] for i in range(len(plain) // 24)]


def decrypt_container(data, rpk_path=DEFAULT_RPK):
    """解 hotfix 容器。无 magic 的文件(如 mp3)原样返回。"""
    if len(data) < 11 or not data.startswith(MAGIC):
        return data
    idx = data[5]
    size = struct.unpack('<I', data[6:10])[0]
    payload = data[10:]
    if idx not in _ctx_cache:
        keys = load_keys(rpk_path)
        for i, kk in enumerate(keys):
            _ctx_cache[i] = blowfish_key_setup(kk)
    P, S = _ctx_cache[idx]
    return blowfish_decrypt(payload, P, S)[:size]


def decrypt_luac_inner(data):
    """APK 同款内层: 'devaguopeifei' + XXTEA (无长度前缀)。"""
    if not data.startswith(XXTEA_SIGN):
        return data
    body = data[len(XXTEA_SIGN):]
    pad = (-len(body)) % 4
    v = list(struct.unpack('<%dI' % (len(body) // 4 + (1 if pad else 0)),
                           body + b'\x00' * pad))
    k = list(struct.unpack('<4I', XXTEA_KEY[:16]))
    xxtea_decrypt_block(v, k)
    return struct.pack('<%dI' % len(v), *v)


def decrypt_file(src, dst, keep_inner=False, rpk_path=DEFAULT_RPK):
    data = open(src, 'rb').read()
    out = decrypt_container(data, rpk_path)
    if not keep_inner:
        out = decrypt_luac_inner(out)
    open(dst, 'wb').write(out)
    return out


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print(__doc__)
        sys.exit(1)
    keep = '--keep-inner' in sys.argv
    argv = [a for a in sys.argv[1:] if a != '--keep-inner']
    out = decrypt_file(argv[0], argv[1], keep_inner=keep)
    print('%s -> %s (%d bytes), head: %s' % (argv[0], argv[1], len(out), out[:16].hex()))
