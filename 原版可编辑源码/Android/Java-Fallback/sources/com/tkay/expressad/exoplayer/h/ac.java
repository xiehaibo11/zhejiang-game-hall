package com.tkay.expressad.exoplayer.h;

final class ac implements com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.j.t.a<com.tkay.expressad.exoplayer.h.ac.b> {
    private static final int i = 1024;
    final com.tkay.expressad.exoplayer.j.t a;
    final com.tkay.expressad.exoplayer.m b;
    final boolean c;
    boolean d;
    boolean e;
    boolean f;
    byte[] g;
    int h;
    private final com.tkay.expressad.exoplayer.j.k j;
    private final com.tkay.expressad.exoplayer.j.h.a k;
    private final int l;
    private final com.tkay.expressad.exoplayer.h.t.a m;
    private final com.tkay.expressad.exoplayer.h.af n;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.ac.a> o;
    private final long p;
    private int q;

    static class 1 {
    }

    private final class a implements com.tkay.expressad.exoplayer.h.y {
        private static final int b = 0;
        private static final int c = 1;
        private static final int d = 2;
        final com.tkay.expressad.exoplayer.h.ac a;
        private int e;
        private boolean f;

        private a(com.tkay.expressad.exoplayer.h.ac r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.expressad.exoplayer.h.ac r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private void d() {
                r8 = this;
                boolean r0 = r8.f
                if (r0 != 0) goto L22
                com.tkay.expressad.exoplayer.h.ac r0 = r8.a
                com.tkay.expressad.exoplayer.h.t$a r1 = com.tkay.expressad.exoplayer.h.ac.a(r0)
                com.tkay.expressad.exoplayer.h.ac r0 = r8.a
                com.tkay.expressad.exoplayer.m r0 = r0.b
                java.lang.String r0 = r0.h
                int r2 = com.tkay.expressad.exoplayer.k.o.d(r0)
                com.tkay.expressad.exoplayer.h.ac r0 = r8.a
                com.tkay.expressad.exoplayer.m r3 = r0.b
                r4 = 0
                r5 = 0
                r6 = 0
                r1.a(r2, r3, r4, r5, r6)
                r0 = 1
                r8.f = r0
            L22:
                return
        }

        @Override
        public final int a(long r3) {
                r2 = this;
                r0 = 0
                int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r3 <= 0) goto L12
                int r3 = r2.e
                r4 = 2
                if (r3 == r4) goto L12
                r2.e = r4
                r2.d()
                r3 = 1
                return r3
            L12:
                r3 = 0
                return r3
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.n r8, com.tkay.expressad.exoplayer.c.e r9, boolean r10) {
                r7 = this;
                int r0 = r7.e
                r1 = -4
                r2 = 4
                r3 = 2
                if (r0 != r3) goto Lb
                r9.b(r2)
                return r1
            Lb:
                r4 = 1
                if (r10 != 0) goto L45
                if (r0 != 0) goto L11
                goto L45
            L11:
                com.tkay.expressad.exoplayer.h.ac r8 = r7.a
                boolean r8 = r8.e
                if (r8 == 0) goto L43
                com.tkay.expressad.exoplayer.h.ac r8 = r7.a
                boolean r8 = r8.f
                if (r8 == 0) goto L3d
                r5 = 0
                r9.f = r5
                r9.b(r4)
                com.tkay.expressad.exoplayer.h.ac r8 = r7.a
                int r8 = r8.h
                r9.d(r8)
                java.nio.ByteBuffer r8 = r9.e
                com.tkay.expressad.exoplayer.h.ac r9 = r7.a
                byte[] r9 = r9.g
                r10 = 0
                com.tkay.expressad.exoplayer.h.ac r0 = r7.a
                int r0 = r0.h
                r8.put(r9, r10, r0)
                r7.d()
                goto L40
            L3d:
                r9.b(r2)
            L40:
                r7.e = r3
                return r1
            L43:
                r8 = -3
                return r8
            L45:
                com.tkay.expressad.exoplayer.h.ac r9 = r7.a
                com.tkay.expressad.exoplayer.m r9 = r9.b
                r8.a = r9
                r7.e = r4
                r8 = -5
                return r8
        }

