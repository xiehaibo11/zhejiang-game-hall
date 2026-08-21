package com.kwad.sdk.core.webview.b.b;

public final class b {
    public static synchronized boolean a(android.content.Context r8, com.kwad.sdk.h.a.b r9) {
            java.lang.Class<com.kwad.sdk.core.webview.b.b.b> r0 = com.kwad.sdk.core.webview.b.b.b.class
            monitor-enter(r0)
            java.lang.String r1 = r9.aCd     // Catch: java.lang.Throwable -> L5b
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L5b
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L5b
            boolean r3 = com.kwad.sdk.utils.q.L(r2)     // Catch: java.lang.Throwable -> L5b
            r4 = 0
            if (r3 != 0) goto L13
            monitor-exit(r0)
            return r4
        L13:
            java.lang.String r3 = r9.agi     // Catch: java.lang.Throwable -> L5b
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L5b
            r5 = 1
            r3 = r3 ^ r5
            if (r3 == 0) goto L3c
            java.lang.String r3 = com.kwad.sdk.utils.a.getFileMD5(r2)     // Catch: java.lang.Throwable -> L5b
            if (r3 == 0) goto L2f
            int r6 = r3.length()     // Catch: java.lang.Throwable -> L5b
            r7 = 10
            if (r6 <= r7) goto L2f
            java.lang.String r3 = r3.substring(r4, r7)     // Catch: java.lang.Throwable -> L5b
        L2f:
            java.lang.String r6 = r9.agi     // Catch: java.lang.Throwable -> L5b
            boolean r3 = com.kwad.sdk.utils.bc.isEquals(r3, r6)     // Catch: java.lang.Throwable -> L5b
            if (r3 != 0) goto L3c
            com.kwad.sdk.utils.q.aa(r2)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r0)
            return r4
        L3c:
            r3 = 2
            com.kwad.sdk.core.webview.b.c.b.a(r9, r3)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = r9.aCc     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = com.kwad.sdk.core.webview.b.c.a.B(r8, r6)     // Catch: java.lang.Throwable -> L5b
            com.kwad.sdk.core.webview.b.c.a.e(r8, r1, r6)     // Catch: java.lang.Exception -> L4e java.lang.Throwable -> L5b
            com.kwad.sdk.utils.q.aa(r2)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r0)
            return r5
        L4e:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L5b
            com.kwad.sdk.core.webview.b.c.b.a(r9, r4, r3, r8)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r0)
            return r4
        L5b:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }
}
