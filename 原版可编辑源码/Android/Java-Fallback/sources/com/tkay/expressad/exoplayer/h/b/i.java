package com.tkay.expressad.exoplayer.h.b;

public abstract class i extends com.tkay.expressad.exoplayer.h.b.c {
    public final long j;

    public i(com.tkay.expressad.exoplayer.j.h r1, com.tkay.expressad.exoplayer.j.k r2, com.tkay.expressad.exoplayer.m r3, int r4, java.lang.Object r5, long r6, long r8, long r10) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r8)
            com.tkay.expressad.exoplayer.k.a.a(r3)
            r0.j = r10
            return
    }

    public long e() {
            r5 = this;
            long r0 = r5.j
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Lc
            r2 = 1
            long r0 = r0 + r2
            return r0
        Lc:
            return r2
    }

    public abstract boolean f();
}
