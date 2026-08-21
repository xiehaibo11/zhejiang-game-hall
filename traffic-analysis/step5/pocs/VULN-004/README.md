# VULN-004 SRS 协议无防重放 —— 最小验证 PoC

## 漏洞概述
SRS 帧（含加密 c2s 帧）没有时间戳/nonce/序列号等防重放因子，加密参数为全局默认 key/iv（每帧 IV 重置为同一默认值）。
同一段密文帧理论上可被原样重发而仍被服务端接受。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-004）、`traffic-analysis/step3/crypto_native_analysis.json`。

## 前提条件
- 授权 root 测试设备 + frida-server，本机安装 frida 工具链。
- 本阶段只做材料采集；同连接重放 / 跨连接重放的在线验证 **blocked_on=no_authorization_online**。

## 所需材料
- `runtime_observe.js`（Frida 模板，hook `libcocos2dlua.so` `Encryption::encrypt` @ base+0x8f5740）。
- 授权测试设备上安装的 com.xm.zjgamecenter v1.5.4。

## 验证步骤
1. 设备上启动 frida-server。
2. `frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`
3. 在 App 内触发登录/进房等 SRS 上行行为，录制每次 encrypt 的时间戳与帧缓冲 dump。
4. 人工辨认帧头布局，固定 xy/proc 解析偏移，导出重放材料清单（帧 hex + 语义标注）。

## 预期证据
- 带时间戳的帧序列录制日志，证明帧内无防重放字段（与 step3 帧格式分析互证）。
- 重放材料包（仅留存，不投递）。

## 影响边界（最小影响说明）
- 仅被动观察本设备自身产生的帧，不注入、不重放、不影响任何其他用户或服务器。
- 重放验证需独立授权窗口，另行申请。

## 中止条件
- 出现任何需要将录制帧发往真实服务器的动议，立即中止。
- 设备或账号超出授权范围时中止。

## 脚本补齐 TODO
- `runtime_observe.js` 中 `Encryption::encrypt` 参数布局未静态确认：首跑后人工确认帧缓冲寄存器并启用脚本内的帧头解析段。
- 如需收包侧（decrypt @ 0x8f5914）对照，需人工补 hook。
