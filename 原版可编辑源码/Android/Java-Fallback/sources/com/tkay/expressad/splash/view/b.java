package com.tkay.expressad.splash.view;

public final class b extends com.tkay.expressad.atsignalcommon.base.b {
    java.lang.String a;
    com.tkay.expressad.splash.d.a b;
    private final java.lang.String c;


    public b(java.lang.String r2, com.tkay.expressad.splash.d.a r3) {
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
            com.tkay.expressad.splash.view.b$1 r4 = new com.tkay.expressad.splash.view.b$1     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2e
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = (com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView) r6     // Catch: java.lang.Throwable -> L38
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L38
            long r3 = r6.lastTouchTime     // Catch: java.lang.Throwable -> L38
            long r1 = r1 - r3
            int r3 = com.tkay.expressad.a.b.a.c     // Catch: java.lang.Throwable -> L38
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L38
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L2d
            java.lang.Object r1 = r6.getObject()     // Catch: java.lang.Throwable -> L38
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r1 = (com.tkay.expressad.splash.js.SplashJSBridgeImpl) r1     // Catch: java.lang.Throwable -> L38
            java.util.List r1 = r1.getmCampaignList()     // Catch: java.lang.Throwable -> L38
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L38
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L38
            r6.getUrl()     // Catch: java.lang.Throwable -> L38
            int r6 = com.tkay.expressad.a.b.a.b     // Catch: java.lang.Throwable -> L38
            boolean r6 = com.tkay.expressad.a.b.a.a(r1)     // Catch: java.lang.Throwable -> L38
            if (r6 == 0) goto L2d
            return r0
        L2d:
            com.tkay.expressad.splash.d.a r6 = r5.b     // Catch: java.lang.Throwable -> L38
            if (r6 == 0) goto L36
            com.tkay.expressad.splash.d.a r6 = r5.b     // Catch: java.lang.Throwable -> L38
            r6.b(r7)     // Catch: java.lang.Throwable -> L38
        L36:
            r6 = 1
            return r6
        L38:
            return r0
    }
}
