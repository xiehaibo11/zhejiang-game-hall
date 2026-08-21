#!/usr/bin/env python3
"""cocos2d-x XXTEA luac decryptor (reference MX implementation)."""
import struct
import sys

DELTA = 0x9E3779B9
U32 = 0xFFFFFFFF


def xxtea_decrypt_block(v, k):
    """Decrypt uint32 list v in place with key k (4 uint32)."""
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


def decrypt(data: bytes, key: bytes, strip_sign: bytes = b'', with_len=True):
    if strip_sign and data.startswith(strip_sign):
        data = data[len(strip_sign):]
    pad = (-len(data)) % 4
    v = list(struct.unpack('<%dI' % (len(data) // 4 + (1 if pad else 0)), data + b'\x00' * pad))
    k = list(struct.unpack('<4I', (key + b'\x00' * 16)[:16]))
    v = xxtea_decrypt_block(v, k)
    out = struct.pack('<%dI' % len(v), *v)
    if with_len:
        ln = struct.unpack('<I', out[:4])[0]
        if 0 < ln <= len(out) - 4:
            return out[4:4 + ln]
        return b''  # length check failed -> wrong key/params
    return out


if __name__ == '__main__':
    src, dst = sys.argv[1], sys.argv[2]
    key = sys.argv[3].encode() if len(sys.argv) > 3 else b'03f1fdcbf5215b45fc790aaf3b965837'
    sign = sys.argv[4].encode() if len(sys.argv) > 4 else b'devaguopeifei'
    with_len = not (len(sys.argv) > 5 and sys.argv[5] == 'nolen')
    open(dst, 'wb').write(decrypt(open(src, 'rb').read(), key, sign, with_len))
