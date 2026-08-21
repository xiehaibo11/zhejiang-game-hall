package com.tkay.expressad.atsignalcommon.windvane;

public final class p extends com.tkay.expressad.atsignalcommon.base.b {
    public static final java.lang.String a = "WindVaneWebViewClient";
    public static final int c = 0;
    public static final int d = 1;
    public static final java.lang.String e = "mmusdk_cache";
    public static final java.lang.String f = "1";
    public static boolean g = true;
    protected java.lang.String b;
    private int h;
    private com.tkay.expressad.atsignalcommon.windvane.e i;

    static {
            return
    }

    public p() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            return
    }

    private p(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            r1.h = r2
            return
    }

    private static android.webkit.WebResourceResponse a(java.lang.String r5) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L5d
            boolean r1 = com.tkay.expressad.atsignalcommon.windvane.n.d(r5)     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L5d
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L5d
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)     // Catch: java.lang.Throwable -> L5d
            boolean r2 = com.tkay.expressad.foundation.h.t.a(r5)     // Catch: java.lang.Throwable -> L5d
            if (r2 != 0) goto L44
            java.lang.String r2 = com.tkay.expressad.foundation.h.s.a(r5)     // Catch: java.lang.Throwable -> L5d
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L5d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L5d
            android.graphics.Bitmap r4 = r1.a(r5)     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L33
            android.graphics.Bitmap r1 = r1.a(r5)     // Catch: java.lang.Throwable -> L5d
            goto L45
        L33:
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L5d
            if (r3 == 0) goto L44
            android.graphics.Bitmap r2 = com.tkay.expressad.foundation.g.d.a.a(r2)     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L44
            r1.a(r5, r2)     // Catch: java.lang.Throwable -> L5d
            r1 = r2
            goto L45
        L44:
            r1 = r0
        L45:
            if (r1 == 0) goto L5d
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L5d
            if (r2 != 0) goto L5d
            android.webkit.WebResourceResponse r2 = new android.webkit.WebResourceResponse     // Catch: java.lang.Throwable -> L5d
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.windvane.n.e(r5)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = "utf-8"
            java.io.InputStream r1 = com.tkay.expressad.foundation.g.d.a.a(r1)     // Catch: java.lang.Throwable -> L5d
            r2.<init>(r5, r3, r1)     // Catch: java.lang.Throwable -> L5d
            return r2
        L5d:
            return r0
    }

    private static java.lang.String a(java.io.InputStream r3) {
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            r1.<init>(r3)
            r0.<init>(r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
        Lf:
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            if (r1 == 0) goto L30
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            r2.append(r1)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            java.lang.String r1 = "\n"
            r2.append(r1)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            r3.append(r1)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c
            goto Lf
        L2a:
            r3 = move-exception
            goto L35
        L2c:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2a
        L30:
            java.lang.String r3 = r3.toString()
            return r3
        L35:
            throw r3
    }

    private void b(com.tkay.expressad.atsignalcommon.windvane.e r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public final void onPageStarted(android.webkit.WebView r2, java.lang.String r3, android.graphics.Bitmap r4) {
            r1 = this;
            super.onPageStarted(r2, r3, r4)
            r1.b = r3
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r1.i
            if (r0 == 0) goto Lc
            r0.onPageStarted(r2, r3, r4)
        Lc:
            return
    }

    @Override
    public final android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            android.webkit.WebResourceResponse r0 = a(r3)
            if (r0 == 0) goto L7
            return r0
        L7:
            android.webkit.WebResourceResponse r2 = super.shouldInterceptRequest(r2, r3)
            return r2
    }
}
