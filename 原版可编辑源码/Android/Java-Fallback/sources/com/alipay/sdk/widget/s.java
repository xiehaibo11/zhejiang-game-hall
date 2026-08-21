package com.alipay.sdk.widget;

class s extends android.webkit.WebChromeClient {
    final com.alipay.sdk.widget.WebViewWindow a;

    s(com.alipay.sdk.widget.WebViewWindow r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public boolean onJsPrompt(android.webkit.WebView r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, android.webkit.JsPromptResult r11) {
            r6 = this;
            com.alipay.sdk.widget.WebViewWindow r7 = r6.a
            com.alipay.sdk.widget.WebViewWindow$a r0 = com.alipay.sdk.widget.WebViewWindow.e(r7)
            com.alipay.sdk.widget.WebViewWindow r1 = r6.a
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public void onProgressChanged(android.webkit.WebView r2, int r3) {
            r1 = this;
            r2 = 4
            r0 = 100
            if (r3 != r0) goto Lf
            com.alipay.sdk.widget.WebViewWindow r3 = r1.a
            android.widget.ProgressBar r3 = com.alipay.sdk.widget.WebViewWindow.d(r3)
            r3.setVisibility(r2)
            goto L2e
        Lf:
            com.alipay.sdk.widget.WebViewWindow r0 = r1.a
            android.widget.ProgressBar r0 = com.alipay.sdk.widget.WebViewWindow.d(r0)
            int r0 = r0.getVisibility()
            if (r2 != r0) goto L25
            com.alipay.sdk.widget.WebViewWindow r2 = r1.a
            android.widget.ProgressBar r2 = com.alipay.sdk.widget.WebViewWindow.d(r2)
            r0 = 0
            r2.setVisibility(r0)
        L25:
            com.alipay.sdk.widget.WebViewWindow r2 = r1.a
            android.widget.ProgressBar r2 = com.alipay.sdk.widget.WebViewWindow.d(r2)
            r2.setProgress(r3)
        L2e:
            return
    }

    @Override
    public void onReceivedTitle(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            com.alipay.sdk.widget.WebViewWindow r2 = r1.a
            com.alipay.sdk.widget.WebViewWindow$a r2 = com.alipay.sdk.widget.WebViewWindow.e(r2)
            com.alipay.sdk.widget.WebViewWindow r0 = r1.a
            r2.a(r0, r3)
            return
    }
}
