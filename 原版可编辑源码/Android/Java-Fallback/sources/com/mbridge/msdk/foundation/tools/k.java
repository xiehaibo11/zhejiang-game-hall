package com.mbridge.msdk.foundation.tools;

public final class k {
    static com.mbridge.msdk.foundation.tools.FastKV.b a;
    static volatile java.util.concurrent.Executor b;



    static {
            com.mbridge.msdk.foundation.tools.k$1 r0 = new com.mbridge.msdk.foundation.tools.k$1
            r0.<init>()
            com.mbridge.msdk.foundation.tools.k.a = r0
            return
    }

    private k() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.concurrent.Executor a() {
            java.util.concurrent.Executor r0 = com.mbridge.msdk.foundation.tools.k.b
            if (r0 != 0) goto L32
            java.lang.Class<com.mbridge.msdk.foundation.tools.k> r0 = com.mbridge.msdk.foundation.tools.k.class
            monitor-enter(r0)
            java.util.concurrent.Executor r1 = com.mbridge.msdk.foundation.tools.k.b     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L2d
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L2f
            r3 = 4
            r4 = 10
            r5 = 1
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L2f
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L2f
            r8.<init>()     // Catch: java.lang.Throwable -> L2f
            com.mbridge.msdk.foundation.tools.k$2 r9 = new com.mbridge.msdk.foundation.tools.k$2     // Catch: java.lang.Throwable -> L2f
            r9.<init>()     // Catch: java.lang.Throwable -> L2f
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r10 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy     // Catch: java.lang.Throwable -> L2f
            r10.<init>()     // Catch: java.lang.Throwable -> L2f
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L2f
            r2 = 1
            r1.allowCoreThreadTimeOut(r2)     // Catch: java.lang.Throwable -> L2f
            com.mbridge.msdk.foundation.tools.k.b = r1     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            goto L32
        L2f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r1
        L32:
            java.util.concurrent.Executor r0 = com.mbridge.msdk.foundation.tools.k.b
            return r0
    }
}
