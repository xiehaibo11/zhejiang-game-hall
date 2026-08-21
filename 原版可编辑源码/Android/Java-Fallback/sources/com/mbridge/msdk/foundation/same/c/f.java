package com.mbridge.msdk.foundation.same.c;

public final class f {
    private static java.util.concurrent.atomic.AtomicBoolean a;
    private static java.util.concurrent.ThreadPoolExecutor b;


    static {
            return
    }

    public static boolean a() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.mbridge.msdk.foundation.same.c.f.a
            r1 = 0
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()
            java.lang.String r2 = "u_i_l_l_n"
            boolean r0 = r0.a(r2, r1)
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>(r0)
            com.mbridge.msdk.foundation.same.c.f.a = r2
        L16:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.mbridge.msdk.foundation.same.c.f.a
            if (r0 == 0) goto L21
            boolean r0 = r0.get()
            if (r0 == 0) goto L21
            r1 = 1
        L21:
            return r1
    }

    public static java.util.concurrent.ThreadPoolExecutor b() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.c.f.b
            r1 = 1
            if (r0 != 0) goto L2d
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = r0 * 2
            int r4 = r0 + 1
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r5 = 5
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r8 = new java.util.concurrent.LinkedBlockingDeque
            r8.<init>()
            com.mbridge.msdk.foundation.same.c.f$1 r9 = new com.mbridge.msdk.foundation.same.c.f$1
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r10 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r10.<init>()
            r2 = r0
            r3 = r4
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)
            com.mbridge.msdk.foundation.same.c.f.b = r0
        L2d:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.c.f.b
            r0.allowCoreThreadTimeOut(r1)
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.c.f.b
            return r0
    }
}
