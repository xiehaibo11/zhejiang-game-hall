package com.tkay.expressad.exoplayer.b;

final class s {
    private static final int a = 65;
    private static final int b = 400;
    private static final int c = 4000;
    private final int d;
    private final int e;
    private final float f;
    private final float g;
    private final float h;
    private final int i;
    private final int j;
    private final int k;
    private final short[] l;
    private short[] m;
    private int n;
    private short[] o;
    private int p;
    private short[] q;
    private int r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private int x;
    private int y;

    public s(int r1, int r2, float r3, float r4, int r5) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            r0.e = r2
            r0.f = r3
            r0.g = r4
            float r3 = (float) r1
            float r4 = (float) r5
            float r3 = r3 / r4
            r0.h = r3
            int r3 = r1 / 400
            r0.i = r3
            int r1 = r1 / 65
            r0.j = r1
            int r1 = r1 * 2
            r0.k = r1
            short[] r3 = new short[r1]
            r0.l = r3
            int r3 = r1 * r2
            short[] r3 = new short[r3]
            r0.m = r3
            int r3 = r1 * r2
            short[] r3 = new short[r3]
            r0.o = r3
            int r1 = r1 * r2
            short[] r1 = new short[r1]
            r0.q = r1
            return
    }

    private int a(short[] r7, int r8) {
            r6 = this;
            int r0 = r6.d
            r1 = 4000(0xfa0, float:5.605E-42)
            r2 = 1
            if (r0 <= r1) goto L9
            int r0 = r0 / r1
            goto La
        L9:
            r0 = r2
        La:
            int r1 = r6.e
            r3 = 0
            if (r1 != r2) goto L1a
            if (r0 != r2) goto L1a
            int r0 = r6.i
            int r1 = r6.j
            int r7 = r6.a(r7, r8, r0, r1)
            goto L4f
        L1a:
            r6.c(r7, r8, r0)
            short[] r1 = r6.l
            int r4 = r6.i
            int r4 = r4 / r0
            int r5 = r6.j
            int r5 = r5 / r0
            int r1 = r6.a(r1, r3, r4, r5)
            if (r0 == r2) goto L4e
            int r1 = r1 * r0
            int r0 = r0 * 4
            int r4 = r1 - r0
            int r1 = r1 + r0
            int r0 = r6.i
            if (r4 >= r0) goto L36
            r4 = r0
        L36:
            int r0 = r6.j
            if (r1 <= r0) goto L3b
            r1 = r0
        L3b:
            int r0 = r6.e
            if (r0 != r2) goto L44
            int r7 = r6.a(r7, r8, r4, r1)
            goto L4f
        L44:
            r6.c(r7, r8, r2)
            short[] r7 = r6.l
            int r7 = r6.a(r7, r3, r4, r1)
            goto L4f
        L4e:
            r7 = r1
        L4f:
            int r8 = r6.x
            int r0 = r6.y
            if (r8 == 0) goto L67
            int r1 = r6.v
            if (r1 != 0) goto L5a
            goto L67
        L5a:
            int r1 = r8 * 3
            if (r0 <= r1) goto L5f
            goto L67
        L5f:
            int r8 = r8 * 2
            int r0 = r6.w
            int r0 = r0 * 3
            if (r8 > r0) goto L68
        L67:
            r2 = r3
        L68:
            if (r2 == 0) goto L6d
            int r8 = r6.v
            goto L6e
        L6d:
            r8 = r7
        L6e:
            int r0 = r6.x
            r6.w = r0
            r6.v = r7
            return r8
    }

    private int a(short[] r9, int r10, float r11, int r12) {
            r8 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            int r1 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            r2 = 1065353216(0x3f800000, float:1.0)
            if (r1 < 0) goto Ld
            float r0 = (float) r12
            float r11 = r11 - r2
            float r0 = r0 / r11
            int r11 = (int) r0
            goto L16
        Ld:
            float r1 = (float) r12
            float r0 = r0 - r11
            float r1 = r1 * r0
            float r11 = r11 - r2
            float r1 = r1 / r11
            int r11 = (int) r1
            r8.u = r11
            r11 = r12
        L16:
            short[] r0 = r8.o
            int r1 = r8.p
            short[] r2 = r8.a(r0, r1, r11)
            r8.o = r2
            int r1 = r8.e
            int r3 = r8.p
            int r7 = r10 + r12
            r0 = r11
            r4 = r9
            r5 = r10
            r6 = r9
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            int r9 = r8.p
            int r9 = r9 + r11
            r8.p = r9
            return r11
    }

    private int a(short[] r10, int r11, int r12, int r13) {
            r9 = this;
            int r0 = r9.e
            int r11 = r11 * r0
            r0 = 1
            r1 = 0
            r2 = 255(0xff, float:3.57E-43)
            r3 = r1
            r4 = r3
        L9:
            if (r12 > r13) goto L34
            r5 = r1
            r6 = r5
        Ld:
            if (r5 >= r12) goto L21
            int r7 = r11 + r5
            short r7 = r10[r7]
            int r8 = r11 + r12
            int r8 = r8 + r5
            short r8 = r10[r8]
            int r7 = r7 - r8
            int r7 = java.lang.Math.abs(r7)
            int r6 = r6 + r7
            int r5 = r5 + 1
            goto Ld
        L21:
            int r5 = r6 * r3
            int r7 = r0 * r12
            if (r5 >= r7) goto L29
            r3 = r12
            r0 = r6
        L29:
            int r5 = r6 * r2
            int r7 = r4 * r12
            if (r5 <= r7) goto L31
            r2 = r12
            r4 = r6
        L31:
            int r12 = r12 + 1
            goto L9
        L34:
            int r0 = r0 / r3
            r9.x = r0
            int r4 = r4 / r2
            r9.y = r4
            return r3
    }

    private void a(float r15) {
            r14 = this;
            int r0 = r14.n
            int r1 = r14.k
            if (r0 >= r1) goto L7
            return
        L7:
            r1 = 0
            r10 = r1
        L9:
            int r2 = r14.u
            if (r2 <= 0) goto L20
            int r3 = r14.k
            int r2 = java.lang.Math.min(r3, r2)
            short[] r3 = r14.m
            r14.b(r3, r10, r2)
            int r3 = r14.u
            int r3 = r3 - r2
            r14.u = r3
            int r10 = r10 + r2
            goto L11d
        L20:
            short[] r2 = r14.m
            int r3 = r14.d
            r4 = 4000(0xfa0, float:5.605E-42)
            r5 = 1
            if (r3 <= r4) goto L2c
            int r3 = r3 / 4000
            goto L2d
        L2c:
            r3 = r5
        L2d:
            int r4 = r14.e
            if (r4 != r5) goto L3c
            if (r3 != r5) goto L3c
            int r3 = r14.i
            int r4 = r14.j
            int r2 = r14.a(r2, r10, r3, r4)
            goto L71
        L3c:
            r14.c(r2, r10, r3)
            short[] r4 = r14.l
            int r6 = r14.i
            int r6 = r6 / r3
            int r7 = r14.j
            int r7 = r7 / r3
            int r4 = r14.a(r4, r1, r6, r7)
            if (r3 == r5) goto L70
            int r4 = r4 * r3
            int r3 = r3 * 4
            int r6 = r4 - r3
            int r4 = r4 + r3
            int r3 = r14.i
            if (r6 >= r3) goto L58
            r6 = r3
        L58:
            int r3 = r14.j
            if (r4 <= r3) goto L5d
            r4 = r3
        L5d:
            int r3 = r14.e
            if (r3 != r5) goto L66
            int r2 = r14.a(r2, r10, r6, r4)
            goto L71
        L66:
            r14.c(r2, r10, r5)
            short[] r2 = r14.l
            int r2 = r14.a(r2, r1, r6, r4)
            goto L71
        L70:
            r2 = r4
        L71:
            int r3 = r14.x
            int r4 = r14.y
            if (r3 == 0) goto L89
            int r6 = r14.v
            if (r6 != 0) goto L7c
            goto L89
        L7c:
            int r6 = r3 * 3
            if (r4 <= r6) goto L81
            goto L89
        L81:
            int r3 = r3 * 2
            int r4 = r14.w
            int r4 = r4 * 3
            if (r3 > r4) goto L8a
        L89:
            r5 = r1
        L8a:
            if (r5 == 0) goto L90
            int r3 = r14.v
            r11 = r3
            goto L91
        L90:
            r11 = r2
        L91:
            int r3 = r14.x
            r14.w = r3
            r14.v = r2
            double r2 = (double) r15
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r3 = 1073741824(0x40000000, float:2.0)
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r2 <= 0) goto Ld7
            short[] r8 = r14.m
            int r2 = (r15 > r3 ? 1 : (r15 == r3 ? 0 : -1))
            if (r2 < 0) goto Laf
            float r2 = (float) r11
            float r3 = r15 - r4
            float r2 = r2 / r3
            int r2 = (int) r2
            r12 = r2
            goto Lb9
        Laf:
            float r2 = (float) r11
            float r3 = r3 - r15
            float r2 = r2 * r3
            float r3 = r15 - r4
            float r2 = r2 / r3
            int r2 = (int) r2
            r14.u = r2
            r12 = r11
        Lb9:
            short[] r2 = r14.o
            int r3 = r14.p
            short[] r4 = r14.a(r2, r3, r12)
            r14.o = r4
            int r3 = r14.e
            int r5 = r14.p
            int r9 = r10 + r11
            r2 = r12
            r6 = r8
            r7 = r10
            a(r2, r3, r4, r5, r6, r7, r8, r9)
            int r2 = r14.p
            int r2 = r2 + r12
            r14.p = r2
            int r11 = r11 + r12
            int r10 = r10 + r11
            goto L11d
        Ld7:
            short[] r8 = r14.m
            r2 = 1056964608(0x3f000000, float:0.5)
            int r2 = (r15 > r2 ? 1 : (r15 == r2 ? 0 : -1))
            if (r2 >= 0) goto Le6
            float r2 = (float) r11
            float r2 = r2 * r15
            float r4 = r4 - r15
            float r2 = r2 / r4
            int r2 = (int) r2
            r12 = r2
            goto Lf0
        Le6:
            float r2 = (float) r11
            float r3 = r3 * r15
            float r3 = r3 - r4
            float r2 = r2 * r3
            float r4 = r4 - r15
            float r2 = r2 / r4
            int r2 = (int) r2
            r14.u = r2
            r12 = r11
        Lf0:
            short[] r2 = r14.o
            int r3 = r14.p
            int r13 = r11 + r12
            short[] r2 = r14.a(r2, r3, r13)
            r14.o = r2
            int r3 = r14.e
            int r4 = r10 * r3
            int r5 = r14.p
            int r5 = r5 * r3
            int r3 = r3 * r11
            java.lang.System.arraycopy(r8, r4, r2, r5, r3)
            int r3 = r14.e
            short[] r4 = r14.o
            int r2 = r14.p
            int r5 = r2 + r11
            int r7 = r10 + r11
            r2 = r12
            r6 = r8
            r9 = r10
            a(r2, r3, r4, r5, r6, r7, r8, r9)
            int r2 = r14.p
            int r2 = r2 + r13
            r14.p = r2
            int r10 = r10 + r12
        L11d:
            int r2 = r14.k
            int r2 = r2 + r10
            if (r2 <= r0) goto L9
            int r15 = r14.n
            int r15 = r15 - r10
            short[] r0 = r14.m
            int r2 = r14.e
            int r10 = r10 * r2
            int r2 = r2 * r15
            java.lang.System.arraycopy(r0, r10, r0, r1, r2)
            r14.n = r15
            return
    }

    private void a(float r12, int r13) {
            r11 = this;
            int r0 = r11.p
            if (r0 != r13) goto L5
            return
        L5:
            int r0 = r11.d
            float r1 = (float) r0
            float r1 = r1 / r12
            int r12 = (int) r1
        La:
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r12 > r1) goto Lb2
            if (r0 <= r1) goto L12
            goto Lb2
        L12:
            int r1 = r11.p
            int r1 = r1 - r13
            short[] r2 = r11.q
            int r3 = r11.r
            short[] r2 = r11.a(r2, r3, r1)
            r11.q = r2
            short[] r3 = r11.o
            int r4 = r11.e
            int r5 = r13 * r4
            int r6 = r11.r
            int r6 = r6 * r4
            int r4 = r4 * r1
            java.lang.System.arraycopy(r3, r5, r2, r6, r4)
            r11.p = r13
            int r13 = r11.r
            int r13 = r13 + r1
            r11.r = r13
            r13 = 0
            r1 = r13
        L35:
            int r2 = r11.r
            int r3 = r2 + (-1)
            if (r1 >= r3) goto L9d
        L3b:
            int r2 = r11.s
            int r3 = r2 + 1
            int r3 = r3 * r12
            int r4 = r11.t
            int r5 = r4 * r0
            r6 = 1
            if (r3 <= r5) goto L89
            short[] r2 = r11.o
            int r3 = r11.p
            short[] r2 = r11.a(r2, r3, r6)
            r11.o = r2
            r2 = r13
        L52:
            int r3 = r11.e
            if (r2 >= r3) goto L7e
            short[] r4 = r11.o
            int r5 = r11.p
            int r5 = r5 * r3
            int r5 = r5 + r2
            short[] r7 = r11.q
            int r8 = r1 * r3
            int r8 = r8 + r2
            short r9 = r7[r8]
            int r8 = r8 + r3
            short r3 = r7[r8]
            int r7 = r11.t
            int r7 = r7 * r0
            int r8 = r11.s
            int r10 = r8 * r12
            int r8 = r8 + r6
            int r8 = r8 * r12
            int r7 = r8 - r7
            int r8 = r8 - r10
            int r9 = r9 * r7
            int r7 = r8 - r7
            int r7 = r7 * r3
            int r9 = r9 + r7
            int r9 = r9 / r8
            short r3 = (short) r9
            r4[r5] = r3
            int r2 = r2 + 1
            goto L52
        L7e:
            int r2 = r11.t
            int r2 = r2 + r6
            r11.t = r2
            int r2 = r11.p
            int r2 = r2 + r6
            r11.p = r2
            goto L3b
        L89:
            int r2 = r2 + 1
            r11.s = r2
            if (r2 != r0) goto L9a
            r11.s = r13
            if (r4 != r12) goto L94
            goto L95
        L94:
            r6 = r13
        L95:
            com.tkay.expressad.exoplayer.k.a.b(r6)
            r11.t = r13
        L9a:
            int r1 = r1 + 1
            goto L35
        L9d:
            int r12 = r2 + (-1)
            if (r12 == 0) goto Lb1
            short[] r0 = r11.q
            int r1 = r11.e
            int r3 = r12 * r1
            int r2 = r2 - r12
            int r2 = r2 * r1
            java.lang.System.arraycopy(r0, r3, r0, r13, r2)
            int r13 = r11.r
            int r13 = r13 - r12
            r11.r = r13
        Lb1:
            return
        Lb2:
            int r12 = r12 / 2
            int r0 = r0 / 2
            goto La
    }

    private void a(int r5) {
            r4 = this;
            int r0 = r4.n
            int r0 = r0 - r5
            short[] r1 = r4.m
            int r2 = r4.e
            int r5 = r5 * r2
            int r2 = r2 * r0
            r3 = 0
            java.lang.System.arraycopy(r1, r5, r1, r3, r2)
            r4.n = r0
            return
    }

    private static void a(int r8, int r9, short[] r10, int r11, short[] r12, int r13, short[] r14, int r15) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r9) goto L26
            int r2 = r11 * r9
            int r2 = r2 + r1
            int r3 = r15 * r9
            int r3 = r3 + r1
            int r4 = r13 * r9
            int r4 = r4 + r1
            r5 = r0
        Le:
            if (r5 >= r8) goto L23
            short r6 = r12[r4]
            int r7 = r8 - r5
            int r6 = r6 * r7
            short r7 = r14[r3]
            int r7 = r7 * r5
            int r6 = r6 + r7
            int r6 = r6 / r8
            short r6 = (short) r6
            r10[r2] = r6
            int r2 = r2 + r9
            int r4 = r4 + r9
            int r3 = r3 + r9
            int r5 = r5 + 1
            goto Le
        L23:
            int r1 = r1 + 1
            goto L2
        L26:
            return
    }

    private boolean a(int r3, int r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L18
            int r1 = r2.v
            if (r1 != 0) goto L8
            goto L18
        L8:
            int r1 = r3 * 3
            if (r4 <= r1) goto Ld
            return r0
        Ld:
            int r3 = r3 * 2
            int r4 = r2.w
            int r4 = r4 * 3
            if (r3 > r4) goto L16
            return r0
        L16:
            r3 = 1
            return r3
        L18:
            return r0
    }

    private short[] a(short[] r3, int r4, int r5) {
            r2 = this;
            int r0 = r3.length
            int r1 = r2.e
            int r0 = r0 / r1
            int r4 = r4 + r5
            if (r4 > r0) goto L8
            return r3
        L8:
            int r0 = r0 * 3
            int r0 = r0 / 2
            int r0 = r0 + r5
            int r0 = r0 * r1
            short[] r3 = java.util.Arrays.copyOf(r3, r0)
            return r3
    }

    private int b(int r3) {
            r2 = this;
            int r0 = r2.k
            int r1 = r2.u
            int r0 = java.lang.Math.min(r0, r1)
            short[] r1 = r2.m
            r2.b(r1, r3, r0)
            int r3 = r2.u
            int r3 = r3 - r0
            r2.u = r3
            return r0
    }

    private int b(short[] r10, int r11, float r12, int r13) {
            r9 = this;
            r0 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            r1 = 1065353216(0x3f800000, float:1.0)
            if (r0 >= 0) goto Le
            float r0 = (float) r13
            float r0 = r0 * r12
            float r1 = r1 - r12
            float r0 = r0 / r1
            int r12 = (int) r0
            goto L1a
        Le:
            float r0 = (float) r13
            r2 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 * r12
            float r2 = r2 - r1
            float r0 = r0 * r2
            float r1 = r1 - r12
            float r0 = r0 / r1
            int r12 = (int) r0
            r9.u = r12
            r12 = r13
        L1a:
            short[] r0 = r9.o
            int r1 = r9.p
            int r8 = r13 + r12
            short[] r0 = r9.a(r0, r1, r8)
            r9.o = r0
            int r1 = r9.e
            int r2 = r11 * r1
            int r3 = r9.p
            int r3 = r3 * r1
            int r1 = r1 * r13
            java.lang.System.arraycopy(r10, r2, r0, r3, r1)
            int r1 = r9.e
            short[] r2 = r9.o
            int r0 = r9.p
            int r3 = r0 + r13
            int r5 = r11 + r13
            r0 = r12
            r4 = r10
            r6 = r10
            r7 = r11
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            int r10 = r9.p
            int r10 = r10 + r8
            r9.p = r10
            return r12
    }

    private short b(short[] r3, int r4, int r5, int r6) {
            r2 = this;
            short r0 = r3[r4]
            int r1 = r2.e
            int r4 = r4 + r1
            short r3 = r3[r4]
            int r4 = r2.t
            int r4 = r4 * r5
            int r5 = r2.s
            int r1 = r5 * r6
            int r5 = r5 + 1
            int r5 = r5 * r6
            int r4 = r5 - r4
            int r5 = r5 - r1
            int r0 = r0 * r4
            int r4 = r5 - r4
            int r4 = r4 * r3
            int r0 = r0 + r4
            int r0 = r0 / r5
            short r3 = (short) r0
            return r3
    }

    private void b(short[] r4, int r5, int r6) {
            r3 = this;
            short[] r0 = r3.o
            int r1 = r3.p
            short[] r0 = r3.a(r0, r1, r6)
            r3.o = r0
            int r1 = r3.e
            int r5 = r5 * r1
            int r2 = r3.p
            int r2 = r2 * r1
            int r1 = r1 * r6
            java.lang.System.arraycopy(r4, r5, r0, r2, r1)
            int r4 = r3.p
            int r4 = r4 + r6
            r3.p = r4
            return
    }

    private void c(int r7) {
            r6 = this;
            int r0 = r6.p
            int r0 = r0 - r7
            short[] r1 = r6.q
            int r2 = r6.r
            short[] r1 = r6.a(r1, r2, r0)
            r6.q = r1
            short[] r2 = r6.o
            int r3 = r6.e
            int r4 = r7 * r3
            int r5 = r6.r
            int r5 = r5 * r3
            int r3 = r3 * r0
            java.lang.System.arraycopy(r2, r4, r1, r5, r3)
            r6.p = r7
            int r7 = r6.r
            int r7 = r7 + r0
            r6.r = r7
            return
    }

    private void c(short[] r7, int r8, int r9) {
            r6 = this;
            int r0 = r6.k
            int r0 = r0 / r9
            int r1 = r6.e
            int r9 = r9 * r1
            int r8 = r8 * r1
            r1 = 0
            r2 = r1
        L9:
            if (r2 >= r0) goto L22
            r3 = r1
            r4 = r3
        Ld:
            if (r3 >= r9) goto L19
            int r5 = r2 * r9
            int r5 = r5 + r8
            int r5 = r5 + r3
            short r5 = r7[r5]
            int r4 = r4 + r5
            int r3 = r3 + 1
            goto Ld
        L19:
            int r4 = r4 / r9
            short[] r3 = r6.l
            short r4 = (short) r4
            r3[r2] = r4
            int r2 = r2 + 1
            goto L9
        L22:
            return
    }

    private void d() {
            r8 = this;
            int r0 = r8.p
            float r1 = r8.f
            float r2 = r8.g
            float r1 = r1 / r2
            float r3 = r8.h
            float r3 = r3 * r2
            double r4 = (double) r1
            r6 = 4607182463836013682(0x3ff0000a7c5ac472, double:1.00001)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 > 0) goto L29
            r6 = 4607182328728024861(0x3fefffeb074a771d, double:0.99999)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 >= 0) goto L1e
            goto L29
        L1e:
            short[] r1 = r8.m
            int r2 = r8.n
            r4 = 0
            r8.b(r1, r4, r2)
            r8.n = r4
            goto L2c
        L29:
            r8.a(r1)
        L2c:
            r1 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 == 0) goto L35
            r8.a(r3, r0)
        L35:
            return
    }

    private void d(int r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            short[] r0 = r5.q
            int r1 = r5.e
            int r2 = r6 * r1
            r3 = 0
            int r4 = r5.r
            int r4 = r4 - r6
            int r4 = r4 * r1
            java.lang.System.arraycopy(r0, r2, r0, r3, r4)
            int r0 = r5.r
            int r0 = r0 - r6
            r5.r = r0
            return
    }

    public final void a() {
            r7 = this;
            int r0 = r7.n
            float r1 = r7.f
            float r2 = r7.g
            float r1 = r1 / r2
            float r3 = r7.h
            float r3 = r3 * r2
            int r2 = r7.p
            float r4 = (float) r0
            float r4 = r4 / r1
            int r1 = r7.r
            float r1 = (float) r1
            float r4 = r4 + r1
            float r4 = r4 / r3
            r1 = 1056964608(0x3f000000, float:0.5)
            float r4 = r4 + r1
            int r1 = (int) r4
            int r2 = r2 + r1
            short[] r1 = r7.m
            int r3 = r7.k
            int r3 = r3 * 2
            int r3 = r3 + r0
            short[] r1 = r7.a(r1, r0, r3)
            r7.m = r1
            r1 = 0
            r3 = r1
        L27:
            int r4 = r7.k
            int r5 = r4 * 2
            int r6 = r7.e
            int r5 = r5 * r6
            if (r3 >= r5) goto L39
            short[] r4 = r7.m
            int r6 = r6 * r0
            int r6 = r6 + r3
            r4[r6] = r1
            int r3 = r3 + 1
            goto L27
        L39:
            int r0 = r7.n
            int r4 = r4 * 2
            int r0 = r0 + r4
            r7.n = r0
            r7.d()
            int r0 = r7.p
            if (r0 <= r2) goto L49
            r7.p = r2
        L49:
            r7.n = r1
            r7.u = r1
            r7.r = r1
            return
    }

    public final void a(java.nio.ShortBuffer r6) {
            r5 = this;
            int r0 = r6.remaining()
            int r1 = r5.e
            int r0 = r0 / r1
            int r1 = r1 * r0
            int r1 = r1 * 2
            short[] r2 = r5.m
            int r3 = r5.n
            short[] r2 = r5.a(r2, r3, r0)
            r5.m = r2
            int r3 = r5.n
            int r4 = r5.e
            int r3 = r3 * r4
            int r1 = r1 / 2
            r6.get(r2, r3, r1)
            int r6 = r5.n
            int r6 = r6 + r0
            r5.n = r6
            r5.d()
            return
    }

    public final void b() {
            r1 = this;
            r0 = 0
            r1.n = r0
            r1.p = r0
            r1.r = r0
            r1.s = r0
            r1.t = r0
            r1.u = r0
            r1.v = r0
            r1.w = r0
            r1.x = r0
            r1.y = r0
            return
    }

    public final void b(java.nio.ShortBuffer r5) {
            r4 = this;
            int r0 = r5.remaining()
            int r1 = r4.e
            int r0 = r0 / r1
            int r1 = r4.p
            int r0 = java.lang.Math.min(r0, r1)
            short[] r1 = r4.o
            int r2 = r4.e
            int r2 = r2 * r0
            r3 = 0
            r5.put(r1, r3, r2)
            int r5 = r4.p
            int r5 = r5 - r0
            r4.p = r5
            short[] r1 = r4.o
            int r2 = r4.e
            int r0 = r0 * r2
            int r5 = r5 * r2
            java.lang.System.arraycopy(r1, r0, r1, r3, r5)
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.p
            return r0
    }
}
