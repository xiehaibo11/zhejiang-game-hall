package com.bytedance.pangle.f.a;

public final class b {
    java.io.InputStream a;
    private int b;

    public b(java.io.InputStream r1) {
            r0 = this;
            r0.<init>()
            r0.a(r1)
            return
    }

    public final int a() {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            r2 = 32
            if (r0 == r2) goto L20
            java.io.InputStream r2 = r4.a
            int r2 = r2.read()
            r3 = -1
            if (r2 == r3) goto L1a
            int r3 = r4.b
            int r3 = r3 + 1
            r4.b = r3
            int r2 = r2 << r0
            r1 = r1 | r2
            int r0 = r0 + 8
            goto L2
        L1a:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L20:
            return r1
    }

    final void a(java.io.InputStream r1) {
            r0 = this;
            r0.a = r1
            r1 = 0
            r0.b = r1
            return
    }

    public final int[] a(int r5) {
            r4 = this;
            int[] r0 = new int[r5]
            r1 = 0
        L3:
            if (r5 <= 0) goto L11
            int r2 = r1 + 1
            int r3 = r4.a()
            r0[r1] = r3
            int r5 = r5 + (-1)
            r1 = r2
            goto L3
        L11:
            return r0
    }

    public final void b() {
            r7 = this;
            java.io.InputStream r0 = r7.a
            r1 = 4
            long r3 = r0.skip(r1)
            int r0 = r7.b
            long r5 = (long) r0
            long r5 = r5 + r3
            int r0 = (int) r5
            r7.b = r0
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L14
            return
        L14:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    public final void b(int r5) {
            r4 = this;
            int r0 = r4.a()
            if (r0 != r5) goto L7
            return
        L7:
            java.io.IOException r1 = new java.io.IOException
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r2[r3] = r5
            r5 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r5] = r0
            java.lang.String r5 = "Expected: 0x%08x got: 0x%08x"
            java.lang.String r5 = java.lang.String.format(r5, r2)
            r1.<init>(r5)
            throw r1
    }
}
