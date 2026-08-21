#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-020 WebView 危险配置组 —— 离线静态断言汇总（只读仓库反编译产物）。

扫描 decompiled/jadx 下 Java 源码中的危险 WebView 配置：
  - setSafeBrowsingEnabled(false)      （YmnH5WebviewActivity.java:60）
  - MIXED_CONTENT_ALWAYS_ALLOW         （YmnH5WebviewActivity.java:81）
  - setAllowFileAccess(true)           （YmnH5WebviewActivity.java:64）
  - setWebContentsDebuggingEnabled(true)（BridgeWebView.java:76）
共 7 个 WebView Activity 涉及（证据：traffic-analysis/step4/vuln_analysis.json VULN-020）。
输出命中表格。纯离线，不联网。
"""
import argparse
import sys
from pathlib import Path

PATTERNS = [
    "setSafeBrowsingEnabled(false)",
    "MIXED_CONTENT_ALWAYS_ALLOW",
    "setAllowFileAccess(true)",
    "setWebContentsDebuggingEnabled(true)",
]

DEFAULT_JADX = Path(__file__).resolve().parents[4] / "decompiled" / "jadx" / "sources"


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-020 扫描 jadx 产物中的危险 WebView 配置并汇总表格（纯离线）"
    )
    ap.add_argument("--jadx-root", default=str(DEFAULT_JADX),
                    help="jadx sources 根目录（默认按脚本位置自动推导）")
    args = ap.parse_args()

    root = Path(args.jadx_root)
    if not root.is_dir():
        print(f"[-] jadx 产物目录不存在: {root}\n    请用 --jadx-root 指定 decompiled/jadx/sources", file=sys.stderr)
        return 2

    rows = []  # (file, {pattern: [line_no,...]})
    for f in sorted(root.rglob("*.java")):
        try:
            lines = f.read_text(encoding="utf-8", errors="replace").splitlines()
        except OSError:
            continue
        found = {}
        for i, line in enumerate(lines, 1):
            for pat in PATTERNS:
                if pat in line:
                    found.setdefault(pat, []).append(i)
        if found:
            rows.append((f.relative_to(root), found))

    print(f"[=] 扫描根目录: {root}")
    print(f"[=] 命中文件数: {len(rows)}\n")
    header = f"{'文件':<70} 危险配置（行号）"
    print(header)
    print("-" * len(header))
    for rel, found in rows:
        detail = "; ".join(f"{pat} @ {','.join(map(str, ln))}" for pat, ln in found.items())
        print(f"{str(rel):<70} {detail}")

    print("\n[+] 结论：以上文件存在危险 WebView 配置（SafeBrowsing 关闭 / 混合内容放行 / "
          "文件访问开启 / 远程调试开启），与 step4 VULN-020 证据互证。")
    print("[!] 本脚本只读仓库反编译产物，未联网。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
