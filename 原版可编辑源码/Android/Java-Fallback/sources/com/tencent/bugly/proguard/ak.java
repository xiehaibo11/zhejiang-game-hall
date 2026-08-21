package com.tencent.bugly.proguard;

public final class ak {
    private static final java.util.concurrent.atomic.AtomicInteger a = null;
    private static com.tencent.bugly.proguard.ak b;
    private java.util.concurrent.ScheduledExecutorService c;


    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.tencent.bugly.proguard.ak.a = r0
            return
    }

    protected ak() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            com.tencent.bugly.proguard.ak$1 r0 = new com.tencent.bugly.proguard.ak$1
            r0.<init>(r2)
            r1 = 3
            java.util.concurrent.ScheduledExecutorService r0 = java.util.concurrent.Executors.newScheduledThreadPool(r1, r0)
            r2.c = r0
            java.util.concurrent.ScheduledExecutorService r0 = r2.c
            if (r0 == 0) goto L1c
            boolean r0 = r0.isShutdown()
            if (r0 == 0) goto L24
        L1c:
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "[AsyncTaskHandler] ScheduledExecutorService is not valiable!"
            com.tencent.bugly.proguard.al.d(r1, r0)
        L24:
            return
    }

    public static synchronized com.tencent.bugly.proguard.ak a() {
            java.lang.Class<com.tencent.bugly.proguard.ak> r0 = com.tencent.bugly.proguard.ak.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.ak r1 = com.tencent.bugly.proguard.ak.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.ak r1 = new com.tencent.bugly.proguard.ak     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.ak.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.ak r1 = com.tencent.bugly.proguard.ak.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static java.util.concurrent.atomic.AtomicInteger d() {
            java.util.concurrent.atomic.AtomicInteger r0 = com.tencent.bugly.proguard.ak.a
            return r0
    }

    public final synchronized boolean a(java.lang.Runnable r6) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.c()     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            if (r0 != 0) goto L11
            java.lang.String r6 = "[AsyncTaskHandler] Async handler was closed, should not post task."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L3f
            com.tencent.bugly.proguard.al.d(r6, r0)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r5)
            return r1
        L11:
            if (r6 != 0) goto L1c
            java.lang.String r6 = "[AsyncTaskHandler] Task input is null."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L3f
            com.tencent.bugly.proguard.al.d(r6, r0)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r5)
            return r1
        L1c:
            java.lang.String r0 = "[AsyncTaskHandler] Post a normal task: %s"
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L3f
            java.lang.Class r4 = r6.getClass()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L3f
            r3[r1] = r4     // Catch: java.lang.Throwable -> L3f
            com.tencent.bugly.proguard.al.c(r0, r3)     // Catch: java.lang.Throwable -> L3f
            java.util.concurrent.ScheduledExecutorService r0 = r5.c     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L3f
            r0.execute(r6)     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L3f
            monitor-exit(r5)
            return r2
        L35:
            r6 = move-exception
            boolean r0 = com.tencent.bugly.proguard.p.c     // Catch: java.lang.Throwable -> L3f
            if (r0 == 0) goto L3d
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L3f
        L3d:
            monitor-exit(r5)
            return r1
        L3f:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized boolean a(java.lang.Runnable r6, long r7) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.c()     // Catch: java.lang.Throwable -> L45
            r1 = 0
            if (r0 != 0) goto L11
            java.lang.String r6 = "[AsyncTaskHandler] Async handler was closed, should not post task."
            java.lang.Object[] r7 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L45
            com.tencent.bugly.proguard.al.d(r6, r7)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r5)
            return r1
        L11:
            r2 = 0
            int r0 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r0 <= 0) goto L18
            goto L19
        L18:
            r7 = r2
        L19:
            java.lang.String r0 = "[AsyncTaskHandler] Post a delay(time: %dms) task: %s"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L45
            java.lang.Long r3 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L45
            r2[r1] = r3     // Catch: java.lang.Throwable -> L45
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L45
            r4 = 1
            r2[r4] = r3     // Catch: java.lang.Throwable -> L45
            com.tencent.bugly.proguard.al.c(r0, r2)     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.ScheduledExecutorService r0 = r5.c     // Catch: java.lang.Throwable -> L3b java.lang.Throwable -> L45
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L3b java.lang.Throwable -> L45
            r0.schedule(r6, r7, r2)     // Catch: java.lang.Throwable -> L3b java.lang.Throwable -> L45
            monitor-exit(r5)
            return r4
        L3b:
            r6 = move-exception
            boolean r7 = com.tencent.bugly.proguard.p.c     // Catch: java.lang.Throwable -> L45
            if (r7 == 0) goto L43
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r5)
            return r1
        L45:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ScheduledExecutorService r0 = r2.c     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L1a
            java.util.concurrent.ScheduledExecutorService r0 = r2.c     // Catch: java.lang.Throwable -> L1c
            boolean r0 = r0.isShutdown()     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L1a
            java.lang.String r0 = "[AsyncTaskHandler] Close async handler."
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c
            com.tencent.bugly.proguard.al.c(r0, r1)     // Catch: java.lang.Throwable -> L1c
            java.util.concurrent.ScheduledExecutorService r0 = r2.c     // Catch: java.lang.Throwable -> L1c
            r0.shutdownNow()     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r2)
            return
        L1c:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized boolean c() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ScheduledExecutorService r0 = r1.c     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L10
            java.util.concurrent.ScheduledExecutorService r0 = r1.c     // Catch: java.lang.Throwable -> L12
            boolean r0 = r0.isShutdown()     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L10
            r0 = 1
        Le:
            monitor-exit(r1)
            return r0
        L10:
            r0 = 0
            goto Le
        L12:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
