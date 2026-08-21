package com.tkay.expressad.exoplayer.h;

final class n implements com.tkay.expressad.exoplayer.e.g, com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.x.b, com.tkay.expressad.exoplayer.j.t.a<com.tkay.expressad.exoplayer.h.n.a>, com.tkay.expressad.exoplayer.j.t.d {
    private static final long a = 10000;
    private com.tkay.expressad.exoplayer.h.af A;
    private long B;
    private boolean[] C;
    private boolean[] D;
    private boolean[] E;
    private boolean F;
    private long G;
    private long H;
    private long I;
    private boolean J;
    private int K;
    private boolean L;
    private boolean M;
    private final android.net.Uri b;
    private final com.tkay.expressad.exoplayer.j.h c;
    private final int d;
    private final com.tkay.expressad.exoplayer.h.t.a e;
    private final com.tkay.expressad.exoplayer.h.n.c f;
    private final com.tkay.expressad.exoplayer.j.b g;
    private final java.lang.String h;
    private final long i;
    private final com.tkay.expressad.exoplayer.j.t j;
    private final com.tkay.expressad.exoplayer.h.n.b k;
    private final com.tkay.expressad.exoplayer.k.f l;
    private final java.lang.Runnable m;
    private final java.lang.Runnable n;
    private final android.os.Handler o;
    private com.tkay.expressad.exoplayer.h.r.a p;
    private com.tkay.expressad.exoplayer.e.k q;
    private com.tkay.expressad.exoplayer.h.x[] r;
    private int[] s;
    private boolean t;
    private boolean u;
    private int v;
    private boolean w;
    private boolean x;
    private boolean y;
    private int z;



    final class a implements com.tkay.expressad.exoplayer.j.t.c {
        final com.tkay.expressad.exoplayer.h.n a;
        private final android.net.Uri b;
        private final com.tkay.expressad.exoplayer.j.h c;
        private final com.tkay.expressad.exoplayer.h.n.b d;
        private final com.tkay.expressad.exoplayer.k.f e;
        private final com.tkay.expressad.exoplayer.e.j f;
        private volatile boolean g;
        private boolean h;
        private long i;
        private com.tkay.expressad.exoplayer.j.k j;
        private long k;
        private long l;

