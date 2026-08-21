package com.meizu.cloud.pushsdk.c.g;

public final class b implements com.meizu.cloud.pushsdk.c.g.c, com.meizu.cloud.pushsdk.c.g.d, java.lang.Cloneable {
    private static final byte[] c = null;
    com.meizu.cloud.pushsdk.c.g.j a;
    long b;


    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.meizu.cloud.pushsdk.c.g.b.c = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public int a(byte[] r8, int r9, int r10) {
            r7 = this;
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            com.meizu.cloud.pushsdk.c.g.o.a(r1, r3, r5)
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.a
            if (r0 != 0) goto Ld
            r8 = -1
            return r8
        Ld:
            int r1 = r0.c
            int r2 = r0.b
            int r1 = r1 - r2
            int r10 = java.lang.Math.min(r10, r1)
            byte[] r1 = r0.a
            int r2 = r0.b
            java.lang.System.arraycopy(r1, r2, r8, r9, r10)
            int r8 = r0.b
            int r8 = r8 + r10
            r0.b = r8
            long r8 = r7.b
            long r1 = (long) r10
            long r8 = r8 - r1
            r7.b = r8
            int r8 = r0.b
            int r9 = r0.c
            if (r8 != r9) goto L37
            com.meizu.cloud.pushsdk.c.g.j r8 = r0.a()
            r7.a = r8
            com.meizu.cloud.pushsdk.c.g.k.a(r0)
        L37:
            return r10
    }

    public long a() {
            r2 = this;
            long r0 = r2.b
            return r0
    }

    @Override
    public long a(com.meizu.cloud.pushsdk.c.g.m r7) {
            r6 = this;
            if (r7 == 0) goto L13
            r0 = 0
        L4:
            r2 = 2048(0x800, double:1.012E-320)
            long r2 = r7.b(r6, r2)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L12
            long r0 = r0 + r2
            goto L4
        L12:
            return r0
        L13:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r7.<init>(r0)
            throw r7
    }

    public com.meizu.cloud.pushsdk.c.g.b a(int r4) {
            r3 = this;
            r0 = 128(0x80, float:1.8E-43)
            if (r4 >= r0) goto L8
        L4:
            r3.b(r4)
            goto L60
        L8:
            r1 = 2048(0x800, float:2.87E-42)
            if (r4 >= r1) goto L17
            int r1 = r4 >> 6
            r1 = r1 | 192(0xc0, float:2.69E-43)
        L10:
            r3.b(r1)
            r4 = r4 & 63
            r4 = r4 | r0
            goto L4
        L17:
            r1 = 65536(0x10000, float:9.1835E-41)
            java.lang.String r2 = "Unexpected code point: "
            if (r4 >= r1) goto L46
            r1 = 55296(0xd800, float:7.7486E-41)
            if (r4 < r1) goto L41
            r1 = 57343(0xdfff, float:8.0355E-41)
            if (r4 <= r1) goto L28
            goto L41
        L28:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L41:
            int r1 = r4 >> 12
            r1 = r1 | 224(0xe0, float:3.14E-43)
            goto L57
        L46:
            r1 = 1114111(0x10ffff, float:1.561202E-39)
            if (r4 > r1) goto L61
            int r1 = r4 >> 18
            r1 = r1 | 240(0xf0, float:3.36E-43)
            r3.b(r1)
            int r1 = r4 >> 12
            r1 = r1 & 63
            r1 = r1 | r0
        L57:
            r3.b(r1)
            int r1 = r4 >> 6
            r1 = r1 & 63
            r1 = r1 | r0
            goto L10
        L60:
            return r3
        L61:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public com.meizu.cloud.pushsdk.c.g.b a(com.meizu.cloud.pushsdk.c.g.e r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r2.a(r1)
            return r1
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "byteString == null"
            r2.<init>(r0)
            throw r2
    }

    public com.meizu.cloud.pushsdk.c.g.b a(java.lang.String r3) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            com.meizu.cloud.pushsdk.c.g.b r3 = r2.a(r3, r1, r0)
            return r3
    }

