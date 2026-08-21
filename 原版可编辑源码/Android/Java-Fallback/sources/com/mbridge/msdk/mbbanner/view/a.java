package com.mbridge.msdk.mbbanner.view;

public final class a extends com.mbridge.msdk.mbjscommon.base.b {
    java.lang.String a;
    java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b;
    com.mbridge.msdk.mbbanner.common.b.a c;
    private final java.lang.String d;


    public a(java.lang.String r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, com.mbridge.msdk.mbbanner.common.b.a r4) {
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
            com.mbridge.msdk.mbbanner.view.a$1 r4 = new com.mbridge.msdk.mbbanner.view.a$1     // Catch: java.lang.Throwable -> L30
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L30
            r2.evaluateJavascript(r3, r4)     // Catch: java.lang.Throwable -> L30
            goto L38
        L30:
            r2 = move-exception
            java.lang.String r3 = "BannerWebViewClient"
            java.lang.String r4 = "onPageStarted"
            com.mbridge.msdk.foundation.tools.z.c(r3, r4, r2)
        L38:
            return
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r1, android.webkit.WebResourceRequest r2) {
            r0 = this;
            boolean r1 = super.shouldOverrideUrlLoading(r1, r2)
            return r1
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "BannerWebViewClient"
            r1 = 0
            java.lang.String r2 = "Use html to open url."
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> L58
            com.mbridge.msdk.mbjscommon.base.BaseWebView r7 = (com.mbridge.msdk.mbjscommon.base.BaseWebView) r7     // Catch: java.lang.Throwable -> L58
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L58
            long r4 = r7.lastTouchTime     // Catch: java.lang.Throwable -> L58
            long r2 = r2 - r4
            int r4 = com.mbridge.msdk.click.b.a.c     // Catch: java.lang.Throwable -> L58
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L58
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L2d
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.b     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L58
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L58
            int r3 = com.mbridge.msdk.click.b.a.b     // Catch: java.lang.Throwable -> L58
            boolean r7 = com.mbridge.msdk.click.b.a.a(r2, r7, r3)     // Catch: java.lang.Throwable -> L58
            if (r7 == 0) goto L2d
            return r1
        L2d:
            r7 = 0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r6.b     // Catch: java.lang.Throwable -> L58
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L58
            r3 = 1
            if (r2 <= r3) goto L4e
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L58
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L58
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Throwable -> L58
            java.lang.String r5 = "android.intent.action.VIEW"
            android.net.Uri r8 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L58
            r4.<init>(r5, r8)     // Catch: java.lang.Throwable -> L58
            r2.startActivity(r4)     // Catch: java.lang.Throwable -> L58
            r8 = r7
        L4e:
            com.mbridge.msdk.mbbanner.common.b.a r7 = r6.c     // Catch: java.lang.Throwable -> L58
            if (r7 == 0) goto L57
            com.mbridge.msdk.mbbanner.common.b.a r7 = r6.c     // Catch: java.lang.Throwable -> L58
            r7.a(r1, r8)     // Catch: java.lang.Throwable -> L58
        L57:
            return r3
        L58:
            r7 = move-exception
            java.lang.String r8 = "shouldOverrideUrlLoading"
            com.mbridge.msdk.foundation.tools.z.c(r0, r8, r7)
            return r1
    }
}
