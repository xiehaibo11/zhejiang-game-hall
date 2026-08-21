package com.tkay.expressad.exoplayer;

final class k implements android.os.Handler.Callback, com.tkay.expressad.exoplayer.e.a, com.tkay.expressad.exoplayer.h.r.a, com.tkay.expressad.exoplayer.h.s.b, com.tkay.expressad.exoplayer.i.h.a, com.tkay.expressad.exoplayer.x.a {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    private static final java.lang.String d = "ExoPlayerImplInternal";
    private static final int e = 0;
    private static final int f = 1;
    private static final int g = 2;
    private static final int h = 3;
    private static final int i = 4;
    private static final int j = 5;
    private static final int k = 6;
    private static final int l = 7;
    private static final int m = 8;
    private static final int n = 9;
    private static final int o = 10;
    private static final int p = 11;
    private static final int q = 12;
    private static final int r = 13;
    private static final int s = 14;
    private static final int t = 15;
    private static final int u = 10;
    private static final int v = 10;
    private static final int w = 1000;
    private static final long x = 500;
    private final com.tkay.expressad.exoplayer.i.h A;
    private final com.tkay.expressad.exoplayer.i.i B;
    private final com.tkay.expressad.exoplayer.p C;
    private final com.tkay.expressad.exoplayer.k.k D;
    private final android.os.HandlerThread E;
    private final android.os.Handler F;
    private final com.tkay.expressad.exoplayer.h G;
    private final com.tkay.expressad.exoplayer.ae.b H;
    private final com.tkay.expressad.exoplayer.ae.a I;
    private final long J;
    private final boolean K;
    private final com.tkay.expressad.exoplayer.e L;
    private final com.tkay.expressad.exoplayer.k.c M;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.k.b> N;
    private final com.tkay.expressad.exoplayer.k.c O;
    private final com.tkay.expressad.exoplayer.s P;
    private com.tkay.expressad.exoplayer.ac Q;
    private com.tkay.expressad.exoplayer.u R;
    private com.tkay.expressad.exoplayer.h.s S;
    private com.tkay.expressad.exoplayer.y[] T;
    private boolean U;
    private boolean V;
    private boolean W;
    private int X;
    private boolean Y;
    private int Z;
    private com.tkay.expressad.exoplayer.k.d aa;
    private long ab;
    private int ac;
    private final com.tkay.expressad.exoplayer.y[] y;
    private final com.tkay.expressad.exoplayer.z[] z;

    final class 1 implements java.lang.Runnable {
        final com.tkay.expressad.exoplayer.x a;
        final com.tkay.expressad.exoplayer.k b;

        1(com.tkay.expressad.exoplayer.k r1, com.tkay.expressad.exoplayer.x r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.expressad.exoplayer.x r0 = r3.a     // Catch: com.tkay.expressad.exoplayer.g -> L6
                com.tkay.expressad.exoplayer.k.b(r0)     // Catch: com.tkay.expressad.exoplayer.g -> L6
                return
            L6:
                r0 = move-exception
                java.lang.String r1 = "ExoPlayerImplInternal"
                java.lang.String r2 = "Unexpected error delivering message on external thread."
                android.util.Log.e(r1, r2, r0)
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                r1.<init>(r0)
                throw r1
        }
    }

    private static final class a {
        public final com.tkay.expressad.exoplayer.h.s a;
        public final com.tkay.expressad.exoplayer.ae b;
        public final java.lang.Object c;

