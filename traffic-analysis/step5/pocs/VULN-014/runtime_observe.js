// -- 需授权环境执行（root 测试设备 + frida-server）
// 授权环境专用最小验证模板（Phase 5）。默认不发送任何网络请求；涉及设备的操作仅限授权的本地测试设备。
//
// VULN-014 lzyzsd BridgeWebView 无 origin 校验 —— 桥接调用观察器
// 证据:
//   decompiled/jadx/sources/com/github/lzyzsd/jsbridge/BridgeWebViewClient.java:35（yy:// scheme 拦截即分发）
//   decompiled/jadx/sources/com/bianfeng/roomlib/ui/RegWebViewMethodMaganer.java:75（"encryptionParameters" 等高危 handler）
//   decompiled/jadx/sources/com/bianfeng/paylib/ui/PaymentWebActivity.java:83
//   traffic-analysis/step4/vuln_analysis.json (VULN-014)
//
// 用法: frida -U -f com.xm.zjgamecenter -l runtime_observe.js --no-pause
//       然后在授权测试设备上打开任意含 BridgeWebView 的页面，观察 loadUrl / registerHandler / yy:// 分发。
//
// TODO: 若类名在 release 包被混淆，需人工按 jadx 产物调整下列类名。

'use strict';

Java.perform(function () {
  // 1) 观察页面加载与 yy:// 桥接 URL
  try {
    const BW = Java.use('com.github.lzyzsd.jsbridge.BridgeWebView');
    BW.loadUrl.overload('java.lang.String').implementation = function (url) {
      console.log('[BridgeWebView.loadUrl] ' + url);
      return this.loadUrl(url);
    };
    BW.registerHandler.implementation = function (name, handler) {
      console.log('[BridgeWebView.registerHandler] name=' + name);
      return this.registerHandler(name, handler);
    };
    // 页面向 native 发起调用（yy://bridge/... 形式）时经过的发送口
    try {
      BW.send.overload('java.lang.String').implementation = function (data) {
        console.log('[BridgeWebView.send] ' + data);
        return this.send(data);
      };
    } catch (e) { /* send 可能不存在于该版本 */ }
    console.log('[+] hooked BridgeWebView.loadUrl/registerHandler/send');
  } catch (e) {
    console.log('[-] BridgeWebView hook 失败（类未加载或混淆）: ' + e);
  }

  // 2) 观察 yy:// scheme 拦截分发点（无 origin 校验的证据点）
  try {
    const Client = Java.use('com.github.lzyzsd.jsbridge.BridgeWebViewClient');
    Client.shouldOverrideUrlLoading.overload('android.webkit.WebView', 'java.lang.String')
      .implementation = function (view, url) {
        console.log('[BridgeWebViewClient.shouldOverrideUrlLoading] url=' + url);
        return this.shouldOverrideUrlLoading(view, url);
      };
    console.log('[+] hooked BridgeWebViewClient.shouldOverrideUrlLoading');
  } catch (e) {
    console.log('[-] BridgeWebViewClient hook 失败: ' + e);
  }

  // 3) 高危 handler 注册点（旁证 "encryptionParameters" 等）
  try {
    const Reg = Java.use('com.bianfeng.roomlib.ui.RegWebViewMethodMaganer');
    console.log('[+] RegWebViewMethodMaganer 可达，TODO: 人工按 jadx 确认其注册方法名后补 hook');
    // TODO: jadx :75 处的具体注册方法签名确认后，在此 attach 打印注册的 handler 名列表。
  } catch (e) {
    console.log('[-] RegWebViewMethodMaganer 暂不可达: ' + e);
  }
});
