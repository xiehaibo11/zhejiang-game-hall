package com.tkay.expressad.exoplayer.k;

public final class f {
    private boolean a;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private synchronized boolean a(long r4) {
            r3 = this;
            monitor-enter(r3)
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1c
            long r4 = r4 + r0
        L6:
            boolean r2 = r3.a     // Catch: java.lang.Throwable -> L1c
            if (r2 != 0) goto L18
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 >= 0) goto L18
            long r0 = r4 - r0
            r3.wait(r0)     // Catch: java.lang.Throwable -> L1c
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1c
            goto L6
        L18:
            boolean r4 = r3.a     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r3)
            return r4
        L1c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized boolean a() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto L8
            r0 = 0
            monitor-exit(r1)
            return r0
        L8:
            r0 = 1
            r1.a = r0     // Catch: java.lang.Throwable -> L10
            r1.notifyAll()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return r0
        L10:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized boolean b() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.a     // Catch: java.lang.Throwable -> L8
            r1 = 0
            r2.a = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r2)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized void c() {
            r1 = this;
            monitor-enter(r1)
        L1:
            boolean r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            if (r0 != 0) goto L9
            r1.wait()     // Catch: java.lang.Throwable -> Lb
            goto L1
        L9:
            monitor-exit(r1)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
