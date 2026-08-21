# VULN-014 BridgeWebView 无 origin 校验 —— 最小验证 PoC

## 漏洞概述
lzyzsd BridgeWebView 对 JS 桥调用无 origin 校验：`BridgeWebViewClient.java:35` 对 `yy://` scheme 拦截即分发，
任何被加载进 WebView 的页面（含第三方/被注入页面）都可调用已注册 native handler。
高危 handler：`decompiled/jadx/sources/com/bianfeng/roomlib/ui/RegWebViewMethodMaganer.java:75`
（`encryptionParameters` 签名预言机等）、`paylib/ui/PaymentWebActivity.java:83`。
证据：`traffic-analysis/step4/vuln_analysis.json`（VULN-014）、`traffic-analysis/step4/jsbridge_analysis.json`。

## 前提条件
- 授权 root 测试设备 + frida-server。
- 入口投递链（让 WebView 加载攻击页）= VULN-013 跳板或明文 HTTP MITM（VULN-017），
  在线部分 blocked_on=no_authorization_online；本阶段只做静态说明 + 运行时观察。

## 所需材料
- `runtime_observe.js`（hook loadUrl / registerHandler / shouldOverrideUrlLoading）。
- 授权测试设备上的 com.xm.zjgamecenter v1.5.4。

## 验证步骤
1. `frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause`。
2. 在 App 内打开含 BridgeWebView 的页面（房间 H5、支付页），记录注册的 handler 全量名单。
3. 最小攻击页思路（仅静态说明，不提供武器化页面）：
   - 页面内 `yy://` 链接或 `WebViewJavascriptBridge.callHandler('encryptionParameters', {...}, cb)`
     即可触达 native handler；由于 :35 无 origin 判断，页面来源不受限。
4. 用一份**本地自建的静态说明文档**描述上述调用形态即可；真实投递 blocked_on=no_authorization_online。

## 预期证据
- 运行时注册的 handler 名单（含 `encryptionParameters`）与调用日志。
- 书面结论：任意 origin 页面可调用签名预言机 handler。

## 影响边界（最小影响说明）
- 仅观察授权设备自身进程；不注入 JS、不调用任何 handler 触发真实业务。
- 不制作、不投递攻击页面。

## 中止条件
- 任何在线投递攻击页（MITM/VULN-013 链路）或真实调用资金类 handler 的动议，立即中止。

## 脚本补齐 TODO
- `runtime_observe.js` 中 `RegWebViewMethodMaganer` 的具体注册方法签名需人工按 jadx 确认后补 hook。
- `encryptionParameters` 的入参/返回结构需人工从 `RegWebViewMethodMaganer.java` 全文摘录到证据清单。
- PaymentWebActivity.java:83 注册的支付 handler 名单未完全枚举（人工跟进）。
