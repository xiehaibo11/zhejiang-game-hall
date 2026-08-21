package com.sigmob.sdk.archives.tar;

class d {
    public static final int a = 512;
    public static final int b = 10240;
    private java.io.InputStream c;
    private java.io.OutputStream d;
    private byte[] e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;

    public d(java.io.InputStream r2) {
            r1 = this;
            r0 = 10240(0x2800, float:1.4349E-41)
            r1.<init>(r2, r0)
            return
    }

    public d(java.io.InputStream r2, int r3) {
            r1 = this;
            r0 = 512(0x200, float:7.17E-43)
            r1.<init>(r2, r3, r0)
            return
    }

    public d(java.io.InputStream r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r1 = 0
            r0.d = r1
            r0.a(r2, r3)
            return
    }

    public d(java.io.OutputStream r2) {
            r1 = this;
            r0 = 10240(0x2800, float:1.4349E-41)
            r1.<init>(r2, r0)
            return
    }

    public d(java.io.OutputStream r2, int r3) {
            r1 = this;
            r0 = 512(0x200, float:7.17E-43)
            r1.<init>(r2, r3, r0)
            return
    }

    public d(java.io.OutputStream r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.d = r2
            r1.a(r3, r4)
            return
    }

    private void a(int r1, int r2) {
            r0 = this;
            r0.h = r1
            r0.i = r2
            int r2 = r1 / r2
            r0.j = r2
            byte[] r1 = new byte[r1]
            r0.e = r1
            java.io.InputStream r1 = r0.c
            if (r1 == 0) goto L16
            r1 = -1
            r0.f = r1
            r0.g = r2
            goto L1b
        L16:
            r1 = 0
            r0.f = r1
            r0.g = r1
        L1b:
            return
    }

