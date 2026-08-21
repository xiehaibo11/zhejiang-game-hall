package com.tkay.core.common.f;

public final class ae {
    private java.lang.String a;
    private boolean b;
    private java.lang.Boolean c;

    public ae(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public final synchronized java.lang.String a() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.a     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void a(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L9
            r0.c = r1     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return
        L9:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized boolean b() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.b     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized java.lang.Boolean c() {
            r1 = this;
            monitor-enter(r1)
            java.lang.Boolean r0 = r1.c     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
