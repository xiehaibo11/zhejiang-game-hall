package com.bianfeng.splitscreenlib.huodong;

public class HuodongActivity extends android.app.Activity {
    private java.lang.String url;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;

    public HuodongActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "https://www.baidu.com"
            r1.url = r0
            return
    }

    private void initData() {
            r5 = this;
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r0.getCallback()
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r1 = 1
            if (r0 == 0) goto L58
            android.webkit.WebSettings r0 = r0.getSettings()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            r4 = 0
            if (r2 < r3) goto L1a
            r0.setSafeBrowsingEnabled(r4)
        L1a:
            r0.setJavaScriptEnabled(r1)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setAllowFileAccess(r1)
            android.webkit.WebSettings$LayoutAlgorithm r2 = android.webkit.WebSettings.LayoutAlgorithm.NARROW_COLUMNS
            r0.setLayoutAlgorithm(r2)
            r0.setSupportZoom(r1)
            r0.setBuiltInZoomControls(r1)
            r0.setUseWideViewPort(r1)
            r0.setSupportMultipleWindows(r1)
            r0.setLoadWithOverviewMode(r1)
            r0.setAppCacheEnabled(r4)
            r0.setDatabaseEnabled(r1)
            r0.setDomStorageEnabled(r1)
            r0.setGeolocationEnabled(r1)
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.setAppCacheMaxSize(r2)
            r0.setCacheMode(r1)
            android.webkit.WebSettings$PluginState r2 = android.webkit.WebSettings.PluginState.ON_DEMAND
            r0.setPluginState(r2)
            android.webkit.WebSettings$RenderPriority r2 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r2)
        L58:
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r2 = 0
            r0.setLayerType(r1, r2)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r0.setClickable(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setJavaScriptEnabled(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            com.github.lzyzsd.jsbridge.BridgeWebViewClient r1 = new com.github.lzyzsd.jsbridge.BridgeWebViewClient
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r5.webView
            r1.<init>(r2)
            r0.setWebViewClient(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            java.lang.String r1 = r5.url
            r0.loadUrl(r1)
            return
    }

    private void initView() {
            r2 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.ymnh5_sdk_bridge_webView"
            int r0 = r0.getId(r2, r1)
            android.view.View r0 = r2.findViewById(r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r2.webView = r0
            return
    }

    public static void start(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.splitscreenlib.huodong.HuodongActivity> r1 = com.bianfeng.splitscreenlib.huodong.HuodongActivity.class
            r0.<init>(r2, r1)
            r2.startActivity(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            com.bianfeng.utilslib.screen.FullScreenUtils r2 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r2.setFullScreen(r1)
            com.bianfeng.utilslib.ResourceManger r2 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.layout.activity_ymnh5_sdk_webview"
            int r2 = r2.getId(r1, r0)
            r1.setContentView(r2)
            com.bianfeng.utilslib.screen.FullScreenUtils r2 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r2.hideBar(r1)
            r1.initView()
            r1.initData()
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r1.webView
            if (r0 == 0) goto Lc
            r0.removeAllViews()
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r1.webView
            r0.destroy()
        Lc:
            super.onDestroy()
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            super.onPause()
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r2.webView
            java.lang.String r1 = "about:blank"
            r0.loadUrl(r1)
            return
    }
}
