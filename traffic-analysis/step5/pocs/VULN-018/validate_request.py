#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-018 logcat 泄露 session/token —— 授权测试设备 adb 抓取检索（dry-run 默认）。

证据背景：
  - App 内 20+ 处 print 无门控输出 session/token 等敏感信息
    （证据：traffic-analysis/step4/vuln_analysis.json VULN-018）。

边界：
  - 仅限授权的本地测试设备；默认 dry-run 只打印命令，POC_CONFIRM=YES 才执行。
  - 只读取设备本地 logcat，不发送任何网络请求。
"""
import argparse
import os
import re
import shutil
import subprocess
import sys

PATTERN = re.compile(r"ssid|token|session|password|验证码|verifycode|smscode", re.I)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-018 抓取授权测试设备 logcat 并检索敏感信息泄露（dry-run 默认）"
    )
    ap.add_argument("--serial", required=True, help="adb 设备序列号（授权测试设备）")
    ap.add_argument("--pkg-tag", default="",
                    help="可选：额外按包名过滤（logcat --pid 需先取 pid，TODO 简化未实现）")
    args = ap.parse_args()

    adb = shutil.which("adb")
    if not adb:
        print("[-] 未找到 adb，请先安装 Android platform-tools 并加入 PATH", file=sys.stderr)
        return 2

    cmd = [adb, "-s", args.serial, "logcat", "-d"]
    print("[=] 待执行命令:\n    " + " ".join(cmd))
    print("[=] 检索模式:", PATTERN.pattern)

    if os.environ.get("POC_CONFIRM") != "YES":
        print("\n[dry-run] 未设置 POC_CONFIRM=YES，仅打印命令不执行。"
              "确认目标为授权测试设备后：POC_CONFIRM=YES python3 validate_request.py --serial <序列号>")
        return 0

    print("[+] POC_CONFIRM=YES，执行（仅限授权测试设备）...")
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    if p.returncode != 0:
        print(p.stderr, file=sys.stderr)
        return p.returncode

    hits = [line for line in p.stdout.splitlines() if PATTERN.search(line)]
    print(f"\n[+] logcat 总行数: {len(p.stdout.splitlines())}，敏感模式命中: {len(hits)}")
    for line in hits[:100]:  # 截断展示，完整内容人工复核
        print("    " + line[:300])
    if len(hits) > 100:
        print(f"    ... 其余 {len(hits) - 100} 行省略，请人工导出复核")
    print("\n[+] 结论：命中行即敏感信息进入 logcat 的直接证据（任何有日志读取能力的同机应用/调试通道可见）。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
