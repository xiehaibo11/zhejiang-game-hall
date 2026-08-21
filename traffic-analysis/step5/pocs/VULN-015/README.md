# VULN-015 deeplink 写剪贴板 —— 最小验证 PoC

## 漏洞概述
`AppActivity` 声明 19 个 scheme 的 BROWSABLE deeplink，deeplink query 被写入剪贴板并透传 Lua 层，
任意外部应用/网页可借此污染剪贴板并向 Lua 注入字符串。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-015）。

## 前提条件
- 授权的本地测试设备 + adb。
- 默认 dry-run；`POC_CONFIRM=YES` 才执行。
- **needs_callchain_first**：Lua 侧 1601 回调消费点未审计，透传后的危害面待确认。

## 所需材料
- `validate_request.py`（本目录）。
- step4 证据中的 19 个 scheme 清单（见 TODO）。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. dry-run：`python3 validate_request.py --scheme <scheme> --value POC-CLIPBOARD-MARKER`
3. 执行：`POC_CONFIRM=YES python3 validate_request.py --serial <序列号> --scheme <scheme>`
4. 设备上读取剪贴板确认标记写入；`adb logcat -d` 抓 Lua 侧回调日志。

## 预期证据
- 剪贴板出现 POC 标记的截图/读取记录。
- logcat 中 Lua 侧收到透传字符串的日志（若 1601 回调被触发）。

## 影响边界（最小影响说明）
- 仅向授权测试设备发送本地 VIEW intent，不联网。
- query 内容仅为无害标记字符串，不含任何可执行内容。

## 中止条件
- 设备不在授权清单内即中止。
- 若 Lua 消费点显示可触发资金/账号操作，停止深入，回归书面报告。

## 脚本补齐 TODO
- 19 个 BROWSABLE scheme 的完整清单需人工从 `AndroidManifest.xml` / step4 证据抄录。
- Lua 侧 1601 回调消费点未审计（needs_callchain_first）：人工在 `lua-src-apk/` 检索 1601/剪贴板读取点。
- 剪贴板内容在 Lua 侧是否被 dofile/load 等危险 API 消费 = 关键待验证点。
