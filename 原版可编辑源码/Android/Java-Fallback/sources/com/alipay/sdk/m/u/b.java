package com.alipay.sdk.m.u;

public class b {
    public static final long a = 3000;
    public static long b = -1;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized boolean a() {
            java.lang.Class<com.alipay.sdk.m.u.b> r0 = com.alipay.sdk.m.u.b.class
            monitor-enter(r0)
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L18
            long r3 = com.alipay.sdk.m.u.b.b     // Catch: java.lang.Throwable -> L18
            long r3 = r1 - r3
            r5 = 3000(0xbb8, double:1.482E-320)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L16
            com.alipay.sdk.m.u.b.b = r1     // Catch: java.lang.Throwable -> L18
            r1 = 0
        L14:
            monitor-exit(r0)
            return r1
        L16:
            r1 = 1
            goto L14
        L18:
            r1 = move-exception
            monitor-exit(r0)
            goto L1c
        L1b:
            throw r1
        L1c:
            goto L1b
    }
}
