package com.tkay.expressad.exoplayer.g.c;

public final class g extends com.tkay.expressad.exoplayer.g.c.b {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.c.g> CREATOR = null;
    public final long a;
    public final long b;


    static {
            com.tkay.expressad.exoplayer.g.c.g$1 r0 = new com.tkay.expressad.exoplayer.g.c.g$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.c.g.CREATOR = r0
            return
    }

    private g(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r3
            return
    }

    g(long r1, long r3, byte r5) {
            r0 = this;
            r0.<init>(r1, r3)
            return
    }

    static long a(com.tkay.expressad.exoplayer.k.s r6, long r7) {
            int r0 = r6.d()
            long r0 = (long) r0
            r2 = 128(0x80, double:6.3E-322)
            long r2 = r2 & r0
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L21
            r2 = 1
            long r0 = r0 & r2
            r2 = 32
            long r0 = r0 << r2
            long r2 = r6.h()
            long r0 = r0 | r2
            long r0 = r0 + r7
            r6 = 8589934591(0x1ffffffff, double:4.2439915814E-314)
            long r6 = r6 & r0
            goto L26
        L21:
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L26:
            return r6
    }

    static com.tkay.expressad.exoplayer.g.c.g a(com.tkay.expressad.exoplayer.k.s r1, long r2, com.tkay.expressad.exoplayer.k.ac r4) {
            long r1 = a(r1, r2)
            long r3 = r4.a(r1)
            com.tkay.expressad.exoplayer.g.c.g r0 = new com.tkay.expressad.exoplayer.g.c.g
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            long r0 = r2.a
            r3.writeLong(r0)
            long r0 = r2.b
            r3.writeLong(r0)
            return
    }
}
