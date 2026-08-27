#!/usr/bin/env python3
"""Cocos Creator 2.x jsc 批量解密器。
来源: 浙江游戏大厅插件 com.daren.goldzj (libcocos2djs.so)
  key  = "D76E842930B0B153" (AppDelegate::applicationDidFinishLaunching @ 0x756cf8)
  管线 = xxtea_decrypt(标准BTEA, key, 16) -> gzip inflate -> JS 明文
  长度: xxtea-c 变体, 明文长度存在 words 数组末尾(加密时附加), 解密后 words[-1] = len
用法:
  python3 decrypt_jsc.py <in.jsc> [key]        单文件验证
  python3 decrypt_jsc.py --batch <目录或列表>   批量
  python3 decrypt_jsc.py --batch <目录> --save <outdir> <前缀路径>
    解密成功的同时把明文写成 .js 归档到 outdir/<前缀>/<相对路径>.js
"""
import sys
import gzip
import struct
import zlib
from pathlib import Path

DELTA = 0x9E3779B9

def to_words(b: bytes):
    n = (len(b) + 3) // 4
    w = [0] * n
    for i, c in enumerate(b):
        w[i >> 2] |= c << ((i & 3) << 3)
    return w

def to_bytes(w, length):
    out = bytearray(length)
    for i in range(length):
        out[i] = (w[i >> 2] >> ((i & 3) << 3)) & 0xFF
    return bytes(out)

def btea_decrypt(v, k):
    n = len(v) - 1
    if n < 1:
        return v
    q = 6 + 52 // (n + 1)
    total = (q * DELTA) & 0xFFFFFFFF
    y = v[0]
    while total != 0:
        e = (total >> 2) & 3   # ubfx w13,w9,#2,#2 @0x811508
        for p in range(n, 0, -1):
            z = v[p - 1]
            mx = (((z >> 5) ^ ((y << 2) & 0xFFFFFFFF)) + ((y >> 3) ^ ((z << 4) & 0xFFFFFFFF))) ^ ((total ^ y) + (k[(p & 3) ^ e] ^ z))
            v[p] = (v[p] - mx) & 0xFFFFFFFF
            y = v[p]
        z = v[n]
        mx = (((z >> 5) ^ ((y << 2) & 0xFFFFFFFF)) + ((y >> 3) ^ ((z << 4) & 0xFFFFFFFF))) ^ ((total ^ y) + (k[(0 & 3) ^ e] ^ z))
        v[0] = (v[0] - mx) & 0xFFFFFFFF
        y = v[0]
        total = (total - DELTA) & 0xFFFFFFFF
    return v

def fix_key(key: bytes):
    return (key + b"\x00" * 16)[:16]

def xxtea_decrypt(data: bytes, key: bytes):
    if len(data) < 8:
        return None
    k = to_words(fix_key(key))
    v = btea_decrypt(to_words(data), k)
    plain_len = v[-1]
    n_words = len(v) - 1
    if plain_len > n_words * 4 or plain_len == 0:
        return None
    return to_bytes(v, plain_len)

def maybe_gunzip(b: bytes):
    if b[:2] == b"\x1f\x8b":
        try:
            return gzip.decompress(b), "gzip"
        except Exception:
            try:
                return zlib.decompress(b, 16 + zlib.MAX_WBITS), "gzip-zlib"
            except Exception:
                return b, "gzip?deflate-fail"
    return b, "raw"

def decrypt_jsc_file(path, key=b"D76E842930B0B153"):
    raw = Path(path).read_bytes()
    dec = xxtea_decrypt(raw, key)
    if dec is None:
        return None, "xxtea-fail", raw
    plain, mode = maybe_gunzip(dec)
    return plain, mode, raw

def looks_like_js(b: bytes):
    head = b[:64].lstrip()
    return head.startswith((b"window._CCSettings", b"(function", b"function", b"var ", b"let ", b"const ", b"\"use ", b"'use ", b"!function", b"window.", b"/*", b"//!", b"require", b"cc."))

if __name__ == "__main__":
    key = b"D76E842930B0B153"
    args = sys.argv[1:]
    save_dir = None
    save_prefix = None
    if "--save" in args:
        i = args.index("--save")
        save_dir = Path(args[i + 1])
        args = args[:i] + args[i + 2:]
    if save_dir is not None and args:
        last = Path(args[-1])
        if last.is_dir() or last.suffix == ".jsc":
            save_prefix = None  # 未指定前缀
    # --save outdir prefix 语法: --batch ... --save <outdir> 后跟目录参数末尾的那个作为 prefix
    if args and args[0] == "--batch":
        rest = args[1:]
        if rest and not rest[-1].endswith(".jsc") and not Path(rest[-1]).is_dir() and save_dir is not None:
            save_prefix = rest[-1]
            rest = rest[:-1]
        targets = []
        for a in rest:
            p = Path(a)
            if p.is_dir():
                targets += sorted(p.rglob("*.jsc"))
            else:
                targets.append(p)
        ok = fail = 0
        for t in targets:
            plain, mode, raw = decrypt_jsc_file(t, key)
            if plain is not None and (mode.startswith("gzip") or looks_like_js(plain)):
                tag = "JS" if looks_like_js(plain) else "gzip-nojs?"
                print(f"[OK] {t}  {len(raw)}B -> {len(plain)}B ({mode},{tag})  head={plain[:48]!r}")
                if save_dir is not None:
                    rel = Path(t).with_suffix("").as_posix()
                    # 去掉源根前缀(目录参数本身)得到纯相对路径
                    rel_parts = Path(t).resolve().parts
                    base_parts = None
                    for a in rest:
                        ap = Path(a).resolve()
                        if ap.is_dir():
                            rp = Path(t).resolve().relative_to(ap)
                            base_parts = rp
                            break
                    rp = base_parts if base_parts is not None else Path(t).name
                    out = (save_dir / (save_prefix or "") / rp).with_suffix(".js")
                    out.parent.mkdir(parents=True, exist_ok=True)
                    out.write_bytes(plain)
                    print(f"     -> {out}")
                ok += 1
            else:
                print(f"[FAIL] {t}  plain={plain[:32] if plain else None!r}")
                fail += 1
        print(f"\n总计: OK={ok} FAIL={fail}")
    else:
        p = sys.argv[1]
        if len(sys.argv) > 2:
            key = sys.argv[2].encode()
        plain, mode, raw = decrypt_jsc_file(p, key)
        print(f"文件: {p} ({len(raw)}B)  模式: {mode}")
        if plain:
            print(f"解密后 ({len(plain)}B) 前 400 字节:")
            print(plain[:400].decode("utf-8", "replace"))
        else:
            print("xxtea 解密失败(长度校验不过)")
