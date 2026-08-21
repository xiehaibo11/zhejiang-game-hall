package com.xiaomi.push;

public class jb extends com.xiaomi.push.jf {
    private static final com.xiaomi.push.jk a = null;
    protected int a;
    protected boolean a;
    private byte[] a;
    protected boolean b;
    private byte[] b;
    protected boolean c;
    private byte[] c;
    private byte[] d;
    private byte[] e;
    private byte[] f;
    private byte[] g;
    private byte[] h;

    public class a implements com.xiaomi.push.jh {
        protected int a;
        protected boolean a;
        protected boolean b;

        public a() {
                r2 = this;
                r0 = 0
                r1 = 1
                r2.<init>(r0, r1)
                return
        }

        public a(boolean r2, boolean r3) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r0)
                return
        }

        public a(boolean r2, boolean r3, int r4) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r0 = 1
                r1.b = r0
                r1.a = r2
                r1.b = r3
                r1.a = r4
                return
        }

        @Override
        public com.xiaomi.push.jf a(com.xiaomi.push.jp r4) {
                r3 = this;
                com.xiaomi.push.jb r0 = new com.xiaomi.push.jb
                boolean r1 = r3.a
                boolean r2 = r3.b
                r0.<init>(r4, r1, r2)
                int r4 = r3.a
                if (r4 == 0) goto L10
                r0.b(r4)
            L10:
                return r0
        }
    }

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            r0.<init>()
            com.xiaomi.push.jb.a = r0
            return
    }

    public jb(com.xiaomi.push.jp r5, boolean r6, boolean r7) {
            r4 = this;
            r4.<init>(r5)
            r5 = 0
            r4.a = r5
            r0 = 1
            r4.b = r0
            r4.c = r5
            byte[] r5 = new byte[r0]
            r4.a = r5
            r5 = 2
            byte[] r1 = new byte[r5]
            r4.b = r1
            r1 = 4
            byte[] r2 = new byte[r1]
            r4.c = r2
            r2 = 8
            byte[] r3 = new byte[r2]
            r4.d = r3
            byte[] r0 = new byte[r0]
            r4.e = r0
            byte[] r5 = new byte[r5]
            r4.f = r5
            byte[] r5 = new byte[r1]
            r4.g = r5
            byte[] r5 = new byte[r2]
            r4.h = r5
            r4.a = r6
            r4.b = r7
            return
    }

    private int a(byte[] r2, int r3, int r4) {
            r1 = this;
            r1.c(r4)
            com.xiaomi.push.jp r0 = r1.a
            int r2 = r0.b(r2, r3, r4)
            return r2
    }

    @Override
    public byte a() {
            r3 = this;
            com.xiaomi.push.jp r0 = r3.a
            int r0 = r0.b()
            r1 = 1
            if (r0 < r1) goto L1d
            com.xiaomi.push.jp r0 = r3.a
            byte[] r0 = r0.a()
            com.xiaomi.push.jp r2 = r3.a
            int r2 = r2.a()
            r0 = r0[r2]
            com.xiaomi.push.jp r2 = r3.a
            r2.a(r1)
            return r0
        L1d:
            byte[] r0 = r3.e
            r2 = 0
            r3.a(r0, r2, r1)
            byte[] r0 = r3.e
            r0 = r0[r2]
            return r0
    }

    @Override
    public double a() {
            r2 = this;
            long r0 = r2.a()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            return r0
    }

    @Override
    public int a() {
            r4 = this;
            byte[] r0 = r4.g
            com.xiaomi.push.jp r1 = r4.a
            int r1 = r1.b()
            r2 = 0
            r3 = 4
            if (r1 < r3) goto L1e
            com.xiaomi.push.jp r0 = r4.a
            byte[] r0 = r0.a()
            com.xiaomi.push.jp r1 = r4.a
            int r2 = r1.a()
            com.xiaomi.push.jp r1 = r4.a
            r1.a(r3)
            goto L23
        L1e:
            byte[] r1 = r4.g
            r4.a(r1, r2, r3)
        L23:
            r1 = r0[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r3 = r2 + 1
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r2 + 2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r1 = r1 | r3
            int r2 = r2 + 3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    @Override
    public long a() {
            r8 = this;
            byte[] r0 = r8.h
            com.xiaomi.push.jp r1 = r8.a
            int r1 = r1.b()
            r2 = 0
            r3 = 8
            if (r1 < r3) goto L1f
            com.xiaomi.push.jp r0 = r8.a
            byte[] r0 = r0.a()
            com.xiaomi.push.jp r1 = r8.a
            int r2 = r1.a()
            com.xiaomi.push.jp r1 = r8.a
            r1.a(r3)
            goto L24
        L1f:
            byte[] r1 = r8.h
            r8.a(r1, r2, r3)
        L24:
            r1 = r0[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r4 = (long) r1
            r1 = 56
            long r4 = r4 << r1
            int r1 = r2 + 1
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            r1 = 48
            long r6 = r6 << r1
            long r4 = r4 | r6
            int r1 = r2 + 2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            r1 = 40
            long r6 = r6 << r1
            long r4 = r4 | r6
            int r1 = r2 + 3
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            r1 = 32
            long r6 = r6 << r1
            long r4 = r4 | r6
            int r1 = r2 + 4
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            r1 = 24
            long r6 = r6 << r1
            long r4 = r4 | r6
            int r1 = r2 + 5
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            r1 = 16
            long r6 = r6 << r1
            long r4 = r4 | r6
            int r1 = r2 + 6
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            long r6 = (long) r1
            long r6 = r6 << r3
            long r3 = r4 | r6
            int r2 = r2 + 7
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            long r0 = (long) r0
            long r0 = r0 | r3
            return r0
    }

    @Override
    public com.xiaomi.push.jc a() {
            r4 = this;
            byte r0 = r4.a()
            if (r0 != 0) goto L8
            r1 = 0
            goto Lc
        L8:
            short r1 = r4.a()
        Lc:
            com.xiaomi.push.jc r2 = new com.xiaomi.push.jc
            java.lang.String r3 = ""
            r2.<init>(r3, r0, r1)
            return r2
    }

    @Override
    public com.xiaomi.push.jd a() {
            r3 = this;
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            byte r1 = r3.a()
            int r2 = r3.a()
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public com.xiaomi.push.je a() {
            r4 = this;
            com.xiaomi.push.je r0 = new com.xiaomi.push.je
            byte r1 = r4.a()
            byte r2 = r4.a()
            int r3 = r4.a()
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public com.xiaomi.push.jj a() {
            r3 = this;
            com.xiaomi.push.jj r0 = new com.xiaomi.push.jj
            byte r1 = r3.a()
            int r2 = r3.a()
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public com.xiaomi.push.jk a() {
            r1 = this;
            com.xiaomi.push.jk r0 = com.xiaomi.push.jb.a
            return r0
    }

    @Override
    public java.lang.String a() {
            r5 = this;
            int r0 = r5.a()
            com.xiaomi.push.jp r1 = r5.a
            int r1 = r1.b()
            if (r1 < r0) goto L2d
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L25
            com.xiaomi.push.jp r2 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L25
            byte[] r2 = r2.a()     // Catch: java.io.UnsupportedEncodingException -> L25
            com.xiaomi.push.jp r3 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L25
            int r3 = r3.a()     // Catch: java.io.UnsupportedEncodingException -> L25
            java.lang.String r4 = "UTF-8"
            r1.<init>(r2, r3, r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L25
            com.xiaomi.push.jp r2 = r5.a     // Catch: java.io.UnsupportedEncodingException -> L25
            r2.a(r0)     // Catch: java.io.UnsupportedEncodingException -> L25
            return r1
        L25:
            com.xiaomi.push.iz r0 = new com.xiaomi.push.iz
            java.lang.String r1 = "JVM DOES NOT SUPPORT UTF-8"
            r0.<init>(r1)
            throw r0
        L2d:
            java.lang.String r0 = r5.a(r0)
            return r0
    }

    public java.lang.String a(int r4) {
            r3 = this;
            r3.c(r4)     // Catch: java.io.UnsupportedEncodingException -> L13
            byte[] r0 = new byte[r4]     // Catch: java.io.UnsupportedEncodingException -> L13
            com.xiaomi.push.jp r1 = r3.a     // Catch: java.io.UnsupportedEncodingException -> L13
            r2 = 0
            r1.b(r0, r2, r4)     // Catch: java.io.UnsupportedEncodingException -> L13
            java.lang.String r4 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L13
            java.lang.String r1 = "UTF-8"
            r4.<init>(r0, r1)     // Catch: java.io.UnsupportedEncodingException -> L13
            return r4
        L13:
            com.xiaomi.push.iz r4 = new com.xiaomi.push.iz
            java.lang.String r0 = "JVM DOES NOT SUPPORT UTF-8"
            r4.<init>(r0)
            throw r4
    }

    @Override
    public java.nio.ByteBuffer a() {
            r4 = this;
            int r0 = r4.a()
            r4.c(r0)
            com.xiaomi.push.jp r1 = r4.a
            int r1 = r1.b()
            if (r1 < r0) goto L25
            com.xiaomi.push.jp r1 = r4.a
            byte[] r1 = r1.a()
            com.xiaomi.push.jp r2 = r4.a
            int r2 = r2.a()
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1, r2, r0)
            com.xiaomi.push.jp r2 = r4.a
            r2.a(r0)
            return r1
        L25:
            byte[] r1 = new byte[r0]
            com.xiaomi.push.jp r2 = r4.a
            r3 = 0
            r2.b(r1, r3, r0)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r1)
            return r0
    }

    @Override
    public short a() {
            r4 = this;
            byte[] r0 = r4.f
            com.xiaomi.push.jp r1 = r4.a
            int r1 = r1.b()
            r2 = 0
            r3 = 2
            if (r1 < r3) goto L1e
            com.xiaomi.push.jp r0 = r4.a
            byte[] r0 = r0.a()
            com.xiaomi.push.jp r1 = r4.a
            int r2 = r1.a()
            com.xiaomi.push.jp r1 = r4.a
            r1.a(r3)
            goto L23
        L1e:
            byte[] r1 = r4.f
            r4.a(r1, r2, r3)
        L23:
            r1 = r0[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r2 = r2 + 1
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    @Override
    public void a() {
            r0 = this;
            return
    }

    @Override
    public void a(byte r4) {
            r3 = this;
            byte[] r0 = r3.a
            r1 = 0
            r0[r1] = r4
            com.xiaomi.push.jp r4 = r3.a
            byte[] r0 = r3.a
            r2 = 1
            r4.a(r0, r1, r2)
            return
    }

    @Override
    public void a(int r5) {
            r4 = this;
            byte[] r0 = r4.c
            int r1 = r5 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r5 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3 = 1
            r0[r3] = r1
            int r1 = r5 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3 = 2
            r0[r3] = r1
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r1 = 3
            r0[r1] = r5
            com.xiaomi.push.jp r5 = r4.a
            byte[] r0 = r4.c
            r1 = 4
            r5.a(r0, r2, r1)
            return
    }

    @Override
    public void a(long r8) {
            r7 = this;
            byte[] r0 = r7.d
            r1 = 56
            long r1 = r8 >> r1
            r3 = 255(0xff, double:1.26E-321)
            long r1 = r1 & r3
            int r1 = (int) r1
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            r1 = 48
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r1 = (int) r5
            byte r1 = (byte) r1
            r5 = 1
            r0[r5] = r1
            r1 = 40
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r1 = (int) r5
            byte r1 = (byte) r1
            r5 = 2
            r0[r5] = r1
            r1 = 32
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r1 = (int) r5
            byte r1 = (byte) r1
            r5 = 3
            r0[r5] = r1
            r1 = 24
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r1 = (int) r5
            byte r1 = (byte) r1
            r5 = 4
            r0[r5] = r1
            r1 = 16
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r1 = (int) r5
            byte r1 = (byte) r1
            r5 = 5
            r0[r5] = r1
            r1 = 8
            long r5 = r8 >> r1
            long r5 = r5 & r3
            int r5 = (int) r5
            byte r5 = (byte) r5
            r6 = 6
            r0[r6] = r5
            long r8 = r8 & r3
            int r8 = (int) r8
            byte r8 = (byte) r8
            r9 = 7
            r0[r9] = r8
            com.xiaomi.push.jp r8 = r7.a
            byte[] r9 = r7.d
            r8.a(r9, r2, r1)
            return
    }

    @Override
    public void a(com.xiaomi.push.jc r2) {
            r1 = this;
            byte r0 = r2.a
            r1.a(r0)
            short r2 = r2.a
            r1.a(r2)
            return
    }

    @Override
    public void a(com.xiaomi.push.jd r2) {
            r1 = this;
            byte r0 = r2.a
            r1.a(r0)
            int r2 = r2.a
            r1.a(r2)
            return
    }

    @Override
    public void a(com.xiaomi.push.je r2) {
            r1 = this;
            byte r0 = r2.a
            r1.a(r0)
            byte r0 = r2.b
            r1.a(r0)
            int r2 = r2.a
            r1.a(r2)
            return
    }

    @Override
    public void a(com.xiaomi.push.jk r1) {
            r0 = this;
            return
    }

    @Override
    public void a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "UTF-8"
            byte[] r4 = r4.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L12
            int r0 = r4.length     // Catch: java.io.UnsupportedEncodingException -> L12
            r3.a(r0)     // Catch: java.io.UnsupportedEncodingException -> L12
            com.xiaomi.push.jp r0 = r3.a     // Catch: java.io.UnsupportedEncodingException -> L12
            r1 = 0
            int r2 = r4.length     // Catch: java.io.UnsupportedEncodingException -> L12
            r0.a(r4, r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L12
            return
        L12:
            com.xiaomi.push.iz r4 = new com.xiaomi.push.iz
            java.lang.String r0 = "JVM DOES NOT SUPPORT UTF-8"
            r4.<init>(r0)
            throw r4
    }

    @Override
    public void a(java.nio.ByteBuffer r5) {
            r4 = this;
            int r0 = r5.limit()
            int r1 = r5.position()
            int r0 = r0 - r1
            int r1 = r5.arrayOffset()
            int r0 = r0 - r1
            r4.a(r0)
            com.xiaomi.push.jp r1 = r4.a
            byte[] r2 = r5.array()
            int r3 = r5.position()
            int r5 = r5.arrayOffset()
            int r3 = r3 + r5
            r1.a(r2, r3, r0)
            return
    }

    @Override
    public void a(short r4) {
            r3 = this;
            byte[] r0 = r3.b
            int r1 = r4 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1 = 1
            r0[r1] = r4
            com.xiaomi.push.jp r4 = r3.a
            byte[] r0 = r3.b
            r1 = 2
            r4.a(r0, r2, r1)
            return
    }

    @Override
    public void a(boolean r1) {
            r0 = this;
            r0.a(r1)
            return
    }

    @Override
    public boolean a() {
            r2 = this;
            byte r0 = r2.a()
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public void b() {
            r0 = this;
            return
    }

    public void b(int r1) {
            r0 = this;
            r0.a = r1
            r1 = 1
            r0.c = r1
            return
    }

    @Override
    public void c() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    protected void c(int r4) {
            r3 = this;
            if (r4 < 0) goto L26
            boolean r0 = r3.c
            if (r0 == 0) goto L25
            int r0 = r3.a
            int r0 = r0 - r4
            r3.a = r0
            if (r0 < 0) goto Le
            goto L25
        Le:
            com.xiaomi.push.iz r0 = new com.xiaomi.push.iz
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Message length exceeded: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L25:
            return
        L26:
            com.xiaomi.push.iz r0 = new com.xiaomi.push.iz
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Negative length: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public void d() {
            r0 = this;
            return
    }

    @Override
    public void e() {
            r0 = this;
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public void g() {
            r0 = this;
            return
    }

    @Override
    public void h() {
            r0 = this;
            return
    }

    @Override
    public void i() {
            r0 = this;
            return
    }

    @Override
    public void j() {
            r0 = this;
            return
    }
}
