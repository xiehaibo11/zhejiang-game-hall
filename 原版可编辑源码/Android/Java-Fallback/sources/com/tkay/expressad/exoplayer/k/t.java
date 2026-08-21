package com.tkay.expressad.exoplayer.k;

public final class t {
    private byte[] a;
    private int b;
    private int c;
    private int d;

    public t(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c = r2
            r0.b = r3
            r1 = 0
            r0.d = r1
            r0.g()
            return
    }

    private void a(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.a = r1
            r0.c = r2
            r0.b = r3
            r1 = 0
            r0.d = r1
            r0.g()
            return
    }

    private boolean c(int r5) {
            r4 = this;
            int r0 = r4.c
            int r1 = r5 / 8
            int r2 = r0 + r1
            int r3 = r4.d
            int r3 = r3 + r5
            int r1 = r1 * 8
            int r3 = r3 - r1
            r5 = 7
            if (r3 <= r5) goto L13
            int r2 = r2 + 1
            int r3 = r3 + (-8)
        L13:
            r5 = 1
        L14:
            int r0 = r0 + r5
            if (r0 > r2) goto L26
            int r1 = r4.b
            if (r2 >= r1) goto L26
            boolean r1 = r4.d(r0)
            if (r1 == 0) goto L14
            int r2 = r2 + 1
            int r0 = r0 + 2
            goto L14
        L26:
            int r0 = r4.b
            if (r2 < r0) goto L30
            if (r2 != r0) goto L2f
            if (r3 != 0) goto L2f
            goto L30
        L2f:
            r5 = 0
        L30:
            return r5
    }

    private boolean d(int r4) {
            r3 = this;
            r0 = 2
            if (r0 > r4) goto L1b
            int r0 = r3.b
            if (r4 >= r0) goto L1b
            byte[] r0 = r3.a
            r1 = r0[r4]
            r2 = 3
            if (r1 != r2) goto L1b
            int r1 = r4 + (-2)
            r1 = r0[r1]
            if (r1 != 0) goto L1b
            r1 = 1
            int r4 = r4 - r1
            r4 = r0[r4]
            if (r4 != 0) goto L1b
            return r1
        L1b:
            r4 = 0
            return r4
    }

    private boolean e() {
            r7 = this;
            int r0 = r7.c
            int r1 = r7.d
            r2 = 0
            r3 = r2
        L6:
            int r4 = r7.c
            int r5 = r7.b
            if (r4 >= r5) goto L15
            boolean r4 = r7.b()
            if (r4 != 0) goto L15
            int r3 = r3 + 1
            goto L6
        L15:
            int r4 = r7.c
            int r5 = r7.b
            r6 = 1
            if (r4 != r5) goto L1e
            r4 = r6
            goto L1f
        L1e:
            r4 = r2
        L1f:
            r7.c = r0
            r7.d = r1
            if (r4 != 0) goto L58
            int r3 = r3 * 2
            int r3 = r3 + r6
            int r4 = r3 / 8
            int r5 = r0 + r4
            int r1 = r1 + r3
            int r4 = r4 * 8
            int r1 = r1 - r4
            r3 = 7
            if (r1 <= r3) goto L37
            int r5 = r5 + 1
            int r1 = r1 + (-8)
        L37:
            int r0 = r0 + r6
            if (r0 > r5) goto L49
            int r3 = r7.b
            if (r5 >= r3) goto L49
            boolean r3 = r7.d(r0)
            if (r3 == 0) goto L37
            int r5 = r5 + 1
            int r0 = r0 + 2
            goto L37
        L49:
            int r0 = r7.b
            if (r5 < r0) goto L54
            if (r5 != r0) goto L52
            if (r1 != 0) goto L52
            goto L54
        L52:
            r0 = r2
            goto L55
        L54:
            r0 = r6
        L55:
            if (r0 == 0) goto L58
            return r6
        L58:
            return r2
    }

