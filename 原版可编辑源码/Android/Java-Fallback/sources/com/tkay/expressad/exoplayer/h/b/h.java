package com.tkay.expressad.exoplayer.h.b;

public final class h extends com.tkay.expressad.exoplayer.h.b.a {
    private final int k;
    private final long l;
    private final com.tkay.expressad.exoplayer.h.b.d m;
    private volatile int n;
    private volatile boolean o;
    private volatile boolean p;

    private h(com.tkay.expressad.exoplayer.j.h r4, com.tkay.expressad.exoplayer.j.k r5, com.tkay.expressad.exoplayer.m r6, int r7, java.lang.Object r8, long r9, long r11, long r13, long r15, int r17, long r18, com.tkay.expressad.exoplayer.h.b.d r20) {
            r3 = this;
            r0 = r3
            r3.<init>(r4, r5, r6, r7, r8, r9, r11, r13, r15)
            r1 = r17
            r0.k = r1
            r1 = r18
            r0.l = r1
            r1 = r20
            r0.m = r1
            return
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 1
            r1.o = r0
            return
    }

    @Override
    public final void b() {
            r8 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r8.b
            int r1 = r8.n
            long r1 = (long) r1
            com.tkay.expressad.exoplayer.j.k r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.e.b r7 = new com.tkay.expressad.exoplayer.e.b     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.j.h r2 = r8.i     // Catch: java.lang.Throwable -> L79
            long r3 = r0.e     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.j.h r1 = r8.i     // Catch: java.lang.Throwable -> L79
            long r5 = r1.a(r0)     // Catch: java.lang.Throwable -> L79
            r1 = r7
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L79
            int r0 = r8.n     // Catch: java.lang.Throwable -> L79
            if (r0 != 0) goto L3e
            com.tkay.expressad.exoplayer.h.b.b r0 = r8.c()     // Catch: java.lang.Throwable -> L79
            long r1 = r8.l     // Catch: java.lang.Throwable -> L79
            r0.a(r1)     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.h.b.d r1 = r8.m     // Catch: java.lang.Throwable -> L79
            long r2 = r8.a     // Catch: java.lang.Throwable -> L79
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L36
            r2 = 0
            goto L3b
        L36:
            long r2 = r8.a     // Catch: java.lang.Throwable -> L79
            long r4 = r8.l     // Catch: java.lang.Throwable -> L79
            long r2 = r2 - r4
        L3b:
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L79
        L3e:
            com.tkay.expressad.exoplayer.h.b.d r0 = r8.m     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.e.e r0 = r0.a     // Catch: java.lang.Throwable -> L6b
            r1 = 0
            r2 = r1
        L44:
            if (r2 != 0) goto L50
            boolean r3 = r8.o     // Catch: java.lang.Throwable -> L6b
            if (r3 != 0) goto L50
            r2 = 0
            int r2 = r0.a(r7, r2)     // Catch: java.lang.Throwable -> L6b
            goto L44
        L50:
            r0 = 1
            if (r2 == r0) goto L54
            r1 = r0
        L54:
            com.tkay.expressad.exoplayer.k.a.b(r1)     // Catch: java.lang.Throwable -> L6b
            long r1 = r7.c()     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.j.k r3 = r8.b     // Catch: java.lang.Throwable -> L79
            long r3 = r3.e     // Catch: java.lang.Throwable -> L79
            long r1 = r1 - r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L79
            r8.n = r1     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.j.h r1 = r8.i
            com.tkay.expressad.exoplayer.k.af.a(r1)
            r8.p = r0
            return
        L6b:
            r0 = move-exception
            long r1 = r7.c()     // Catch: java.lang.Throwable -> L79
            com.tkay.expressad.exoplayer.j.k r3 = r8.b     // Catch: java.lang.Throwable -> L79
            long r3 = r3.e     // Catch: java.lang.Throwable -> L79
            long r1 = r1 - r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L79
            r8.n = r1     // Catch: java.lang.Throwable -> L79
            throw r0     // Catch: java.lang.Throwable -> L79
        L79:
            r0 = move-exception
            com.tkay.expressad.exoplayer.j.h r1 = r8.i
            com.tkay.expressad.exoplayer.k.af.a(r1)
            throw r0
    }

    @Override
    public final long d() {
            r2 = this;
            int r0 = r2.n
            long r0 = (long) r0
            return r0
    }

    @Override
    public final long e() {
            r4 = this;
            long r0 = r4.j
            int r2 = r4.k
            long r2 = (long) r2
            long r0 = r0 + r2
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            boolean r0 = r1.p
            return r0
    }
}