        public a(com.tkay.expressad.exoplayer.h.s r1, com.tkay.expressad.exoplayer.ae r2, java.lang.Object r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    private static final class b implements java.lang.Comparable<com.tkay.expressad.exoplayer.k.b> {
        public final com.tkay.expressad.exoplayer.x a;
        public int b;
        public long c;
        public java.lang.Object d;

        public b(com.tkay.expressad.exoplayer.x r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        private int a(com.tkay.expressad.exoplayer.k.b r5) {
                r4 = this;
                java.lang.Object r0 = r4.d
                r1 = 1
                r2 = 0
                if (r0 != 0) goto L8
                r0 = r1
                goto L9
            L8:
                r0 = r2
            L9:
                java.lang.Object r3 = r5.d
                if (r3 != 0) goto Lf
                r3 = r1
                goto L10
            Lf:
                r3 = r2
            L10:
                if (r0 == r3) goto L19
                java.lang.Object r5 = r4.d
                if (r5 == 0) goto L18
                r5 = -1
                return r5
            L18:
                return r1
            L19:
                java.lang.Object r0 = r4.d
                if (r0 != 0) goto L1e
                return r2
            L1e:
                int r0 = r4.b
                int r1 = r5.b
                int r0 = r0 - r1
                if (r0 == 0) goto L26
                return r0
            L26:
                long r0 = r4.c
                long r2 = r5.c
                int r5 = com.tkay.expressad.exoplayer.k.af.b(r0, r2)
                return r5
        }

        public final void a(int r1, long r2, java.lang.Object r4) {
                r0 = this;
                r0.b = r1
                r0.c = r2
                r0.d = r4
                return
        }

        @Override
        public final int compareTo(com.tkay.expressad.exoplayer.k.b r5) {
                r4 = this;
                com.tkay.expressad.exoplayer.k$b r5 = (com.tkay.expressad.exoplayer.k.b) r5
                java.lang.Object r0 = r4.d
                r1 = 1
                r2 = 0
                if (r0 != 0) goto La
                r0 = r1
                goto Lb
            La:
                r0 = r2
            Lb:
                java.lang.Object r3 = r5.d
                if (r3 != 0) goto L11
                r3 = r1
                goto L12
            L11:
                r3 = r2
            L12:
                if (r0 == r3) goto L1b
                java.lang.Object r5 = r4.d
                if (r5 == 0) goto L1a
                r5 = -1
                return r5
            L1a:
                return r1
            L1b:
                java.lang.Object r0 = r4.d
                if (r0 != 0) goto L20
                return r2
            L20:
                int r0 = r4.b
                int r1 = r5.b
                int r0 = r0 - r1
                if (r0 == 0) goto L28
                return r0
            L28:
                long r0 = r4.c
                long r2 = r5.c
                int r5 = com.tkay.expressad.exoplayer.k.af.b(r0, r2)
                return r5
        }
    }

    private static final class c {
        private com.tkay.expressad.exoplayer.u a;
        private int b;
        private boolean c;
        private int d;

        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static int a(com.tkay.expressad.exoplayer.k.c r0) {
                int r0 = r0.b
                return r0
        }

        static boolean b(com.tkay.expressad.exoplayer.k.c r0) {
                boolean r0 = r0.c
                return r0
        }

        static int c(com.tkay.expressad.exoplayer.k.c r0) {
                int r0 = r0.d
                return r0
        }

        public final void a(int r2) {
                r1 = this;
                int r0 = r1.b
                int r0 = r0 + r2
                r1.b = r0
                return
        }

        public final boolean a(com.tkay.expressad.exoplayer.u r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.u r0 = r1.a
                if (r2 != r0) goto Lf
                int r2 = r1.b
                if (r2 > 0) goto Lf
                boolean r2 = r1.c
                if (r2 == 0) goto Ld
                goto Lf
            Ld:
                r2 = 0
                return r2
            Lf:
                r2 = 1
                return r2
        }

        public final void b(int r4) {
                r3 = this;
                boolean r0 = r3.c
                r1 = 1
                if (r0 == 0) goto L12
                int r0 = r3.d
                r2 = 4
                if (r0 == r2) goto L12
                if (r4 != r2) goto Ld
                goto Le
            Ld:
                r1 = 0
            Le:
                com.tkay.expressad.exoplayer.k.a.a(r1)
                return
            L12:
                r3.c = r1
                r3.d = r4
                return
        }

        public final void b(com.tkay.expressad.exoplayer.u r1) {
                r0 = this;
                r0.a = r1
                r1 = 0
                r0.b = r1
                r0.c = r1
                return
        }
    }

    private static final class d {
        public final com.tkay.expressad.exoplayer.ae a;
        public final int b;
        public final long c;

        public d(com.tkay.expressad.exoplayer.ae r1, int r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    public k(com.tkay.expressad.exoplayer.y[] r12, com.tkay.expressad.exoplayer.i.h r13, com.tkay.expressad.exoplayer.i.i r14, com.tkay.expressad.exoplayer.p r15, boolean r16, int r17, boolean r18, android.os.Handler r19, com.tkay.expressad.exoplayer.h r20, com.tkay.expressad.exoplayer.k.c r21) {
            r11 = this;
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r21
            r11.<init>()
            r0.y = r1
            r0.A = r2
            r4 = r14
            r0.B = r4
            r5 = r15
            r0.C = r5
            r5 = r16
            r0.V = r5
            r5 = r17
            r0.X = r5
            r5 = r18
            r0.Y = r5
            r5 = r19
            r0.F = r5
            r5 = r20
            r0.G = r5
            r0.O = r3
            com.tkay.expressad.exoplayer.s r5 = new com.tkay.expressad.exoplayer.s
            r5.<init>()
            r0.P = r5
            r5 = 0
            r0.J = r5
            r5 = 0
            r0.K = r5
            com.tkay.expressad.exoplayer.ac r6 = com.tkay.expressad.exoplayer.ac.e
            r0.Q = r6
            com.tkay.expressad.exoplayer.u r6 = new com.tkay.expressad.exoplayer.u
            com.tkay.expressad.exoplayer.ae r7 = com.tkay.expressad.exoplayer.ae.a
            com.tkay.expressad.exoplayer.h.af r8 = com.tkay.expressad.exoplayer.h.af.a
            r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r15 = r6
            r16 = r7
            r17 = r9
            r19 = r8
            r20 = r14
            r15.<init>(r16, r17, r19, r20)
            r0.R = r6
            com.tkay.expressad.exoplayer.k$c r4 = new com.tkay.expressad.exoplayer.k$c
            r4.<init>(r5)
            r0.M = r4
            int r4 = r1.length
            com.tkay.expressad.exoplayer.z[] r4 = new com.tkay.expressad.exoplayer.z[r4]
            r0.z = r4
            r4 = r5
        L60:
            int r6 = r1.length
            if (r4 >= r6) goto L75
            r6 = r1[r4]
            r6.a(r4)
            com.tkay.expressad.exoplayer.z[] r6 = r0.z
            r7 = r1[r4]
            com.tkay.expressad.exoplayer.z r7 = r7.b()
            r6[r4] = r7
            int r4 = r4 + 1
            goto L60
        L75:
            com.tkay.expressad.exoplayer.e r1 = new com.tkay.expressad.exoplayer.e
            r1.<init>(r11, r3)
            r0.L = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.N = r1
            com.tkay.expressad.exoplayer.y[] r1 = new com.tkay.expressad.exoplayer.y[r5]
            r0.T = r1
            com.tkay.expressad.exoplayer.ae$b r1 = new com.tkay.expressad.exoplayer.ae$b
            r1.<init>()
            r0.H = r1
            com.tkay.expressad.exoplayer.ae$a r1 = new com.tkay.expressad.exoplayer.ae$a
            r1.<init>()
            r0.I = r1
            r13.a(r11)
            android.os.HandlerThread r1 = new android.os.HandlerThread
            r2 = -16
            java.lang.String r4 = "ExoPlayerImplInternal:Handler"
            r1.<init>(r4, r2)
            r0.E = r1
            r1.start()
            android.os.HandlerThread r1 = r0.E
            android.os.Looper r1 = r1.getLooper()
            com.tkay.expressad.exoplayer.k.k r1 = r3.a(r1, r11)
            r0.D = r1
            return
    }

    private int a(int r10, com.tkay.expressad.exoplayer.ae r11, com.tkay.expressad.exoplayer.ae r12) {
            r9 = this;
            int r0 = r11.c()
            r1 = -1
            r2 = 0
            r4 = r10
            r10 = r1
        L8:
            if (r2 >= r0) goto L2b
            if (r10 != r1) goto L2b
            com.tkay.expressad.exoplayer.ae$a r5 = r9.I
            com.tkay.expressad.exoplayer.ae$b r6 = r9.H
            int r7 = r9.X
            boolean r8 = r9.Y
            r3 = r11
            int r4 = r3.a(r4, r5, r6, r7, r8)
            if (r4 == r1) goto L2b
            com.tkay.expressad.exoplayer.ae$a r10 = r9.I
            r3 = 1
            com.tkay.expressad.exoplayer.ae$a r10 = r11.a(r4, r10, r3)
            java.lang.Object r10 = r10.b
            int r10 = r12.a(r10)
            int r2 = r2 + 1
            goto L8
        L2b:
            return r10
    }

    private long a(com.tkay.expressad.exoplayer.h.s.a r3, long r4) {
            r2 = this;
            com.tkay.expressad.exoplayer.s r0 = r2.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.s r1 = r2.P
            com.tkay.expressad.exoplayer.q r1 = r1.d()
            if (r0 == r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            long r3 = r2.a(r3, r4, r0)
            return r3
    }

    private long a(com.tkay.expressad.exoplayer.h.s.a r6, long r7, boolean r9) {
            r5 = this;
            r5.f()
            r0 = 0
            r5.W = r0
            r1 = 2
            r5.b(r1)
            com.tkay.expressad.exoplayer.s r2 = r5.P
            com.tkay.expressad.exoplayer.q r2 = r2.c()
            r3 = r2
        L11:
            if (r3 == 0) goto L26
            boolean r4 = r5.a(r6, r7, r3)
            if (r4 == 0) goto L1f
            com.tkay.expressad.exoplayer.s r6 = r5.P
            r6.a(r3)
            goto L26
        L1f:
            com.tkay.expressad.exoplayer.s r3 = r5.P
            com.tkay.expressad.exoplayer.q r3 = r3.h()
            goto L11
        L26:
            if (r2 != r3) goto L2a
            if (r9 == 0) goto L3d
        L2a:
            com.tkay.expressad.exoplayer.y[] r6 = r5.T
            int r9 = r6.length
            r2 = r0
        L2e:
            if (r2 >= r9) goto L38
            r4 = r6[r2]
            r5.b(r4)
            int r2 = r2 + 1
            goto L2e
        L38:
            com.tkay.expressad.exoplayer.y[] r6 = new com.tkay.expressad.exoplayer.y[r0]
            r5.T = r6
            r2 = 0
        L3d:
            if (r3 == 0) goto L5f
            r5.a(r2)
            boolean r6 = r3.g
            if (r6 == 0) goto L58
            com.tkay.expressad.exoplayer.h.r r6 = r3.a
            long r6 = r6.b(r7)
            com.tkay.expressad.exoplayer.h.r r8 = r3.a
            long r2 = r5.J
            long r2 = r6 - r2
            boolean r9 = r5.K
            r8.a(r2, r9)
            r7 = r6
        L58:
            r5.a(r7)
            r5.r()
            goto L68
        L5f:
            com.tkay.expressad.exoplayer.s r6 = r5.P
            r9 = 1
            r6.b(r9)
            r5.a(r7)
        L68:
            com.tkay.expressad.exoplayer.k.k r6 = r5.D
            r6.b(r1)
            return r7
    }

    private android.util.Pair<java.lang.Integer, java.lang.Long> a(com.tkay.expressad.exoplayer.ae r7, int r8) {
            r6 = this;
            com.tkay.expressad.exoplayer.ae$b r1 = r6.H
            com.tkay.expressad.exoplayer.ae$a r2 = r6.I
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r7
            r3 = r8
            android.util.Pair r7 = r0.a(r1, r2, r3, r4)
            return r7
    }

    private android.util.Pair<java.lang.Integer, java.lang.Long> a(com.tkay.expressad.exoplayer.k.d r11, boolean r12) {
            r10 = this;
            com.tkay.expressad.exoplayer.u r0 = r10.R
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            com.tkay.expressad.exoplayer.ae r1 = r11.a
            boolean r2 = r0.a()
            r3 = 0
            if (r2 == 0) goto Le
            return r3
        Le:
            boolean r2 = r1.a()
            if (r2 == 0) goto L15
            r1 = r0
        L15:
            com.tkay.expressad.exoplayer.ae$b r5 = r10.H     // Catch: java.lang.IndexOutOfBoundsException -> L69
            com.tkay.expressad.exoplayer.ae$a r6 = r10.I     // Catch: java.lang.IndexOutOfBoundsException -> L69
            int r7 = r11.b     // Catch: java.lang.IndexOutOfBoundsException -> L69
            long r8 = r11.c     // Catch: java.lang.IndexOutOfBoundsException -> L69
            r4 = r1
            android.util.Pair r11 = r4.a(r5, r6, r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L69
            if (r0 != r1) goto L25
            return r11
        L25:
            java.lang.Object r2 = r11.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            com.tkay.expressad.exoplayer.ae$a r4 = r10.I
            r5 = 1
            com.tkay.expressad.exoplayer.ae$a r2 = r1.a(r2, r4, r5)
            java.lang.Object r2 = r2.b
            int r2 = r0.a(r2)
            r4 = -1
            if (r2 == r4) goto L4a
            java.lang.Integer r12 = java.lang.Integer.valueOf(r2)
            java.lang.Object r11 = r11.second
            java.lang.Long r11 = (java.lang.Long) r11
            android.util.Pair r11 = android.util.Pair.create(r12, r11)
            return r11
        L4a:
            if (r12 == 0) goto L68
            java.lang.Object r11 = r11.first
            java.lang.Integer r11 = (java.lang.Integer) r11
            int r11 = r11.intValue()
            int r11 = r10.a(r11, r1, r0)
            if (r11 == r4) goto L68
            com.tkay.expressad.exoplayer.ae$a r12 = r10.I
            r1 = 0
            com.tkay.expressad.exoplayer.ae$a r11 = r0.a(r11, r12, r1)
            int r11 = r11.c
            android.util.Pair r11 = r10.a(r0, r11)
            return r11
        L68:
            return r3
        L69:
            com.tkay.expressad.exoplayer.o r12 = new com.tkay.expressad.exoplayer.o
            int r1 = r11.b
            long r2 = r11.c
            r12.<init>(r0, r1, r2)
            throw r12
    }

    private void a(float r6) {
            r5 = this;
            com.tkay.expressad.exoplayer.s r0 = r5.P
            com.tkay.expressad.exoplayer.q r0 = r0.e()
        L6:
            if (r0 == 0) goto L25
            com.tkay.expressad.exoplayer.i.i r1 = r0.k
            if (r1 == 0) goto L22
            com.tkay.expressad.exoplayer.i.i r1 = r0.k
            com.tkay.expressad.exoplayer.i.g r1 = r1.c
            com.tkay.expressad.exoplayer.i.f[] r1 = r1.a()
            int r2 = r1.length
            r3 = 0
        L16:
            if (r3 >= r2) goto L22
            r4 = r1[r3]
            if (r4 == 0) goto L1f
            r4.a(r6)
        L1f:
            int r3 = r3 + 1
            goto L16
        L22:
            com.tkay.expressad.exoplayer.q r0 = r0.i
            goto L6
        L25:
            return
    }

    private void a(int r12, boolean r13, int r14) {
            r11 = this;
            com.tkay.expressad.exoplayer.s r0 = r11.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.y[] r1 = r11.y
            r1 = r1[r12]
            com.tkay.expressad.exoplayer.y[] r2 = r11.T
            r2[r14] = r1
            int r14 = r1.a_()
            if (r14 != 0) goto L53
            com.tkay.expressad.exoplayer.i.i r14 = r0.k
            com.tkay.expressad.exoplayer.aa[] r14 = r14.b
            r3 = r14[r12]
            com.tkay.expressad.exoplayer.i.i r14 = r0.k
            com.tkay.expressad.exoplayer.i.g r14 = r14.c
            com.tkay.expressad.exoplayer.i.f r14 = r14.a(r12)
            com.tkay.expressad.exoplayer.m[] r4 = a(r14)
            boolean r14 = r11.V
            r2 = 1
            r5 = 0
            if (r14 == 0) goto L35
            com.tkay.expressad.exoplayer.u r14 = r11.R
            int r14 = r14.f
            r6 = 3
            if (r14 != r6) goto L35
            r14 = r2
            goto L36
        L35:
            r14 = r5
        L36:
            if (r13 != 0) goto L3c
            if (r14 == 0) goto L3c
            r8 = r2
            goto L3d
        L3c:
            r8 = r5
        L3d:
            com.tkay.expressad.exoplayer.h.y[] r13 = r0.c
            r5 = r13[r12]
            long r6 = r11.ab
            long r9 = r0.e
            r2 = r1
            r2.a(r3, r4, r5, r6, r8, r9)
            com.tkay.expressad.exoplayer.e r12 = r11.L
            r12.a(r1)
            if (r14 == 0) goto L53
            r1.b_()
        L53:
            return
    }

    private void a(long r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.s r0 = r4.P
            boolean r0 = r0.f()
            if (r0 != 0) goto L9
            goto L12
        L9:
            com.tkay.expressad.exoplayer.s r0 = r4.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            long r0 = r0.e
            long r5 = r5 + r0
        L12:
            r4.ab = r5
            com.tkay.expressad.exoplayer.e r0 = r4.L
            r0.a(r5)
            com.tkay.expressad.exoplayer.y[] r5 = r4.T
            int r6 = r5.length
            r0 = 0
        L1d:
            if (r0 >= r6) goto L29
            r1 = r5[r0]
            long r2 = r4.ab
            r1.a(r2)
            int r0 = r0 + 1
            goto L1d
        L29:
            return
    }

    private void a(long r2, long r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r1.D
            r0.b()
            com.tkay.expressad.exoplayer.k.k r0 = r1.D
            long r2 = r2 + r4
            r0.a(r2)
            return
    }

    private void a(com.tkay.expressad.exoplayer.i.i r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.p r0 = r2.C
            com.tkay.expressad.exoplayer.y[] r1 = r2.y
            com.tkay.expressad.exoplayer.i.g r3 = r3.c
            r0.a(r1, r3)
            return
    }

    private void a(com.tkay.expressad.exoplayer.k.a r14) {
            r13 = this;
            com.tkay.expressad.exoplayer.h.s r0 = r14.a
            com.tkay.expressad.exoplayer.h.s r1 = r13.S
            if (r0 == r1) goto L7
            return
        L7:
            com.tkay.expressad.exoplayer.u r0 = r13.R
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            com.tkay.expressad.exoplayer.ae r1 = r14.b
            java.lang.Object r14 = r14.c
            com.tkay.expressad.exoplayer.s r2 = r13.P
            r2.a(r1)
            com.tkay.expressad.exoplayer.u r2 = r13.R
            com.tkay.expressad.exoplayer.u r14 = r2.a(r1, r14)
            r13.R = r14
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r14 = r13.N
            int r14 = r14.size()
            r2 = 1
            int r14 = r14 - r2
        L24:
            r3 = 0
            if (r14 < 0) goto L4a
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r4 = r13.N
            java.lang.Object r4 = r4.get(r14)
            com.tkay.expressad.exoplayer.k$b r4 = (com.tkay.expressad.exoplayer.k.b) r4
            boolean r4 = r13.a(r4)
            if (r4 != 0) goto L47
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r4 = r13.N
            java.lang.Object r4 = r4.get(r14)
            com.tkay.expressad.exoplayer.k$b r4 = (com.tkay.expressad.exoplayer.k.b) r4
            com.tkay.expressad.exoplayer.x r4 = r4.a
            r4.a(r3)
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r13.N
            r3.remove(r14)
        L47:
            int r14 = r14 + (-1)
            goto L24
        L4a:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r14 = r13.N
            java.util.Collections.sort(r14)
            int r14 = r13.Z
            r4 = 0
            if (r14 <= 0) goto Lde
            com.tkay.expressad.exoplayer.k$c r0 = r13.M
            r0.a(r14)
            r13.Z = r3
            com.tkay.expressad.exoplayer.k$d r14 = r13.aa
            if (r14 == 0) goto L95
            android.util.Pair r14 = r13.a(r14, r2)
            r0 = 0
            r13.aa = r0
            if (r14 != 0) goto L6d
            r13.o()
            return
        L6d:
            java.lang.Object r0 = r14.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            java.lang.Object r14 = r14.second
            java.lang.Long r14 = (java.lang.Long) r14
            long r10 = r14.longValue()
            com.tkay.expressad.exoplayer.s r14 = r13.P
            com.tkay.expressad.exoplayer.h.s$a r7 = r14.a(r0, r10)
            com.tkay.expressad.exoplayer.u r6 = r13.R
            boolean r14 = r7.a()
            if (r14 == 0) goto L8d
            r8 = r4
            goto L8e
        L8d:
            r8 = r10
        L8e:
            com.tkay.expressad.exoplayer.u r14 = r6.a(r7, r8, r10)
            r13.R = r14
            return
        L95:
            com.tkay.expressad.exoplayer.u r14 = r13.R
            long r2 = r14.d
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r14 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r14 != 0) goto Ldd
            boolean r14 = r1.a()
            if (r14 == 0) goto Lac
            r13.o()
            return
        Lac:
            boolean r14 = r13.Y
            int r14 = r1.b(r14)
            android.util.Pair r14 = r13.a(r1, r14)
            java.lang.Object r0 = r14.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            java.lang.Object r14 = r14.second
            java.lang.Long r14 = (java.lang.Long) r14
            long r10 = r14.longValue()
            com.tkay.expressad.exoplayer.s r14 = r13.P
            com.tkay.expressad.exoplayer.h.s$a r7 = r14.a(r0, r10)
            com.tkay.expressad.exoplayer.u r6 = r13.R
            boolean r14 = r7.a()
            if (r14 == 0) goto Ld6
            r8 = r4
            goto Ld7
        Ld6:
            r8 = r10
        Ld7:
            com.tkay.expressad.exoplayer.u r14 = r6.a(r7, r8, r10)
            r13.R = r14
        Ldd:
            return
        Lde:
            com.tkay.expressad.exoplayer.u r14 = r13.R
            com.tkay.expressad.exoplayer.h.s$a r14 = r14.c
            int r14 = r14.a
            com.tkay.expressad.exoplayer.u r6 = r13.R
            long r11 = r6.e
            boolean r6 = r0.a()
            if (r6 == 0) goto L10c
            boolean r0 = r1.a()
            if (r0 != 0) goto L10b
            com.tkay.expressad.exoplayer.s r0 = r13.P
            com.tkay.expressad.exoplayer.h.s$a r8 = r0.a(r14, r11)
            com.tkay.expressad.exoplayer.u r7 = r13.R
            boolean r14 = r8.a()
            if (r14 == 0) goto L104
            r9 = r4
            goto L105
        L104:
            r9 = r11
        L105:
            com.tkay.expressad.exoplayer.u r14 = r7.a(r8, r9, r11)
            r13.R = r14
        L10b:
            return
        L10c:
            com.tkay.expressad.exoplayer.s r6 = r13.P
            com.tkay.expressad.exoplayer.q r6 = r6.e()
            if (r6 != 0) goto L11d
            com.tkay.expressad.exoplayer.ae$a r7 = r13.I
            com.tkay.expressad.exoplayer.ae$a r7 = r0.a(r14, r7, r2)
            java.lang.Object r7 = r7.b
            goto L11f
        L11d:
            java.lang.Object r7 = r6.b
        L11f:
            int r7 = r1.a(r7)
            r8 = -1
            if (r7 != r8) goto L19c
            int r14 = r13.a(r14, r0, r1)
            if (r14 != r8) goto L130
            r13.o()
            return
        L130:
            com.tkay.expressad.exoplayer.ae$a r0 = r13.I
            com.tkay.expressad.exoplayer.ae$a r14 = r1.a(r14, r0, r3)
            int r14 = r14.c
            android.util.Pair r14 = r13.a(r1, r14)
            java.lang.Object r0 = r14.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            java.lang.Object r14 = r14.second
            java.lang.Long r14 = (java.lang.Long) r14
            long r11 = r14.longValue()
            com.tkay.expressad.exoplayer.s r14 = r13.P
            com.tkay.expressad.exoplayer.h.s$a r8 = r14.a(r0, r11)
            com.tkay.expressad.exoplayer.ae$a r14 = r13.I
            r1.a(r0, r14, r2)
            if (r6 == 0) goto L187
            com.tkay.expressad.exoplayer.ae$a r14 = r13.I
            java.lang.Object r14 = r14.b
            com.tkay.expressad.exoplayer.r r1 = r6.h
            com.tkay.expressad.exoplayer.r r1 = r1.a()
            r6.h = r1
        L165:
            com.tkay.expressad.exoplayer.q r1 = r6.i
            if (r1 == 0) goto L187
            com.tkay.expressad.exoplayer.q r6 = r6.i
            java.lang.Object r1 = r6.b
            boolean r1 = r1.equals(r14)
            if (r1 == 0) goto L17e
            com.tkay.expressad.exoplayer.s r1 = r13.P
            com.tkay.expressad.exoplayer.r r2 = r6.h
            com.tkay.expressad.exoplayer.r r1 = r1.a(r2, r0)
            r6.h = r1
            goto L165
        L17e:
            com.tkay.expressad.exoplayer.r r1 = r6.h
            com.tkay.expressad.exoplayer.r r1 = r1.a()
            r6.h = r1
            goto L165
        L187:
            boolean r14 = r8.a()
            if (r14 == 0) goto L18e
            goto L18f
        L18e:
            r4 = r11
        L18f:
            long r9 = r13.a(r8, r4)
            com.tkay.expressad.exoplayer.u r7 = r13.R
            com.tkay.expressad.exoplayer.u r14 = r7.a(r8, r9, r11)
            r13.R = r14
            return
        L19c:
            if (r7 == r14) goto L1a6
            com.tkay.expressad.exoplayer.u r14 = r13.R
            com.tkay.expressad.exoplayer.u r14 = r14.a(r7)
            r13.R = r14
        L1a6:
            com.tkay.expressad.exoplayer.u r14 = r13.R
            com.tkay.expressad.exoplayer.h.s$a r14 = r14.c
            boolean r0 = r14.a()
            if (r0 == 0) goto L1d1
            com.tkay.expressad.exoplayer.s r0 = r13.P
            com.tkay.expressad.exoplayer.h.s$a r8 = r0.a(r7, r11)
            boolean r0 = r8.equals(r14)
            if (r0 != 0) goto L1d1
            boolean r14 = r8.a()
            if (r14 == 0) goto L1c3
            goto L1c4
        L1c3:
            r4 = r11
        L1c4:
            long r9 = r13.a(r8, r4)
            com.tkay.expressad.exoplayer.u r7 = r13.R
            com.tkay.expressad.exoplayer.u r14 = r7.a(r8, r9, r11)
            r13.R = r14
            return
        L1d1:
            com.tkay.expressad.exoplayer.s r0 = r13.P
            long r1 = r13.ab
            boolean r14 = r0.a(r14, r1)
            if (r14 != 0) goto L1de
            r13.g(r3)
        L1de:
            return
    }

    private void a(com.tkay.expressad.exoplayer.k.d r21) {
            r20 = this;
            r1 = r20
            r0 = r21
            com.tkay.expressad.exoplayer.k$c r2 = r1.M
            r3 = 1
            r2.a(r3)
            android.util.Pair r2 = r1.a(r0, r3)
            r4 = 0
            r6 = 0
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r2 != 0) goto L27
            com.tkay.expressad.exoplayer.h.s$a r2 = new com.tkay.expressad.exoplayer.h.s$a
            int r9 = r20.j()
            r2.<init>(r9)
            r15 = r2
            r2 = r3
            r12 = r7
            r18 = r12
            goto L5b
        L27:
            java.lang.Object r9 = r2.first
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            java.lang.Object r10 = r2.second
            java.lang.Long r10 = (java.lang.Long) r10
            long r10 = r10.longValue()
            com.tkay.expressad.exoplayer.s r12 = r1.P
            com.tkay.expressad.exoplayer.h.s$a r9 = r12.a(r9, r10)
            boolean r12 = r9.a()
            if (r12 == 0) goto L49
            r2 = r3
            r12 = r4
        L45:
            r15 = r9
            r18 = r10
            goto L5b
        L49:
            java.lang.Object r2 = r2.second
            java.lang.Long r2 = (java.lang.Long) r2
            long r12 = r2.longValue()
            long r14 = r0.c
            int r2 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
            if (r2 != 0) goto L59
            r2 = r3
            goto L45
        L59:
            r2 = r6
            goto L45
        L5b:
            r9 = 2
            com.tkay.expressad.exoplayer.h.s r10 = r1.S     // Catch: java.lang.Throwable -> Lda
            if (r10 == 0) goto Lc6
            int r10 = r1.Z     // Catch: java.lang.Throwable -> Lda
            if (r10 <= 0) goto L65
            goto Lc6
        L65:
            int r0 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r0 != 0) goto L71
            r0 = 4
            r1.b(r0)     // Catch: java.lang.Throwable -> Lda
            r1.a(r6, r3, r6)     // Catch: java.lang.Throwable -> Lda
            goto Lc8
        L71:
            com.tkay.expressad.exoplayer.u r0 = r1.R     // Catch: java.lang.Throwable -> Lda
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c     // Catch: java.lang.Throwable -> Lda
            boolean r0 = r15.equals(r0)     // Catch: java.lang.Throwable -> Lda
            if (r0 == 0) goto Lb7
            com.tkay.expressad.exoplayer.s r0 = r1.P     // Catch: java.lang.Throwable -> Lda
            com.tkay.expressad.exoplayer.q r0 = r0.c()     // Catch: java.lang.Throwable -> Lda
            if (r0 == 0) goto L90
            int r4 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r4 == 0) goto L90
            com.tkay.expressad.exoplayer.h.r r0 = r0.a     // Catch: java.lang.Throwable -> Lda
            com.tkay.expressad.exoplayer.ac r4 = r1.Q     // Catch: java.lang.Throwable -> Lda
            long r4 = r0.a(r12, r4)     // Catch: java.lang.Throwable -> Lda
            goto L91
        L90:
            r4 = r12
        L91:
            long r7 = com.tkay.expressad.exoplayer.b.a(r4)     // Catch: java.lang.Throwable -> Lda
            com.tkay.expressad.exoplayer.u r0 = r1.R     // Catch: java.lang.Throwable -> Lda
            long r10 = r0.j     // Catch: java.lang.Throwable -> Lda
            long r10 = com.tkay.expressad.exoplayer.b.a(r10)     // Catch: java.lang.Throwable -> Lda
            int r0 = (r7 > r10 ? 1 : (r7 == r10 ? 0 : -1))
            if (r0 != 0) goto Lb8
            com.tkay.expressad.exoplayer.u r0 = r1.R     // Catch: java.lang.Throwable -> Lda
            long r3 = r0.j     // Catch: java.lang.Throwable -> Lda
            com.tkay.expressad.exoplayer.u r14 = r1.R
            r16 = r3
            com.tkay.expressad.exoplayer.u r0 = r14.a(r15, r16, r18)
            r1.R = r0
            if (r2 == 0) goto Lb6
            com.tkay.expressad.exoplayer.k$c r0 = r1.M
            r0.b(r9)
        Lb6:
            return
        Lb7:
            r4 = r12
        Lb8:
            long r4 = r1.a(r15, r4)     // Catch: java.lang.Throwable -> Lda
            int r0 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r0 == 0) goto Lc1
            goto Lc2
        Lc1:
            r3 = r6
        Lc2:
            r2 = r2 | r3
            r16 = r4
            goto Lca
        Lc6:
            r1.aa = r0     // Catch: java.lang.Throwable -> Lda
        Lc8:
            r16 = r12
        Lca:
            com.tkay.expressad.exoplayer.u r14 = r1.R
            com.tkay.expressad.exoplayer.u r0 = r14.a(r15, r16, r18)
            r1.R = r0
            if (r2 == 0) goto Ld9
            com.tkay.expressad.exoplayer.k$c r0 = r1.M
            r0.b(r9)
        Ld9:
            return
        Lda:
            r0 = move-exception
            com.tkay.expressad.exoplayer.u r14 = r1.R
            r16 = r12
            com.tkay.expressad.exoplayer.u r3 = r14.a(r15, r16, r18)
            r1.R = r3
            if (r2 == 0) goto Lec
            com.tkay.expressad.exoplayer.k$c r2 = r1.M
            r2.b(r9)
        Lec:
            throw r0
    }

    private void a(com.tkay.expressad.exoplayer.q r9) {
            r8 = this;
            com.tkay.expressad.exoplayer.s r0 = r8.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            if (r0 == 0) goto L60
            if (r9 != r0) goto Lb
            goto L60
        Lb:
            com.tkay.expressad.exoplayer.y[] r1 = r8.y
            int r1 = r1.length
            boolean[] r1 = new boolean[r1]
            r2 = 0
            r3 = r2
            r4 = r3
        L13:
            com.tkay.expressad.exoplayer.y[] r5 = r8.y
            int r6 = r5.length
            if (r3 >= r6) goto L51
            r5 = r5[r3]
            int r6 = r5.a_()
            if (r6 == 0) goto L22
            r6 = 1
            goto L23
        L22:
            r6 = r2
        L23:
            r1[r3] = r6
            com.tkay.expressad.exoplayer.i.i r6 = r0.k
            boolean r6 = r6.a(r3)
            if (r6 == 0) goto L2f
            int r4 = r4 + 1
        L2f:
            boolean r6 = r1[r3]
            if (r6 == 0) goto L4e
            com.tkay.expressad.exoplayer.i.i r6 = r0.k
            boolean r6 = r6.a(r3)
            if (r6 == 0) goto L4b
            boolean r6 = r5.i()
            if (r6 == 0) goto L4e
            com.tkay.expressad.exoplayer.h.y r6 = r5.f()
            com.tkay.expressad.exoplayer.h.y[] r7 = r9.c
            r7 = r7[r3]
            if (r6 != r7) goto L4e
        L4b:
            r8.b(r5)
        L4e:
            int r3 = r3 + 1
            goto L13
        L51:
            com.tkay.expressad.exoplayer.u r9 = r8.R
            com.tkay.expressad.exoplayer.h.af r2 = r0.j
            com.tkay.expressad.exoplayer.i.i r0 = r0.k
            com.tkay.expressad.exoplayer.u r9 = r9.a(r2, r0)
            r8.R = r9
            r8.a(r1, r4)
        L60:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.y r2) {
            int r0 = r2.a_()
            r1 = 2
            if (r0 != r1) goto La
            r2.k()
        La:
            return
    }

    private void a(boolean r3, boolean r4) {
            r2 = this;
            r0 = 1
            r2.a(r0, r3, r3)
            com.tkay.expressad.exoplayer.k$c r3 = r2.M
            int r1 = r2.Z
            int r1 = r1 + r4
            r3.a(r1)
            r3 = 0
            r2.Z = r3
            com.tkay.expressad.exoplayer.p r3 = r2.C
            r3.b()
            r2.b(r0)
            return
    }

    private void a(boolean r17, boolean r18, boolean r19) {
            r16 = this;
            r1 = r16
            com.tkay.expressad.exoplayer.k.k r0 = r1.D
            r0.b()
            r2 = 0
            r1.W = r2
            com.tkay.expressad.exoplayer.e r0 = r1.L
            r0.b()
            r3 = 0
            r1.ab = r3
            com.tkay.expressad.exoplayer.y[] r3 = r1.T
            int r4 = r3.length
            r5 = r2
        L17:
            if (r5 >= r4) goto L2c
            r0 = r3[r5]
            r1.b(r0)     // Catch: java.lang.RuntimeException -> L1f com.tkay.expressad.exoplayer.g -> L21
            goto L29
        L1f:
            r0 = move-exception
            goto L22
        L21:
            r0 = move-exception
        L22:
            java.lang.String r6 = "ExoPlayerImplInternal"
            java.lang.String r7 = "Stop failed."
            android.util.Log.e(r6, r7, r0)
        L29:
            int r5 = r5 + 1
            goto L17
        L2c:
            com.tkay.expressad.exoplayer.y[] r0 = new com.tkay.expressad.exoplayer.y[r2]
            r1.T = r0
            com.tkay.expressad.exoplayer.s r0 = r1.P
            r3 = r18 ^ 1
            r0.b(r3)
            r1.d(r2)
            r0 = 0
            if (r18 == 0) goto L3f
            r1.aa = r0
        L3f:
            if (r19 == 0) goto L67
            com.tkay.expressad.exoplayer.s r3 = r1.P
            com.tkay.expressad.exoplayer.ae r4 = com.tkay.expressad.exoplayer.ae.a
            r3.a(r4)
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r1.N
            java.util.Iterator r3 = r3.iterator()
        L4e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L60
            java.lang.Object r4 = r3.next()
            com.tkay.expressad.exoplayer.k$b r4 = (com.tkay.expressad.exoplayer.k.b) r4
            com.tkay.expressad.exoplayer.x r4 = r4.a
            r4.a(r2)
            goto L4e
        L60:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r1.N
            r3.clear()
            r1.ac = r2
        L67:
            com.tkay.expressad.exoplayer.u r2 = new com.tkay.expressad.exoplayer.u
            if (r19 == 0) goto L6e
            com.tkay.expressad.exoplayer.ae r3 = com.tkay.expressad.exoplayer.ae.a
            goto L72
        L6e:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            com.tkay.expressad.exoplayer.ae r3 = r3.a
        L72:
            r5 = r3
            if (r19 == 0) goto L77
            r6 = r0
            goto L7c
        L77:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            java.lang.Object r3 = r3.b
            r6 = r3
        L7c:
            if (r18 == 0) goto L88
            com.tkay.expressad.exoplayer.h.s$a r3 = new com.tkay.expressad.exoplayer.h.s$a
            int r4 = r16.j()
            r3.<init>(r4)
            goto L8c
        L88:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            com.tkay.expressad.exoplayer.h.s$a r3 = r3.c
        L8c:
            r7 = r3
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r18 == 0) goto L96
            r8 = r3
            goto L9a
        L96:
            com.tkay.expressad.exoplayer.u r8 = r1.R
            long r8 = r8.j
        L9a:
            if (r18 == 0) goto L9d
            goto La1
        L9d:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            long r3 = r3.e
        La1:
            r10 = r3
            com.tkay.expressad.exoplayer.u r3 = r1.R
            int r12 = r3.f
            r13 = 0
            if (r19 == 0) goto Lac
            com.tkay.expressad.exoplayer.h.af r3 = com.tkay.expressad.exoplayer.h.af.a
            goto Lb0
        Lac:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            com.tkay.expressad.exoplayer.h.af r3 = r3.h
        Lb0:
            r14 = r3
            if (r19 == 0) goto Lb6
            com.tkay.expressad.exoplayer.i.i r3 = r1.B
            goto Lba
        Lb6:
            com.tkay.expressad.exoplayer.u r3 = r1.R
            com.tkay.expressad.exoplayer.i.i r3 = r3.i
        Lba:
            r15 = r3
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r10, r12, r13, r14, r15)
            r1.R = r2
            if (r17 == 0) goto Lcc
            com.tkay.expressad.exoplayer.h.s r2 = r1.S
            if (r2 == 0) goto Lcc
            r2.a(r1)
            r1.S = r0
        Lcc:
            return
    }

