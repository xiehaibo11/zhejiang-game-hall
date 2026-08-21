#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-012 AlipayRsa.checkSign 恒真 —— 离线静态断言（offline static assert）。

断言 decompiled/jadx/sources/com/bianfeng/paylib/alipaysdk/executor/AlipayRsa.java 中
checkSign 方法体为 `return 2;`（RESULT_CHECK_SIGN_SUCCEED），输出 PASS/FAIL。
证据：traffic-analysis/step4/vuln_analysis.json（VULN-012）。
纯离线，只读仓库内反编译产物。
"""
import argparse
import re
import sys
from pathlib import Path

REL_TARGET = "decompiled/jadx/sources/com/bianfeng/paylib/alipaysdk/executor/AlipayRsa.java"


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-012 静态断言 AlipayRsa.checkSign 恒返回 2（RESULT_CHECK_SIGN_SUCCEED）"
    )
    ap.add_argument("--repo-root",
                    default=str(Path(__file__).resolve().parents[4]),
                    help="证据根目录（浙江游戏大厅/），默认按脚本位置自动推导")
    args = ap.parse_args()

    target = Path(args.repo_root) / REL_TARGET
    if not target.is_file():
        print(f"[-] 证据文件不存在: {target}\n"
              f"    请确认 --repo-root 指向仓库内 浙江游戏大厅/ 目录", file=sys.stderr)
        return 2

    text = target.read_text(encoding="utf-8", errors="replace")

    m = re.search(r"checkSign\s*\([^)]*\)\s*\{(?P<body>.*?)\n\s*\}", text, re.S)
    if not m:
        print(f"FAIL: 未在 {REL_TARGET} 中定位到 checkSign 方法", file=sys.stderr)
        return 1

    body = m.group("body")
    print(f"[=] checkSign 方法体:\n{body.strip()}")

    # 断言：方法体直接 return 2，且不存在任何真实验签调用
    returns_2 = re.search(r"return\s+2\s*;", body) is not None
    has_real_verify = re.search(r"verify|doCheck|PublicKey|Signature", body) is not None

    if returns_2 and not has_real_verify:
        print("\nPASS: checkSign 恒返回 2（RESULT_CHECK_SIGN_SUCCEED）且无真实验签逻辑 -> VULN-012 静态成立")
        return 0
    print(f"\nFAIL: returns_2={returns_2} has_real_verify={has_real_verify}，"
          "静态证据与预期不符，请人工复核反编译产物", file=sys.stderr)
    return 1


if __name__ == "__main__":
    sys.exit(main())
