package com.kwad.sdk.core.diskcache.b;

public final class b {


    static java.io.File a(com.kwad.sdk.core.diskcache.a.a r0, java.lang.String r1) {
            com.kwad.sdk.core.diskcache.a.a$c r0 = r0.cA(r1)     // Catch: java.io.IOException -> Lc
            if (r0 == 0) goto Lc
            r1 = 0
            java.io.File r0 = r0.bW(r1)     // Catch: java.io.IOException -> Lc
            return r0
        Lc:
            r0 = 0
            return r0
    }

    static void a(com.kwad.sdk.core.diskcache.a.a r1, java.lang.String r2, java.lang.String r3) {
            com.kwad.sdk.core.diskcache.b.b$1 r0 = new com.kwad.sdk.core.diskcache.b.b$1
            r0.<init>(r1, r3, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    static boolean a(com.kwad.sdk.core.diskcache.a.a r2, java.lang.String r3, java.lang.String r4, com.kwad.sdk.core.network.a.a.a r5) {
            r0 = 0
            r1 = 0
            com.kwad.sdk.core.diskcache.a.a$a r4 = r2.cB(r4)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            if (r4 == 0) goto L1d
            java.io.OutputStream r1 = r4.bT(r0)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            boolean r3 = a(r3, r1, r5)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            if (r3 == 0) goto L17
            r4.commit()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            r0 = 1
            goto L1a
        L17:
            r4.abort()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
        L1a:
            r2.flush()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
        L1d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            goto L2b
        L21:
            r2 = move-exception
            goto L2c
        L23:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L21
            r5.msg = r2     // Catch: java.lang.Throwable -> L21
            goto L1d
        L2b:
            return r0
        L2c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r2
    }

    public static boolean a(java.lang.String r1, java.io.OutputStream r2, com.kwad.sdk.core.network.a.a.a r3) {
            r0 = -1
            boolean r1 = com.kwad.sdk.core.network.a.a.a(r1, r2, r3, r0)
            return r1
    }
}
