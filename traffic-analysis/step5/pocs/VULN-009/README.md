# VULN-009 RePlugin 关闭签名校验 —— 最小验证 PoC

## 漏洞概述
RePlugin 宿主侧调用 `setVerifySign(false)` 关闭插件签名校验，插件包仅以 md5 校验完整性；
md5 与插件包同通道下发，不构成独立信任锚，插件可被整体替换。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-009，setVerifySign(false)）。

## 前提条件
- 仅本地 Python3 标准库环境。
- 不投递：替换真实插件下发内容属于在线行为，blocked_on=no_authorization_online。

## 所需材料
- `validate_request.py`（本目录）。
- 任意本地文件作为「插件包」样本。

## 验证步骤
1. `python3 validate_request.py --help` 查看参数。
2. `python3 validate_request.py --file <任意本地文件> --offset 0`
3. 观察篡改前后 md5 与「同通道下发即 PASS」的模拟校验输出。

## 预期证据
- 篡改 1 字节后 md5 变化，但与同通道下发的（新）md5 比对通过。
- 证明 md5-only + 关签名校验的组合不构成防篡改。

## 影响边界（最小影响说明）
- 纯本地计算，不联网、不写任何目标路径、不触碰设备。
- 不生成可安装的插件包。

## 中止条件
- 任何构造可投递插件包或接触真实下发通道的动议，立即中止。
- 需验证宿主真实加载行为时，须另行申请授权窗口在授权测试设备上进行。

## 脚本补齐 TODO
- 未覆盖插件包的完整制作（dex/so 资源打包）：如需更深验证，先在授权环境确认 RePlugin 插件加载链路（与 VULN-016 AIDL 面联动审计）。
- setVerifySign(false) 的具体调用点行号需从 step4 证据抄录到本目录 evidence 备注（人工）。
