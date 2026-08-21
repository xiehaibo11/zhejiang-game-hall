package com.bianfeng.splitscreenwindow.ui;

public class ViewWebGroup {
    private com.bianfeng.customwidgetlib.SuspendIconView iconView;
    private android.widget.RelativeLayout mFloatLayout;
    private com.github.lzyzsd.jsbridge.BridgeWebView mWebView;
    private com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface webInterface;





    public interface ViewWebInterface {
        void onPay(java.lang.String r1);

        void onRemove();

        void showFenping(com.bianfeng.splitscreenwindow.ShowType r1);

        void showNotityDailog();

        void showQuanping(com.bianfeng.splitscreenwindow.ShowType r1);
    }

    public ViewWebGroup(android.app.Activity r4) {
            r3 = this;
            r3.<init>()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r4)
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r2 = "R.layout.activity_screen"
            int r1 = r1.getId(r4, r2)
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.mFloatLayout = r0
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r2 = "R.id.screen_webview"
            int r1 = r1.getId(r4, r2)
            android.view.View r0 = r0.findViewById(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r3.mWebView = r0
            android.widget.RelativeLayout r0 = r3.mFloatLayout
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r2 = "R.id.screen_game_icon"
            int r1 = r1.getId(r4, r2)
            android.view.View r0 = r0.findViewById(r1)
            com.bianfeng.customwidgetlib.SuspendIconView r0 = (com.bianfeng.customwidgetlib.SuspendIconView) r0
            r3.iconView = r0
            android.widget.RelativeLayout r0 = r3.mFloatLayout
            r1 = 0
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r1)
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r1)
            r0.measure(r2, r1)
            r3.setupView(r4)
            return
    }

    static com.bianfeng.customwidgetlib.SuspendIconView access$000(com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0) {
            com.bianfeng.customwidgetlib.SuspendIconView r0 = r0.iconView
            return r0
    }

    static com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface access$100(com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0) {
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$ViewWebInterface r0 = r0.webInterface
            return r0
    }

    private void registerHandler(android.app.Activity r3) {
            r2 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r3 = r2.mWebView
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$2 r0 = new com.bianfeng.splitscreenwindow.ui.ViewWebGroup$2
            r0.<init>(r2)
            java.lang.String r1 = "payActionFromWeb"
            r3.registerHandler(r1, r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r3 = r2.mWebView
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$3 r0 = new com.bianfeng.splitscreenwindow.ui.ViewWebGroup$3
            r0.<init>(r2)
            java.lang.String r1 = "transUserData"
            r3.registerHandler(r1, r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r3 = r2.mWebView
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$4 r0 = new com.bianfeng.splitscreenwindow.ui.ViewWebGroup$4
            r0.<init>(r2)
            java.lang.String r1 = "closeH5Game"
            r3.registerHandler(r1, r0)
            return
    }

    private void setupView(android.app.Activity r6) {
            r5 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.mWebView
            r1 = 1
            if (r0 == 0) goto L51
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
        L51:
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.mWebView
            r2 = 2
            r3 = 0
            r0.setLayerType(r2, r3)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.mWebView
            r0.setClickable(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.mWebView
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setJavaScriptEnabled(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r5.mWebView
            com.github.lzyzsd.jsbridge.BridgeWebViewClient r1 = new com.github.lzyzsd.jsbridge.BridgeWebViewClient
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r5.mWebView
            r1.<init>(r2)
            r0.setWebViewClient(r1)
            com.bianfeng.customwidgetlib.SuspendIconView r0 = r5.iconView
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup$1 r1 = new com.bianfeng.splitscreenwindow.ui.ViewWebGroup$1
            r1.<init>(r5)
            r0.setOnClickListener(r1)
            r5.registerHandler(r6)
            return
    }

    public android.widget.RelativeLayout getFloatLayout() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.mFloatLayout
            return r0
    }

    public void setIconViewRotation(float r2) {
            r1 = this;
            com.bianfeng.customwidgetlib.SuspendIconView r0 = r1.iconView
            r0.setRotation(r2)
            return
    }

    public void setIconViewTag(java.lang.String r2) {
            r1 = this;
            com.bianfeng.customwidgetlib.SuspendIconView r0 = r1.iconView
            r0.setTag(r2)
            return
    }

    public void setIconViewVisibility() {
            r2 = this;
            com.bianfeng.customwidgetlib.SuspendIconView r0 = r2.iconView
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    public void setWebInterface(com.bianfeng.splitscreenwindow.ui.ViewWebGroup.ViewWebInterface r1) {
            r0 = this;
            r0.webInterface = r1
            return
    }

    public void show(java.lang.String r2) {
            r1 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r1.mWebView
            r0.loadUrl(r2)
            return
    }
}
