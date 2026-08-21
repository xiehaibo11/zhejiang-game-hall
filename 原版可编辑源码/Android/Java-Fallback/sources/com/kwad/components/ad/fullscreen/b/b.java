package com.kwad.components.ad.fullscreen.b;

public class b extends com.kwad.sdk.core.response.a.a {
    private static java.text.SimpleDateFormat ga;
    public long gb;
    public int gc;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            com.kwad.components.ad.fullscreen.b.b.ga = r0
            return
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.gb = r0
            r0 = -1
            r2.gc = r0
            return
    }

    public b(long r3, int r5) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.gb = r0
            r5 = -1
            r2.gc = r5
            r2.gb = r3
            r3 = 1
            r2.gc = r3
            return
    }

    public final boolean e(long r6) {
            r5 = this;
            long r0 = r5.gb
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 <= 0) goto L2f
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 > 0) goto Le
            goto L2f
        Le:
            java.text.SimpleDateFormat r0 = com.kwad.components.ad.fullscreen.b.b.ga     // Catch: java.lang.Exception -> L2b
            java.util.Date r2 = new java.util.Date     // Catch: java.lang.Exception -> L2b
            long r3 = r5.gb     // Catch: java.lang.Exception -> L2b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2b
            java.lang.String r0 = r0.format(r2)     // Catch: java.lang.Exception -> L2b
            java.text.SimpleDateFormat r2 = com.kwad.components.ad.fullscreen.b.b.ga     // Catch: java.lang.Exception -> L2b
            java.util.Date r3 = new java.util.Date     // Catch: java.lang.Exception -> L2b
            r3.<init>(r6)     // Catch: java.lang.Exception -> L2b
            java.lang.String r6 = r2.format(r3)     // Catch: java.lang.Exception -> L2b
            boolean r6 = r0.equals(r6)     // Catch: java.lang.Exception -> L2b
            return r6
        L2b:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
        L2f:
            return r1
    }

    public final boolean v(int r2) {
            r1 = this;
            int r0 = r1.gc
            if (r0 <= 0) goto L8
            if (r0 < r2) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }
}
