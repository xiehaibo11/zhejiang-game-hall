#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-017 明文 HTTP 敏感参数泄露 —— step2 证据离线汇总（只读，不联网）。

读取 traffic-analysis/step2/http_endpoints.json 的 plaintext_http 列表，
筛出 query/body 中含 token|ssid|sign|password|phone 等敏感参数模式的条目并汇总输出。
证据：traffic-analysis/step2/http_endpoints.json（plaintext_http，78 条）、
traffic-analysis/step4/vuln_analysis.json（VULN-017）。
"""
import argparse
import json
import re
import sys
from pathlib import Path

SENSITIVE_RE = re.compile(r"token|ssid|sign|password|phone|session|secret|key", re.I)

DEFAULT_INPUT = Path(__file__).resolve().parents[4] / "traffic-analysis" / "step2" / "http_endpoints.json"


def entry_text(e: dict) -> str:
    parts = [str(e.get("query", "")), str(e.get("body_summary", "")),
             str(e.get("host", "")), str(e.get("path", ""))]
    return " ".join(parts)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-017 从 step2 http_endpoints.json 汇总明文 HTTP 中的敏感参数条目（只读，不联网）"
    )
    ap.add_argument("--input", default=str(DEFAULT_INPUT),
                    help="http_endpoints.json 路径（默认按脚本位置自动推导）")
    args = ap.parse_args()

    src = Path(args.input)
    if not src.is_file():
        print(f"[-] 证据文件不存在: {src}\n"
              "    请用 --input 指定 traffic-analysis/step2/http_endpoints.json", file=sys.stderr)
        return 2

    data = json.loads(src.read_text(encoding="utf-8"))
    entries = data.get("plaintext_http")
    if not isinstance(entries, list):
        print("[-] 证据文件中未找到 plaintext_http 列表", file=sys.stderr)
        return 2

    hits = []
    for e in entries:
        text = entry_text(e)
        m = SENSITIVE_RE.search(text)
        if m:
            hits.append((m.group(0), e))

    print(f"[=] plaintext_http 总条目: {len(entries)}，敏感模式命中: {len(hits)}\n")
    for i, (kw, e) in enumerate(hits, 1):
        print(f"--- [{i}] 命中关键词: {kw}")
        print(f"    scene : {e.get('scene')}  pcap: {e.get('pcap')}")
        print(f"    {e.get('method')} http://{e.get('host')}{e.get('path')}")
        if e.get("query"):
            print(f"    query : {e.get('query')}")
        if e.get("body_summary"):
            print(f"    body  : {e.get('body_summary')}")
        if e.get("attribution"):
            print(f"    attrib: {e.get('attribution')}")

    print("\n[+] 结论：以上条目经明文 HTTP 传输且含敏感参数形态，可被同网段被动嗅探获取。")
    print("[!] 嗅探证据已由 step2 授权抓包闭环；主动篡改 blocked_on=no_authorization_online。本脚本只读未联网。")
    return 0


if __name__ == "__main__":
    sys.exit(main())
