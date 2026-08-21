package com.tkay.expressad.exoplayer.k;

public final class r {
    public byte[] a;
    private int b;
    private int c;
    private int d;

    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    public r(byte[] r2) {
            r1 = this;
            int r0 = r2.length
            r1.<init>(r2, r0)
            return
    }

    private r(byte[] r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.d = r2
            return
    }

    private void a(com.tkay.expressad.exoplayer.k.s r3) {
            r2 = this;
            byte[] r0 = r3.a
            int r1 = r3.b()
            r2.a(r0, r1)
            int r3 = r3.c()
            int r3 = r3 * 8
            r2.a(r3)
            return
    }

    private void a(byte[] r2) {
            r1 = this;
            int r0 = r2.length
            r1.a(r2, r0)
            return
    }

    private void a(byte[] r8, int r9, int r10) {
            r7 = this;
            int r0 = r10 >> 3
            int r0 = r0 + r9
        L3:
            r1 = 255(0xff, float:3.57E-43)
            r2 = 8
            if (r9 >= r0) goto L27
            byte[] r3 = r7.a
            int r4 = r7.b
            int r5 = r4 + 1
            r7.b = r5
            r4 = r3[r4]
            int r6 = r7.c
            int r4 = r4 << r6
            byte r4 = (byte) r4
            r8[r9] = r4
            r4 = r8[r9]
            r3 = r3[r5]
            r1 = r1 & r3
            int r2 = r2 - r6
            int r1 = r1 >> r2
            r1 = r1 | r4
            byte r1 = (byte) r1
            r8[r9] = r1
            int r9 = r9 + 1
            goto L3
        L27:
            r9 = r10 & 7
            if (r9 != 0) goto L2c
            return
        L2c:
            r10 = r8[r0]
            int r3 = r1 >> r9
            r10 = r10 & r3
            byte r10 = (byte) r10
            r8[r0] = r10
            int r10 = r7.c
            int r3 = r10 + r9
            if (r3 <= r2) goto L4f
            r3 = r8[r0]
            byte[] r4 = r7.a
            int r5 = r7.b
            int r6 = r5 + 1
            r7.b = r6
            r4 = r4[r5]
            r4 = r4 & r1
            int r4 = r4 << r10
            r3 = r3 | r4
            byte r3 = (byte) r3
            r8[r0] = r3
            int r10 = r10 - r2
            r7.c = r10
        L4f:
            int r10 = r7.c
            int r10 = r10 + r9
            r7.c = r10
            byte[] r3 = r7.a
            int r4 = r7.b
            r3 = r3[r4]
            r1 = r1 & r3
            int r3 = 8 - r10
            int r1 = r1 >> r3
            r3 = r8[r0]
            int r9 = 8 - r9
            int r9 = r1 << r9
            byte r9 = (byte) r9
            r9 = r9 | r3
            byte r9 = (byte) r9
            r8[r0] = r9
            if (r10 != r2) goto L72
            r8 = 0
            r7.c = r8
            int r4 = r4 + 1
            r7.b = r4
        L72:
            r7.g()
            return
    }

    private void b(byte[] r3, int r4, int r5) {
            r2 = this;
            int r0 = r2.c
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            byte[] r0 = r2.a
            int r1 = r2.b
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.b
            int r3 = r3 + r5
            r2.b = r3
            r2.g()
            return
    }

    private void e(int r2) {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r0 = r1.b
            int r0 = r0 + r2
            r1.b = r0
            r1.g()
            return
    }

