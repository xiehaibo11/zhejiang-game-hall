package com.kwad.sdk.core.report;

import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.report.g;

public abstract class c<T extends com.kwad.sdk.core.report.g, R extends com.kwad.sdk.core.network.g> {
    private static java.util.concurrent.ExecutorService aqF;
    private static volatile android.os.Handler mHandler;
    private volatile long aqD;
    private com.kwad.sdk.core.report.o aqE;
    private java.util.concurrent.atomic.AtomicInteger aqG;
    private int aqH;
    private T aqI;
    private android.content.Context mContext;
    private java.util.concurrent.atomic.AtomicInteger mRetryCount;






    static {
            return
    }

    protected c() {
            r2 = this;
            r2.<init>()
            r0 = 120000(0x1d4c0, double:5.9288E-319)
            r2.aqD = r0
            com.kwad.sdk.core.report.q r0 = new com.kwad.sdk.core.report.q
            r0.<init>()
            r2.aqE = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.aqG = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r2.mRetryCount = r0
            r0 = 5
            r2.aqH = r0
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.report.c.aqF
            if (r0 != 0) goto L2b
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CU()
            com.kwad.sdk.core.report.c.aqF = r0
        L2b:
            return
    }

    private boolean BQ() {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.mRetryCount
            int r0 = r0.get()
            r1 = 16
            if (r0 <= r1) goto Lb
            r0 = r1
        Lb:
            java.lang.Class<com.kwad.sdk.core.report.w> r1 = com.kwad.sdk.core.report.w.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.core.report.w r1 = (com.kwad.sdk.core.report.w) r1
            if (r1 == 0) goto L1d
            int r1 = r1.xr()
            int r0 = r1 << r0
            long r0 = (long) r0
            goto L1f
        L1d:
            r0 = 20
        L1f:
            com.kwad.sdk.core.report.o r2 = r4.aqE
            long r2 = r2.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto L2b
            r0 = 1
            return r0
        L2b:
            r0 = 0
            return r0
    }

    private void BS() {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.mRetryCount
            int r0 = r0.getAndIncrement()
            int r1 = r4.aqH
            if (r0 > r1) goto L18
            if (r0 <= 0) goto L13
            long r0 = r4.aqD
            r2 = 2
            long r0 = r0 * r2
            r4.aqD = r0
        L13:
            long r0 = r4.aqD
            r4.ae(r0)
        L18:
            return
    }

    static java.util.concurrent.ExecutorService BT() {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.report.c.aqF
            return r0
    }

    static long a(com.kwad.sdk.core.report.c r2) {
            long r0 = r2.aqD
            return r0
    }

    static com.kwad.sdk.core.report.g a(com.kwad.sdk.core.report.c r0, com.kwad.sdk.core.report.g r1) {
            r0.aqI = r1
            return r1
    }

    static void a(com.kwad.sdk.core.report.c r0, long r1) {
            r0.ae(r1)
            return
    }

    private synchronized void ae(long r6) {
            r5 = this;
            monitor-enter(r5)
            android.os.Handler r0 = com.kwad.sdk.core.report.c.mHandler     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L7
            monitor-exit(r5)
            return
        L7:
            android.os.Handler r0 = com.kwad.sdk.core.report.c.mHandler     // Catch: java.lang.Throwable -> L28
            r1 = 16843025(0x1010111, float:2.3694323E-38)
            r0.removeMessages(r1)     // Catch: java.lang.Throwable -> L28
            android.os.Handler r0 = com.kwad.sdk.core.report.c.mHandler     // Catch: java.lang.Throwable -> L28
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Throwable -> L28
            com.kwad.sdk.core.report.o r3 = r5.aqE     // Catch: java.lang.Throwable -> L28
            java.util.concurrent.atomic.AtomicInteger r4 = r5.aqG     // Catch: java.lang.Throwable -> L28
            java.lang.Runnable r2 = r5.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L28
            android.os.Message r0 = android.os.Message.obtain(r0, r2)     // Catch: java.lang.Throwable -> L28
            r0.what = r1     // Catch: java.lang.Throwable -> L28
            android.os.Handler r1 = com.kwad.sdk.core.report.c.mHandler     // Catch: java.lang.Throwable -> L28
            r1.sendMessageDelayed(r0, r6)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r5)
            return
        L28:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    static com.kwad.sdk.core.report.o b(com.kwad.sdk.core.report.c r0) {
            com.kwad.sdk.core.report.o r0 = r0.aqE
            return r0
    }

