package com.heytap.msp.push.encrypt;

public class a extends com.heytap.msp.push.encrypt.b {
    static final byte[] a = null;
    private static final int m = 6;
    private static final int n = 3;
    private static final int o = 4;
    private static final byte[] p = null;
    private static final byte[] q = null;
    private static final byte[] r = null;
    private static final int s = 63;
    private final byte[] t;
    private final byte[] u;
    private final byte[] v;
    private final int w;
    private final int x;
    private int y;

    static {
            r0 = 2
            byte[] r0 = new byte[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            com.heytap.msp.push.encrypt.a.a = r0
            r0 = 64
            byte[] r1 = new byte[r0]
            r1 = {x0028: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.heytap.msp.push.encrypt.a.p = r1
            byte[] r0 = new byte[r0]
            r0 = {x004c: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
            com.heytap.msp.push.encrypt.a.q = r0
            r0 = 123(0x7b, float:1.72E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0070: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, 62, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, 63, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51} // fill-array
            com.heytap.msp.push.encrypt.a.r = r0
            return
    }

    public a() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public a(int r2) {
            r1 = this;
            byte[] r0 = com.heytap.msp.push.encrypt.a.a
            r1.<init>(r2, r0)
            return
    }

    public a(int r2, byte[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public a(int r5, byte[] r6, boolean r7) {
            r4 = this;
            r0 = 0
            if (r6 != 0) goto L5
            r1 = r0
            goto L6
        L5:
            int r1 = r6.length
        L6:
            r2 = 4
            r3 = 3
            r4.<init>(r3, r2, r5, r1)
            byte[] r1 = com.heytap.msp.push.encrypt.a.r
            r4.u = r1
            r1 = 0
            if (r6 == 0) goto L48
            boolean r3 = r4.l(r6)
            if (r3 != 0) goto L28
            if (r5 <= 0) goto L48
            int r5 = r6.length
            int r5 = r5 + r2
            r4.x = r5
            int r5 = r6.length
            byte[] r5 = new byte[r5]
            r4.v = r5
            int r1 = r6.length
            java.lang.System.arraycopy(r6, r0, r5, r0, r1)
            goto L4c
        L28:
            java.lang.String r5 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r6)
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "lineSeparator must not contain base64 characters: ["
            r7.append(r0)
            r7.append(r5)
            java.lang.String r5 = "]"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L48:
            r4.x = r2
            r4.v = r1
        L4c:
            int r5 = r4.x
            int r5 = r5 + (-1)
            r4.w = r5
            if (r7 == 0) goto L57
            byte[] r5 = com.heytap.msp.push.encrypt.a.q
            goto L59
        L57:
            byte[] r5 = com.heytap.msp.push.encrypt.a.p
        L59:
            r4.t = r5
            return
    }

    public a(boolean r3) {
            r2 = this;
            byte[] r0 = com.heytap.msp.push.encrypt.a.a
            r1 = 76
            r2.<init>(r1, r0, r3)
            return
    }

    public static boolean a(byte r2) {
            r0 = 61
            if (r2 == r0) goto L13
            if (r2 < 0) goto L11
            byte[] r0 = com.heytap.msp.push.encrypt.a.r
            int r1 = r0.length
            if (r2 >= r1) goto L11
            r2 = r0[r2]
            r0 = -1
            if (r2 == r0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    public static boolean a(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r0)
            boolean r0 = b(r0)
            return r0
    }

    public static boolean a(byte[] r0) {
            boolean r0 = b(r0)
            return r0
    }

    public static byte[] a(java.math.BigInteger r1) {
            if (r1 == 0) goto Lc
            byte[] r1 = b(r1)
            r0 = 0
            byte[] r1 = a(r1, r0)
            return r1
        Lc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "encodeInteger called with null parameter"
            r1.<init>(r0)
            throw r1
    }

    public static byte[] a(byte[] r1, boolean r2) {
            r0 = 0
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    public static byte[] a(byte[] r1, boolean r2, boolean r3) {
            r0 = 2147483647(0x7fffffff, float:NaN)
            byte[] r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static byte[] a(byte[] r4, boolean r5, boolean r6, int r7) {
            if (r4 == 0) goto L43
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L43
        L6:
            if (r5 == 0) goto Le
            com.heytap.msp.push.encrypt.a r5 = new com.heytap.msp.push.encrypt.a
            r5.<init>(r6)
            goto L16
        Le:
            com.heytap.msp.push.encrypt.a r5 = new com.heytap.msp.push.encrypt.a
            r0 = 0
            byte[] r1 = com.heytap.msp.push.encrypt.a.a
            r5.<init>(r0, r1, r6)
        L16:
            long r0 = r5.m(r4)
            long r2 = (long) r7
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 > 0) goto L24
            byte[] r4 = r5.encode(r4)
            return r4
        L24:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Input array too big, the output array would be bigger ("
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ") than the specified maximum size of "
            r5.append(r6)
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L43:
            return r4
    }

    public static boolean b(byte[] r3) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length
            if (r1 >= r2) goto L19
            r2 = r3[r1]
            boolean r2 = a(r2)
            if (r2 != 0) goto L16
            r2 = r3[r1]
            boolean r2 = c(r2)
            if (r2 != 0) goto L16
            return r0
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            r3 = 1
            return r3
    }

    public static byte[] b(java.lang.String r1) {
            com.heytap.msp.push.encrypt.a r0 = new com.heytap.msp.push.encrypt.a
            r0.<init>()
            byte[] r1 = r0.c(r1)
            return r1
    }

    static byte[] b(java.math.BigInteger r5) {
            int r0 = r5.bitLength()
            int r0 = r0 + 7
            int r0 = r0 >> 3
            int r0 = r0 << 3
            byte[] r1 = r5.toByteArray()
            int r2 = r5.bitLength()
            int r2 = r2 % 8
            r3 = 1
            if (r2 == 0) goto L23
            int r2 = r5.bitLength()
            int r2 = r2 / 8
            int r2 = r2 + r3
            int r4 = r0 / 8
            if (r2 != r4) goto L23
            return r1
        L23:
            r2 = 0
            int r4 = r1.length
            int r5 = r5.bitLength()
            int r5 = r5 % 8
            if (r5 != 0) goto L30
            int r4 = r4 + (-1)
            goto L31
        L30:
            r3 = r2
        L31:
            int r0 = r0 / 8
            int r5 = r0 - r4
            byte[] r0 = new byte[r0]
            java.lang.System.arraycopy(r1, r3, r0, r5, r4)
            return r0
    }

    public static byte[] c(byte[] r1) {
            r0 = 0
            byte[] r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String d(byte[] r1) {
            r0 = 0
            byte[] r1 = a(r1, r0)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    public static byte[] e(byte[] r2) {
            r0 = 0
            r1 = 1
            byte[] r2 = a(r2, r0, r1)
            return r2
    }

    public static java.lang.String f(byte[] r2) {
            r0 = 0
            r1 = 1
            byte[] r2 = a(r2, r0, r1)
            java.lang.String r2 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r2)
            return r2
    }

    public static byte[] g(byte[] r1) {
            r0 = 1
            byte[] r1 = a(r1, r0)
            return r1
    }

    public static byte[] h(byte[] r1) {
            com.heytap.msp.push.encrypt.a r0 = new com.heytap.msp.push.encrypt.a
            r0.<init>()
            byte[] r1 = r0.decode(r1)
            return r1
    }

    public static java.math.BigInteger i(byte[] r2) {
            java.math.BigInteger r0 = new java.math.BigInteger
            byte[] r2 = h(r2)
            r1 = 1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    void a(byte[] r8, int r9, int r10) {
            r7 = this;
            boolean r0 = r7.j
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            if (r10 >= 0) goto Ld7
            r7.j = r1
            int r8 = r7.l
            if (r8 != 0) goto L14
            int r8 = r7.g
            if (r8 != 0) goto L14
            return
        L14:
            int r8 = r7.x
            r7.a(r8)
            int r8 = r7.i
            int r9 = r7.l
            r10 = 61
            r2 = 2
            if (r9 == r1) goto L71
            if (r9 == r2) goto L26
            goto Lb1
        L26:
            byte[] r9 = r7.h
            int r1 = r7.i
            int r3 = r1 + 1
            r7.i = r3
            byte[] r3 = r7.t
            int r4 = r7.y
            int r4 = r4 >> 10
            r4 = r4 & 63
            r3 = r3[r4]
            r9[r1] = r3
            byte[] r9 = r7.h
            int r1 = r7.i
            int r3 = r1 + 1
            r7.i = r3
            byte[] r3 = r7.t
            int r4 = r7.y
            int r4 = r4 >> 4
            r4 = r4 & 63
            r3 = r3[r4]
            r9[r1] = r3
            byte[] r9 = r7.h
            int r1 = r7.i
            int r3 = r1 + 1
            r7.i = r3
            byte[] r3 = r7.t
            int r4 = r7.y
            int r2 = r4 << 2
            r2 = r2 & 63
            r2 = r3[r2]
            r9[r1] = r2
            byte[] r9 = com.heytap.msp.push.encrypt.a.p
            if (r3 != r9) goto Lb1
            byte[] r9 = r7.h
            int r1 = r7.i
            int r2 = r1 + 1
            r7.i = r2
            r9[r1] = r10
            goto Lb1
        L71:
            byte[] r9 = r7.h
            int r1 = r7.i
            int r3 = r1 + 1
            r7.i = r3
            byte[] r3 = r7.t
            int r4 = r7.y
            int r2 = r4 >> 2
            r2 = r2 & 63
            r2 = r3[r2]
            r9[r1] = r2
            byte[] r9 = r7.h
            int r1 = r7.i
            int r2 = r1 + 1
            r7.i = r2
            byte[] r2 = r7.t
            int r3 = r7.y
            int r3 = r3 << 4
            r3 = r3 & 63
            r3 = r2[r3]
            r9[r1] = r3
            byte[] r9 = com.heytap.msp.push.encrypt.a.p
            if (r2 != r9) goto Lb1
            byte[] r9 = r7.h
            int r1 = r7.i
            int r2 = r1 + 1
            r7.i = r2
            r9[r1] = r10
            byte[] r9 = r7.h
            int r1 = r7.i
            int r2 = r1 + 1
            r7.i = r2
            r9[r1] = r10
        Lb1:
            int r9 = r7.k
            int r10 = r7.i
            int r10 = r10 - r8
            int r9 = r9 + r10
            r7.k = r9
            int r8 = r7.g
            if (r8 <= 0) goto L172
            int r8 = r7.k
            if (r8 <= 0) goto L172
            byte[] r8 = r7.v
            byte[] r9 = r7.h
            int r10 = r7.i
            byte[] r1 = r7.v
            int r1 = r1.length
            java.lang.System.arraycopy(r8, r0, r9, r10, r1)
            int r8 = r7.i
            byte[] r9 = r7.v
            int r9 = r9.length
            int r8 = r8 + r9
            r7.i = r8
            goto L172
        Ld7:
            r2 = r0
        Ld8:
            if (r2 >= r10) goto L172
            int r3 = r7.x
            r7.a(r3)
            int r3 = r7.l
            int r3 = r3 + r1
            int r3 = r3 % 3
            r7.l = r3
            int r3 = r9 + 1
            r9 = r8[r9]
            if (r9 >= 0) goto Lee
            int r9 = r9 + 256
        Lee:
            int r4 = r7.y
            int r4 = r4 << 8
            int r4 = r4 + r9
            r7.y = r4
            int r9 = r7.l
            if (r9 != 0) goto L16d
            byte[] r9 = r7.h
            int r4 = r7.i
            int r5 = r4 + 1
            r7.i = r5
            byte[] r5 = r7.t
            int r6 = r7.y
            int r6 = r6 >> 18
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.h
            int r4 = r7.i
            int r5 = r4 + 1
            r7.i = r5
            byte[] r5 = r7.t
            int r6 = r7.y
            int r6 = r6 >> 12
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.h
            int r4 = r7.i
            int r5 = r4 + 1
            r7.i = r5
            byte[] r5 = r7.t
            int r6 = r7.y
            int r6 = r6 >> 6
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            byte[] r9 = r7.h
            int r4 = r7.i
            int r5 = r4 + 1
            r7.i = r5
            byte[] r5 = r7.t
            int r6 = r7.y
            r6 = r6 & 63
            r5 = r5[r6]
            r9[r4] = r5
            int r9 = r7.k
            int r9 = r9 + 4
            r7.k = r9
            int r9 = r7.g
            if (r9 <= 0) goto L16d
            int r9 = r7.g
            int r4 = r7.k
            if (r9 > r4) goto L16d
            byte[] r9 = r7.v
            byte[] r4 = r7.h
            int r5 = r7.i
            byte[] r6 = r7.v
            int r6 = r6.length
            java.lang.System.arraycopy(r9, r0, r4, r5, r6)
            int r9 = r7.i
            byte[] r4 = r7.v
            int r4 = r4.length
            int r9 = r9 + r4
            r7.i = r9
            r7.k = r0
        L16d:
            int r2 = r2 + 1
            r9 = r3
            goto Ld8
        L172:
            return
    }

    public boolean a() {
            r2 = this;
            byte[] r0 = r2.t
            byte[] r1 = com.heytap.msp.push.encrypt.a.q
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    void b(byte[] r6, int r7, int r8) {
            r5 = this;
            boolean r0 = r5.j
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            if (r8 >= 0) goto La
            r5.j = r0
        La:
            r1 = 0
        Lb:
            if (r1 >= r8) goto L6f
            int r2 = r5.w
            r5.a(r2)
            int r2 = r7 + 1
            r7 = r6[r7]
            r3 = 61
            if (r7 != r3) goto L1d
            r5.j = r0
            goto L6f
        L1d:
            if (r7 < 0) goto L6b
            byte[] r3 = com.heytap.msp.push.encrypt.a.r
            int r4 = r3.length
            if (r7 >= r4) goto L6b
            r7 = r3[r7]
            if (r7 < 0) goto L6b
            int r3 = r5.l
            int r3 = r3 + r0
            int r3 = r3 % 4
            r5.l = r3
            int r3 = r5.y
            int r3 = r3 << 6
            int r3 = r3 + r7
            r5.y = r3
            int r7 = r5.l
            if (r7 != 0) goto L6b
            byte[] r7 = r5.h
            int r3 = r5.i
            int r4 = r3 + 1
            r5.i = r4
            int r4 = r5.y
            int r4 = r4 >> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
            byte[] r7 = r5.h
            int r3 = r5.i
            int r4 = r3 + 1
            r5.i = r4
            int r4 = r5.y
            int r4 = r4 >> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
            byte[] r7 = r5.h
            int r3 = r5.i
            int r4 = r3 + 1
            r5.i = r4
            int r4 = r5.y
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r7[r3] = r4
        L6b:
            int r1 = r1 + 1
            r7 = r2
            goto Lb
        L6f:
            boolean r6 = r5.j
            if (r6 == 0) goto Lc0
            int r6 = r5.l
            if (r6 == 0) goto Lc0
            int r6 = r5.w
            r5.a(r6)
            int r6 = r5.l
            r7 = 2
            if (r6 == r7) goto Lab
            r8 = 3
            if (r6 == r8) goto L85
            goto Lc0
        L85:
            int r6 = r5.y
            int r6 = r6 >> r7
            r5.y = r6
            byte[] r6 = r5.h
            int r7 = r5.i
            int r8 = r7 + 1
            r5.i = r8
            int r8 = r5.y
            int r8 = r8 >> 8
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            byte[] r6 = r5.h
            int r7 = r5.i
            int r8 = r7 + 1
            r5.i = r8
            int r8 = r5.y
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            goto Lc0
        Lab:
            int r6 = r5.y
            int r6 = r6 >> 4
            r5.y = r6
            byte[] r6 = r5.h
            int r7 = r5.i
            int r8 = r7 + 1
            r5.i = r8
            int r8 = r5.y
            r8 = r8 & 255(0xff, float:3.57E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
        Lc0:
            return
    }

    @Override
    protected boolean b(byte r3) {
            r2 = this;
            if (r3 < 0) goto Le
            byte[] r0 = r2.u
            int r1 = r0.length
            if (r3 >= r1) goto Le
            r3 = r0[r3]
            r0 = -1
            if (r3 == r0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }
}
