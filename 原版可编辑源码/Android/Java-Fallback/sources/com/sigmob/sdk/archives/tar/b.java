package com.sigmob.sdk.archives.tar;

public class b extends com.sigmob.sdk.archives.c {
    private static final int b = 256;
    private static final int c = 8192;
    protected final com.sigmob.sdk.archives.tar.d a;
    private boolean d;
    private long e;
    private long f;
    private byte[] g;
    private com.sigmob.sdk.archives.tar.a h;


    public b(java.io.InputStream r3) {
            r2 = this;
            r0 = 10240(0x2800, float:1.4349E-41)
            r1 = 512(0x200, float:7.17E-43)
            r2.<init>(r3, r0, r1)
            return
    }

    public b(java.io.InputStream r2, int r3) {
            r1 = this;
            r0 = 512(0x200, float:7.17E-43)
            r1.<init>(r2, r3, r0)
            return
    }

    public b(java.io.InputStream r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            com.sigmob.sdk.archives.tar.d r0 = new com.sigmob.sdk.archives.tar.d
            r0.<init>(r2, r3, r4)
            r1.a = r0
            r2 = 0
            r1.g = r2
            r2 = 0
            r1.d = r2
            return
    }

    public static boolean a(byte[] r7, int r8) {
            r0 = 0
            r1 = 265(0x109, float:3.71E-43)
            if (r8 >= r1) goto L6
            return r0
        L6:
            java.lang.String r8 = "ustar\u0000"
            r1 = 6
            r2 = 257(0x101, float:3.6E-43)
            boolean r3 = com.sigmob.sdk.archives.utils.a.a(r8, r7, r2, r1)
            r4 = 1
            r5 = 2
            r6 = 263(0x107, float:3.69E-43)
            if (r3 == 0) goto L1e
            java.lang.String r3 = "00"
            boolean r3 = com.sigmob.sdk.archives.utils.a.a(r3, r7, r6, r5)
            if (r3 == 0) goto L1e
            return r4
        L1e:
            java.lang.String r3 = "ustar "
            boolean r3 = com.sigmob.sdk.archives.utils.a.a(r3, r7, r2, r1)
            if (r3 == 0) goto L37
            java.lang.String r3 = " \u0000"
            boolean r3 = com.sigmob.sdk.archives.utils.a.a(r3, r7, r6, r5)
            if (r3 != 0) goto L36
            java.lang.String r3 = "0\u0000"
            boolean r3 = com.sigmob.sdk.archives.utils.a.a(r3, r7, r6, r5)
            if (r3 == 0) goto L37
        L36:
            return r4
        L37:
            boolean r8 = com.sigmob.sdk.archives.utils.a.a(r8, r7, r2, r1)
            if (r8 == 0) goto L46
            java.lang.String r8 = "\u0000\u0000"
            boolean r7 = com.sigmob.sdk.archives.utils.a.a(r8, r7, r6, r5)
            if (r7 == 0) goto L46
            r0 = r4
        L46:
            return r0
    }

