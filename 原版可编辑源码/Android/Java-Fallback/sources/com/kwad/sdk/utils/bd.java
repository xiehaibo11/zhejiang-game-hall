package com.kwad.sdk.utils;

public final class bd {
    private static java.lang.Class<?> aJB;

    private static java.lang.String fK(java.lang.String r3) {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.io.IOException -> L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L1f
            java.lang.String r2 = "getprop "
            r1.<init>(r2)     // Catch: java.io.IOException -> L1f
            r1.append(r3)     // Catch: java.io.IOException -> L1f
            java.lang.String r3 = r1.toString()     // Catch: java.io.IOException -> L1f
            java.lang.Process r3 = r0.exec(r3)     // Catch: java.io.IOException -> L1f
            java.io.InputStream r3 = r3.getInputStream()     // Catch: java.io.IOException -> L1f
            java.lang.String r3 = com.kwad.sdk.crash.utils.h.c(r3)     // Catch: java.io.IOException -> L1f
            goto L24
        L1f:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            r3 = 0
        L24:
            return r3
    }

    public static java.lang.String get(java.lang.String r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r1 = "get"
            java.lang.Object r0 = j(r1, r0)
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L13
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L13:
            java.lang.String r2 = fK(r2)
            return r2
    }

    private static java.lang.Object j(java.lang.String r1, java.lang.Object... r2) {
            java.lang.Class<?> r0 = com.kwad.sdk.utils.bd.aJB     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto Lc
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L13
            com.kwad.sdk.utils.bd.aJB = r0     // Catch: java.lang.Throwable -> L13
        Lc:
            java.lang.Class<?> r0 = com.kwad.sdk.utils.bd.aJB     // Catch: java.lang.Throwable -> L13
            java.lang.Object r1 = com.kwad.sdk.utils.s.c(r0, r1, r2)     // Catch: java.lang.Throwable -> L13
            return r1
        L13:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            r1 = 0
            return r1
    }
}
