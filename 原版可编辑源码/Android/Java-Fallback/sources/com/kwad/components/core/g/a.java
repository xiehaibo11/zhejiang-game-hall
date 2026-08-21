package com.kwad.components.core.g;

public final class a implements java.lang.Runnable {
    private long Kn;
    private boolean Ko;
    private long Kp;
    private com.kwad.components.core.g.a.a Kq;
    private volatile android.os.Handler mHandler;

    public interface a {
        void u(long r1);
    }

    public a(android.os.Handler r3) {
            r2 = this;
            r2.<init>()
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.Kn = r0
            r0 = 1
            r2.Ko = r0
            r0 = 0
            r2.Kp = r0
            r2.mHandler = r3
            return
    }

    public final void a(com.kwad.components.core.g.a.a r1) {
            r0 = this;
            r0.Kq = r1
            return
    }

    public final void destroy() {
            r1 = this;
            r1.stop()
            r0 = 0
            r1.mHandler = r0
            return
    }

    public final void pause() {
            r1 = this;
            r0 = 1
            r1.Ko = r0
            return
    }

    public final void resume() {
            r1 = this;
            r0 = 0
            r1.Ko = r0
            return
    }

    @Override
    public final synchronized void run() {
            r4 = this;
            monitor-enter(r4)
            android.os.Handler r0 = r4.mHandler     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L26
            boolean r0 = r4.Ko     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L1b
            com.kwad.components.core.g.a$a r0 = r4.Kq     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L1b
            com.kwad.components.core.g.a$a r0 = r4.Kq     // Catch: java.lang.Throwable -> L28
            long r1 = r4.Kp     // Catch: java.lang.Throwable -> L28
            r0.u(r1)     // Catch: java.lang.Throwable -> L28
            long r0 = r4.Kp     // Catch: java.lang.Throwable -> L28
            long r2 = r4.Kn     // Catch: java.lang.Throwable -> L28
            long r0 = r0 + r2
            r4.Kp = r0     // Catch: java.lang.Throwable -> L28
        L1b:
            android.os.Handler r0 = r4.mHandler     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L26
            android.os.Handler r0 = r4.mHandler     // Catch: java.lang.Throwable -> L28
            long r1 = r4.Kn     // Catch: java.lang.Throwable -> L28
            r0.postDelayed(r4, r1)     // Catch: java.lang.Throwable -> L28
        L26:
            monitor-exit(r4)
            return
        L28:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final void start() {
            r1 = this;
            r0 = 0
            r1.Ko = r0
            android.os.Handler r0 = r1.mHandler
            if (r0 == 0) goto Lc
            android.os.Handler r0 = r1.mHandler
            r0.post(r1)
        Lc:
            return
    }

    public final void stop() {
            r1 = this;
            android.os.Handler r0 = r1.mHandler
            if (r0 == 0) goto L9
            android.os.Handler r0 = r1.mHandler
            r0.removeCallbacks(r1)
        L9:
            return
    }
}
