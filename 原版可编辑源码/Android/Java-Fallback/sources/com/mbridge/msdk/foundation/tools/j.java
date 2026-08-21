package com.mbridge.msdk.foundation.tools;

public final class j {
    public byte[] a;
    public int b;
    private char[] c;

    public j(int r2) {
            r1 = this;
            byte[] r2 = new byte[r2]
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public j(byte[] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public j(byte[] r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.a = r2
            r1.b = r3
            return
    }

    public static int b(java.lang.String r5) {
            int r0 = r5.length()
            r1 = 0
            r2 = r1
        L6:
            if (r1 >= r0) goto L30
            int r3 = r1 + 1
            char r1 = r5.charAt(r1)
            r4 = 128(0x80, float:1.8E-43)
            if (r1 >= r4) goto L16
            int r2 = r2 + 1
        L14:
            r1 = r3
            goto L6
        L16:
            r4 = 2048(0x800, float:2.87E-42)
            if (r1 >= r4) goto L1d
            int r2 = r2 + 2
            goto L14
        L1d:
            r4 = 55296(0xd800, float:7.7486E-41)
            if (r1 < r4) goto L2d
            r4 = 57343(0xdfff, float:8.0355E-41)
            if (r1 <= r4) goto L28
            goto L2d
        L28:
            int r3 = r3 + 1
            int r2 = r2 + 4
            goto L14
        L2d:
            int r2 = r2 + 3
            goto L14
        L30:
            return r2
    }

    private long c(int r9) {
            r8 = this;
            byte[] r0 = r8.a
            int r1 = r9 + 1
            r9 = r0[r9]
            long r2 = (long) r9
            r4 = 255(0xff, double:1.26E-321)
            long r2 = r2 & r4
            int r9 = r1 + 1
            r1 = r0[r1]
            long r6 = (long) r1
            long r6 = r6 & r4
            r1 = 8
            long r6 = r6 << r1
            long r1 = r2 | r6
            int r3 = r9 + 1
            r9 = r0[r9]
            long r6 = (long) r9
            long r6 = r6 & r4
            r9 = 16
            long r6 = r6 << r9
            long r1 = r1 | r6
            int r9 = r3 + 1
            r3 = r0[r3]
            long r6 = (long) r3
            long r6 = r6 & r4
            r3 = 24
            long r6 = r6 << r3
            long r1 = r1 | r6
            int r3 = r9 + 1
            r9 = r0[r9]
            long r6 = (long) r9
            long r6 = r6 & r4
            r9 = 32
            long r6 = r6 << r9
            long r1 = r1 | r6
            int r9 = r3 + 1
            r3 = r0[r3]
            long r6 = (long) r3
            long r6 = r6 & r4
            r3 = 40
            long r6 = r6 << r3
            long r1 = r1 | r6
            int r3 = r9 + 1
            r9 = r0[r9]
            long r6 = (long) r9
            long r4 = r4 & r6
            r9 = 48
            long r4 = r4 << r9
            long r1 = r1 | r4
            r9 = r0[r3]
            long r3 = (long) r9
            r9 = 56
            long r3 = r3 << r9
            long r0 = r1 | r3
            return r0
    }

    public final byte a() {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            int r2 = r1 + 1
            r3.b = r2
            r0 = r0[r1]
            return r0
    }

    public final void a(byte r4) {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r3.b
            int r2 = r1 + 1
            r3.b = r2
            r0[r1] = r4
            return
    }

    public final void a(int r5) {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            byte r3 = (byte) r5
            r0[r1] = r3
            int r1 = r2 + 1
            r4.b = r1
            int r3 = r5 >> 8
            byte r3 = (byte) r3
            r0[r2] = r3
            int r2 = r1 + 1
            r4.b = r2
            int r3 = r5 >> 16
            byte r3 = (byte) r3
            r0[r1] = r3
            int r1 = r2 + 1
            r4.b = r1
            int r5 = r5 >> 24
            byte r5 = (byte) r5
            r0[r2] = r5
            return
    }

    public final void a(int r4, int r5) {
            r3 = this;
            byte[] r0 = r3.a
            int r1 = r4 + 1
            byte r2 = (byte) r5
            r0[r4] = r2
            int r4 = r1 + 1
            int r2 = r5 >> 8
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r4 + 1
            int r2 = r5 >> 16
            byte r2 = (byte) r2
            r0[r4] = r2
            int r4 = r5 >> 24
            byte r4 = (byte) r4
            r0[r1] = r4
            return
    }

    public final void a(int r5, long r6) {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r5 + 1
            int r2 = (int) r6
            byte r2 = (byte) r2
            r0[r5] = r2
            int r5 = r1 + 1
            r2 = 8
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r5 + 1
            r2 = 16
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r5] = r2
            int r5 = r1 + 1
            r2 = 24
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r5 + 1
            r2 = 32
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r5] = r2
            int r5 = r1 + 1
            r2 = 40
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r5 + 1
            r2 = 48
            long r2 = r6 >> r2
            int r2 = (int) r2
            byte r2 = (byte) r2
            r0[r5] = r2
            r5 = 56
            long r5 = r6 >> r5
            int r5 = (int) r5
            byte r5 = (byte) r5
            r0[r1] = r5
            return
    }

