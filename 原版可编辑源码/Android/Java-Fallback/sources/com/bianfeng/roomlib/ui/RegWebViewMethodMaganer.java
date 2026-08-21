package com.bianfeng.roomlib.ui;

public class RegWebViewMethodMaganer {
    private android.app.Activity activity;
    private java.lang.String cp;
    private java.lang.String userid;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;






    public RegWebViewMethodMaganer(com.github.lzyzsd.jsbridge.BridgeWebView r1, android.app.Activity r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.webView = r1
            r0.activity = r2
            r0.cp = r3
            r0.userid = r4
            return
    }

    static android.app.Activity access$000(com.bianfeng.roomlib.ui.RegWebViewMethodMaganer r0) {
            android.app.Activity r0 = r0.activity
            return r0
    }

    static java.lang.String access$100(com.bianfeng.roomlib.ui.RegWebViewMethodMaganer r0) {
            java.lang.String r0 = r0.cp
            return r0
    }

    static java.lang.String access$200(com.bianfeng.roomlib.ui.RegWebViewMethodMaganer r0) {
            java.lang.String r0 = r0.userid
            return r0
    }

    private void closeGameRoom() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$3 r1 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$3
            r1.<init>(r3)
            java.lang.String r2 = "closeGameRoom"
            r0.registerHandler(r2, r1)
            return
    }

    private void currencyInterface() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$1 r1 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$1
            r1.<init>(r3)
            java.lang.String r2 = "currencyInterface"
            r0.registerHandler(r2, r1)
            return
    }

    private void encryptionParameters() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$2 r1 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$2
            r1.<init>(r3)
            java.lang.String r2 = "encryptionParameters"
            r0.registerHandler(r2, r1)
            return
    }

    private void openWebGame() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$4 r1 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$4
            r1.<init>(r3)
            java.lang.String r2 = "openWebGame"
            r0.registerHandler(r2, r1)
            return
    }

    public void copyContentToClipboard() {
            r3 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$5 r1 = new com.bianfeng.roomlib.ui.RegWebViewMethodMaganer$5
            r1.<init>(r3)
            java.lang.String r2 = "copyPasteboard"
            r0.registerHandler(r2, r1)
            return
    }

    public void reg() {
            r0 = this;
            r0.openWebGame()
            r0.closeGameRoom()
            r0.encryptionParameters()
            r0.currencyInterface()
            r0.copyContentToClipboard()
            return
    }
}
