package com.tkay.expressad.mbbanner.view;

public final class a extends com.tkay.expressad.atsignalcommon.base.b {
    java.lang.String a;
    java.util.List<com.tkay.expressad.foundation.d.c> b;
    com.tkay.expressad.mbbanner.a.c.a c;
    private final java.lang.String d;


    public a(java.lang.String r2, java.util.List<com.tkay.expressad.foundation.d.c> r3, com.tkay.expressad.mbbanner.a.c.a r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "BannerWebViewClient"
            r1.d = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
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
            com.tkay.expressad.mbbanner.view.a$1 r4 = new com.tkay.expressad.mbbanner.view.a$1     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2e
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r1, android.webkit.WebResourceRequest r2) {
            r0 = this;
            boolean r1 = super.shouldOverrideUrlLoading(r1, r2)
            return r1
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            com.tkay.expressad.atsignalcommon.base.BaseWebView r6 = (com.tkay.expressad.atsignalcommon.base.BaseWebView) r6     // Catch: java.lang.Throwable -> L50
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            long r3 = r6.lastTouchTime     // Catch: java.lang.Throwable -> L50
            long r1 = r1 - r3
            int r3 = com.tkay.expressad.a.b.a.c     // Catch: java.lang.Throwable -> L50
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L50
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L25
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.b     // Catch: java.lang.Throwable -> L50
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L50
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Throwable -> L50
            r6.getUrl()     // Catch: java.lang.Throwable -> L50
            int r6 = com.tkay.expressad.a.b.a.b     // Catch: java.lang.Throwable -> L50
            boolean r6 = com.tkay.expressad.a.b.a.a(r1)     // Catch: java.lang.Throwable -> L50
            if (r6 == 0) goto L25
            return r0
        L25:
            r6 = 0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.b     // Catch: java.lang.Throwable -> L50
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L50
            r2 = 1
            if (r1 <= r2) goto L46
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L50
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L50
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = "android.intent.action.VIEW"
            android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.lang.Throwable -> L50
            r3.<init>(r4, r7)     // Catch: java.lang.Throwable -> L50
            r1.startActivity(r3)     // Catch: java.lang.Throwable -> L50
            r7 = r6
        L46:
            com.tkay.expressad.mbbanner.a.c.a r6 = r5.c     // Catch: java.lang.Throwable -> L50
            if (r6 == 0) goto L4f
            com.tkay.expressad.mbbanner.a.c.a r6 = r5.c     // Catch: java.lang.Throwable -> L50
            r6.a(r0, r7)     // Catch: java.lang.Throwable -> L50
        L4f:
            return r2
        L50:
            return r0
    }
}
