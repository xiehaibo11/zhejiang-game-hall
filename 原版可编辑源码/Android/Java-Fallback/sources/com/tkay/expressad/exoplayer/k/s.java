package com.tkay.expressad.exoplayer.k;

public final class s {
    public byte[] a;
    private int b;
    private int c;

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    public s(int r2) {
            r1 = this;
            r1.<init>()
            byte[] r0 = new byte[r2]
            r1.a = r0
            r1.c = r2
            return
    }

    public s(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            int r1 = r1.length
            r0.c = r1
            return
    }

    public s(byte[] r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c = r2
            return
    }

    private int A() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            r0 = r0 | r1
            return r0
    }

    private long B() {
            r9 = this;
            byte[] r0 = r9.a
            int r1 = r9.b
            int r2 = r1 + 1
            r9.b = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r1 = r2 + 1
            r9.b = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 8
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.b = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 16
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.b = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 24
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.b = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 32
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.b = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 40
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.b = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 48
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.b = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            r0 = 56
            long r3 = r3 << r0
            long r0 = r1 | r3
            return r0
    }

    private int C() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            r0 = r0 | r1
            if (r0 < 0) goto L30
            return r0
        L30:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "Top bit not zero: "
            java.lang.String r0 = r2.concat(r0)
            r1.<init>(r0)
            throw r1
    }

    private float D() {
            r1 = this;
            int r0 = r1.i()
            float r0 = java.lang.Float.intBitsToFloat(r0)
            return r0
    }

    private double E() {
            r2 = this;
            long r0 = r2.j()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            return r0
    }

    private java.lang.String F() {
            r6 = this;
            int r0 = r6.a()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r6.b
        La:
            int r1 = r6.c
            if (r0 >= r1) goto L1b
            byte[] r1 = r6.a
            r1 = r1[r0]
            boolean r1 = com.tkay.expressad.exoplayer.k.af.a(r1)
            if (r1 != 0) goto L1b
            int r0 = r0 + 1
            goto La
        L1b:
            int r1 = r6.b
            int r2 = r0 - r1
            r3 = 3
            if (r2 < r3) goto L3d
            byte[] r2 = r6.a
            r4 = r2[r1]
            r5 = -17
            if (r4 != r5) goto L3d
            int r4 = r1 + 1
            r4 = r2[r4]
            r5 = -69
            if (r4 != r5) goto L3d
            int r4 = r1 + 2
            r2 = r2[r4]
            r4 = -65
            if (r2 != r4) goto L3d
            int r1 = r1 + r3
            r6.b = r1
        L3d:
            byte[] r1 = r6.a
            int r2 = r6.b
            int r3 = r0 - r2
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r2, r3)
            r6.b = r0
            int r2 = r6.c
            if (r0 != r2) goto L4e
            return r1
        L4e:
            byte[] r3 = r6.a
            r3 = r3[r0]
            r4 = 13
            if (r3 != r4) goto L5d
            int r0 = r0 + 1
            r6.b = r0
            if (r0 != r2) goto L5d
            return r1
        L5d:
            byte[] r0 = r6.a
            int r2 = r6.b
            r0 = r0[r2]
            r3 = 10
            if (r0 != r3) goto L6b
            int r2 = r2 + 1
            r6.b = r2
        L6b:
            return r1
    }

    private long G() {
            r11 = this;
            byte[] r0 = r11.a
            int r1 = r11.b
            r0 = r0[r1]
            long r0 = (long) r0
            r2 = 7
            r3 = r2
        L9:
            r4 = 6
            r5 = 1
            if (r3 < 0) goto L25
            int r6 = r5 << r3
            long r7 = (long) r6
            long r7 = r7 & r0
            r9 = 0
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L22
            if (r3 >= r4) goto L1e
            int r6 = r6 - r5
            long r6 = (long) r6
            long r0 = r0 & r6
            int r2 = r2 - r3
            goto L26
        L1e:
            if (r3 != r2) goto L25
            r2 = r5
            goto L26
        L22:
            int r3 = r3 + (-1)
            goto L9
        L25:
            r2 = 0
        L26:
            if (r2 == 0) goto L55
        L28:
            if (r5 >= r2) goto L4f
            byte[] r3 = r11.a
            int r6 = r11.b
            int r6 = r6 + r5
            r3 = r3[r6]
            r6 = r3 & 192(0xc0, float:2.69E-43)
            r7 = 128(0x80, float:1.8E-43)
            if (r6 != r7) goto L3f
            long r0 = r0 << r4
            r3 = r3 & 63
            long r6 = (long) r3
            long r0 = r0 | r6
            int r5 = r5 + 1
            goto L28
        L3f:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "Invalid UTF-8 sequence continuation byte: "
            java.lang.String r0 = r1.concat(r0)
            r2.<init>(r0)
            throw r2
        L4f:
            int r3 = r11.b
            int r3 = r3 + r2
            r11.b = r3
            return r0
        L55:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "Invalid UTF-8 sequence first byte: "
            java.lang.String r0 = r1.concat(r0)
            r2.<init>(r0)
            throw r2
    }

    private java.lang.String a(java.nio.charset.Charset r5) {
            r4 = this;
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r4.a
            int r2 = r4.b
            r3 = 4
            r0.<init>(r1, r2, r3, r5)
            int r5 = r4.b
            int r5 = r5 + r3
            r4.b = r5
            return r0
    }

    private void a(com.tkay.expressad.exoplayer.k.r r3, int r4) {
            r2 = this;
            byte[] r0 = r3.a
            r1 = 0
            r2.a(r0, r1, r4)
            r3.a(r1)
            return
    }

    private void a(java.nio.ByteBuffer r3, int r4) {
            r2 = this;
            byte[] r0 = r2.a
            int r1 = r2.b
            r3.put(r0, r1, r4)
            int r3 = r2.b
            int r3 = r3 + r4
            r2.b = r3
            return
    }

    private void q() {
            r1 = this;
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    private int r() {
            r1 = this;
            byte[] r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.length
            return r0
    }

    private int s() {
            r2 = this;
            byte[] r0 = r2.a
            int r1 = r2.b
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    private char t() {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            r2 = r0[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            int r1 = r1 + 1
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r2
            char r0 = (char) r0
            return r0
    }

    private int u() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r0 = r0 | r1
            return r0
    }

    private short v() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    private int w() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r1 = r1 >> 8
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    private int x() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            r0 = r0 | r1
            return r0
    }

    private int y() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            r0 = r0 | r1
            return r0
    }

    private long z() {
            r9 = this;
            byte[] r0 = r9.a
            int r1 = r9.b
            int r2 = r1 + 1
            r9.b = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r1 = r2 + 1
            r9.b = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 8
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.b = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 16
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.b = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            r0 = 24
            long r3 = r3 << r0
            long r0 = r1 | r3
            return r0
    }

    public final int a() {
            r2 = this;
            int r0 = r2.c
            int r1 = r2.b
            int r0 = r0 - r1
            return r0
    }

    public final void a(int r2) {
            r1 = this;
            byte[] r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            goto L7
        L6:
            int r0 = r0.length
        L7:
            if (r0 >= r2) goto Lc
            byte[] r0 = new byte[r2]
            goto Le
        Lc:
            byte[] r0 = r1.a
        Le:
            r1.a(r0, r2)
            return
    }

    public final void a(byte[] r1, int r2) {
            r0 = this;
            r0.a = r1
            r0.c = r2
            r1 = 0
            r0.b = r1
            return
    }

    public final void a(byte[] r3, int r4, int r5) {
            r2 = this;
            byte[] r0 = r2.a
            int r1 = r2.b
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.b
            int r3 = r3 + r5
            r2.b = r3
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final void b(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = r1.a
            int r0 = r0.length
            if (r2 > r0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            r1.c = r2
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final void c(int r2) {
            r1 = this;
            if (r2 < 0) goto L8
            int r0 = r1.c
            if (r2 > r0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            r1.b = r2
            return
    }

    public final int d() {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            int r2 = r1 + 1
            r3.b = r2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public final void d(int r2) {
            r1 = this;
            int r0 = r1.b
            int r0 = r0 + r2
            r1.c(r0)
            return
    }

    public final int e() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final java.lang.String e(int r4) {
            r3 = this;
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            int r0 = r3.b
            int r0 = r0 + r4
            int r0 = r0 + (-1)
            int r1 = r3.c
            if (r0 >= r1) goto L17
            byte[] r1 = r3.a
            r0 = r1[r0]
            if (r0 != 0) goto L17
            int r0 = r4 + (-1)
            goto L18
        L17:
            r0 = r4
        L18:
            byte[] r1 = r3.a
            int r2 = r3.b
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.a(r1, r2, r0)
            int r1 = r3.b
            int r1 = r1 + r4
            r3.b = r1
            return r0
    }

    public final short f() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    public final int g() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final long h() {
            r9 = this;
            byte[] r0 = r9.a
            int r1 = r9.b
            int r2 = r1 + 1
            r9.b = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            r1 = 24
            long r3 = r3 << r1
            int r1 = r2 + 1
            r9.b = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 16
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.b = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 8
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.b = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            long r0 = r1 | r3
            return r0
    }

    public final int i() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r3 = r2 + 1
            r4.b = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 16
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.b = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final long j() {
            r9 = this;
            byte[] r0 = r9.a
            int r1 = r9.b
            int r2 = r1 + 1
            r9.b = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            r1 = 56
            long r3 = r3 << r1
            int r1 = r2 + 1
            r9.b = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 48
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.b = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 40
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.b = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 32
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.b = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 24
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.b = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 16
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.b = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 8
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.b = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            long r0 = r1 | r3
            return r0
    }

    public final int k() {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.b = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            int r3 = r3 + 2
            r4.b = r3
            return r0
    }

    public final int l() {
            r4 = this;
            int r0 = r4.d()
            int r1 = r4.d()
            int r2 = r4.d()
            int r3 = r4.d()
            int r0 = r0 << 21
            int r1 = r1 << 14
            r0 = r0 | r1
            int r1 = r2 << 7
            r0 = r0 | r1
            r0 = r0 | r3
            return r0
    }

    public final int m() {
            r3 = this;
            int r0 = r3.i()
            if (r0 < 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "Top bit not zero: "
            java.lang.String r0 = r2.concat(r0)
            r1.<init>(r0)
            throw r1
    }

    public final long n() {
            r4 = this;
            long r0 = r4.j()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto Lb
            return r0
        Lb:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "Top bit not zero: "
            java.lang.String r0 = r1.concat(r0)
            r2.<init>(r0)
            throw r2
    }

    public final java.lang.String o() {
            r5 = this;
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r5.a
            int r3 = r5.b
            r4 = 4
            r1.<init>(r2, r3, r4, r0)
            int r0 = r5.b
            int r0 = r0 + r4
            r5.b = r0
            return r1
    }

    public final java.lang.String p() {
            r4 = this;
            int r0 = r4.a()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r4.b
        La:
            int r1 = r4.c
            if (r0 >= r1) goto L17
            byte[] r1 = r4.a
            r1 = r1[r0]
            if (r1 == 0) goto L17
            int r0 = r0 + 1
            goto La
        L17:
            byte[] r1 = r4.a
            int r2 = r4.b
            int r3 = r0 - r2
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r2, r3)
            r4.b = r0
            int r2 = r4.c
            if (r0 >= r2) goto L2b
            int r0 = r0 + 1
            r4.b = r0
        L2b:
            return r1
    }
}
