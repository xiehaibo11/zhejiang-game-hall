package com.tkay.expressad.exoplayer.j;

public final class r implements com.tkay.expressad.exoplayer.j.h {
    private final com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> a;
    private java.io.RandomAccessFile b;
    private android.net.Uri c;
    private long d;
    private boolean e;

    public static class a extends java.io.IOException {
        public a(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public r() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public r(com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final int a(byte[] r6, int r7, int r8) {
            r5 = this;
            if (r8 != 0) goto L4
            r6 = 0
            return r6
        L4:
            long r0 = r5.d
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Le
            r6 = -1
            return r6
        Le:
            java.io.RandomAccessFile r2 = r5.b     // Catch: java.io.IOException -> L2a
            long r3 = (long) r8     // Catch: java.io.IOException -> L2a
            long r0 = java.lang.Math.min(r0, r3)     // Catch: java.io.IOException -> L2a
            int r8 = (int) r0     // Catch: java.io.IOException -> L2a
            int r6 = r2.read(r6, r7, r8)     // Catch: java.io.IOException -> L2a
            if (r6 <= 0) goto L29
            long r7 = r5.d
            long r0 = (long) r6
            long r7 = r7 - r0
            r5.d = r7
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> r7 = r5.a
            if (r7 == 0) goto L29
            r7.a(r6)
        L29:
            return r6
        L2a:
            r6 = move-exception
            com.tkay.expressad.exoplayer.j.r$a r7 = new com.tkay.expressad.exoplayer.j.r$a
            r7.<init>(r6)
            throw r7
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r5) {
            r4 = this;
            android.net.Uri r0 = r5.c     // Catch: java.io.IOException -> L47
            r4.c = r0     // Catch: java.io.IOException -> L47
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L47
            android.net.Uri r1 = r5.c     // Catch: java.io.IOException -> L47
            java.lang.String r1 = r1.getPath()     // Catch: java.io.IOException -> L47
            java.lang.String r2 = "r"
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L47
            r4.b = r0     // Catch: java.io.IOException -> L47
            long r1 = r5.f     // Catch: java.io.IOException -> L47
            r0.seek(r1)     // Catch: java.io.IOException -> L47
            long r0 = r5.g     // Catch: java.io.IOException -> L47
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L2a
            java.io.RandomAccessFile r0 = r4.b     // Catch: java.io.IOException -> L47
            long r0 = r0.length()     // Catch: java.io.IOException -> L47
            long r2 = r5.f     // Catch: java.io.IOException -> L47
            long r0 = r0 - r2
            goto L2c
        L2a:
            long r0 = r5.g     // Catch: java.io.IOException -> L47
        L2c:
            r4.d = r0     // Catch: java.io.IOException -> L47
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto L41
            r5 = 1
            r4.e = r5
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> r5 = r4.a
            if (r5 == 0) goto L3e
            r5.b()
        L3e:
            long r0 = r4.d
            return r0
        L41:
            java.io.EOFException r5 = new java.io.EOFException     // Catch: java.io.IOException -> L47
            r5.<init>()     // Catch: java.io.IOException -> L47
            throw r5     // Catch: java.io.IOException -> L47
        L47:
            r5 = move-exception
            com.tkay.expressad.exoplayer.j.r$a r0 = new com.tkay.expressad.exoplayer.j.r$a
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            android.net.Uri r0 = r1.c
            return r0
    }

    @Override
    public final void b() {
            r4 = this;
            r0 = 0
            r4.c = r0
            r1 = 0
            java.io.RandomAccessFile r2 = r4.b     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            if (r2 == 0) goto Ld
            java.io.RandomAccessFile r2 = r4.b     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            r2.close()     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
        Ld:
            r4.b = r0
            boolean r0 = r4.e
            if (r0 == 0) goto L1c
            r4.e = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> r0 = r4.a
            if (r0 == 0) goto L1c
            r0.c()
        L1c:
            return
        L1d:
            r2 = move-exception
            goto L26
        L1f:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.r$a r3 = new com.tkay.expressad.exoplayer.j.r$a     // Catch: java.lang.Throwable -> L1d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1d
            throw r3     // Catch: java.lang.Throwable -> L1d
        L26:
            r4.b = r0
            boolean r0 = r4.e
            if (r0 == 0) goto L35
            r4.e = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.r> r0 = r4.a
            if (r0 == 0) goto L35
            r0.c()
        L35:
            throw r2
    }
}
