package com.tkay.expressad.exoplayer.h.b;

public final class j extends com.tkay.expressad.exoplayer.h.b.a {
    private final int k;
    private final com.tkay.expressad.exoplayer.m l;
    private volatile int m;
    private volatile boolean n;

    private j(com.tkay.expressad.exoplayer.j.h r16, com.tkay.expressad.exoplayer.j.k r17, com.tkay.expressad.exoplayer.m r18, int r19, java.lang.Object r20, long r21, long r23, long r25, int r27, com.tkay.expressad.exoplayer.m r28) {
            r15 = this;
            r14 = r15
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r8 = r23
            r12 = r25
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r10, r12)
            r0 = r27
            r14.k = r0
            r0 = r28
            r14.l = r0
            return
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void b() {
            r11 = this;
            com.tkay.expressad.exoplayer.j.k r0 = r11.b
            int r1 = r11.m
            long r1 = (long) r1
            com.tkay.expressad.exoplayer.j.k r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.j.h r1 = r11.i     // Catch: java.lang.Throwable -> L5d
            long r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L5d
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L19
            int r2 = r11.m     // Catch: java.lang.Throwable -> L5d
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L5d
            long r0 = r0 + r2
        L19:
            r5 = r0
            com.tkay.expressad.exoplayer.e.b r0 = new com.tkay.expressad.exoplayer.e.b     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.exoplayer.j.h r2 = r11.i     // Catch: java.lang.Throwable -> L5d
            int r1 = r11.m     // Catch: java.lang.Throwable -> L5d
            long r3 = (long) r1     // Catch: java.lang.Throwable -> L5d
            r1 = r0
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.exoplayer.h.b.b r1 = r11.c()     // Catch: java.lang.Throwable -> L5d
            r2 = 0
            r1.a(r2)     // Catch: java.lang.Throwable -> L5d
            int r2 = r11.k     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.exoplayer.e.m r3 = r1.a(r2)     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.exoplayer.m r1 = r11.l     // Catch: java.lang.Throwable -> L5d
            r3.a(r1)     // Catch: java.lang.Throwable -> L5d
            r1 = 0
        L3a:
            r2 = -1
            r10 = 1
            if (r1 == r2) goto L4b
            int r2 = r11.m     // Catch: java.lang.Throwable -> L5d
            int r2 = r2 + r1
            r11.m = r2     // Catch: java.lang.Throwable -> L5d
            r1 = 2147483647(0x7fffffff, float:NaN)
            int r1 = r3.a(r0, r1, r10)     // Catch: java.lang.Throwable -> L5d
            goto L3a
        L4b:
            int r7 = r11.m     // Catch: java.lang.Throwable -> L5d
            long r4 = r11.g     // Catch: java.lang.Throwable -> L5d
            r6 = 1
            r8 = 0
            r9 = 0
            r3.a(r4, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.exoplayer.j.h r0 = r11.i
            com.tkay.expressad.exoplayer.k.af.a(r0)
            r11.n = r10
            return
        L5d:
            r0 = move-exception
            com.tkay.expressad.exoplayer.j.h r1 = r11.i
            com.tkay.expressad.exoplayer.k.af.a(r1)
            throw r0
    }

    @Override
    public final long d() {
            r2 = this;
            int r0 = r2.m
            long r0 = (long) r0
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }
}
