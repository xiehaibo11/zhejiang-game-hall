package com.alipay.sdk.m.b0;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.alipay.sdk.m.b0.a> r0 = com.alipay.sdk.m.b0.a.class
            monitor-enter(r0)
            r1 = 0
            if (r3 == 0) goto L2d
            boolean r2 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L2b
            if (r2 != 0) goto L2d
            boolean r2 = com.alipay.sdk.m.z.a.a(r5)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L13
            goto L2d
        L13:
            java.lang.String r2 = ""
            java.lang.String r3 = com.alipay.sdk.m.b0.e.a(r3, r4, r5, r2)     // Catch: java.lang.Throwable -> L29
            boolean r4 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L29
            if (r4 == 0) goto L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return r1
        L21:
            java.lang.String r4 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = com.alipay.sdk.m.y.c.b(r4, r3)     // Catch: java.lang.Throwable -> L29
        L29:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return r1
        L2b:
            r3 = move-exception
            goto L2f
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return r1
        L2f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r3
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.alipay.sdk.m.b0.a> r0 = com.alipay.sdk.m.b0.a.class
            monitor-enter(r0)
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L27
            boolean r1 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L27
            if (r2 != 0) goto L12
            goto L27
        L12:
            java.lang.String r1 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L25
            java.lang.String r5 = com.alipay.sdk.m.y.c.a(r1, r5)     // Catch: java.lang.Throwable -> L25
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L25
            com.alipay.sdk.m.b0.e.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25
        L25:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return
        L27:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return
        L29:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r2
    }
}