    private int f() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r0 = r1.b
            return r0
    }

    private void g() {
            r2 = this;
            int r0 = r2.b
            if (r0 < 0) goto L10
            int r1 = r2.d
            if (r0 < r1) goto Le
            if (r0 != r1) goto L10
            int r0 = r2.c
            if (r0 != 0) goto L10
        Le:
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            return
    }

    public final int a() {
            r2 = this;
            int r0 = r2.d
            int r1 = r2.b
            int r0 = r0 - r1
            int r0 = r0 * 8
            int r1 = r2.c
            int r0 = r0 - r1
            return r0
    }

    public final void a(int r2) {
            r1 = this;
            int r0 = r2 / 8
            r1.b = r0
            int r0 = r0 * 8
            int r2 = r2 - r0
            r1.c = r2
            r1.g()
            return
    }

    public final void a(byte[] r1, int r2) {
            r0 = this;
            r0.a = r1
            r1 = 0
            r0.b = r1
            r0.c = r1
            r0.d = r2
            return
    }

    public final int b() {
            r2 = this;
            int r0 = r2.b
            int r0 = r0 * 8
            int r1 = r2.c
            int r0 = r0 + r1
            return r0
    }

    public final void b(int r4) {
            r3 = this;
            int r0 = r4 / 8
            int r1 = r3.b
            int r1 = r1 + r0
            r3.b = r1
            int r2 = r3.c
            int r0 = r0 * 8
            int r4 = r4 - r0
            int r2 = r2 + r4
            r3.c = r2
            r4 = 7
            if (r2 <= r4) goto L1a
            int r1 = r1 + 1
            r3.b = r1
            int r2 = r2 + (-8)
            r3.c = r2
        L1a:
            r3.g()
            return
    }

    public final int c(int r8) {
            r7 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            int r1 = r7.c
            int r1 = r1 + r8
            r7.c = r1
            r1 = r0
        La:
            int r2 = r7.c
            r3 = 8
            if (r2 <= r3) goto L24
            int r2 = r2 + (-8)
            r7.c = r2
            byte[] r3 = r7.a
            int r4 = r7.b
            int r5 = r4 + 1
            r7.b = r5
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r2 = r3 << r2
            r1 = r1 | r2
            goto La
        L24:
            byte[] r4 = r7.a
            int r5 = r7.b
            r4 = r4[r5]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r6 = 8 - r2
            int r4 = r4 >> r6
            r1 = r1 | r4
            r4 = -1
            int r8 = 32 - r8
            int r8 = r4 >>> r8
            r8 = r8 & r1
            if (r2 != r3) goto L3e
            r7.c = r0
            int r5 = r5 + 1
            r7.b = r5
        L3e:
            r7.g()
            return r8
    }

    public final void c() {
            r2 = this;
            int r0 = r2.c
            int r0 = r0 + 1
            r2.c = r0
            r1 = 8
            if (r0 != r1) goto L13
            r0 = 0
            r2.c = r0
            int r0 = r2.b
            int r0 = r0 + 1
            r2.b = r0
        L13:
            r2.g()
            return
    }

    public final void d(int r10) {
            r9 = this;
            r10 = r10 & 16383(0x3fff, float:2.2957E-41)
            int r0 = r9.c
            r1 = 8
            int r0 = 8 - r0
            r2 = 14
            int r0 = java.lang.Math.min(r0, r2)
            int r3 = r9.c
            int r4 = 8 - r3
            int r4 = r4 - r0
            r5 = 65280(0xff00, float:9.1477E-41)
            int r3 = r5 >> r3
            r5 = 1
            int r6 = r5 << r4
            int r6 = r6 - r5
            r3 = r3 | r6
            byte[] r6 = r9.a
            int r7 = r9.b
            r8 = r6[r7]
            r3 = r3 & r8
            byte r3 = (byte) r3
            r6[r7] = r3
            int r0 = 14 - r0
            int r3 = r10 >>> r0
            r8 = r6[r7]
            int r3 = r3 << r4
            r3 = r3 | r8
            byte r3 = (byte) r3
            r6[r7] = r3
            int r7 = r7 + r5
        L33:
            if (r0 <= r1) goto L44
            byte[] r3 = r9.a
            int r4 = r7 + 1
            int r6 = r0 + (-8)
            int r6 = r10 >>> r6
            byte r6 = (byte) r6
            r3[r7] = r6
            int r0 = r0 + (-8)
            r7 = r4
            goto L33
        L44:
            int r1 = r1 - r0
            byte[] r3 = r9.a
            r4 = r3[r7]
            int r6 = r5 << r1
            int r6 = r6 - r5
            r4 = r4 & r6
            byte r4 = (byte) r4
            r3[r7] = r4
            int r0 = r5 << r0
            int r0 = r0 - r5
            r10 = r10 & r0
            r0 = r3[r7]
            int r10 = r10 << r1
            r10 = r10 | r0
            byte r10 = (byte) r10
            r3[r7] = r10
            r9.b(r2)
            r9.g()
            return
    }

    public final boolean d() {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            r0 = r0[r1]
            int r1 = r3.c
            r2 = 128(0x80, float:1.8E-43)
            int r1 = r2 >> r1
            r0 = r0 & r1
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            r3.c()
            return r0
    }

    public final void e() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r1.c = r0
            int r0 = r1.b
            int r0 = r0 + 1
            r1.b = r0
            r1.g()
            return
    }
}
