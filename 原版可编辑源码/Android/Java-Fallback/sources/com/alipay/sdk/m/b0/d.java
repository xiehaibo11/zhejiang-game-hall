package com.alipay.sdk.m.b0;

public final class d {
    public static synchronized void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.alipay.sdk.m.b0.d> r0 = com.alipay.sdk.m.b0.d.class
            monitor-enter(r0)
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L29
            boolean r1 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L29
            if (r2 != 0) goto L12
            goto L29
        L12:
            java.lang.String r1 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L27
            java.lang.String r5 = com.alipay.sdk.m.y.c.a(r1, r5)     // Catch: java.lang.Throwable -> L27
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L27
            com.alipay.sdk.m.b0.e.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)
            return
        L27:
            monitor-exit(r0)
            return
        L29:
            monitor-exit(r0)
            return
        L2b:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
