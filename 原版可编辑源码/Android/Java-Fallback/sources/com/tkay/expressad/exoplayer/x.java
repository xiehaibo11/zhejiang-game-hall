package com.tkay.expressad.exoplayer;

public final class x {
    private final com.tkay.expressad.exoplayer.x.b a;
    private final com.tkay.expressad.exoplayer.x.a b;
    private final com.tkay.expressad.exoplayer.ae c;
    private int d;
    private java.lang.Object e;
    private android.os.Handler f;
    private int g;
    private long h;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;

    public interface a {
        void a(com.tkay.expressad.exoplayer.x r1);
    }

    public interface b {
        void a(int r1, java.lang.Object r2);
    }

    public x(com.tkay.expressad.exoplayer.x.a r1, com.tkay.expressad.exoplayer.x.b r2, com.tkay.expressad.exoplayer.ae r3, int r4, android.os.Handler r5) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r2
            r0.c = r3
            r0.f = r5
            r0.g = r4
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.h = r1
            r1 = 1
            r0.i = r1
            return
    }

    private com.tkay.expressad.exoplayer.x a(int r5, long r6) {
            r4 = this;
            boolean r0 = r4.j
            r1 = 1
            r0 = r0 ^ r1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 == 0) goto L11
            goto L12
        L11:
            r1 = 0
        L12:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            if (r5 < 0) goto L2c
            com.tkay.expressad.exoplayer.ae r0 = r4.c
            boolean r0 = r0.a()
            if (r0 != 0) goto L27
            com.tkay.expressad.exoplayer.ae r0 = r4.c
            int r0 = r0.b()
            if (r5 >= r0) goto L2c
        L27:
            r4.g = r5
            r4.h = r6
            return r4
        L2c:
            com.tkay.expressad.exoplayer.o r0 = new com.tkay.expressad.exoplayer.o
            com.tkay.expressad.exoplayer.ae r1 = r4.c
            r0.<init>(r1, r5, r6)
            throw r0
    }

    private com.tkay.expressad.exoplayer.x a(long r2) {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.h = r2
            return r1
    }

    private com.tkay.expressad.exoplayer.x a(android.os.Handler r2) {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.f = r2
            return r1
    }

    private com.tkay.expressad.exoplayer.x b(boolean r2) {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.i = r2
            return r1
    }

    private synchronized com.tkay.expressad.exoplayer.x l() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.j     // Catch: java.lang.Throwable -> Lf
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> Lf
            r0 = 1
            r1.m = r0     // Catch: java.lang.Throwable -> Lf
            r0 = 0
            r1.a(r0)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r1
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final com.tkay.expressad.exoplayer.ae a() {
            r1 = this;
            com.tkay.expressad.exoplayer.ae r0 = r1.c
            return r0
    }

    public final com.tkay.expressad.exoplayer.x a(int r2) {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.d = r2
            return r1
    }

    public final com.tkay.expressad.exoplayer.x a(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.e = r2
            return r1
    }

    public final synchronized void a(boolean r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.k     // Catch: java.lang.Throwable -> Le
            r2 = r2 | r0
            r1.k = r2     // Catch: java.lang.Throwable -> Le
            r2 = 1
            r1.l = r2     // Catch: java.lang.Throwable -> Le
            r1.notifyAll()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final com.tkay.expressad.exoplayer.x.b b() {
            r1 = this;
            com.tkay.expressad.exoplayer.x$b r0 = r1.a
            return r0
    }

    public final int c() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final java.lang.Object d() {
            r1 = this;
            java.lang.Object r0 = r1.e
            return r0
    }

    public final android.os.Handler e() {
            r1 = this;
            android.os.Handler r0 = r1.f
            return r0
    }

    public final long f() {
            r2 = this;
            long r0 = r2.h
            return r0
    }

    public final int g() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final boolean h() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public final com.tkay.expressad.exoplayer.x i() {
            r6 = this;
            boolean r0 = r6.j
            r1 = 1
            r0 = r0 ^ r1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            long r2 = r6.h
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L17
            boolean r0 = r6.i
            com.tkay.expressad.exoplayer.k.a.a(r0)
        L17:
            r6.j = r1
            com.tkay.expressad.exoplayer.x$a r0 = r6.b
            r0.a(r6)
            return r6
    }

    public final synchronized boolean j() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.m     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized boolean k() {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.j     // Catch: java.lang.Throwable -> L47
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L47
            android.os.Handler r0 = r6.f     // Catch: java.lang.Throwable -> L47
            android.os.Looper r0 = r0.getLooper()     // Catch: java.lang.Throwable -> L47
            java.lang.Thread r0 = r0.getThread()     // Catch: java.lang.Throwable -> L47
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L47
            if (r0 == r1) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L47
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L47
            r2 = 500(0x1f4, double:2.47E-321)
            long r0 = r0 + r2
        L23:
            boolean r4 = r6.l     // Catch: java.lang.Throwable -> L47
            if (r4 != 0) goto L37
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L37
            r6.wait(r2)     // Catch: java.lang.Throwable -> L47
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L47
            long r2 = r0 - r2
            goto L23
        L37:
            boolean r0 = r6.l     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L3f
            boolean r0 = r6.k     // Catch: java.lang.Throwable -> L47
            monitor-exit(r6)
            return r0
        L3f:
            java.util.concurrent.TimeoutException r0 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "Message delivery time out"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L47
            throw r0     // Catch: java.lang.Throwable -> L47
        L47:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }
}
