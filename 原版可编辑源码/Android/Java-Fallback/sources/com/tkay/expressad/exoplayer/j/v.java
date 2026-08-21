package com.tkay.expressad.exoplayer.j;

public final class v<T> implements com.tkay.expressad.exoplayer.j.t.c {
    public final com.tkay.expressad.exoplayer.j.k a;
    public final int b;
    private final com.tkay.expressad.exoplayer.j.h c;
    private final com.tkay.expressad.exoplayer.j.v.a<? extends T> d;
    private volatile T e;
    private volatile long f;

    public interface a<T> {
        T a();
    }

    private v(com.tkay.expressad.exoplayer.j.h r3, android.net.Uri r4, com.tkay.expressad.exoplayer.j.v.a<? extends T> r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.j.k r0 = new com.tkay.expressad.exoplayer.j.k
            r1 = 3
            r0.<init>(r4, r1)
            r2.<init>(r3, r0, r5)
            return
    }

    private v(com.tkay.expressad.exoplayer.j.h r1, com.tkay.expressad.exoplayer.j.k r2, com.tkay.expressad.exoplayer.j.v.a<? extends T> r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.a = r2
            r1 = 0
            r0.b = r1
            r0.d = r3
            return
    }

    private static <T> T a(com.tkay.expressad.exoplayer.j.h r1, com.tkay.expressad.exoplayer.j.v.a<? extends T> r2, android.net.Uri r3) {
            com.tkay.expressad.exoplayer.j.v r0 = new com.tkay.expressad.exoplayer.j.v
            r0.<init>(r1, r3, r2)
            r0.b()
            T r1 = r0.e
            return r1
    }

    private T c() {
            r1 = this;
            T r0 = r1.e
            return r0
    }

    private long d() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void b() {
            r4 = this;
            com.tkay.expressad.exoplayer.j.j r0 = new com.tkay.expressad.exoplayer.j.j
            com.tkay.expressad.exoplayer.j.h r1 = r4.c
            com.tkay.expressad.exoplayer.j.k r2 = r4.a
            r0.<init>(r1, r2)
            r0.b()     // Catch: java.lang.Throwable -> L23
            com.tkay.expressad.exoplayer.j.v$a<? extends T> r1 = r4.d     // Catch: java.lang.Throwable -> L23
            com.tkay.expressad.exoplayer.j.h r2 = r4.c     // Catch: java.lang.Throwable -> L23
            r2.a()     // Catch: java.lang.Throwable -> L23
            java.lang.Object r1 = r1.a()     // Catch: java.lang.Throwable -> L23
            r4.e = r1     // Catch: java.lang.Throwable -> L23
            long r1 = r0.a()
            r4.f = r1
            com.tkay.expressad.exoplayer.k.af.a(r0)
            return
        L23:
            r1 = move-exception
            long r2 = r0.a()
            r4.f = r2
            com.tkay.expressad.exoplayer.k.af.a(r0)
            throw r1
    }
}