    public com.meizu.cloud.pushsdk.c.g.b a(java.lang.String r8, int r9, int r10) {
            r7 = this;
            if (r8 == 0) goto L11d
            if (r9 < 0) goto L106
            if (r10 < r9) goto Le7
            int r0 = r8.length()
            if (r10 > r0) goto Lc4
        Lc:
            if (r9 >= r10) goto Lc3
            char r0 = r8.charAt(r9)
            r1 = 2048(0x800, float:2.87E-42)
            r2 = 128(0x80, float:1.8E-43)
            if (r0 >= r2) goto L4f
            r3 = 1
            com.meizu.cloud.pushsdk.c.g.j r3 = r7.c(r3)
            byte[] r4 = r3.a
            int r5 = r3.c
            int r5 = r5 - r9
            int r1 = r1 - r5
            int r1 = java.lang.Math.min(r10, r1)
            int r6 = r9 + 1
            int r9 = r9 + r5
            byte r0 = (byte) r0
            r4[r9] = r0
        L2d:
            if (r6 >= r1) goto L3e
            char r9 = r8.charAt(r6)
            if (r9 < r2) goto L36
            goto L3e
        L36:
            int r0 = r6 + 1
            int r6 = r6 + r5
            byte r9 = (byte) r9
            r4[r6] = r9
            r6 = r0
            goto L2d
        L3e:
            int r5 = r5 + r6
            int r9 = r3.c
            int r5 = r5 - r9
            int r9 = r3.c
            int r9 = r9 + r5
            r3.c = r9
            long r0 = r7.b
            long r2 = (long) r5
            long r0 = r0 + r2
            r7.b = r0
            r9 = r6
            goto Lc
        L4f:
            if (r0 >= r1) goto L61
            int r1 = r0 >> 6
            r1 = r1 | 192(0xc0, float:2.69E-43)
        L55:
            r7.b(r1)
            r0 = r0 & 63
            r0 = r0 | r2
            r7.b(r0)
            int r9 = r9 + 1
            goto Lc
        L61:
            r1 = 55296(0xd800, float:7.7486E-41)
            r3 = 63
            if (r0 < r1) goto Lb7
            r1 = 57343(0xdfff, float:8.0355E-41)
            if (r0 <= r1) goto L6e
            goto Lb7
        L6e:
            int r4 = r9 + 1
            if (r4 >= r10) goto L77
            char r5 = r8.charAt(r4)
            goto L78
        L77:
            r5 = 0
        L78:
            r6 = 56319(0xdbff, float:7.892E-41)
            if (r0 > r6) goto Lb1
            r6 = 56320(0xdc00, float:7.8921E-41)
            if (r5 < r6) goto Lb1
            if (r5 <= r1) goto L85
            goto Lb1
        L85:
            r1 = 65536(0x10000, float:9.1835E-41)
            r4 = -55297(0xffffffffffff27ff, float:NaN)
            r0 = r0 & r4
            int r0 = r0 << 10
            r4 = -56321(0xffffffffffff23ff, float:NaN)
            r4 = r4 & r5
            r0 = r0 | r4
            int r0 = r0 + r1
            int r1 = r0 >> 18
            r1 = r1 | 240(0xf0, float:3.36E-43)
            r7.b(r1)
            int r1 = r0 >> 12
            r1 = r1 & r3
            r1 = r1 | r2
            r7.b(r1)
            int r1 = r0 >> 6
            r1 = r1 & r3
            r1 = r1 | r2
            r7.b(r1)
            r0 = r0 & r3
            r0 = r0 | r2
            r7.b(r0)
            int r9 = r9 + 2
            goto Lc
        Lb1:
            r7.b(r3)
            r9 = r4
            goto Lc
        Lb7:
            int r1 = r0 >> 12
            r1 = r1 | 224(0xe0, float:3.14E-43)
            r7.b(r1)
            int r1 = r0 >> 6
            r1 = r1 & r3
            r1 = r1 | r2
            goto L55
        Lc3:
            return r7
        Lc4:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex > string.length: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " > "
            r0.append(r10)
            int r8 = r8.length()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Le7:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex < beginIndex: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " < "
            r0.append(r10)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L106:
            java.lang.IllegalAccessError r8 = new java.lang.IllegalAccessError
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "beginIndex < 0: "
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r8.<init>(r9)
            throw r8
        L11d:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "string == null"
            r8.<init>(r9)
            throw r8
    }