    private boolean i() throws java.io.IOException {
            r7 = this;
            java.io.InputStream r0 = r7.c
            if (r0 == 0) goto L33
            r0 = 0
            r7.g = r0
            int r1 = r7.h
            r2 = r0
        La:
            if (r1 <= 0) goto L2c
            java.io.InputStream r3 = r7.c
            byte[] r4 = r7.e
            int r3 = r3.read(r4, r2, r1)
            long r3 = (long) r3
            r5 = -1
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 != 0) goto L25
            if (r2 != 0) goto L1e
            return r0
        L1e:
            byte[] r3 = r7.e
            int r1 = r1 + r2
            java.util.Arrays.fill(r3, r2, r1, r0)
            goto L2c
        L25:
            long r5 = (long) r2
            long r5 = r5 + r3
            int r2 = (int) r5
            long r5 = (long) r1
            long r5 = r5 - r3
            int r1 = (int) r5
            goto La
        L2c:
            int r0 = r7.f
            r1 = 1
            int r0 = r0 + r1
            r7.f = r0
            return r1
        L33:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "reading from an output buffer"
            r0.<init>(r1)
            throw r0
    }

    private void j() throws java.io.IOException {
            r4 = this;
            java.io.OutputStream r0 = r4.d
            if (r0 == 0) goto L1f
            byte[] r1 = r4.e
            int r2 = r4.h
            r3 = 0
            r0.write(r1, r3, r2)
            java.io.OutputStream r0 = r4.d
            r0.flush()
            r4.g = r3
            int r0 = r4.f
            int r0 = r0 + 1
            r4.f = r0
            byte[] r0 = r4.e
            java.util.Arrays.fill(r0, r3)
            return
        L1f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "writing to an input buffer"
            r0.<init>(r1)
            throw r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public void a(byte[] r4, int r5) throws java.io.IOException {
            r3 = this;
            java.io.OutputStream r0 = r3.d
            if (r0 != 0) goto L18
            java.io.InputStream r4 = r3.c
            if (r4 != 0) goto L10
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Output buffer is closed"
            r4.<init>(r5)
            throw r4
        L10:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "writing to an input buffer"
            r4.<init>(r5)
            throw r4
        L18:
            int r0 = r3.i
            int r0 = r0 + r5
            int r1 = r4.length
            if (r0 > r1) goto L38
            int r0 = r3.g
            int r1 = r3.j
            if (r0 < r1) goto L27
            r3.j()
        L27:
            byte[] r0 = r3.e
            int r1 = r3.g
            int r2 = r3.i
            int r1 = r1 * r2
            java.lang.System.arraycopy(r4, r5, r0, r1, r2)
            int r4 = r3.g
            int r4 = r4 + 1
            r3.g = r4
            return
        L38:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "record has length '"
            r1.append(r2)
            int r4 = r4.length
            r1.append(r4)
            java.lang.String r4 = "' with offset '"
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = "' which is less than the record size of '"
            r1.append(r4)
            int r4 = r3.i
            r1.append(r4)
            java.lang.String r4 = "'"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public boolean a(byte[] r5) {
            r4 = this;
            int r0 = r4.b()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L10
            r3 = r5[r2]
            if (r3 == 0) goto Ld
            return r1
        Ld:
            int r2 = r2 + 1
            goto L6
        L10:
            r5 = 1
            return r5
    }

    public int b() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public void b(byte[] r5) throws java.io.IOException {
            r4 = this;
            java.io.OutputStream r0 = r4.d
            if (r0 != 0) goto L18
            java.io.InputStream r5 = r4.c
            if (r5 != 0) goto L10
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "Output buffer is closed"
            r5.<init>(r0)
            throw r5
        L10:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "writing to an input buffer"
            r5.<init>(r0)
            throw r5
        L18:
            int r0 = r5.length
            int r1 = r4.i
            if (r0 != r1) goto L38
            int r0 = r4.g
            int r1 = r4.j
            if (r0 < r1) goto L26
            r4.j()
        L26:
            r0 = 0
            byte[] r1 = r4.e
            int r2 = r4.g
            int r3 = r4.i
            int r2 = r2 * r3
            java.lang.System.arraycopy(r5, r0, r1, r2, r3)
            int r5 = r4.g
            int r5 = r5 + 1
            r4.g = r5
            return
        L38:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "record to write has length '"
            r1.append(r2)
            int r5 = r5.length
            r1.append(r5)
            java.lang.String r5 = "' which is not the record size of '"
            r1.append(r5)
            int r5 = r4.i
            r1.append(r5)
            java.lang.String r5 = "'"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public void c() throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.c
            if (r0 == 0) goto L18
            int r0 = r2.g
            int r1 = r2.j
            if (r0 < r1) goto L11
            boolean r0 = r2.i()
            if (r0 != 0) goto L11
            return
        L11:
            int r0 = r2.g
            int r0 = r0 + 1
            r2.g = r0
            return
        L18:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "reading (via skip) from an output buffer"
            r0.<init>(r1)
            throw r0
    }

    public byte[] d() throws java.io.IOException {
            r5 = this;
            java.io.InputStream r0 = r5.c
            if (r0 != 0) goto L18
            java.io.OutputStream r0 = r5.d
            if (r0 != 0) goto L10
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "input buffer is closed"
            r0.<init>(r1)
            throw r0
        L10:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "reading from an output buffer"
            r0.<init>(r1)
            throw r0
        L18:
            int r0 = r5.g
            int r1 = r5.j
            if (r0 < r1) goto L26
            boolean r0 = r5.i()
            if (r0 != 0) goto L26
            r0 = 0
            return r0
        L26:
            int r0 = r5.i
            byte[] r1 = new byte[r0]
            byte[] r2 = r5.e
            int r3 = r5.g
            int r3 = r3 * r0
            r4 = 0
            java.lang.System.arraycopy(r2, r3, r1, r4, r0)
            int r0 = r5.g
            int r0 = r0 + 1
            r5.g = r0
            return r1
    }

    public int e() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public int f() {
            r1 = this;
            int r0 = r1.g
            int r0 = r0 + (-1)
            return r0
    }

    void g() throws java.io.IOException {
            r2 = this;
            java.io.OutputStream r0 = r2.d
            if (r0 == 0) goto Lc
            int r0 = r2.g
            if (r0 <= 0) goto Lb
            r2.j()
        Lb:
            return
        Lc:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "writing to an input buffer"
            r0.<init>(r1)
            throw r0
    }

    public void h() throws java.io.IOException {
            r3 = this;
            java.io.OutputStream r0 = r3.d
            r1 = 0
            if (r0 == 0) goto L1c
            r3.g()
            java.io.OutputStream r0 = r3.d
            java.io.PrintStream r2 = java.lang.System.out
            if (r0 == r2) goto L2b
            java.io.OutputStream r0 = r3.d
            java.io.PrintStream r2 = java.lang.System.err
            if (r0 == r2) goto L2b
            java.io.OutputStream r0 = r3.d
            r0.close()
            r3.d = r1
            goto L2b
        L1c:
            java.io.InputStream r0 = r3.c
            if (r0 == 0) goto L2b
            java.io.InputStream r2 = java.lang.System.in
            if (r0 == r2) goto L29
            java.io.InputStream r0 = r3.c
            r0.close()
        L29:
            r3.c = r1
        L2b:
            return
    }
}
