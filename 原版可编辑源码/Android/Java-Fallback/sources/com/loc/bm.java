package com.loc;

public final class bm implements java.io.Closeable {
    public static final java.nio.charset.Charset a = null;
    private final java.io.InputStream b;
    private final java.nio.charset.Charset c;
    private byte[] d;
    private int e;
    private int f;


    static {
            java.lang.String r0 = "US-ASCII"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.loc.bm.a = r0
            return
    }

    public bm(java.io.InputStream r2, java.nio.charset.Charset r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private bm(java.io.InputStream r1, java.nio.charset.Charset r2, byte r3) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L22
            if (r2 == 0) goto L22
            java.nio.charset.Charset r3 = com.loc.bm.a
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L1a
            r0.b = r1
            r0.c = r2
            r1 = 8192(0x2000, float:1.148E-41)
            byte[] r1 = new byte[r1]
            r0.d = r1
            return
        L1a:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Unsupported encoding"
            r1.<init>(r2)
            throw r1
        L22:
            r1 = 0
            throw r1
    }

    static java.nio.charset.Charset a(com.loc.bm r0) {
            java.nio.charset.Charset r0 = r0.c
            return r0
    }

    private void b() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.b
            byte[] r1 = r4.d
            int r2 = r1.length
            r3 = 0
            int r0 = r0.read(r1, r3, r2)
            r1 = -1
            if (r0 == r1) goto L12
            r4.e = r3
            r4.f = r0
            return
        L12:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    public final java.lang.String a() throws java.io.IOException {
            r7 = this;
            java.io.InputStream r0 = r7.b
            monitor-enter(r0)
            byte[] r1 = r7.d     // Catch: java.lang.Throwable -> L97
            if (r1 == 0) goto L8f
            int r1 = r7.e     // Catch: java.lang.Throwable -> L97
            int r2 = r7.f     // Catch: java.lang.Throwable -> L97
            if (r1 < r2) goto L10
            r7.b()     // Catch: java.lang.Throwable -> L97
        L10:
            int r1 = r7.e     // Catch: java.lang.Throwable -> L97
        L12:
            int r2 = r7.f     // Catch: java.lang.Throwable -> L97
            r3 = 10
            if (r1 == r2) goto L49
            byte[] r2 = r7.d     // Catch: java.lang.Throwable -> L97
            r2 = r2[r1]     // Catch: java.lang.Throwable -> L97
            if (r2 != r3) goto L46
            int r2 = r7.e     // Catch: java.lang.Throwable -> L97
            if (r1 == r2) goto L2d
            byte[] r2 = r7.d     // Catch: java.lang.Throwable -> L97
            int r3 = r1 + (-1)
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L97
            r4 = 13
            if (r2 != r4) goto L2d
            goto L2e
        L2d:
            r3 = r1
        L2e:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L97
            byte[] r4 = r7.d     // Catch: java.lang.Throwable -> L97
            int r5 = r7.e     // Catch: java.lang.Throwable -> L97
            int r6 = r7.e     // Catch: java.lang.Throwable -> L97
            int r3 = r3 - r6
            java.nio.charset.Charset r6 = r7.c     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = r6.name()     // Catch: java.lang.Throwable -> L97
            r2.<init>(r4, r5, r3, r6)     // Catch: java.lang.Throwable -> L97
            int r1 = r1 + 1
            r7.e = r1     // Catch: java.lang.Throwable -> L97
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L97
            return r2
        L46:
            int r1 = r1 + 1
            goto L12
        L49:
            com.loc.bm$1 r1 = new com.loc.bm$1     // Catch: java.lang.Throwable -> L97
            int r2 = r7.f     // Catch: java.lang.Throwable -> L97
            int r4 = r7.e     // Catch: java.lang.Throwable -> L97
            int r2 = r2 - r4
            int r2 = r2 + 80
            r1.<init>(r7, r2)     // Catch: java.lang.Throwable -> L97
        L55:
            byte[] r2 = r7.d     // Catch: java.lang.Throwable -> L97
            int r4 = r7.e     // Catch: java.lang.Throwable -> L97
            int r5 = r7.f     // Catch: java.lang.Throwable -> L97
            int r6 = r7.e     // Catch: java.lang.Throwable -> L97
            int r5 = r5 - r6
            r1.write(r2, r4, r5)     // Catch: java.lang.Throwable -> L97
            r2 = -1
            r7.f = r2     // Catch: java.lang.Throwable -> L97
            r7.b()     // Catch: java.lang.Throwable -> L97
            int r2 = r7.e     // Catch: java.lang.Throwable -> L97
        L69:
            int r4 = r7.f     // Catch: java.lang.Throwable -> L97
            if (r2 == r4) goto L55
            byte[] r4 = r7.d     // Catch: java.lang.Throwable -> L97
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L97
            if (r4 != r3) goto L8c
            int r3 = r7.e     // Catch: java.lang.Throwable -> L97
            if (r2 == r3) goto L82
            byte[] r3 = r7.d     // Catch: java.lang.Throwable -> L97
            int r4 = r7.e     // Catch: java.lang.Throwable -> L97
            int r5 = r7.e     // Catch: java.lang.Throwable -> L97
            int r5 = r2 - r5
            r1.write(r3, r4, r5)     // Catch: java.lang.Throwable -> L97
        L82:
            int r2 = r2 + 1
            r7.e = r2     // Catch: java.lang.Throwable -> L97
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L97
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L97
            return r1
        L8c:
            int r2 = r2 + 1
            goto L69
        L8f:
            java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L97
            java.lang.String r2 = "LineReader is closed"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L97
            throw r1     // Catch: java.lang.Throwable -> L97
        L97:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L97
            throw r1
    }

    @Override
    public final void close() throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.b
            monitor-enter(r0)
            byte[] r1 = r2.d     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto Lf
            r1 = 0
            r2.d = r1     // Catch: java.lang.Throwable -> L11
            java.io.InputStream r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.close()     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1
    }
}
