package com.bianfeng.splitscreenwindow.ui;

public class YmnH5WebviewActivity extends com.bianfeng.baselib.BaseActivity {
    private static android.app.Activity hostActivity;
    private com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer methodMaganer;
    private java.lang.String url;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;

    public YmnH5WebviewActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void initData() {
            r5 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r1 = 1
            if (r0 == 0) goto L5d
            android.webkit.WebSettings r0 = r0.getSettings()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            r4 = 0
            if (r2 < r3) goto L13
            r0.setSafeBrowsingEnabled(r4)
        L13:
            r0.setJavaScriptEnabled(r1)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setAllowFileAccess(r1)
            android.webkit.WebSettings$LayoutAlgorithm r2 = android.webkit.WebSettings.LayoutAlgorithm.NARROW_COLUMNS
            r0.setLayoutAlgorithm(r2)
            r0.setSupportZoom(r4)
            r0.setBuiltInZoomControls(r4)
            r0.setUseWideViewPort(r1)
            r0.setSupportMultipleWindows(r1)
            r0.setLoadWithOverviewMode(r1)
            r0.setAppCacheEnabled(r4)
            r0.setDatabaseEnabled(r1)
            r0.setDomStorageEnabled(r1)
            r0.setGeolocationEnabled(r1)
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.setAppCacheMaxSize(r2)
            r0.setMediaPlaybackRequiresUserGesture(r4)
            r0.setCacheMode(r1)
            android.webkit.WebSettings$PluginState r2 = android.webkit.WebSettings.PluginState.ON
            r0.setPluginState(r2)
            android.webkit.WebSettings$RenderPriority r2 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 < r3) goto L5d
            r0.setMixedContentMode(r4)
        L5d:
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.webView
            r2 = 2
            r3 = 0
            r0.setLayerType(r2, r3)
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
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer r0 = r5.methodMaganer
            r0.reg()
            return
    }

    private void initView() {
            r3 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.ymnh5_sdk_bridge_webView"
            int r0 = r0.getId(r3, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r3.webView = r0
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer r0 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer
            com.github.lzyzsd.jsbridge.BridgeWebView r1 = r3.webView
            android.app.Activity r2 = com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity.hostActivity
            r0.<init>(r1, r3, r2)
            r3.methodMaganer = r0
            return
    }

    public static void start(android.app.Activity r2, java.lang.String r3) {
            com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity.hostActivity = r2
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity> r1 = com.bianfeng.splitscreenwindow.ui.YmnH5WebviewActivity.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "h5url"
            r0.putExtra(r1, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
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
            android.content.Intent r2 = r1.getIntent()
            if (r2 == 0) goto L25
            java.lang.String r0 = "h5url"
            java.lang.String r2 = r2.getStringExtra(r0)
            r1.url = r2
        L25:
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
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer r0 = r1.methodMaganer
            if (r0 == 0) goto L13
            r0.unReg()
        L13:
            super.onDestroy()
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto L12
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r1.webView
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L12
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r1.webView
            r2.goBack()
            r2 = 1
            return r2
        L12:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }

    @Override
    protected void onStart() {
            r2 = this;
            super.onStart()
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "webview onStart"
            r0.e(r1)
            com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround r0 = com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround.getInstance(r2)
            r0.setListener()
            return
    }

    @Override
    protected void onStop() {
            r2 = this;
            super.onStop()
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "webview onStop"
            r0.e(r1)
            com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround r0 = com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround.getInstance(r2)
            r0.removeListener()
            return
    }
}
