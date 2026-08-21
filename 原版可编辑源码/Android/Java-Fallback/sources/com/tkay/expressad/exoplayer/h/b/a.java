package com.tkay.expressad.exoplayer.h.b;

public abstract class a extends com.tkay.expressad.exoplayer.h.b.i {
    public final long a;
    private com.tkay.expressad.exoplayer.h.b.b k;
    private int[] l;

    public a(com.tkay.expressad.exoplayer.j.h r13, com.tkay.expressad.exoplayer.j.k r14, com.tkay.expressad.exoplayer.m r15, int r16, java.lang.Object r17, long r18, long r20, long r22, long r24) {
            r12 = this;
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r8 = r20
            r10 = r24
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r10)
            r1 = r22
            r0.a = r1
            return
    }

    public final int a(int r2) {
            r1 = this;
            int[] r0 = r1.l
            r2 = r0[r2]
            return r2
    }

    public final void a(com.tkay.expressad.exoplayer.h.b.b r1) {
            r0 = this;
            r0.k = r1
            int[] r1 = r1.a()
            r0.l = r1
            return
    }

    protected final com.tkay.expressad.exoplayer.h.b.b c() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.b.b r0 = r1.k
            return r0
    }
}
