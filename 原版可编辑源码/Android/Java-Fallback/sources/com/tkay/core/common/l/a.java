package com.tkay.core.common.l;

public abstract class a {
    private boolean a;
    private final com.tkay.core.common.j.a b;
    private final com.tkay.core.common.j.b c;


    public a() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.j.a r0 = com.tkay.core.common.j.c.a()
            r1.b = r0
            com.tkay.core.common.l.a$1 r0 = new com.tkay.core.common.l.a$1
            r0.<init>(r1)
            r1.c = r0
            return
    }

    static boolean a(com.tkay.core.common.l.a r0) {
            boolean r0 = r0.a
            return r0
    }

    static boolean b(com.tkay.core.common.l.a r1) {
            r0 = 1
            r1.a = r0
            return r0
    }

    private boolean c() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public final synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.j.a r0 = r2.b     // Catch: java.lang.Throwable -> La
            com.tkay.core.common.j.b r1 = r2.c     // Catch: java.lang.Throwable -> La
            r0.a(r1)     // Catch: java.lang.Throwable -> La
            monitor-exit(r2)
            return
        La:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    protected final synchronized void a(long r4) {
            r3 = this;
            monitor-enter(r3)
            com.tkay.core.common.j.a r0 = r3.b     // Catch: java.lang.Throwable -> Lb
            com.tkay.core.common.j.b r1 = r3.c     // Catch: java.lang.Throwable -> Lb
            r2 = 0
            r0.a(r1, r4, r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r3)
            return
        Lb:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    protected abstract void b();
}
