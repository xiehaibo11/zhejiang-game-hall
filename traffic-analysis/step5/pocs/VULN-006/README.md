# VULN-006 un.sign 通用 HTTP 签名 —— 最小验证 PoC

## 漏洞概述
通用 HTTP 接口使用 `un.sign` 做请求签名，但签名输入/盐完全由客户端计算；若盐硬编码或可还原，
攻击者可对任意篡改后的参数离线重签，签名形同虚设。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-006）。

## 前提条件
- **needs_frida_first**：必须先在授权环境用 Frida hook 还原算法与盐，之后才能讨论离线重签演示。
- 授权 root 测试设备 + frida-server，本机 frida 工具链。

## 所需材料
- `runtime_observe.js`（hook `libcocos2dlua.so` `Md5` @ base+0x8f6040 与 `Hmac` @ base+0x8f5fe4）。
- 授权测试设备上的 com.xm.zjgamecenter v1.5.4。

## 验证步骤
1. 设备启动 frida-server，`frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`。
2. 触发带 sign 参数的 HTTP 请求（登录、大厅接口等）。
3. 从 dump 中比对：同一请求参数下 Md5/Hmac 的输入字符串形态，还原拼接顺序与盐。
4. 离线复算一次 sign 与抓包值比对，确认算法还原正确（纯本地计算）。
5. 篡改参数后离线重签是否被服务端接受 = 在线验证，blocked_on=no_authorization_online。

## 预期证据
- un.sign 输入字符串样本（含盐）与算法还原记录。
- 本地复算 sign 与抓包 sign 一致的比对结果。

## 影响边界（最小影响说明）
- 只观察本设备自身进程的签名计算；离线复算不触网。
- 不重放、不投递任何重签请求。

## 中止条件
- 算法还原后任何在线重签投递动议，立即中止并回到书面报告。
- 设备/账号超授权范围时中止。

## 脚本补齐 TODO
- `runtime_observe.js` 中 Md5/Hmac 的参数类型（C 字符串 vs std::string）未确认：首跑后固定读取方式。
- 盐的存储位置（Lua 常量 / so 常量）需结合 dump 结果人工登记到 step5 证据清单。
