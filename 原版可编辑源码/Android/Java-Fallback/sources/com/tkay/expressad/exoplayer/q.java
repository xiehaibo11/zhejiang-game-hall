package com.tkay.expressad.exoplayer;

final class q {
    private static final java.lang.String l = "MediaPeriodHolder";
    public final com.tkay.expressad.exoplayer.h.r a;
    public final java.lang.Object b;
    public final com.tkay.expressad.exoplayer.h.y[] c;
    public final boolean[] d;
    public long e;
    public boolean f;
    public boolean g;
    public com.tkay.expressad.exoplayer.r h;
    public com.tkay.expressad.exoplayer.q i;
    public com.tkay.expressad.exoplayer.h.af j;
    public com.tkay.expressad.exoplayer.i.i k;
    private final com.tkay.expressad.exoplayer.z[] m;
    private final com.tkay.expressad.exoplayer.i.h n;
    private final com.tkay.expressad.exoplayer.h.s o;
    private com.tkay.expressad.exoplayer.i.i p;

    public q(com.tkay.expressad.exoplayer.z[] r3, long r4, com.tkay.expressad.exoplayer.i.h r6, com.tkay.expressad.exoplayer.j.b r7, com.tkay.expressad.exoplayer.h.s r8, java.lang.Object r9, com.tkay.expressad.exoplayer.r r10) {
            r2 = this;
            r2.<init>()
            r2.m = r3
            long r0 = r10.b
            long r4 = r4 - r0
            r2.e = r4
            r2.n = r6
            r2.o = r8
            java.lang.Object r4 = com.tkay.expressad.exoplayer.k.a.a(r9)
            r2.b = r4
            r2.h = r10
            int r4 = r3.length
            com.tkay.expressad.exoplayer.h.y[] r4 = new com.tkay.expressad.exoplayer.h.y[r4]
            r2.c = r4
            int r3 = r3.length
            boolean[] r3 = new boolean[r3]
            r2.d = r3
            com.tkay.expressad.exoplayer.h.s$a r3 = r10.a
            com.tkay.expressad.exoplayer.h.r r5 = r8.a(r3, r7)
            long r3 = r10.c
            r6 = -9223372036854775808
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 == 0) goto L3a
            com.tkay.expressad.exoplayer.h.d r3 = new com.tkay.expressad.exoplayer.h.d
            r6 = 1
            r7 = 0
            long r9 = r10.c
            r4 = r3
            r4.<init>(r5, r6, r7, r9)
            r5 = r3
        L3a:
            r2.a = r5
            return
    }

    private void a(com.tkay.expressad.exoplayer.i.i r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.i r0 = r1.p
            if (r0 == 0) goto L7
            c(r0)
        L7:
            r1.p = r2
            if (r2 == 0) goto Le
            b(r2)
        Le:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.y[] r4) {
            r3 = this;
            r0 = 0
        L1:
            com.tkay.expressad.exoplayer.z[] r1 = r3.m
            int r2 = r1.length
            if (r0 >= r2) goto L15
            r1 = r1[r0]
            int r1 = r1.a()
            r2 = 5
            if (r1 != r2) goto L12
            r1 = 0
            r4[r0] = r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            return
    }

    private void b(float r15) {
            r14 = this;
            r0 = 1
            r14.f = r0
            com.tkay.expressad.exoplayer.h.r r0 = r14.a
            com.tkay.expressad.exoplayer.h.af r0 = r0.b()
            r14.j = r0
            r14.a(r15)
            com.tkay.expressad.exoplayer.r r15 = r14.h
            long r0 = r15.b
            long r4 = r14.b(r0)
            long r0 = r14.e
            com.tkay.expressad.exoplayer.r r15 = r14.h
            long r2 = r15.b
            long r2 = r2 - r4
            long r0 = r0 + r2
            r14.e = r0
            com.tkay.expressad.exoplayer.r r15 = r14.h
            com.tkay.expressad.exoplayer.r r0 = new com.tkay.expressad.exoplayer.r
            com.tkay.expressad.exoplayer.h.s$a r3 = r15.a
            long r6 = r15.c
            long r8 = r15.d
            long r10 = r15.e
            boolean r12 = r15.f
            boolean r13 = r15.g
            r2 = r0
            r2.<init>(r3, r4, r6, r8, r10, r12, r13)
            r14.h = r0
            return
    }

    private static void b(com.tkay.expressad.exoplayer.i.i r3) {
            r0 = 0
        L1:
            int r1 = r3.a
            if (r0 >= r1) goto L19
            boolean r1 = r3.a(r0)
            com.tkay.expressad.exoplayer.i.g r2 = r3.c
            com.tkay.expressad.exoplayer.i.f r2 = r2.a(r0)
            if (r1 == 0) goto L16
            if (r2 == 0) goto L16
            r2.a()
        L16:
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    private void b(com.tkay.expressad.exoplayer.h.y[] r4) {
            r3 = this;
            r0 = 0
        L1:
            com.tkay.expressad.exoplayer.z[] r1 = r3.m
            int r2 = r1.length
            if (r0 >= r2) goto L21
            r1 = r1[r0]
            int r1 = r1.a()
            r2 = 5
            if (r1 != r2) goto L1e
            com.tkay.expressad.exoplayer.i.i r1 = r3.k
            boolean r1 = r1.a(r0)
            if (r1 == 0) goto L1e
            com.tkay.expressad.exoplayer.h.m r1 = new com.tkay.expressad.exoplayer.h.m
            r1.<init>()
            r4[r0] = r1
        L1e:
            int r0 = r0 + 1
            goto L1
        L21:
            return
    }

    private long c(long r3) {
            r2 = this;
            long r0 = r2.e
            long r3 = r3 + r0
            return r3
    }

    private static void c(com.tkay.expressad.exoplayer.i.i r2) {
            r0 = 0
        L1:
            int r1 = r2.a
            if (r0 >= r1) goto L10
            r2.a(r0)
            com.tkay.expressad.exoplayer.i.g r1 = r2.c
            r1.a(r0)
            int r0 = r0 + 1
            goto L1
        L10:
            return
    }

    private long d() {
            r2 = this;
            long r0 = r2.e
            return r0
    }

    private long d(long r3) {
            r2 = this;
            long r0 = r2.e
            long r3 = r3 - r0
            return r3
    }

    private long e() {
            r2 = this;
            com.tkay.expressad.exoplayer.r r0 = r2.h
            long r0 = r0.e
            return r0
    }

    private void e(long r4) {
            r3 = this;
            boolean r0 = r3.f
            if (r0 == 0) goto Lc
            com.tkay.expressad.exoplayer.h.r r0 = r3.a
            long r1 = r3.e
            long r4 = r4 - r1
            r0.a_(r4)
        Lc:
            return
    }

    public final long a(long r12, boolean r14, boolean[] r15) {
            r11 = this;
            r0 = 0
            r1 = r0
        L2:
            com.tkay.expressad.exoplayer.i.i r2 = r11.k
            int r2 = r2.a
            r3 = 1
            if (r1 >= r2) goto L1e
            boolean[] r2 = r11.d
            if (r14 != 0) goto L18
            com.tkay.expressad.exoplayer.i.i r4 = r11.k
            com.tkay.expressad.exoplayer.i.i r5 = r11.p
            boolean r4 = r4.a(r5, r1)
            if (r4 == 0) goto L18
            goto L19
        L18:
            r3 = r0
        L19:
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2
        L1e:
            com.tkay.expressad.exoplayer.h.y[] r14 = r11.c
            r11.a(r14)
            com.tkay.expressad.exoplayer.i.i r14 = r11.k
            r11.a(r14)
            com.tkay.expressad.exoplayer.i.i r14 = r11.k
            com.tkay.expressad.exoplayer.i.g r14 = r14.c
            com.tkay.expressad.exoplayer.h.r r4 = r11.a
            com.tkay.expressad.exoplayer.i.f[] r5 = r14.a()
            boolean[] r6 = r11.d
            com.tkay.expressad.exoplayer.h.y[] r7 = r11.c
            r8 = r15
            r9 = r12
            long r12 = r4.a(r5, r6, r7, r8, r9)
            com.tkay.expressad.exoplayer.h.y[] r15 = r11.c
            r11.b(r15)
            r11.g = r0
            r15 = r0
        L44:
            com.tkay.expressad.exoplayer.h.y[] r1 = r11.c
            int r2 = r1.length
            if (r15 >= r2) goto L73
            r1 = r1[r15]
            if (r1 == 0) goto L64
            com.tkay.expressad.exoplayer.i.i r1 = r11.k
            boolean r1 = r1.a(r15)
            com.tkay.expressad.exoplayer.k.a.b(r1)
            com.tkay.expressad.exoplayer.z[] r1 = r11.m
            r1 = r1[r15]
            int r1 = r1.a()
            r2 = 5
            if (r1 == r2) goto L70
            r11.g = r3
            goto L70
        L64:
            com.tkay.expressad.exoplayer.i.f r1 = r14.a(r15)
            if (r1 != 0) goto L6c
            r1 = r3
            goto L6d
        L6c:
            r1 = r0
        L6d:
            com.tkay.expressad.exoplayer.k.a.b(r1)
        L70:
            int r15 = r15 + 1
            goto L44
        L73:
            return r12
    }

    public final long a(boolean r5) {
            r4 = this;
            boolean r0 = r4.f
            if (r0 != 0) goto L9
            com.tkay.expressad.exoplayer.r r5 = r4.h
            long r0 = r5.b
            return r0
        L9:
            com.tkay.expressad.exoplayer.h.r r0 = r4.a
            long r0 = r0.d()
            r2 = -9223372036854775808
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L1b
            if (r5 == 0) goto L1b
            com.tkay.expressad.exoplayer.r r5 = r4.h
            long r0 = r5.e
        L1b:
            return r0
    }

    public final void a(long r3) {
            r2 = this;
            long r0 = r2.e
            long r3 = r3 - r0
            com.tkay.expressad.exoplayer.h.r r0 = r2.a
            r0.c(r3)
            return
    }

    public final boolean a() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L16
            boolean r0 = r4.g
            if (r0 == 0) goto L14
            com.tkay.expressad.exoplayer.h.r r0 = r4.a
            long r0 = r0.d()
            r2 = -9223372036854775808
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L16
        L14:
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public final boolean a(float r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.i.h r0 = r4.n
            com.tkay.expressad.exoplayer.z[] r1 = r4.m
            com.tkay.expressad.exoplayer.h.af r2 = r4.j
            com.tkay.expressad.exoplayer.i.i r0 = r0.a(r1, r2)
            com.tkay.expressad.exoplayer.i.i r1 = r4.p
            boolean r1 = r0.a(r1)
            r2 = 0
            if (r1 == 0) goto L14
            return r2
        L14:
            r4.k = r0
            com.tkay.expressad.exoplayer.i.g r0 = r0.c
            com.tkay.expressad.exoplayer.i.f[] r0 = r0.a()
            int r1 = r0.length
        L1d:
            if (r2 >= r1) goto L29
            r3 = r0[r2]
            if (r3 == 0) goto L26
            r3.a(r5)
        L26:
            int r2 = r2 + 1
            goto L1d
        L29:
            r5 = 1
            return r5
    }

    public final long b() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 != 0) goto L7
            r0 = 0
            return r0
        L7:
            com.tkay.expressad.exoplayer.h.r r0 = r2.a
            long r0 = r0.e()
            return r0
    }

    public final long b(long r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.z[] r0 = r2.m
            int r0 = r0.length
            boolean[] r0 = new boolean[r0]
            r1 = 0
            long r3 = r2.a(r3, r1, r0)
            return r3
    }

    public final void c() {
            r4 = this;
            r0 = 0
            r4.a(r0)
            com.tkay.expressad.exoplayer.r r0 = r4.h     // Catch: java.lang.RuntimeException -> L22
            long r0 = r0.c     // Catch: java.lang.RuntimeException -> L22
            r2 = -9223372036854775808
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1a
            com.tkay.expressad.exoplayer.h.s r0 = r4.o     // Catch: java.lang.RuntimeException -> L22
            com.tkay.expressad.exoplayer.h.r r1 = r4.a     // Catch: java.lang.RuntimeException -> L22
            com.tkay.expressad.exoplayer.h.d r1 = (com.tkay.expressad.exoplayer.h.d) r1     // Catch: java.lang.RuntimeException -> L22
            com.tkay.expressad.exoplayer.h.r r1 = r1.a     // Catch: java.lang.RuntimeException -> L22
            r0.a(r1)     // Catch: java.lang.RuntimeException -> L22
            return
        L1a:
            com.tkay.expressad.exoplayer.h.s r0 = r4.o     // Catch: java.lang.RuntimeException -> L22
            com.tkay.expressad.exoplayer.h.r r1 = r4.a     // Catch: java.lang.RuntimeException -> L22
            r0.a(r1)     // Catch: java.lang.RuntimeException -> L22
            return
        L22:
            r0 = move-exception
            java.lang.String r1 = "MediaPeriodHolder"
            java.lang.String r2 = "Period release failed."
            android.util.Log.e(r1, r2, r0)
            return
    }
}
