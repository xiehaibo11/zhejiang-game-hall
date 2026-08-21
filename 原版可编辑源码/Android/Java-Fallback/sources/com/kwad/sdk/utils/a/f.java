package com.kwad.sdk.utils.a;

public final class f implements java.util.concurrent.Executor {
    private java.lang.Runnable aLv;
    private java.lang.Runnable aLw;


    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.sdk.utils.a.f r0) {
            r0.scheduleNext()
            return
    }

    private java.lang.Runnable c(java.lang.Runnable r2) {
            r1 = this;
            com.kwad.sdk.utils.a.f$1 r0 = new com.kwad.sdk.utils.a.f$1
            r0.<init>(r1, r2)
            return r0
    }

    private synchronized void scheduleNext() {
            r2 = this;
            monitor-enter(r2)
            java.lang.Runnable r0 = r2.aLw     // Catch: java.lang.Throwable -> L15
            r2.aLv = r0     // Catch: java.lang.Throwable -> L15
            r1 = 0
            r2.aLw = r1     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L13
            java.util.concurrent.Executor r0 = com.kwad.sdk.utils.a.d.getExecutor()     // Catch: java.lang.Throwable -> L15
            java.lang.Runnable r1 = r2.aLv     // Catch: java.lang.Throwable -> L15
            r0.execute(r1)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r2)
            return
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void execute(java.lang.Runnable r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.Runnable r0 = r1.aLv     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L16
            java.lang.Runnable r2 = r1.c(r2)     // Catch: java.lang.Throwable -> L22
            r1.aLv = r2     // Catch: java.lang.Throwable -> L22
            java.util.concurrent.Executor r2 = com.kwad.sdk.utils.a.d.getExecutor()     // Catch: java.lang.Throwable -> L22
            java.lang.Runnable r0 = r1.aLv     // Catch: java.lang.Throwable -> L22
            r2.execute(r0)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            return
        L16:
            java.lang.Runnable r0 = r1.aLw     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L20
            java.lang.Runnable r2 = r1.c(r2)     // Catch: java.lang.Throwable -> L22
            r1.aLw = r2     // Catch: java.lang.Throwable -> L22
        L20:
            monitor-exit(r1)
            return
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
