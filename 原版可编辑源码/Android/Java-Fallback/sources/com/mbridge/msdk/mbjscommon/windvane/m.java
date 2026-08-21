package com.mbridge.msdk.mbjscommon.windvane;

public final class m extends com.mbridge.msdk.mbjscommon.base.b {
    public static boolean b = true;
    protected java.lang.String a;
    private int c;
    private com.mbridge.msdk.mbjscommon.windvane.d d;

    static {
            return
    }

    public m() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r0 = 0
            r1.c = r0
            return
    }

    private android.webkit.WebResourceResponse a(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "WindVaneWebViewClient"
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5e
            if (r1 != 0) goto L5e
            boolean r1 = com.mbridge.msdk.mbjscommon.windvane.k.d(r5)     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L5e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r1.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "is image "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5e
            r1.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L5e
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)     // Catch: java.lang.Throwable -> L5e
            android.graphics.Bitmap r1 = r1.a(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r2.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "find image from cache "
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            r2.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L5e
            boolean r0 = r1.isRecycled()     // Catch: java.lang.Throwable -> L5e
            if (r0 != 0) goto L5e
            android.webkit.WebResourceResponse r0 = new android.webkit.WebResourceResponse     // Catch: java.lang.Throwable -> L5e
            java.lang.String r5 = com.mbridge.msdk.mbjscommon.windvane.k.e(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "utf-8"
            java.io.InputStream r1 = com.mbridge.msdk.foundation.same.c.a.a(r1)     // Catch: java.lang.Throwable -> L5e
            r0.<init>(r5, r2, r1)     // Catch: java.lang.Throwable -> L5e
            return r0
        L5e:
            r5 = 0
            return r5
    }

    @Override
    public final void onPageStarted(android.webkit.WebView r2, java.lang.String r3, android.graphics.Bitmap r4) {
            r1 = this;
            super.onPageStarted(r2, r3, r4)
            r1.a = r3
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.d
            if (r0 == 0) goto Lc
            r0.a(r2, r3, r4)
        Lc:
            return
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            android.webkit.WebResourceResponse r0 = r2.a(r4)
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "find WebResourceResponse url is "
            r3.append(r1)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "WindVaneWebViewClient"
            com.mbridge.msdk.foundation.tools.z.b(r4, r3)
            return r0
        L1d:
            android.webkit.WebResourceResponse r3 = super.shouldInterceptRequest(r3, r4)
            return r3
    }
}