    public java.lang.String a(long r7, java.nio.charset.Charset r9) {
            r6 = this;
            long r0 = r6.b
            r2 = 0
            r4 = r7
            com.meizu.cloud.pushsdk.c.g.o.a(r0, r2, r4)
            if (r9 == 0) goto L6e
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L57
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 != 0) goto L1a
            java.lang.String r7 = ""
            return r7
        L1a:
            com.meizu.cloud.pushsdk.c.g.j r0 = r6.a
            int r1 = r0.b
            long r1 = (long) r1
            long r1 = r1 + r7
            int r3 = r0.c
            long r3 = (long) r3
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L31
            java.lang.String r0 = new java.lang.String
            byte[] r7 = r6.a(r7)
            r0.<init>(r7, r9)
            return r0
        L31:
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r0.a
            int r3 = r0.b
            int r4 = (int) r7
            r1.<init>(r2, r3, r4, r9)
            int r9 = r0.b
            long r2 = (long) r9
            long r2 = r2 + r7
            int r9 = (int) r2
            r0.b = r9
            long r2 = r6.b
            long r2 = r2 - r7
            r6.b = r2
            int r7 = r0.b
            int r8 = r0.c
            if (r7 != r8) goto L56
            com.meizu.cloud.pushsdk.c.g.j r7 = r0.a()
            r6.a = r7
            com.meizu.cloud.pushsdk.c.g.k.a(r0)
        L56:
            return r1
        L57:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount > Integer.MAX_VALUE: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r9.<init>(r7)
            throw r9
        L6e:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "charset == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.b r7, long r8) {
            r6 = this;
            if (r7 == 0) goto L93
            if (r7 == r6) goto L8b
            long r0 = r7.b
            r2 = 0
            r4 = r8
            com.meizu.cloud.pushsdk.c.g.o.a(r0, r2, r4)
        Lc:
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 <= 0) goto L8a
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.a
            int r0 = r0.c
            com.meizu.cloud.pushsdk.c.g.j r1 = r7.a
            int r1 = r1.b
            int r0 = r0 - r1
            long r0 = (long) r0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 >= 0) goto L5c
            com.meizu.cloud.pushsdk.c.g.j r0 = r6.a
            if (r0 == 0) goto L27
            com.meizu.cloud.pushsdk.c.g.j r0 = r0.g
            goto L28
        L27:
            r0 = 0
        L28:
            if (r0 == 0) goto L53
            boolean r1 = r0.e
            if (r1 == 0) goto L53
            int r1 = r0.c
            long r1 = (long) r1
            long r1 = r1 + r8
            boolean r3 = r0.d
            if (r3 == 0) goto L38
            r3 = 0
            goto L3a
        L38:
            int r3 = r0.b
        L3a:
            long r3 = (long) r3
            long r1 = r1 - r3
            r3 = 2048(0x800, double:1.012E-320)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L53
            com.meizu.cloud.pushsdk.c.g.j r1 = r7.a
            int r2 = (int) r8
            r1.a(r0, r2)
            long r0 = r7.b
            long r0 = r0 - r8
            r7.b = r0
            long r0 = r6.b
            long r0 = r0 + r8
            r6.b = r0
            return
        L53:
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.a
            int r1 = (int) r8
            com.meizu.cloud.pushsdk.c.g.j r0 = r0.a(r1)
            r7.a = r0
        L5c:
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.a
            int r1 = r0.c
            int r2 = r0.b
            int r1 = r1 - r2
            long r1 = (long) r1
            com.meizu.cloud.pushsdk.c.g.j r3 = r0.a()
            r7.a = r3
            com.meizu.cloud.pushsdk.c.g.j r3 = r6.a
            if (r3 != 0) goto L75
            r6.a = r0
            r0.g = r0
            r0.f = r0
            goto L7e
        L75:
            com.meizu.cloud.pushsdk.c.g.j r3 = r3.g
            com.meizu.cloud.pushsdk.c.g.j r0 = r3.a(r0)
            r0.b()
        L7e:
            long r3 = r7.b
            long r3 = r3 - r1
            r7.b = r3
            long r3 = r6.b
            long r3 = r3 + r1
            r6.b = r3
            long r8 = r8 - r1
            goto Lc
        L8a:
            return
        L8b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == this"
            r7.<init>(r8)
            throw r7
        L93:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == null"
            r7.<init>(r8)
            throw r7
    }

    public void a(byte[] r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L15
            int r1 = r4.length
            int r1 = r1 - r0
            int r1 = r3.a(r4, r0, r1)
            r2 = -1
            if (r1 == r2) goto Lf
            int r0 = r0 + r1
            goto L1
        Lf:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L15:
            return
    }

    public byte[] a(long r7) {
            r6 = this;
            long r0 = r6.b
            r2 = 0
            r4 = r7
            com.meizu.cloud.pushsdk.c.g.o.a(r0, r2, r4)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L16
            int r7 = (int) r7
            byte[] r7 = new byte[r7]
            r6.a(r7)
            return r7
        L16:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "byteCount > Integer.MAX_VALUE: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    @Override
    public long b(com.meizu.cloud.pushsdk.c.g.b r5, long r6) {
            r4 = this;
            if (r5 == 0) goto L31
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L1a
            long r2 = r4.b
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L11
            r5 = -1
            return r5
        L11:
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            r6 = r2
        L16:
            r5.a(r4, r6)
            return r6
        L1a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
        L31:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "sink == null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.b b() {
            r0 = this;
            return r0
    }

    public com.meizu.cloud.pushsdk.c.g.b b(int r5) {
            r4 = this;
            r0 = 1
            com.meizu.cloud.pushsdk.c.g.j r0 = r4.c(r0)
            byte[] r1 = r0.a
            int r2 = r0.c
            int r3 = r2 + 1
            r0.c = r3
            byte r5 = (byte) r5
            r1[r2] = r5
            long r0 = r4.b
            r2 = 1
            long r0 = r0 + r2
            r4.b = r0
            return r4
    }

    public com.meizu.cloud.pushsdk.c.g.b b(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto L9
            r0 = 0
            int r1 = r3.length
            com.meizu.cloud.pushsdk.c.g.b r3 = r2.b(r3, r0, r1)
            return r3
        L9:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r3.<init>(r0)
            throw r3
    }

    public com.meizu.cloud.pushsdk.c.g.b b(byte[] r10, int r11, int r12) {
            r9 = this;
            if (r10 == 0) goto L30
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            com.meizu.cloud.pushsdk.c.g.o.a(r1, r3, r5)
            int r12 = r12 + r11
        Lb:
            if (r11 >= r12) goto L2a
            r0 = 1
            com.meizu.cloud.pushsdk.c.g.j r0 = r9.c(r0)
            int r1 = r12 - r11
            int r2 = r0.c
            int r2 = 2048 - r2
            int r1 = java.lang.Math.min(r1, r2)
            byte[] r2 = r0.a
            int r3 = r0.c
            java.lang.System.arraycopy(r10, r11, r2, r3, r1)
            int r11 = r11 + r1
            int r2 = r0.c
            int r2 = r2 + r1
            r0.c = r2
            goto Lb
        L2a:
            long r10 = r9.b
            long r10 = r10 + r7
            r9.b = r10
            return r9
        L30:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "source == null"
            r10.<init>(r11)
            throw r10
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c b(com.meizu.cloud.pushsdk.c.g.e r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.b r1 = r0.a(r1)
            return r1
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c b(java.lang.String r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.b r1 = r0.a(r1)
            return r1
    }

    public void b(long r6) {
            r5 = this;
        L0:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L41
            com.meizu.cloud.pushsdk.c.g.j r0 = r5.a
            if (r0 == 0) goto L3b
            int r0 = r0.c
            com.meizu.cloud.pushsdk.c.g.j r1 = r5.a
            int r1 = r1.b
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = java.lang.Math.min(r6, r0)
            int r0 = (int) r0
            long r1 = r5.b
            long r3 = (long) r0
            long r1 = r1 - r3
            r5.b = r1
            long r6 = r6 - r3
            com.meizu.cloud.pushsdk.c.g.j r1 = r5.a
            int r2 = r1.b
            int r2 = r2 + r0
            r1.b = r2
            com.meizu.cloud.pushsdk.c.g.j r0 = r5.a
            int r0 = r0.b
            com.meizu.cloud.pushsdk.c.g.j r1 = r5.a
            int r1 = r1.c
            if (r0 != r1) goto L0
            com.meizu.cloud.pushsdk.c.g.j r0 = r5.a
            com.meizu.cloud.pushsdk.c.g.j r1 = r0.a()
            r5.a = r1
            com.meizu.cloud.pushsdk.c.g.k.a(r0)
            goto L0
        L3b:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L41:
            return
    }

    public com.meizu.cloud.pushsdk.c.g.b c(long r12) {
            r11 = this;
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 != 0) goto Ld
            r12 = 48
            com.meizu.cloud.pushsdk.c.g.b r12 = r11.b(r12)
            return r12
        Ld:
            r3 = 0
            r4 = 1
            if (r2 >= 0) goto L1e
            long r12 = -r12
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 >= 0) goto L1d
            java.lang.String r12 = "-9223372036854775808"
            com.meizu.cloud.pushsdk.c.g.b r12 = r11.a(r12)
            return r12
        L1d:
            r3 = r4
        L1e:
            r5 = 100000000(0x5f5e100, double:4.94065646E-316)
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            r5 = 10
            if (r2 >= 0) goto L6a
            r7 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L48
            r7 = 100
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L3c
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r2 >= 0) goto L39
            goto Le2
        L39:
            r4 = 2
            goto Le2
        L3c:
            r7 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L45
            r4 = 3
            goto Le2
        L45:
            r4 = 4
            goto Le2
        L48:
            r7 = 1000000(0xf4240, double:4.940656E-318)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L5c
            r7 = 100000(0x186a0, double:4.94066E-319)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L59
            r4 = 5
            goto Le2
        L59:
            r4 = 6
            goto Le2
        L5c:
            r7 = 10000000(0x989680, double:4.9406565E-317)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L66
            r4 = 7
            goto Le2
        L66:
            r4 = 8
            goto Le2
        L6a:
            r7 = 1000000000000(0xe8d4a51000, double:4.94065645841E-312)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L98
            r7 = 10000000000(0x2540be400, double:4.9406564584E-314)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L89
            r7 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L86
            r4 = 9
            goto Le2
        L86:
            r4 = 10
            goto Le2
        L89:
            r7 = 100000000000(0x174876e800, double:4.9406564584E-313)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L95
            r4 = 11
            goto Le2
        L95:
            r4 = 12
            goto Le2
        L98:
            r7 = 1000000000000000(0x38d7ea4c68000, double:4.940656458412465E-309)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lbc
            r7 = 10000000000000(0x9184e72a000, double:4.9406564584125E-311)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lad
            r4 = 13
            goto Le2
        Lad:
            r7 = 100000000000000(0x5af3107a4000, double:4.94065645841247E-310)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lb9
            r4 = 14
            goto Le2
        Lb9:
            r4 = 15
            goto Le2
        Lbc:
            r7 = 100000000000000000(0x16345785d8a0000, double:5.620395787888205E-302)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Ld4
            r7 = 10000000000000000(0x2386f26fc10000, double:5.431165199810528E-308)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Ld1
            r4 = 16
            goto Le2
        Ld1:
            r4 = 17
            goto Le2
        Ld4:
            r7 = 1000000000000000000(0xde0b6b3a7640000, double:7.832953389245686E-242)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Le0
            r4 = 18
            goto Le2
        Le0:
            r4 = 19
        Le2:
            if (r3 == 0) goto Le6
            int r4 = r4 + 1
        Le6:
            com.meizu.cloud.pushsdk.c.g.j r2 = r11.c(r4)
            byte[] r7 = r2.a
            int r8 = r2.c
            int r8 = r8 + r4
        Lef:
            int r9 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r9 == 0) goto L100
            long r9 = r12 % r5
            int r9 = (int) r9
            int r8 = r8 + (-1)
            byte[] r10 = com.meizu.cloud.pushsdk.c.g.b.c
            r9 = r10[r9]
            r7[r8] = r9
            long r12 = r12 / r5
            goto Lef
        L100:
            if (r3 == 0) goto L108
            int r8 = r8 + (-1)
            r12 = 45
            r7[r8] = r12
        L108:
            int r12 = r2.c
            int r12 = r12 + r4
            r2.c = r12
            long r12 = r11.b
            long r0 = (long) r4
            long r12 = r12 + r0
            r11.b = r12
            return r11
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c c(byte[] r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.b r1 = r0.b(r1)
            return r1
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c c(byte[] r1, int r2, int r3) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.b r1 = r0.b(r1, r2, r3)
            return r1
    }

    com.meizu.cloud.pushsdk.c.g.j c(int r4) {
            r3 = this;
            r0 = 1
            if (r4 < r0) goto L2a
            r0 = 2048(0x800, float:2.87E-42)
            if (r4 > r0) goto L2a
            com.meizu.cloud.pushsdk.c.g.j r1 = r3.a
            if (r1 != 0) goto L16
            com.meizu.cloud.pushsdk.c.g.j r4 = com.meizu.cloud.pushsdk.c.g.k.a()
            r3.a = r4
            r4.g = r4
            r4.f = r4
            return r4
        L16:
            com.meizu.cloud.pushsdk.c.g.j r1 = r1.g
            int r2 = r1.c
            int r2 = r2 + r4
            if (r2 > r0) goto L21
            boolean r4 = r1.e
            if (r4 != 0) goto L29
        L21:
            com.meizu.cloud.pushsdk.c.g.j r4 = com.meizu.cloud.pushsdk.c.g.k.a()
            com.meizu.cloud.pushsdk.c.g.j r1 = r1.a(r4)
        L29:
            return r1
        L2a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    public boolean c() {
            r4 = this;
            long r0 = r4.b
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public java.lang.Object clone() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.k()
            return r0
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    public com.meizu.cloud.pushsdk.c.g.b d(long r10) {
            r9 = this;
            r0 = 0
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 != 0) goto Ld
            r10 = 48
            com.meizu.cloud.pushsdk.c.g.b r10 = r9.b(r10)
            return r10
        Ld:
            long r0 = java.lang.Long.highestOneBit(r10)
            int r0 = java.lang.Long.numberOfTrailingZeros(r0)
            r1 = 4
            int r0 = r0 / r1
            int r0 = r0 + 1
            com.meizu.cloud.pushsdk.c.g.j r2 = r9.c(r0)
            byte[] r3 = r2.a
            int r4 = r2.c
            int r4 = r4 + r0
            int r4 = r4 + (-1)
            int r5 = r2.c
        L26:
            if (r4 < r5) goto L36
            byte[] r6 = com.meizu.cloud.pushsdk.c.g.b.c
            r7 = 15
            long r7 = r7 & r10
            int r7 = (int) r7
            r6 = r6[r7]
            r3[r4] = r6
            long r10 = r10 >>> r1
            int r4 = r4 + (-1)
            goto L26
        L36:
            int r10 = r2.c
            int r10 = r10 + r0
            r2.c = r10
            long r10 = r9.b
            long r0 = (long) r0
            long r10 = r10 + r0
            r9.b = r10
            return r9
    }

    @Override
    public java.io.InputStream d() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.b$1 r0 = new com.meizu.cloud.pushsdk.c.g.b$1
            r0.<init>(r1)
            return r0
    }

    public long e() {
            r5 = this;
            long r0 = r5.b
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L9
            return r2
        L9:
            com.meizu.cloud.pushsdk.c.g.j r2 = r5.a
            com.meizu.cloud.pushsdk.c.g.j r2 = r2.g
            int r3 = r2.c
            r4 = 2048(0x800, float:2.87E-42)
            if (r3 >= r4) goto L1e
            boolean r3 = r2.e
            if (r3 == 0) goto L1e
            int r3 = r2.c
            int r2 = r2.b
            int r3 = r3 - r2
            long r2 = (long) r3
            long r0 = r0 - r2
        L1e:
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c e(long r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.c.g.b r1 = r0.c(r1)
            return r1
    }

    public boolean equals(java.lang.Object r14) {
            r13 = this;
            r0 = 1
            if (r13 != r14) goto L4
            return r0
        L4:
            boolean r1 = r14 instanceof com.meizu.cloud.pushsdk.c.g.b
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.meizu.cloud.pushsdk.c.g.b r14 = (com.meizu.cloud.pushsdk.c.g.b) r14
            long r3 = r13.b
            long r5 = r14.b
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 == 0) goto L15
            return r2
        L15:
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 != 0) goto L1c
            return r0
        L1c:
            com.meizu.cloud.pushsdk.c.g.j r1 = r13.a
            com.meizu.cloud.pushsdk.c.g.j r14 = r14.a
            int r3 = r1.b
            int r4 = r14.b
        L24:
            long r7 = r13.b
            int r7 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r7 >= 0) goto L61
            int r7 = r1.c
            int r7 = r7 - r3
            int r8 = r14.c
            int r8 = r8 - r4
            int r7 = java.lang.Math.min(r7, r8)
            long r7 = (long) r7
            r9 = r2
        L36:
            long r10 = (long) r9
            int r10 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            if (r10 >= 0) goto L4f
            byte[] r10 = r1.a
            int r11 = r3 + 1
            r3 = r10[r3]
            byte[] r10 = r14.a
            int r12 = r4 + 1
            r4 = r10[r4]
            if (r3 == r4) goto L4a
            return r2
        L4a:
            int r9 = r9 + 1
            r3 = r11
            r4 = r12
            goto L36
        L4f:
            int r9 = r1.c
            if (r3 != r9) goto L57
            com.meizu.cloud.pushsdk.c.g.j r1 = r1.f
            int r3 = r1.b
        L57:
            int r9 = r14.c
            if (r4 != r9) goto L5f
            com.meizu.cloud.pushsdk.c.g.j r14 = r14.f
            int r4 = r14.b
        L5f:
            long r5 = r5 + r7
            goto L24
        L61:
            return r0
    }

    public byte f() {
            r9 = this;
            long r0 = r9.b
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2a
            com.meizu.cloud.pushsdk.c.g.j r0 = r9.a
            int r1 = r0.b
            int r2 = r0.c
            byte[] r3 = r0.a
            int r4 = r1 + 1
            r1 = r3[r1]
            long r5 = r9.b
            r7 = 1
            long r5 = r5 - r7
            r9.b = r5
            if (r4 != r2) goto L27
            com.meizu.cloud.pushsdk.c.g.j r2 = r0.a()
            r9.a = r2
            com.meizu.cloud.pushsdk.c.g.k.a(r0)
            goto L29
        L27:
            r0.b = r4
        L29:
            return r1
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void flush() {
            r0 = this;
            return
    }

    public com.meizu.cloud.pushsdk.c.g.e g() {
            r2 = this;
            com.meizu.cloud.pushsdk.c.g.e r0 = new com.meizu.cloud.pushsdk.c.g.e
            byte[] r1 = r2.i()
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.String h() {
            r3 = this;
            long r0 = r3.b     // Catch: java.io.EOFException -> L9
            java.nio.charset.Charset r2 = com.meizu.cloud.pushsdk.c.g.o.a     // Catch: java.io.EOFException -> L9
            java.lang.String r0 = r3.a(r0, r2)     // Catch: java.io.EOFException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public int hashCode() {
            r5 = this;
            com.meizu.cloud.pushsdk.c.g.j r0 = r5.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            r1 = 1
        L7:
            int r2 = r0.b
            int r3 = r0.c
        Lb:
            if (r2 >= r3) goto L17
            int r1 = r1 * 31
            byte[] r4 = r0.a
            r4 = r4[r2]
            int r1 = r1 + r4
            int r2 = r2 + 1
            goto Lb
        L17:
            com.meizu.cloud.pushsdk.c.g.j r0 = r0.f
            com.meizu.cloud.pushsdk.c.g.j r2 = r5.a
            if (r0 != r2) goto L7
            return r1
    }

    @Override
    public byte[] i() {
            r2 = this;
            long r0 = r2.b     // Catch: java.io.EOFException -> L7
            byte[] r0 = r2.a(r0)     // Catch: java.io.EOFException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public void j() {
            r2 = this;
            long r0 = r2.b     // Catch: java.io.EOFException -> L6
            r2.b(r0)     // Catch: java.io.EOFException -> L6
            return
        L6:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public com.meizu.cloud.pushsdk.c.g.b k() {
            r5 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = new com.meizu.cloud.pushsdk.c.g.b
            r0.<init>()
            long r1 = r5.b
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto Le
            return r0
        Le:
            com.meizu.cloud.pushsdk.c.g.j r1 = new com.meizu.cloud.pushsdk.c.g.j
            com.meizu.cloud.pushsdk.c.g.j r2 = r5.a
            r1.<init>(r2)
            r0.a = r1
            r1.g = r1
            r1.f = r1
            com.meizu.cloud.pushsdk.c.g.j r1 = r5.a
        L1d:
            com.meizu.cloud.pushsdk.c.g.j r1 = r1.f
            com.meizu.cloud.pushsdk.c.g.j r2 = r5.a
            if (r1 == r2) goto L30
            com.meizu.cloud.pushsdk.c.g.j r2 = r0.a
            com.meizu.cloud.pushsdk.c.g.j r2 = r2.g
            com.meizu.cloud.pushsdk.c.g.j r3 = new com.meizu.cloud.pushsdk.c.g.j
            r3.<init>(r1)
            r2.a(r3)
            goto L1d
        L30:
            long r1 = r5.b
            r0.b = r1
            return r0
    }

    public java.lang.String toString() {
            r9 = this;
            long r0 = r9.b
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Lb
            java.lang.String r0 = "Buffer[size=0]"
            return r0
        Lb:
            r2 = 16
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 > 0) goto L33
            com.meizu.cloud.pushsdk.c.g.b r0 = r9.k()
            com.meizu.cloud.pushsdk.c.g.e r0 = r0.g()
            java.lang.Object[] r3 = new java.lang.Object[r3]
            long r4 = r9.b
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r3[r2] = r4
            java.lang.String r0 = r0.c()
            r3[r1] = r0
            java.lang.String r0 = "Buffer[size=%s data=%s]"
            java.lang.String r0 = java.lang.String.format(r0, r3)
            return r0
        L33:
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r4 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            byte[] r4 = r4.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r5 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r5 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r6 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r6 = r6.c     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r7 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r7 = r7.b     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r6 = r6 - r7
            r0.update(r4, r5, r6)     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r4 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
        L4f:
            com.meizu.cloud.pushsdk.c.g.j r4 = r4.f     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.j r5 = r9.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            if (r4 == r5) goto L62
            byte[] r5 = r4.a     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r6 = r4.b     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r7 = r4.c     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r8 = r4.b     // Catch: java.security.NoSuchAlgorithmException -> L81
            int r7 = r7 - r8
            r0.update(r5, r6, r7)     // Catch: java.security.NoSuchAlgorithmException -> L81
            goto L4f
        L62:
            java.lang.String r4 = "Buffer[size=%s md5=%s]"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.security.NoSuchAlgorithmException -> L81
            long r5 = r9.b     // Catch: java.security.NoSuchAlgorithmException -> L81
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.security.NoSuchAlgorithmException -> L81
            r3[r2] = r5     // Catch: java.security.NoSuchAlgorithmException -> L81
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L81
            com.meizu.cloud.pushsdk.c.g.e r0 = com.meizu.cloud.pushsdk.c.g.e.a(r0)     // Catch: java.security.NoSuchAlgorithmException -> L81
            java.lang.String r0 = r0.c()     // Catch: java.security.NoSuchAlgorithmException -> L81
            r3[r1] = r0     // Catch: java.security.NoSuchAlgorithmException -> L81
            java.lang.String r0 = java.lang.String.format(r4, r3)     // Catch: java.security.NoSuchAlgorithmException -> L81
            return r0
        L81:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
    }
}
