package com.tkay.basead;

public final class d {
    long a;
    long b;
    java.lang.Runnable c;
    boolean d;
    com.tkay.core.common.j.b e;
    private final com.tkay.core.common.j.a f;


    public d(long r2, java.lang.Runnable r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            com.tkay.core.common.j.a r0 = com.tkay.core.common.j.c.a()
            r1.f = r0
            com.tkay.basead.d$1 r0 = new com.tkay.basead.d$1
            r0.<init>(r1)
            r1.e = r0
            r1.b = r2
            r1.c = r4
            return
    }

    public final synchronized void a() {
            r4 = this;
            monitor-enter(r4)
            long r0 = r4.b     // Catch: java.lang.Throwable -> L21
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L1f
            boolean r0 = r4.d     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto L1f
            r0 = 1
            r4.d = r0     // Catch: java.lang.Throwable -> L21
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L21
            r4.a = r0     // Catch: java.lang.Throwable -> L21
            com.tkay.core.common.j.a r0 = r4.f     // Catch: java.lang.Throwable -> L21
            com.tkay.core.common.j.b r1 = r4.e     // Catch: java.lang.Throwable -> L21
            long r2 = r4.b     // Catch: java.lang.Throwable -> L21
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r4)
            return
        L21:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void b() {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.d     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L1b
            r0 = 0
            r6.d = r0     // Catch: java.lang.Throwable -> L1d
            long r0 = r6.b     // Catch: java.lang.Throwable -> L1d
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1d
            long r4 = r6.a     // Catch: java.lang.Throwable -> L1d
            long r2 = r2 - r4
            long r0 = r0 - r2
            r6.b = r0     // Catch: java.lang.Throwable -> L1d
            com.tkay.core.common.j.a r0 = r6.f     // Catch: java.lang.Throwable -> L1d
            com.tkay.core.common.j.b r1 = r6.e     // Catch: java.lang.Throwable -> L1d
            r0.a(r1)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r6)
            return
        L1d:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            r2.d = r0     // Catch: java.lang.Throwable -> L11
            com.tkay.core.common.j.a r0 = r2.f     // Catch: java.lang.Throwable -> L11
            com.tkay.core.common.j.b r1 = r2.e     // Catch: java.lang.Throwable -> L11
            r0.a(r1)     // Catch: java.lang.Throwable -> L11
            r0 = -1
            r2.b = r0     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
