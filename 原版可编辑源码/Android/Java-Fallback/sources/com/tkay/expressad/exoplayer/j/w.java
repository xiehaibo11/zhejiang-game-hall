package com.tkay.expressad.exoplayer.j;

public final class w implements com.tkay.expressad.exoplayer.j.h {
    private final com.tkay.expressad.exoplayer.j.h a;
    private final com.tkay.expressad.exoplayer.k.v b;
    private final int c;

    public w(com.tkay.expressad.exoplayer.j.h r1, com.tkay.expressad.exoplayer.k.v r2, int r3) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            com.tkay.expressad.exoplayer.j.h r1 = (com.tkay.expressad.exoplayer.j.h) r1
            r0.a = r1
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.k.v r1 = (com.tkay.expressad.exoplayer.k.v) r1
            r0.b = r1
            r0.c = r3
            return
    }

    @Override
    public final int a(byte[] r3, int r4, int r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.v r0 = r2.b
            int r1 = r2.c
            r0.a(r1)
            com.tkay.expressad.exoplayer.j.h r0 = r2.a
            int r3 = r0.a(r3, r4, r5)
            return r3
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.v r0 = r2.b
            int r1 = r2.c
            r0.a(r1)
            com.tkay.expressad.exoplayer.j.h r0 = r2.a
            long r0 = r0.a(r3)
            return r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.a
            android.net.Uri r0 = r0.a()
            return r0
    }

    @Override
    public final void b() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.a
            r0.b()
            return
    }
}
