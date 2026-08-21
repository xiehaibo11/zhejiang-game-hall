package com.tkay.core.common.l.b;

public class a {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 4;
    public static final int d = 5;
    public static final int e = 6;
    public static final int f = 7;
    private static volatile com.tkay.core.common.l.b.a g;
    private java.util.concurrent.ExecutorService h;
    private java.util.concurrent.ExecutorService i;
    private java.util.concurrent.ExecutorService j;
    private java.util.concurrent.ExecutorService k;
    private java.util.concurrent.ExecutorService l;



    static {
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.h = r0
            r1.i = r0
            r1.j = r0
            r1.k = r0
            r1.l = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool()
            r1.h = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.i = r0
            return
    }

    public static com.tkay.core.common.l.b.a a() {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.g
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.l.b.a> r0 = com.tkay.core.common.l.b.a.class
            monitor-enter(r0)
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.l.b.a r1 = new com.tkay.core.common.l.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.l.b.a.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.g
            return r0
    }

    private void a(com.tkay.core.common.l.b.b r2) {
            r1 = this;
            r0 = 2
            r1.a(r2, r0)
            return
    }

    private void b() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.i
            r0.shutdown()
            java.util.concurrent.ExecutorService r0 = r1.h
            r0.shutdown()
            return
    }

    public final synchronized void a(com.tkay.core.common.l.b.b r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            if (r3 == r0) goto L6e
            r0 = 2
            if (r3 == r0) goto L62
            r0 = 4
            if (r3 == r0) goto L4c
            r0 = 5
            if (r3 == r0) goto L36
            r0 = 6
            if (r3 == r0) goto L20
            r0 = 7
            if (r3 == r0) goto L14
            goto L34
        L14:
            java.lang.String r3 = "tkay_type_network"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.h     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)
            return
        L20:
            java.lang.String r3 = "tkay_type_preload_task"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.l     // Catch: java.lang.Throwable -> L7a
            if (r3 != 0) goto L2f
            java.util.concurrent.ExecutorService r3 = java.util.concurrent.Executors.newSingleThreadExecutor()     // Catch: java.lang.Throwable -> L7a
            r1.l = r3     // Catch: java.lang.Throwable -> L7a
        L2f:
            java.util.concurrent.ExecutorService r3 = r1.l     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
        L34:
            monitor-exit(r1)
            return
        L36:
            java.lang.String r3 = "tkay_type_image_type"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.k     // Catch: java.lang.Throwable -> L7a
            if (r3 != 0) goto L45
            java.util.concurrent.ExecutorService r3 = java.util.concurrent.Executors.newFixedThreadPool(r0)     // Catch: java.lang.Throwable -> L7a
            r1.k = r3     // Catch: java.lang.Throwable -> L7a
        L45:
            java.util.concurrent.ExecutorService r3 = r1.k     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)
            return
        L4c:
            java.lang.String r3 = "tkay_type_tcp_log"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.j     // Catch: java.lang.Throwable -> L7a
            if (r3 != 0) goto L5b
            java.util.concurrent.ExecutorService r3 = java.util.concurrent.Executors.newSingleThreadExecutor()     // Catch: java.lang.Throwable -> L7a
            r1.j = r3     // Catch: java.lang.Throwable -> L7a
        L5b:
            java.util.concurrent.ExecutorService r3 = r1.j     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)
            return
        L62:
            java.lang.String r3 = "tkay_type_normal"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.h     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)
            return
        L6e:
            java.lang.String r3 = "tkay_type_single"
            r2.a(r3)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.ExecutorService r3 = r1.i     // Catch: java.lang.Throwable -> L7a
            r3.execute(r2)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)
            return
        L7a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void a(java.lang.Runnable r3) {
            r2 = this;
            r0 = 0
            r2.a(r3, r0)
            return
    }

    public final void a(java.lang.Runnable r4, long r5) {
            r3 = this;
            if (r4 == 0) goto L1e
            com.tkay.core.common.l.b.a$1 r0 = new com.tkay.core.common.l.b.a$1
            r0.<init>(r3, r5, r4)
            long r4 = java.lang.System.currentTimeMillis()
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r1
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            int r4 = r4.intValue()
            long r4 = (long) r4
            r0.a(r4)
            r4 = 2
            r3.a(r0, r4)
        L1e:
            return
    }

    public final void b(java.lang.Runnable r6) {
            r5 = this;
            if (r6 == 0) goto L1e
            com.tkay.core.common.l.b.a$2 r0 = new com.tkay.core.common.l.b.a$2
            r0.<init>(r5, r6)
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            java.lang.Long r6 = java.lang.Long.valueOf(r1)
            int r6 = r6.intValue()
            long r1 = (long) r6
            r0.a(r1)
            r6 = 7
            r5.a(r0, r6)
        L1e:
            return
    }
}