        public a(com.tkay.expressad.exoplayer.h.n r1, android.net.Uri r2, com.tkay.expressad.exoplayer.j.h r3, com.tkay.expressad.exoplayer.h.n.b r4, com.tkay.expressad.exoplayer.k.f r5) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
                android.net.Uri r1 = (android.net.Uri) r1
                r0.b = r1
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r3)
                com.tkay.expressad.exoplayer.j.h r1 = (com.tkay.expressad.exoplayer.j.h) r1
                r0.c = r1
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r4)
                com.tkay.expressad.exoplayer.h.n$b r1 = (com.tkay.expressad.exoplayer.h.n.b) r1
                r0.d = r1
                r0.e = r5
                com.tkay.expressad.exoplayer.e.j r1 = new com.tkay.expressad.exoplayer.e.j
                r1.<init>()
                r0.f = r1
                r1 = 1
                r0.h = r1
                r1 = -1
                r0.k = r1
                return
        }

        static com.tkay.expressad.exoplayer.j.k a(com.tkay.expressad.exoplayer.h.n.a r0) {
                com.tkay.expressad.exoplayer.j.k r0 = r0.j
                return r0
        }

        static long b(com.tkay.expressad.exoplayer.h.n.a r2) {
                long r0 = r2.i
                return r0
        }

        static long c(com.tkay.expressad.exoplayer.h.n.a r2) {
                long r0 = r2.l
                return r0
        }

        static long d(com.tkay.expressad.exoplayer.h.n.a r2) {
                long r0 = r2.k
                return r0
        }

        @Override
        public final void a() {
                r1 = this;
                r0 = 1
                r1.g = r0
                return
        }

        public final void a(long r2, long r4) {
                r1 = this;
                com.tkay.expressad.exoplayer.e.j r0 = r1.f
                r0.a = r2
                r1.i = r4
                r2 = 1
                r1.h = r2
                return
        }

        @Override
        public final void b() {
                r13 = this;
                r0 = 0
                r1 = r0
            L2:
                if (r1 != 0) goto Lc8
                boolean r2 = r13.g
                if (r2 != 0) goto Lc8
                r2 = 0
                r3 = 1
                com.tkay.expressad.exoplayer.e.j r4 = r13.f     // Catch: java.lang.Throwable -> Laa
                long r11 = r4.a     // Catch: java.lang.Throwable -> Laa
                com.tkay.expressad.exoplayer.j.k r4 = new com.tkay.expressad.exoplayer.j.k     // Catch: java.lang.Throwable -> Laa
                android.net.Uri r5 = r13.b     // Catch: java.lang.Throwable -> Laa
                com.tkay.expressad.exoplayer.h.n r6 = r13.a     // Catch: java.lang.Throwable -> Laa
                java.lang.String r6 = com.tkay.expressad.exoplayer.h.n.d(r6)     // Catch: java.lang.Throwable -> Laa
                r4.<init>(r5, r11, r6)     // Catch: java.lang.Throwable -> Laa
                r13.j = r4     // Catch: java.lang.Throwable -> Laa
                com.tkay.expressad.exoplayer.j.h r5 = r13.c     // Catch: java.lang.Throwable -> Laa
                long r4 = r5.a(r4)     // Catch: java.lang.Throwable -> Laa
                r13.k = r4     // Catch: java.lang.Throwable -> Laa
                r6 = -1
                int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r6 == 0) goto L2e
                long r4 = r4 + r11
                r13.k = r4     // Catch: java.lang.Throwable -> Laa
            L2e:
                com.tkay.expressad.exoplayer.e.b r4 = new com.tkay.expressad.exoplayer.e.b     // Catch: java.lang.Throwable -> Laa
                com.tkay.expressad.exoplayer.j.h r6 = r13.c     // Catch: java.lang.Throwable -> Laa
                long r9 = r13.k     // Catch: java.lang.Throwable -> Laa
                r5 = r4
                r7 = r11
                r5.<init>(r6, r7, r9)     // Catch: java.lang.Throwable -> Laa
                com.tkay.expressad.exoplayer.h.n$b r2 = r13.d     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.j.h r5 = r13.c     // Catch: java.lang.Throwable -> La7
                android.net.Uri r5 = r5.a()     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.e.e r2 = r2.a(r4, r5)     // Catch: java.lang.Throwable -> La7
                boolean r5 = r13.h     // Catch: java.lang.Throwable -> La7
                if (r5 == 0) goto L50
                long r5 = r13.i     // Catch: java.lang.Throwable -> La7
                r2.a(r11, r5)     // Catch: java.lang.Throwable -> La7
                r13.h = r0     // Catch: java.lang.Throwable -> La7
            L50:
                if (r1 != 0) goto L89
                boolean r5 = r13.g     // Catch: java.lang.Throwable -> La7
                if (r5 != 0) goto L89
                com.tkay.expressad.exoplayer.k.f r5 = r13.e     // Catch: java.lang.Throwable -> La7
                r5.c()     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.e.j r5 = r13.f     // Catch: java.lang.Throwable -> La7
                int r1 = r2.a(r4, r5)     // Catch: java.lang.Throwable -> La7
                long r5 = r4.c()     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.h.n r7 = r13.a     // Catch: java.lang.Throwable -> La7
                long r7 = com.tkay.expressad.exoplayer.h.n.e(r7)     // Catch: java.lang.Throwable -> La7
                long r7 = r7 + r11
                int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r5 <= 0) goto L50
                long r11 = r4.c()     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.k.f r5 = r13.e     // Catch: java.lang.Throwable -> La7
                r5.b()     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.h.n r5 = r13.a     // Catch: java.lang.Throwable -> La7
                android.os.Handler r5 = com.tkay.expressad.exoplayer.h.n.g(r5)     // Catch: java.lang.Throwable -> La7
                com.tkay.expressad.exoplayer.h.n r6 = r13.a     // Catch: java.lang.Throwable -> La7
                java.lang.Runnable r6 = com.tkay.expressad.exoplayer.h.n.f(r6)     // Catch: java.lang.Throwable -> La7
                r5.post(r6)     // Catch: java.lang.Throwable -> La7
                goto L50
            L89:
                if (r1 != r3) goto L8d
                r1 = r0
                goto La0
            L8d:
                com.tkay.expressad.exoplayer.e.j r2 = r13.f
                long r3 = r4.c()
                r2.a = r3
                com.tkay.expressad.exoplayer.e.j r2 = r13.f
                long r2 = r2.a
                com.tkay.expressad.exoplayer.j.k r4 = r13.j
                long r4 = r4.e
                long r2 = r2 - r4
                r13.l = r2
            La0:
                com.tkay.expressad.exoplayer.j.h r2 = r13.c
                com.tkay.expressad.exoplayer.k.af.a(r2)
                goto L2
            La7:
                r0 = move-exception
                r2 = r4
                goto Lab
            Laa:
                r0 = move-exception
            Lab:
                if (r1 == r3) goto Lc2
                if (r2 == 0) goto Lc2
                com.tkay.expressad.exoplayer.e.j r1 = r13.f
                long r2 = r2.c()
                r1.a = r2
                com.tkay.expressad.exoplayer.e.j r1 = r13.f
                long r1 = r1.a
                com.tkay.expressad.exoplayer.j.k r3 = r13.j
                long r3 = r3.e
                long r1 = r1 - r3
                r13.l = r1
            Lc2:
                com.tkay.expressad.exoplayer.j.h r1 = r13.c
                com.tkay.expressad.exoplayer.k.af.a(r1)
                throw r0
            Lc8:
                return
        }
    }

    private static final class b {
        private final com.tkay.expressad.exoplayer.e.e[] a;
        private final com.tkay.expressad.exoplayer.e.g b;
        private com.tkay.expressad.exoplayer.e.e c;

        public b(com.tkay.expressad.exoplayer.e.e[] r1, com.tkay.expressad.exoplayer.e.g r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public final com.tkay.expressad.exoplayer.e.e a(com.tkay.expressad.exoplayer.e.f r6, android.net.Uri r7) {
                r5 = this;
                com.tkay.expressad.exoplayer.e.e r0 = r5.c
                if (r0 == 0) goto L5
                return r0
            L5:
                com.tkay.expressad.exoplayer.e.e[] r0 = r5.a
                int r1 = r0.length
                r2 = 0
            L9:
                if (r2 >= r1) goto L24
                r3 = r0[r2]
                boolean r4 = r3.a(r6)     // Catch: java.lang.Throwable -> L19 java.io.EOFException -> L1e
                if (r4 == 0) goto L1e
                r5.c = r3     // Catch: java.lang.Throwable -> L19 java.io.EOFException -> L1e
                r6.a()
                goto L24
            L19:
                r7 = move-exception
                r6.a()
                throw r7
            L1e:
                r6.a()
                int r2 = r2 + 1
                goto L9
            L24:
                com.tkay.expressad.exoplayer.e.e r6 = r5.c
                if (r6 == 0) goto L30
                com.tkay.expressad.exoplayer.e.g r7 = r5.b
                r6.a(r7)
                com.tkay.expressad.exoplayer.e.e r6 = r5.c
                return r6
            L30:
                com.tkay.expressad.exoplayer.h.ag r6 = new com.tkay.expressad.exoplayer.h.ag
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "None of the available extractors ("
                r0.<init>(r1)
                com.tkay.expressad.exoplayer.e.e[] r1 = r5.a
                java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.a(r1)
                r0.append(r1)
                java.lang.String r1 = ") could read the stream."
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r6.<init>(r0, r7)
                throw r6
        }

        public final void a() {
                r1 = this;
                com.tkay.expressad.exoplayer.e.e r0 = r1.c
                if (r0 == 0) goto L7
                r0 = 0
                r1.c = r0
            L7:
                return
        }
    }

    interface c {
        void a(long r1, boolean r3);
    }

    private final class d implements com.tkay.expressad.exoplayer.h.y {
        final com.tkay.expressad.exoplayer.h.n a;
        private final int b;

        public d(com.tkay.expressad.exoplayer.h.n r1, int r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        static int a(com.tkay.expressad.exoplayer.h.n.d r0) {
                int r0 = r0.b
                return r0
        }

        @Override
        public final int a(long r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.h.n r0 = r2.a
                int r1 = r2.b
                int r3 = r0.a(r1, r3)
                return r3
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.n r3, com.tkay.expressad.exoplayer.c.e r4, boolean r5) {
                r2 = this;
                com.tkay.expressad.exoplayer.h.n r0 = r2.a
                int r1 = r2.b
                int r3 = r0.a(r1, r3, r4, r5)
                return r3
        }

        @Override
        public final boolean b() {
                r2 = this;
                com.tkay.expressad.exoplayer.h.n r0 = r2.a
                int r1 = r2.b
                boolean r0 = r0.a(r1)
                return r0
        }

        @Override
        public final void c() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.n r0 = r1.a
                r0.h()
                return
        }
    }

    public n(android.net.Uri r1, com.tkay.expressad.exoplayer.j.h r2, com.tkay.expressad.exoplayer.e.e[] r3, int r4, com.tkay.expressad.exoplayer.h.t.a r5, com.tkay.expressad.exoplayer.h.n.c r6, com.tkay.expressad.exoplayer.j.b r7, java.lang.String r8, int r9) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.g = r7
            r0.h = r8
            long r1 = (long) r9
            r0.i = r1
            com.tkay.expressad.exoplayer.j.t r1 = new com.tkay.expressad.exoplayer.j.t
            java.lang.String r2 = "Loader:ExtractorMediaPeriod"
            r1.<init>(r2)
            r0.j = r1
            com.tkay.expressad.exoplayer.h.n$b r1 = new com.tkay.expressad.exoplayer.h.n$b
            r1.<init>(r3, r0)
            r0.k = r1
            com.tkay.expressad.exoplayer.k.f r1 = new com.tkay.expressad.exoplayer.k.f
            r1.<init>()
            r0.l = r1
            com.tkay.expressad.exoplayer.h.n$1 r1 = new com.tkay.expressad.exoplayer.h.n$1
            r1.<init>(r0)
            r0.m = r1
            com.tkay.expressad.exoplayer.h.n$2 r1 = new com.tkay.expressad.exoplayer.h.n$2
            r1.<init>(r0)
            r0.n = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.o = r1
            r1 = 0
            int[] r2 = new int[r1]
            r0.s = r2
            com.tkay.expressad.exoplayer.h.x[] r1 = new com.tkay.expressad.exoplayer.h.x[r1]
            r0.r = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.I = r1
            r6 = -1
            r0.G = r6
            r0.B = r1
            r1 = -1
            if (r4 != r1) goto L5a
            r4 = 3
        L5a:
            r0.v = r4
            r5.a()
            return
    }

    private int a(com.tkay.expressad.exoplayer.h.n.a r23, long r24, long r26, java.io.IOException r28) {
            r22 = this;
            r0 = r22
            r12 = r24
            r14 = r26
            r18 = r28
            r1 = r28
            boolean r7 = r1 instanceof com.tkay.expressad.exoplayer.h.ag
            r19 = r7
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.e
            com.tkay.expressad.exoplayer.j.k r2 = com.tkay.expressad.exoplayer.h.n.a.a(r23)
            long r8 = com.tkay.expressad.exoplayer.h.n.a.b(r23)
            long r10 = r0.B
            long r16 = com.tkay.expressad.exoplayer.h.n.a.c(r23)
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r20 = 0
            r21 = r7
            r7 = r20
            r1.a(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16, r18, r19)
            r22.a(r23)
            if (r21 == 0) goto L32
            r1 = 3
            return r1
        L32:
            int r1 = r22.m()
            int r2 = r0.K
            r3 = 0
            r4 = 1
            if (r1 <= r2) goto L3e
            r2 = r4
            goto L3f
        L3e:
            r2 = r3
        L3f:
            long r5 = r0.G
            r7 = -1
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 != 0) goto L85
            com.tkay.expressad.exoplayer.e.k r5 = r0.q
            if (r5 == 0) goto L59
            long r5 = r5.b()
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 == 0) goto L59
            goto L85
        L59:
            boolean r1 = r0.u
            if (r1 == 0) goto L67
            boolean r1 = r22.j()
            if (r1 != 0) goto L67
            r0.J = r4
            r1 = r3
            goto L88
        L67:
            boolean r1 = r0.u
            r0.x = r1
            r5 = 0
            r0.H = r5
            r0.K = r3
            com.tkay.expressad.exoplayer.h.x[] r1 = r0.r
            int r7 = r1.length
            r8 = r3
        L75:
            if (r8 >= r7) goto L7f
            r9 = r1[r8]
            r9.a()
            int r8 = r8 + 1
            goto L75
        L7f:
            r8 = r23
            r8.a(r5, r5)
            goto L87
        L85:
            r0.K = r1
        L87:
            r1 = r4
        L88:
            if (r1 == 0) goto L8e
            if (r2 == 0) goto L8d
            return r4
        L8d:
            return r3
        L8e:
            r1 = 2
            return r1
    }

    private void a(com.tkay.expressad.exoplayer.h.n.a r5) {
            r4 = this;
            long r0 = r4.G
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = com.tkay.expressad.exoplayer.h.n.a.d(r5)
            r4.G = r0
        Le:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.n.a r23, long r24, long r26) {
            r22 = this;
            r0 = r22
            long r1 = r0.B
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L2a
            long r1 = r22.n()
            r3 = -9223372036854775808
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L1a
            r1 = 0
            goto L1d
        L1a:
            r3 = 10000(0x2710, double:4.9407E-320)
            long r1 = r1 + r3
        L1d:
            r0.B = r1
            com.tkay.expressad.exoplayer.h.n$c r3 = r0.f
            com.tkay.expressad.exoplayer.e.k r4 = r0.q
            boolean r4 = r4.a()
            r3.a(r1, r4)
        L2a:
            com.tkay.expressad.exoplayer.h.t$a r5 = r0.e
            com.tkay.expressad.exoplayer.j.k r6 = com.tkay.expressad.exoplayer.h.n.a.a(r23)
            r7 = 1
            r8 = -1
            r9 = 0
            r10 = 0
            r11 = 0
            long r12 = com.tkay.expressad.exoplayer.h.n.a.b(r23)
            long r14 = r0.B
            long r20 = com.tkay.expressad.exoplayer.h.n.a.c(r23)
            r16 = r24
            r18 = r26
            r5.a(r6, r7, r8, r9, r10, r11, r12, r14, r16, r18, r20)
            r22.a(r23)
            r1 = 1
            r0.L = r1
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.p
            r1.a(r0)
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.n.a r19, long r20, long r22, boolean r24) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.e
            com.tkay.expressad.exoplayer.j.k r2 = com.tkay.expressad.exoplayer.h.n.a.a(r19)
            long r8 = com.tkay.expressad.exoplayer.h.n.a.b(r19)
            long r10 = r0.B
            long r16 = com.tkay.expressad.exoplayer.h.n.a.c(r19)
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r1.b(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            if (r24 != 0) goto L3a
            r18.a(r19)
            com.tkay.expressad.exoplayer.h.x[] r1 = r0.r
            int r2 = r1.length
            r3 = 0
        L27:
            if (r3 >= r2) goto L31
            r4 = r1[r3]
            r4.a()
            int r3 = r3 + 1
            goto L27
        L31:
            int r1 = r0.z
            if (r1 <= 0) goto L3a
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.p
            r1.a(r0)
        L3a:
            return
    }

    static void a(com.tkay.expressad.exoplayer.h.n r8) {
            boolean r0 = r8.M
            if (r0 != 0) goto Laf
            boolean r0 = r8.u
            if (r0 != 0) goto Laf
            com.tkay.expressad.exoplayer.e.k r0 = r8.q
            if (r0 == 0) goto Laf
            boolean r0 = r8.t
            if (r0 != 0) goto L12
            goto Laf
        L12:
            com.tkay.expressad.exoplayer.h.x[] r0 = r8.r
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L17:
            if (r3 >= r1) goto L24
            r4 = r0[r3]
            com.tkay.expressad.exoplayer.m r4 = r4.f()
            if (r4 == 0) goto Laf
            int r3 = r3 + 1
            goto L17
        L24:
            com.tkay.expressad.exoplayer.k.f r0 = r8.l
            r0.b()
            com.tkay.expressad.exoplayer.h.x[] r0 = r8.r
            int r0 = r0.length
            com.tkay.expressad.exoplayer.h.ae[] r1 = new com.tkay.expressad.exoplayer.h.ae[r0]
            boolean[] r3 = new boolean[r0]
            r8.D = r3
            boolean[] r3 = new boolean[r0]
            r8.C = r3
            boolean[] r3 = new boolean[r0]
            r8.E = r3
            com.tkay.expressad.exoplayer.e.k r3 = r8.q
            long r3 = r3.b()
            r8.B = r3
            r3 = r2
        L43:
            r4 = 1
            if (r3 >= r0) goto L75
            com.tkay.expressad.exoplayer.h.x[] r5 = r8.r
            r5 = r5[r3]
            com.tkay.expressad.exoplayer.m r5 = r5.f()
            com.tkay.expressad.exoplayer.h.ae r6 = new com.tkay.expressad.exoplayer.h.ae
            com.tkay.expressad.exoplayer.m[] r7 = new com.tkay.expressad.exoplayer.m[r4]
            r7[r2] = r5
            r6.<init>(r7)
            r1[r3] = r6
            java.lang.String r5 = r5.h
            boolean r6 = com.tkay.expressad.exoplayer.k.o.b(r5)
            if (r6 != 0) goto L69
            boolean r5 = com.tkay.expressad.exoplayer.k.o.a(r5)
            if (r5 == 0) goto L68
            goto L69
        L68:
            r4 = r2
        L69:
            boolean[] r5 = r8.D
            r5[r3] = r4
            boolean r5 = r8.F
            r4 = r4 | r5
            r8.F = r4
            int r3 = r3 + 1
            goto L43
        L75:
            com.tkay.expressad.exoplayer.h.af r0 = new com.tkay.expressad.exoplayer.h.af
            r0.<init>(r1)
            r8.A = r0
            int r0 = r8.d
            r1 = -1
            if (r0 != r1) goto L9b
            long r0 = r8.G
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9b
            com.tkay.expressad.exoplayer.e.k r0 = r8.q
            long r0 = r0.b()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9b
            r0 = 6
            r8.v = r0
        L9b:
            r8.u = r4
            com.tkay.expressad.exoplayer.h.n$c r0 = r8.f
            long r1 = r8.B
            com.tkay.expressad.exoplayer.e.k r3 = r8.q
            boolean r3 = r3.a()
            r0.a(r1, r3)
            com.tkay.expressad.exoplayer.h.r$a r0 = r8.p
            r0.a(r8)
        Laf:
            return
    }

    private boolean a(com.tkay.expressad.exoplayer.h.n.a r7, int r8) {
            r6 = this;
            long r0 = r6.G
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            if (r0 != 0) goto L44
            com.tkay.expressad.exoplayer.e.k r0 = r6.q
            if (r0 == 0) goto L1b
            long r2 = r0.b()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L1b
            goto L44
        L1b:
            boolean r8 = r6.u
            r0 = 0
            if (r8 == 0) goto L29
            boolean r8 = r6.j()
            if (r8 != 0) goto L29
            r6.J = r1
            return r0
        L29:
            boolean r8 = r6.u
            r6.x = r8
            r2 = 0
            r6.H = r2
            r6.K = r0
            com.tkay.expressad.exoplayer.h.x[] r8 = r6.r
            int r4 = r8.length
        L36:
            if (r0 >= r4) goto L40
            r5 = r8[r0]
            r5.a()
            int r0 = r0 + 1
            goto L36
        L40:
            r7.a(r2, r2)
            return r1
        L44:
            r6.K = r8
            return r1
    }

    private static boolean a(java.io.IOException r0) {
            boolean r0 = r0 instanceof com.tkay.expressad.exoplayer.h.ag
            return r0
    }

    private void b(int r10) {
            r9 = this;
            boolean[] r0 = r9.E
            boolean r0 = r0[r10]
            if (r0 != 0) goto L25
            com.tkay.expressad.exoplayer.h.af r0 = r9.A
            com.tkay.expressad.exoplayer.h.ae r0 = r0.a(r10)
            r1 = 0
            com.tkay.expressad.exoplayer.m r4 = r0.a(r1)
            com.tkay.expressad.exoplayer.h.t$a r2 = r9.e
            java.lang.String r0 = r4.h
            int r3 = com.tkay.expressad.exoplayer.k.o.d(r0)
            r5 = 0
            r6 = 0
            long r7 = r9.H
            r2.a(r3, r4, r5, r6, r7)
            boolean[] r0 = r9.E
            r1 = 1
            r0[r10] = r1
        L25:
            return
    }

    static boolean b(com.tkay.expressad.exoplayer.h.n r0) {
            boolean r0 = r0.M
            return r0
    }

    static com.tkay.expressad.exoplayer.h.r.a c(com.tkay.expressad.exoplayer.h.n r0) {
            com.tkay.expressad.exoplayer.h.r$a r0 = r0.p
            return r0
    }

    private void c(int r4) {
            r3 = this;
            boolean r0 = r3.J
            if (r0 == 0) goto L35
            boolean[] r0 = r3.D
            boolean r0 = r0[r4]
            if (r0 == 0) goto L35
            com.tkay.expressad.exoplayer.h.x[] r0 = r3.r
            r4 = r0[r4]
            boolean r4 = r4.c()
            if (r4 == 0) goto L15
            goto L35
        L15:
            r0 = 0
            r3.I = r0
            r4 = 0
            r3.J = r4
            r2 = 1
            r3.x = r2
            r3.H = r0
            r3.K = r4
            com.tkay.expressad.exoplayer.h.x[] r0 = r3.r
            int r1 = r0.length
        L26:
            if (r4 >= r1) goto L30
            r2 = r0[r4]
            r2.a()
            int r4 = r4 + 1
            goto L26
        L30:
            com.tkay.expressad.exoplayer.h.r$a r4 = r3.p
            r4.a(r3)
        L35:
            return
    }

    static java.lang.String d(com.tkay.expressad.exoplayer.h.n r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    private boolean d(long r7) {
            r6 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r6.r
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L5:
            r3 = 1
            if (r2 >= r0) goto L28
            com.tkay.expressad.exoplayer.h.x[] r4 = r6.r
            r4 = r4[r2]
            r4.i()
            int r4 = r4.a(r7, r1)
            r5 = -1
            if (r4 == r5) goto L17
            goto L18
        L17:
            r3 = r1
        L18:
            if (r3 != 0) goto L25
            boolean[] r3 = r6.D
            boolean r3 = r3[r2]
            if (r3 != 0) goto L24
            boolean r3 = r6.F
            if (r3 != 0) goto L25
        L24:
            return r1
        L25:
            int r2 = r2 + 1
            goto L5
        L28:
            return r3
    }

    static long e(com.tkay.expressad.exoplayer.h.n r2) {
            long r0 = r2.i
            return r0
    }

    static java.lang.Runnable f(com.tkay.expressad.exoplayer.h.n r0) {
            java.lang.Runnable r0 = r0.n
            return r0
    }

    static android.os.Handler g(com.tkay.expressad.exoplayer.h.n r0) {
            android.os.Handler r0 = r0.o
            return r0
    }

    private boolean j() {
            r1 = this;
            boolean r0 = r1.x
            if (r0 != 0) goto Ld
            boolean r0 = r1.o()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    private void k() {
            r8 = this;
            boolean r0 = r8.M
            if (r0 != 0) goto Lb0
            boolean r0 = r8.u
            if (r0 != 0) goto Lb0
            com.tkay.expressad.exoplayer.e.k r0 = r8.q
            if (r0 == 0) goto Lb0
            boolean r0 = r8.t
            if (r0 != 0) goto L12
            goto Lb0
        L12:
            com.tkay.expressad.exoplayer.h.x[] r0 = r8.r
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L17:
            if (r3 >= r1) goto L25
            r4 = r0[r3]
            com.tkay.expressad.exoplayer.m r4 = r4.f()
            if (r4 != 0) goto L22
            return
        L22:
            int r3 = r3 + 1
            goto L17
        L25:
            com.tkay.expressad.exoplayer.k.f r0 = r8.l
            r0.b()
            com.tkay.expressad.exoplayer.h.x[] r0 = r8.r
            int r0 = r0.length
            com.tkay.expressad.exoplayer.h.ae[] r1 = new com.tkay.expressad.exoplayer.h.ae[r0]
            boolean[] r3 = new boolean[r0]
            r8.D = r3
            boolean[] r3 = new boolean[r0]
            r8.C = r3
            boolean[] r3 = new boolean[r0]
            r8.E = r3
            com.tkay.expressad.exoplayer.e.k r3 = r8.q
            long r3 = r3.b()
            r8.B = r3
            r3 = r2
        L44:
            r4 = 1
            if (r3 >= r0) goto L76
            com.tkay.expressad.exoplayer.h.x[] r5 = r8.r
            r5 = r5[r3]
            com.tkay.expressad.exoplayer.m r5 = r5.f()
            com.tkay.expressad.exoplayer.h.ae r6 = new com.tkay.expressad.exoplayer.h.ae
            com.tkay.expressad.exoplayer.m[] r7 = new com.tkay.expressad.exoplayer.m[r4]
            r7[r2] = r5
            r6.<init>(r7)
            r1[r3] = r6
            java.lang.String r5 = r5.h
            boolean r6 = com.tkay.expressad.exoplayer.k.o.b(r5)
            if (r6 != 0) goto L6a
            boolean r5 = com.tkay.expressad.exoplayer.k.o.a(r5)
            if (r5 == 0) goto L69
            goto L6a
        L69:
            r4 = r2
        L6a:
            boolean[] r5 = r8.D
            r5[r3] = r4
            boolean r5 = r8.F
            r4 = r4 | r5
            r8.F = r4
            int r3 = r3 + 1
            goto L44
        L76:
            com.tkay.expressad.exoplayer.h.af r0 = new com.tkay.expressad.exoplayer.h.af
            r0.<init>(r1)
            r8.A = r0
            int r0 = r8.d
            r1 = -1
            if (r0 != r1) goto L9c
            long r0 = r8.G
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9c
            com.tkay.expressad.exoplayer.e.k r0 = r8.q
            long r0 = r0.b()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9c
            r0 = 6
            r8.v = r0
        L9c:
            r8.u = r4
            com.tkay.expressad.exoplayer.h.n$c r0 = r8.f
            long r1 = r8.B
            com.tkay.expressad.exoplayer.e.k r3 = r8.q
            boolean r3 = r3.a()
            r0.a(r1, r3)
            com.tkay.expressad.exoplayer.h.r$a r0 = r8.p
            r0.a(r8)
        Lb0:
            return
    }

    private void l() {
            r21 = this;
            r6 = r21
            com.tkay.expressad.exoplayer.h.n$a r7 = new com.tkay.expressad.exoplayer.h.n$a
            android.net.Uri r2 = r6.b
            com.tkay.expressad.exoplayer.j.h r3 = r6.c
            com.tkay.expressad.exoplayer.h.n$b r4 = r6.k
            com.tkay.expressad.exoplayer.k.f r5 = r6.l
            r0 = r7
            r1 = r21
            r0.<init>(r1, r2, r3, r4, r5)
            boolean r0 = r6.u
            if (r0 == 0) goto L47
            boolean r0 = r21.o()
            com.tkay.expressad.exoplayer.k.a.b(r0)
            long r0 = r6.B
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L34
            long r4 = r6.I
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L34
            r0 = 1
            r6.L = r0
            r6.I = r2
            return
        L34:
            com.tkay.expressad.exoplayer.e.k r0 = r6.q
            long r4 = r6.I
            com.tkay.expressad.exoplayer.e.k$a r0 = r0.a(r4)
            com.tkay.expressad.exoplayer.e.l r0 = r0.a
            long r0 = r0.c
            long r4 = r6.I
            r7.a(r0, r4)
            r6.I = r2
        L47:
            int r0 = r21.m()
            r6.K = r0
            com.tkay.expressad.exoplayer.j.t r0 = r6.j
            int r1 = r6.v
            long r19 = r0.a(r7, r6, r1)
            com.tkay.expressad.exoplayer.h.t$a r8 = r6.e
            com.tkay.expressad.exoplayer.j.k r9 = com.tkay.expressad.exoplayer.h.n.a.a(r7)
            r10 = 1
            r11 = -1
            r12 = 0
            r13 = 0
            r14 = 0
            long r15 = com.tkay.expressad.exoplayer.h.n.a.b(r7)
            long r0 = r6.B
            r17 = r0
            r8.a(r9, r10, r11, r12, r13, r14, r15, r17, r19)
            return
    }

    private int m() {
            r5 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r5.r
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r2 >= r1) goto L11
            r4 = r0[r2]
            int r4 = r4.b()
            int r3 = r3 + r4
            int r2 = r2 + 1
            goto L5
        L11:
            return r3
    }

    private long n() {
            r7 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r7.r
            int r1 = r0.length
            r2 = -9223372036854775808
            r4 = 0
        L6:
            if (r4 >= r1) goto L15
            r5 = r0[r4]
            long r5 = r5.g()
            long r2 = java.lang.Math.max(r2, r5)
            int r4 = r4 + 1
            goto L6
        L15:
            return r2
    }

    private boolean o() {
            r4 = this;
            long r0 = r4.I
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    final int a(int r5, long r6) {
            r4 = this;
            boolean r0 = r4.j()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.r
            r0 = r0[r5]
            boolean r2 = r4.L
            if (r2 == 0) goto L1d
            long r2 = r0.g()
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1d
            int r1 = r0.k()
            goto L27
        L1d:
            r2 = 1
            int r6 = r0.a(r6, r2)
            r7 = -1
            if (r6 != r7) goto L26
            goto L27
        L26:
            r1 = r6
        L27:
            if (r1 <= 0) goto L2d
            r4.b(r5)
            goto L30
        L2d:
            r4.c(r5)
        L30:
            return r1
    }

    final int a(int r10, com.tkay.expressad.exoplayer.n r11, com.tkay.expressad.exoplayer.c.e r12, boolean r13) {
            r9 = this;
            boolean r0 = r9.j()
            r1 = -3
            if (r0 == 0) goto L8
            return r1
        L8:
            com.tkay.expressad.exoplayer.h.x[] r0 = r9.r
            r2 = r0[r10]
            boolean r6 = r9.L
            long r7 = r9.H
            r3 = r11
            r4 = r12
            r5 = r13
            int r11 = r2.a(r3, r4, r5, r6, r7)
            r12 = -4
            if (r11 != r12) goto L1e
            r9.b(r10)
            goto L23
        L1e:
            if (r11 != r1) goto L23
            r9.c(r10)
        L23:
            return r11
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.j.t.c r23, long r24, long r26, java.io.IOException r28) {
            r22 = this;
            r0 = r22
            r12 = r24
            r14 = r26
            r18 = r28
            r7 = r23
            com.tkay.expressad.exoplayer.h.n$a r7 = (com.tkay.expressad.exoplayer.h.n.a) r7
            r1 = r28
            boolean r6 = r1 instanceof com.tkay.expressad.exoplayer.h.ag
            r19 = r6
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.e
            com.tkay.expressad.exoplayer.j.k r2 = com.tkay.expressad.exoplayer.h.n.a.a(r7)
            long r8 = com.tkay.expressad.exoplayer.h.n.a.b(r7)
            long r10 = r0.B
            long r16 = com.tkay.expressad.exoplayer.h.n.a.c(r7)
            r3 = 1
            r4 = -1
            r5 = 0
            r20 = 0
            r21 = r6
            r6 = r20
            r20 = 0
            r0 = r7
            r7 = r20
            r1.a(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16, r18, r19)
            r1 = r0
            r0 = r22
            r0.a(r1)
            if (r21 == 0) goto L3d
            r1 = 3
            return r1
        L3d:
            int r2 = r22.m()
            int r3 = r0.K
            r4 = 0
            r5 = 1
            if (r2 <= r3) goto L49
            r3 = r5
            goto L4a
        L49:
            r3 = r4
        L4a:
            long r6 = r0.G
            r8 = -1
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 != 0) goto L8e
            com.tkay.expressad.exoplayer.e.k r6 = r0.q
            if (r6 == 0) goto L64
            long r6 = r6.b()
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 == 0) goto L64
            goto L8e
        L64:
            boolean r2 = r0.u
            if (r2 == 0) goto L72
            boolean r2 = r22.j()
            if (r2 != 0) goto L72
            r0.J = r5
            r1 = r4
            goto L91
        L72:
            boolean r2 = r0.u
            r0.x = r2
            r6 = 0
            r0.H = r6
            r0.K = r4
            com.tkay.expressad.exoplayer.h.x[] r2 = r0.r
            int r8 = r2.length
            r9 = r4
        L80:
            if (r9 >= r8) goto L8a
            r10 = r2[r9]
            r10.a()
            int r9 = r9 + 1
            goto L80
        L8a:
            r1.a(r6, r6)
            goto L90
        L8e:
            r0.K = r2
        L90:
            r1 = r5
        L91:
            if (r1 == 0) goto L97
            if (r3 == 0) goto L96
            return r5
        L96:
            return r4
        L97:
            r1 = 2
            return r1
    }

    @Override
    public final long a(long r10, com.tkay.expressad.exoplayer.ac r12) {
            r9 = this;
            com.tkay.expressad.exoplayer.e.k r0 = r9.q
            boolean r0 = r0.a()
            if (r0 != 0) goto Lb
            r10 = 0
            return r10
        Lb:
            com.tkay.expressad.exoplayer.e.k r0 = r9.q
            com.tkay.expressad.exoplayer.e.k$a r0 = r0.a(r10)
            com.tkay.expressad.exoplayer.e.l r1 = r0.a
            long r5 = r1.b
            com.tkay.expressad.exoplayer.e.l r0 = r0.b
            long r7 = r0.b
            r2 = r10
            r4 = r12
            long r10 = com.tkay.expressad.exoplayer.k.af.a(r2, r4, r5, r7)
            return r10
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.i.f[] r7, boolean[] r8, com.tkay.expressad.exoplayer.h.y[] r9, boolean[] r10, long r11) {
            r6 = this;
            boolean r0 = r6.u
            com.tkay.expressad.exoplayer.k.a.b(r0)
            int r0 = r6.z
            r1 = 0
            r2 = r1
        L9:
            int r3 = r7.length
            r4 = 1
            if (r2 >= r3) goto L37
            r3 = r9[r2]
            if (r3 == 0) goto L34
            r3 = r7[r2]
            if (r3 == 0) goto L19
            boolean r3 = r8[r2]
            if (r3 != 0) goto L34
        L19:
            r3 = r9[r2]
            com.tkay.expressad.exoplayer.h.n$d r3 = (com.tkay.expressad.exoplayer.h.n.d) r3
            int r3 = com.tkay.expressad.exoplayer.h.n.d.a(r3)
            boolean[] r5 = r6.C
            boolean r5 = r5[r3]
            com.tkay.expressad.exoplayer.k.a.b(r5)
            int r5 = r6.z
            int r5 = r5 - r4
            r6.z = r5
            boolean[] r4 = r6.C
            r4[r3] = r1
            r3 = 0
            r9[r2] = r3
        L34:
            int r2 = r2 + 1
            goto L9
        L37:
            boolean r8 = r6.w
            if (r8 == 0) goto L3e
            if (r0 != 0) goto L46
            goto L44
        L3e:
            r2 = 0
            int r8 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r8 == 0) goto L46
        L44:
            r8 = r4
            goto L47
        L46:
            r8 = r1
        L47:
            r0 = r1
        L48:
            int r2 = r7.length
            if (r0 >= r2) goto Lad
            r2 = r9[r0]
            if (r2 != 0) goto Laa
            r2 = r7[r0]
            if (r2 == 0) goto Laa
            r2 = r7[r0]
            int r3 = r2.g()
            if (r3 != r4) goto L5d
            r3 = r4
            goto L5e
        L5d:
            r3 = r1
        L5e:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            int r3 = r2.b(r1)
            if (r3 != 0) goto L69
            r3 = r4
            goto L6a
        L69:
            r3 = r1
        L6a:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            com.tkay.expressad.exoplayer.h.af r3 = r6.A
            com.tkay.expressad.exoplayer.h.ae r2 = r2.f()
            int r2 = r3.a(r2)
            boolean[] r3 = r6.C
            boolean r3 = r3[r2]
            r3 = r3 ^ r4
            com.tkay.expressad.exoplayer.k.a.b(r3)
            int r3 = r6.z
            int r3 = r3 + r4
            r6.z = r3
            boolean[] r3 = r6.C
            r3[r2] = r4
            com.tkay.expressad.exoplayer.h.n$d r3 = new com.tkay.expressad.exoplayer.h.n$d
            r3.<init>(r6, r2)
            r9[r0] = r3
            r10[r0] = r4
            if (r8 != 0) goto Laa
            com.tkay.expressad.exoplayer.h.x[] r8 = r6.r
            r8 = r8[r2]
            r8.i()
            int r2 = r8.a(r11, r4)
            r3 = -1
            if (r2 != r3) goto La9
            int r8 = r8.e()
            if (r8 == 0) goto La9
            r8 = r4
            goto Laa
        La9:
            r8 = r1
        Laa:
            int r0 = r0 + 1
            goto L48
        Lad:
            int r7 = r6.z
            if (r7 != 0) goto Ldd
            r6.J = r1
            r6.x = r1
            com.tkay.expressad.exoplayer.j.t r7 = r6.j
            boolean r7 = r7.a()
            if (r7 == 0) goto Ld0
            com.tkay.expressad.exoplayer.h.x[] r7 = r6.r
            int r8 = r7.length
        Lc0:
            if (r1 >= r8) goto Lca
            r9 = r7[r1]
            r9.j()
            int r1 = r1 + 1
            goto Lc0
        Lca:
            com.tkay.expressad.exoplayer.j.t r7 = r6.j
            r7.b()
            goto Lef
        Ld0:
            com.tkay.expressad.exoplayer.h.x[] r7 = r6.r
            int r8 = r7.length
        Ld3:
            if (r1 >= r8) goto Lef
            r9 = r7[r1]
            r9.a()
            int r1 = r1 + 1
            goto Ld3
        Ldd:
            if (r8 == 0) goto Lef
            long r11 = r6.b(r11)
        Le3:
            int r7 = r9.length
            if (r1 >= r7) goto Lef
            r7 = r9[r1]
            if (r7 == 0) goto Lec
            r10[r1] = r4
        Lec:
            int r1 = r1 + 1
            goto Le3
        Lef:
            r6.w = r4
            return r11
    }

    @Override
    public final com.tkay.expressad.exoplayer.e.m a(int r4, int r5) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.x[] r5 = r3.r
            int r5 = r5.length
            r0 = 0
        L4:
            if (r0 >= r5) goto L14
            int[] r1 = r3.s
            r1 = r1[r0]
            if (r1 != r4) goto L11
            com.tkay.expressad.exoplayer.h.x[] r4 = r3.r
            r4 = r4[r0]
            return r4
        L11:
            int r0 = r0 + 1
            goto L4
        L14:
            com.tkay.expressad.exoplayer.h.x r0 = new com.tkay.expressad.exoplayer.h.x
            com.tkay.expressad.exoplayer.j.b r1 = r3.g
            r0.<init>(r1)
            r0.a(r3)
            int[] r1 = r3.s
            int r2 = r5 + 1
            int[] r1 = java.util.Arrays.copyOf(r1, r2)
            r3.s = r1
            r1[r5] = r4
            com.tkay.expressad.exoplayer.h.x[] r4 = r3.r
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r2)
            com.tkay.expressad.exoplayer.h.x[] r4 = (com.tkay.expressad.exoplayer.h.x[]) r4
            r3.r = r4
            r4[r5] = r0
            return r0
    }

    @Override
    public final void a() {
            r0 = this;
            r0.h()
            return
    }

    @Override
    public final void a(long r5, boolean r7) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.r
            int r0 = r0.length
            r1 = 0
        L4:
            if (r1 >= r0) goto L14
            com.tkay.expressad.exoplayer.h.x[] r2 = r4.r
            r2 = r2[r1]
            boolean[] r3 = r4.C
            boolean r3 = r3[r1]
            r2.a(r5, r7, r3)
            int r1 = r1 + 1
            goto L4
        L14:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.e.k r2) {
            r1 = this;
            r1.q = r2
            android.os.Handler r2 = r1.o
            java.lang.Runnable r0 = r1.m
            r2.post(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r.a r1, long r2) {
            r0 = this;
            r0.p = r1
            com.tkay.expressad.exoplayer.k.f r1 = r0.l
            r1.a()
            r0.l()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r24, long r25, long r27) {
            r23 = this;
            r0 = r23
            r1 = r24
            com.tkay.expressad.exoplayer.h.n$a r1 = (com.tkay.expressad.exoplayer.h.n.a) r1
            long r2 = r0.B
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L2e
            long r2 = r23.n()
            r4 = -9223372036854775808
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L1e
            r2 = 0
            goto L21
        L1e:
            r4 = 10000(0x2710, double:4.9407E-320)
            long r2 = r2 + r4
        L21:
            r0.B = r2
            com.tkay.expressad.exoplayer.h.n$c r4 = r0.f
            com.tkay.expressad.exoplayer.e.k r5 = r0.q
            boolean r5 = r5.a()
            r4.a(r2, r5)
        L2e:
            com.tkay.expressad.exoplayer.h.t$a r6 = r0.e
            com.tkay.expressad.exoplayer.j.k r7 = com.tkay.expressad.exoplayer.h.n.a.a(r1)
            r8 = 1
            r9 = -1
            r10 = 0
            r11 = 0
            r12 = 0
            long r13 = com.tkay.expressad.exoplayer.h.n.a.b(r1)
            long r2 = r0.B
            r15 = r2
            long r21 = com.tkay.expressad.exoplayer.h.n.a.c(r1)
            r17 = r25
            r19 = r27
            r6.a(r7, r8, r9, r10, r11, r12, r13, r15, r17, r19, r21)
            r0.a(r1)
            r1 = 1
            r0.L = r1
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.p
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r20, long r21, long r23, boolean r25) {
            r19 = this;
            r0 = r19
            r12 = r21
            r14 = r23
            r7 = r20
            com.tkay.expressad.exoplayer.h.n$a r7 = (com.tkay.expressad.exoplayer.h.n.a) r7
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.e
            com.tkay.expressad.exoplayer.j.k r2 = com.tkay.expressad.exoplayer.h.n.a.a(r7)
            long r8 = com.tkay.expressad.exoplayer.h.n.a.b(r7)
            long r10 = r0.B
            long r16 = com.tkay.expressad.exoplayer.h.n.a.c(r7)
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r18 = 0
            r0 = r7
            r7 = r18
            r1.b(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            if (r25 != 0) goto L46
            r1 = r0
            r0 = r19
            r0.a(r1)
            com.tkay.expressad.exoplayer.h.x[] r1 = r0.r
            int r2 = r1.length
            r3 = 0
        L32:
            if (r3 >= r2) goto L3c
            r4 = r1[r3]
            r4.a()
            int r3 = r3 + 1
            goto L32
        L3c:
            int r1 = r0.z
            if (r1 <= 0) goto L48
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.p
            r1.a(r0)
            goto L48
        L46:
            r0 = r19
        L48:
            return
    }

    final boolean a(int r2) {
            r1 = this;
            boolean r0 = r1.j()
            if (r0 != 0) goto L16
            boolean r0 = r1.L
            if (r0 != 0) goto L14
            com.tkay.expressad.exoplayer.h.x[] r0 = r1.r
            r2 = r0[r2]
            boolean r2 = r2.c()
            if (r2 == 0) goto L16
        L14:
            r2 = 1
            return r2
        L16:
            r2 = 0
            return r2
    }

    @Override
    public final void a_(long r1) {
            r0 = this;
            return
    }

    @Override
    public final long b(long r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.e.k r0 = r4.q
            boolean r0 = r0.a()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r5 = 0
        Lb:
            r4.H = r5
            r0 = 0
            r4.x = r0
            boolean r1 = r4.o()
            if (r1 != 0) goto L1d
            boolean r1 = r4.d(r5)
            if (r1 == 0) goto L1d
            return r5
        L1d:
            r4.J = r0
            r4.I = r5
            r4.L = r0
            com.tkay.expressad.exoplayer.j.t r1 = r4.j
            boolean r1 = r1.a()
            if (r1 == 0) goto L31
            com.tkay.expressad.exoplayer.j.t r0 = r4.j
            r0.b()
            goto L3e
        L31:
            com.tkay.expressad.exoplayer.h.x[] r1 = r4.r
            int r2 = r1.length
        L34:
            if (r0 >= r2) goto L3e
            r3 = r1[r0]
            r3.a()
            int r0 = r0 + 1
            goto L34
        L3e:
            return r5
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.af r0 = r1.A
            return r0
    }

    @Override
    public final long c() {
            r2 = this;
            boolean r0 = r2.y
            if (r0 != 0) goto Lc
            com.tkay.expressad.exoplayer.h.t$a r0 = r2.e
            r0.c()
            r0 = 1
            r2.y = r0
        Lc:
            boolean r0 = r2.x
            if (r0 == 0) goto L22
            boolean r0 = r2.L
            if (r0 != 0) goto L1c
            int r0 = r2.m()
            int r1 = r2.K
            if (r0 <= r1) goto L22
        L1c:
            r0 = 0
            r2.x = r0
            long r0 = r2.H
            return r0
        L22:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    @Override
    public final boolean c(long r1) {
            r0 = this;
            boolean r1 = r0.L
            if (r1 != 0) goto L24
            boolean r1 = r0.J
            if (r1 != 0) goto L24
            boolean r1 = r0.u
            if (r1 == 0) goto L11
            int r1 = r0.z
            if (r1 != 0) goto L11
            goto L24
        L11:
            com.tkay.expressad.exoplayer.k.f r1 = r0.l
            boolean r1 = r1.a()
            com.tkay.expressad.exoplayer.j.t r2 = r0.j
            boolean r2 = r2.a()
            if (r2 != 0) goto L23
            r0.l()
            r1 = 1
        L23:
            return r1
        L24:
            r1 = 0
            return r1
    }

    @Override
    public final void c_() {
            r2 = this;
            r0 = 1
            r2.t = r0
            android.os.Handler r0 = r2.o
            java.lang.Runnable r1 = r2.m
            r0.post(r1)
            return
    }

    @Override
    public final long d() {
            r8 = this;
            boolean r0 = r8.L
            r1 = -9223372036854775808
            if (r0 == 0) goto L7
            return r1
        L7:
            boolean r0 = r8.o()
            if (r0 == 0) goto L10
            long r0 = r8.I
            return r0
        L10:
            boolean r0 = r8.F
            if (r0 == 0) goto L34
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            com.tkay.expressad.exoplayer.h.x[] r0 = r8.r
            int r0 = r0.length
            r5 = 0
        L1d:
            if (r5 >= r0) goto L38
            boolean[] r6 = r8.D
            boolean r6 = r6[r5]
            if (r6 == 0) goto L31
            com.tkay.expressad.exoplayer.h.x[] r6 = r8.r
            r6 = r6[r5]
            long r6 = r6.g()
            long r3 = java.lang.Math.min(r3, r6)
        L31:
            int r5 = r5 + 1
            goto L1d
        L34:
            long r3 = r8.n()
        L38:
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L3f
            long r0 = r8.H
            return r0
        L3f:
            return r3
    }

    @Override
    public final long e() {
            r2 = this;
            int r0 = r2.z
            if (r0 != 0) goto L7
            r0 = -9223372036854775808
            return r0
        L7:
            long r0 = r2.d()
            return r0
    }

    public final void f() {
            r4 = this;
            boolean r0 = r4.u
            if (r0 == 0) goto L12
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.r
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.j()
            int r2 = r2 + 1
            goto L8
        L12:
            com.tkay.expressad.exoplayer.j.t r0 = r4.j
            r0.a(r4)
            android.os.Handler r0 = r4.o
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r4.p = r1
            r0 = 1
            r4.M = r0
            com.tkay.expressad.exoplayer.h.t$a r0 = r4.e
            r0.b()
            return
    }

    @Override
    public final void g() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.r
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.a()
            int r2 = r2 + 1
            goto L4
        Le:
            com.tkay.expressad.exoplayer.h.n$b r0 = r4.k
            r0.a()
            return
    }

    final void h() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.t r0 = r2.j
            int r1 = r2.v
            r0.a(r1)
            return
    }

    @Override
    public final void i() {
            r2 = this;
            android.os.Handler r0 = r2.o
            java.lang.Runnable r1 = r2.m
            r0.post(r1)
            return
    }
}
