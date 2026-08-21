#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-003 SRS 帧无 MAC —— 离线比特翻转演示（partial PoC）。

证据背景（Phase 3 已还原）：
  - SRS 帧头 12 字节：[dir:1B(1=c2s,0=s2c)][flag 0x40|0x80][len:u16le][xy:u16le][proc:u16le][appid:u32le]] + body(len 字节)
  - 默认 AES-256-CFB128 key/iv 见下（libcocos2dlua.so vaddr 0x11f55ec/0x11f560c，每帧 IV 重置）
  - 帧体无 MAC/完整性校验：翻转密文 1 bit，CFB 解密后对应明文块按位损坏，
    若服务端仍按字段解析即构成可篡改证据（证据：traffic-analysis/step4/vuln_analysis.json VULN-003）。

边界（重要）：
  - 在线注入/篡改帧 = blocked_on no_authorization_online，本脚本不做任何发送。
  - 本脚本仅对一段本地已知帧做「解密 -> 翻转 -> 再解密」的离线对比，演示无 MAC 的后果。

帧样例来源：traffic-analysis/step2 抓包还原（step2/frame_report.json、step2/flows/）。
本脚本不内置真实抓包密文，需用 --frame-hex 传入 step2 已证实的帧 hex。
"""
import argparse
import shutil
import subprocess
import sys

# Phase 3 还原的默认 SRS 加密参数（so vaddr 0x11f55ec / 0x11f560c，每帧 IV 重置）
DEFAULT_KEY_HEX = "f362120513e389ff2311d7360123100705a210007acc023c3901da2ecb12448b"
DEFAULT_IV_HEX = "15ff010034ab4cd355fea122084f1307"

HEADER_LEN = 12  # [dir:1][flag:1][len:u16le][xy:u16le][proc:u16le][appid:u32le]


def openssl_cfb_decrypt(data: bytes, key_hex: str, iv_hex: str, openssl: str) -> bytes:
    cmd = [openssl, "enc", "-d", "-aes-256-cfb", "-K", key_hex, "-iv", iv_hex]
    p = subprocess.run(cmd, input=data, capture_output=True)
    if p.returncode != 0:
        raise RuntimeError("openssl 解密失败: " + p.stderr.decode(errors="replace"))
    return p.stdout


def printable(b: bytes) -> str:
    return "".join(chr(c) if 32 <= c < 127 else "." for c in b)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-003 离线比特翻转演示：解密 SRS 帧体，翻转 1 bit，对比明文差异（纯离线，不发送任何数据）"
    )
    ap.add_argument("--frame-hex", required=True,
                    help="完整 SRS 帧 hex（含 12 字节帧头），取自 step2 已证实样例")
    ap.add_argument("--key", default=DEFAULT_KEY_HEX,
                    help="AES-256-CFB key hex（默认 Phase 3 还原的 SRS 默认 key）")
    ap.add_argument("--iv", default=DEFAULT_IV_HEX,
                    help="IV hex（默认 Phase 3 还原的 SRS 默认 IV）")
    ap.add_argument("--flip-offset", type=int, default=0,
                    help="在帧体（body）内的翻转字节偏移，默认 0")
    ap.add_argument("--flip-mask", type=lambda s: int(s, 0), default=0x01,
                    help="翻转掩码（如 0x01），默认 0x01")
    args = ap.parse_args()

    openssl = shutil.which("openssl")
    if not openssl:
        print("[-] 未找到 openssl，请先安装（macOS: brew install openssl 或用系统自带）", file=sys.stderr)
        return 2

    try:
        frame = bytes.fromhex(args.frame_hex)
    except ValueError:
        print("[-] --frame-hex 不是合法 hex 字符串", file=sys.stderr)
        return 2
    if len(frame) <= HEADER_LEN:
        print("[-] 帧长度不足（需 > 12 字节帧头）", file=sys.stderr)
        return 2

    direction, flag = frame[0], frame[1]
    body_len = int.from_bytes(frame[2:4], "little")
    xy = int.from_bytes(frame[4:6], "little")
    proc = int.from_bytes(frame[6:8], "little")
    appid = int.from_bytes(frame[8:12], "little")
    body = frame[HEADER_LEN:HEADER_LEN + body_len]
    print(f"[=] 帧头: dir={direction}({'c2s' if direction == 1 else 's2c'}) flag=0x{flag:02x} "
          f"len={body_len} xy={xy} proc={proc} appid={appid}")
    if len(body) != body_len:
        print(f"[!] 警告: 实际 body 长度 {len(body)} 与帧头 len={body_len} 不一致，按实际长度继续")

    if not (0 <= args.flip_offset < len(body)):
        print(f"[-] --flip-offset {args.flip_offset} 超出 body 范围 [0,{len(body)})", file=sys.stderr)
        return 2

    before = openssl_cfb_decrypt(body, args.key, args.iv, openssl)

    tampered = bytearray(body)
    tampered[args.flip_offset] ^= args.flip_mask
    after = openssl_cfb_decrypt(bytes(tampered), args.key, args.iv, openssl)

    print("\n[=] 翻转前明文 (hex):", before.hex())
    print("[=] 翻转前明文 (可读):", printable(before))
    print(f"\n[=] 已在 body 偏移 {args.flip_offset} 处 XOR 0x{args.flip_mask:02x}")
    print("[=] 翻转后明文 (hex):", after.hex())
    print("[=] 翻转后明文 (可读):", printable(after))

    diff = [i for i in range(min(len(before), len(after))) if before[i] != after[i]]
    print(f"\n[+] 明文差异字节偏移: {diff if diff else '(无——请检查 key/iv 或帧体是否加密）'}")
    print("[+] 结论演示：帧体无 MAC，任何 bit 翻转都不会被协议层拒绝；"
          "服务端是否据此产生越权行为属于在线验证范畴。")
    print("[!] 在线注入篡改帧 = blocked_on no_authorization_online，本脚本未发送任何数据。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
