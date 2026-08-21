package com.mbridge.msdk.advanced.view;

public final class a extends com.mbridge.msdk.mbjscommon.base.b {
    java.lang.String a;
    com.mbridge.msdk.advanced.c.a b;
    private final java.lang.String c;
    private com.mbridge.msdk.advanced.c.c d;


    public a(java.lang.String r2, com.mbridge.msdk.advanced.c.a r3, com.mbridge.msdk.advanced.c.c r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NativeAdvancedWebViewClient"
            r1.c = r0
            r1.a = r2
            r1.b = r3
            r1.d = r4
            return
    }

    private android.webkit.WebResourceResponse a(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L7a
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            r0 = 0
            if (r3 != 0) goto L21
            android.net.Uri r3 = android.net.Uri.parse(r4)
            if (r3 == 0) goto L21
            java.lang.String r3 = r3.getScheme()
            java.lang.String r1 = "mb-h5"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L21
            r3 = 1
            r0 = r3
        L21:
            if (r0 == 0) goto L7a
            com.mbridge.msdk.advanced.c.c r3 = r2.d
            if (r3 == 0) goto L7a
            android.net.Uri r3 = android.net.Uri.parse(r4)
            java.lang.String r4 = "uri"
            java.lang.String r3 = r3.getQueryParameter(r4)
            java.lang.String r3 = java.net.URLDecoder.decode(r3)
            com.mbridge.msdk.advanced.c.c r4 = r2.d
            java.lang.String r3 = r4.d(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.io.FileNotFoundException -> L76
            if (r4 != 0) goto L7a
            java.lang.String r4 = "webviewclient"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.FileNotFoundException -> L76
            r0.<init>()     // Catch: java.io.FileNotFoundException -> L76
            java.lang.String r1 = "relace url"
            r0.append(r1)     // Catch: java.io.FileNotFoundException -> L76
            r0.append(r3)     // Catch: java.io.FileNotFoundException -> L76
            java.lang.String r0 = r0.toString()     // Catch: java.io.FileNotFoundException -> L76
            com.mbridge.msdk.foundation.tools.z.a(r4, r0)     // Catch: java.io.FileNotFoundException -> L76
            java.lang.String r4 = "127.0.0.1"
            boolean r4 = r3.contains(r4)     // Catch: java.io.FileNotFoundException -> L76
            if (r4 != 0) goto L7a
            java.lang.String r4 = "http"
            boolean r4 = r3.startsWith(r4)     // Catch: java.io.FileNotFoundException -> L76
            if (r4 != 0) goto L7a
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L76
            r4.<init>(r3)     // Catch: java.io.FileNotFoundException -> L76
            android.webkit.WebResourceResponse r3 = new android.webkit.WebResourceResponse     // Catch: java.io.FileNotFoundException -> L76
            java.lang.String r0 = "video/mp4"
            java.lang.String r1 = "utf-8"
            r3.<init>(r0, r1, r4)     // Catch: java.io.FileNotFoundException -> L76
            return r3
        L76:
            r3 = move-exception
            r3.printStackTrace()
        L7a:
            r3 = 0
            return r3
    }

    public final void a() {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.d
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
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "javascript:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.c.b.b r4 = com.mbridge.msdk.c.b.b.a()     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = r4.b()     // Catch: java.lang.Throwable -> L30
            r3.append(r4)     // Catch: java.lang.Throwable -> L30
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L30
            r0 = 19
            if (r4 > r0) goto L23
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L30
            r2.loadUrl(r3)     // Catch: java.lang.Throwable -> L30
            goto L38
        L23:
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.advanced.view.a$1 r4 = new com.mbridge.msdk.advanced.view.a$1     // Catch: java.lang.Throwable -> L30
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L30
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L30
            goto L38
        L30:
            r2 = move-exception
            java.lang.String r3 = "NativeAdvancedWebViewClient"
            java.lang.String r4 = "onPageStarted"
            com.mbridge.msdk.foundation.tools.z.c(r3, r4, r2)
        L38:
            return
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r3, android.webkit.WebResourceRequest r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            android.net.Uri r4 = r4.getUrl()
            java.lang.String r4 = r4.toString()
            goto L11
        Lf:
            java.lang.String r4 = ""
        L11:
            android.webkit.WebResourceResponse r3 = r2.a(r3, r4)
            return r3
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "============shouldInterceptRequest:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NativeAdvancedWebViewClient"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            android.webkit.WebResourceResponse r3 = r2.a(r3, r4)
            return r3
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "NativeAdvancedWebViewClient"
            r1 = 0
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = (com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView) r7     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            long r4 = r7.lastTouchTime     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            long r2 = r2 - r4
            int r4 = com.mbridge.msdk.click.b.a.c     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L36
            java.lang.Object r2 = r7.getObject()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            com.mbridge.msdk.advanced.js.a r2 = (com.mbridge.msdk.advanced.js.a) r2     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.util.List r2 = r2.a()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            int r3 = com.mbridge.msdk.click.b.a.b     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            boolean r7 = com.mbridge.msdk.click.b.a.a(r2, r7, r3)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            if (r7 == 0) goto L36
            return r1
        L30:
            r7 = move-exception
            goto L46
        L32:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L30
        L36:
            java.lang.String r7 = "Use html to open url."
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.advanced.c.a r7 = r6.b     // Catch: java.lang.Throwable -> L30
            if (r7 == 0) goto L44
            com.mbridge.msdk.advanced.c.a r7 = r6.b     // Catch: java.lang.Throwable -> L30
            r7.a(r1, r8)     // Catch: java.lang.Throwable -> L30
        L44:
            r7 = 1
            return r7
        L46:
            java.lang.String r8 = "shouldOverrideUrlLoading"
            com.mbridge.msdk.foundation.tools.z.c(r0, r8, r7)
            return r1
    }
}
