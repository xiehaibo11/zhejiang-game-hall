# VULN-019 密码/token 明文持久化 —— 最小验证 PoC

## 漏洞概述
密码、token 等敏感字段以明文持久化在 SharedPreferences（Android）/ UserDefault（iOS），
root/备份/调试通道可直接读取。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-019）。

## 前提条件
- 授权的本地 **root** 测试设备 + adb（需要 `su -c` 读取 `/data/data/`）。
- 默认 dry-run；`POC_CONFIRM=YES` 才执行。

## 所需材料
- `validate_request.py`（本目录）。
- 设备上先完成一次登录，让凭证落盘。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. dry-run：`python3 validate_request.py --serial <序列号>`
3. 执行：`POC_CONFIRM=YES python3 validate_request.py --serial <序列号>`
4. 审阅命中行（password|token|ssid|session|secret 模式）。

## 预期证据
- shared_prefs XML 中明文敏感字段的命中行清单（脱敏后登记报告）。

## 影响边界（最小影响说明）
- 仅读取授权 root 测试设备本地文件，不修改、不导出到设备外（输出只落在执行终端）。
- 不联网；命中的凭证禁止任何形式的复用。

## 中止条件
- 设备未列入授权清单或 su 权限来源不明即中止。
- 需要读取其他应用数据目录的动议一律拒绝。

## 脚本补齐 TODO
- 当前仅覆盖 shared_prefs：UserDefault（iOS 侧）与 Lua 写盘文件（writablePath 下）未覆盖，需人工补充对应检索。
- 敏感字段的精确键名清单需人工从 step4 证据抄录以提高命中精度。
- `su -c` 在不同 root 方案（Magisk 等）下的交互差异需人工适配。
