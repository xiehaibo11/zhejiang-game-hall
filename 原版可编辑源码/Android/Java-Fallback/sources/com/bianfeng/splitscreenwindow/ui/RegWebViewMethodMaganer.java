package com.bianfeng.splitscreenwindow.ui;

public class RegWebViewMethodMaganer {
    private android.app.Activity activity;
    private android.app.Activity hostActivity;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;











    public RegWebViewMethodMaganer(com.github.lzyzsd.jsbridge.BridgeWebView r1, android.app.Activity r2, android.app.Activity r3) {
            r0 = this;
            r0.<init>()
            r0.webView = r1
            r0.activity = r2
            r0.hostActivity = r3
            return
    }

    static android.app.Activity access$000(com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer r0) {
            android.app.Activity r0 = r0.hostActivity
            return r0
    }

    static android.app.Activity access$100(com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer r0) {
            android.app.Activity r0 = r0.activity
            return r0
    }

    private void closeH5Game() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$3 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$3
            r1.<init>(r3)
            java.lang.String r2 = "closeH5Game"
            r0.registerHandler(r2, r1)
            return
    }

    private void downLoadApp() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$9 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$9
            r1.<init>(r3)
            java.lang.String r2 = "downLoadApp"
            r0.registerHandler(r2, r1)
            return
    }

    private void getBottomHeight() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$7 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$7
            r1.<init>(r3)
            java.lang.String r2 = "getBottomHeight"
            r0.registerHandler(r2, r1)
            return
    }

    private void getHeight() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$6 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$6
            r1.<init>(r3)
            java.lang.String r2 = "getHeight"
            r0.registerHandler(r2, r1)
            return
    }

    private void getVersion() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$10 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$10
            r1.<init>(r3)
            java.lang.String r2 = "getVersion"
            r0.registerHandler(r2, r1)
            return
    }

    private void isSupportDownload() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$8 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$8
            r1.<init>(r3)
            java.lang.String r2 = "isSupportDownLoadApp"
            r0.registerHandler(r2, r1)
            return
    }

    private void payActionFromWeb() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$1 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$1
            r1.<init>(r3)
            java.lang.String r2 = "payActionFromWeb"
            r0.registerHandler(r2, r1)
            return
    }

    private void sendError() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$4 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$4
            r1.<init>(r3)
            java.lang.String r2 = "sendError"
            r0.registerHandler(r2, r1)
            return
    }

    private void sendResource() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$5 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$5
            r1.<init>(r3)
            java.lang.String r2 = "sendResource"
            r0.registerHandler(r2, r1)
            return
    }

    private void transUserData() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$2 r1 = new com.bianfeng.splitscreenwindow.ui.RegWebViewMethodMaganer$2
            r1.<init>(r3)
            java.lang.String r2 = "transUserData"
            r0.registerHandler(r2, r1)
            return
    }

    public void reg() {
            r0 = this;
            r0.payActionFromWeb()
            r0.transUserData()
            r0.closeH5Game()
            r0.sendError()
            r0.sendResource()
            r0.getBottomHeight()
            r0.getHeight()
            r0.isSupportDownload()
            r0.downLoadApp()
            r0.getVersion()
            return
    }

    public void unReg() {
            r1 = this;
            r0 = 0
            r1.webView = r0
            r1.activity = r0
            return
    }
}