    private void c(com.kwad.sdk.core.report.n<T> r2) {
            r1 = this;
            com.kwad.sdk.core.report.c$4 r0 = new com.kwad.sdk.core.report.c$4
            r0.<init>(r1, r2)
            com.kwad.sdk.core.report.c$5 r2 = new com.kwad.sdk.core.report.c$5
            r2.<init>(r1)
            r0.request(r2)
            return
    }

    static boolean c(com.kwad.sdk.core.report.c r0) {
            boolean r0 = r0.BQ()
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger d(com.kwad.sdk.core.report.c r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.aqG
            return r0
    }

    static void e(com.kwad.sdk.core.report.c r0) {
            r0.BS()
            return
    }

    static com.kwad.sdk.core.report.g f(com.kwad.sdk.core.report.c r0) {
            T extends com.kwad.sdk.core.report.g r0 = r0.aqI
            return r0
    }

    static android.os.Handler vW() {
            android.os.Handler r0 = com.kwad.sdk.core.report.c.mHandler
            return r0
    }

    public final void BR() {
            r2 = this;
            r0 = 0
            r2.ae(r0)
            return
    }

    protected R a(T r2) {
            r1 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r2)
            com.kwad.sdk.core.network.g r2 = r1.s(r0)
            return r2
    }

    protected java.lang.Runnable a(android.content.Context r2, com.kwad.sdk.core.report.o<T> r3, java.util.concurrent.atomic.AtomicInteger r4) {
            r1 = this;
            com.kwad.sdk.core.report.aa r0 = new com.kwad.sdk.core.report.aa
            r0.<init>(r2, r3, r1, r4)
            return r0
    }

    public final void a(com.kwad.sdk.core.report.n<T> r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.report.c.aqF
            com.kwad.sdk.core.report.c$1 r1 = new com.kwad.sdk.core.report.c$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    protected final void a(com.kwad.sdk.core.report.o r1) {
            r0 = this;
            r0.aqE = r1
            return
    }

    public final void a(java.util.List<T> r3, java.util.concurrent.atomic.AtomicBoolean r4) {
            r2 = this;
            if (r3 == 0) goto L1a
            int r0 = r3.size()
            if (r0 <= 0) goto L1a
            java.util.concurrent.atomic.AtomicInteger r0 = r2.aqG
            r0.getAndIncrement()
            com.kwad.sdk.core.report.c$2 r0 = new com.kwad.sdk.core.report.c$2
            r0.<init>(r2, r3)
            com.kwad.sdk.core.report.c$3 r1 = new com.kwad.sdk.core.report.c$3
            r1.<init>(r2, r3, r4)
            r0.request(r1)
        L1a:
            return
    }

    protected final void ad(long r3) {
            r2 = this;
            r0 = 60
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto Lc
            r3 = 60000(0xea60, double:2.9644E-319)
        L9:
            r2.aqD = r3
            return
        Lc:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r0
            goto L9
    }

    public final void b(com.kwad.sdk.core.report.n<T> r2) {
            r1 = this;
            r1.c(r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r2 = move-exception
            java.lang.Class<com.kwad.sdk.service.a.d> r0 = com.kwad.sdk.service.a.d.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.d r0 = (com.kwad.sdk.service.a.d) r0
            r0.gatherException(r2)
            return
    }

    public synchronized void i(android.content.Context r1, int r2) {
            r0 = this;
            monitor-enter(r0)
            r0.mContext = r1     // Catch: java.lang.Throwable -> Lf
            android.os.Handler r1 = com.kwad.sdk.core.report.c.mHandler     // Catch: java.lang.Throwable -> Lf
            if (r1 != 0) goto Ld
            android.os.Handler r1 = com.kwad.sdk.core.threads.a.CO()     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.core.report.c.mHandler = r1     // Catch: java.lang.Throwable -> Lf
        Ld:
            monitor-exit(r0)
            return
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    protected abstract R s(java.util.List<T> r1);
}