    private int f() {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            boolean r2 = r4.b()
            if (r2 != 0) goto Lb
            int r1 = r1 + 1
            goto L2
        Lb:
            r2 = 1
            int r3 = r2 << r1
            int r3 = r3 - r2
            if (r1 <= 0) goto L15
            int r0 = r4.b(r1)
        L15:
            int r3 = r3 + r0
            return r3
    }

    private void g() {
            r2 = this;
            int r0 = r2.c
            if (r0 < 0) goto L10
            int r1 = r2.b
            if (r0 < r1) goto Le
            if (r0 != r1) goto L10
            int r0 = r2.d
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

    public final void a() {
            r3 = this;
            int r0 = r3.d
            r1 = 1
            int r0 = r0 + r1
            r3.d = r0
            r2 = 8
            if (r0 != r2) goto L1b
            r0 = 0
            r3.d = r0
            int r0 = r3.c
            int r2 = r0 + 1
            boolean r2 = r3.d(r2)
            if (r2 == 0) goto L18
            r1 = 2
        L18:
            int r0 = r0 + r1
            r3.c = r0
        L1b:
            r3.g()
            return
    }

    public final void a(int r5) {
            r4 = this;
            int r0 = r4.c
            int r1 = r5 / 8
            int r2 = r0 + r1
            r4.c = r2
            int r3 = r4.d
            int r1 = r1 * 8
            int r5 = r5 - r1
            int r3 = r3 + r5
            r4.d = r3
            r5 = 7
            if (r3 <= r5) goto L1b
            int r2 = r2 + 1
            r4.c = r2
            int r3 = r3 + (-8)
            r4.d = r3
        L1b:
            int r0 = r0 + 1
            int r5 = r4.c
            if (r0 > r5) goto L30
            boolean r5 = r4.d(r0)
            if (r5 == 0) goto L1b
            int r5 = r4.c
            int r5 = r5 + 1
            r4.c = r5
            int r0 = r0 + 2
            goto L1b
        L30:
            r4.g()
            return
    }

    public final int b(int r10) {
            r9 = this;
            int r0 = r9.d
            int r0 = r0 + r10
            r9.d = r0
            r0 = 0
            r1 = r0
        L7:
            int r2 = r9.d
            r3 = 2
            r4 = 1
            r5 = 8
            if (r2 <= r5) goto L2c
            int r2 = r2 + (-8)
            r9.d = r2
            byte[] r5 = r9.a
            int r6 = r9.c
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r2 = r5 << r2
            r1 = r1 | r2
            int r2 = r6 + 1
            boolean r2 = r9.d(r2)
            if (r2 == 0) goto L27
            goto L28
        L27:
            r3 = r4
        L28:
            int r6 = r6 + r3
            r9.c = r6
            goto L7
        L2c:
            byte[] r6 = r9.a
            int r7 = r9.c
            r6 = r6[r7]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r8 = 8 - r2
            int r6 = r6 >> r8
            r1 = r1 | r6
            r6 = -1
            int r10 = 32 - r10
            int r10 = r6 >>> r10
            r10 = r10 & r1
            if (r2 != r5) goto L4f
            r9.d = r0
            int r0 = r7 + 1
            boolean r0 = r9.d(r0)
            if (r0 == 0) goto L4b
            goto L4c
        L4b:
            r3 = r4
        L4c:
            int r7 = r7 + r3
            r9.c = r7
        L4f:
            r9.g()
            return r10
    }

    public final boolean b() {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.c
            r0 = r0[r1]
            int r1 = r3.d
            r2 = 128(0x80, float:1.8E-43)
            int r1 = r2 >> r1
            r0 = r0 & r1
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            r3.a()
            return r0
    }

    public final int c() {
            r1 = this;
            int r0 = r1.f()
            return r0
    }

    public final int d() {
            r3 = this;
            int r0 = r3.f()
            int r1 = r0 % 2
            r2 = 1
            if (r1 != 0) goto Lb
            r1 = -1
            goto Lc
        Lb:
            r1 = r2
        Lc:
            int r0 = r0 + r2
            int r0 = r0 / 2
            int r1 = r1 * r0
            return r1
    }
}
