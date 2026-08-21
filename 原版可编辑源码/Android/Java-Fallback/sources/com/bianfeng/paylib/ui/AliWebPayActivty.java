package com.bianfeng.paylib.ui;

public class AliWebPayActivty extends com.bianfeng.baselib.BaseActivity {
    private java.lang.String url;
    private java.lang.String urlStartsWith;
    private int webOpenType;
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;



    public AliWebPayActivty() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.urlStartsWith = r0
            r0 = 0
            r1.webOpenType = r0
            return
    }

    static java.lang.String access$000(com.bianfeng.paylib.ui.AliWebPayActivty r0) {
            java.lang.String r0 = r0.urlStartsWith
            return r0
    }

    static int access$100(com.bianfeng.paylib.ui.AliWebPayActivty r0) {
            int r0 = r0.webOpenType
            return r0
    }

    private void initData() {
            r8 = this;
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r8.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 1
            r0.setDomStorageEnabled(r1)
            r0.setJavaScriptEnabled(r1)
            r2 = 0
            r0.setBlockNetworkImage(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setLoadsImagesAutomatically(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r8.webView
            android.webkit.WebChromeClient r1 = new android.webkit.WebChromeClient
            r1.<init>()
            r0.setWebChromeClient(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r8.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 100
            r0.setTextZoom(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r8.webView
            com.bianfeng.paylib.ui.AliWebPayActivty$1 r1 = new com.bianfeng.paylib.ui.AliWebPayActivty$1
            r1.<init>(r8)
            r0.setWebViewClient(r1)
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r8.webView
            java.lang.String r4 = r8.url
            r3 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "utf-8"
            r7 = 0
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r8.webView
            com.bianfeng.paylib.ui.AliWebPayActivty$2 r1 = new com.bianfeng.paylib.ui.AliWebPayActivty$2
            r1.<init>(r8)
            java.lang.String r2 = "closePayResultWindow"
            r0.registerHandler(r2, r1)
            return
    }

    private void initView() {
            r2 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.webpaypay_webview"
            int r0 = r0.getId(r2, r1)
            android.view.View r0 = r2.findViewById(r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = (com.github.lzyzsd.jsbridge.BridgeWebView) r0
            r2.webView = r0
            return
    }

    public static void start(android.content.Context r3, com.bianfeng.paylib.entity.YmnAliWebpayEntity r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.paylib.ui.AliWebPayActivty> r1 = com.bianfeng.paylib.ui.AliWebPayActivty.class
            r0.<init>(r3, r1)
            java.lang.String r1 = r4.getBase64_html()
            java.lang.String r2 = "h5url"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r4.getUrl_starts_with()
            java.lang.String r2 = "url_starts_with"
            r0.putExtra(r2, r1)
            int r4 = r4.getWeb_open_type()
            java.lang.String r1 = "web_open_type"
            r0.putExtra(r1, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            r3.startActivity(r0)
            return
    }

    public static void start(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.paylib.ui.AliWebPayActivty> r1 = com.bianfeng.paylib.ui.AliWebPayActivty.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "h5url"
            r0.putExtra(r1, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
            r2.startActivity(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.view.Window r3 = r2.getWindow()
            r0 = 1
            r2.requestWindowFeature(r0)
            r0 = 1024(0x400, float:1.435E-42)
            r3.setFlags(r0, r0)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.layout.activity_webpaysdk_ali"
            int r3 = r3.getId(r2, r0)
            r2.setContentView(r3)
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r0 = "h5url"
            java.lang.String r3 = r3.getStringExtra(r0)
            r2.url = r3
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r0 = "url_starts_with"
            boolean r3 = r3.hasExtra(r0)
            if (r3 == 0) goto L3f
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r3 = r3.getStringExtra(r0)
            r2.urlStartsWith = r3
        L3f:
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r0 = "web_open_type"
            boolean r3 = r3.hasExtra(r0)
            if (r3 == 0) goto L56
            android.content.Intent r3 = r2.getIntent()
            r1 = 0
            int r3 = r3.getIntExtra(r0, r1)
            r2.webOpenType = r3
        L56:
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

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto L15
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r1.webView
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L15
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r1.webView
            r2.goBack()
            r1.finish()
            r2 = 1
            return r2
        L15:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }
}
