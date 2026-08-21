# VULN-025 PlayerConnect.identify RC4 弱算法 —— 最小验证 PoC（needs_frida_first）

## 漏洞概述
`PlayerConnect.identify` 使用 RC4 弱算法（证据：`hotfix-decrypted/src/app/Protocols/SRSProtocol.lua:81` 注释），
RC4 已不具现代安全性；且 key 未提取，算法与密钥管理面均未闭环。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-025）。

## 前提条件
- **needs_frida_first**：仅有线索（Lua 注释 + proc=0 xy=5 帧形态），必须先在授权环境 Frida 观察确认。
- 授权 root 测试设备 + frida-server。

## 所需材料
- `runtime_observe.js`（先 hook `Encryption::encrypt` @ base+0x8f5740，过滤 proc=0 xy=5 PlayerConnect 帧）。
- 授权测试设备上的 com.xm.zjgamecenter v1.5.4。

## 验证步骤
1. `frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`。
2. 触发登录/连接流程，人工从 dump 中辨认 proc=0 xy=5 的 identify 帧，记录其明文/密文形态。
3. 沿 `SRSProtocol.lua:81` 上下游追 RC4 实现位置（Lua 层 or native 符号），确认 key 来源与硬编码情况。
4. 提取 key 后在**本地**对抓包样本做 RC4 解密复现（离线，不联网）。

## 预期证据
- identify 帧样本（含时间戳、帧头字段、明文形态）。
- RC4 实现位置与 key 来源的审计记录。

## 影响边界（最小影响说明）
- 仅观察授权设备自身进程；离线复现不触网。
- 提取的 key 仅登记报告，禁止用于任何在线解密/伪造会话。

## 中止条件
- 任何利用所提取 key 进行在线会话伪造/解密的动议，立即中止。

## 脚本补齐 TODO
- hook 点待定位：RC4 实现的符号/偏移未知（strings 检索或 Lua 绑定名 xref，人工）。
- `Encryption::encrypt` 参数布局未静态确认（与 VULN-004 共用首跑确认流程）。
- RC4 key 未提取：需人工从 so 常量区/Lua 常量定位并登记。
