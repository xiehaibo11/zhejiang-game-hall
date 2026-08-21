#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-009 RePlugin 关闭签名校验 —— 本地 md5 自洽演示（partial PoC，纯离线）。

证据背景：
  - RePlugin 宿主关闭插件签名校验 setVerifySign(false)，插件仅以 md5 校验完整性，
    而 md5 与插件同通道下发——篡改者同时改插件与 md5 即自洽。
  - 证据：traffic-analysis/step4/vuln_analysis.json（VULN-009，setVerifySign(false)）。

边界（重要）：
  - 本脚本不联网、不安装任何插件；只对本地文件做「改 1 字节 -> 重算 md5」的语义演示。
  - 真实投递（替换插件 + 替换 md5）= blocked_on no_authorization_online。
"""
import argparse
import hashlib
import sys
from pathlib import Path


def md5_of(b: bytes) -> str:
    return hashlib.md5(b).hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-009 演示「md5 与文件同通道下发即自洽」的校验语义（纯离线）"
    )
    ap.add_argument("--file", required=True, help="本地任意文件（模拟插件包）")
    ap.add_argument("--offset", type=int, default=0, help="篡改字节偏移，默认 0")
    args = ap.parse_args()

    p = Path(args.file)
    if not p.is_file():
        print(f"[-] --file 不存在: {p}", file=sys.stderr)
        return 2

    data = bytearray(p.read_bytes())
    if not (0 <= args.offset < len(data)):
        print(f"[-] --offset 超出文件范围 [0,{len(data)})", file=sys.stderr)
        return 2

    orig_md5 = md5_of(bytes(data))
    data[args.offset] ^= 0x01
    tampered_md5 = md5_of(bytes(data))

    print(f"[=] 原始文件        : {p}")
    print(f"[=] 原始 md5        : {orig_md5}")
    print(f"[=] 篡改偏移 {args.offset} 后 md5: {tampered_md5}")
    print()
    print("[模拟校验语义] 下发方同时给出「文件 + md5」时：")
    print(f"    客户端算得文件 md5 = {tampered_md5}")
    print(f"    同通道下发的 md5   = {tampered_md5}  -> 比对 PASS")
    print()
    print("[+] 结论：文件与 md5 同源下发，md5 不构成独立信任锚；配合 setVerifySign(false)，"
          "插件可被整体替换（证据 step4/vuln_analysis.json VULN-009）。")
    print("[!] 真实投递（替换插件及 md5 的下发）= blocked_on no_authorization_online；本脚本未联网。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
