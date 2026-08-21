package com.bytedance.pangle.res.a;

public class a {
    private static final java.util.logging.Logger f = null;
    private final byte[] a;
    private final com.bytedance.pangle.res.a.h b;
    private final com.bytedance.pangle.res.a.g c;
    private final com.bytedance.pangle.res.a.e d;
    private com.bytedance.pangle.res.a.a.a e;

    public static class a {
        public final short a;
        public final int b;
        public final int c;
        public final int d;
        public final int e;

        private a(short r1, int r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                int r4 = r4 + r3
                r0.e = r4
                return
        }

        public static com.bytedance.pangle.res.a.a.a a(com.bytedance.pangle.res.a.g r3, com.bytedance.pangle.res.a.e r4) {
                int r0 = r4.a()
                short r4 = r3.readShort()     // Catch: java.io.EOFException -> L16
                com.bytedance.pangle.res.a.a$a r1 = new com.bytedance.pangle.res.a.a$a
                short r2 = r3.readShort()
                int r3 = r3.readInt()
                r1.<init>(r4, r2, r3, r0)
                return r1
            L16:
                com.bytedance.pangle.res.a.a$a r3 = new com.bytedance.pangle.res.a.a$a
                r0 = -1
                int r4 = r4.a()
                r1 = 0
                r3.<init>(r0, r1, r1, r4)
                return r3
        }
    }

    static {
            java.lang.Class<com.bytedance.pangle.res.a.a> r0 = com.bytedance.pangle.res.a.a.class
            java.lang.String r0 = r0.getName()
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            com.bytedance.pangle.res.a.a.f = r0
            return
    }