    private void a(boolean[] r5, int r6) {
            r4 = this;
            com.tkay.expressad.exoplayer.y[] r6 = new com.tkay.expressad.exoplayer.y[r6]
            r4.T = r6
            com.tkay.expressad.exoplayer.s r6 = r4.P
            com.tkay.expressad.exoplayer.q r6 = r6.c()
            r0 = 0
            r1 = r0
        Lc:
            com.tkay.expressad.exoplayer.y[] r2 = r4.y
            int r2 = r2.length
            if (r0 >= r2) goto L24
            com.tkay.expressad.exoplayer.i.i r2 = r6.k
            boolean r2 = r2.a(r0)
            if (r2 == 0) goto L21
            boolean r2 = r5[r0]
            int r3 = r1 + 1
            r4.a(r0, r2, r1)
            r1 = r3
        L21:
            int r0 = r0 + 1
            goto Lc
        L24:
            return
    }

    private boolean a(com.tkay.expressad.exoplayer.h.s.a r4, long r5, com.tkay.expressad.exoplayer.q r7) {
            r3 = this;
            com.tkay.expressad.exoplayer.r r0 = r7.h
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.a
            boolean r4 = r4.equals(r0)
            r0 = 0
            if (r4 == 0) goto L37
            boolean r4 = r7.f
            if (r4 == 0) goto L37
            com.tkay.expressad.exoplayer.u r4 = r3.R
            com.tkay.expressad.exoplayer.ae r4 = r4.a
            com.tkay.expressad.exoplayer.r r1 = r7.h
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.a
            int r1 = r1.a
            com.tkay.expressad.exoplayer.ae$a r2 = r3.I
            r4.a(r1, r2, r0)
            com.tkay.expressad.exoplayer.ae$a r4 = r3.I
            int r4 = r4.b(r5)
            r5 = -1
            if (r4 == r5) goto L35
            com.tkay.expressad.exoplayer.ae$a r5 = r3.I
            long r4 = r5.a(r4)
            com.tkay.expressad.exoplayer.r r6 = r7.h
            long r6 = r6.c
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L37
        L35:
            r4 = 1
            return r4
        L37:
            return r0
    }

    private boolean a(com.tkay.expressad.exoplayer.k.b r8) {
            r7 = this;
            java.lang.Object r0 = r8.d
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L50
            com.tkay.expressad.exoplayer.k$d r0 = new com.tkay.expressad.exoplayer.k$d
            com.tkay.expressad.exoplayer.x r3 = r8.a
            com.tkay.expressad.exoplayer.ae r3 = r3.a()
            com.tkay.expressad.exoplayer.x r4 = r8.a
            int r4 = r4.g()
            com.tkay.expressad.exoplayer.x r5 = r8.a
            long r5 = r5.f()
            long r5 = com.tkay.expressad.exoplayer.b.b(r5)
            r0.<init>(r3, r4, r5)
            android.util.Pair r0 = r7.a(r0, r2)
            if (r0 != 0) goto L28
            return r2
        L28:
            java.lang.Object r2 = r0.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r3 = r0.second
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            com.tkay.expressad.exoplayer.u r5 = r7.R
            com.tkay.expressad.exoplayer.ae r5 = r5.a
            java.lang.Object r0 = r0.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            com.tkay.expressad.exoplayer.ae$a r6 = r7.I
            com.tkay.expressad.exoplayer.ae$a r0 = r5.a(r0, r6, r1)
            java.lang.Object r0 = r0.b
            r8.a(r2, r3, r0)
            goto L60
        L50:
            com.tkay.expressad.exoplayer.u r0 = r7.R
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            java.lang.Object r3 = r8.d
            int r0 = r0.a(r3)
            r3 = -1
            if (r0 != r3) goto L5e
            return r2
        L5e:
            r8.b = r0
        L60:
            return r1
    }

    private static com.tkay.expressad.exoplayer.m[] a(com.tkay.expressad.exoplayer.i.f r4) {
            r0 = 0
            if (r4 == 0) goto L8
            int r1 = r4.g()
            goto L9
        L8:
            r1 = r0
        L9:
            com.tkay.expressad.exoplayer.m[] r2 = new com.tkay.expressad.exoplayer.m[r1]
        Lb:
            if (r0 >= r1) goto L16
            com.tkay.expressad.exoplayer.m r3 = r4.a(r0)
            r2[r0] = r3
            int r0 = r0 + 1
            goto Lb
        L16:
            return r2
    }

    private void b(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.R
            int r0 = r0.f
            if (r0 == r2) goto Le
            com.tkay.expressad.exoplayer.u r0 = r1.R
            com.tkay.expressad.exoplayer.u r2 = r0.b(r2)
            r1.R = r2
        Le:
            return
    }

