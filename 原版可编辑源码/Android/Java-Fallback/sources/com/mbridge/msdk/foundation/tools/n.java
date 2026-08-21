package com.mbridge.msdk.foundation.tools;

public final class n implements java.util.concurrent.Executor {
    private java.lang.Runnable a;
    private java.lang.Runnable b;


    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.Runnable a(java.lang.Runnable r2) {
            r1 = this;
            com.mbridge.msdk.foundation.tools.n$1 r0 = new com.mbridge.msdk.foundation.tools.n$1
            r0.<init>(r1, r2)
            return r0
    }

    private synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            java.lang.Runnable r0 = r2.b     // Catch: java.lang.Throwable -> L15
            r2.a = r0     // Catch: java.lang.Throwable -> L15
            r1 = 0
            r2.b = r1     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L13
            java.util.concurrent.Executor r0 = com.mbridge.msdk.foundation.tools.k.a()     // Catch: java.lang.Throwable -> L15
            java.lang.Runnable r1 = r2.a     // Catch: java.lang.Throwable -> L15
            r0.execute(r1)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r2)
            return
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    static void a(com.mbridge.msdk.foundation.tools.n r0) {
            r0.a()
            return
    }

    @Override
    public final synchronized void execute(java.lang.Runnable r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.Runnable r0 = r1.a     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto L15
            java.lang.Runnable r2 = r1.a(r2)     // Catch: java.lang.Throwable -> L21
            r1.a = r2     // Catch: java.lang.Throwable -> L21
            java.util.concurrent.Executor r2 = com.mbridge.msdk.foundation.tools.k.a()     // Catch: java.lang.Throwable -> L21
            java.lang.Runnable r0 = r1.a     // Catch: java.lang.Throwable -> L21
            r2.execute(r0)     // Catch: java.lang.Throwable -> L21
            goto L1f
        L15:
            java.lang.Runnable r0 = r1.b     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto L1f
            java.lang.Runnable r2 = r1.a(r2)     // Catch: java.lang.Throwable -> L21
            r1.b = r2     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r1)
            return
        L21:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
