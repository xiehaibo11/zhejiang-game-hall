package com.kwad.sdk.core.threads.a;

public final class b extends java.util.concurrent.ThreadPoolExecutor implements com.kwad.sdk.core.threads.a.c {
    public static volatile boolean avy;
    private long avA;
    private int avB;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> avz;

    static {
            return
    }

    public b(int r1, int r2, long r3, java.util.concurrent.TimeUnit r5, java.util.concurrent.BlockingQueue<java.lang.Runnable> r6, java.util.concurrent.ThreadFactory r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6, r7)
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r0.avz = r1
            r1 = 0
            r0.avA = r1
            r1 = 0
            r0.avB = r1
            return
    }

    public b(int r1, int r2, long r3, java.util.concurrent.TimeUnit r5, java.util.concurrent.BlockingQueue<java.lang.Runnable> r6, java.util.concurrent.ThreadFactory r7, java.util.concurrent.RejectedExecutionHandler r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r0.avz = r1
            r1 = 0
            r0.avA = r1
            r1 = 0
            r0.avB = r1
            return
    }

    @Override
    public final long Dl() {
            r2 = this;
            long r0 = r2.avA
            return r0
    }

    @Override
    protected final void beforeExecute(java.lang.Thread r7, java.lang.Runnable r8) {
            r6 = this;
            super.beforeExecute(r7, r8)
            boolean r7 = com.kwad.sdk.core.threads.a.b.avy
            if (r7 == 0) goto L4b
            java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> r7 = r6.avz
            boolean r7 = r7.containsKey(r8)
            if (r7 == 0) goto L4b
            java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> r7 = r6.avz
            java.lang.Object r7 = r7.get(r8)
            if (r7 == 0) goto L4b
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> r7 = r6.avz
            java.lang.Object r7 = r7.get(r8)
            java.lang.Long r7 = (java.lang.Long) r7
            long r2 = r7.longValue()
            long r0 = r0 - r2
            r2 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 < 0) goto L46
            r2 = 1800000(0x1b7740, double:8.89318E-318)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L46
            long r2 = r6.avA
            int r7 = r6.avB
            long r4 = (long) r7
            long r2 = r2 * r4
            long r2 = r2 + r0
            int r0 = r7 + 1
            long r0 = (long) r0
            long r2 = r2 / r0
            r6.avA = r2
            int r7 = r7 + 1
            r6.avB = r7
        L46:
            java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> r7 = r6.avz
            r7.remove(r8)
        L4b:
            return
    }

    @Override
    public final void execute(java.lang.Runnable r4) {
            r3 = this;
            boolean r0 = com.kwad.sdk.core.threads.a.b.avy
            if (r0 == 0) goto L11
            java.util.concurrent.ConcurrentHashMap<java.lang.Runnable, java.lang.Long> r0 = r3.avz
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r4, r1)
        L11:
            super.execute(r4)
            return
    }
}