    private byte[] h() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.d
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            com.sigmob.sdk.archives.tar.d r0 = r4.a
            byte[] r0 = r0.d()
            r2 = 1
            if (r0 != 0) goto L12
        Lf:
            r4.d = r2
            goto L1b
        L12:
            com.sigmob.sdk.archives.tar.d r3 = r4.a
            boolean r3 = r3.a(r0)
            if (r3 == 0) goto L1b
            goto Lf
        L1b:
            boolean r2 = r4.d
            if (r2 == 0) goto L20
            goto L21
        L20:
            r1 = r0
        L21:
            return r1
    }

    private void i() throws java.io.IOException {
            r9 = this;
            com.sigmob.sdk.archives.tar.b$1 r0 = new com.sigmob.sdk.archives.tar.b$1
            java.lang.String r1 = "UTF-8"
            r0.<init>(r9, r9, r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        Lc:
            r2 = 0
            r3 = r2
            r4 = r3
        Lf:
            int r5 = r0.read()     // Catch: java.lang.Throwable -> L109
            r6 = -1
            if (r5 == r6) goto L71
            int r3 = r3 + 1
            r7 = 32
            if (r5 != r7) goto L6b
            java.lang.StringBuffer r5 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L109
            r5.<init>()     // Catch: java.lang.Throwable -> L109
        L21:
            int r7 = r0.read()     // Catch: java.lang.Throwable -> L109
            if (r7 == r6) goto L69
            int r3 = r3 + 1
            r8 = 61
            if (r7 != r8) goto L64
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L109
            int r4 = r4 - r3
            char[] r3 = new char[r4]     // Catch: java.lang.Throwable -> L109
            int r8 = r0.read(r3)     // Catch: java.lang.Throwable -> L109
            if (r8 != r4) goto L45
            java.lang.String r8 = new java.lang.String     // Catch: java.lang.Throwable -> L109
            int r4 = r4 + (-1)
            r8.<init>(r3, r2, r4)     // Catch: java.lang.Throwable -> L109
            r1.put(r5, r8)     // Catch: java.lang.Throwable -> L109
            goto L69
        L45:
            java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L109
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L109
            r2.<init>()     // Catch: java.lang.Throwable -> L109
            java.lang.String r3 = "Failed to read Paxheader. Expected "
            r2.append(r3)     // Catch: java.lang.Throwable -> L109
            r2.append(r4)     // Catch: java.lang.Throwable -> L109
            java.lang.String r3 = " chars, read "
            r2.append(r3)     // Catch: java.lang.Throwable -> L109
            r2.append(r8)     // Catch: java.lang.Throwable -> L109
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L109
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L109
            throw r1     // Catch: java.lang.Throwable -> L109
        L64:
            char r7 = (char) r7     // Catch: java.lang.Throwable -> L109
            r5.append(r7)     // Catch: java.lang.Throwable -> L109
            goto L21
        L69:
            r5 = r7
            goto L71
        L6b:
            int r4 = r4 * 10
            int r5 = r5 + (-48)
            int r4 = r4 + r5
            goto Lf
        L71:
            if (r5 != r6) goto Lc
            r0.close()
            r9.a()
            java.util.Set r0 = r1.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L81:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L108
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = "path"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto La7
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            r2.a(r1)
            goto L81
        La7:
            java.lang.String r3 = "linkpath"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Lb5
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            r2.b(r1)
            goto L81
        Lb5:
            java.lang.String r3 = "gid"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Lc7
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            int r1 = java.lang.Integer.parseInt(r1)
            r2.c(r1)
            goto L81
        Lc7:
            java.lang.String r3 = "gname"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Ld5
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            r2.d(r1)
            goto L81
        Ld5:
            java.lang.String r3 = "uid"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Le7
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            int r1 = java.lang.Integer.parseInt(r1)
            r2.b(r1)
            goto L81
        Le7:
            java.lang.String r3 = "uname"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Lf5
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            r2.c(r1)
            goto L81
        Lf5:
            java.lang.String r3 = "size"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L81
            com.sigmob.sdk.archives.tar.a r2 = r9.h
            long r3 = java.lang.Long.parseLong(r1)
            r2.b(r3)
            goto L81
        L108:
            return
        L109:
            r1 = move-exception
            r0.close()
            throw r1
    }

    private void j() throws java.io.IOException {
            r2 = this;
            com.sigmob.sdk.archives.tar.a r0 = r2.h
            boolean r0 = r0.m()
            if (r0 == 0) goto L1f
        L8:
            byte[] r0 = r2.h()
            boolean r1 = r2.d
            if (r1 == 0) goto L14
            r0 = 0
            r2.h = r0
            goto L1f
        L14:
            com.sigmob.sdk.archives.tar.c r1 = new com.sigmob.sdk.archives.tar.c
            r1.<init>(r0)
            boolean r0 = r1.a()
            if (r0 != 0) goto L8
        L1f:
            return
    }

    @Override
    public com.sigmob.sdk.archives.a a() throws java.io.IOException {
            r1 = this;
            com.sigmob.sdk.archives.tar.a r0 = r1.e()
            return r0
    }

    protected final void a(com.sigmob.sdk.archives.tar.a r1) {
            r0 = this;
            r0.h = r1
            return
    }

    protected final void a(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public boolean a(com.sigmob.sdk.archives.a r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.sigmob.sdk.archives.tar.a
            if (r0 == 0) goto Ld
            com.sigmob.sdk.archives.tar.a r2 = (com.sigmob.sdk.archives.tar.a) r2
            boolean r2 = r2.o()
            r2 = r2 ^ 1
            return r2
        Ld:
            r2 = 0
            return r2
    }

    @Override
    public int available() {
            r8 = this;
            long r0 = r8.e
            long r2 = r8.f
            long r4 = r0 - r2
            r6 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L11
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        L11:
            long r0 = r0 - r2
            int r0 = (int) r0
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            com.sigmob.sdk.archives.tar.d r0 = r1.a
            r0.h()
            return
    }

    public int d() {
            r1 = this;
            com.sigmob.sdk.archives.tar.d r0 = r1.a
            int r0 = r0.b()
            return r0
    }

    public com.sigmob.sdk.archives.tar.a e() throws java.io.IOException {
            r8 = this;
            boolean r0 = r8.d
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            com.sigmob.sdk.archives.tar.a r0 = r8.h
            r2 = 0
            if (r0 == 0) goto L28
            long r4 = r8.e
            long r6 = r8.f
        L10:
            long r4 = r4 - r6
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L26
            long r6 = r8.skip(r4)
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1e
            goto L10
        L1e:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "failed to skip current tar entry"
            r0.<init>(r1)
            throw r0
        L26:
            r8.g = r1
        L28:
            byte[] r0 = r8.h()
            boolean r4 = r8.d
            if (r4 == 0) goto L33
            r8.h = r1
            return r1
        L33:
            com.sigmob.sdk.archives.tar.a r4 = new com.sigmob.sdk.archives.tar.a
            r4.<init>(r0)
            r8.h = r4
            r8.f = r2
            long r2 = r4.b()
            r8.e = r2
            com.sigmob.sdk.archives.tar.a r0 = r8.h
            boolean r0 = r0.p()
            if (r0 == 0) goto L8f
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r2 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r2]
        L53:
            int r3 = r8.read(r2)
            if (r3 < 0) goto L63
            java.lang.String r4 = new java.lang.String
            r5 = 0
            r4.<init>(r2, r5, r3)
            r0.append(r4)
            goto L53
        L63:
            r8.a()
            com.sigmob.sdk.archives.tar.a r2 = r8.h
            if (r2 != 0) goto L6b
            return r1
        L6b:
            int r1 = r0.length()
            if (r1 <= 0) goto L86
            int r1 = r0.length()
            int r1 = r1 + (-1)
            char r1 = r0.charAt(r1)
            if (r1 != 0) goto L86
            int r1 = r0.length()
            int r1 = r1 + (-1)
            r0.deleteCharAt(r1)
        L86:
            com.sigmob.sdk.archives.tar.a r1 = r8.h
            java.lang.String r0 = r0.toString()
            r1.a(r0)
        L8f:
            com.sigmob.sdk.archives.tar.a r0 = r8.h
            boolean r0 = r0.q()
            if (r0 == 0) goto L9a
            r8.i()
        L9a:
            com.sigmob.sdk.archives.tar.a r0 = r8.h
            boolean r0 = r0.o()
            if (r0 == 0) goto La5
            r8.j()
        La5:
            com.sigmob.sdk.archives.tar.a r0 = r8.h
            return r0
    }

    protected final com.sigmob.sdk.archives.tar.a f() {
            r1 = this;
            com.sigmob.sdk.archives.tar.a r0 = r1.h
            return r0
    }

    protected final boolean g() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    @Override
    public int read(byte[] r7, int r8, int r9) throws java.io.IOException {
            r6 = this;
            long r0 = r6.f
            long r2 = r6.e
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto La
            r7 = -1
            return r7
        La:
            long r4 = (long) r9
            long r4 = r4 + r0
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 <= 0) goto L12
            long r2 = r2 - r0
            int r9 = (int) r2
        L12:
            byte[] r0 = r6.g
            r1 = 0
            if (r0 == 0) goto L39
            int r2 = r0.length
            if (r9 <= r2) goto L1c
            int r0 = r0.length
            goto L1d
        L1c:
            r0 = r9
        L1d:
            byte[] r2 = r6.g
            java.lang.System.arraycopy(r2, r1, r7, r8, r0)
            byte[] r2 = r6.g
            int r3 = r2.length
            if (r0 < r3) goto L2b
            r2 = 0
            r6.g = r2
            goto L34
        L2b:
            int r3 = r2.length
            int r3 = r3 - r0
            byte[] r4 = new byte[r3]
            java.lang.System.arraycopy(r2, r0, r4, r1, r3)
            r6.g = r4
        L34:
            int r2 = r0 + 0
            int r9 = r9 - r0
            int r8 = r8 + r0
            goto L3a
        L39:
            r2 = r1
        L3a:
            if (r9 <= 0) goto L82
            com.sigmob.sdk.archives.tar.d r0 = r6.a
            byte[] r0 = r0.d()
            if (r0 == 0) goto L5f
            int r3 = r0.length
            r6.a(r3)
            int r3 = r0.length
            if (r3 <= r9) goto L58
            java.lang.System.arraycopy(r0, r1, r7, r8, r9)
            int r3 = r3 - r9
            byte[] r4 = new byte[r3]
            r6.g = r4
            java.lang.System.arraycopy(r0, r9, r4, r1, r3)
            r3 = r9
            goto L5b
        L58:
            java.lang.System.arraycopy(r0, r1, r7, r8, r3)
        L5b:
            int r2 = r2 + r3
            int r9 = r9 - r3
            int r8 = r8 + r3
            goto L3a
        L5f:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "unexpected EOF with "
            r8.append(r0)
            r8.append(r9)
            java.lang.String r9 = " bytes unread. Occured at byte: "
            r8.append(r9)
            long r0 = r6.c()
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L82:
            long r7 = r6.f
            long r0 = (long) r2
            long r7 = r7 + r0
            r6.f = r7
            return r2
    }

    @Override
    public synchronized void reset() {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    @Override
    public long skip(long r8) throws java.io.IOException {
            r7 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r1 = new byte[r0]
            r2 = r8
        L5:
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L1f
            long r4 = (long) r0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L11
            goto L12
        L11:
            r4 = r2
        L12:
            int r4 = (int) r4
            r5 = 0
            int r4 = r7.read(r1, r5, r4)
            r5 = -1
            if (r4 != r5) goto L1c
            goto L1f
        L1c:
            long r4 = (long) r4
            long r2 = r2 - r4
            goto L5
        L1f:
            long r8 = r8 - r2
            return r8
    }
}
