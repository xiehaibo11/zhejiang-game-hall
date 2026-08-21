package com.alipay.sdk.m.b;

public class c {
    public static com.alipay.sdk.m.b.b a;
    public static boolean b;

    static {
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String a(android.content.Context r3) {
            java.lang.Class<com.alipay.sdk.m.b.c> r0 = com.alipay.sdk.m.b.c.class
            monitor-enter(r0)
            if (r3 == 0) goto L27
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L2f
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L2f
            if (r1 == r2) goto L1f
            b(r3)     // Catch: java.lang.Throwable -> L2f
            com.alipay.sdk.m.b.b r1 = com.alipay.sdk.m.b.c.a     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L1c
            java.lang.String r3 = r1.a(r3)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L2f
            monitor-exit(r0)
            return r3
        L1c:
            r3 = 0
            monitor-exit(r0)
            return r3
        L1f:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "Cannot be called from the main thread"
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L2f
            throw r3     // Catch: java.lang.Throwable -> L2f
        L27:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "Context is null"
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L2f
            throw r3     // Catch: java.lang.Throwable -> L2f
        L2f:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void b(android.content.Context r2) {
            com.alipay.sdk.m.b.b r0 = com.alipay.sdk.m.b.c.a
            if (r0 != 0) goto L21
            boolean r0 = com.alipay.sdk.m.b.c.b
            if (r0 != 0) goto L21
            java.lang.Class<com.alipay.sdk.m.b.c> r0 = com.alipay.sdk.m.b.c.class
            monitor-enter(r0)
            com.alipay.sdk.m.b.b r1 = com.alipay.sdk.m.b.c.a     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1c
            boolean r1 = com.alipay.sdk.m.b.c.b     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1c
            com.alipay.sdk.m.b.b r2 = com.alipay.sdk.m.c.a.a(r2)     // Catch: java.lang.Throwable -> L1e
            com.alipay.sdk.m.b.c.a = r2     // Catch: java.lang.Throwable -> L1e
            r2 = 1
            com.alipay.sdk.m.b.c.b = r2     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            goto L21
        L1e:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r2
        L21:
            return
    }
}
