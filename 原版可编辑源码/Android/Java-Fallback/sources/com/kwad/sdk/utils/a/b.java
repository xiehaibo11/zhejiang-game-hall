package com.kwad.sdk.utils.a;

public final class b {
    public static final java.nio.charset.Charset UTF_8 = null;
    private char[] aKF;
    public byte[] aKG;
    public int position;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.utils.a.b.UTF_8 = r0
            return
    }

    public b(int r2) {
            r1 = this;
            byte[] r2 = new byte[r2]
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public b(byte[] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public b(byte[] r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aKF = r0
            r1.aKG = r2
            r1.position = r3
            return
    }

    public static int dh(int r1) {
            int r0 = r1 >> 7
            if (r0 != 0) goto L6
            r1 = 1
            return r1
        L6:
            int r0 = r1 >> 14
            if (r0 != 0) goto Lc
            r1 = 2
            return r1
        Lc:
            int r0 = r1 >> 21
            if (r0 != 0) goto L12
            r1 = 3
            return r1
        L12:
            int r1 = r1 >> 28
            if (r1 != 0) goto L18
            r1 = 4
            return r1
        L18:
            r1 = 5
            return r1
    }

    private char[] dj(int r3) {
            r2 = this;
            char[] r0 = r2.aKF
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 != 0) goto L14
            r0 = 256(0x100, float:3.59E-43)
            if (r3 > r0) goto Lf
            char[] r3 = new char[r0]
            r2.aKF = r3
            goto L1b
        Lf:
            char[] r3 = new char[r1]
            r2.aKF = r3
            goto L1b
        L14:
            int r0 = r0.length
            if (r0 >= r3) goto L1b
            char[] r3 = new char[r1]
            r2.aKF = r3
        L1b:
            char[] r3 = r2.aKF
            return r3
    }

    private java.lang.String dk(int r10) {
            r9 = this;
            r0 = 2048(0x800, float:2.87E-42)
            if (r10 <= r0) goto L10
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r9.aKG
            int r2 = r9.position
            java.nio.charset.Charset r3 = com.kwad.sdk.utils.a.b.UTF_8
            r0.<init>(r1, r2, r10, r3)
            return r0
        L10:
            char[] r0 = r9.dj(r10)
            byte[] r1 = r9.aKG
            int r2 = r9.position
            int r10 = r10 + r2
            r3 = 0
            r4 = r3
        L1b:
            if (r2 >= r10) goto L99
            int r5 = r2 + 1
            r2 = r1[r2]
            if (r2 <= 0) goto L2d
            int r6 = r4 + 1
            r2 = r2 ^ 1
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r5
            r4 = r6
            goto L1b
        L2d:
            r6 = -32
            if (r2 >= r6) goto L44
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r4 + 1
            r2 = r2 & 31
            int r2 = r2 << 6
            r5 = r5 & 63
            r2 = r2 | r5
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r6
            r4 = r7
            goto L1b
        L44:
            r6 = -16
            if (r2 >= r6) goto L64
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r4 + 1
            r2 = r2 & 15
            int r2 = r2 << 12
            r5 = r5 & 63
            int r5 = r5 << 6
            r2 = r2 | r5
            r5 = r6 & 63
            r2 = r2 | r5
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r7
            r4 = r8
            goto L1b
        L64:
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r7 + 1
            r7 = r1[r7]
            r2 = r2 & 7
            int r2 = r2 << 18
            r5 = r5 & 63
            int r5 = r5 << 12
            r2 = r2 | r5
            r5 = r6 & 63
            int r5 = r5 << 6
            r2 = r2 | r5
            r5 = r7 & 63
            r2 = r2 | r5
            int r5 = r4 + 1
            r6 = 55232(0xd7c0, float:7.7397E-41)
            int r7 = r2 >>> 10
            int r7 = r7 + r6
            char r6 = (char) r7
            r0[r4] = r6
            int r4 = r5 + 1
            r6 = 56320(0xdc00, float:7.8921E-41)
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 + r6
            char r2 = (char) r2
            r0[r5] = r2
            r2 = r8
            goto L1b
        L99:
            if (r2 > r10) goto La1
            java.lang.String r10 = new java.lang.String
            r10.<init>(r0, r3, r4)
            return r10
        La1:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid String"
            r10.<init>(r0)
            throw r10
    }

    private java.lang.String dl(int r10) {
            r9 = this;
            r0 = 2048(0x800, float:2.87E-42)
            if (r10 <= r0) goto L10
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r9.aKG
            int r2 = r9.position
            java.nio.charset.Charset r3 = com.kwad.sdk.utils.a.b.UTF_8
            r0.<init>(r1, r2, r10, r3)
            return r0
        L10:
            char[] r0 = r9.dj(r10)
            byte[] r1 = r9.aKG
            int r2 = r9.position
            int r10 = r10 + r2
            r3 = 0
            r4 = r3
        L1b:
            if (r2 >= r10) goto L97
            int r5 = r2 + 1
            r2 = r1[r2]
            if (r2 <= 0) goto L2b
            int r6 = r4 + 1
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r5
            r4 = r6
            goto L1b
        L2b:
            r6 = -32
            if (r2 >= r6) goto L42
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r4 + 1
            r2 = r2 & 31
            int r2 = r2 << 6
            r5 = r5 & 63
            r2 = r2 | r5
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r6
            r4 = r7
            goto L1b
        L42:
            r6 = -16
            if (r2 >= r6) goto L62
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r4 + 1
            r2 = r2 & 15
            int r2 = r2 << 12
            r5 = r5 & 63
            int r5 = r5 << 6
            r2 = r2 | r5
            r5 = r6 & 63
            r2 = r2 | r5
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r7
            r4 = r8
            goto L1b
        L62:
            int r6 = r5 + 1
            r5 = r1[r5]
            int r7 = r6 + 1
            r6 = r1[r6]
            int r8 = r7 + 1
            r7 = r1[r7]
            r2 = r2 & 7
            int r2 = r2 << 18
            r5 = r5 & 63
            int r5 = r5 << 12
            r2 = r2 | r5
            r5 = r6 & 63
            int r5 = r5 << 6
            r2 = r2 | r5
            r5 = r7 & 63
            r2 = r2 | r5
            int r5 = r4 + 1
            r6 = 55232(0xd7c0, float:7.7397E-41)
            int r7 = r2 >>> 10
            int r7 = r7 + r6
            char r6 = (char) r7
            r0[r4] = r6
            int r4 = r5 + 1
            r6 = 56320(0xdc00, float:7.8921E-41)
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 + r6
            char r2 = (char) r2
            r0[r5] = r2
            r2 = r8
            goto L1b
        L97:
            if (r2 > r10) goto L9f
            java.lang.String r10 = new java.lang.String
            r10.<init>(r0, r3, r4)
            return r10
        L9f:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid String"
            r10.<init>(r0)
            throw r10
    }

    public static int fS(java.lang.String r5) {
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
            int r1 = r3 + 1
            int r2 = r2 + 4
            goto L6
        L2d:
            int r2 = r2 + 3
            goto L14
        L30:
            return r2
    }

    private void fT(java.lang.String r9) {
            r8 = this;
            byte[] r0 = r8.aKG
            int r1 = r8.position
            int r2 = r9.length()
            r3 = 0
        L9:
            if (r3 >= r2) goto L94
            int r4 = r3 + 1
            char r3 = r9.charAt(r3)
            r5 = 128(0x80, float:1.8E-43)
            if (r3 >= r5) goto L1f
            int r5 = r1 + 1
            r3 = r3 ^ 1
            byte r3 = (byte) r3
            r0[r1] = r3
            r3 = r4
            r1 = r5
            goto L9
        L1f:
            r6 = 2048(0x800, float:2.87E-42)
            if (r3 >= r6) goto L36
            int r6 = r1 + 1
            int r7 = r3 >>> 6
            r7 = r7 | 192(0xc0, float:2.69E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r6 + 1
            r3 = r3 & 63
            r3 = r3 | r5
            byte r3 = (byte) r3
            r0[r6] = r3
            r3 = r4
            goto L9
        L36:
            r6 = 55296(0xd800, float:7.7486E-41)
            if (r3 < r6) goto L75
            r6 = 57343(0xdfff, float:8.0355E-41)
            if (r3 <= r6) goto L41
            goto L75
        L41:
            int r6 = r4 + 1
            char r4 = r9.charAt(r4)
            int r3 = r3 << 10
            int r3 = r3 + r4
            r4 = -56613888(0xfffffffffca02400, float:-6.651981E36)
            int r3 = r3 + r4
            int r4 = r1 + 1
            int r7 = r3 >>> 18
            r7 = r7 | 240(0xf0, float:3.36E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r4 + 1
            int r7 = r3 >>> 12
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r4] = r7
            int r4 = r1 + 1
            int r7 = r3 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r4 + 1
            r3 = r3 & 63
            r3 = r3 | r5
            byte r3 = (byte) r3
            r0[r4] = r3
            r3 = r6
            goto L9
        L75:
            int r6 = r1 + 1
            int r7 = r3 >>> 12
            r7 = r7 | 224(0xe0, float:3.14E-43)
            byte r7 = (byte) r7
            r0[r1] = r7
            int r1 = r6 + 1
            int r7 = r3 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r6] = r7
            int r6 = r1 + 1
            r3 = r3 & 63
            r3 = r3 | r5
            byte r3 = (byte) r3
            r0[r1] = r3
            r3 = r4
            r1 = r6
            goto L9
        L94:
            r8.position = r1
            return
    }

    public static byte[] fU(java.lang.String r8) {
            int r0 = fS(r8)
            byte[] r0 = new byte[r0]
            int r1 = r8.length()
            r2 = 0
            r3 = r2
        Lc:
            if (r2 >= r1) goto L97
            int r4 = r2 + 1
            char r2 = r8.charAt(r2)
            r5 = 128(0x80, float:1.8E-43)
            if (r2 >= r5) goto L22
            int r5 = r3 + 1
            r2 = r2 ^ 1
            byte r2 = (byte) r2
            r0[r3] = r2
            r2 = r4
            r3 = r5
            goto Lc
        L22:
            r6 = 2048(0x800, float:2.87E-42)
            if (r2 >= r6) goto L39
            int r6 = r3 + 1
            int r7 = r2 >>> 6
            r7 = r7 | 192(0xc0, float:2.69E-43)
            byte r7 = (byte) r7
            r0[r3] = r7
            int r3 = r6 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r6] = r2
            r2 = r4
            goto Lc
        L39:
            r6 = 55296(0xd800, float:7.7486E-41)
            if (r2 < r6) goto L78
            r6 = 57343(0xdfff, float:8.0355E-41)
            if (r2 <= r6) goto L44
            goto L78
        L44:
            int r6 = r4 + 1
            char r4 = r8.charAt(r4)
            int r2 = r2 << 10
            int r2 = r2 + r4
            r4 = -56613888(0xfffffffffca02400, float:-6.651981E36)
            int r2 = r2 + r4
            int r4 = r3 + 1
            int r7 = r2 >>> 18
            r7 = r7 | 240(0xf0, float:3.36E-43)
            byte r7 = (byte) r7
            r0[r3] = r7
            int r3 = r4 + 1
            int r7 = r2 >>> 12
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r4] = r7
            int r4 = r3 + 1
            int r7 = r2 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r3] = r7
            int r3 = r4 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r4] = r2
            r2 = r6
            goto Lc
        L78:
            int r6 = r3 + 1
            int r7 = r2 >>> 12
            r7 = r7 | 224(0xe0, float:3.14E-43)
            byte r7 = (byte) r7
            r0[r3] = r7
            int r3 = r6 + 1
            int r7 = r2 >>> 6
            r7 = r7 & 63
            r7 = r7 | r5
            byte r7 = (byte) r7
            r0[r6] = r7
            int r6 = r3 + 1
            r2 = r2 & 63
            r2 = r2 | r5
            byte r2 = (byte) r2
            r0[r3] = r2
            r2 = r4
            r3 = r6
            goto Lc
        L97:
            return r0
    }

    private long getLong(int r9) {
            r8 = this;
            byte[] r0 = r8.aKG
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

    static java.lang.String j(byte[] r8, int r9) {
            int r0 = r8.length
            char[] r0 = new char[r0]
            r1 = 0
            r2 = r1
            r3 = r2
        L6:
            if (r2 >= r9) goto L84
            int r4 = r2 + 1
            r2 = r8[r2]
            if (r2 <= 0) goto L18
            int r5 = r3 + 1
            r2 = r2 ^ 1
            char r2 = (char) r2
            r0[r3] = r2
            r2 = r4
            r3 = r5
            goto L6
        L18:
            r5 = -32
            if (r2 >= r5) goto L2f
            int r5 = r4 + 1
            r4 = r8[r4]
            int r6 = r3 + 1
            r2 = r2 & 31
            int r2 = r2 << 6
            r4 = r4 & 63
            r2 = r2 | r4
            char r2 = (char) r2
            r0[r3] = r2
            r2 = r5
            r3 = r6
            goto L6
        L2f:
            r5 = -16
            if (r2 >= r5) goto L4f
            int r5 = r4 + 1
            r4 = r8[r4]
            int r6 = r5 + 1
            r5 = r8[r5]
            int r7 = r3 + 1
            r2 = r2 & 15
            int r2 = r2 << 12
            r4 = r4 & 63
            int r4 = r4 << 6
            r2 = r2 | r4
            r4 = r5 & 63
            r2 = r2 | r4
            char r2 = (char) r2
            r0[r3] = r2
            r2 = r6
            r3 = r7
            goto L6
        L4f:
            int r5 = r4 + 1
            r4 = r8[r4]
            int r6 = r5 + 1
            r5 = r8[r5]
            int r7 = r6 + 1
            r6 = r8[r6]
            r2 = r2 & 7
            int r2 = r2 << 18
            r4 = r4 & 63
            int r4 = r4 << 12
            r2 = r2 | r4
            r4 = r5 & 63
            int r4 = r4 << 6
            r2 = r2 | r4
            r4 = r6 & 63
            r2 = r2 | r4
            int r4 = r3 + 1
            r5 = 55232(0xd7c0, float:7.7397E-41)
            int r6 = r2 >>> 10
            int r6 = r6 + r5
            char r5 = (char) r6
            r0[r3] = r5
            int r3 = r4 + 1
            r5 = 56320(0xdc00, float:7.8921E-41)
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 + r5
            char r2 = (char) r2
            r0[r4] = r2
            r2 = r7
            goto L6
        L84:
            if (r2 > r9) goto L8c
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0, r1, r3)
            return r8
        L8c:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "Invalid String"
            r8.<init>(r9)
            throw r8
    }

    private int z(int r4, int r5) {
            r3 = this;
        L0:
            r0 = r5 & (-128(0xffffffffffffff80, float:NaN))
            if (r0 == 0) goto L13
            byte[] r0 = r3.aKG
            int r1 = r4 + 1
            r2 = r5 & 127(0x7f, float:1.78E-43)
            r2 = r2 | 128(0x80, float:1.8E-43)
            byte r2 = (byte) r2
            r0[r4] = r2
            int r5 = r5 >>> 7
            r4 = r1
            goto L0
        L13:
            byte[] r0 = r3.aKG
            int r1 = r4 + 1
            byte r5 = (byte) r5
            r0[r4] = r5
            return r1
    }

    final long A(int r10, int r11) {
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
            long r6 = r9.getLong(r5)
            long r0 = r0 ^ r6
            int r5 = r5 + 8
            int r4 = r4 + 1
            goto Lc
        L18:
            int r11 = r11 << 3
        L1a:
            if (r3 >= r11) goto L2c
            byte[] r2 = r9.aKG
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

    public final int Kg() {
            r4 = this;
            byte[] r0 = r4.aKG
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            int r3 = r1 >> 7
            if (r3 != 0) goto Lf
            return r1
        Lf:
            r1 = r1 & 127(0x7f, float:1.78E-43)
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            int r2 = r2 << 7
            r1 = r1 | r2
            int r2 = r1 >> 14
            if (r2 != 0) goto L1f
            return r1
        L1f:
            r1 = r1 & 16383(0x3fff, float:2.2957E-41)
            int r2 = r3 + 1
            r4.position = r2
            r3 = r0[r3]
            int r3 = r3 << 14
            r1 = r1 | r3
            int r3 = r1 >> 21
            if (r3 != 0) goto L2f
            return r1
        L2f:
            r3 = 2097151(0x1fffff, float:2.938734E-39)
            r1 = r1 & r3
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            int r2 = r2 << 21
            r1 = r1 | r2
            int r2 = r1 >> 28
            if (r2 != 0) goto L41
            return r1
        L41:
            r2 = 268435455(0xfffffff, float:2.5243547E-29)
            r1 = r1 & r2
            int r2 = r3 + 1
            r4.position = r2
            r0 = r0[r3]
            int r0 = r0 << 28
            r0 = r0 | r1
            return r0
    }

    public final void a(short r5) {
            r4 = this;
            byte[] r0 = r4.aKG
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            byte r3 = (byte) r5
            r0[r1] = r3
            int r1 = r2 + 1
            r4.position = r1
            int r5 = r5 >> 8
            byte r5 = (byte) r5
            r0[r2] = r5
            return
    }

    public final void av(long r2) {
            r1 = this;
            int r0 = r1.position
            r1.g(r0, r2)
            int r2 = r1.position
            int r2 = r2 + 8
            r1.position = r2
            return
    }

    public final void df(int r5) {
            r4 = this;
            byte[] r0 = r4.aKG
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            byte r3 = (byte) r5
            r0[r1] = r3
            int r1 = r2 + 1
            r4.position = r1
            int r3 = r5 >> 8
            byte r3 = (byte) r3
            r0[r2] = r3
            int r2 = r1 + 1
            r4.position = r2
            int r3 = r5 >> 16
            byte r3 = (byte) r3
            r0[r1] = r3
            int r1 = r2 + 1
            r4.position = r1
            int r5 = r5 >> 24
            byte r5 = (byte) r5
            r0[r2] = r5
            return
    }

    public final void dg(int r2) {
            r1 = this;
            int r0 = r1.position
            int r2 = r1.z(r0, r2)
            r1.position = r2
            return
    }

    public final java.lang.String di(int r3) {
            r2 = this;
            if (r3 >= 0) goto L4
            r3 = 0
            return r3
        L4:
            if (r3 != 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r0 = r2.dl(r3)
            int r1 = r2.position
            int r1 = r1 + r3
            r2.position = r1
            return r0
    }

    public final void e(byte r4) {
            r3 = this;
            byte[] r0 = r3.aKG
            int r1 = r3.position
            int r2 = r1 + 1
            r3.position = r2
            r0[r1] = r4
            return
    }

    public final void fR(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto Lb
            r1.fT(r2)
        Lb:
            return
    }

    public final void g(int r5, long r6) {
            r4 = this;
            byte[] r0 = r4.aKG
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

    public final byte get() {
            r3 = this;
            byte[] r0 = r3.aKG
            int r1 = r3.position
            int r2 = r1 + 1
            r3.position = r2
            r0 = r0[r1]
            return r0
    }

    public final byte[] getBytes(int r5) {
            r4 = this;
            byte[] r0 = new byte[r5]
            byte[] r1 = r4.aKG
            int r2 = r4.position
            r3 = 0
            java.lang.System.arraycopy(r1, r2, r0, r3, r5)
            int r1 = r4.position
            int r1 = r1 + r5
            r4.position = r1
            return r0
    }

    public final double getDouble() {
            r2 = this;
            long r0 = r2.getLong()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            return r0
    }

    public final float getFloat() {
            r1 = this;
            int r0 = r1.getInt()
            float r0 = java.lang.Float.intBitsToFloat(r0)
            return r0
    }

    public final int getInt() {
            r4 = this;
            byte[] r0 = r4.aKG
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            int r0 = r0 << 24
            r0 = r0 | r1
            return r0
    }

    public final long getLong() {
            r3 = this;
            int r0 = r3.position
            long r0 = r3.getLong(r0)
            int r2 = r3.position
            int r2 = r2 + 8
            r3.position = r2
            return r0
    }

    public final short getShort() {
            r4 = this;
            byte[] r0 = r4.aKG
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            int r0 = r0 << 8
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    public final java.lang.String getString(int r3) {
            r2 = this;
            if (r3 >= 0) goto L4
            r3 = 0
            return r3
        L4:
            if (r3 != 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r0 = r2.dk(r3)
            int r1 = r2.position
            int r1 = r1 + r3
            r2.position = r1
            return r0
    }

    public final void n(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            if (r0 <= 0) goto L10
            r1 = 0
            byte[] r2 = r4.aKG
            int r3 = r4.position
            java.lang.System.arraycopy(r5, r1, r2, r3, r0)
            int r5 = r4.position
            int r5 = r5 + r0
            r4.position = r5
        L10:
            return
    }

    public final void y(int r4, int r5) {
            r3 = this;
            byte[] r0 = r3.aKG
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
}
