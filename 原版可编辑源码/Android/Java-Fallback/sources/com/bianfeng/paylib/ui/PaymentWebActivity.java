package com.bianfeng.paylib.ui;

public class PaymentWebActivity extends android.app.Activity {
    private java.lang.String url;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;



    public PaymentWebActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.url = r0
            return
    }

    private void initData() {
            r5 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L51
            android.webkit.WebSettings r0 = r0.getSettings()
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r3 < r4) goto L13
            r0.setSafeBrowsingEnabled(r1)
        L13:
            r0.setJavaScriptEnabled(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r2)
            r0.setAllowFileAccess(r2)
            android.webkit.WebSettings$LayoutAlgorithm r3 = android.webkit.WebSettings.LayoutAlgorithm.NARROW_COLUMNS
            r0.setLayoutAlgorithm(r3)
            r0.setSupportZoom(r2)
            r0.setBuiltInZoomControls(r2)
            r0.setUseWideViewPort(r2)
            r0.setSupportMultipleWindows(r2)
            r0.setLoadWithOverviewMode(r2)
            r0.setAppCacheEnabled(r1)
            r0.setDatabaseEnabled(r2)
            r0.setDomStorageEnabled(r2)
            r0.setGeolocationEnabled(r2)
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.setAppCacheMaxSize(r3)
            r0.setCacheMode(r2)
            android.webkit.WebSettings$PluginState r3 = android.webkit.WebSettings.PluginState.ON_DEMAND
            r0.setPluginState(r3)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r3)
        L51:
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r0.setBackgroundColor(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r1 = 2
            r3 = 0
            r0.setLayerType(r1, r3)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r0.setClickable(r2)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setJavaScriptEnabled(r2)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 100
            r0.setTextZoom(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            com.github.lzyzsd.jsbridge.BridgeWebViewClient r1 = new com.github.lzyzsd.jsbridge.BridgeWebViewClient
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r5.webView
            r1.<init>(r2)
            r0.setWebViewClient(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            java.lang.String r1 = r5.url
            r0.loadUrl(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            com.bianfeng.paylib.ui.PaymentWebActivity$1 r1 = new com.bianfeng.paylib.ui.PaymentWebActivity$1
            r1.<init>(r5)
            java.lang.String r2 = "payInH5"
            r0.registerHandler(r2, r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            com.bianfeng.paylib.ui.PaymentWebActivity$2 r1 = new com.bianfeng.paylib.ui.PaymentWebActivity$2
            r1.<init>(r5)
            java.lang.String r2 = "closePayWindow"
            r0.registerHandler(r2, r1)
            return
    }

    private void initView() {
            r2 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.payment_web_bridge_webView"
            int r0 = r0.getId(r2, r1)
            android.view.View r0 = r2.findViewById(r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r2.webView = r0
            return
    }

    public static void start(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.paylib.ui.PaymentWebActivity> r1 = com.bianfeng.paylib.ui.PaymentWebActivity.class
            r0.<init>(r2, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "h5url"
            r0.putExtra(r1, r3)
            r2.startActivity(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.bianfeng.utilslib.ActivityHookUtils r3 = com.bianfeng.utilslib.UtilsSdk.getActivityHook()
            r3.hookOrientation(r2)
            com.bianfeng.utilslib.screen.FullScreenUtils r3 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r3.setFullScreen(r2)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.layout.activity_payment_web"
            int r3 = r3.getId(r2, r0)
            r2.setContentView(r3)
            android.content.Intent r3 = r2.getIntent()
            if (r3 == 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.bianfeng.paylib.utils.YmnURLManager.getPaymentUrl()
            r0.append(r1)
            java.lang.String r1 = "h5url"
            java.lang.String r3 = r3.getStringExtra(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.url = r3
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "url---"
            r0.append(r1)
            java.lang.String r1 = r2.url
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.i(r0)
        L59:
            com.bianfeng.utilslib.screen.FullScreenUtils r3 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r3.hideBar(r2)
            r2.initView()
            r2.initData()
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
}
