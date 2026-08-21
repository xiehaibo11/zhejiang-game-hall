package com.tkay.expressad.exoplayer.h.a;

final class d extends com.tkay.expressad.exoplayer.h.p {
    private final com.tkay.expressad.exoplayer.h.a.a c;

    public d(com.tkay.expressad.exoplayer.ae r4, com.tkay.expressad.exoplayer.h.a.a r5) {
            r3 = this;
            r3.<init>(r4)
            int r0 = r4.c()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Ld
            r0 = r2
            goto Le
        Ld:
            r0 = r1
        Le:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r4 = r4.b()
            if (r4 != r2) goto L18
            r1 = r2
        L18:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            r3.c = r5
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.a a(int r11, com.tkay.expressad.exoplayer.ae.a r12, boolean r13) {
            r10 = this;
            com.tkay.expressad.exoplayer.ae r0 = r10.b
            r0.a(r11, r12, r13)
            java.lang.Object r2 = r12.a
            java.lang.Object r3 = r12.b
            int r4 = r12.c
            long r5 = r12.d
            long r7 = r12.b()
            com.tkay.expressad.exoplayer.h.a.a r9 = r10.c
            r1 = r12
            r1.a(r2, r3, r4, r5, r7, r9)
            return r12
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.b a(int r1, com.tkay.expressad.exoplayer.ae.b r2, boolean r3, long r4) {
            r0 = this;
            com.tkay.expressad.exoplayer.ae$b r1 = super.a(r1, r2, r3, r4)
            long r2 = r1.i
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L15
            com.tkay.expressad.exoplayer.h.a.a r2 = r0.c
            long r2 = r2.k
            r1.i = r2
        L15:
            return r1
    }
}
