package com.tkay.expressad.exoplayer.h;

public final class ab extends com.tkay.expressad.exoplayer.ae {
    private static final java.lang.Object b = null;
    private final long c;
    private final long d;
    private final long e;
    private final long f;
    private final long g;
    private final long h;
    private final boolean i;
    private final boolean j;
    private final java.lang.Object k;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.tkay.expressad.exoplayer.h.ab.b = r0
            return
    }

    private ab(long r3, long r5, boolean r7, boolean r8, java.lang.Object r9) {
            r2 = this;
            r2.<init>()
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.c = r0
            r2.d = r0
            r2.e = r3
            r2.f = r5
            r3 = 0
            r2.g = r3
            r2.h = r3
            r2.i = r7
            r2.j = r8
            r2.k = r9
            return
    }

    private ab(long r1, long r3, boolean r5, boolean r6, java.lang.Object r7, byte r8) {
            r0 = this;
            r0.<init>(r1, r3, r5, r6, r7)
            return
    }

    private ab(long r7, boolean r9, boolean r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r4 = r10
            r0.<init>(r1, r3, r4, r5)
            return
    }

    public ab(long r10, boolean r12, boolean r13, java.lang.Object r14) {
            r9 = this;
            r8 = 0
            r0 = r9
            r1 = r10
            r3 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r0.<init>(r1, r3, r5, r6, r7, r8)
            return
    }

    @Override
    public final int a(java.lang.Object r2) {
            r1 = this;
            java.lang.Object r0 = com.tkay.expressad.exoplayer.h.ab.b
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto La
            r2 = 0
            return r2
        La:
            r2 = -1
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.a a(int r8, com.tkay.expressad.exoplayer.ae.a r9, boolean r10) {
            r7 = this;
            r0 = 1
            com.tkay.expressad.exoplayer.k.a.a(r8, r0)
            if (r10 == 0) goto L9
            java.lang.Object r8 = com.tkay.expressad.exoplayer.h.ab.b
            goto La
        L9:
            r8 = 0
        La:
            r2 = r8
            r1 = 0
            long r3 = r7.e
            long r5 = r7.g
            long r5 = -r5
            r0 = r9
            com.tkay.expressad.exoplayer.ae$a r8 = r0.a(r1, r2, r3, r5)
            return r8
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.b a(int r17, com.tkay.expressad.exoplayer.ae.b r18, boolean r19, long r20) {
            r16 = this;
            r0 = r16
            r1 = 1
            r2 = r17
            com.tkay.expressad.exoplayer.k.a.a(r2, r1)
            if (r19 == 0) goto Ld
            java.lang.Object r1 = r0.k
            goto Le
        Ld:
            r1 = 0
        Le:
            r3 = r1
            long r1 = r0.h
            boolean r4 = r0.j
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 == 0) goto L2f
            r7 = 0
            int r4 = (r20 > r7 ? 1 : (r20 == r7 ? 0 : -1))
            if (r4 == 0) goto L2f
            long r7 = r0.f
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 != 0) goto L28
        L26:
            r10 = r5
            goto L30
        L28:
            long r1 = r1 + r20
            int r4 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r4 <= 0) goto L2f
            goto L26
        L2f:
            r10 = r1
        L30:
            long r4 = r0.c
            long r6 = r0.d
            boolean r8 = r0.i
            boolean r9 = r0.j
            long r12 = r0.f
            long r14 = r0.g
            r2 = r18
            com.tkay.expressad.exoplayer.ae$b r1 = r2.a(r3, r4, r6, r8, r9, r10, r12, r14)
            return r1
    }

    @Override
    public final int b() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final int c() {
            r1 = this;
            r0 = 1
            return r0
    }
}
