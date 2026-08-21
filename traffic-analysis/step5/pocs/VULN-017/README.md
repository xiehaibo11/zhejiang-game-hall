# VULN-017 明文 HTTP 敏感参数泄露 —— 最小验证 PoC

## 漏洞概述
App 存在大量明文 HTTP 请求，`traffic-analysis/step2/http_endpoints.json` 的 `plaintext_http`
列表已记录 78 条（含 host/path/query/attribution 字段），其中若干条目 query/body 携带
token/ssid/sign/password/phone 等敏感参数形态，可被同网段被动嗅探。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-017）。

## 前提条件
- 仅本地 Python3 标准库环境。
- 嗅探证据已由 step2 授权抓包闭环；主动篡改 blocked_on=no_authorization_online。

## 所需材料
- `validate_request.py`（本目录）。
- `traffic-analysis/step2/http_endpoints.json`（脚本默认自动推导路径）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py`（或 `--input` 显式指定证据文件）。
3. 审阅敏感参数命中条目汇总。

## 预期证据
- 敏感模式（token|ssid|sign|password|phone 等）命中条目清单，含 scene/pcap/host/path/query/attribution。
- 汇总计数（总条目 vs 命中数）。

## 影响边界（最小影响说明）
- 纯离线只读证据文件，不联网、不发起任何请求。
- 输出内容仅用于报告，不再二次分发敏感参数值。

## 中止条件
- 任何利用泄露参数进行在线会话重放/账号操作的动议，立即中止。

## 脚本补齐 TODO
- 敏感参数正则（当前 token|ssid|sign|password|phone|session|secret|key）可按 step2 实际字段人工增补。
- 命中条目中是否含可复用的有效会话凭证，需人工逐条判定并做脱敏登记。
- 明文 HTTP 与 VULN-008 热更下发通道的重合情况（热更是否走明文）需人工交叉核对 attribution 字段。
