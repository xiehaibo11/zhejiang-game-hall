package com.mbridge.msdk.foundation.same.net;

public class j {
    private static final java.lang.String a = null;
    private final android.content.Context b;
    private final com.mbridge.msdk.foundation.same.net.c c;
    private final java.util.Set<com.mbridge.msdk.foundation.same.net.i> d;
    private java.util.concurrent.ExecutorService e;
    private final java.util.concurrent.atomic.AtomicInteger f;


    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.j> r0 = com.mbridge.msdk.foundation.same.net.j.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.j.a = r0
            return
    }

    public j(android.content.Context r21) {
            r20 = this;
            r0 = r20
            r20.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.d = r1
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
            r1.<init>()
            r0.f = r1
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a()
            java.lang.String r2 = "c_v_r_q_t"
            r3 = 1
            boolean r2 = r1.a(r2, r3)
            if (r2 == 0) goto L69
            java.lang.String r2 = "v_r_q_c_s"
            r3 = 10
            int r5 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = "v_r_q_m_s"
            r3 = 25
            int r6 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = "v_r_q_c_t"
            r3 = 15
            int r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.ThreadPoolExecutor r2 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Exception -> L4e
            long r7 = (long) r1     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.LinkedBlockingDeque r10 = new java.util.concurrent.LinkedBlockingDeque     // Catch: java.lang.Exception -> L4e
            r10.<init>()     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r11 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy     // Catch: java.lang.Exception -> L4e
            r11.<init>()     // Catch: java.lang.Exception -> L4e
            r4 = r2
            r4.<init>(r5, r6, r7, r9, r10, r11)     // Catch: java.lang.Exception -> L4e
            r0.e = r2     // Catch: java.lang.Exception -> L4e
            goto L83
        L4e:
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            r13 = 0
            r14 = 2147483647(0x7fffffff, float:NaN)
            r15 = 60
            java.util.concurrent.TimeUnit r17 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r18 = new java.util.concurrent.SynchronousQueue
            r18.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r19 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r19.<init>()
            r12 = r1
            r12.<init>(r13, r14, r15, r17, r18, r19)
            r0.e = r1
            goto L83
        L69:
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            r3 = 0
            r4 = 2147483647(0x7fffffff, float:NaN)
            r5 = 60
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r8 = new java.util.concurrent.SynchronousQueue
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)
            r0.e = r1
        L83:
            android.content.Context r1 = r21.getApplicationContext()
            r0.b = r1
            com.mbridge.msdk.foundation.same.net.d r1 = new com.mbridge.msdk.foundation.same.net.d
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r3)
            r1.<init>(r2)
            r0.c = r1
            return
    }

    static android.content.Context a(com.mbridge.msdk.foundation.same.net.j r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.foundation.same.net.c b(com.mbridge.msdk.foundation.same.net.j r0) {
            com.mbridge.msdk.foundation.same.net.c r0 = r0.c
            return r0
    }

    public final void a(com.mbridge.msdk.foundation.same.net.i r4) {
            r3 = this;
            r4.a(r3)
            monitor-enter(r3)
            java.util.Set<com.mbridge.msdk.foundation.same.net.i> r0 = r3.d     // Catch: java.lang.Throwable -> L38
            r0.add(r4)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38
            java.util.concurrent.atomic.AtomicInteger r0 = r3.f
            int r0 = r0.incrementAndGet()
            r4.a(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.j.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "add-to-queue request="
            r1.append(r2)
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.util.concurrent.ExecutorService r0 = r3.e
            com.mbridge.msdk.foundation.same.net.j$1 r1 = new com.mbridge.msdk.foundation.same.net.j$1
            r1.<init>(r3, r4)
            r0.execute(r1)
            return
        L38:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38
            throw r4
    }

    final void b(com.mbridge.msdk.foundation.same.net.i r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Set<com.mbridge.msdk.foundation.same.net.i> r0 = r1.d     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
            throw r2
    }
}
