package com.alipay.sdk.widget;

class t extends android.webkit.WebViewClient {
    final com.alipay.sdk.widget.WebViewWindow a;

    t(com.alipay.sdk.widget.WebViewWindow r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onPageFinished(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r2.a
            com.alipay.sdk.widget.WebViewWindow$b r0 = com.alipay.sdk.widget.WebViewWindow.f(r0)
            com.alipay.sdk.widget.WebViewWindow r1 = r2.a
            boolean r0 = r0.c(r1, r4)
            if (r0 != 0) goto L11
            super.onPageFinished(r3, r4)
        L11:
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r3, int r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r2.a
            com.alipay.sdk.widget.WebViewWindow$b r0 = com.alipay.sdk.widget.WebViewWindow.f(r0)
            com.alipay.sdk.widget.WebViewWindow r1 = r2.a
            boolean r0 = r0.a(r1, r4, r5, r6)
            if (r0 != 0) goto L11
            super.onReceivedError(r3, r4, r5, r6)
        L11:
            return
    }

    @Override
    public void onReceivedSslError(android.webkit.WebView r3, android.webkit.SslErrorHandler r4, android.net.http.SslError r5) {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r2.a
            com.alipay.sdk.widget.WebViewWindow$b r0 = com.alipay.sdk.widget.WebViewWindow.f(r0)
            com.alipay.sdk.widget.WebViewWindow r1 = r2.a
            boolean r0 = r0.a(r1, r4, r5)
            if (r0 != 0) goto L11
            super.onReceivedSslError(r3, r4, r5)
        L11:
            return
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r2.a
            com.alipay.sdk.widget.WebViewWindow$b r0 = com.alipay.sdk.widget.WebViewWindow.f(r0)
            com.alipay.sdk.widget.WebViewWindow r1 = r2.a
            boolean r0 = r0.b(r1, r4)
            if (r0 != 0) goto L13
            boolean r3 = super.shouldOverrideUrlLoading(r3, r4)
            return r3
        L13:
            r3 = 1
            return r3
    }
}
