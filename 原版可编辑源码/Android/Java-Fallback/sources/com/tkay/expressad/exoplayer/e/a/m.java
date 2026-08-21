package com.tkay.expressad.exoplayer.e.a;

final class m {
    public final com.tkay.expressad.exoplayer.e.a.j a;
    public final int b;
    public final long[] c;
    public final int[] d;
    public final int e;
    public final long[] f;
    public final int[] g;
    public final long h;

    public m(com.tkay.expressad.exoplayer.e.a.j r5, long[] r6, int[] r7, int r8, long[] r9, int[] r10, long r11) {
            r4 = this;
            r4.<init>()
            int r0 = r7.length
            int r1 = r9.length
            r2 = 1
            r3 = 0
            if (r0 != r1) goto Lb
            r0 = r2
            goto Lc
        Lb:
            r0 = r3
        Lc:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            int r0 = r6.length
            int r1 = r9.length
            if (r0 != r1) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r3
        L16:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            int r0 = r10.length
            int r1 = r9.length
            if (r0 != r1) goto L1e
            goto L1f
        L1e:
            r2 = r3
        L1f:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            r4.a = r5
            r4.c = r6
            r4.d = r7
            r4.e = r8
            r4.f = r9
            r4.g = r10
            r4.h = r11
            int r5 = r6.length
            r4.b = r5
            return
    }

    public final int a(long r3) {
            r2 = this;
            long[] r0 = r2.f
            r1 = 0
            int r3 = com.tkay.expressad.exoplayer.k.af.a(r0, r3, r1)
        L7:
            if (r3 < 0) goto L15
            int[] r4 = r2.g
            r4 = r4[r3]
            r4 = r4 & 1
            if (r4 == 0) goto L12
            return r3
        L12:
            int r3 = r3 + (-1)
            goto L7
        L15:
            r3 = -1
            return r3
    }

    public final int b(long r4) {
            r3 = this;
            long[] r0 = r3.f
            r1 = 1
            r2 = 0
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r0, r4, r1, r2)
        L8:
            long[] r5 = r3.f
            int r5 = r5.length
            if (r4 >= r5) goto L18
            int[] r5 = r3.g
            r5 = r5[r4]
            r5 = r5 & r1
            if (r5 == 0) goto L15
            return r4
        L15:
            int r4 = r4 + 1
            goto L8
        L18:
            r4 = -1
            return r4
    }
}
