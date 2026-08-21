package com.bianfeng.paylib.ui;

public class WxWebPayActivty extends android.app.Activity {
    private boolean firstVisitWXH5PayUrl;
    private android.widget.LinearLayout linearLayout;
    private java.lang.String url;
    private java.lang.String urlStartsWith;
    private int webOpenType;
    private android.webkit.WebView webView;
    private java.lang.String wxUrl;


    private class CloseListner implements android.view.View.OnClickListener {
        final com.bianfeng.paylib.ui.WxWebPayActivty this$0;

        private CloseListner(com.bianfeng.paylib.ui.WxWebPayActivty r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        CloseListner(com.bianfeng.paylib.ui.WxWebPayActivty r1, com.bianfeng.paylib.ui.WxWebPayActivty.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onClick(android.view.View r1) {
                r0 = this;
                com.bianfeng.paylib.ui.WxWebPayActivty r1 = r0.this$0
                r1.finish()
                return
        }
    }

    public WxWebPayActivty() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.urlStartsWith = r0
            r0 = 0
            r1.webOpenType = r0
            java.lang.String r0 = "http://ipay.bianfeng.com"
            r1.wxUrl = r0
            r0 = 1
            r1.firstVisitWXH5PayUrl = r0
            return
    }

    static void access$100(com.bianfeng.paylib.ui.WxWebPayActivty r0, java.lang.String r1) {
            r0.toPay(r1)
            return
    }

    static java.lang.String access$200(com.bianfeng.paylib.ui.WxWebPayActivty r0) {
            java.lang.String r0 = r0.url
            return r0
    }

    static java.lang.String access$202(com.bianfeng.paylib.ui.WxWebPayActivty r0, java.lang.String r1) {
            r0.url = r1
            return r1
    }

    static android.widget.LinearLayout access$300(com.bianfeng.paylib.ui.WxWebPayActivty r0) {
            android.widget.LinearLayout r0 = r0.linearLayout
            return r0
    }

    private void initData() {
            r3 = this;
            android.webkit.WebView r0 = r3.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 1
            r0.setDomStorageEnabled(r1)
            r0.setJavaScriptEnabled(r1)
            r2 = 0
            r0.setBlockNetworkImage(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setLoadsImagesAutomatically(r1)
            android.webkit.WebView r0 = r3.webView
            android.webkit.WebChromeClient r1 = new android.webkit.WebChromeClient
            r1.<init>()
            r0.setWebChromeClient(r1)
            r3.loadData()
            android.webkit.WebView r0 = r3.webView
            com.bianfeng.paylib.ui.WxWebPayActivty$1 r1 = new com.bianfeng.paylib.ui.WxWebPayActivty$1
            r1.<init>(r3)
            r0.setWebViewClient(r1)
            return
    }

    private void initView() {
            r2 = this;
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.webpaypay_webview_wx"
            int r0 = r0.getId(r2, r1)
            android.view.View r0 = r2.findViewById(r0)
            android.webkit.WebView r0 = (android.webkit.WebView) r0
            r2.webView = r0
            return
    }

    private void loadData() {
            r7 = this;
            java.lang.String r0 = r7.url
            java.lang.String r1 = "http"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L15
            java.lang.String r0 = r7.url
            java.lang.String r1 = "https"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L15
            return
        L15:
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = "4.4.3"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L3f
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = "4.4.4"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2a
            goto L3f
        L2a:
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            r0.<init>(r1)
            java.lang.String r1 = r7.wxUrl
            java.lang.String r2 = "Referer"
            r0.put(r2, r1)
            android.webkit.WebView r1 = r7.webView
            java.lang.String r2 = r7.url
            r1.loadUrl(r2, r0)
            return
        L3f:
            boolean r0 = r7.firstVisitWXH5PayUrl
            if (r0 == 0) goto L6a
            android.webkit.WebView r1 = r7.webView
            java.lang.String r2 = r7.wxUrl
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "<script>window.location.href=\""
            r0.append(r3)
            java.lang.String r3 = r7.url
            r0.append(r3)
            java.lang.String r3 = "\";</script>"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r6 = 0
            java.lang.String r4 = "text/html"
            java.lang.String r5 = "utf-8"
            r1.loadDataWithBaseURL(r2, r3, r4, r5, r6)
            r0 = 0
            r7.firstVisitWXH5PayUrl = r0
        L6a:
            return
    }

    public static void start(android.content.Context r3, com.bianfeng.paylib.entity.YmnWxWebpayEntity r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.paylib.ui.WxWebPayActivty> r1 = com.bianfeng.paylib.ui.WxWebPayActivty.class
            r0.<init>(r3, r1)
            java.lang.String r1 = r4.getRedirect_url()
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
            java.lang.Class<com.bianfeng.paylib.ui.WxWebPayActivty> r1 = com.bianfeng.paylib.ui.WxWebPayActivty.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "h5url"
            r0.putExtra(r1, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
            r2.startActivity(r0)
            return
    }

    private void toPay(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.urlStartsWith
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L56
            android.webkit.WebView r0 = r3.webView
            r1 = 8
            r0.setVisibility(r1)
            com.bianfeng.paylib.YmnWebpaySdk r0 = com.bianfeng.paylib.YmnWebpaySdk.getInstance()
            java.lang.String r1 = "type_request_order"
            java.lang.String r2 = "下单响应"
            r0.payCallback(r1, r2)
            r0 = 1
            int r1 = r3.webOpenType     // Catch: java.lang.Exception -> L4a
            if (r1 == 0) goto L32
            if (r1 == r0) goto L22
            goto L56
        L22:
            android.content.Intent r4 = android.content.Intent.parseUri(r4, r0)     // Catch: java.lang.Exception -> L4a
            r1 = 270532608(0x10200000, float:3.1554436E-29)
            r4.addFlags(r1)     // Catch: java.lang.Exception -> L4a
            r3.startActivity(r4)     // Catch: java.lang.Exception -> L4a
            r3.finish()     // Catch: java.lang.Exception -> L4a
            goto L56
        L32:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L4a
            r1.setData(r4)     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = "android.intent.action.VIEW"
            r1.setAction(r4)     // Catch: java.lang.Exception -> L4a
            r3.startActivity(r1)     // Catch: java.lang.Exception -> L4a
            r3.finish()     // Catch: java.lang.Exception -> L4a
            goto L56
        L4a:
            java.lang.String r4 = "请安装微信或支付宝"
            android.widget.Toast r4 = android.widget.Toast.makeText(r3, r4, r0)
            r4.show()
            r3.finish()
        L56:
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
            java.lang.String r0 = "R.layout.activity_webpaysdk_wx"
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
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.id.webpaypay_webview_wx_dialog"
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.LinearLayout r3 = (android.widget.LinearLayout) r3
            r2.linearLayout = r3
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.id.webpaypay_webview_wx_close"
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            com.bianfeng.paylib.ui.WxWebPayActivty$CloseListner r0 = new com.bianfeng.paylib.ui.WxWebPayActivty$CloseListner
            r1 = 0
            r0.<init>(r2, r1)
            r3.setOnClickListener(r0)
            r2.initView()
            r2.initData()
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            android.webkit.WebView r0 = r1.webView
            if (r0 == 0) goto Lc
            r0.removeAllViews()
            android.webkit.WebView r0 = r1.webView
            r0.destroy()
        Lc:
            super.onDestroy()
            return
    }
}
