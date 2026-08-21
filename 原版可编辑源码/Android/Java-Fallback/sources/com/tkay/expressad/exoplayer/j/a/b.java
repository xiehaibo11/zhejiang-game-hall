package com.tkay.expressad.exoplayer.j.a;

public final class b implements com.tkay.expressad.exoplayer.j.g {
    public static final int a = 20480;
    private final com.tkay.expressad.exoplayer.j.a.a b;
    private final long c;
    private final int d;
    private final boolean e;
    private com.tkay.expressad.exoplayer.j.k f;
    private java.io.File g;
    private java.io.OutputStream h;
    private java.io.FileOutputStream i;
    private long j;
    private long k;
    private com.tkay.expressad.exoplayer.k.x l;

    public static class a extends com.tkay.expressad.exoplayer.j.a.a.a {
        public a(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public b(com.tkay.expressad.exoplayer.j.a.a r7) {
            r6 = this;
            r2 = 2097152(0x200000, double:1.036131E-317)
            r4 = 20480(0x5000, float:2.8699E-41)
            r5 = 1
            r0 = r6
            r1 = r7
            r0.<init>(r1, r2, r4, r5)
            return
    }

    private b(com.tkay.expressad.exoplayer.j.a.a r7, long r8, int r10) {
            r6 = this;
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    private b(com.tkay.expressad.exoplayer.j.a.a r1, long r2, int r4, boolean r5) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            com.tkay.expressad.exoplayer.j.a.a r1 = (com.tkay.expressad.exoplayer.j.a.a) r1
            r0.b = r1
            r0.c = r2
            r0.d = r4
            r0.e = r5
            return
    }

    private b(com.tkay.expressad.exoplayer.j.a.a r7, long r8, boolean r10) {
            r6 = this;
            r4 = 20480(0x5000, float:2.8699E-41)
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    private void b() {
            r6 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r6.f
            long r0 = r0.g
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            com.tkay.expressad.exoplayer.j.k r0 = r6.f
            long r0 = r0.g
            long r2 = r6.k
            long r0 = r0 - r2
            long r2 = r6.c
            java.lang.Math.min(r0, r2)
        L16:
            com.tkay.expressad.exoplayer.j.a.a r0 = r6.b
            com.tkay.expressad.exoplayer.j.k r1 = r6.f
            java.lang.String r1 = r1.h
            com.tkay.expressad.exoplayer.j.k r2 = r6.f
            long r2 = r2.e
            long r4 = r6.k
            long r2 = r2 + r4
            java.io.File r0 = r0.c(r1, r2)
            r6.g = r0
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            java.io.File r1 = r6.g
            r0.<init>(r1)
            r6.i = r0
            int r1 = r6.d
            if (r1 <= 0) goto L4e
            com.tkay.expressad.exoplayer.k.x r1 = r6.l
            if (r1 != 0) goto L46
            com.tkay.expressad.exoplayer.k.x r0 = new com.tkay.expressad.exoplayer.k.x
            java.io.FileOutputStream r1 = r6.i
            int r2 = r6.d
            r0.<init>(r1, r2)
            r6.l = r0
            goto L49
        L46:
            r1.a(r0)
        L49:
            com.tkay.expressad.exoplayer.k.x r0 = r6.l
            r6.h = r0
            goto L50
        L4e:
            r6.h = r0
        L50:
            r0 = 0
            r6.j = r0
            return
    }

    private void c() {
            r3 = this;
            java.io.OutputStream r0 = r3.h
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r0.flush()     // Catch: java.lang.Throwable -> L27
            boolean r0 = r3.e     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L16
            java.io.FileOutputStream r0 = r3.i     // Catch: java.lang.Throwable -> L27
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.lang.Throwable -> L27
            r0.sync()     // Catch: java.lang.Throwable -> L27
        L16:
            java.io.OutputStream r0 = r3.h
            com.tkay.expressad.exoplayer.k.af.a(r0)
            r3.h = r1
            java.io.File r0 = r3.g
            r3.g = r1
            com.tkay.expressad.exoplayer.j.a.a r1 = r3.b
            r1.a(r0)
            return
        L27:
            r0 = move-exception
            java.io.OutputStream r2 = r3.h
            com.tkay.expressad.exoplayer.k.af.a(r2)
            r3.h = r1
            java.io.File r2 = r3.g
            r3.g = r1
            r2.delete()
            throw r0
    }

    @Override
    public final void a() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r2.f
            if (r0 != 0) goto L5
            return
        L5:
            r2.c()     // Catch: java.io.IOException -> L9
            return
        L9:
            r0 = move-exception
            com.tkay.expressad.exoplayer.j.a.b$a r1 = new com.tkay.expressad.exoplayer.j.a.b$a
            r1.<init>(r0)
            throw r1
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.k r5) {
            r4 = this;
            long r0 = r5.g
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L13
            r0 = 2
            boolean r0 = r5.a(r0)
            if (r0 != 0) goto L13
            r5 = 0
            r4.f = r5
            return
        L13:
            r4.f = r5
            r0 = 0
            r4.k = r0
            r4.b()     // Catch: java.io.IOException -> L1d
            return
        L1d:
            r5 = move-exception
            com.tkay.expressad.exoplayer.j.a.b$a r0 = new com.tkay.expressad.exoplayer.j.a.b$a
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final void a(byte[] r8, int r9, int r10) {
            r7 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r7.f
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
        L6:
            if (r0 >= r10) goto L3e
            long r1 = r7.j     // Catch: java.io.IOException -> L37
            long r3 = r7.c     // Catch: java.io.IOException -> L37
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L16
            r7.c()     // Catch: java.io.IOException -> L37
            r7.b()     // Catch: java.io.IOException -> L37
        L16:
            int r1 = r10 - r0
            long r1 = (long) r1     // Catch: java.io.IOException -> L37
            long r3 = r7.c     // Catch: java.io.IOException -> L37
            long r5 = r7.j     // Catch: java.io.IOException -> L37
            long r3 = r3 - r5
            long r1 = java.lang.Math.min(r1, r3)     // Catch: java.io.IOException -> L37
            int r1 = (int) r1     // Catch: java.io.IOException -> L37
            java.io.OutputStream r2 = r7.h     // Catch: java.io.IOException -> L37
            int r3 = r9 + r0
            r2.write(r8, r3, r1)     // Catch: java.io.IOException -> L37
            int r0 = r0 + r1
            long r2 = r7.j     // Catch: java.io.IOException -> L37
            long r4 = (long) r1     // Catch: java.io.IOException -> L37
            long r2 = r2 + r4
            r7.j = r2     // Catch: java.io.IOException -> L37
            long r1 = r7.k     // Catch: java.io.IOException -> L37
            long r1 = r1 + r4
            r7.k = r1     // Catch: java.io.IOException -> L37
            goto L6
        L37:
            r8 = move-exception
            com.tkay.expressad.exoplayer.j.a.b$a r9 = new com.tkay.expressad.exoplayer.j.a.b$a
            r9.<init>(r8)
            throw r9
        L3e:
            return
    }
}
