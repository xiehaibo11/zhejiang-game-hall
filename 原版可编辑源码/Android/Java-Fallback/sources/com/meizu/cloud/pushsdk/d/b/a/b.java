package com.meizu.cloud.pushsdk.d.b.a;

public class b {
    private static java.util.concurrent.ExecutorService a = null;
    private static int b = 2;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.concurrent.ExecutorService a() {
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.a.b> r0 = com.meizu.cloud.pushsdk.d.b.a.b.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.meizu.cloud.pushsdk.d.b.a.b.a     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto Lf
            int r1 = com.meizu.cloud.pushsdk.d.b.a.b.b     // Catch: java.lang.Throwable -> L13
            java.util.concurrent.ScheduledExecutorService r1 = java.util.concurrent.Executors.newScheduledThreadPool(r1)     // Catch: java.lang.Throwable -> L13
            com.meizu.cloud.pushsdk.d.b.a.b.a = r1     // Catch: java.lang.Throwable -> L13
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            java.util.concurrent.ExecutorService r0 = com.meizu.cloud.pushsdk.d.b.a.b.a
            return r0
        L13:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r1
    }

    public static java.util.concurrent.Future a(java.util.concurrent.Callable r1) {
            java.util.concurrent.ExecutorService r0 = a()
            java.util.concurrent.Future r1 = r0.submit(r1)
            return r1
    }

    public static void a(int r0) {
            com.meizu.cloud.pushsdk.d.b.a.b.b = r0
            return
    }

    public static void a(java.lang.Runnable r1) {
            java.util.concurrent.ExecutorService r0 = a()
            r0.execute(r1)
            return
    }
}
