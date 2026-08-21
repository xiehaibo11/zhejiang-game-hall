package com.tkay.expressad.exoplayer.k;

public final class j {
    public final int a;
    public final int b;
    public final int c;
    public final int d;
    public final int e;
    public final int f;
    public final int g;
    public final long h;

    private j(int r1, int r2, int r3, int r4, int r5, int r6, int r7, long r8) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.g = r7
            r0.h = r8
            return
    }

    private j(byte[] r5, int r6) {
            r4 = this;
            r4.<init>()
            com.tkay.expressad.exoplayer.k.r r0 = new com.tkay.expressad.exoplayer.k.r
            r0.<init>(r5)
            int r6 = r6 * 8
            r0.a(r6)
            r5 = 16
            int r6 = r0.c(r5)
            r4.a = r6
            int r5 = r0.c(r5)
            r4.b = r5
            r5 = 24
            int r6 = r0.c(r5)
            r4.c = r6
            int r5 = r0.c(r5)
            r4.d = r5
            r5 = 20
            int r5 = r0.c(r5)
            r4.e = r5
            r5 = 3
            int r5 = r0.c(r5)
            int r5 = r5 + 1
            r4.f = r5
            r5 = 5
            int r5 = r0.c(r5)
            int r5 = r5 + 1
            r4.g = r5
            r5 = 4
            int r5 = r0.c(r5)
            long r5 = (long) r5
            r1 = 15
            long r5 = r5 & r1
            r1 = 32
            long r5 = r5 << r1
            int r0 = r0.c(r1)
            long r0 = (long) r0
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r5 = r5 | r0
            r4.h = r5
            return
    }

    private int a() {
            r2 = this;
            int r0 = r2.b
            int r1 = r2.f
            int r0 = r0 * r1
            int r1 = r2.g
            int r1 = r1 / 8
            int r0 = r0 * r1
            return r0
    }

    private long a(long r5) {
            r4 = this;
            int r0 = r4.e
            long r0 = (long) r0
            long r5 = r5 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r5 = r5 / r0
            long r0 = r4.h
            r2 = 1
            long r0 = r0 - r2
            long r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r0)
            return r5
    }

    private int b() {
            r2 = this;
            int r0 = r2.g
            int r1 = r2.e
            int r0 = r0 * r1
            return r0
    }

    private long c() {
            r4 = this;
            long r0 = r4.h
            r2 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 * r2
            int r2 = r4.e
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
    }

    private long d() {
            r4 = this;
            int r0 = r4.d
            if (r0 <= 0) goto L10
            long r0 = (long) r0
            int r2 = r4.c
            long r2 = (long) r2
            long r0 = r0 + r2
            r2 = 2
            long r0 = r0 / r2
            r2 = 1
        Le:
            long r0 = r0 + r2
            goto L2a
        L10:
            int r0 = r4.a
            int r1 = r4.b
            if (r0 != r1) goto L1a
            if (r0 <= 0) goto L1a
            long r0 = (long) r0
            goto L1c
        L1a:
            r0 = 4096(0x1000, double:2.0237E-320)
        L1c:
            int r2 = r4.f
            long r2 = (long) r2
            long r0 = r0 * r2
            int r2 = r4.g
            long r2 = (long) r2
            long r0 = r0 * r2
            r2 = 8
            long r0 = r0 / r2
            r2 = 64
            goto Le
        L2a:
            return r0
    }
}
