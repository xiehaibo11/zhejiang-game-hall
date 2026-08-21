package com.tkay.expressad.exoplayer.h;

public final class g implements com.tkay.expressad.exoplayer.h.z {
    protected final com.tkay.expressad.exoplayer.h.z[] a;

    public g(com.tkay.expressad.exoplayer.h.z[] r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void a_(long r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.z[] r0 = r4.a
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.a_(r5)
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }

    @Override
    public final boolean c(long r18) {
            r17 = this;
            r0 = r18
            r2 = 0
            r3 = r2
        L4:
            long r4 = r17.e()
            r6 = -9223372036854775808
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 == 0) goto L3c
            r8 = r17
            com.tkay.expressad.exoplayer.h.z[] r9 = r8.a
            int r10 = r9.length
            r11 = r2
            r12 = r11
        L15:
            if (r11 >= r10) goto L38
            r13 = r9[r11]
            long r14 = r13.e()
            int r16 = (r14 > r6 ? 1 : (r14 == r6 ? 0 : -1))
            if (r16 == 0) goto L28
            int r16 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r16 > 0) goto L28
            r16 = 1
            goto L2a
        L28:
            r16 = r2
        L2a:
            int r14 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r14 == 0) goto L30
            if (r16 == 0) goto L35
        L30:
            boolean r13 = r13.c(r0)
            r12 = r12 | r13
        L35:
            int r11 = r11 + 1
            goto L15
        L38:
            r3 = r3 | r12
            if (r12 != 0) goto L4
            goto L3e
        L3c:
            r8 = r17
        L3e:
            return r3
    }

    @Override
    public final long d() {
            r11 = this;
            com.tkay.expressad.exoplayer.h.z[] r0 = r11.a
            int r1 = r0.length
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
            r5 = r2
        La:
            r7 = -9223372036854775808
            if (r4 >= r1) goto L1f
            r9 = r0[r4]
            long r9 = r9.d()
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 == 0) goto L1c
            long r5 = java.lang.Math.min(r5, r9)
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 != 0) goto L24
            return r7
        L24:
            return r5
    }

    @Override
    public final long e() {
            r11 = this;
            com.tkay.expressad.exoplayer.h.z[] r0 = r11.a
            int r1 = r0.length
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
            r5 = r2
        La:
            r7 = -9223372036854775808
            if (r4 >= r1) goto L1f
            r9 = r0[r4]
            long r9 = r9.e()
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 == 0) goto L1c
            long r5 = java.lang.Math.min(r5, r9)
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 != 0) goto L24
            return r7
        L24:
            return r5
    }
}
