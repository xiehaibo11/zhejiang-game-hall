package com.tkay.expressad.videocommon.b;

public final class e {
    public static final java.lang.String a = "<tkayloadend></tkayloadend>";
    private static final java.lang.String b = "DownLoadUtils";
    private static final int c = 20000;
    private static final int d = 30000;


    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r2, com.tkay.expressad.videocommon.b.g.c r3) {
            boolean r0 = com.tkay.expressad.foundation.h.w.a(r2)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L18
            boolean r0 = android.webkit.URLUtil.isNetworkUrl(r2)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto Ld
            goto L18
        Ld:
            com.tkay.expressad.videocommon.b.f r0 = com.tkay.expressad.videocommon.b.f.a.a     // Catch: java.lang.Throwable -> L1e
            com.tkay.expressad.videocommon.b.e$1 r1 = new com.tkay.expressad.videocommon.b.e$1     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1e
            r0.a(r1)     // Catch: java.lang.Throwable -> L1e
            return
        L18:
            java.lang.String r2 = "url is error"
            r3.a(r2)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r2 = move-exception
            boolean r3 = com.tkay.expressad.b.a
            if (r3 == 0) goto L26
            r2.printStackTrace()
        L26:
            return
    }
}
