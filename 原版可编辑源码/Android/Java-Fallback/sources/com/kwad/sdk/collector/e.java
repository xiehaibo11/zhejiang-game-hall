package com.kwad.sdk.collector;

public final class e {
    public static java.lang.String cl(java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto L26
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> L22
            r0.<init>(r3)     // Catch: java.io.IOException -> L22
            byte[] r3 = com.kwad.sdk.utils.q.U(r0)     // Catch: java.io.IOException -> L22
            byte[] r3 = com.kwad.sdk.utils.m.k(r3)     // Catch: java.io.IOException -> L22
            com.kwad.sdk.core.a.c$b r0 = com.kwad.sdk.core.a.c.AJ()
            byte[] r3 = r0.encode(r3)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            return r0
        L22:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L26:
            return r1
    }
}
