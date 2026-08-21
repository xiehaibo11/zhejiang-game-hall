package com.bytedance.pangle.res.a;

public final class g extends com.bytedance.pangle.res.a.f {
    public g(com.bytedance.pangle.res.a.i r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final void a() {
            r5 = this;
            short r0 = r5.readShort()
            r1 = 8
            if (r0 != r1) goto L9
            return
        L9:
            java.io.IOException r2 = new java.io.IOException
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.Short r1 = java.lang.Short.valueOf(r1)
            r3[r4] = r1
            r1 = 1
            java.lang.Short r0 = java.lang.Short.valueOf(r0)
            r3[r1] = r0
            java.lang.String r0 = "Expected: 0x%08x, got: 0x%08x"
            java.lang.String r0 = java.lang.String.format(r0, r3)
            r2.<init>(r0)
            throw r2
    }

    public final int[] a(int r4) {
            r3 = this;
            int[] r0 = new int[r4]
            r1 = 0
        L3:
            if (r1 >= r4) goto Le
            int r2 = r3.readInt()
            r0[r1] = r2
            int r1 = r1 + 1
            goto L3
        Le:
            return r0
    }

    public final void b() {
            r5 = this;
            byte r0 = r5.readByte()
            if (r0 != 0) goto L7
            return
        L7:
            java.io.IOException r1 = new java.io.IOException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.Byte r4 = java.lang.Byte.valueOf(r3)
            r2[r3] = r4
            r3 = 1
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r2[r3] = r0
            java.lang.String r0 = "Expected: 0x%08x, got: 0x%08x"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            r1.<init>(r0)
            throw r1
    }

    public final void b(int r5) {
            r4 = this;
        L0:
            int r0 = r4.readInt()
            if (r0 == r5) goto L2c
            r5 = 1835009(0x1c0001, float:2.571395E-39)
            if (r0 >= r5) goto Lc
            goto L2c
        Lc:
            if (r0 != r5) goto Lf
            return
        Lf:
            java.io.IOException r1 = new java.io.IOException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r2[r3] = r5
            r5 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r5] = r0
            java.lang.String r5 = "Expected: 0x%08x, got: 0x%08x"
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r1.<init>(r5)
            throw r1
        L2c:
            r5 = -1
            goto L0
    }

    @Override
    public final int skipBytes(int r3) {
            r2 = this;
            r0 = 0
        L1:
            if (r0 >= r3) goto Ld
            int r1 = r3 - r0
            int r1 = super.skipBytes(r1)
            if (r1 <= 0) goto Ld
            int r0 = r0 + r1
            goto L1
        Ld:
            return r0
    }
}
