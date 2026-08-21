# VULN-018 logcat 泄露 session/token —— 最小验证 PoC

## 漏洞概述
App（含 Lua 层 print）存在 20+ 处无门控的日志输出，session/token/ssid 等敏感信息进入 logcat，
同机任何具备日志读取能力的上下文（调试通道、旧机型 READ_LOGS、厂商日志工具）均可获取。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-018）。

## 前提条件
- 授权的本地测试设备 + adb，USB 调试开启。
- 默认 dry-run；`POC_CONFIRM=YES` 才执行。

## 所需材料
- `validate_request.py`（本目录）。
- 设备上先完成一次登录/进房，让敏感日志产生。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. dry-run：`python3 validate_request.py --serial <序列号>`
3. 执行：`POC_CONFIRM=YES python3 validate_request.py --serial <序列号>`
4. 审阅命中行（ssid|token|session|password|验证码 等模式）。

## 预期证据
- 含 session/token 的 logcat 命中行清单（截断展示）。
- 命中计数与总行数对比。

## 影响边界（最小影响说明）
- 仅读取授权测试设备本地 logcat（`-d` dump 模式，不持续监听、不清空日志）。
- 不联网、不修改设备任何状态。
- 命中的敏感值仅用于报告佐证，须脱敏登记。

## 中止条件
- 设备不在授权清单内即中止。
- 命中真实可用会话凭证后，禁止任何形式的复用/重放。

## 脚本补齐 TODO
- 未实现按包名/pid 过滤（`--pkg-tag` 占位）：可人工改为先 `adb shell pidof com.xm.zjgamecenter` 再 `logcat --pid`。
- 20+ 处 print 的具体 Lua 源位置清单需人工从 step4 证据抄录。
- 检索模式可按实际泄露字段人工增补（如 specific 字段名）。
