package com.huawei.hms.push;

public class u {
    public static final java.lang.Object a = null;
    public static java.util.concurrent.ThreadPoolExecutor b;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.push.u.a = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 1
            r3 = 50
            r4 = 60
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            com.huawei.hms.push.u.b = r0
            return
    }

    public static java.util.concurrent.ThreadPoolExecutor a() {
            java.lang.Object r0 = com.huawei.hms.push.u.a
            monitor-enter(r0)
            java.util.concurrent.ThreadPoolExecutor r1 = com.huawei.hms.push.u.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }
}