    public final void a(long r2) {
            r1 = this;
            int r0 = r1.b
            r1.a(r0, r2)
            int r2 = r1.b
            int r2 = r2 + 8
            r1.b = r2
            return
    }

    public final void a(java.lang.String r9) {
            r8 = this;
            if (r9 == 0) goto L9c
            boolean r0 = r9.isEmpty()
            if (r0 != 0) goto L9c
            byte[] r0 = r8.a
            int r1 = r8.b
            r2 = 0
            int r3 = r9.length()
        L11:
            if (r2 >= r3) goto L9a
            int r4 = r2 + 1
            char r2 = r9.charAt(r2)
            r5 = 128(0x80, float:1.8E-43)
            if (r2 >= r5) goto L25
            int r5 = r1 + 1
            byte r2 = (byte) r2
            r0[r1] = r2
            r2 = r4
            r1 = r5
            goto L11
        L25:
            r6 = 2048(0x800, float:2.87E-42)
            if (r2 >= r6) goto L3c
            int r6 = r1 + 1
            int r7 = r2 >>> 6
            r7 = r7 | 192(0xc0, float:2.69E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r6 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r6] = r2
            r2 = r4
            goto L11
        L3c:
            r6 = 55296(0xd800, float:7.7486E-41)
            if (r2 < r6) goto L7b
            r6 = 57343(0xdfff, float:8.0355E-41)
            if (r2 <= r6) goto L47
            goto L7b
        L47:
            int r6 = r4 + 1
            char r4 = r9.charAt(r4)
            int r2 = r2 << 10
            int r2 = r2 + r4
            r4 = -56613888(0xfffffffffca02400, float:-6.651981E36)
            int r2 = r2 + r4
            int r4 = r1 + 1
            int r7 = r2 >>> 18
            r7 = r7 | 240(0xf0, float:3.36E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r4 + 1
            int r7 = r2 >>> 12
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r4] = r7
            int r4 = r1 + 1
            int r7 = r2 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r4 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r4] = r2
            r2 = r6
            goto L11
        L7b:
            int r6 = r1 + 1
            int r7 = r2 >>> 12
            r7 = r7 | 224(0xe0, float:3.14E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r6 + 1
            int r7 = r2 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r6] = r7
            int r6 = r1 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r1] = r2
            r2 = r4
            r1 = r6
            goto L11
        L9a:
            r8.b = r1
        L9c:
            return
    }

    public final void a(short r5) {
            r4 = this;
            byte[] r0 = r4.a
            int r1 = r4.b
            int r2 = r1 + 1
            r4.b = r2
            byte r3 = (byte) r5
            r0[r1] = r3
            int r1 = r2 + 1
            r4.b = r1
            int r5 = r5 >> 8
            byte r5 = (byte) r5
            r0[r2] = r5
            return
    }

    public final void a(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            if (r0 <= 0) goto L10
            r1 = 0
            byte[] r2 = r4.a
            int r3 = r4.b
            java.lang.System.arraycopy(r5, r1, r2, r3, r0)
            int r5 = r4.b
            int r5 = r5 + r0
            r4.b = r5
        L10:
            return
    }

    final long b(int r10, int r11) {
            r9 = this;
            r0 = 0
            if (r11 > 0) goto L5
            return r0
        L5:
            int r2 = r11 >> 3
            r11 = r11 & 7
            r3 = 0
            r5 = r10
            r4 = r3
        Lc:
            if (r4 >= r2) goto L18
            long r6 = r9.c(r5)
            long r0 = r0 ^ r6
            int r5 = r5 + 8
            int r4 = r4 + 1
            goto Lc
        L18:
            int r11 = r11 << 3
        L1a:
            if (r3 >= r11) goto L2c
            byte[] r2 = r9.a
            int r4 = r5 + 1
            r2 = r2[r5]
            long r5 = (long) r2
            r7 = 255(0xff, double:1.26E-321)
            long r5 = r5 & r7
            long r5 = r5 << r3
            long r0 = r0 ^ r5
            int r3 = r3 + 8
            r5 = r4
            goto L1a
        L2c:
            r10 = r10 & 7
            int r10 = r10 << 3
            long r2 = r0 << r10
            int r10 = 64 - r10
            long r10 = r0 >>> r10
            long r10 = r10 | r2
            return r10
    }

    public final java.lang.String b(int r11) {
            r10 = this;
            if (r11 >= 0) goto L4
            r11 = 0
            return r11
        L4:
            if (r11 != 0) goto L9
            java.lang.String r11 = ""
            return r11
        L9:
            r0 = 2048(0x800, float:2.87E-42)
            if (r11 <= r0) goto L2b
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L20
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r10.a
            int r2 = r10.b
            java.nio.charset.Charset r3 = java.nio.charset.StandardCharsets.UTF_8
            r0.<init>(r1, r2, r11, r3)
            goto Ld2
        L20:
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r10.a
            int r2 = r10.b
            r0.<init>(r1, r2, r11)
            goto Ld2
        L2b:
            char[] r1 = r10.c
            if (r1 != 0) goto L3d
            r1 = 256(0x100, float:3.59E-43)
            if (r11 > r1) goto L38
            char[] r0 = new char[r1]
            r10.c = r0
            goto L44
        L38:
            char[] r0 = new char[r0]
            r10.c = r0
            goto L44
        L3d:
            int r1 = r1.length
            if (r1 >= r11) goto L44
            char[] r0 = new char[r0]
            r10.c = r0
        L44:
            char[] r0 = r10.c
            byte[] r1 = r10.a
            int r2 = r10.b
            int r3 = r2 + r11
            r4 = 0
            r5 = r4
        L4e:
            if (r2 >= r3) goto Lca
            int r6 = r2 + 1
            r2 = r1[r2]
            if (r2 <= 0) goto L5e
            int r7 = r5 + 1
            char r2 = (char) r2
            r0[r5] = r2
            r2 = r6
            r5 = r7
            goto L4e
        L5e:
            r7 = -32
            if (r2 >= r7) goto L75
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r5 + 1
            r2 = r2 & 31
            int r2 = r2 << 6
            r6 = r6 & 63
            r2 = r2 | r6
            char r2 = (char) r2
            r0[r5] = r2
            r2 = r7
            r5 = r8
            goto L4e
        L75:
            r7 = -16
            if (r2 >= r7) goto L95
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r7 + 1
            r7 = r1[r7]
            int r9 = r5 + 1
            r2 = r2 & 15
            int r2 = r2 << 12
            r6 = r6 & 63
            int r6 = r6 << 6
            r2 = r2 | r6
            r6 = r7 & 63
            r2 = r2 | r6
            char r2 = (char) r2
            r0[r5] = r2
            r2 = r8
            r5 = r9
            goto L4e
        L95:
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r7 + 1
            r7 = r1[r7]
            int r9 = r8 + 1
            r8 = r1[r8]
            r2 = r2 & 7
            int r2 = r2 << 18
            r6 = r6 & 63
            int r6 = r6 << 12
            r2 = r2 | r6
            r6 = r7 & 63
            int r6 = r6 << 6
            r2 = r2 | r6
            r6 = r8 & 63
            r2 = r2 | r6
            int r6 = r5 + 1
            r7 = 55232(0xd7c0, float:7.7397E-41)
            int r8 = r2 >>> 10
            int r8 = r8 + r7
            char r7 = (char) r8
            r0[r5] = r7
            int r5 = r6 + 1
            r7 = 56320(0xdc00, float:7.8921E-41)
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 + r7
            char r2 = (char) r2
            r0[r6] = r2
            r2 = r9
            goto L4e
        Lca:
            if (r2 > r3) goto Ld8
            java.lang.String r1 = new java.lang.String
            r1.<init>(r0, r4, r5)
            r0 = r1
        Ld2:
            int r1 = r10.b
            int r1 = r1 + r11
            r10.b = r1
            return r0
        Ld8:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid String"
            r11.<init>(r0)
            throw r11
    }

    public final short b() {
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
            int r0 = r0 << 8
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    public final int c() {
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
            int r0 = r0 << 24
            r0 = r0 | r1
            return r0
    }

    public final long d() {
            r3 = this;
            int r0 = r3.b
            long r0 = r3.c(r0)
            int r2 = r3.b
            int r2 = r2 + 8
            r3.b = r2
            return r0
    }
}
