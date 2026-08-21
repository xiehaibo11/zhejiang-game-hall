# VULN-011 支付下单签名弱 —— 最小验证 PoC

## 漏洞概述
支付下单使用客户端侧 MD5 拼接签名（PaySignUtils，`decompiled/jadx/sources/com/bianfeng/paylib/...`），
价格等关键字段参与签名但签名密钥在客户端可得；若服务端不重新计价，可低价重签下单。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-011）。

## 前提条件
- 仅本地 Python3 标准库环境。
- 服务端是否重新计价 = 在线行为，blocked_on=no_authorization_online。
- 本 APK Manifest 未见 `YMNSDK_WEBPAY_PRIVATE_KEY`，真实私钥需渠道包确认（见 TODO）；脚本只用占位私钥。

## 所需材料
- `validate_request.py`（本目录）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py --price 6.00 --product-id com.xm.zjgamecenter.gold60000 --tampered-price 0.01`
3. 观察篡改前后两组 MD5 签名输出。

## 预期证据
- 同一算法对原始价格与篡改价格各产出一个合法形态的签名，证明签名不依赖服务端会话。
- 书面结论：签名弱 + 服务端计价未知，风险成立与否待授权在线验证。

## 影响边界（最小影响说明）
- 纯离线字符串与 MD5 计算，使用占位私钥字面量，不产生任何真实可用签名。
- 不联网、不触碰设备、不下任何真实订单。

## 中止条件
- 取得真实渠道私钥后，任何在线下单/重签投递动议立即中止并回到书面报告。
- 涉及真实资金通道的验证一律不做。

## 脚本补齐 TODO
- 真实私钥来源：需人工审计渠道包 Manifest/资源中的 `YMNSDK_WEBPAY_PRIVATE_KEY` 或等价物。
- PaySignUtils 的精确拼接顺序（分隔符、是否 URL 编码、是否含 timestamp/nonce）需人工对照
  `decompiled/jadx/sources/com/bianfeng/paylib/` 下源码复核后修正脚本中的 `pay_sign()`。