    public a(byte[] r4, com.bytedance.pangle.res.a.h r5) {
            r3 = this;
            r3.<init>()
            com.bytedance.pangle.res.a.e r0 = new com.bytedance.pangle.res.a.e
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r4)
            r0.<init>(r1)
            r3.d = r0
            com.bytedance.pangle.res.a.g r1 = new com.bytedance.pangle.res.a.g
            com.bytedance.pangle.res.a.i r2 = new com.bytedance.pangle.res.a.i
            r2.<init>(r0)
            r1.<init>(r2)
            r3.c = r1
            r3.a = r4
            r3.b = r5
            return
    }

    private java.lang.String a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 16
            r0.<init>(r1)
        L7:
            int r1 = r3 + (-1)
            if (r3 == 0) goto L1a
            com.bytedance.pangle.res.a.g r3 = r2.c
            byte r3 = r3.readByte()
            short r3 = (short) r3
            if (r3 == 0) goto L1a
            char r3 = (char) r3
            r0.append(r3)
            r3 = r1
            goto L7
        L1a:
            com.bytedance.pangle.res.a.g r3 = r2.c
            r3.skipBytes(r1)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private void b() {
            r4 = this;
            r0 = 515(0x203, float:7.22E-43)
            r4.b(r0)
            com.bytedance.pangle.res.a.g r0 = r4.c
            int r0 = r0.readInt()
            r1 = 0
        Lc:
            if (r1 >= r0) goto L1d
            com.bytedance.pangle.res.a.g r2 = r4.c
            r2.readInt()
            com.bytedance.pangle.res.a.g r2 = r4.c
            r3 = 256(0x100, float:3.59E-43)
            r2.skipBytes(r3)
            int r1 = r1 + 1
            goto Lc
        L1d:
            com.bytedance.pangle.res.a.a$a r0 = r4.j()
            short r0 = r0.a
            r1 = 513(0x201, float:7.19E-43)
            if (r0 != r1) goto L2b
            r4.c()
            goto L1d
        L2b:
            return
    }

    private void b(int r4) {
            r3 = this;
            com.bytedance.pangle.res.a.a$a r0 = r3.e
            short r0 = r0.a
            if (r0 != r4) goto L7
            return
        L7:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1[r2] = r4
            r4 = 1
            com.bytedance.pangle.res.a.a$a r2 = r3.e
            short r2 = r2.a
            java.lang.Short r2 = java.lang.Short.valueOf(r2)
            r1[r4] = r2
            java.lang.String r4 = "Invalid chunk type: expected=0x%08x, got=0x%08x"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            r0.<init>(r4)
            throw r0
    }

    private void c() {
            r4 = this;
            r4.d()
            com.bytedance.pangle.res.a.a$a r0 = r4.j()
            short r0 = r0.a
        L9:
            r1 = 514(0x202, float:7.2E-43)
            if (r0 != r1) goto L17
            r4.d()
            com.bytedance.pangle.res.a.a$a r0 = r4.j()
            short r0 = r0.a
            goto L9
        L17:
            r1 = 513(0x201, float:7.19E-43)
            if (r0 != r1) goto L65
            r4.e()
            com.bytedance.pangle.res.a.e r0 = r4.d
            int r0 = r0.a()
            com.bytedance.pangle.res.a.a$a r1 = r4.e
            int r1 = r1.e
            if (r0 >= r1) goto L5e
            java.util.logging.Logger r0 = com.bytedance.pangle.res.a.a.f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unknown data detected. Skipping: "
            r1.<init>(r2)
            com.bytedance.pangle.res.a.a$a r2 = r4.e
            int r2 = r2.e
            com.bytedance.pangle.res.a.e r3 = r4.d
            int r3 = r3.a()
            int r2 = r2 - r3
            r1.append(r2)
            java.lang.String r2 = " byte(s)"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.warning(r1)
            com.bytedance.pangle.res.a.e r0 = r4.d
            com.bytedance.pangle.res.a.a$a r1 = r4.e
            int r1 = r1.e
            com.bytedance.pangle.res.a.e r2 = r4.d
            int r2 = r2.a()
            int r1 = r1 - r2
            long r1 = (long) r1
            r0.skip(r1)
        L5e:
            com.bytedance.pangle.res.a.a$a r0 = r4.j()
            short r0 = r0.a
            goto L17
        L65:
            return
    }

    private void d() {
            r2 = this;
            r0 = 514(0x202, float:7.2E-43)
            r2.b(r0)
            com.bytedance.pangle.res.a.g r0 = r2.c
            r0.readUnsignedByte()
            com.bytedance.pangle.res.a.g r0 = r2.c
            r1 = 3
            r0.skipBytes(r1)
            com.bytedance.pangle.res.a.g r0 = r2.c
            int r0 = r0.readInt()
            com.bytedance.pangle.res.a.g r1 = r2.c
            int r0 = r0 * 4
            r1.skipBytes(r0)
            return
    }

    private void e() {
            r6 = this;
            r0 = 513(0x201, float:7.19E-43)
            r6.b(r0)
            com.bytedance.pangle.res.a.g r0 = r6.c
            r0.readUnsignedByte()
            com.bytedance.pangle.res.a.g r0 = r6.c
            r0.readByte()
            com.bytedance.pangle.res.a.g r0 = r6.c
            r1 = 2
            r0.skipBytes(r1)
            com.bytedance.pangle.res.a.g r0 = r6.c
            int r0 = r0.readInt()
            com.bytedance.pangle.res.a.g r1 = r6.c
            int r1 = r1.readInt()
            r6.i()
            com.bytedance.pangle.res.a.a$a r2 = r6.e
            int r2 = r2.d
            int r2 = r2 + r1
            int r1 = r0 * 4
            int r2 = r2 - r1
            com.bytedance.pangle.res.a.e r1 = r6.d
            int r1 = r1.a()
            if (r2 == r1) goto L60
            java.util.logging.Logger r1 = com.bytedance.pangle.res.a.a.f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Invalid data detected. Skipping: "
            r3.<init>(r4)
            com.bytedance.pangle.res.a.e r4 = r6.d
            int r4 = r4.a()
            int r4 = r2 - r4
            r3.append(r4)
            java.lang.String r4 = " byte(s)"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.warning(r3)
            com.bytedance.pangle.res.a.g r1 = r6.c
            com.bytedance.pangle.res.a.e r3 = r6.d
            int r3 = r3.a()
            int r2 = r2 - r3
            r1.skipBytes(r2)
        L60:
            com.bytedance.pangle.res.a.g r1 = r6.c
            int[] r0 = r1.a(r0)
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            int r2 = r0.length
            r3 = 0
        L6d:
            if (r3 >= r2) goto L8b
            r4 = r0[r3]
            r5 = -1
            if (r4 == r5) goto L88
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            boolean r5 = r1.contains(r5)
            if (r5 != 0) goto L88
            r6.f()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.add(r4)
        L88:
            int r3 = r3 + 1
            goto L6d
        L8b:
            return
    }

    private void f() {
            r2 = this;
            com.bytedance.pangle.res.a.g r0 = r2.c
            short r0 = r0.readShort()
            if (r0 < 0) goto L1f
            com.bytedance.pangle.res.a.g r0 = r2.c
            short r0 = r0.readShort()
            com.bytedance.pangle.res.a.g r1 = r2.c
            r1.readInt()
            r0 = r0 & 1
            if (r0 != 0) goto L1b
            r2.h()
            return
        L1b:
            r2.g()
            return
        L1f:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Entry size is under 0 bytes."
            r0.<init>(r1)
            throw r0
    }

    private void g() {
            r6 = this;
            com.bytedance.pangle.res.a.g r0 = r6.c
            int r0 = com.bytedance.pangle.res.a.k.a(r0)
            com.bytedance.pangle.res.a.g r1 = r6.c
            int r1 = r1.readInt()
            byte[] r2 = r6.a
            com.bytedance.pangle.res.a.h r3 = r6.b
            com.bytedance.pangle.res.a.k.a(r2, r1, r0, r3)
            com.bytedance.pangle.res.a.g r0 = r6.c
            int r0 = r0.readInt()
            r1 = 0
        L1a:
            if (r1 >= r0) goto L35
            com.bytedance.pangle.res.a.g r2 = r6.c
            int r2 = com.bytedance.pangle.res.a.k.a(r2)
            com.bytedance.pangle.res.a.g r3 = r6.c
            int r3 = r3.readInt()
            byte[] r4 = r6.a
            com.bytedance.pangle.res.a.h r5 = r6.b
            com.bytedance.pangle.res.a.k.a(r4, r3, r2, r5)
            r6.h()
            int r1 = r1 + 1
            goto L1a
        L35:
            return
    }

    private void h() {
            r5 = this;
            com.bytedance.pangle.res.a.g r0 = r5.c
            r0.a()
            com.bytedance.pangle.res.a.g r0 = r5.c
            r0.b()
            com.bytedance.pangle.res.a.g r0 = r5.c
            byte r0 = r0.readByte()
            com.bytedance.pangle.res.a.g r1 = r5.c
            int r1 = com.bytedance.pangle.res.a.k.a(r1)
            com.bytedance.pangle.res.a.g r2 = r5.c
            int r2 = r2.readInt()
            r3 = 1
            if (r0 != r3) goto L26
            byte[] r3 = r5.a
            com.bytedance.pangle.res.a.h r4 = r5.b
            com.bytedance.pangle.res.a.k.a(r3, r2, r1, r4)
        L26:
            r3 = 2
            if (r0 != r3) goto L30
            byte[] r0 = r5.a
            com.bytedance.pangle.res.a.h r3 = r5.b
            com.bytedance.pangle.res.a.k.a(r0, r2, r1, r3)
        L30:
            return
    }

    private void i() {
            r9 = this;
            com.bytedance.pangle.res.a.g r0 = r9.c
            int r0 = r0.readInt()
            r1 = 28
            if (r0 < r1) goto L10b
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readUnsignedShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readByte()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r3 = 1
            r2.skipBytes(r3)
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readShort()
            com.bytedance.pangle.res.a.g r2 = r9.c
            r4 = 2
            r2.skipBytes(r4)
            r2 = 32
            if (r0 < r2) goto L75
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readByte()
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readByte()
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readShort()
            r1 = r2
        L75:
            r2 = 36
            if (r0 < r2) goto L84
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readShort()
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readShort()
            r1 = r2
        L84:
            r2 = 4
            r5 = 48
            if (r0 < r5) goto L9a
            java.lang.String r1 = r9.a(r2)
            r1.toCharArray()
            r1 = 8
            java.lang.String r1 = r9.a(r1)
            r1.toCharArray()
            r1 = r5
        L9a:
            r5 = 52
            if (r0 < r5) goto Lae
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readByte()
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.readByte()
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.skipBytes(r4)
            r1 = r5
        Lae:
            r5 = 56
            if (r0 < r5) goto Lb8
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.skipBytes(r2)
            r1 = r5
        Lb8:
            int r2 = r0 + (-56)
            if (r2 <= 0) goto L102
            byte[] r6 = new byte[r2]
            int r1 = r1 + r2
            com.bytedance.pangle.res.a.g r2 = r9.c
            r2.readFully(r6)
            java.math.BigInteger r2 = new java.math.BigInteger
            r2.<init>(r3, r6)
            java.math.BigInteger r6 = java.math.BigInteger.ZERO
            boolean r6 = r2.equals(r6)
            r7 = 0
            if (r6 == 0) goto Le6
            java.util.logging.Logger r2 = com.bytedance.pangle.res.a.a.f
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)
            r3[r7] = r4
            java.lang.String r4 = "Config flags size > %d, but exceeding bytes are all zero, so it should be ok."
            java.lang.String r3 = java.lang.String.format(r4, r3)
            r2.fine(r3)
            goto L102
        Le6:
            java.util.logging.Logger r6 = com.bytedance.pangle.res.a.a.f
            r8 = 3
            java.lang.Object[] r8 = new java.lang.Object[r8]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r8[r7] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r0)
            r8[r3] = r5
            r8[r4] = r2
            java.lang.String r2 = "Config flags size > %d. Size = %d. Exceeding bytes: 0x%X."
            java.lang.String r2 = java.lang.String.format(r2, r8)
            r6.warning(r2)
        L102:
            int r0 = r0 - r1
            if (r0 <= 0) goto L10a
            com.bytedance.pangle.res.a.g r1 = r9.c
            r1.skipBytes(r0)
        L10a:
            return
        L10b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Config size < 28"
            r0.<init>(r1)
            throw r0
    }

    private com.bytedance.pangle.res.a.a.a j() {
            r2 = this;
            com.bytedance.pangle.res.a.g r0 = r2.c
            com.bytedance.pangle.res.a.e r1 = r2.d
            com.bytedance.pangle.res.a.a$a r0 = com.bytedance.pangle.res.a.a.a.a(r0, r1)
            r2.e = r0
            return r0
    }

    public final void a() {
            r6 = this;
            r6.j()
            r0 = 2
            r6.b(r0)
            com.bytedance.pangle.res.a.g r0 = r6.c
            int r0 = r0.readInt()
            com.bytedance.pangle.res.a.g r1 = r6.c
            com.bytedance.pangle.res.a.l.a(r1)
            r6.j()
            r1 = 0
            r2 = r1
        L17:
            if (r2 >= r0) goto L81
            r3 = 512(0x200, float:7.17E-43)
            r6.b(r3)
            com.bytedance.pangle.res.a.g r3 = r6.c
            r3.readInt()
            com.bytedance.pangle.res.a.g r3 = r6.c
            r4 = 256(0x100, float:3.59E-43)
            r3.skipBytes(r4)
            com.bytedance.pangle.res.a.g r3 = r6.c
            r4 = 4
            r3.skipBytes(r4)
            com.bytedance.pangle.res.a.g r3 = r6.c
            r3.skipBytes(r4)
            com.bytedance.pangle.res.a.g r3 = r6.c
            r3.skipBytes(r4)
            com.bytedance.pangle.res.a.g r3 = r6.c
            r3.skipBytes(r4)
            com.bytedance.pangle.res.a.a$a r3 = r6.e
            int r3 = r3.b
            r4 = 288(0x120, float:4.04E-43)
            if (r3 != r4) goto L58
            com.bytedance.pangle.res.a.g r3 = r6.c
            int r3 = r3.readInt()
            if (r3 > 0) goto L50
            goto L58
        L50:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "don't support"
            r0.<init>(r1)
            throw r0
        L58:
            com.bytedance.pangle.res.a.g r3 = r6.c
            com.bytedance.pangle.res.a.l.a(r3)
            com.bytedance.pangle.res.a.g r3 = r6.c
            com.bytedance.pangle.res.a.l.a(r3)
            r6.j()
            r3 = 1
        L66:
            if (r3 == 0) goto L7e
            com.bytedance.pangle.res.a.a$a r4 = r6.e
            short r4 = r4.a
            r5 = 514(0x202, float:7.2E-43)
            if (r4 == r5) goto L7a
            r5 = 515(0x203, float:7.22E-43)
            if (r4 == r5) goto L76
            r3 = r1
            goto L66
        L76:
            r6.b()
            goto L66
        L7a:
            r6.c()
            goto L66
        L7e:
            int r2 = r2 + 1
            goto L17
        L81:
            return
    }
}
