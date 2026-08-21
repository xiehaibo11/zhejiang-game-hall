package com.github.lzyzsd.jsbridge;

public class BridgeWebViewClient extends android.webkit.WebViewClient {
    private com.github.lzyzsd.jsbridge.BridgeWebView webView;

    public BridgeWebViewClient(com.github.lzyzsd.jsbridge.BridgeWebView r1) {
            r0 = this;
            r0.<init>()
            r0.webView = r1
            return
    }

    protected void onCustomPageFinishd(android.webkit.WebView r1, java.lang.String r2) {
            r0 = this;
            return
    }

    protected boolean onCustomShouldOverrideUrlLoading(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onPageFinished(android.webkit.WebView r4, java.lang.String r5) {
            r3 = this;
            super.onPageFinished(r4, r5)
            java.lang.String r0 = "WebViewJavascriptBridge.js"
            com.github.lzyzsd.jsbridge.BridgeUtil.webViewLoadLocalJs(r4, r0)
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            java.util.List r0 = r0.getStartupMessage()
            if (r0 == 0) goto L32
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            java.util.List r0 = r0.getStartupMessage()
            java.util.Iterator r0 = r0.iterator()
        L1a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            com.github.lzyzsd.jsbridge.Message r1 = (com.github.lzyzsd.jsbridge.Message) r1
            com.github.lzyzsd.jsbridge.BridgeWebView r2 = r3.webView
            r2.dispatchMessage(r1)
            goto L1a
        L2c:
            com.github.lzyzsd.jsbridge.BridgeWebView r0 = r3.webView
            r1 = 0
            r0.setStartupMessage(r1)
        L32:
            r3.onCustomPageFinishd(r4, r5)
            return
    }

    @Override
    public void onPageStarted(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3) {
            r0 = this;
            super.onPageStarted(r1, r2, r3)
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r2, android.webkit.WebResourceRequest r3, android.webkit.WebResourceError r4) {
            r1 = this;
            super.onReceivedError(r2, r3, r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onReceivedError"
            r2.append(r0)
            java.lang.String r3 = r3.toString()
            r2.append(r3)
            java.lang.String r3 = "--"
            r2.append(r3)
            java.lang.String r3 = r4.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ymnsdk: "
            android.util.Log.e(r3, r2)
            return
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r4, android.webkit.WebResourceRequest r5) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L42
            android.net.Uri r0 = r5.getUrl()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "UTF-8"
            java.lang.String r0 = java.net.URLDecoder.decode(r0, r1)     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            java.lang.String r1 = "yy://return/"
            boolean r1 = r0.startsWith(r1)
            r2 = 1
            if (r1 == 0) goto L28
            com.github.lzyzsd.jsbridge.BridgeWebView r4 = r3.webView
            r4.handlerReturnData(r0)
            return r2
        L28:
            java.lang.String r1 = "yy://"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L36
            com.github.lzyzsd.jsbridge.BridgeWebView r4 = r3.webView
            r4.flushMessageQueue()
            return r2
        L36:
            boolean r0 = r3.onCustomShouldOverrideUrlLoading(r0)
            if (r0 == 0) goto L3d
            goto L41
        L3d:
            boolean r2 = super.shouldOverrideUrlLoading(r4, r5)
        L41:
            return r2
        L42:
            boolean r4 = super.shouldOverrideUrlLoading(r4, r5)
            return r4
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r4 = java.net.URLDecoder.decode(r4, r0)     // Catch: java.lang.Exception -> L7
            goto Lb
        L7:
            r0 = move-exception
            r0.printStackTrace()
        Lb:
            java.lang.String r0 = "yy://return/"
            boolean r0 = r4.startsWith(r0)
            r1 = 1
            if (r0 == 0) goto L1a
            com.github.lzyzsd.jsbridge.BridgeWebView r3 = r2.webView
            r3.handlerReturnData(r4)
            return r1
        L1a:
            java.lang.String r0 = "yy://"
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L28
            com.github.lzyzsd.jsbridge.BridgeWebView r3 = r2.webView
            r3.flushMessageQueue()
            return r1
        L28:
            boolean r0 = r2.onCustomShouldOverrideUrlLoading(r4)
            if (r0 == 0) goto L2f
            goto L33
        L2f:
            boolean r1 = super.shouldOverrideUrlLoading(r3, r4)
        L33:
            return r1
    }
}
