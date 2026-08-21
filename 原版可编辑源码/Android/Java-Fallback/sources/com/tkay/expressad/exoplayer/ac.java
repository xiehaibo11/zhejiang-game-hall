package com.tkay.expressad.exoplayer;

public final class ac {
    public static final com.tkay.expressad.exoplayer.ac a = null;
    public static final com.tkay.expressad.exoplayer.ac b = null;
    public static final com.tkay.expressad.exoplayer.ac c = null;
    public static final com.tkay.expressad.exoplayer.ac d = null;
    public static final com.tkay.expressad.exoplayer.ac e = null;
    public final long f;
    public final long g;

    static {
            com.tkay.expressad.exoplayer.ac r0 = new com.tkay.expressad.exoplayer.ac
            r1 = 0
            r0.<init>(r1, r1)
            com.tkay.expressad.exoplayer.ac.a = r0
            com.tkay.expressad.exoplayer.ac r0 = new com.tkay.expressad.exoplayer.ac
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.<init>(r3, r3)
            com.tkay.expressad.exoplayer.ac.b = r0
            com.tkay.expressad.exoplayer.ac r0 = new com.tkay.expressad.exoplayer.ac
            r0.<init>(r3, r1)
            com.tkay.expressad.exoplayer.ac.c = r0
            com.tkay.expressad.exoplayer.ac r0 = new com.tkay.expressad.exoplayer.ac
            r0.<init>(r1, r3)
            com.tkay.expressad.exoplayer.ac.d = r0
            com.tkay.expressad.exoplayer.ac r0 = com.tkay.expressad.exoplayer.ac.a
            com.tkay.expressad.exoplayer.ac.e = r0
            return
    }

    public ac(long r6, long r8) {
            r5 = this;
            r5.<init>()
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto Ld
            r2 = r3
            goto Le
        Ld:
            r2 = r4
        Le:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 < 0) goto L16
            goto L17
        L16:
            r3 = r4
        L17:
            com.tkay.expressad.exoplayer.k.a.a(r3)
            r5.f = r6
            r5.g = r8
            return
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L25
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L25
        L12:
            com.tkay.expressad.exoplayer.ac r7 = (com.tkay.expressad.exoplayer.ac) r7
            long r2 = r6.f
            long r4 = r7.f
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L25
            long r2 = r6.g
            long r4 = r7.g
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L25
            return r0
        L25:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            long r0 = r3.f
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r3.g
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }
}