        public final void a() {
                r2 = this;
                int r0 = r2.e
                r1 = 2
                if (r0 != r1) goto L8
                r0 = 1
                r2.e = r0
            L8:
                return
        }

        @Override
        public final boolean b() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.ac r0 = r1.a
                boolean r0 = r0.e
                return r0
        }

        @Override
        public final void c() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.ac r0 = r1.a
                boolean r0 = r0.c
                if (r0 != 0) goto Ld
                com.tkay.expressad.exoplayer.h.ac r0 = r1.a
                com.tkay.expressad.exoplayer.j.t r0 = r0.a
                r0.c()
            Ld:
                return
        }
    }

    static final class b implements com.tkay.expressad.exoplayer.j.t.c {
        public final com.tkay.expressad.exoplayer.j.k a;
        private final com.tkay.expressad.exoplayer.j.h b;
        private int c;
        private byte[] d;

        public b(com.tkay.expressad.exoplayer.j.k r1, com.tkay.expressad.exoplayer.j.h r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        static int a(com.tkay.expressad.exoplayer.h.ac.b r0) {
                int r0 = r0.c
                return r0
        }

        static byte[] b(com.tkay.expressad.exoplayer.h.ac.b r0) {
                byte[] r0 = r0.d
                return r0
        }

        @Override
        public final void a() {
                r0 = this;
                return
        }

        @Override
        public final void b() {
                r5 = this;
                r0 = 0
                r5.c = r0
                com.tkay.expressad.exoplayer.j.h r1 = r5.b     // Catch: java.lang.Throwable -> L46
                com.tkay.expressad.exoplayer.j.k r2 = r5.a     // Catch: java.lang.Throwable -> L46
                r1.a(r2)     // Catch: java.lang.Throwable -> L46
            La:
                r1 = -1
                if (r0 == r1) goto L40
                int r1 = r5.c     // Catch: java.lang.Throwable -> L46
                int r1 = r1 + r0
                r5.c = r1     // Catch: java.lang.Throwable -> L46
                byte[] r0 = r5.d     // Catch: java.lang.Throwable -> L46
                if (r0 != 0) goto L1d
                r0 = 1024(0x400, float:1.435E-42)
                byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L46
                r5.d = r0     // Catch: java.lang.Throwable -> L46
                goto L2f
            L1d:
                byte[] r0 = r5.d     // Catch: java.lang.Throwable -> L46
                int r0 = r0.length     // Catch: java.lang.Throwable -> L46
                if (r1 != r0) goto L2f
                byte[] r0 = r5.d     // Catch: java.lang.Throwable -> L46
                byte[] r1 = r5.d     // Catch: java.lang.Throwable -> L46
                int r1 = r1.length     // Catch: java.lang.Throwable -> L46
                int r1 = r1 * 2
                byte[] r0 = java.util.Arrays.copyOf(r0, r1)     // Catch: java.lang.Throwable -> L46
                r5.d = r0     // Catch: java.lang.Throwable -> L46
            L2f:
                com.tkay.expressad.exoplayer.j.h r0 = r5.b     // Catch: java.lang.Throwable -> L46
                byte[] r1 = r5.d     // Catch: java.lang.Throwable -> L46
                int r2 = r5.c     // Catch: java.lang.Throwable -> L46
                byte[] r3 = r5.d     // Catch: java.lang.Throwable -> L46
                int r3 = r3.length     // Catch: java.lang.Throwable -> L46
                int r4 = r5.c     // Catch: java.lang.Throwable -> L46
                int r3 = r3 - r4
                int r0 = r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L46
                goto La
            L40:
                com.tkay.expressad.exoplayer.j.h r0 = r5.b
                com.tkay.expressad.exoplayer.k.af.a(r0)
                return
            L46:
                r0 = move-exception
                com.tkay.expressad.exoplayer.j.h r1 = r5.b
                com.tkay.expressad.exoplayer.k.af.a(r1)
                throw r0
        }
    }

    public ac(com.tkay.expressad.exoplayer.j.k r1, com.tkay.expressad.exoplayer.j.h.a r2, com.tkay.expressad.exoplayer.m r3, long r4, int r6, com.tkay.expressad.exoplayer.h.t.a r7, boolean r8) {
            r0 = this;
            r0.<init>()
            r0.j = r1
            r0.k = r2
            r0.b = r3
            r0.p = r4
            r0.l = r6
            r0.m = r7
            r0.c = r8
            com.tkay.expressad.exoplayer.h.af r1 = new com.tkay.expressad.exoplayer.h.af
            r2 = 1
            com.tkay.expressad.exoplayer.h.ae[] r4 = new com.tkay.expressad.exoplayer.h.ae[r2]
            com.tkay.expressad.exoplayer.h.ae r5 = new com.tkay.expressad.exoplayer.h.ae
            com.tkay.expressad.exoplayer.m[] r2 = new com.tkay.expressad.exoplayer.m[r2]
            r6 = 0
            r2[r6] = r3
            r5.<init>(r2)
            r4[r6] = r5
            r1.<init>(r4)
            r0.n = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.o = r1
            com.tkay.expressad.exoplayer.j.t r1 = new com.tkay.expressad.exoplayer.j.t
            java.lang.String r2 = "Loader:SingleSampleMediaPeriod"
            r1.<init>(r2)
            r0.a = r1
            r7.a()
            return
    }

    private int a(com.tkay.expressad.exoplayer.h.ac.b r25, long r26, long r28, java.io.IOException r30) {
            r24 = this;
            r0 = r24
            int r1 = r0.q
            r2 = 1
            int r1 = r1 + r2
            r0.q = r1
            boolean r3 = r0.c
            r4 = 0
            if (r3 == 0) goto L13
            int r3 = r0.l
            if (r1 < r3) goto L13
            r1 = r2
            goto L14
        L13:
            r1 = r4
        L14:
            com.tkay.expressad.exoplayer.h.t$a r5 = r0.m
            r3 = r25
            com.tkay.expressad.exoplayer.j.k r6 = r3.a
            r7 = 1
            r8 = -1
            com.tkay.expressad.exoplayer.m r9 = r0.b
            r10 = 0
            r11 = 0
            r12 = 0
            long r14 = r0.p
            int r3 = com.tkay.expressad.exoplayer.h.ac.b.a(r25)
            long r2 = (long) r3
            r20 = r2
            r16 = r26
            r18 = r28
            r22 = r30
            r23 = r1
            r5.a(r6, r7, r8, r9, r10, r11, r12, r14, r16, r18, r20, r22, r23)
            if (r1 == 0) goto L3d
            r1 = 1
            r0.e = r1
            r1 = 2
            return r1
        L3d:
            return r4
    }

    static com.tkay.expressad.exoplayer.h.t.a a(com.tkay.expressad.exoplayer.h.ac r0) {
            com.tkay.expressad.exoplayer.h.t$a r0 = r0.m
            return r0
    }

    private void a(com.tkay.expressad.exoplayer.h.ac.b r21, long r22, long r24) {
            r20 = this;
            r0 = r20
            r12 = r22
            r14 = r24
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.m
            r8 = r21
            com.tkay.expressad.exoplayer.j.k r2 = r8.a
            com.tkay.expressad.exoplayer.m r5 = r0.b
            long r10 = r0.p
            int r3 = com.tkay.expressad.exoplayer.h.ac.b.a(r21)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r6 = 0
            r7 = 0
            r18 = 0
            r8 = r18
            r1.a(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            int r1 = com.tkay.expressad.exoplayer.h.ac.b.a(r21)
            r0.h = r1
            byte[] r1 = com.tkay.expressad.exoplayer.h.ac.b.b(r21)
            r0.g = r1
            r1 = 1
            r0.e = r1
            r0.f = r1
            return
    }

    private void b(com.tkay.expressad.exoplayer.h.ac.b r19, long r20, long r22) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.m
            r3 = r19
            com.tkay.expressad.exoplayer.j.k r2 = r3.a
            long r10 = r0.p
            int r3 = com.tkay.expressad.exoplayer.h.ac.b.a(r19)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r1.b(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            return
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.j.t.c r26, long r27, long r29, java.io.IOException r31) {
            r25 = this;
            r0 = r25
            r1 = r26
            com.tkay.expressad.exoplayer.h.ac$b r1 = (com.tkay.expressad.exoplayer.h.ac.b) r1
            int r2 = r0.q
            r3 = 1
            int r2 = r2 + r3
            r0.q = r2
            boolean r4 = r0.c
            r5 = 0
            if (r4 == 0) goto L17
            int r4 = r0.l
            if (r2 < r4) goto L17
            r2 = r3
            goto L18
        L17:
            r2 = r5
        L18:
            com.tkay.expressad.exoplayer.h.t$a r6 = r0.m
            com.tkay.expressad.exoplayer.j.k r7 = r1.a
            r8 = 1
            r9 = -1
            com.tkay.expressad.exoplayer.m r10 = r0.b
            r11 = 0
            r12 = 0
            r13 = 0
            long r3 = r0.p
            r15 = r3
            int r1 = com.tkay.expressad.exoplayer.h.ac.b.a(r1)
            long r3 = (long) r1
            r21 = r3
            r17 = r27
            r19 = r29
            r23 = r31
            r24 = r2
            r6.a(r7, r8, r9, r10, r11, r12, r13, r15, r17, r19, r21, r23, r24)
            if (r2 == 0) goto L40
            r1 = 1
            r0.e = r1
            r1 = 2
            return r1
        L40:
            return r5
    }

    @Override
    public final long a(long r1, com.tkay.expressad.exoplayer.ac r3) {
            r0 = this;
            return r1
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.i.f[] r5, boolean[] r6, com.tkay.expressad.exoplayer.h.y[] r7, boolean[] r8, long r9) {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r5.length
            if (r1 >= r2) goto L35
            r2 = r7[r1]
            if (r2 == 0) goto L1b
            r2 = r5[r1]
            if (r2 == 0) goto L11
            boolean r2 = r6[r1]
            if (r2 != 0) goto L1b
        L11:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.ac$a> r2 = r4.o
            r3 = r7[r1]
            r2.remove(r3)
            r2 = 0
            r7[r1] = r2
        L1b:
            r2 = r7[r1]
            if (r2 != 0) goto L32
            r2 = r5[r1]
            if (r2 == 0) goto L32
            com.tkay.expressad.exoplayer.h.ac$a r2 = new com.tkay.expressad.exoplayer.h.ac$a
            r2.<init>(r4, r0)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.ac$a> r3 = r4.o
            r3.add(r2)
            r7[r1] = r2
            r2 = 1
            r8[r1] = r2
        L32:
            int r1 = r1 + 1
            goto L2
        L35:
            return r9
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void a(long r1, boolean r3) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r.a r1, long r2) {
            r0 = this;
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r22, long r23, long r25) {
            r21 = this;
            r0 = r21
            r12 = r23
            r14 = r25
            r8 = r22
            com.tkay.expressad.exoplayer.h.ac$b r8 = (com.tkay.expressad.exoplayer.h.ac.b) r8
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.m
            com.tkay.expressad.exoplayer.j.k r2 = r8.a
            com.tkay.expressad.exoplayer.m r5 = r0.b
            long r10 = r0.p
            int r3 = com.tkay.expressad.exoplayer.h.ac.b.a(r8)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r6 = 0
            r7 = 0
            r18 = 0
            r20 = r8
            r8 = r18
            r1.a(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            int r1 = com.tkay.expressad.exoplayer.h.ac.b.a(r20)
            r0.h = r1
            byte[] r1 = com.tkay.expressad.exoplayer.h.ac.b.b(r20)
            r0.g = r1
            r1 = 1
            r0.e = r1
            r0.f = r1
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r19, long r20, long r22, boolean r24) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            r3 = r19
            com.tkay.expressad.exoplayer.h.ac$b r3 = (com.tkay.expressad.exoplayer.h.ac.b) r3
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.m
            com.tkay.expressad.exoplayer.j.k r2 = r3.a
            long r10 = r0.p
            int r3 = com.tkay.expressad.exoplayer.h.ac.b.a(r3)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r1.b(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            return
    }

    @Override
    public final void a_(long r1) {
            r0 = this;
            return
    }

    @Override
    public final long b(long r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.ac$a> r1 = r2.o
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.ac$a> r1 = r2.o
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.h.ac$a r1 = (com.tkay.expressad.exoplayer.h.ac.a) r1
            r1.a()
            int r0 = r0 + 1
            goto L1
        L17:
            return r3
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.af r0 = r1.n
            return r0
    }

    @Override
    public final long c() {
            r2 = this;
            boolean r0 = r2.d
            if (r0 != 0) goto Lc
            com.tkay.expressad.exoplayer.h.t$a r0 = r2.m
            r0.c()
            r0 = 1
            r2.d = r0
        Lc:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    @Override
    public final boolean c(long r18) {
            r17 = this;
            r0 = r17
            boolean r1 = r0.e
            if (r1 != 0) goto L37
            com.tkay.expressad.exoplayer.j.t r1 = r0.a
            boolean r1 = r1.a()
            if (r1 == 0) goto Lf
            goto L37
        Lf:
            com.tkay.expressad.exoplayer.j.t r1 = r0.a
            com.tkay.expressad.exoplayer.h.ac$b r2 = new com.tkay.expressad.exoplayer.h.ac$b
            com.tkay.expressad.exoplayer.j.k r3 = r0.j
            com.tkay.expressad.exoplayer.j.h$a r4 = r0.k
            com.tkay.expressad.exoplayer.j.h r4 = r4.a()
            r2.<init>(r3, r4)
            int r3 = r0.l
            long r15 = r1.a(r2, r0, r3)
            com.tkay.expressad.exoplayer.h.t$a r4 = r0.m
            com.tkay.expressad.exoplayer.j.k r5 = r0.j
            r6 = 1
            r7 = -1
            com.tkay.expressad.exoplayer.m r8 = r0.b
            r9 = 0
            r10 = 0
            r11 = 0
            long r13 = r0.p
            r4.a(r5, r6, r7, r8, r9, r10, r11, r13, r15)
            r1 = 1
            return r1
        L37:
            r1 = 0
            return r1
    }

    @Override
    public final long d() {
            r2 = this;
            boolean r0 = r2.e
            if (r0 == 0) goto L7
            r0 = -9223372036854775808
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public final long e() {
            r2 = this;
            boolean r0 = r2.e
            if (r0 != 0) goto L10
            com.tkay.expressad.exoplayer.j.t r0 = r2.a
            boolean r0 = r0.a()
            if (r0 == 0) goto Ld
            goto L10
        Ld:
            r0 = 0
            return r0
        L10:
            r0 = -9223372036854775808
            return r0
    }

    public final void f() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.t r0 = r2.a
            r1 = 0
            r0.a(r1)
            com.tkay.expressad.exoplayer.h.t$a r0 = r2.m
            r0.b()
            return
    }
}
