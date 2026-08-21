package com.alipay.sdk.widget;

public class h extends com.alipay.sdk.widget.g {
    private com.alipay.sdk.app.b b;
    private android.webkit.WebView c;

    public h(android.app.Activity r2) {
            r1 = this;
            r1.<init>(r2)
            android.webkit.WebView r0 = new android.webkit.WebView
            r0.<init>(r2)
            r1.c = r0
            android.webkit.WebView r0 = r1.c
            r1.a(r0, r2)
            android.webkit.WebView r0 = r1.c
            r1.addView(r0)
            com.alipay.sdk.app.b r0 = new com.alipay.sdk.app.b
            r0.<init>(r2)
            r1.b = r0
            android.webkit.WebView r2 = r1.c
            com.alipay.sdk.app.b r0 = r1.b
            r2.setWebViewClient(r0)
            return
    }

    private void a(android.webkit.WebView r7, android.content.Context r8) {
            r6 = this;
            java.lang.String r7 = "accessibilityTraversal"
            java.lang.String r0 = "accessibility"
            java.lang.String r1 = "searchBoxJavaBridge_"
            android.webkit.WebView r2 = r6.c
            android.webkit.WebSettings r2 = r2.getSettings()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r2.getUserAgentString()
            r3.append(r4)
            java.lang.String r8 = com.alipay.sdk.util.n.c(r8)
            r3.append(r8)
            java.lang.String r8 = r3.toString()
            r2.setUserAgentString(r8)
            android.webkit.WebSettings$RenderPriority r8 = android.webkit.WebSettings.RenderPriority.HIGH
            r2.setRenderPriority(r8)
            r8 = 1
            r2.setSupportMultipleWindows(r8)
            r2.setJavaScriptEnabled(r8)
            r3 = 0
            r2.setSavePassword(r3)
            r2.setJavaScriptCanOpenWindowsAutomatically(r8)
            int r4 = r2.getMinimumFontSize()
            int r4 = r4 + 8
            r2.setMinimumFontSize(r4)
            r2.setAllowFileAccess(r3)
            android.webkit.WebSettings$TextSize r4 = android.webkit.WebSettings.TextSize.NORMAL
            r2.setTextSize(r4)
            r2.setDomStorageEnabled(r8)
            r2.setCacheMode(r8)
            android.webkit.WebView r2 = r6.c
            r2.resumeTimers()
            android.webkit.WebView r2 = r6.c
            r2.setVerticalScrollbarOverlay(r8)
            android.webkit.WebView r2 = r6.c
            com.alipay.sdk.widget.i r4 = new com.alipay.sdk.widget.i
            r4.<init>(r6)
            r2.setDownloadListener(r4)
            android.webkit.WebView r2 = r6.c     // Catch: java.lang.Throwable -> L74
            r2.removeJavascriptInterface(r1)     // Catch: java.lang.Throwable -> L74
            android.webkit.WebView r2 = r6.c     // Catch: java.lang.Throwable -> L74
            r2.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> L74
            android.webkit.WebView r2 = r6.c     // Catch: java.lang.Throwable -> L74
            r2.removeJavascriptInterface(r7)     // Catch: java.lang.Throwable -> L74
            goto L9f
        L74:
            android.webkit.WebView r2 = r6.c     // Catch: java.lang.Throwable -> L9f
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Throwable -> L9f
            java.lang.String r4 = "removeJavascriptInterface"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L9f
            java.lang.reflect.Method r2 = r2.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L9f
            if (r2 == 0) goto L9f
            android.webkit.WebView r4 = r6.c     // Catch: java.lang.Throwable -> L9f
            java.lang.Object[] r5 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L9f
            r5[r3] = r1     // Catch: java.lang.Throwable -> L9f
            r2.invoke(r4, r5)     // Catch: java.lang.Throwable -> L9f
            android.webkit.WebView r1 = r6.c     // Catch: java.lang.Throwable -> L9f
            java.lang.Object[] r4 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L9f
            r4[r3] = r0     // Catch: java.lang.Throwable -> L9f
            r2.invoke(r1, r4)     // Catch: java.lang.Throwable -> L9f
            android.webkit.WebView r0 = r6.c     // Catch: java.lang.Throwable -> L9f
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L9f
            r8[r3] = r7     // Catch: java.lang.Throwable -> L9f
            r2.invoke(r0, r8)     // Catch: java.lang.Throwable -> L9f
        L9f:
            return
    }

    @Override
    public void a() {
            r1 = this;
            com.alipay.sdk.app.b r0 = r1.b
            r0.a()
            r1.removeAllViews()
            return
    }

    @Override
    public void a(java.lang.String r2) {
            r1 = this;
            android.webkit.WebView r0 = r1.c
            r0.loadUrl(r2)
            return
    }

    @Override
    public boolean b() {
            r3 = this;
            android.webkit.WebView r0 = r3.c
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L31
            com.alipay.sdk.app.b r0 = r3.b
            boolean r0 = r0.b()
            if (r0 == 0) goto L3d
            com.alipay.sdk.app.k r0 = com.alipay.sdk.app.k.d
            int r0 = r0.a()
            com.alipay.sdk.app.k r0 = com.alipay.sdk.app.k.b(r0)
            int r1 = r0.a()
            java.lang.String r0 = r0.b()
            java.lang.String r2 = ""
            java.lang.String r0 = com.alipay.sdk.app.j.a(r1, r0, r2)
            com.alipay.sdk.app.j.a(r0)
            android.app.Activity r0 = r3.a
            r0.finish()
            goto L3d
        L31:
            java.lang.String r0 = com.alipay.sdk.app.j.c()
            com.alipay.sdk.app.j.a(r0)
            android.app.Activity r0 = r3.a
            r0.finish()
        L3d:
            r0 = 1
            return r0
    }
}
