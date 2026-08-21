package com.mbridge.msdk.splash.view;

public final class a extends com.mbridge.msdk.mbjscommon.base.b {
    java.lang.String a;
    com.mbridge.msdk.splash.d.a b;
    private final java.lang.String c;


    public a(java.lang.String r2, com.mbridge.msdk.splash.d.a r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "SplashWebViewClient"
            r1.c = r0
            r1.a = r2
            r1.b = r3
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
            com.mbridge.msdk.splash.view.a$1 r4 = new com.mbridge.msdk.splash.view.a$1     // Catch: java.lang.Throwable -> L30
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L30
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L30
            goto L38
        L30:
            r2 = move-exception
            java.lang.String r3 = "SplashWebViewClient"
            java.lang.String r4 = "onPageStarted"
            com.mbridge.msdk.foundation.tools.z.c(r3, r4, r2)
        L38:
            return
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "SplashWebViewClient"
            r1 = 0
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = (com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView) r7     // Catch: java.lang.Throwable -> L40
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L40
            long r4 = r7.lastTouchTime     // Catch: java.lang.Throwable -> L40
            long r2 = r2 - r4
            int r4 = com.mbridge.msdk.click.b.a.c     // Catch: java.lang.Throwable -> L40
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L40
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L30
            java.lang.Object r2 = r7.getObject()     // Catch: java.lang.Throwable -> L40
            com.mbridge.msdk.splash.js.b r2 = (com.mbridge.msdk.splash.js.b) r2     // Catch: java.lang.Throwable -> L40
            java.util.List r2 = r2.b()     // Catch: java.lang.Throwable -> L40
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L40
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L40
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L40
            int r3 = com.mbridge.msdk.click.b.a.b     // Catch: java.lang.Throwable -> L40
            boolean r7 = com.mbridge.msdk.click.b.a.a(r2, r7, r3)     // Catch: java.lang.Throwable -> L40
            if (r7 == 0) goto L30
            return r1
        L30:
            java.lang.String r7 = "Use html to open url."
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)     // Catch: java.lang.Throwable -> L40
            com.mbridge.msdk.splash.d.a r7 = r6.b     // Catch: java.lang.Throwable -> L40
            if (r7 == 0) goto L3e
            com.mbridge.msdk.splash.d.a r7 = r6.b     // Catch: java.lang.Throwable -> L40
            r7.a(r1, r8)     // Catch: java.lang.Throwable -> L40
        L3e:
            r7 = 1
            return r7
        L40:
            r7 = move-exception
            java.lang.String r8 = "shouldOverrideUrlLoading"
            com.mbridge.msdk.foundation.tools.z.c(r0, r8, r7)
            return r1
    }
}