    private void b(long r6, long r8) {
            r5 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r0 = r5.N
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Led
            com.tkay.expressad.exoplayer.u r0 = r5.R
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            boolean r0 = r0.a()
            if (r0 == 0) goto L14
            goto Led
        L14:
            com.tkay.expressad.exoplayer.u r0 = r5.R
            long r0 = r0.d
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 != 0) goto L1f
            r0 = 1
            long r6 = r6 - r0
        L1f:
            com.tkay.expressad.exoplayer.u r0 = r5.R
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            int r0 = r0.a
            int r1 = r5.ac
            r2 = 0
            if (r1 <= 0) goto L35
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r5.N
            int r1 = r1 + (-1)
            java.lang.Object r1 = r3.get(r1)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            goto L36
        L35:
            r1 = r2
        L36:
            if (r1 == 0) goto L59
            int r3 = r1.b
            if (r3 > r0) goto L46
            int r3 = r1.b
            if (r3 != r0) goto L59
            long r3 = r1.c
            int r1 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r1 <= 0) goto L59
        L46:
            int r1 = r5.ac
            int r1 = r1 + (-1)
            r5.ac = r1
            if (r1 <= 0) goto L35
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r5.N
            int r1 = r1 + (-1)
            java.lang.Object r1 = r3.get(r1)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            goto L36
        L59:
            int r1 = r5.ac
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r5.N
            int r3 = r3.size()
            if (r1 >= r3) goto L6e
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r5.N
            int r3 = r5.ac
            java.lang.Object r1 = r1.get(r3)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            goto L6f
        L6e:
            r1 = r2
        L6f:
            if (r1 == 0) goto L9c
            java.lang.Object r3 = r1.d
            if (r3 == 0) goto L9c
            int r3 = r1.b
            if (r3 < r0) goto L83
            int r3 = r1.b
            if (r3 != r0) goto L9c
            long r3 = r1.c
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 > 0) goto L9c
        L83:
            int r1 = r5.ac
            int r1 = r1 + 1
            r5.ac = r1
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r5.N
            int r3 = r3.size()
            if (r1 >= r3) goto L6e
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r5.N
            int r3 = r5.ac
            java.lang.Object r1 = r1.get(r3)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            goto L6f
        L9c:
            if (r1 == 0) goto Led
            java.lang.Object r3 = r1.d
            if (r3 == 0) goto Led
            int r3 = r1.b
            if (r3 != r0) goto Led
            long r3 = r1.c
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 <= 0) goto Led
            long r3 = r1.c
            int r3 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r3 > 0) goto Led
            com.tkay.expressad.exoplayer.x r3 = r1.a
            r5.d(r3)
            com.tkay.expressad.exoplayer.x r3 = r1.a
            boolean r3 = r3.h()
            if (r3 != 0) goto Lcf
            com.tkay.expressad.exoplayer.x r1 = r1.a
            boolean r1 = r1.j()
            if (r1 == 0) goto Lc8
            goto Lcf
        Lc8:
            int r1 = r5.ac
            int r1 = r1 + 1
            r5.ac = r1
            goto Ld6
        Lcf:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r5.N
            int r3 = r5.ac
            r1.remove(r3)
        Ld6:
            int r1 = r5.ac
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r3 = r5.N
            int r3 = r3.size()
            if (r1 >= r3) goto Leb
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r5.N
            int r3 = r5.ac
            java.lang.Object r1 = r1.get(r3)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            goto L9c
        Leb:
            r1 = r2
            goto L9c
        Led:
            return
    }

    private void b(com.tkay.expressad.exoplayer.ac r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    private void b(com.tkay.expressad.exoplayer.h.r r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 10
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    private void b(com.tkay.expressad.exoplayer.h.s r3, boolean r4, boolean r5) {
            r2 = this;
            int r0 = r2.Z
            r1 = 1
            int r0 = r0 + r1
            r2.Z = r0
            r2.a(r1, r4, r5)
            com.tkay.expressad.exoplayer.p r4 = r2.C
            r4.a()
            r2.S = r3
            r4 = 2
            r2.b(r4)
            com.tkay.expressad.exoplayer.h r5 = r2.G
            r3.a(r5, r1, r2)
            com.tkay.expressad.exoplayer.k.k r3 = r2.D
            r3.b(r4)
            return
    }

    static void b(com.tkay.expressad.exoplayer.x r0) {
            f(r0)
            return
    }

    private void b(com.tkay.expressad.exoplayer.y r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.e r0 = r1.L
            r0.b(r2)
            a(r2)
            r2.l()
            return
    }

    private void c(int r2) {
            r1 = this;
            r1.X = r2
            com.tkay.expressad.exoplayer.s r0 = r1.P
            boolean r2 = r0.a(r2)
            if (r2 != 0) goto Le
            r2 = 1
            r1.g(r2)
        Le:
            return
    }

    private void c(com.tkay.expressad.exoplayer.h.r r15) {
            r14 = this;
            com.tkay.expressad.exoplayer.s r0 = r14.P
            boolean r15 = r0.a(r15)
            if (r15 != 0) goto L9
            return
        L9:
            com.tkay.expressad.exoplayer.s r15 = r14.P
            com.tkay.expressad.exoplayer.q r15 = r15.b()
            com.tkay.expressad.exoplayer.e r0 = r14.L
            com.tkay.expressad.exoplayer.v r0 = r0.e()
            float r0 = r0.b
            r1 = 1
            r15.f = r1
            com.tkay.expressad.exoplayer.h.r r1 = r15.a
            com.tkay.expressad.exoplayer.h.af r1 = r1.b()
            r15.j = r1
            r15.a(r0)
            com.tkay.expressad.exoplayer.r r0 = r15.h
            long r0 = r0.b
            long r4 = r15.b(r0)
            long r0 = r15.e
            com.tkay.expressad.exoplayer.r r2 = r15.h
            long r2 = r2.b
            long r2 = r2 - r4
            long r0 = r0 + r2
            r15.e = r0
            com.tkay.expressad.exoplayer.r r0 = r15.h
            com.tkay.expressad.exoplayer.r r1 = new com.tkay.expressad.exoplayer.r
            com.tkay.expressad.exoplayer.h.s$a r3 = r0.a
            long r6 = r0.c
            long r8 = r0.d
            long r10 = r0.e
            boolean r12 = r0.f
            boolean r13 = r0.g
            r2 = r1
            r2.<init>(r3, r4, r6, r8, r10, r12, r13)
            r15.h = r1
            com.tkay.expressad.exoplayer.i.i r15 = r15.k
            r14.a(r15)
            com.tkay.expressad.exoplayer.s r15 = r14.P
            boolean r15 = r15.f()
            if (r15 != 0) goto L6b
            com.tkay.expressad.exoplayer.s r15 = r14.P
            com.tkay.expressad.exoplayer.q r15 = r15.h()
            com.tkay.expressad.exoplayer.r r15 = r15.h
            long r0 = r15.b
            r14.a(r0)
            r15 = 0
            r14.a(r15)
        L6b:
            r14.r()
            return
    }

    private void c(com.tkay.expressad.exoplayer.v r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.e r0 = r1.L
            r0.a(r2)
            return
    }

    private void c(com.tkay.expressad.exoplayer.x r5) {
            r4 = this;
            long r0 = r5.f()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L11
            r4.d(r5)
            return
        L11:
            com.tkay.expressad.exoplayer.h.s r0 = r4.S
            if (r0 == 0) goto L35
            int r0 = r4.Z
            if (r0 <= 0) goto L1a
            goto L35
        L1a:
            com.tkay.expressad.exoplayer.k$b r0 = new com.tkay.expressad.exoplayer.k$b
            r0.<init>(r5)
            boolean r1 = r4.a(r0)
            if (r1 == 0) goto L30
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r5 = r4.N
            r5.add(r0)
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r5 = r4.N
            java.util.Collections.sort(r5)
            return
        L30:
            r0 = 0
            r5.a(r0)
            return
        L35:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r0 = r4.N
            com.tkay.expressad.exoplayer.k$b r1 = new com.tkay.expressad.exoplayer.k$b
            r1.<init>(r5)
            r0.add(r1)
            return
    }

    private boolean c(com.tkay.expressad.exoplayer.y r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.s r0 = r2.P
            com.tkay.expressad.exoplayer.q r0 = r0.d()
            com.tkay.expressad.exoplayer.q r1 = r0.i
            if (r1 == 0) goto L18
            com.tkay.expressad.exoplayer.q r0 = r0.i
            boolean r0 = r0.f
            if (r0 == 0) goto L18
            boolean r3 = r3.g()
            if (r3 == 0) goto L18
            r3 = 1
            return r3
        L18:
            r3 = 0
            return r3
    }

    private void d() {
            r5 = this;
            com.tkay.expressad.exoplayer.k$c r0 = r5.M
            com.tkay.expressad.exoplayer.u r1 = r5.R
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto L33
            android.os.Handler r0 = r5.F
            r1 = 0
            com.tkay.expressad.exoplayer.k$c r2 = r5.M
            int r2 = com.tkay.expressad.exoplayer.k.c.a(r2)
            com.tkay.expressad.exoplayer.k$c r3 = r5.M
            boolean r3 = com.tkay.expressad.exoplayer.k.c.b(r3)
            if (r3 == 0) goto L22
            com.tkay.expressad.exoplayer.k$c r3 = r5.M
            int r3 = com.tkay.expressad.exoplayer.k.c.c(r3)
            goto L23
        L22:
            r3 = -1
        L23:
            com.tkay.expressad.exoplayer.u r4 = r5.R
            android.os.Message r0 = r0.obtainMessage(r1, r2, r3, r4)
            r0.sendToTarget()
            com.tkay.expressad.exoplayer.k$c r0 = r5.M
            com.tkay.expressad.exoplayer.u r1 = r5.R
            r0.b(r1)
        L33:
            return
    }

    private void d(com.tkay.expressad.exoplayer.h.r r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.s r0 = r2.P
            boolean r3 = r0.a(r3)
            if (r3 != 0) goto L9
            return
        L9:
            com.tkay.expressad.exoplayer.s r3 = r2.P
            long r0 = r2.ab
            r3.a(r0)
            r2.r()
            return
    }

    private void d(com.tkay.expressad.exoplayer.x r3) {
            r2 = this;
            android.os.Handler r0 = r3.e()
            android.os.Looper r0 = r0.getLooper()
            com.tkay.expressad.exoplayer.k.k r1 = r2.D
            android.os.Looper r1 = r1.a()
            if (r0 != r1) goto L27
            f(r3)
            com.tkay.expressad.exoplayer.u r3 = r2.R
            int r3 = r3.f
            r0 = 3
            r1 = 2
            if (r3 == r0) goto L21
            com.tkay.expressad.exoplayer.u r3 = r2.R
            int r3 = r3.f
            if (r3 != r1) goto L32
        L21:
            com.tkay.expressad.exoplayer.k.k r3 = r2.D
            r3.b(r1)
            return
        L27:
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 15
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
        L32:
            return
    }

    private void d(boolean r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.R
            boolean r0 = r0.g
            if (r0 == r2) goto Le
            com.tkay.expressad.exoplayer.u r0 = r1.R
            com.tkay.expressad.exoplayer.u r2 = r0.a(r2)
            r1.R = r2
        Le:
            return
    }

    private void e() {
            r4 = this;
            r0 = 0
            r4.W = r0
            com.tkay.expressad.exoplayer.e r1 = r4.L
            r1.a()
            com.tkay.expressad.exoplayer.y[] r1 = r4.T
            int r2 = r1.length
        Lb:
            if (r0 >= r2) goto L15
            r3 = r1[r0]
            r3.b_()
            int r0 = r0 + 1
            goto Lb
        L15:
            return
    }

    private void e(com.tkay.expressad.exoplayer.x r3) {
            r2 = this;
            android.os.Handler r0 = r3.e()
            com.tkay.expressad.exoplayer.k$1 r1 = new com.tkay.expressad.exoplayer.k$1
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    private void e(boolean r3) {
            r2 = this;
            r0 = 0
            r2.W = r0
            r2.V = r3
            if (r3 != 0) goto Le
            r2.f()
            r2.g()
            return
        Le:
            com.tkay.expressad.exoplayer.u r3 = r2.R
            int r3 = r3.f
            r0 = 3
            r1 = 2
            if (r3 != r0) goto L1f
            r2.e()
            com.tkay.expressad.exoplayer.k.k r3 = r2.D
            r3.b(r1)
            return
        L1f:
            com.tkay.expressad.exoplayer.u r3 = r2.R
            int r3 = r3.f
            if (r3 != r1) goto L2a
            com.tkay.expressad.exoplayer.k.k r3 = r2.D
            r3.b(r1)
        L2a:
            return
    }

    private void f() {
            r4 = this;
            com.tkay.expressad.exoplayer.e r0 = r4.L
            r0.b()
            com.tkay.expressad.exoplayer.y[] r0 = r4.T
            int r1 = r0.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L13
            r3 = r0[r2]
            a(r3)
            int r2 = r2 + 1
            goto L9
        L13:
            return
    }

    private static void f(com.tkay.expressad.exoplayer.x r4) {
            boolean r0 = r4.j()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 1
            com.tkay.expressad.exoplayer.x$b r1 = r4.b()     // Catch: java.lang.Throwable -> L1b
            int r2 = r4.c()     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r3 = r4.d()     // Catch: java.lang.Throwable -> L1b
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L1b
            r4.a(r0)
            return
        L1b:
            r1 = move-exception
            r4.a(r0)
            throw r1
    }

    private void f(boolean r2) {
            r1 = this;
            r1.Y = r2
            com.tkay.expressad.exoplayer.s r0 = r1.P
            boolean r2 = r0.a(r2)
            if (r2 != 0) goto Le
            r2 = 1
            r1.g(r2)
        Le:
            return
    }

    private void g() {
            r8 = this;
            com.tkay.expressad.exoplayer.s r0 = r8.P
            boolean r0 = r0.f()
            if (r0 != 0) goto L9
            return
        L9:
            com.tkay.expressad.exoplayer.s r0 = r8.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.h.r r1 = r0.a
            long r4 = r1.c()
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 == 0) goto L3e
            r8.a(r4)
            com.tkay.expressad.exoplayer.u r1 = r8.R
            long r1 = r1.j
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 == 0) goto L54
            com.tkay.expressad.exoplayer.u r2 = r8.R
            com.tkay.expressad.exoplayer.h.s$a r3 = r2.c
            com.tkay.expressad.exoplayer.u r1 = r8.R
            long r6 = r1.e
            com.tkay.expressad.exoplayer.u r1 = r2.a(r3, r4, r6)
            r8.R = r1
            com.tkay.expressad.exoplayer.k$c r1 = r8.M
            r2 = 4
            r1.b(r2)
            goto L54
        L3e:
            com.tkay.expressad.exoplayer.e r1 = r8.L
            long r1 = r1.c()
            r8.ab = r1
            long r3 = r0.e
            long r1 = r1 - r3
            com.tkay.expressad.exoplayer.u r3 = r8.R
            long r3 = r3.j
            r8.b(r3, r1)
            com.tkay.expressad.exoplayer.u r3 = r8.R
            r3.j = r1
        L54:
            com.tkay.expressad.exoplayer.u r1 = r8.R
            com.tkay.expressad.exoplayer.y[] r2 = r8.T
            int r2 = r2.length
            if (r2 != 0) goto L60
            com.tkay.expressad.exoplayer.r r0 = r0.h
            long r2 = r0.e
            goto L65
        L60:
            r2 = 1
            long r2 = r0.a(r2)
        L65:
            r1.k = r2
            return
    }

    private void g(boolean r8) {
            r7 = this;
            com.tkay.expressad.exoplayer.s r0 = r7.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.r r0 = r0.h
            com.tkay.expressad.exoplayer.h.s$a r2 = r0.a
            com.tkay.expressad.exoplayer.u r0 = r7.R
            long r0 = r0.j
            r3 = 1
            long r3 = r7.a(r2, r0, r3)
            com.tkay.expressad.exoplayer.u r0 = r7.R
            long r0 = r0.j
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L2d
            com.tkay.expressad.exoplayer.u r1 = r7.R
            long r5 = r1.e
            com.tkay.expressad.exoplayer.u r0 = r1.a(r2, r3, r5)
            r7.R = r0
            if (r8 == 0) goto L2d
            com.tkay.expressad.exoplayer.k$c r8 = r7.M
            r0 = 4
            r8.b(r0)
        L2d:
            return
    }

    private void h() {
            r19 = this;
            r0 = r19
            com.tkay.expressad.exoplayer.k.c r1 = r0.O
            long r1 = r1.b()
            com.tkay.expressad.exoplayer.h.s r3 = r0.S
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 0
            r8 = 1
            if (r3 == 0) goto L1a4
            int r9 = r0.Z
            if (r9 <= 0) goto L1c
            r3.b()
            goto L1a4
        L1c:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            long r9 = r0.ab
            r3.a(r9)
            com.tkay.expressad.exoplayer.s r3 = r0.P
            boolean r3 = r3.a()
            if (r3 == 0) goto L6d
            com.tkay.expressad.exoplayer.s r3 = r0.P
            long r9 = r0.ab
            com.tkay.expressad.exoplayer.u r11 = r0.R
            com.tkay.expressad.exoplayer.r r3 = r3.a(r9, r11)
            if (r3 != 0) goto L3d
            com.tkay.expressad.exoplayer.h.s r3 = r0.S
            r3.b()
            goto L6d
        L3d:
            com.tkay.expressad.exoplayer.u r9 = r0.R
            com.tkay.expressad.exoplayer.ae r9 = r9.a
            com.tkay.expressad.exoplayer.h.s$a r10 = r3.a
            int r10 = r10.a
            com.tkay.expressad.exoplayer.ae$a r11 = r0.I
            com.tkay.expressad.exoplayer.ae$a r9 = r9.a(r10, r11, r8)
            java.lang.Object r9 = r9.b
            com.tkay.expressad.exoplayer.s r12 = r0.P
            com.tkay.expressad.exoplayer.z[] r13 = r0.z
            com.tkay.expressad.exoplayer.i.h r14 = r0.A
            com.tkay.expressad.exoplayer.p r10 = r0.C
            com.tkay.expressad.exoplayer.j.b r15 = r10.d()
            com.tkay.expressad.exoplayer.h.s r10 = r0.S
            r16 = r10
            r17 = r9
            r18 = r3
            com.tkay.expressad.exoplayer.h.r r9 = r12.a(r13, r14, r15, r16, r17, r18)
            long r10 = r3.b
            r9.a(r0, r10)
            r0.d(r8)
        L6d:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            com.tkay.expressad.exoplayer.q r3 = r3.b()
            if (r3 == 0) goto L86
            boolean r3 = r3.a()
            if (r3 == 0) goto L7c
            goto L86
        L7c:
            com.tkay.expressad.exoplayer.u r3 = r0.R
            boolean r3 = r3.g
            if (r3 != 0) goto L89
            r19.r()
            goto L89
        L86:
            r0.d(r7)
        L89:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            boolean r3 = r3.f()
            if (r3 == 0) goto L1a4
            com.tkay.expressad.exoplayer.s r3 = r0.P
            com.tkay.expressad.exoplayer.q r3 = r3.c()
            com.tkay.expressad.exoplayer.s r9 = r0.P
            com.tkay.expressad.exoplayer.q r9 = r9.d()
            r10 = r7
        L9e:
            boolean r11 = r0.V
            if (r11 == 0) goto Le7
            if (r3 == r9) goto Le7
            long r11 = r0.ab
            com.tkay.expressad.exoplayer.q r13 = r3.i
            long r13 = r13.e
            int r11 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r11 < 0) goto Le7
            if (r10 == 0) goto Lb3
            r19.d()
        Lb3:
            com.tkay.expressad.exoplayer.r r10 = r3.h
            boolean r10 = r10.f
            if (r10 == 0) goto Lbb
            r10 = r7
            goto Lbc
        Lbb:
            r10 = 3
        Lbc:
            com.tkay.expressad.exoplayer.s r11 = r0.P
            com.tkay.expressad.exoplayer.q r11 = r11.h()
            r0.a(r3)
            com.tkay.expressad.exoplayer.u r12 = r0.R
            com.tkay.expressad.exoplayer.r r3 = r11.h
            com.tkay.expressad.exoplayer.h.s$a r13 = r3.a
            com.tkay.expressad.exoplayer.r r3 = r11.h
            long r14 = r3.b
            com.tkay.expressad.exoplayer.r r3 = r11.h
            long r6 = r3.d
            r16 = r6
            com.tkay.expressad.exoplayer.u r3 = r12.a(r13, r14, r16)
            r0.R = r3
            com.tkay.expressad.exoplayer.k$c r3 = r0.M
            r3.b(r10)
            r19.g()
            r10 = r8
            r3 = r11
            r7 = 0
            goto L9e
        Le7:
            com.tkay.expressad.exoplayer.r r3 = r9.h
            boolean r3 = r3.g
            if (r3 == 0) goto L10d
            r3 = 0
        Lee:
            com.tkay.expressad.exoplayer.y[] r6 = r0.y
            int r7 = r6.length
            if (r3 >= r7) goto L1a4
            r6 = r6[r3]
            com.tkay.expressad.exoplayer.h.y[] r7 = r9.c
            r7 = r7[r3]
            if (r7 == 0) goto L10a
            com.tkay.expressad.exoplayer.h.y r10 = r6.f()
            if (r10 != r7) goto L10a
            boolean r7 = r6.g()
            if (r7 == 0) goto L10a
            r6.h()
        L10a:
            int r3 = r3 + 1
            goto Lee
        L10d:
            com.tkay.expressad.exoplayer.q r3 = r9.i
            if (r3 == 0) goto L1a4
            com.tkay.expressad.exoplayer.q r3 = r9.i
            boolean r3 = r3.f
            if (r3 != 0) goto L119
            goto L1a4
        L119:
            r3 = 0
        L11a:
            com.tkay.expressad.exoplayer.y[] r6 = r0.y
            int r7 = r6.length
            if (r3 >= r7) goto L138
            r6 = r6[r3]
            com.tkay.expressad.exoplayer.h.y[] r7 = r9.c
            r7 = r7[r3]
            com.tkay.expressad.exoplayer.h.y r10 = r6.f()
            if (r10 != r7) goto L1a4
            if (r7 == 0) goto L135
            boolean r6 = r6.g()
            if (r6 != 0) goto L135
            goto L1a4
        L135:
            int r3 = r3 + 1
            goto L11a
        L138:
            com.tkay.expressad.exoplayer.i.i r3 = r9.k
            com.tkay.expressad.exoplayer.s r6 = r0.P
            com.tkay.expressad.exoplayer.q r6 = r6.g()
            com.tkay.expressad.exoplayer.i.i r7 = r6.k
            com.tkay.expressad.exoplayer.h.r r9 = r6.a
            long r9 = r9.c()
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 == 0) goto L14e
            r9 = r8
            goto L14f
        L14e:
            r9 = 0
        L14f:
            r10 = 0
        L150:
            com.tkay.expressad.exoplayer.y[] r11 = r0.y
            int r12 = r11.length
            if (r10 >= r12) goto L1a4
            r11 = r11[r10]
            boolean r12 = r3.a(r10)
            if (r12 == 0) goto L1a0
            if (r9 != 0) goto L19d
            boolean r12 = r11.i()
            if (r12 != 0) goto L1a0
            com.tkay.expressad.exoplayer.i.g r12 = r7.c
            com.tkay.expressad.exoplayer.i.f r12 = r12.a(r10)
            boolean r13 = r7.a(r10)
            com.tkay.expressad.exoplayer.z[] r14 = r0.z
            r14 = r14[r10]
            int r14 = r14.a()
            r15 = 5
            if (r14 != r15) goto L17c
            r14 = r8
            goto L17d
        L17c:
            r14 = 0
        L17d:
            com.tkay.expressad.exoplayer.aa[] r15 = r3.b
            r15 = r15[r10]
            com.tkay.expressad.exoplayer.aa[] r8 = r7.b
            r8 = r8[r10]
            if (r13 == 0) goto L19d
            boolean r8 = r8.equals(r15)
            if (r8 == 0) goto L19d
            if (r14 != 0) goto L19d
            com.tkay.expressad.exoplayer.m[] r8 = a(r12)
            com.tkay.expressad.exoplayer.h.y[] r12 = r6.c
            r12 = r12[r10]
            long r13 = r6.e
            r11.a(r8, r12, r13)
            goto L1a0
        L19d:
            r11.h()
        L1a0:
            int r10 = r10 + 1
            r8 = 1
            goto L150
        L1a4:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            boolean r3 = r3.f()
            r6 = 10
            if (r3 != 0) goto L1b5
            r19.n()
            r0.a(r1, r6)
            return
        L1b5:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            com.tkay.expressad.exoplayer.q r3 = r3.c()
            java.lang.String r8 = "doSomeWork"
            com.tkay.expressad.exoplayer.k.ad.a(r8)
            r19.g()
            long r8 = android.os.SystemClock.elapsedRealtime()
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            com.tkay.expressad.exoplayer.h.r r12 = r3.a
            com.tkay.expressad.exoplayer.u r13 = r0.R
            long r13 = r13.j
            long r10 = r0.J
            long r13 = r13 - r10
            boolean r10 = r0.K
            r12.a(r13, r10)
            com.tkay.expressad.exoplayer.y[] r10 = r0.T
            int r11 = r10.length
            r12 = 0
            r13 = 1
            r14 = 1
        L1de:
            if (r12 >= r11) goto L22e
            r15 = r10[r12]
            long r6 = r0.ab
            r15.a(r6, r8)
            if (r14 == 0) goto L1f1
            boolean r6 = r15.v()
            if (r6 == 0) goto L1f1
            r14 = 1
            goto L1f2
        L1f1:
            r14 = 0
        L1f2:
            boolean r6 = r15.u()
            if (r6 != 0) goto L21c
            boolean r6 = r15.v()
            if (r6 != 0) goto L21c
            com.tkay.expressad.exoplayer.s r6 = r0.P
            com.tkay.expressad.exoplayer.q r6 = r6.d()
            com.tkay.expressad.exoplayer.q r7 = r6.i
            if (r7 == 0) goto L216
            com.tkay.expressad.exoplayer.q r6 = r6.i
            boolean r6 = r6.f
            if (r6 == 0) goto L216
            boolean r6 = r15.g()
            if (r6 == 0) goto L216
            r6 = 1
            goto L217
        L216:
            r6 = 0
        L217:
            if (r6 == 0) goto L21a
            goto L21c
        L21a:
            r6 = 0
            goto L21d
        L21c:
            r6 = 1
        L21d:
            if (r6 != 0) goto L222
            r15.j()
        L222:
            if (r13 == 0) goto L228
            if (r6 == 0) goto L228
            r13 = 1
            goto L229
        L228:
            r13 = 0
        L229:
            int r12 = r12 + 1
            r6 = 10
            goto L1de
        L22e:
            if (r13 != 0) goto L233
            r19.n()
        L233:
            com.tkay.expressad.exoplayer.r r6 = r3.h
            long r6 = r6.e
            r8 = 4
            r9 = 2
            if (r14 == 0) goto L255
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 == 0) goto L247
            com.tkay.expressad.exoplayer.u r4 = r0.R
            long r4 = r4.j
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 > 0) goto L255
        L247:
            com.tkay.expressad.exoplayer.r r3 = r3.h
            boolean r3 = r3.g
            if (r3 == 0) goto L255
            r0.b(r8)
            r19.f()
            goto L2d2
        L255:
            com.tkay.expressad.exoplayer.u r3 = r0.R
            int r3 = r3.f
            if (r3 != r9) goto L2b3
            com.tkay.expressad.exoplayer.y[] r3 = r0.T
            int r3 = r3.length
            if (r3 != 0) goto L267
            boolean r3 = r19.m()
            r16 = r3
            goto L2a5
        L267:
            if (r13 == 0) goto L2a3
            com.tkay.expressad.exoplayer.u r3 = r0.R
            boolean r3 = r3.g
            if (r3 != 0) goto L272
            r16 = 1
            goto L2a5
        L272:
            com.tkay.expressad.exoplayer.s r3 = r0.P
            com.tkay.expressad.exoplayer.q r3 = r3.b()
            com.tkay.expressad.exoplayer.r r4 = r3.h
            boolean r4 = r4.g
            r5 = 1
            r4 = r4 ^ r5
            long r6 = r3.a(r4)
            r10 = -9223372036854775808
            int r4 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r4 == 0) goto L2a0
            com.tkay.expressad.exoplayer.p r4 = r0.C
            long r10 = r0.ab
            long r14 = r3.e
            long r10 = r10 - r14
            long r6 = r6 - r10
            com.tkay.expressad.exoplayer.e r3 = r0.L
            com.tkay.expressad.exoplayer.v r3 = r3.e()
            float r3 = r3.b
            boolean r10 = r0.W
            boolean r3 = r4.a(r6, r3, r10)
            if (r3 == 0) goto L2a3
        L2a0:
            r16 = r5
            goto L2a5
        L2a3:
            r16 = 0
        L2a5:
            if (r16 == 0) goto L2b3
            r3 = 3
            r0.b(r3)
            boolean r4 = r0.V
            if (r4 == 0) goto L2d2
            r19.e()
            goto L2d2
        L2b3:
            r3 = 3
            com.tkay.expressad.exoplayer.u r4 = r0.R
            int r4 = r4.f
            if (r4 != r3) goto L2d2
            com.tkay.expressad.exoplayer.y[] r3 = r0.T
            int r3 = r3.length
            if (r3 != 0) goto L2c6
            boolean r3 = r19.m()
            if (r3 == 0) goto L2c8
            goto L2d2
        L2c6:
            if (r13 != 0) goto L2d2
        L2c8:
            boolean r3 = r0.V
            r0.W = r3
            r0.b(r9)
            r19.f()
        L2d2:
            com.tkay.expressad.exoplayer.u r3 = r0.R
            int r3 = r3.f
            if (r3 != r9) goto L2e6
            com.tkay.expressad.exoplayer.y[] r3 = r0.T
            int r4 = r3.length
            r7 = 0
        L2dc:
            if (r7 >= r4) goto L2e6
            r5 = r3[r7]
            r5.j()
            int r7 = r7 + 1
            goto L2dc
        L2e6:
            boolean r3 = r0.V
            if (r3 == 0) goto L2f1
            com.tkay.expressad.exoplayer.u r3 = r0.R
            int r3 = r3.f
            r4 = 3
            if (r3 == r4) goto L2f7
        L2f1:
            com.tkay.expressad.exoplayer.u r3 = r0.R
            int r3 = r3.f
            if (r3 != r9) goto L2fd
        L2f7:
            r3 = 10
            r0.a(r1, r3)
            goto L313
        L2fd:
            com.tkay.expressad.exoplayer.y[] r3 = r0.T
            int r3 = r3.length
            if (r3 == 0) goto L30e
            com.tkay.expressad.exoplayer.u r3 = r0.R
            int r3 = r3.f
            if (r3 == r8) goto L30e
            r3 = 1000(0x3e8, double:4.94E-321)
            r0.a(r1, r3)
            goto L313
        L30e:
            com.tkay.expressad.exoplayer.k.k r1 = r0.D
            r1.b()
        L313:
            com.tkay.expressad.exoplayer.k.ad.a()
            return
    }

    private boolean h(boolean r10) {
            r9 = this;
            com.tkay.expressad.exoplayer.y[] r0 = r9.T
            int r0 = r0.length
            if (r0 != 0) goto La
            boolean r10 = r9.m()
            return r10
        La:
            r0 = 0
            if (r10 != 0) goto Le
            return r0
        Le:
            com.tkay.expressad.exoplayer.u r10 = r9.R
            boolean r10 = r10.g
            r1 = 1
            if (r10 != 0) goto L16
            return r1
        L16:
            com.tkay.expressad.exoplayer.s r10 = r9.P
            com.tkay.expressad.exoplayer.q r10 = r10.b()
            com.tkay.expressad.exoplayer.r r2 = r10.h
            boolean r2 = r2.g
            r2 = r2 ^ r1
            long r2 = r10.a(r2)
            r4 = -9223372036854775808
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L45
            com.tkay.expressad.exoplayer.p r4 = r9.C
            long r5 = r9.ab
            long r7 = r10.e
            long r5 = r5 - r7
            long r2 = r2 - r5
            com.tkay.expressad.exoplayer.e r10 = r9.L
            com.tkay.expressad.exoplayer.v r10 = r10.e()
            float r10 = r10.b
            boolean r5 = r9.W
            boolean r10 = r4.a(r2, r10, r5)
            if (r10 == 0) goto L44
            goto L45
        L44:
            return r0
        L45:
            return r1
    }

    private void i() {
            r3 = this;
            r0 = 1
            r3.a(r0, r0, r0)
            com.tkay.expressad.exoplayer.p r1 = r3.C
            r1.c()
            r3.b(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 < r2) goto L18
            android.os.HandlerThread r1 = r3.E
            r1.quitSafely()
            goto L1d
        L18:
            android.os.HandlerThread r1 = r3.E
            r1.quit()
        L1d:
            monitor-enter(r3)
            r3.U = r0     // Catch: java.lang.Throwable -> L25
            r3.notifyAll()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private int j() {
            r4 = this;
            com.tkay.expressad.exoplayer.u r0 = r4.R
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            boolean r1 = r4.Y
            int r1 = r0.b(r1)
            com.tkay.expressad.exoplayer.ae$b r3 = r4.H
            com.tkay.expressad.exoplayer.ae$b r0 = r0.a(r1, r3, r2)
            int r0 = r0.f
            return r0
    }

    private void k() {
            r3 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r0 = r3.N
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L2e
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r3.N
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            boolean r1 = r3.a(r1)
            if (r1 != 0) goto L2b
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r3.N
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.k$b r1 = (com.tkay.expressad.exoplayer.k.b) r1
            com.tkay.expressad.exoplayer.x r1 = r1.a
            r2 = 0
            r1.a(r2)
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r1 = r3.N
            r1.remove(r0)
        L2b:
            int r0 = r0 + (-1)
            goto L8
        L2e:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r0 = r3.N
            java.util.Collections.sort(r0)
            return
    }

    private void l() {
            r15 = this;
            com.tkay.expressad.exoplayer.s r0 = r15.P
            boolean r0 = r0.f()
            if (r0 != 0) goto L9
            return
        L9:
            com.tkay.expressad.exoplayer.e r0 = r15.L
            com.tkay.expressad.exoplayer.v r0 = r0.e()
            float r0 = r0.b
            com.tkay.expressad.exoplayer.s r1 = r15.P
            com.tkay.expressad.exoplayer.q r1 = r1.c()
            com.tkay.expressad.exoplayer.s r2 = r15.P
            com.tkay.expressad.exoplayer.q r2 = r2.d()
            r3 = 1
            r4 = r3
        L1f:
            if (r1 == 0) goto Lf5
            boolean r5 = r1.f
            if (r5 != 0) goto L27
            goto Lf5
        L27:
            boolean r5 = r1.a(r0)
            r6 = 0
            if (r5 != 0) goto L34
            if (r1 != r2) goto L31
            r4 = r6
        L31:
            com.tkay.expressad.exoplayer.q r1 = r1.i
            goto L1f
        L34:
            r0 = 4
            if (r4 == 0) goto Lc5
            com.tkay.expressad.exoplayer.s r1 = r15.P
            com.tkay.expressad.exoplayer.q r1 = r1.c()
            com.tkay.expressad.exoplayer.s r2 = r15.P
            boolean r2 = r2.a(r1)
            com.tkay.expressad.exoplayer.y[] r4 = r15.y
            int r4 = r4.length
            boolean[] r4 = new boolean[r4]
            com.tkay.expressad.exoplayer.u r5 = r15.R
            long r7 = r5.j
            long r7 = r1.a(r7, r2, r4)
            com.tkay.expressad.exoplayer.i.i r2 = r1.k
            r15.a(r2)
            com.tkay.expressad.exoplayer.u r2 = r15.R
            int r2 = r2.f
            if (r2 == r0) goto L7a
            com.tkay.expressad.exoplayer.u r2 = r15.R
            long r9 = r2.j
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 == 0) goto L7a
            com.tkay.expressad.exoplayer.u r9 = r15.R
            com.tkay.expressad.exoplayer.h.s$a r10 = r9.c
            com.tkay.expressad.exoplayer.u r2 = r15.R
            long r13 = r2.e
            r11 = r7
            com.tkay.expressad.exoplayer.u r2 = r9.a(r10, r11, r13)
            r15.R = r2
            com.tkay.expressad.exoplayer.k$c r2 = r15.M
            r2.b(r0)
            r15.a(r7)
        L7a:
            com.tkay.expressad.exoplayer.y[] r2 = r15.y
            int r2 = r2.length
            boolean[] r2 = new boolean[r2]
            r5 = r6
            r7 = r5
        L81:
            com.tkay.expressad.exoplayer.y[] r8 = r15.y
            int r9 = r8.length
            if (r5 >= r9) goto Lb5
            r8 = r8[r5]
            int r9 = r8.a_()
            if (r9 == 0) goto L90
            r9 = r3
            goto L91
        L90:
            r9 = r6
        L91:
            r2[r5] = r9
            com.tkay.expressad.exoplayer.h.y[] r9 = r1.c
            r9 = r9[r5]
            if (r9 == 0) goto L9b
            int r7 = r7 + 1
        L9b:
            boolean r10 = r2[r5]
            if (r10 == 0) goto Lb2
            com.tkay.expressad.exoplayer.h.y r10 = r8.f()
            if (r9 == r10) goto La9
            r15.b(r8)
            goto Lb2
        La9:
            boolean r9 = r4[r5]
            if (r9 == 0) goto Lb2
            long r9 = r15.ab
            r8.a(r9)
        Lb2:
            int r5 = r5 + 1
            goto L81
        Lb5:
            com.tkay.expressad.exoplayer.u r3 = r15.R
            com.tkay.expressad.exoplayer.h.af r4 = r1.j
            com.tkay.expressad.exoplayer.i.i r1 = r1.k
            com.tkay.expressad.exoplayer.u r1 = r3.a(r4, r1)
            r15.R = r1
            r15.a(r2, r7)
            goto Le3
        Lc5:
            com.tkay.expressad.exoplayer.s r2 = r15.P
            r2.a(r1)
            boolean r2 = r1.f
            if (r2 == 0) goto Le3
            com.tkay.expressad.exoplayer.r r2 = r1.h
            long r2 = r2.b
            long r4 = r15.ab
            long r6 = r1.e
            long r4 = r4 - r6
            long r2 = java.lang.Math.max(r2, r4)
            r1.b(r2)
            com.tkay.expressad.exoplayer.i.i r1 = r1.k
            r15.a(r1)
        Le3:
            com.tkay.expressad.exoplayer.u r1 = r15.R
            int r1 = r1.f
            if (r1 == r0) goto Lf5
            r15.r()
            r15.g()
            com.tkay.expressad.exoplayer.k.k r0 = r15.D
            r1 = 2
            r0.b(r1)
        Lf5:
            return
    }

    private boolean m() {
            r5 = this;
            com.tkay.expressad.exoplayer.s r0 = r5.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.r r1 = r0.h
            long r1 = r1.e
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            com.tkay.expressad.exoplayer.u r3 = r5.R
            long r3 = r3.j
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 < 0) goto L34
            com.tkay.expressad.exoplayer.q r1 = r0.i
            if (r1 == 0) goto L32
            com.tkay.expressad.exoplayer.q r1 = r0.i
            boolean r1 = r1.f
            if (r1 != 0) goto L34
            com.tkay.expressad.exoplayer.q r0 = r0.i
            com.tkay.expressad.exoplayer.r r0 = r0.h
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.a
            boolean r0 = r0.a()
            if (r0 == 0) goto L32
            goto L34
        L32:
            r0 = 0
            return r0
        L34:
            r0 = 1
            return r0
    }

    private void n() {
            r5 = this;
            com.tkay.expressad.exoplayer.s r0 = r5.P
            com.tkay.expressad.exoplayer.q r0 = r0.b()
            com.tkay.expressad.exoplayer.s r1 = r5.P
            com.tkay.expressad.exoplayer.q r1 = r1.d()
            if (r0 == 0) goto L2f
            boolean r2 = r0.f
            if (r2 != 0) goto L2f
            if (r1 == 0) goto L18
            com.tkay.expressad.exoplayer.q r1 = r1.i
            if (r1 != r0) goto L2f
        L18:
            com.tkay.expressad.exoplayer.y[] r1 = r5.T
            int r2 = r1.length
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2a
            r4 = r1[r3]
            boolean r4 = r4.g()
            if (r4 != 0) goto L27
            return
        L27:
            int r3 = r3 + 1
            goto L1c
        L2a:
            com.tkay.expressad.exoplayer.h.r r0 = r0.a
            r0.a()
        L2f:
            return
    }

    private void o() {
            r2 = this;
            r0 = 4
            r2.b(r0)
            r0 = 0
            r1 = 1
            r2.a(r0, r1, r0)
            return
    }

    private void p() {
            r13 = this;
            com.tkay.expressad.exoplayer.h.s r0 = r13.S
            if (r0 != 0) goto L5
            return
        L5:
            int r1 = r13.Z
            if (r1 <= 0) goto Ld
            r0.b()
            return
        Ld:
            com.tkay.expressad.exoplayer.s r0 = r13.P
            long r1 = r13.ab
            r0.a(r1)
            com.tkay.expressad.exoplayer.s r0 = r13.P
            boolean r0 = r0.a()
            r1 = 1
            if (r0 == 0) goto L5a
            com.tkay.expressad.exoplayer.s r0 = r13.P
            long r2 = r13.ab
            com.tkay.expressad.exoplayer.u r4 = r13.R
            com.tkay.expressad.exoplayer.r r0 = r0.a(r2, r4)
            if (r0 != 0) goto L2f
            com.tkay.expressad.exoplayer.h.s r0 = r13.S
            r0.b()
            goto L5a
        L2f:
            com.tkay.expressad.exoplayer.u r2 = r13.R
            com.tkay.expressad.exoplayer.ae r2 = r2.a
            com.tkay.expressad.exoplayer.h.s$a r3 = r0.a
            int r3 = r3.a
            com.tkay.expressad.exoplayer.ae$a r4 = r13.I
            com.tkay.expressad.exoplayer.ae$a r2 = r2.a(r3, r4, r1)
            java.lang.Object r10 = r2.b
            com.tkay.expressad.exoplayer.s r5 = r13.P
            com.tkay.expressad.exoplayer.z[] r6 = r13.z
            com.tkay.expressad.exoplayer.i.h r7 = r13.A
            com.tkay.expressad.exoplayer.p r2 = r13.C
            com.tkay.expressad.exoplayer.j.b r8 = r2.d()
            com.tkay.expressad.exoplayer.h.s r9 = r13.S
            r11 = r0
            com.tkay.expressad.exoplayer.h.r r2 = r5.a(r6, r7, r8, r9, r10, r11)
            long r3 = r0.b
            r2.a(r13, r3)
            r13.d(r1)
        L5a:
            com.tkay.expressad.exoplayer.s r0 = r13.P
            com.tkay.expressad.exoplayer.q r0 = r0.b()
            r2 = 0
            if (r0 == 0) goto L74
            boolean r0 = r0.a()
            if (r0 == 0) goto L6a
            goto L74
        L6a:
            com.tkay.expressad.exoplayer.u r0 = r13.R
            boolean r0 = r0.g
            if (r0 != 0) goto L77
            r13.r()
            goto L77
        L74:
            r13.d(r2)
        L77:
            com.tkay.expressad.exoplayer.s r0 = r13.P
            boolean r0 = r0.f()
            if (r0 != 0) goto L80
            return
        L80:
            com.tkay.expressad.exoplayer.s r0 = r13.P
            com.tkay.expressad.exoplayer.q r0 = r0.c()
            com.tkay.expressad.exoplayer.s r3 = r13.P
            com.tkay.expressad.exoplayer.q r3 = r3.d()
            r4 = r2
        L8d:
            boolean r5 = r13.V
            if (r5 == 0) goto Ld3
            if (r0 == r3) goto Ld3
            long r5 = r13.ab
            com.tkay.expressad.exoplayer.q r7 = r0.i
            long r7 = r7.e
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 < 0) goto Ld3
            if (r4 == 0) goto La2
            r13.d()
        La2:
            com.tkay.expressad.exoplayer.r r4 = r0.h
            boolean r4 = r4.f
            if (r4 == 0) goto Laa
            r4 = r2
            goto Lab
        Laa:
            r4 = 3
        Lab:
            com.tkay.expressad.exoplayer.s r5 = r13.P
            com.tkay.expressad.exoplayer.q r5 = r5.h()
            r13.a(r0)
            com.tkay.expressad.exoplayer.u r6 = r13.R
            com.tkay.expressad.exoplayer.r r0 = r5.h
            com.tkay.expressad.exoplayer.h.s$a r7 = r0.a
            com.tkay.expressad.exoplayer.r r0 = r5.h
            long r8 = r0.b
            com.tkay.expressad.exoplayer.r r0 = r5.h
            long r10 = r0.d
            com.tkay.expressad.exoplayer.u r0 = r6.a(r7, r8, r10)
            r13.R = r0
            com.tkay.expressad.exoplayer.k$c r0 = r13.M
            r0.b(r4)
            r13.g()
            r4 = r1
            r0 = r5
            goto L8d
        Ld3:
            com.tkay.expressad.exoplayer.r r0 = r3.h
            boolean r0 = r0.g
            if (r0 == 0) goto Lf9
        Ld9:
            com.tkay.expressad.exoplayer.y[] r0 = r13.y
            int r1 = r0.length
            if (r2 >= r1) goto Lf8
            r0 = r0[r2]
            com.tkay.expressad.exoplayer.h.y[] r1 = r3.c
            r1 = r1[r2]
            if (r1 == 0) goto Lf5
            com.tkay.expressad.exoplayer.h.y r4 = r0.f()
            if (r4 != r1) goto Lf5
            boolean r1 = r0.g()
            if (r1 == 0) goto Lf5
            r0.h()
        Lf5:
            int r2 = r2 + 1
            goto Ld9
        Lf8:
            return
        Lf9:
            com.tkay.expressad.exoplayer.q r0 = r3.i
            if (r0 == 0) goto L194
            com.tkay.expressad.exoplayer.q r0 = r3.i
            boolean r0 = r0.f
            if (r0 != 0) goto L105
            goto L194
        L105:
            r0 = r2
        L106:
            com.tkay.expressad.exoplayer.y[] r4 = r13.y
            int r5 = r4.length
            if (r0 >= r5) goto L124
            r4 = r4[r0]
            com.tkay.expressad.exoplayer.h.y[] r5 = r3.c
            r5 = r5[r0]
            com.tkay.expressad.exoplayer.h.y r6 = r4.f()
            if (r6 != r5) goto L123
            if (r5 == 0) goto L120
            boolean r4 = r4.g()
            if (r4 != 0) goto L120
            goto L123
        L120:
            int r0 = r0 + 1
            goto L106
        L123:
            return
        L124:
            com.tkay.expressad.exoplayer.i.i r0 = r3.k
            com.tkay.expressad.exoplayer.s r3 = r13.P
            com.tkay.expressad.exoplayer.q r3 = r3.g()
            com.tkay.expressad.exoplayer.i.i r4 = r3.k
            com.tkay.expressad.exoplayer.h.r r5 = r3.a
            long r5 = r5.c()
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 == 0) goto L13f
            r5 = r1
            goto L140
        L13f:
            r5 = r2
        L140:
            r6 = r2
        L141:
            com.tkay.expressad.exoplayer.y[] r7 = r13.y
            int r8 = r7.length
            if (r6 >= r8) goto L194
            r7 = r7[r6]
            boolean r8 = r0.a(r6)
            if (r8 == 0) goto L191
            if (r5 != 0) goto L18e
            boolean r8 = r7.i()
            if (r8 != 0) goto L191
            com.tkay.expressad.exoplayer.i.g r8 = r4.c
            com.tkay.expressad.exoplayer.i.f r8 = r8.a(r6)
            boolean r9 = r4.a(r6)
            com.tkay.expressad.exoplayer.z[] r10 = r13.z
            r10 = r10[r6]
            int r10 = r10.a()
            r11 = 5
            if (r10 != r11) goto L16d
            r10 = r1
            goto L16e
        L16d:
            r10 = r2
        L16e:
            com.tkay.expressad.exoplayer.aa[] r11 = r0.b
            r11 = r11[r6]
            com.tkay.expressad.exoplayer.aa[] r12 = r4.b
            r12 = r12[r6]
            if (r9 == 0) goto L18e
            boolean r9 = r12.equals(r11)
            if (r9 == 0) goto L18e
            if (r10 != 0) goto L18e
            com.tkay.expressad.exoplayer.m[] r8 = a(r8)
            com.tkay.expressad.exoplayer.h.y[] r9 = r3.c
            r9 = r9[r6]
            long r10 = r3.e
            r7.a(r8, r9, r10)
            goto L191
        L18e:
            r7.h()
        L191:
            int r6 = r6 + 1
            goto L141
        L194:
            return
    }

    private void q() {
            r12 = this;
            com.tkay.expressad.exoplayer.s r0 = r12.P
            long r1 = r12.ab
            r0.a(r1)
            com.tkay.expressad.exoplayer.s r0 = r12.P
            boolean r0 = r0.a()
            if (r0 == 0) goto L4d
            com.tkay.expressad.exoplayer.s r0 = r12.P
            long r1 = r12.ab
            com.tkay.expressad.exoplayer.u r3 = r12.R
            com.tkay.expressad.exoplayer.r r0 = r0.a(r1, r3)
            if (r0 != 0) goto L21
            com.tkay.expressad.exoplayer.h.s r0 = r12.S
            r0.b()
            return
        L21:
            com.tkay.expressad.exoplayer.u r1 = r12.R
            com.tkay.expressad.exoplayer.ae r1 = r1.a
            com.tkay.expressad.exoplayer.h.s$a r2 = r0.a
            int r2 = r2.a
            com.tkay.expressad.exoplayer.ae$a r3 = r12.I
            r11 = 1
            com.tkay.expressad.exoplayer.ae$a r1 = r1.a(r2, r3, r11)
            java.lang.Object r9 = r1.b
            com.tkay.expressad.exoplayer.s r4 = r12.P
            com.tkay.expressad.exoplayer.z[] r5 = r12.z
            com.tkay.expressad.exoplayer.i.h r6 = r12.A
            com.tkay.expressad.exoplayer.p r1 = r12.C
            com.tkay.expressad.exoplayer.j.b r7 = r1.d()
            com.tkay.expressad.exoplayer.h.s r8 = r12.S
            r10 = r0
            com.tkay.expressad.exoplayer.h.r r1 = r4.a(r5, r6, r7, r8, r9, r10)
            long r2 = r0.b
            r1.a(r12, r2)
            r12.d(r11)
        L4d:
            return
    }

    private void r() {
            r7 = this;
            com.tkay.expressad.exoplayer.s r0 = r7.P
            com.tkay.expressad.exoplayer.q r0 = r0.b()
            long r1 = r0.b()
            r3 = -9223372036854775808
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L15
            r0 = 0
            r7.d(r0)
            return
        L15:
            long r3 = r7.ab
            long r5 = r0.e
            long r3 = r3 - r5
            long r1 = r1 - r3
            com.tkay.expressad.exoplayer.p r3 = r7.C
            com.tkay.expressad.exoplayer.e r4 = r7.L
            com.tkay.expressad.exoplayer.v r4 = r4.e()
            float r4 = r4.b
            boolean r1 = r3.a(r1, r4)
            r7.d(r1)
            if (r1 == 0) goto L33
            long r1 = r7.ab
            r0.a(r1)
        L33:
            return
    }

    public final synchronized void a() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.U     // Catch: java.lang.Throwable -> L44
            if (r0 != 0) goto L42
            android.os.HandlerThread r0 = r7.E     // Catch: java.lang.Throwable -> L44
            boolean r0 = r0.isAlive()     // Catch: java.lang.Throwable -> L44
            if (r0 != 0) goto Le
            goto L42
        Le:
            com.tkay.expressad.exoplayer.k.k r0 = r7.D     // Catch: java.lang.Throwable -> L44
            r1 = 7
            r0.b(r1)     // Catch: java.lang.Throwable -> L44
            com.tkay.expressad.exoplayer.k.c r0 = r7.O     // Catch: java.lang.Throwable -> L44
            long r0 = r0.a()     // Catch: java.lang.Throwable -> L44
            r2 = 500(0x1f4, double:2.47E-321)
            long r0 = r0 + r2
            r4 = 0
        L1e:
            boolean r5 = r7.U     // Catch: java.lang.Throwable -> L44
            if (r5 != 0) goto L37
            r5 = 0
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 <= 0) goto L37
            r7.wait(r2)     // Catch: java.lang.InterruptedException -> L2c java.lang.Throwable -> L44
            goto L2e
        L2c:
            r2 = 1
            r4 = r2
        L2e:
            com.tkay.expressad.exoplayer.k.c r2 = r7.O     // Catch: java.lang.Throwable -> L44
            long r2 = r2.a()     // Catch: java.lang.Throwable -> L44
            long r2 = r0 - r2
            goto L1e
        L37:
            if (r4 == 0) goto L40
            java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L44
            r0.interrupt()     // Catch: java.lang.Throwable -> L44
        L40:
            monitor-exit(r7)
            return
        L42:
            monitor-exit(r7)
            return
        L44:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final void a(int r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 12
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    public final void a(com.tkay.expressad.exoplayer.ac r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 5
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    public final void a(com.tkay.expressad.exoplayer.ae r3, int r4, long r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            com.tkay.expressad.exoplayer.k$d r1 = new com.tkay.expressad.exoplayer.k$d
            r1.<init>(r3, r4, r5)
            r3 = 3
            android.os.Message r3 = r0.a(r3, r1)
            r3.sendToTarget()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 9
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s r3, com.tkay.expressad.exoplayer.ae r4, java.lang.Object r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            com.tkay.expressad.exoplayer.k$a r1 = new com.tkay.expressad.exoplayer.k$a
            r1.<init>(r3, r4, r5)
            r3 = 8
            android.os.Message r3 = r0.a(r3, r1)
            r3.sendToTarget()
            return
    }

    public final void a(com.tkay.expressad.exoplayer.h.s r2, boolean r3, boolean r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r1.D
            android.os.Message r2 = r0.a(r3, r4, r2)
            r2.sendToTarget()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.z r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r r3 = (com.tkay.expressad.exoplayer.h.r) r3
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 10
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.v r6) {
            r5 = this;
            android.os.Handler r0 = r5.F
            r1 = 1
            android.os.Message r0 = r0.obtainMessage(r1, r6)
            r0.sendToTarget()
            float r6 = r6.b
            com.tkay.expressad.exoplayer.s r0 = r5.P
            com.tkay.expressad.exoplayer.q r0 = r0.e()
        L12:
            if (r0 == 0) goto L31
            com.tkay.expressad.exoplayer.i.i r1 = r0.k
            if (r1 == 0) goto L2e
            com.tkay.expressad.exoplayer.i.i r1 = r0.k
            com.tkay.expressad.exoplayer.i.g r1 = r1.c
            com.tkay.expressad.exoplayer.i.f[] r1 = r1.a()
            int r2 = r1.length
            r3 = 0
        L22:
            if (r3 >= r2) goto L2e
            r4 = r1[r3]
            if (r4 == 0) goto L2b
            r4.a(r6)
        L2b:
            int r3 = r3 + 1
            goto L22
        L2e:
            com.tkay.expressad.exoplayer.q r0 = r0.i
            goto L12
        L31:
            return
    }

    @Override
    public final synchronized void a(com.tkay.expressad.exoplayer.x r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.U     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L12
            java.lang.String r0 = "ExoPlayerImplInternal"
            java.lang.String r1 = "Ignoring messages sent after release."
            android.util.Log.w(r0, r1)     // Catch: java.lang.Throwable -> L1f
            r0 = 0
            r3.a(r0)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r2)
            return
        L12:
            com.tkay.expressad.exoplayer.k.k r0 = r2.D     // Catch: java.lang.Throwable -> L1f
            r1 = 14
            android.os.Message r3 = r0.a(r1, r3)     // Catch: java.lang.Throwable -> L1f
            r3.sendToTarget()     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r2)
            return
        L1f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(boolean r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 1
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    public final android.os.Looper b() {
            r1 = this;
            android.os.HandlerThread r0 = r1.E
            android.os.Looper r0 = r0.getLooper()
            return r0
    }

    public final void b(com.tkay.expressad.exoplayer.v r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 4
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    public final void b(boolean r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 13
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final void c() {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 11
            r0.b(r1)
            return
    }

    public final void c(boolean r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.k r0 = r2.D
            r1 = 6
            android.os.Message r3 = r0.a(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r32) {
            r31 = this;
            r1 = r31
            r2 = r32
            java.lang.String r3 = "ExoPlayerImplInternal"
            r4 = 2
            r5 = 0
            r6 = 1
            int r7 = r2.what     // Catch: java.lang.RuntimeException -> L942 java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r8 = 0
            r10 = 4
            r11 = 0
            r13 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            switch(r7) {
                case 0: goto L8f4;
                case 1: goto L8b5;
                case 2: goto L574;
                case 3: goto L46a;
                case 4: goto L45f;
                case 5: goto L457;
                case 6: goto L44a;
                case 7: goto L445;
                case 8: goto L229;
                case 9: goto L1a9;
                case 10: goto L191;
                case 11: goto L94;
                case 12: goto L83;
                case 13: goto L6d;
                case 14: goto L2b;
                case 15: goto L19;
                default: goto L17;
            }
        L17:
            r2 = r5
            return r2
        L19:
            java.lang.Object r2 = r2.obj     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.x r2 = (com.tkay.expressad.exoplayer.x) r2     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            android.os.Handler r7 = r2.e()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.k$1 r8 = new com.tkay.expressad.exoplayer.k$1     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r8.<init>(r1, r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r7.post(r8)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L2b:
            java.lang.Object r2 = r2.obj     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.x r2 = (com.tkay.expressad.exoplayer.x) r2     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            long r7 = r2.f()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            int r7 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            if (r7 != 0) goto L3c
            r1.d(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L3c:
            com.tkay.expressad.exoplayer.h.s r7 = r1.S     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r7 == 0) goto L61
            int r7 = r1.Z     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r7 <= 0) goto L45
            goto L61
        L45:
            com.tkay.expressad.exoplayer.k$b r7 = new com.tkay.expressad.exoplayer.k$b     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r7.<init>(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean r8 = r1.a(r7)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r8 == 0) goto L5c
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r2 = r1.N     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r2.add(r7)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r2 = r1.N     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            java.util.Collections.sort(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L5c:
            r2.a(r5)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L61:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r7 = r1.N     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.k$b r8 = new com.tkay.expressad.exoplayer.k$b     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r8.<init>(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r7.add(r8)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L6d:
            int r2 = r2.arg1     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r2 == 0) goto L73
            r2 = r6
            goto L74
        L73:
            r2 = r5
        L74:
            r1.Y = r2     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean r2 = r7.a(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r2 != 0) goto L925
            r1.g(r6)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L83:
            int r2 = r2.arg1     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r1.X = r2     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean r2 = r7.a(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r2 != 0) goto L925
            r1.g(r6)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto L925
        L94:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean r2 = r2.f()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r2 == 0) goto L925
            com.tkay.expressad.exoplayer.e r2 = r1.L     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.v r2 = r2.e()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            float r2 = r2.b     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.q r7 = r7.c()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.s r8 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.q r8 = r8.d()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r9 = r6
        Lb1:
            if (r7 == 0) goto L925
            boolean r11 = r7.f     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r11 != 0) goto Lb9
            goto L925
        Lb9:
            boolean r11 = r7.a(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r11 != 0) goto Lc5
            if (r7 != r8) goto Lc2
            r9 = r5
        Lc2:
            com.tkay.expressad.exoplayer.q r7 = r7.i     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            goto Lb1
        Lc5:
            if (r9 == 0) goto L15b
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.q r2 = r2.c()     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean r7 = r7.a(r2)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.y[] r8 = r1.y     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            int r8 = r8.length     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            boolean[] r8 = new boolean[r8]     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.u r9 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            long r11 = r9.j     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            long r11 = r2.a(r11, r7, r8)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.i.i r7 = r2.k     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            r1.a(r7)     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            int r7 = r7.f     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            if (r7 == r10) goto L10e
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            long r13 = r7.j     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            int r7 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r7 == 0) goto L10e
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.h.s$a r14 = r7.c     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.lang.RuntimeException -> L18c java.io.IOException -> L95f com.tkay.expressad.exoplayer.g -> L97b
            long r5 = r7.e     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r15 = r11
            r17 = r5
            com.tkay.expressad.exoplayer.u r5 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$c r5 = r1.M     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r5.b(r10)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r11)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L10e:
            com.tkay.expressad.exoplayer.y[] r5 = r1.y     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r5 = r5.length     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean[] r5 = new boolean[r5]     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r6 = 0
            r7 = 0
        L115:
            com.tkay.expressad.exoplayer.y[] r9 = r1.y     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r9 = r9.length     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r6 >= r9) goto L14b
            com.tkay.expressad.exoplayer.y[] r9 = r1.y     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9 = r9[r6]     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r11 = r9.a_()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r11 == 0) goto L126
            r11 = 1
            goto L127
        L126:
            r11 = 0
        L127:
            r5[r6] = r11     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.y[] r11 = r2.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r11 = r11[r6]     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r11 == 0) goto L131
            int r7 = r7 + 1
        L131:
            boolean r12 = r5[r6]     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r12 == 0) goto L148
            com.tkay.expressad.exoplayer.h.y r12 = r9.f()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r11 == r12) goto L13f
            r1.b(r9)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L148
        L13f:
            boolean r11 = r8[r6]     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r11 == 0) goto L148
            long r11 = r1.ab     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9.a(r11)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L148:
            int r6 = r6 + 1
            goto L115
        L14b:
            com.tkay.expressad.exoplayer.u r6 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.af r8 = r2.j     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.i.i r2 = r2.k     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r2 = r6.a(r8, r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r5, r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L179
        L15b:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.a(r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r7.f     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L179
            com.tkay.expressad.exoplayer.r r2 = r7.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r5 = r2.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r8 = r1.ab     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r11 = r7.e     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r8 = r8 - r11
            long r5 = java.lang.Math.max(r5, r8)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r7.b(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.i.i r2 = r7.k     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L179:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = r2.f     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == r10) goto L925
            r31.r()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r31.g()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k.k r2 = r1.D     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.b(r4)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L18c:
            r0 = move-exception
            r4 = r0
            r2 = r5
            goto L945
        L191:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.r r2 = (com.tkay.expressad.exoplayer.h.r) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r5 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r5.a(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L925
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r5 = r1.ab     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.a(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r31.r()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L1a9:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.r r2 = (com.tkay.expressad.exoplayer.h.r) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r5 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r5.a(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L925
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.q r2 = r2.b()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.e r5 = r1.L     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.v r5 = r5.e()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            float r5 = r5.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r6 = 1
            r2.f = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.r r6 = r2.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.af r6 = r6.b()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.j = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.a(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r5 = r2.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r5 = r5.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r21 = r2.b(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r5 = r2.e     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r7 = r2.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r9 = r7.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r9 = r9 - r21
            long r5 = r5 + r9
            r2.e = r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r5 = r2.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r6 = new com.tkay.expressad.exoplayer.r     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r7 = r5.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r9 = r5.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r11 = r5.d     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r13 = r5.e     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r15 = r5.f     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r5 = r5.g     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r19 = r6
            r20 = r7
            r23 = r9
            r25 = r11
            r27 = r13
            r29 = r15
            r30 = r5
            r19.<init>(r20, r21, r23, r25, r27, r29, r30)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.h = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.i.i r2 = r2.k     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r2.f()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 != 0) goto L224
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.q r2 = r2.h()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r2 = r2.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r5 = r2.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.a(r8)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L224:
            r31.r()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L229:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$a r2 = (com.tkay.expressad.exoplayer.k.a) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s r5 = r2.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s r6 = r1.S     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r5 != r6) goto L925
            com.tkay.expressad.exoplayer.u r5 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.ae r5 = r5.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.ae r6 = r2.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r2 = r2.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r7.a(r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r2 = r7.a(r6, r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r2 = r1.N     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = r2.size()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r7 = 1
            int r2 = r2 - r7
        L250:
            if (r2 < 0) goto L286
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r7 = r1.N     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r7 = r7.get(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$b r7 = (com.tkay.expressad.exoplayer.k.b) r7     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r7 = r1.a(r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r7 != 0) goto L283
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r7 = r1.N     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r7 = r7.get(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$b r7 = (com.tkay.expressad.exoplayer.k.b) r7     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.x r7 = r7.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9 = 0
            r7.a(r9)     // Catch: java.lang.RuntimeException -> L274 java.io.IOException -> L279 com.tkay.expressad.exoplayer.g -> L27e
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r7 = r1.N     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r7.remove(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L283
        L274:
            r0 = move-exception
            r4 = r0
            r2 = r9
            goto L945
        L279:
            r0 = move-exception
            r5 = r0
            r2 = r9
            goto L962
        L27e:
            r0 = move-exception
            r5 = r0
            r2 = r9
            goto L97e
        L283:
            int r2 = r2 + (-1)
            goto L250
        L286:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k$b> r2 = r1.N     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.util.Collections.sort(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = r1.Z     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 <= 0) goto L326
            com.tkay.expressad.exoplayer.k$c r2 = r1.M     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r5 = r1.Z     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.a(r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2 = 0
            r1.Z = r2     // Catch: java.io.IOException -> L320 com.tkay.expressad.exoplayer.g -> L323 java.lang.RuntimeException -> L72f
            com.tkay.expressad.exoplayer.k$d r2 = r1.aa     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L2d8
            com.tkay.expressad.exoplayer.k$d r2 = r1.aa     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r5 = 1
            android.util.Pair r2 = r1.a(r2, r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.aa = r8     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 != 0) goto L2ad
            r31.o()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L2ad:
            java.lang.Object r5 = r2.first     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r5 = r5.intValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r2 = r2.second     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r6 = r2.longValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r14 = r2.a(r5, r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r14.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L2cd
            r15 = r11
            goto L2ce
        L2cd:
            r15 = r6
        L2ce:
            r17 = r6
            com.tkay.expressad.exoplayer.u r2 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L2d8:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r7 = r2.d     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            if (r2 != 0) goto L925
            boolean r2 = r6.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L2eb
            r31.o()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L2eb:
            boolean r2 = r1.Y     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = r6.b(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            android.util.Pair r2 = r1.a(r6, r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r5 = r2.first     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r5 = r5.intValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r2 = r2.second     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r6 = r2.longValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r14 = r2.a(r5, r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r14.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L315
            r15 = r11
            goto L316
        L315:
            r15 = r6
        L316:
            r17 = r6
            com.tkay.expressad.exoplayer.u r2 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L320:
            r0 = move-exception
            goto L961
        L323:
            r0 = move-exception
            goto L97d
        L326:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r2 = r2.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r2 = r2.a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r7 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r7 = r7.e     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r9 = r5.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r9 == 0) goto L357
            boolean r5 = r6.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r5 != 0) goto L925
            com.tkay.expressad.exoplayer.s r5 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r14 = r5.a(r2, r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r14.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L34c
            r15 = r11
            goto L34d
        L34c:
            r15 = r7
        L34d:
            r17 = r7
            com.tkay.expressad.exoplayer.u r2 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L357:
            com.tkay.expressad.exoplayer.s r9 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.q r9 = r9.e()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r9 != 0) goto L369
            com.tkay.expressad.exoplayer.ae$a r10 = r1.I     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r13 = 1
            com.tkay.expressad.exoplayer.ae$a r10 = r5.a(r2, r10, r13)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r10 = r10.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L36b
        L369:
            java.lang.Object r10 = r9.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L36b:
            int r10 = r6.a(r10)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r13 = -1
            if (r10 != r13) goto L3fd
            int r2 = r1.a(r2, r5, r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 != r13) goto L37d
            r31.o()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L37d:
            com.tkay.expressad.exoplayer.ae$a r5 = r1.I     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r7 = 0
            com.tkay.expressad.exoplayer.ae$a r2 = r6.a(r2, r5, r7)     // Catch: java.lang.RuntimeException -> L3ee java.io.IOException -> L3f3 com.tkay.expressad.exoplayer.g -> L3f8
            int r2 = r2.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            android.util.Pair r2 = r1.a(r6, r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r5 = r2.first     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r5 = r5.intValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r2 = r2.second     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r7 = r2.longValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r14 = r2.a(r5, r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.ae$a r2 = r1.I     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r10 = 1
            r6.a(r5, r2, r10)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r9 == 0) goto L3d6
            com.tkay.expressad.exoplayer.ae$a r2 = r1.I     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r2 = r2.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r6 = r9.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r6 = r6.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9.h = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L3b4:
            com.tkay.expressad.exoplayer.q r6 = r9.i     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r6 == 0) goto L3d6
            com.tkay.expressad.exoplayer.q r9 = r9.i     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r6 = r9.b     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r6 = r6.equals(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r6 == 0) goto L3cd
            com.tkay.expressad.exoplayer.s r6 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r10 = r9.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r6 = r6.a(r10, r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9.h = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L3b4
        L3cd:
            com.tkay.expressad.exoplayer.r r6 = r9.h     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.r r6 = r6.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r9.h = r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L3b4
        L3d6:
            boolean r2 = r14.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L3dd
            goto L3de
        L3dd:
            r11 = r7
        L3de:
            long r15 = r1.a(r14, r11)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r17 = r7
            com.tkay.expressad.exoplayer.u r2 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L3ee:
            r0 = move-exception
            r4 = r0
            r2 = r7
            goto L945
        L3f3:
            r0 = move-exception
            r5 = r0
            r2 = r7
            goto L962
        L3f8:
            r0 = move-exception
            r5 = r0
            r2 = r7
            goto L97e
        L3fd:
            if (r10 == r2) goto L407
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r2 = r2.a(r10)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
        L407:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r2 = r2.c     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r5 = r2.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r5 == 0) goto L435
            com.tkay.expressad.exoplayer.s r5 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r14 = r5.a(r10, r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r5 = r14.equals(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r5 != 0) goto L435
            boolean r2 = r14.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L424
            goto L425
        L424:
            r11 = r7
        L425:
            long r15 = r1.a(r14, r11)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r17 = r7
            com.tkay.expressad.exoplayer.u r2 = r13.a(r14, r15, r17)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.R = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L435:
            com.tkay.expressad.exoplayer.s r5 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r6 = r1.ab     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r2 = r5.a(r2, r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 != 0) goto L925
            r2 = 0
            r1.g(r2)     // Catch: java.io.IOException -> L320 com.tkay.expressad.exoplayer.g -> L323 java.lang.RuntimeException -> L72f
            goto L925
        L445:
            r31.i()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2 = 1
            return r2
        L44a:
            int r2 = r2.arg1     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r2 == 0) goto L450
            r2 = 1
            goto L451
        L450:
            r2 = 0
        L451:
            r5 = 1
            r1.a(r2, r5)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L457:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.ac r2 = (com.tkay.expressad.exoplayer.ac) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r1.Q = r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L45f:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.v r2 = (com.tkay.expressad.exoplayer.v) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.e r5 = r1.L     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r5.a(r2)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L46a:
            java.lang.Object r2 = r2.obj     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$d r2 = (com.tkay.expressad.exoplayer.k.d) r2     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k$c r5 = r1.M     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r6 = 1
            r5.a(r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            android.util.Pair r5 = r1.a(r2, r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r5 != 0) goto L489
            com.tkay.expressad.exoplayer.h.s$a r5 = new com.tkay.expressad.exoplayer.h.s$a     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r6 = r31.j()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r5.<init>(r6)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r6 = r5
            r7 = r13
            r23 = r7
        L487:
            r4 = 1
            goto L4bd
        L489:
            java.lang.Object r6 = r5.first     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            int r6 = r6.intValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Object r7 = r5.second     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Long r7 = (java.lang.Long) r7     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r7 = r7.longValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.s r9 = r1.P     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h.s$a r6 = r9.a(r6, r7)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            boolean r9 = r6.a()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            if (r9 == 0) goto L4a9
            r23 = r7
            r7 = r11
            goto L487
        L4a9:
            java.lang.Object r5 = r5.second     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            java.lang.Long r5 = (java.lang.Long) r5     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r15 = r5.longValue()     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            long r4 = r2.c     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r4 = (r4 > r13 ? 1 : (r4 == r13 ? 0 : -1))
            if (r4 != 0) goto L4b9
            r4 = 1
            goto L4ba
        L4b9:
            r4 = 0
        L4ba:
            r23 = r7
            r7 = r15
        L4bd:
            com.tkay.expressad.exoplayer.h.s r5 = r1.S     // Catch: java.lang.Throwable -> L546
            if (r5 == 0) goto L530
            int r5 = r1.Z     // Catch: java.lang.Throwable -> L546
            if (r5 <= 0) goto L4c7
            goto L530
        L4c7:
            int r2 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            if (r2 != 0) goto L4d4
            r1.b(r10)     // Catch: java.lang.Throwable -> L546
            r2 = 0
            r5 = 1
            r1.a(r2, r5, r2)     // Catch: java.lang.Throwable -> L546
            goto L532
        L4d4:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.Throwable -> L546
            com.tkay.expressad.exoplayer.h.s$a r2 = r2.c     // Catch: java.lang.Throwable -> L546
            boolean r2 = r6.equals(r2)     // Catch: java.lang.Throwable -> L546
            if (r2 == 0) goto L520
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.Throwable -> L546
            com.tkay.expressad.exoplayer.q r2 = r2.c()     // Catch: java.lang.Throwable -> L546
            if (r2 == 0) goto L4f3
            int r5 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r5 == 0) goto L4f3
            com.tkay.expressad.exoplayer.h.r r2 = r2.a     // Catch: java.lang.Throwable -> L546
            com.tkay.expressad.exoplayer.ac r5 = r1.Q     // Catch: java.lang.Throwable -> L546
            long r9 = r2.a(r7, r5)     // Catch: java.lang.Throwable -> L546
            goto L4f4
        L4f3:
            r9 = r7
        L4f4:
            long r11 = com.tkay.expressad.exoplayer.b.a(r9)     // Catch: java.lang.Throwable -> L546
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.Throwable -> L546
            long r13 = r2.j     // Catch: java.lang.Throwable -> L546
            long r13 = com.tkay.expressad.exoplayer.b.a(r13)     // Catch: java.lang.Throwable -> L546
            int r2 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r2 != 0) goto L521
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.Throwable -> L546
            long r7 = r2.j     // Catch: java.lang.Throwable -> L546
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r19 = r2
            r20 = r6
            r21 = r7
            com.tkay.expressad.exoplayer.u r2 = r19.a(r20, r21, r23)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.R = r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r4 == 0) goto L925
            com.tkay.expressad.exoplayer.k$c r2 = r1.M     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r4 = 2
        L51b:
            r2.b(r4)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L520:
            r9 = r7
        L521:
            long r9 = r1.a(r6, r9)     // Catch: java.lang.Throwable -> L546
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 == 0) goto L52b
            r2 = 1
            goto L52c
        L52b:
            r2 = 0
        L52c:
            r4 = r4 | r2
            r21 = r9
            goto L534
        L530:
            r1.aa = r2     // Catch: java.lang.Throwable -> L546
        L532:
            r21 = r7
        L534:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r19 = r2
            r20 = r6
            com.tkay.expressad.exoplayer.u r2 = r19.a(r20, r21, r23)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.R = r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r4 == 0) goto L925
            com.tkay.expressad.exoplayer.k$c r2 = r1.M     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r4 = 2
            goto L51b
        L546:
            r0 = move-exception
            r2 = r0
            com.tkay.expressad.exoplayer.u r5 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r19 = r5
            r20 = r6
            r21 = r7
            com.tkay.expressad.exoplayer.u r5 = r19.a(r20, r21, r23)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.R = r5     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r4 == 0) goto L569
            com.tkay.expressad.exoplayer.k$c r4 = r1.M     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r5 = 2
            r4.b(r5)     // Catch: java.io.IOException -> L55f com.tkay.expressad.exoplayer.g -> L564 java.lang.RuntimeException -> L934
            goto L569
        L55f:
            r0 = move-exception
            r4 = r5
            r2 = 0
            goto L961
        L564:
            r0 = move-exception
            r4 = r5
            r2 = 0
            goto L97d
        L569:
            throw r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L56a:
            r0 = move-exception
            r5 = r0
        L56c:
            r2 = 0
            goto L962
        L56f:
            r0 = move-exception
            r5 = r0
        L571:
            r2 = 0
            goto L97e
        L574:
            com.tkay.expressad.exoplayer.k.c r2 = r1.O     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r4 = r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.s r2 = r1.S     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L73a
            int r2 = r1.Z     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 <= 0) goto L589
            com.tkay.expressad.exoplayer.h.s r2 = r1.S     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L73a
        L589:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r6 = r1.ab     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.a(r6)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.a()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L5e2
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r6 = r1.ab     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.u r8 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.r r2 = r2.a(r6, r8)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L5aa
            com.tkay.expressad.exoplayer.h.s r2 = r1.S     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L5e2
        L5aa:
            com.tkay.expressad.exoplayer.u r6 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.ae r6 = r6.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.s$a r7 = r2.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r7 = r7.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.ae$a r8 = r1.I     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r11 = 1
            com.tkay.expressad.exoplayer.ae$a r6 = r6.a(r7, r8, r11)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            java.lang.Object r6 = r6.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.s r7 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.z[] r8 = r1.z     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.i.h r11 = r1.A     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.p r12 = r1.C     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.j.b r22 = r12.d()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.s r12 = r1.S     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r19 = r7
            r20 = r8
            r21 = r11
            r23 = r12
            r24 = r6
            r25 = r2
            com.tkay.expressad.exoplayer.h.r r6 = r19.a(r20, r21, r22, r23, r24, r25)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r7 = r2.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6.a(r1, r7)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2 = 1
            r1.d(r2)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L5e2:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r2 = r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L5fb
            boolean r2 = r2.a()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L5f1
            goto L5fb
        L5f1:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.g     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L5ff
            r31.r()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L5ff
        L5fb:
            r2 = 0
            r1.d(r2)     // Catch: java.lang.RuntimeException -> L72f java.io.IOException -> L732 com.tkay.expressad.exoplayer.g -> L736
        L5ff:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L73a
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r2 = r2.c()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.s r6 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r6 = r6.d()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r7 = 0
        L614:
            boolean r8 = r1.V     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r8 == 0) goto L668
            if (r2 == r6) goto L668
            long r11 = r1.ab     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r8 = r2.i     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r9 = r8.e     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r8 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
            if (r8 < 0) goto L668
            if (r7 == 0) goto L629
            r31.d()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L629:
            com.tkay.expressad.exoplayer.r r7 = r2.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r7 = r7.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r7 == 0) goto L631
            r7 = 0
            goto L632
        L631:
            r7 = 3
        L632:
            com.tkay.expressad.exoplayer.s r8 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r8 = r8.h()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.a(r2)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.r r9 = r8.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.s$a r9 = r9.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.r r10 = r8.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r10 = r10.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.r r12 = r8.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r13 = r12.d     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r19 = r2
            r20 = r9
            r21 = r10
            r23 = r13
            com.tkay.expressad.exoplayer.u r2 = r19.a(r20, r21, r23)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.R = r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.k$c r2 = r1.M     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.b(r7)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r31.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2 = r8
            r7 = 1
            r10 = 4
            r13 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            goto L614
        L668:
            com.tkay.expressad.exoplayer.r r2 = r6.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.g     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L690
            r2 = 0
        L66f:
            com.tkay.expressad.exoplayer.y[] r7 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r7 = r7.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 >= r7) goto L73a
            com.tkay.expressad.exoplayer.y[] r7 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r7 = r7[r2]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.y[] r8 = r6.c     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r8 = r8[r2]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r8 == 0) goto L68d
            com.tkay.expressad.exoplayer.h.y r9 = r7.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r9 != r8) goto L68d
            boolean r8 = r7.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r8 == 0) goto L68d
            r7.h()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L68d:
            int r2 = r2 + 1
            goto L66f
        L690:
            com.tkay.expressad.exoplayer.q r2 = r6.i     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L73a
            com.tkay.expressad.exoplayer.q r2 = r6.i     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L69c
            goto L73a
        L69c:
            r2 = 0
        L69d:
            com.tkay.expressad.exoplayer.y[] r7 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r7 = r7.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 >= r7) goto L6bd
            com.tkay.expressad.exoplayer.y[] r7 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r7 = r7[r2]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.y[] r8 = r6.c     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r8 = r8[r2]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.y r9 = r7.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r9 != r8) goto L73a
            if (r8 == 0) goto L6ba
            boolean r7 = r7.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r7 != 0) goto L6ba
            goto L73a
        L6ba:
            int r2 = r2 + 1
            goto L69d
        L6bd:
            com.tkay.expressad.exoplayer.i.i r2 = r6.k     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.s r6 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r6 = r6.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.i.i r7 = r6.k     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.r r8 = r6.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r8 = r8.c()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 == 0) goto L6d8
            r8 = 1
            goto L6d9
        L6d8:
            r8 = 0
        L6d9:
            r9 = 0
        L6da:
            com.tkay.expressad.exoplayer.y[] r10 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r10 = r10.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r9 >= r10) goto L73a
            com.tkay.expressad.exoplayer.y[] r10 = r1.y     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r10 = r10[r9]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r11 = r2.a(r9)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r11 == 0) goto L72c
            if (r8 != 0) goto L729
            boolean r11 = r10.i()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r11 != 0) goto L72c
            com.tkay.expressad.exoplayer.i.g r11 = r7.c     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.i.f r11 = r11.a(r9)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r12 = r7.a(r9)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.z[] r13 = r1.z     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r13 = r13[r9]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r13 = r13.a()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r14 = 5
            if (r13 != r14) goto L708
            r13 = 1
            goto L709
        L708:
            r13 = 0
        L709:
            com.tkay.expressad.exoplayer.aa[] r14 = r2.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r14 = r14[r9]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.aa[] r15 = r7.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r15 = r15[r9]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r12 == 0) goto L729
            boolean r12 = r15.equals(r14)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r12 == 0) goto L729
            if (r13 != 0) goto L729
            com.tkay.expressad.exoplayer.m[] r11 = a(r11)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.y[] r12 = r6.c     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r12 = r12[r9]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r13 = r6.e     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r10.a(r11, r12, r13)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L72c
        L729:
            r10.h()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L72c:
            int r9 = r9 + 1
            goto L6da
        L72f:
            r0 = move-exception
            goto L944
        L732:
            r0 = move-exception
            r5 = r0
            goto L93b
        L736:
            r0 = move-exception
            r5 = r0
            goto L940
        L73a:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 10
            if (r2 != 0) goto L74c
            r31.n()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.a(r4, r6)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L925
        L74c:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r2 = r2.c()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            java.lang.String r8 = "doSomeWork"
            com.tkay.expressad.exoplayer.k.ad.a(r8)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r31.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r8 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            com.tkay.expressad.exoplayer.h.r r12 = r2.a     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.u r13 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r13 = r13.j     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r10 = r1.J     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r13 = r13 - r10
            boolean r10 = r1.K     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r12.a(r13, r10)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.y[] r10 = r1.T     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r11 = r10.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r12 = 0
            r13 = 1
            r14 = 1
        L775:
            if (r12 >= r11) goto L7c5
            r15 = r10[r12]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r6 = r1.ab     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r15.a(r6, r8)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r14 == 0) goto L788
            boolean r6 = r15.v()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 == 0) goto L788
            r14 = 1
            goto L789
        L788:
            r14 = 0
        L789:
            boolean r6 = r15.u()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 != 0) goto L7b3
            boolean r6 = r15.v()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 != 0) goto L7b3
            com.tkay.expressad.exoplayer.s r6 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r6 = r6.d()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r7 = r6.i     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r7 == 0) goto L7ad
            com.tkay.expressad.exoplayer.q r6 = r6.i     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r6 = r6.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 == 0) goto L7ad
            boolean r6 = r15.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 == 0) goto L7ad
            r6 = 1
            goto L7ae
        L7ad:
            r6 = 0
        L7ae:
            if (r6 == 0) goto L7b1
            goto L7b3
        L7b1:
            r6 = 0
            goto L7b4
        L7b3:
            r6 = 1
        L7b4:
            if (r6 != 0) goto L7b9
            r15.j()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L7b9:
            if (r13 == 0) goto L7bf
            if (r6 == 0) goto L7bf
            r13 = 1
            goto L7c0
        L7bf:
            r13 = 0
        L7c0:
            int r12 = r12 + 1
            r6 = 10
            goto L775
        L7c5:
            if (r13 != 0) goto L7ca
            r31.n()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L7ca:
            com.tkay.expressad.exoplayer.r r6 = r2.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r6 = r6.e     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r14 == 0) goto L7f0
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r8 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r8 == 0) goto L7e1
            com.tkay.expressad.exoplayer.u r8 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r8 = r8.j     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 > 0) goto L7f0
        L7e1:
            com.tkay.expressad.exoplayer.r r2 = r2.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.g     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L7f0
            r2 = 4
            r1.b(r2)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r31.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L86c
        L7f0:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 2
            if (r2 != r6) goto L84c
            com.tkay.expressad.exoplayer.y[] r2 = r1.T     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L801
            boolean r2 = r31.m()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L83e
        L801:
            if (r13 == 0) goto L83d
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r2.g     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L80b
        L809:
            r2 = 1
            goto L83e
        L80b:
            com.tkay.expressad.exoplayer.s r2 = r1.P     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.q r2 = r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.r r6 = r2.h     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r6 = r6.g     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r6 != 0) goto L819
            r6 = 1
            goto L81a
        L819:
            r6 = 0
        L81a:
            long r6 = r2.a(r6)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r8 = -9223372036854775808
            int r8 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r8 == 0) goto L809
            com.tkay.expressad.exoplayer.p r8 = r1.C     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r9 = r1.ab     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r11 = r2.e     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            long r9 = r9 - r11
            long r6 = r6 - r9
            com.tkay.expressad.exoplayer.e r2 = r1.L     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.v r2 = r2.e()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            float r2 = r2.b     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r9 = r1.W     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r8.a(r6, r2, r9)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L83d
            goto L809
        L83d:
            r2 = 0
        L83e:
            if (r2 == 0) goto L84c
            r2 = 3
            r1.b(r2)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            boolean r2 = r1.V     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L86c
            r31.e()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L86c
        L84c:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 3
            if (r2 != r6) goto L86c
            com.tkay.expressad.exoplayer.y[] r2 = r1.T     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L85f
            boolean r2 = r31.m()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L861
            goto L86c
        L85f:
            if (r13 != 0) goto L86c
        L861:
            boolean r2 = r1.V     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.W = r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2 = 2
            r1.b(r2)     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
            r31.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L86c:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 2
            if (r2 != r6) goto L881
            com.tkay.expressad.exoplayer.y[] r2 = r1.T     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r6 = r2.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r7 = 0
        L877:
            if (r7 >= r6) goto L881
            r8 = r2[r7]     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r8.j()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r7 = r7 + 1
            goto L877
        L881:
            boolean r2 = r1.V     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L88c
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 3
            if (r2 == r6) goto L893
        L88c:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 2
            if (r2 != r6) goto L899
        L893:
            r6 = 10
            r1.a(r4, r6)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L8b0
        L899:
            com.tkay.expressad.exoplayer.y[] r2 = r1.T     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.length     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L8ab
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r6 = 4
            if (r2 == r6) goto L8ab
            r6 = 1000(0x3e8, double:4.94E-321)
            r1.a(r4, r6)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L8b0
        L8ab:
            com.tkay.expressad.exoplayer.k.k r2 = r1.D     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.b()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
        L8b0:
            com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L925
        L8b5:
            int r2 = r2.arg1     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L8bb
            r2 = 1
            goto L8bc
        L8bb:
            r2 = 0
        L8bc:
            r4 = 0
            r1.W = r4     // Catch: java.lang.RuntimeException -> L8e8 java.io.IOException -> L8ec com.tkay.expressad.exoplayer.g -> L8f0
            r1.V = r2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 != 0) goto L8ca
            r31.f()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r31.g()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L925
        L8ca:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r4 = 3
            if (r2 != r4) goto L8db
            r31.e()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.k.k r2 = r1.D     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r4 = 2
            r2.b(r4)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L8db:
            com.tkay.expressad.exoplayer.u r2 = r1.R     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r2 = r2.f     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r4 = 2
            if (r2 != r4) goto L925
            com.tkay.expressad.exoplayer.k.k r2 = r1.D     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            r2.b(r4)     // Catch: java.io.IOException -> L56a com.tkay.expressad.exoplayer.g -> L56f java.lang.RuntimeException -> L934
            goto L925
        L8e8:
            r0 = move-exception
            r2 = r4
            goto L944
        L8ec:
            r0 = move-exception
            r5 = r0
            r2 = r4
            goto L93b
        L8f0:
            r0 = move-exception
            r5 = r0
            r2 = r4
            goto L940
        L8f4:
            java.lang.Object r4 = r2.obj     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.h.s r4 = (com.tkay.expressad.exoplayer.h.s) r4     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            int r5 = r2.arg1     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r5 == 0) goto L8fe
            r5 = 1
            goto L8ff
        L8fe:
            r5 = 0
        L8ff:
            int r2 = r2.arg2     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            if (r2 == 0) goto L905
            r2 = 1
            goto L906
        L905:
            r2 = 0
        L906:
            int r6 = r1.Z     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r7 = 1
            int r6 = r6 + r7
            r1.Z = r6     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.a(r7, r5, r2)     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            com.tkay.expressad.exoplayer.p r2 = r1.C     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2.a()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r1.S = r4     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            r2 = 2
            r1.b(r2)     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.h r5 = r1.G     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
            r6 = 1
            r4.a(r5, r6, r1)     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
            com.tkay.expressad.exoplayer.k.k r4 = r1.D     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
            r4.b(r2)     // Catch: java.io.IOException -> L92a com.tkay.expressad.exoplayer.g -> L92f java.lang.RuntimeException -> L934
        L925:
            r31.d()     // Catch: java.lang.RuntimeException -> L934 java.io.IOException -> L938 com.tkay.expressad.exoplayer.g -> L93d
            goto L992
        L92a:
            r0 = move-exception
            r5 = r0
            r4 = r2
            goto L56c
        L92f:
            r0 = move-exception
            r5 = r0
            r4 = r2
            goto L571
        L934:
            r0 = move-exception
            r4 = r0
            r2 = 0
            goto L945
        L938:
            r0 = move-exception
            r5 = r0
            r2 = 0
        L93b:
            r4 = 2
            goto L962
        L93d:
            r0 = move-exception
            r5 = r0
            r2 = 0
        L940:
            r4 = 2
            goto L97e
        L942:
            r0 = move-exception
            r2 = r5
        L944:
            r4 = r0
        L945:
            java.lang.String r5 = "Internal runtime error."
            android.util.Log.e(r3, r5, r4)
            r1.a(r2, r2)
            android.os.Handler r2 = r1.F
            com.tkay.expressad.exoplayer.g r3 = com.tkay.expressad.exoplayer.g.a(r4)
            r4 = 2
            android.os.Message r2 = r2.obtainMessage(r4, r3)
            r2.sendToTarget()
            r31.d()
            goto L992
        L95f:
            r0 = move-exception
            r2 = r5
        L961:
            r5 = r0
        L962:
            java.lang.String r6 = "Source error."
            android.util.Log.e(r3, r6, r5)
            r1.a(r2, r2)
            android.os.Handler r2 = r1.F
            com.tkay.expressad.exoplayer.g r3 = com.tkay.expressad.exoplayer.g.a(r5)
            android.os.Message r2 = r2.obtainMessage(r4, r3)
            r2.sendToTarget()
            r31.d()
            goto L992
        L97b:
            r0 = move-exception
            r2 = r5
        L97d:
            r5 = r0
        L97e:
            java.lang.String r6 = "Playback error."
            android.util.Log.e(r3, r6, r5)
            r1.a(r2, r2)
            android.os.Handler r2 = r1.F
            android.os.Message r2 = r2.obtainMessage(r4, r5)
            r2.sendToTarget()
            r31.d()
        L992:
            r2 = 1
            return r2
    }
}
