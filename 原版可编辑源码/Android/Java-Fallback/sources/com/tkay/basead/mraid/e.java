package com.tkay.basead.mraid;

public final class e extends com.tkay.expressad.atsignalcommon.base.b {
    final java.lang.String a;
    java.lang.String b;
    com.tkay.basead.mraid.b c;


    public e(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            r1.b = r2
            return
    }

    private void a(com.tkay.basead.mraid.b r1) {
            r0 = this;
            r0.c = r1
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
            com.tkay.basead.mraid.e$1 r4 = new com.tkay.basead.mraid.e$1     // Catch: java.lang.Throwable -> L2e
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
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r2 = r1.b     // Catch: java.lang.Throwable -> L14
            boolean r2 = android.text.TextUtils.equals(r3, r2)     // Catch: java.lang.Throwable -> L14
            r0 = 1
            if (r2 == 0) goto La
            return r0
        La:
            com.tkay.basead.mraid.b r2 = r1.c     // Catch: java.lang.Throwable -> L14
            if (r2 == 0) goto L13
            com.tkay.basead.mraid.b r2 = r1.c     // Catch: java.lang.Throwable -> L14
            r2.open(r3)     // Catch: java.lang.Throwable -> L14
        L13:
            return r0
        L14:
            r2 = 0
            return r2
    }
}
