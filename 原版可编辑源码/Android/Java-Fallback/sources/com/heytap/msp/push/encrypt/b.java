package com.heytap.msp.push.encrypt;

public abstract class b implements org.apache.commons.codec.BinaryDecoder, org.apache.commons.codec.BinaryEncoder {
    private static final int a = 2;
    public static final int b = 76;
    public static final int c = 64;
    protected static final int d = 255;
    protected static final byte e = 61;
    private static final int m = 8192;
    protected final byte f;
    protected final int g;
    protected byte[] h;
    protected int i;
    protected boolean j;
    protected int k;
    protected int l;
    private final int n;
    private final int o;
    private final int p;
    private int q;

    protected b(int r2, int r3, int r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 61
            r1.f = r0
            r1.n = r2
            r1.o = r3
            if (r4 <= 0) goto L12
            if (r5 <= 0) goto L12
            int r4 = r4 / r3
            int r4 = r4 * r3
            goto L13
        L12:
            r4 = 0
        L13:
            r1.g = r4
            r1.p = r5
            return
    }

    private void a() {
            r4 = this;
            byte[] r0 = r4.h
            r1 = 0
            if (r0 != 0) goto L12
            int r0 = r4.d()
            byte[] r0 = new byte[r0]
            r4.h = r0
            r4.i = r1
            r4.q = r1
            goto L1d
        L12:
            int r2 = r0.length
            int r2 = r2 * 2
            byte[] r2 = new byte[r2]
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            r4.h = r2
        L1d:
            return
    }

    protected static boolean c(byte r1) {
            r0 = 9
            if (r1 == r0) goto L12
            r0 = 10
            if (r1 == r0) goto L12
            r0 = 13
            if (r1 == r0) goto L12
            r0 = 32
            if (r1 == r0) goto L12
            r1 = 0
            return r1
        L12:
            r1 = 1
            return r1
    }

    private void e() {
            r1 = this;
            r0 = 0
            r1.h = r0
            r0 = 0
            r1.i = r0
            r1.q = r0
            r1.k = r0
            r1.l = r0
            r1.j = r0
            return
    }

    protected void a(int r3) {
            r2 = this;
            byte[] r0 = r2.h
            if (r0 == 0) goto La
            int r0 = r0.length
            int r1 = r2.i
            int r1 = r1 + r3
            if (r0 >= r1) goto Ld
        La:
            r2.a()
        Ld:
            return
    }

    abstract void a(byte[] r1, int r2, int r3);

    abstract void b(byte[] r1, int r2, int r3);

    boolean b() {
            r1 = this;
            byte[] r0 = r1.h
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    protected abstract boolean b(byte r1);

    public boolean b(byte[] r5, boolean r6) {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r5.length
            if (r1 >= r2) goto L21
            r2 = r5[r1]
            boolean r2 = r4.b(r2)
            if (r2 != 0) goto L1e
            if (r6 == 0) goto L1d
            r2 = r5[r1]
            r3 = 61
            if (r2 == r3) goto L1e
            r2 = r5[r1]
            boolean r2 = c(r2)
            if (r2 != 0) goto L1e
        L1d:
            return r0
        L1e:
            int r1 = r1 + 1
            goto L2
        L21:
            r5 = 1
            return r5
    }

    int c() {
            r2 = this;
            byte[] r0 = r2.h
            if (r0 == 0) goto La
            int r0 = r2.i
            int r1 = r2.q
            int r0 = r0 - r1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    int c(byte[] r3, int r4, int r5) {
            r2 = this;
            byte[] r0 = r2.h
            if (r0 == 0) goto L20
            int r0 = r2.c()
            int r5 = java.lang.Math.min(r0, r5)
            byte[] r0 = r2.h
            int r1 = r2.q
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.q
            int r3 = r3 + r5
            r2.q = r3
            int r4 = r2.i
            if (r3 < r4) goto L1f
            r3 = 0
            r2.h = r3
        L1f:
            return r5
        L20:
            boolean r3 = r2.j
            if (r3 == 0) goto L26
            r3 = -1
            goto L27
        L26:
            r3 = 0
        L27:
            return r3
    }

    public byte[] c(java.lang.String r1) {
            r0 = this;
            byte[] r1 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r1)
            byte[] r1 = r0.decode(r1)
            return r1
    }

    protected int d() {
            r1 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            return r0
    }

    public boolean d(java.lang.String r2) {
            r1 = this;
            byte[] r2 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r2)
            r0 = 1
            boolean r2 = r1.b(r2, r0)
            return r2
    }

    @Override
    public java.lang.Object decode(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Ld
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.decode(r2)
            return r2
        Ld:
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L18
            java.lang.String r2 = (java.lang.String) r2
            byte[] r2 = r1.c(r2)
            return r2
        L18:
            org.apache.commons.codec.DecoderException r2 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "Parameter supplied to Base-N decode is not a byte[] or a String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte[] decode(byte[] r3) {
            r2 = this;
            r2.e()
            if (r3 == 0) goto L1a
            int r0 = r3.length
            if (r0 != 0) goto L9
            goto L1a
        L9:
            int r0 = r3.length
            r1 = 0
            r2.b(r3, r1, r0)
            r0 = -1
            r2.b(r3, r1, r0)
            int r3 = r2.i
            byte[] r0 = new byte[r3]
            r2.c(r0, r1, r3)
            return r0
        L1a:
            return r3
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Ld
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.encode(r2)
            return r2
        Ld:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = "Parameter supplied to Base-N encode is not a byte[]"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte[] encode(byte[] r3) {
            r2 = this;
            r2.e()
            if (r3 == 0) goto L1d
            int r0 = r3.length
            if (r0 != 0) goto L9
            goto L1d
        L9:
            int r0 = r3.length
            r1 = 0
            r2.a(r3, r1, r0)
            r0 = -1
            r2.a(r3, r1, r0)
            int r3 = r2.i
            int r0 = r2.q
            int r3 = r3 - r0
            byte[] r0 = new byte[r3]
            r2.c(r0, r1, r3)
            return r0
        L1d:
            return r3
    }

    public java.lang.String j(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    public java.lang.String k(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    protected boolean l(byte[] r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.length
            r2 = r0
        L6:
            if (r2 >= r1) goto L1a
            r3 = r6[r2]
            r4 = 61
            if (r4 == r3) goto L18
            boolean r3 = r5.b(r3)
            if (r3 == 0) goto L15
            goto L18
        L15:
            int r2 = r2 + 1
            goto L6
        L18:
            r6 = 1
            return r6
        L1a:
            return r0
    }

    public long m(byte[] r7) {
            r6 = this;
            int r7 = r7.length
            int r0 = r6.n
            int r7 = r7 + r0
            int r7 = r7 + (-1)
            int r7 = r7 / r0
            long r0 = (long) r7
            int r7 = r6.o
            long r2 = (long) r7
            long r0 = r0 * r2
            int r7 = r6.g
            if (r7 <= 0) goto L1c
            long r2 = (long) r7
            long r2 = r2 + r0
            r4 = 1
            long r2 = r2 - r4
            long r4 = (long) r7
            long r2 = r2 / r4
            int r7 = r6.p
            long r4 = (long) r7
            long r2 = r2 * r4
            long r0 = r0 + r2
        L1c:
            return r0
    }
}
