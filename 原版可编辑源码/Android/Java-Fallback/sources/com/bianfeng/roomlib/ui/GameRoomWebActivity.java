package com.bianfeng.roomlib.ui;

public class GameRoomWebActivity extends android.app.Activity {
    private java.lang.String cp;
    private com.bianfeng.roomlib.ui.RegWebViewMethodMaganer methodMaganer;
    private java.lang.String url;
    private java.lang.String userid;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;

    public GameRoomWebActivity() {
            r0 = this;
            r0.<init>()
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
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 100
            r0.setTextZoom(r1)
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
            r4 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.gameroom_web_bridge_webView"
            int r0 = r0.getId(r4, r1)
            android.view.View r0 = r4.findViewById(r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r4.webView = r0
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer r0 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer
            com.github.lzyzsd.jsbridge.BridgeWebView r1 = r4.webView
            java.lang.String r2 = r4.cp
            java.lang.String r3 = r4.userid
            r0.<init>(r1, r4, r2, r3)
            r4.methodMaganer = r0
            r0.reg()
            return
    }

    public static void start(android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.roomlib.ui.GameRoomWebActivity> r1 = com.bianfeng.roomlib.ui.GameRoomWebActivity.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "h5url"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "cp"
            r0.putExtra(r3, r4)
            java.lang.String r3 = "userid"
            r0.putExtra(r3, r5)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
            r2.startActivity(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            com.bianfeng.utilslib.ActivityHookUtils r2 = com.bianfeng.utilslib.UtilsSdk.getActivityHook()
            r2.hookOrientation(r1)
            com.bianfeng.utilslib.screen.FullScreenUtils r2 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r2.setFullScreen(r1)
            com.bianfeng.utilslib.DensityUtils r2 = com.bianfeng.utilslib.UtilsSdk.getDensityUtils()
            r2.setDefault(r1)
            com.bianfeng.utilslib.ResourceManger r2 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.layout.activity_gameroom_web"
            int r2 = r2.getId(r1, r0)
            r1.setContentView(r2)
            android.content.Intent r2 = r1.getIntent()
            if (r2 == 0) goto L43
            java.lang.String r0 = "h5url"
            java.lang.String r0 = r2.getStringExtra(r0)
            r1.url = r0
            java.lang.String r0 = "cp"
            java.lang.String r0 = r2.getStringExtra(r0)
            r1.cp = r0
            java.lang.String r0 = "userid"
            java.lang.String r2 = r2.getStringExtra(r0)
            r1.userid = r2
        L43:
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
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto Le
            com.bianfeng.roomlib.YmnH5GameRoomSdk r0 = com.bianfeng.roomlib.YmnH5GameRoomSdk.getInstance()
            com.bianfeng.roomlib.YmnH5GameRoomCallback r0 = r0.getCallback()
            r0.onClose()
        Le:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }
}
