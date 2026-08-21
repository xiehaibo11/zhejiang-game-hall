package com.tkay.expressad.advanced.view;

public final class a extends com.tkay.expressad.atsignalcommon.base.b {
    java.lang.String a;
    com.tkay.expressad.advanced.d.a b;
    private final java.lang.String c;
    private com.tkay.expressad.advanced.d.c d;


    public a(java.lang.String r2, com.tkay.expressad.advanced.d.a r3, com.tkay.expressad.advanced.d.c r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NativeAdvancedWebViewClient"
            r1.c = r0
            r1.a = r2
            r1.b = r3
            r1.d = r4
            return
    }

    private android.webkit.WebResourceResponse a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L63
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L20
            android.net.Uri r0 = android.net.Uri.parse(r4)
            if (r0 == 0) goto L20
            java.lang.String r0 = r0.getScheme()
            java.lang.String r2 = "mb-h5"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L20
            r1 = 1
        L20:
            if (r1 == 0) goto L63
            com.tkay.expressad.advanced.d.c r0 = r3.d
            if (r0 == 0) goto L63
            android.net.Uri r4 = android.net.Uri.parse(r4)
            java.lang.String r0 = "uri"
            java.lang.String r4 = r4.getQueryParameter(r0)
            java.lang.String r4 = java.net.URLDecoder.decode(r4)
            com.tkay.expressad.advanced.d.c r0 = r3.d
            java.lang.String r4 = r0.a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.io.FileNotFoundException -> L5f
            if (r0 != 0) goto L63
            java.lang.String r0 = "127.0.0.1"
            boolean r0 = r4.contains(r0)     // Catch: java.io.FileNotFoundException -> L5f
            if (r0 != 0) goto L63
            java.lang.String r0 = "http"
            boolean r0 = r4.startsWith(r0)     // Catch: java.io.FileNotFoundException -> L5f
            if (r0 != 0) goto L63
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L5f
            r0.<init>(r4)     // Catch: java.io.FileNotFoundException -> L5f
            android.webkit.WebResourceResponse r4 = new android.webkit.WebResourceResponse     // Catch: java.io.FileNotFoundException -> L5f
            java.lang.String r1 = "video/mp4"
            java.lang.String r2 = "utf-8"
            r4.<init>(r1, r2, r0)     // Catch: java.io.FileNotFoundException -> L5f
            return r4
        L5f:
            r4 = move-exception
            r4.printStackTrace()
        L63:
            r4 = 0
            return r4
    }

    private static boolean b(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto L1b
            android.net.Uri r2 = android.net.Uri.parse(r2)
            if (r2 == 0) goto L1b
            java.lang.String r2 = r2.getScheme()
            java.lang.String r0 = "mb-h5"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1b
            r2 = 1
            return r2
        L1b:
            return r1
    }

    public final void a() {
            r1 = this;
            com.tkay.expressad.advanced.d.c r0 = r1.d
            if (r0 == 0) goto L7
            r0 = 0
            r1.d = r0
        L7:
            return
    }

    @Override
    public final void onPageStarted(android.webkit.WebView r2, java.lang.String r3, android.graphics.Bitmap r4) {
            r1 = this;
            super.onPageStarted(r2, r3, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = "javascript:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.d.b.a.a()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = com.tkay.expressad.d.b.a.b()     // Catch: java.lang.Throwable -> L2e
            r3.append(r4)     // Catch: java.lang.Throwable -> L2e
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2e
            r0 = 19
            if (r4 > r0) goto L22
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2e
            r2.loadUrl(r3)     // Catch: java.lang.Throwable -> L2e
            return
        L22:
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.advanced.view.a$1 r4 = new com.tkay.expressad.advanced.view.a$1     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2e
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r2, android.webkit.WebResourceRequest r3) {
            r1 = this;
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r2 < r0) goto Lf
            android.net.Uri r2 = r3.getUrl()
            java.lang.String r2 = r2.toString()
            goto L11
        Lf:
            java.lang.String r2 = ""
        L11:
            android.webkit.WebResourceResponse r2 = r1.a(r2)
            return r2
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r1, java.lang.String r2) {
            r0 = this;
            android.webkit.WebResourceResponse r1 = r0.a(r2)
            return r1
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = (com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView) r6     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            long r3 = r6.lastTouchTime     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            long r1 = r1 - r3
            int r3 = com.tkay.expressad.a.b.a.c     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            long r3 = (long) r3     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L31
            java.lang.Object r1 = r6.getObject()     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r1 = (com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl) r1     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            java.util.List r1 = r1.getmCampaignList()     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            r6.getUrl()     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            int r6 = com.tkay.expressad.a.b.a.b     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            boolean r6 = com.tkay.expressad.a.b.a.a(r1)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L3c
            if (r6 == 0) goto L31
            return r0
        L2d:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L3c
        L31:
            com.tkay.expressad.advanced.d.a r6 = r5.b     // Catch: java.lang.Throwable -> L3c
            if (r6 == 0) goto L3a
            com.tkay.expressad.advanced.d.a r6 = r5.b     // Catch: java.lang.Throwable -> L3c
            r6.a(r7)     // Catch: java.lang.Throwable -> L3c
        L3a:
            r6 = 1
            return r6
        L3c:
            return r0
    }
}
