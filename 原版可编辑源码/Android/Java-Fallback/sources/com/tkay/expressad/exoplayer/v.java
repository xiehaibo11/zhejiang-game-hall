package com.tkay.expressad.exoplayer;

public final class v {
    public static final com.tkay.expressad.exoplayer.v a = null;
    public final float b;
    public final float c;
    public final boolean d;
    private final int e;

    static {
            com.tkay.expressad.exoplayer.v r0 = new com.tkay.expressad.exoplayer.v
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.v.a = r0
            return
    }

    public v(float r3) {
            r2 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public v(float r2, float r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public v(float r5, float r6, boolean r7) {
            r4 = this;
            r4.<init>()
            r0 = 0
            int r1 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r2 = 1
            r3 = 0
            if (r1 <= 0) goto Lc
            r1 = r2
            goto Ld
        Lc:
            r1 = r3
        Ld:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L15
            goto L16
        L15:
            r2 = r3
        L16:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            r4.b = r5
            r4.c = r6
            r4.d = r7
            r6 = 1148846080(0x447a0000, float:1000.0)
            float r5 = r5 * r6
            int r5 = java.lang.Math.round(r5)
            r4.e = r5
            return
    }

    public final long a(long r3) {
            r2 = this;
            int r0 = r2.e
            long r0 = (long) r0
            long r3 = r3 * r0
            return r3
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.tkay.expressad.exoplayer.v r5 = (com.tkay.expressad.exoplayer.v) r5
            float r2 = r4.b
            float r3 = r5.b
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto L2b
            float r2 = r4.c
            float r3 = r5.c
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto L2b
            boolean r2 = r4.d
            boolean r5 = r5.d
            if (r2 != r5) goto L2b
            return r0
        L2b:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            float r0 = r2.b
            int r0 = java.lang.Float.floatToRawIntBits(r0)
            int r0 = r0 + 527
            int r0 = r0 * 31
            float r1 = r2.c
            int r1 = java.lang.Float.floatToRawIntBits(r1)
            int r0 = r0 + r1
            int r0 = r0 * 31
            boolean r1 = r2.d
            int r0 = r0 + r1
            return r0
    }
}
