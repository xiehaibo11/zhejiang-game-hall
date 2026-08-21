package com.tkay.expressad.exoplayer.e.a;

final class b {
    private static final java.lang.String a = "AtomParsers";
    private static final int b = 0;
    private static final int c = 0;
    private static final int d = 0;
    private static final int e = 0;
    private static final int f = 0;
    private static final int g = 0;
    private static final int h = 0;
    private static final int i = 3;

    private static final class a {
        public final int a;
        public int b;
        public int c;
        public long d;
        private final boolean e;
        private final com.tkay.expressad.exoplayer.k.s f;
        private final com.tkay.expressad.exoplayer.k.s g;
        private int h;
        private int i;

        public a(com.tkay.expressad.exoplayer.k.s r1, com.tkay.expressad.exoplayer.k.s r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.g = r1
                r0.f = r2
                r0.e = r3
                r3 = 12
                r2.c(r3)
                int r2 = r2.m()
                r0.a = r2
                r1.c(r3)
                int r2 = r1.m()
                r0.i = r2
                int r1 = r1.i()
                r2 = 1
                if (r1 != r2) goto L25
                goto L26
            L25:
                r2 = 0
            L26:
                java.lang.String r1 = "first_chunk must be 1"
                com.tkay.expressad.exoplayer.k.a.b(r2, r1)
                r1 = -1
                r0.b = r1
                return
        }

        public final boolean a() {
                r4 = this;
                int r0 = r4.b
                r1 = 1
                int r0 = r0 + r1
                r4.b = r0
                int r2 = r4.a
                if (r0 != r2) goto Lc
                r0 = 0
                return r0
            Lc:
                boolean r0 = r4.e
                if (r0 == 0) goto L17
                com.tkay.expressad.exoplayer.k.s r0 = r4.f
                long r2 = r0.n()
                goto L1d
            L17:
                com.tkay.expressad.exoplayer.k.s r0 = r4.f
                long r2 = r0.h()
            L1d:
                r4.d = r2
                int r0 = r4.b
                int r2 = r4.h
                if (r0 != r2) goto L45
                com.tkay.expressad.exoplayer.k.s r0 = r4.g
                int r0 = r0.m()
                r4.c = r0
                com.tkay.expressad.exoplayer.k.s r0 = r4.g
                r2 = 4
                r0.d(r2)
                int r0 = r4.i
                int r0 = r0 - r1
                r4.i = r0
                if (r0 <= 0) goto L42
                com.tkay.expressad.exoplayer.k.s r0 = r4.g
                int r0 = r0.m()
                int r0 = r0 - r1
                goto L43
            L42:
                r0 = -1
            L43:
                r4.h = r0
            L45:
                return r1
        }
    }

    private interface b {
        int a();

        int b();

        boolean c();
    }

    private static final class c {
        public static final int a = 8;
        public final com.tkay.expressad.exoplayer.e.a.k[] b;
        public com.tkay.expressad.exoplayer.m c;
        public int d;
        public int e;

        public c(int r1) {
                r0 = this;
                r0.<init>()
                com.tkay.expressad.exoplayer.e.a.k[] r1 = new com.tkay.expressad.exoplayer.e.a.k[r1]
                r0.b = r1
                r1 = 0
                r0.e = r1
                return
        }
    }

    static final class d implements com.tkay.expressad.exoplayer.e.a.b.b {
        private final int a;
        private final int b;
        private final com.tkay.expressad.exoplayer.k.s c;

        public d(com.tkay.expressad.exoplayer.e.a.a.b r2) {
                r1 = this;
                r1.<init>()
                com.tkay.expressad.exoplayer.k.s r2 = r2.aV
                r1.c = r2
                r0 = 12
                r2.c(r0)
                com.tkay.expressad.exoplayer.k.s r2 = r1.c
                int r2 = r2.m()
                r1.a = r2
                com.tkay.expressad.exoplayer.k.s r2 = r1.c
                int r2 = r2.m()
                r1.b = r2
                return
        }

        @Override
        public final int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        @Override
        public final int b() {
                r1 = this;
                int r0 = r1.a
                if (r0 != 0) goto La
                com.tkay.expressad.exoplayer.k.s r0 = r1.c
                int r0 = r0.m()
            La:
                return r0
        }

        @Override
        public final boolean c() {
                r1 = this;
                int r0 = r1.a
                if (r0 == 0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }
    }

    static final class e implements com.tkay.expressad.exoplayer.e.a.b.b {
        private final com.tkay.expressad.exoplayer.k.s a;
        private final int b;
        private final int c;
        private int d;
        private int e;

        public e(com.tkay.expressad.exoplayer.e.a.a.b r2) {
                r1 = this;
                r1.<init>()
                com.tkay.expressad.exoplayer.k.s r2 = r2.aV
                r1.a = r2
                r0 = 12
                r2.c(r0)
                com.tkay.expressad.exoplayer.k.s r2 = r1.a
                int r2 = r2.m()
                r2 = r2 & 255(0xff, float:3.57E-43)
                r1.c = r2
                com.tkay.expressad.exoplayer.k.s r2 = r1.a
                int r2 = r2.m()
                r1.b = r2
                return
        }

        @Override
        public final int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        @Override
        public final int b() {
                r2 = this;
                int r0 = r2.c
                r1 = 8
                if (r0 != r1) goto Ld
                com.tkay.expressad.exoplayer.k.s r0 = r2.a
                int r0 = r0.d()
                return r0
            Ld:
                r1 = 16
                if (r0 != r1) goto L18
                com.tkay.expressad.exoplayer.k.s r0 = r2.a
                int r0 = r0.e()
                return r0
            L18:
                int r0 = r2.d
                int r1 = r0 + 1
                r2.d = r1
                int r0 = r0 % 2
                if (r0 != 0) goto L2f
                com.tkay.expressad.exoplayer.k.s r0 = r2.a
                int r0 = r0.d()
                r2.e = r0
                r0 = r0 & 240(0xf0, float:3.36E-43)
                int r0 = r0 >> 4
                return r0
            L2f:
                int r0 = r2.e
                r0 = r0 & 15
                return r0
        }

        @Override
        public final boolean c() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    private static final class f {
        private final int a;
        private final long b;
        private final int c;

        public f(int r1, long r2, int r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r4
                return
        }

        static long a(com.tkay.expressad.exoplayer.e.a.b.f r2) {
                long r0 = r2.b
                return r0
        }

        static int b(com.tkay.expressad.exoplayer.e.a.b.f r0) {
                int r0 = r0.a
                return r0
        }

        static int c(com.tkay.expressad.exoplayer.e.a.b.f r0) {
                int r0 = r0.c
                return r0
        }
    }

    public static final class g extends com.tkay.expressad.exoplayer.t {
        public g() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.String r0 = "vide"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.b = r0
            java.lang.String r0 = "soun"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.c = r0
            java.lang.String r0 = "text"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.d = r0
            java.lang.String r0 = "sbtl"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.e = r0
            java.lang.String r0 = "subt"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.f = r0
            java.lang.String r0 = "clcp"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.g = r0
            java.lang.String r0 = "meta"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.b.h = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(com.tkay.expressad.exoplayer.k.s r4, int r5, int r6) {
            int r0 = r4.c()
        L4:
            int r1 = r0 - r5
            if (r1 >= r6) goto L24
            r4.c(r0)
            int r1 = r4.i()
            if (r1 <= 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            java.lang.String r3 = "childAtomSize should be positive"
            com.tkay.expressad.exoplayer.k.a.a(r2, r3)
            int r2 = r4.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r2 != r3) goto L22
            return r0
        L22:
            int r0 = r0 + r1
            goto L4
        L24:
            r4 = -1
            return r4
    }

    private static long a(com.tkay.expressad.exoplayer.k.s r2) {
            r0 = 8
            r2.c(r0)
            int r1 = r2.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            if (r1 != 0) goto L10
            goto L12
        L10:
            r0 = 16
        L12:
            r2.d(r0)
            long r0 = r2.h()
            return r0
    }

    private static android.util.Pair<long[], long[]> a(com.tkay.expressad.exoplayer.e.a.a.a r8) {
            if (r8 == 0) goto L5b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.V
            com.tkay.expressad.exoplayer.e.a.a$b r8 = r8.d(r0)
            if (r8 != 0) goto Lb
            goto L5b
        Lb:
            com.tkay.expressad.exoplayer.k.s r8 = r8.aV
            r0 = 8
            r8.c(r0)
            int r0 = r8.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.a.a(r0)
            int r1 = r8.m()
            long[] r2 = new long[r1]
            long[] r3 = new long[r1]
            r4 = 0
        L23:
            if (r4 >= r1) goto L56
            r5 = 1
            if (r0 != r5) goto L2d
            long r6 = r8.n()
            goto L31
        L2d:
            long r6 = r8.h()
        L31:
            r2[r4] = r6
            if (r0 != r5) goto L3a
            long r6 = r8.j()
            goto L3f
        L3a:
            int r6 = r8.i()
            long r6 = (long) r6
        L3f:
            r3[r4] = r6
            short r6 = r8.f()
            if (r6 != r5) goto L4e
            r5 = 2
            r8.d(r5)
            int r4 = r4 + 1
            goto L23
        L4e:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unsupported media rate."
            r8.<init>(r0)
            throw r8
        L56:
            android.util.Pair r8 = android.util.Pair.create(r2, r3)
            return r8
        L5b:
            r8 = 0
            android.util.Pair r8 = android.util.Pair.create(r8, r8)
            return r8
    }

    private static com.tkay.expressad.exoplayer.e.a.b.c a(com.tkay.expressad.exoplayer.k.s r47, int r48, int r49, java.lang.String r50, com.tkay.expressad.exoplayer.d.e r51, boolean r52) {
            r0 = r47
            r12 = r50
            r13 = r51
            r1 = 12
            r0.c(r1)
            int r14 = r47.i()
            com.tkay.expressad.exoplayer.e.a.b$c r15 = new com.tkay.expressad.exoplayer.e.a.b$c
            r15.<init>(r14)
            r11 = 0
            r9 = r11
        L16:
            if (r9 >= r14) goto L54c
            int r10 = r47.c()
            int r8 = r47.i()
            r7 = 1
            if (r8 <= 0) goto L25
            r1 = r7
            goto L26
        L25:
            r1 = r11
        L26:
            java.lang.String r6 = "childAtomSize should be positive"
            com.tkay.expressad.exoplayer.k.a.a(r1, r6)
            int r1 = r47.i()
            int r2 = com.tkay.expressad.exoplayer.e.a.a.g
            r5 = 2
            r4 = 0
            r3 = 8
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.h
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.ae
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aq
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.i
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.j
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.k
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aP
            if (r1 == r2) goto L39f
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aQ
            if (r1 != r2) goto L59
            goto L39f
        L59:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.n
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.af
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.s
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.u
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.w
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.z
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.x
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.y
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aD
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aE
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.q
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.r
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.o
            if (r1 == r2) goto L13c
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aT
            if (r1 != r2) goto L93
            goto L13c
        L93:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.ao
            if (r1 == r2) goto Lc0
            int r2 = com.tkay.expressad.exoplayer.e.a.a.az
            if (r1 == r2) goto Lc0
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aA
            if (r1 == r2) goto Lc0
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aB
            if (r1 == r2) goto Lc0
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aC
            if (r1 != r2) goto La8
            goto Lc0
        La8:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aS
            if (r1 != r2) goto Lb8
            java.lang.String r1 = java.lang.Integer.toString(r48)
            java.lang.String r2 = "application/x-camera-motion"
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.m.a(r1, r2, r4, r4)
            r15.c = r1
        Lb8:
            r19 = r9
            r11 = r10
            r22 = r14
            r14 = r8
            goto L540
        Lc0:
            int r2 = r10 + 8
            int r2 = r2 + r3
            r0.c(r2)
            r5 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = com.tkay.expressad.exoplayer.e.a.a.ao
            java.lang.String r16 = "application/ttml+xml"
            if (r1 != r2) goto Ld8
            r18 = r4
            r2 = r16
        Ld5:
            r16 = r5
            goto L10f
        Ld8:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.az
            if (r1 != r2) goto Led
            int r1 = r8 + (-8)
            int r1 = r1 - r3
            byte[] r2 = new byte[r1]
            r0.a(r2, r11, r1)
            java.util.List r1 = java.util.Collections.singletonList(r2)
            java.lang.String r2 = "application/x-quicktime-tx3g"
            r18 = r1
            goto Ld5
        Led:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aA
            if (r1 != r2) goto Lf7
            java.lang.String r1 = "application/x-mp4-vtt"
        Lf3:
            r2 = r1
            r18 = r4
            goto Ld5
        Lf7:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aB
            if (r1 != r2) goto L106
            r1 = 0
            r18 = r4
            r45 = r1
            r2 = r16
            r16 = r45
            goto L10f
        L106:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aC
            if (r1 != r2) goto L136
            r15.e = r7
            java.lang.String r1 = "application/x-mp4-cea-608"
            goto Lf3
        L10f:
            java.lang.String r1 = java.lang.Integer.toString(r48)
            r3 = 0
            r4 = -1
            r5 = 0
            r7 = -1
            r19 = 0
            r6 = r50
            r20 = r8
            r8 = r19
            r19 = r9
            r21 = r10
            r9 = r16
            r22 = r14
            r14 = r11
            r11 = r18
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.m.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r11)
            r15.c = r1
            r14 = r20
            r11 = r21
            goto L540
        L136:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
        L13c:
            r20 = r8
            r19 = r9
            r21 = r10
            r22 = r14
            r14 = r11
            r11 = r21
            int r10 = r11 + 8
            int r10 = r10 + r3
            r0.c(r10)
            r2 = 6
            if (r52 == 0) goto L158
            int r3 = r47.e()
            r0.d(r2)
            goto L15c
        L158:
            r0.d(r3)
            r3 = r14
        L15c:
            if (r3 == 0) goto L183
            if (r3 != r7) goto L161
            goto L183
        L161:
            if (r3 != r5) goto L17f
            r2 = 16
            r0.d(r2)
            long r2 = r47.j()
            double r2 = java.lang.Double.longBitsToDouble(r2)
            long r2 = java.lang.Math.round(r2)
            int r2 = (int) r2
            int r3 = r47.m()
            r8 = 20
            r0.d(r8)
            goto L196
        L17f:
            r14 = r20
            goto L540
        L183:
            int r8 = r47.e()
            r0.d(r2)
            int r2 = r47.k()
            if (r3 != r7) goto L195
            r3 = 16
            r0.d(r3)
        L195:
            r3 = r8
        L196:
            int r8 = r47.c()
            int r9 = com.tkay.expressad.exoplayer.e.a.a.af
            r10 = r20
            if (r1 != r9) goto L1ca
            android.util.Pair r9 = b(r0, r11, r10)
            if (r9 == 0) goto L1c4
            java.lang.Object r1 = r9.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r13 != 0) goto L1b1
            goto L1bb
        L1b1:
            java.lang.Object r4 = r9.second
            com.tkay.expressad.exoplayer.e.a.k r4 = (com.tkay.expressad.exoplayer.e.a.k) r4
            java.lang.String r4 = r4.b
            com.tkay.expressad.exoplayer.d.e r4 = r13.a(r4)
        L1bb:
            com.tkay.expressad.exoplayer.e.a.k[] r5 = r15.b
            java.lang.Object r9 = r9.second
            com.tkay.expressad.exoplayer.e.a.k r9 = (com.tkay.expressad.exoplayer.e.a.k) r9
            r5[r19] = r9
            goto L1c5
        L1c4:
            r4 = r13
        L1c5:
            r0.c(r8)
            r9 = r4
            goto L1cb
        L1ca:
            r9 = r13
        L1cb:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.s
            java.lang.String r5 = "audio/raw"
            if (r1 != r4) goto L1d4
            java.lang.String r1 = "audio/ac3"
            goto L21d
        L1d4:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.u
            if (r1 != r4) goto L1db
            java.lang.String r1 = "audio/eac3"
            goto L21d
        L1db:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.w
            if (r1 != r4) goto L1e2
            java.lang.String r1 = "audio/vnd.dts"
            goto L21d
        L1e2:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.x
            if (r1 == r4) goto L21b
            int r4 = com.tkay.expressad.exoplayer.e.a.a.y
            if (r1 != r4) goto L1eb
            goto L21b
        L1eb:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.z
            if (r1 != r4) goto L1f2
            java.lang.String r1 = "audio/vnd.dts.hd;profile=lbr"
            goto L21d
        L1f2:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aD
            if (r1 != r4) goto L1f9
            java.lang.String r1 = "audio/3gpp"
            goto L21d
        L1f9:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aE
            if (r1 != r4) goto L200
            java.lang.String r1 = "audio/amr-wb"
            goto L21d
        L200:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.q
            if (r1 == r4) goto L219
            int r4 = com.tkay.expressad.exoplayer.e.a.a.r
            if (r1 != r4) goto L209
            goto L219
        L209:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.o
            if (r1 != r4) goto L210
            java.lang.String r1 = "audio/mpeg"
            goto L21d
        L210:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aT
            if (r1 != r4) goto L217
            java.lang.String r1 = "audio/alac"
            goto L21d
        L217:
            r1 = 0
            goto L21d
        L219:
            r1 = r5
            goto L21d
        L21b:
            java.lang.String r1 = "audio/vnd.dts.hd"
        L21d:
            r21 = r2
            r20 = r3
            r4 = r8
            r23 = 0
            r8 = r1
        L225:
            int r1 = r4 - r11
            if (r1 >= r10) goto L35a
            r0.c(r4)
            int r3 = r47.i()
            if (r3 <= 0) goto L234
            r1 = r7
            goto L235
        L234:
            r1 = r14
        L235:
            com.tkay.expressad.exoplayer.k.a.a(r1, r6)
            int r1 = r47.i()
            int r2 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r1 == r2) goto L2d5
            if (r52 == 0) goto L248
            int r2 = com.tkay.expressad.exoplayer.e.a.a.p
            if (r1 != r2) goto L248
            goto L2d5
        L248:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.t
            if (r1 != r2) goto L26a
            int r1 = r4 + 8
            r0.c(r1)
            java.lang.String r1 = java.lang.Integer.toString(r48)
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.b.a.a(r0, r1, r12, r9)
            r15.c = r1
        L25b:
            r28 = r5
            r29 = r6
            r30 = r8
            r17 = r9
            r9 = r14
            r16 = 0
            r14 = r3
            r8 = r4
            goto L2d0
        L26a:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.v
            if (r1 != r2) goto L27e
            int r1 = r4 + 8
            r0.c(r1)
            java.lang.String r1 = java.lang.Integer.toString(r48)
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.b.a.b(r0, r1, r12, r9)
            r15.c = r1
            goto L25b
        L27e:
            int r2 = com.tkay.expressad.exoplayer.e.a.a.A
            if (r1 != r2) goto L2ae
            java.lang.String r1 = java.lang.Integer.toString(r48)
            r24 = 0
            r25 = -1
            r26 = 0
            r2 = r8
            r14 = r3
            r3 = r24
            r27 = r4
            r16 = 0
            r4 = r25
            r28 = r5
            r5 = r20
            r29 = r6
            r6 = r21
            r7 = r26
            r30 = r8
            r8 = r9
            r17 = r9
            r9 = r50
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.m.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r15.c = r1
            goto L2cd
        L2ae:
            r14 = r3
            r27 = r4
            r28 = r5
            r29 = r6
            r30 = r8
            r17 = r9
            r16 = 0
            int r2 = com.tkay.expressad.exoplayer.e.a.a.aT
            if (r1 != r2) goto L2cd
            byte[] r1 = new byte[r14]
            r8 = r27
            r0.c(r8)
            r9 = 0
            r0.a(r1, r9, r14)
            r23 = r1
            goto L2d0
        L2cd:
            r8 = r27
            r9 = 0
        L2d0:
            r5 = r29
            r2 = -1
            goto L34d
        L2d5:
            r28 = r5
            r29 = r6
            r30 = r8
            r17 = r9
            r9 = r14
            r16 = 0
            r14 = r3
            r8 = r4
            int r2 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r1 != r2) goto L2eb
            r4 = r8
            r5 = r29
        L2e9:
            r2 = -1
            goto L318
        L2eb:
            int r1 = r47.c()
            r4 = r1
        L2f0:
            int r1 = r4 - r8
            if (r1 >= r14) goto L314
            r0.c(r4)
            int r1 = r47.i()
            if (r1 <= 0) goto L301
            r5 = r29
            r2 = 1
            goto L304
        L301:
            r2 = r9
            r5 = r29
        L304:
            com.tkay.expressad.exoplayer.k.a.a(r2, r5)
            int r2 = r47.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r2 != r3) goto L310
            goto L2e9
        L310:
            int r4 = r4 + r1
            r29 = r5
            goto L2f0
        L314:
            r5 = r29
            r2 = -1
            r4 = -1
        L318:
            if (r4 == r2) goto L349
            android.util.Pair r1 = d(r0, r4)
            java.lang.Object r3 = r1.first
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r1 = r1.second
            r23 = r1
            byte[] r23 = (byte[]) r23
            java.lang.String r1 = "audio/mp4a-latm"
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L34b
            android.util.Pair r1 = com.tkay.expressad.exoplayer.k.d.a(r23)
            java.lang.Object r4 = r1.first
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            java.lang.Object r1 = r1.second
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r20 = r1
            r21 = r4
            goto L34b
        L349:
            r3 = r30
        L34b:
            r30 = r3
        L34d:
            int r4 = r8 + r14
            r6 = r5
            r14 = r9
            r9 = r17
            r5 = r28
            r8 = r30
            r7 = 1
            goto L225
        L35a:
            r28 = r5
            r30 = r8
            r17 = r9
            r9 = r14
            r2 = -1
            r16 = 0
            com.tkay.expressad.exoplayer.m r1 = r15.c
            if (r1 != 0) goto L39c
            r3 = r30
            if (r3 == 0) goto L39c
            r1 = r28
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L376
            r7 = 2
            goto L377
        L376:
            r7 = r2
        L377:
            java.lang.String r1 = java.lang.Integer.toString(r48)
            r4 = 0
            r5 = -1
            if (r23 != 0) goto L382
            r8 = r16
            goto L387
        L382:
            java.util.List r2 = java.util.Collections.singletonList(r23)
            r8 = r2
        L387:
            r2 = r3
            r3 = r4
            r4 = r5
            r5 = r20
            r6 = r21
            r14 = r9
            r9 = r17
            r14 = r10
            r10 = r50
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.m.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r15.c = r1
            goto L540
        L39c:
            r14 = r10
            goto L540
        L39f:
            r16 = r4
            r5 = r6
            r19 = r9
            r11 = r10
            r22 = r14
            r2 = -1
            r14 = r8
            int r10 = r11 + 8
            int r10 = r10 + r3
            r0.c(r10)
            r3 = 16
            r0.d(r3)
            int r35 = r47.e()
            int r36 = r47.e()
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 50
            r0.d(r4)
            int r4 = r47.c()
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ae
            if (r1 != r6) goto L3f8
            android.util.Pair r6 = b(r0, r11, r14)
            if (r6 == 0) goto L3f1
            java.lang.Object r1 = r6.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r13 != 0) goto L3de
            r7 = r16
            goto L3e8
        L3de:
            java.lang.Object r7 = r6.second
            com.tkay.expressad.exoplayer.e.a.k r7 = (com.tkay.expressad.exoplayer.e.a.k) r7
            java.lang.String r7 = r7.b
            com.tkay.expressad.exoplayer.d.e r7 = r13.a(r7)
        L3e8:
            com.tkay.expressad.exoplayer.e.a.k[] r8 = r15.b
            java.lang.Object r6 = r6.second
            com.tkay.expressad.exoplayer.e.a.k r6 = (com.tkay.expressad.exoplayer.e.a.k) r6
            r8[r19] = r6
            goto L3f2
        L3f1:
            r7 = r13
        L3f2:
            r0.c(r4)
            r44 = r7
            goto L3fa
        L3f8:
            r44 = r13
        L3fa:
            r42 = r2
            r40 = r3
            r31 = r16
            r38 = r31
            r41 = r38
            r2 = 0
        L405:
            int r3 = r4 - r11
            if (r3 >= r14) goto L528
            r0.c(r4)
            int r3 = r47.c()
            int r6 = r47.i()
            if (r6 != 0) goto L41d
            int r7 = r47.c()
            int r7 = r7 - r11
            if (r7 == r14) goto L528
        L41d:
            if (r6 <= 0) goto L421
            r7 = 1
            goto L422
        L421:
            r7 = 0
        L422:
            com.tkay.expressad.exoplayer.k.a.a(r7, r5)
            int r7 = r47.i()
            int r8 = com.tkay.expressad.exoplayer.e.a.a.M
            r9 = 3
            if (r7 != r8) goto L44e
            if (r31 != 0) goto L432
            r7 = 1
            goto L433
        L432:
            r7 = 0
        L433:
            com.tkay.expressad.exoplayer.k.a.b(r7)
            int r3 = r3 + 8
            r0.c(r3)
            com.tkay.expressad.exoplayer.l.a r3 = com.tkay.expressad.exoplayer.l.a.a(r47)
            java.util.List<byte[]> r7 = r3.a
            int r8 = r3.b
            r15.d = r8
            if (r2 != 0) goto L44b
            float r3 = r3.e
            r40 = r3
        L44b:
            java.lang.String r3 = "video/avc"
            goto L46b
        L44e:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.N
            if (r7 != r8) goto L473
            if (r31 != 0) goto L456
            r7 = 1
            goto L457
        L456:
            r7 = 0
        L457:
            com.tkay.expressad.exoplayer.k.a.b(r7)
            int r3 = r3 + 8
            r0.c(r3)
            com.tkay.expressad.exoplayer.l.d r3 = com.tkay.expressad.exoplayer.l.d.a(r47)
            java.util.List<byte[]> r7 = r3.a
            int r3 = r3.b
            r15.d = r3
            java.lang.String r3 = "video/hevc"
        L46b:
            r31 = r3
            r38 = r7
        L46f:
            r7 = 1
            r8 = 2
            goto L525
        L473:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.aR
            if (r7 != r8) goto L489
            if (r31 != 0) goto L47b
            r3 = 1
            goto L47c
        L47b:
            r3 = 0
        L47c:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aP
            if (r1 != r3) goto L486
            java.lang.String r3 = "video/x-vnd.on2.vp8"
            goto L497
        L486:
            java.lang.String r3 = "video/x-vnd.on2.vp9"
            goto L497
        L489:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.l
            if (r7 != r8) goto L49a
            if (r31 != 0) goto L491
            r3 = 1
            goto L492
        L491:
            r3 = 0
        L492:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            java.lang.String r3 = "video/3gpp"
        L497:
            r31 = r3
            goto L46f
        L49a:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r7 != r8) goto L4bb
            if (r31 != 0) goto L4a2
            r7 = 1
            goto L4a3
        L4a2:
            r7 = 0
        L4a3:
            com.tkay.expressad.exoplayer.k.a.b(r7)
            android.util.Pair r3 = d(r0, r3)
            java.lang.Object r7 = r3.first
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r3 = r3.second
            byte[] r3 = (byte[]) r3
            java.util.List r3 = java.util.Collections.singletonList(r3)
            r38 = r3
            r31 = r7
            goto L46f
        L4bb:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.an
            if (r7 != r8) goto L4d2
            int r3 = r3 + 8
            r0.c(r3)
            int r2 = r47.m()
            int r3 = r47.m()
            float r2 = (float) r2
            float r3 = (float) r3
            float r40 = r2 / r3
            r2 = 1
            goto L46f
        L4d2:
            int r8 = com.tkay.expressad.exoplayer.e.a.a.aN
            if (r7 != r8) goto L4fb
            int r7 = r3 + 8
        L4d8:
            int r8 = r7 - r3
            if (r8 >= r6) goto L4f5
            r0.c(r7)
            int r8 = r47.i()
            int r9 = r47.i()
            int r10 = com.tkay.expressad.exoplayer.e.a.a.aO
            if (r9 != r10) goto L4f3
            byte[] r3 = r0.a
            int r8 = r8 + r7
            byte[] r3 = java.util.Arrays.copyOfRange(r3, r7, r8)
            goto L4f7
        L4f3:
            int r7 = r7 + r8
            goto L4d8
        L4f5:
            r3 = r16
        L4f7:
            r41 = r3
            goto L46f
        L4fb:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aM
            if (r7 != r3) goto L46f
            int r3 = r47.d()
            r0.d(r9)
            if (r3 != 0) goto L46f
            int r3 = r47.d()
            if (r3 == 0) goto L521
            r7 = 1
            if (r3 == r7) goto L51d
            r8 = 2
            if (r3 == r8) goto L51a
            if (r3 == r9) goto L517
            goto L525
        L517:
            r42 = r9
            goto L525
        L51a:
            r42 = r8
            goto L525
        L51d:
            r8 = 2
            r42 = r7
            goto L525
        L521:
            r7 = 1
            r8 = 2
            r42 = 0
        L525:
            int r4 = r4 + r6
            goto L405
        L528:
            if (r31 == 0) goto L540
            java.lang.String r30 = java.lang.Integer.toString(r48)
            r32 = 0
            r33 = -1
            r34 = -1
            r37 = -1082130432(0xffffffffbf800000, float:-1.0)
            r43 = 0
            r39 = r49
            com.tkay.expressad.exoplayer.m r1 = com.tkay.expressad.exoplayer.m.a(r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44)
            r15.c = r1
        L540:
            int r10 = r11 + r14
            r0.c(r10)
            int r9 = r19 + 1
            r14 = r22
            r11 = 0
            goto L16
        L54c:
            return r15
    }

    public static com.tkay.expressad.exoplayer.e.a.j a(com.tkay.expressad.exoplayer.e.a.a.a r25, com.tkay.expressad.exoplayer.e.a.a.b r26, long r27, com.tkay.expressad.exoplayer.d.e r29, boolean r30, boolean r31) {
            r0 = r25
            int r1 = com.tkay.expressad.exoplayer.e.a.a.J
            com.tkay.expressad.exoplayer.e.a.a$a r1 = r0.e(r1)
            int r2 = com.tkay.expressad.exoplayer.e.a.a.X
            com.tkay.expressad.exoplayer.e.a.a$b r2 = r1.d(r2)
            com.tkay.expressad.exoplayer.k.s r2 = r2.aV
            r3 = 16
            r2.c(r3)
            int r2 = r2.i()
            int r4 = com.tkay.expressad.exoplayer.e.a.b.c
            r5 = -1
            r7 = 4
            if (r2 != r4) goto L21
            r10 = 1
            goto L43
        L21:
            int r4 = com.tkay.expressad.exoplayer.e.a.b.b
            if (r2 != r4) goto L28
            r2 = 2
        L26:
            r10 = r2
            goto L43
        L28:
            int r4 = com.tkay.expressad.exoplayer.e.a.b.d
            if (r2 == r4) goto L41
            int r4 = com.tkay.expressad.exoplayer.e.a.b.e
            if (r2 == r4) goto L41
            int r4 = com.tkay.expressad.exoplayer.e.a.b.f
            if (r2 == r4) goto L41
            int r4 = com.tkay.expressad.exoplayer.e.a.b.g
            if (r2 != r4) goto L39
            goto L41
        L39:
            int r4 = com.tkay.expressad.exoplayer.e.a.b.h
            if (r2 != r4) goto L3f
            r10 = r7
            goto L43
        L3f:
            r10 = r5
            goto L43
        L41:
            r2 = 3
            goto L26
        L43:
            r2 = 0
            if (r10 != r5) goto L47
            return r2
        L47:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.T
            com.tkay.expressad.exoplayer.e.a.a$b r4 = r0.d(r4)
            com.tkay.expressad.exoplayer.k.s r4 = r4.aV
            r8 = 8
            r4.c(r8)
            int r9 = r4.i()
            int r9 = com.tkay.expressad.exoplayer.e.a.a.a(r9)
            if (r9 != 0) goto L60
            r11 = r8
            goto L61
        L60:
            r11 = r3
        L61:
            r4.d(r11)
            int r11 = r4.i()
            r4.d(r7)
            int r12 = r4.c()
            if (r9 != 0) goto L73
            r13 = r7
            goto L74
        L73:
            r13 = r8
        L74:
            r14 = 0
            r15 = r14
        L76:
            if (r15 >= r13) goto L85
            byte[] r6 = r4.a
            int r17 = r12 + r15
            r6 = r6[r17]
            if (r6 == r5) goto L82
            r6 = r14
            goto L86
        L82:
            int r15 = r15 + 1
            goto L76
        L85:
            r6 = 1
        L86:
            r15 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r6 == 0) goto L92
            r4.d(r13)
        L90:
            r5 = r15
            goto La4
        L92:
            if (r9 != 0) goto L99
            long r5 = r4.h()
            goto L9d
        L99:
            long r5 = r4.n()
        L9d:
            r12 = 0
            int r9 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r9 != 0) goto La4
            goto L90
        La4:
            r4.d(r3)
            int r9 = r4.i()
            int r12 = r4.i()
            r4.d(r7)
            int r13 = r4.i()
            int r4 = r4.i()
            r3 = 65536(0x10000, float:9.1835E-41)
            r7 = -65536(0xffffffffffff0000, float:NaN)
            if (r9 != 0) goto Lc9
            if (r12 != r3) goto Lc9
            if (r13 != r7) goto Lc9
            if (r4 != 0) goto Lc9
            r14 = 90
            goto Lde
        Lc9:
            if (r9 != 0) goto Ld4
            if (r12 != r7) goto Ld4
            if (r13 != r3) goto Ld4
            if (r4 != 0) goto Ld4
            r14 = 270(0x10e, float:3.78E-43)
            goto Lde
        Ld4:
            if (r9 != r7) goto Lde
            if (r12 != 0) goto Lde
            if (r13 != 0) goto Lde
            if (r4 != r7) goto Lde
            r14 = 180(0xb4, float:2.52E-43)
        Lde:
            com.tkay.expressad.exoplayer.e.a.b$f r3 = new com.tkay.expressad.exoplayer.e.a.b$f
            r3.<init>(r11, r5, r14)
            int r4 = (r27 > r15 ? 1 : (r27 == r15 ? 0 : -1))
            if (r4 != 0) goto Lf0
            long r4 = com.tkay.expressad.exoplayer.e.a.b.f.a(r3)
            r19 = r4
            r4 = r26
            goto Lf4
        Lf0:
            r4 = r26
            r19 = r27
        Lf4:
            com.tkay.expressad.exoplayer.k.s r4 = r4.aV
            r4.c(r8)
            int r5 = r4.i()
            int r5 = com.tkay.expressad.exoplayer.e.a.a.a(r5)
            if (r5 != 0) goto L105
            r5 = r8
            goto L107
        L105:
            r5 = 16
        L107:
            r4.d(r5)
            long r13 = r4.h()
            int r4 = (r19 > r15 ? 1 : (r19 == r15 ? 0 : -1))
            if (r4 != 0) goto L113
            goto L11d
        L113:
            r21 = 1000000(0xf4240, double:4.940656E-318)
            r23 = r13
            long r4 = com.tkay.expressad.exoplayer.k.af.a(r19, r21, r23)
            r15 = r4
        L11d:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.K
            com.tkay.expressad.exoplayer.e.a.a$a r4 = r1.e(r4)
            int r5 = com.tkay.expressad.exoplayer.e.a.a.L
            com.tkay.expressad.exoplayer.e.a.a$a r4 = r4.e(r5)
            int r5 = com.tkay.expressad.exoplayer.e.a.a.W
            com.tkay.expressad.exoplayer.e.a.a$b r1 = r1.d(r5)
            com.tkay.expressad.exoplayer.k.s r1 = r1.aV
            r1.c(r8)
            int r5 = r1.i()
            int r5 = com.tkay.expressad.exoplayer.e.a.a.a(r5)
            if (r5 != 0) goto L140
            r6 = r8
            goto L142
        L140:
            r6 = 16
        L142:
            r1.d(r6)
            long r6 = r1.h()
            if (r5 != 0) goto L14c
            r8 = 4
        L14c:
            r1.d(r8)
            int r1 = r1.e()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            int r8 = r1 >> 10
            r8 = r8 & 31
            int r8 = r8 + 96
            char r8 = (char) r8
            r5.append(r8)
            int r8 = r1 >> 5
            r8 = r8 & 31
            int r8 = r8 + 96
            char r8 = (char) r8
            r5.append(r8)
            r1 = r1 & 31
            int r1 = r1 + 96
            char r1 = (char) r1
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            java.lang.Long r5 = java.lang.Long.valueOf(r6)
            android.util.Pair r1 = android.util.Pair.create(r5, r1)
            int r5 = com.tkay.expressad.exoplayer.e.a.a.Y
            com.tkay.expressad.exoplayer.e.a.a$b r4 = r4.d(r5)
            com.tkay.expressad.exoplayer.k.s r4 = r4.aV
            int r18 = com.tkay.expressad.exoplayer.e.a.b.f.b(r3)
            int r19 = com.tkay.expressad.exoplayer.e.a.b.f.c(r3)
            java.lang.Object r5 = r1.second
            r20 = r5
            java.lang.String r20 = (java.lang.String) r20
            r17 = r4
            r21 = r29
            r22 = r31
            com.tkay.expressad.exoplayer.e.a.b$c r4 = a(r17, r18, r19, r20, r21, r22)
            if (r30 != 0) goto L1b9
            int r5 = com.tkay.expressad.exoplayer.e.a.a.U
            com.tkay.expressad.exoplayer.e.a.a$a r0 = r0.e(r5)
            android.util.Pair r0 = a(r0)
            java.lang.Object r5 = r0.first
            long[] r5 = (long[]) r5
            java.lang.Object r0 = r0.second
            long[] r0 = (long[]) r0
            r22 = r0
            r21 = r5
            goto L1bd
        L1b9:
            r21 = r2
            r22 = r21
        L1bd:
            com.tkay.expressad.exoplayer.m r0 = r4.c
            if (r0 != 0) goto L1c2
            return r2
        L1c2:
            com.tkay.expressad.exoplayer.e.a.j r0 = new com.tkay.expressad.exoplayer.e.a.j
            int r9 = com.tkay.expressad.exoplayer.e.a.b.f.b(r3)
            java.lang.Object r1 = r1.first
            java.lang.Long r1 = (java.lang.Long) r1
            long r11 = r1.longValue()
            com.tkay.expressad.exoplayer.m r1 = r4.c
            int r2 = r4.e
            com.tkay.expressad.exoplayer.e.a.k[] r3 = r4.b
            int r4 = r4.d
            r8 = r0
            r17 = r1
            r18 = r2
            r19 = r3
            r20 = r4
            r8.<init>(r9, r10, r11, r13, r15, r17, r18, r19, r20, r21, r22)
            return r0
    }

    private static com.tkay.expressad.exoplayer.e.a.k a(com.tkay.expressad.exoplayer.k.s r11, int r12, int r13, java.lang.String r14) {
            int r0 = r12 + 8
        L2:
            int r1 = r0 - r12
            r2 = 0
            if (r1 >= r13) goto L63
            r11.c(r0)
            int r1 = r11.i()
            int r3 = r11.i()
            int r4 = com.tkay.expressad.exoplayer.e.a.a.ad
            if (r3 != r4) goto L61
            int r12 = r11.i()
            int r12 = com.tkay.expressad.exoplayer.e.a.a.a(r12)
            r13 = 1
            r11.d(r13)
            r0 = 0
            if (r12 != 0) goto L2b
            r11.d(r13)
            r8 = r0
            r9 = r8
            goto L37
        L2b:
            int r12 = r11.d()
            r1 = r12 & 240(0xf0, float:3.36E-43)
            int r1 = r1 >> 4
            r12 = r12 & 15
            r9 = r12
            r8 = r1
        L37:
            int r12 = r11.d()
            if (r12 != r13) goto L3f
            r4 = r13
            goto L40
        L3f:
            r4 = r0
        L40:
            int r6 = r11.d()
            r12 = 16
            byte[] r7 = new byte[r12]
            r11.a(r7, r0, r12)
            if (r4 == 0) goto L58
            if (r6 != 0) goto L58
            int r12 = r11.d()
            byte[] r2 = new byte[r12]
            r11.a(r2, r0, r12)
        L58:
            r10 = r2
            com.tkay.expressad.exoplayer.e.a.k r11 = new com.tkay.expressad.exoplayer.e.a.k
            r3 = r11
            r5 = r14
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            return r11
        L61:
            int r0 = r0 + r1
            goto L2
        L63:
            return r2
    }

    public static com.tkay.expressad.exoplayer.e.a.m a(com.tkay.expressad.exoplayer.e.a.j r43, com.tkay.expressad.exoplayer.e.a.a.a r44, com.tkay.expressad.exoplayer.e.i r45) {
            r1 = r43
            r0 = r44
            r2 = r45
            int r3 = com.tkay.expressad.exoplayer.e.a.a.av
            com.tkay.expressad.exoplayer.e.a.a$b r3 = r0.d(r3)
            if (r3 == 0) goto L14
            com.tkay.expressad.exoplayer.e.a.b$d r4 = new com.tkay.expressad.exoplayer.e.a.b$d
            r4.<init>(r3)
            goto L21
        L14:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aw
            com.tkay.expressad.exoplayer.e.a.a$b r3 = r0.d(r3)
            if (r3 == 0) goto L4d0
            com.tkay.expressad.exoplayer.e.a.b$e r4 = new com.tkay.expressad.exoplayer.e.a.b$e
            r4.<init>(r3)
        L21:
            int r3 = r4.a()
            r5 = 0
            if (r3 != 0) goto L42
            com.tkay.expressad.exoplayer.e.a.m r9 = new com.tkay.expressad.exoplayer.e.a.m
            long[] r2 = new long[r5]
            int[] r3 = new int[r5]
            r4 = 0
            long[] r6 = new long[r5]
            int[] r7 = new int[r5]
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r9
            r1 = r43
            r5 = r6
            r6 = r7
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L42:
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ax
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r0.d(r6)
            r7 = 1
            if (r6 != 0) goto L53
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ay
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r0.d(r6)
            r8 = r7
            goto L54
        L53:
            r8 = r5
        L54:
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            int r9 = com.tkay.expressad.exoplayer.e.a.a.au
            com.tkay.expressad.exoplayer.e.a.a$b r9 = r0.d(r9)
            com.tkay.expressad.exoplayer.k.s r9 = r9.aV
            int r10 = com.tkay.expressad.exoplayer.e.a.a.ar
            com.tkay.expressad.exoplayer.e.a.a$b r10 = r0.d(r10)
            com.tkay.expressad.exoplayer.k.s r10 = r10.aV
            int r11 = com.tkay.expressad.exoplayer.e.a.a.as
            com.tkay.expressad.exoplayer.e.a.a$b r11 = r0.d(r11)
            r12 = 0
            if (r11 == 0) goto L72
            com.tkay.expressad.exoplayer.k.s r11 = r11.aV
            goto L73
        L72:
            r11 = r12
        L73:
            int r13 = com.tkay.expressad.exoplayer.e.a.a.at
            com.tkay.expressad.exoplayer.e.a.a$b r0 = r0.d(r13)
            if (r0 == 0) goto L7e
            com.tkay.expressad.exoplayer.k.s r0 = r0.aV
            goto L7f
        L7e:
            r0 = r12
        L7f:
            com.tkay.expressad.exoplayer.e.a.b$a r13 = new com.tkay.expressad.exoplayer.e.a.b$a
            r13.<init>(r9, r6, r8)
            r6 = 12
            r10.c(r6)
            int r8 = r10.m()
            int r8 = r8 - r7
            int r9 = r10.m()
            int r14 = r10.m()
            if (r0 == 0) goto La0
            r0.c(r6)
            int r15 = r0.m()
            goto La1
        La0:
            r15 = r5
        La1:
            r16 = -1
            if (r11 == 0) goto Lb5
            r11.c(r6)
            int r6 = r11.m()
            if (r6 <= 0) goto Lb7
            int r12 = r11.m()
            int r16 = r12 + (-1)
            goto Lb6
        Lb5:
            r6 = r5
        Lb6:
            r12 = r11
        Lb7:
            boolean r11 = r4.c()
            if (r11 == 0) goto Ld1
            com.tkay.expressad.exoplayer.m r11 = r1.h
            java.lang.String r11 = r11.h
            java.lang.String r5 = "audio/raw"
            boolean r5 = r5.equals(r11)
            if (r5 == 0) goto Ld1
            if (r8 != 0) goto Ld1
            if (r15 != 0) goto Ld1
            if (r6 != 0) goto Ld1
            r5 = r7
            goto Ld2
        Ld1:
            r5 = 0
        Ld2:
            java.lang.String r11 = "AtomParsers"
            r18 = 0
            if (r5 != 0) goto L20c
            long[] r5 = new long[r3]
            int[] r7 = new int[r3]
            r44 = r6
            long[] r6 = new long[r3]
            r21 = r8
            int[] r8 = new int[r3]
            r24 = r10
            r2 = r14
            r25 = r18
            r27 = r25
            r14 = r21
            r1 = 0
            r10 = 0
            r21 = 0
            r22 = 0
            r23 = 0
            r41 = r9
            r9 = r44
            r44 = r11
            r11 = r16
            r16 = r15
            r15 = r41
        L101:
            if (r1 >= r3) goto L192
        L103:
            if (r23 != 0) goto L11d
            boolean r23 = r13.a()
            com.tkay.expressad.exoplayer.k.a.b(r23)
            r29 = r14
            r30 = r15
            long r14 = r13.d
            r27 = r14
            int r14 = r13.c
            r23 = r14
            r14 = r29
            r15 = r30
            goto L103
        L11d:
            r29 = r14
            r30 = r15
            if (r0 == 0) goto L134
        L123:
            if (r21 != 0) goto L132
            if (r16 <= 0) goto L132
            int r21 = r0.m()
            int r22 = r0.i()
            int r16 = r16 + (-1)
            goto L123
        L132:
            int r21 = r21 + (-1)
        L134:
            r14 = r22
            r5[r1] = r27
            int r15 = r4.b()
            r7[r1] = r15
            r15 = r7[r1]
            if (r15 <= r10) goto L144
            r10 = r7[r1]
        L144:
            r15 = r4
            r22 = r5
            long r4 = (long) r14
            long r4 = r25 + r4
            r6[r1] = r4
            if (r12 != 0) goto L150
            r4 = 1
            goto L151
        L150:
            r4 = 0
        L151:
            r8[r1] = r4
            if (r1 != r11) goto L162
            r4 = 1
            r8[r1] = r4
            int r9 = r9 + (-1)
            if (r9 <= 0) goto L162
            int r5 = r12.m()
            int r5 = r5 - r4
            r11 = r5
        L162:
            long r4 = (long) r2
            long r25 = r25 + r4
            int r4 = r30 + (-1)
            if (r4 != 0) goto L17c
            if (r29 <= 0) goto L17c
            int r2 = r24.m()
            int r4 = r24.i()
            int r5 = r29 + (-1)
            r29 = r5
            r41 = r4
            r4 = r2
            r2 = r41
        L17c:
            r5 = r7[r1]
            r30 = r4
            long r4 = (long) r5
            long r27 = r27 + r4
            int r23 = r23 + (-1)
            int r1 = r1 + 1
            r4 = r15
            r5 = r22
            r15 = r30
            r22 = r14
            r14 = r29
            goto L101
        L192:
            r29 = r14
            r30 = r15
            r14 = r22
            r22 = r5
            long r1 = (long) r14
            long r25 = r25 + r1
            if (r21 != 0) goto L1a1
            r1 = 1
            goto L1a2
        L1a1:
            r1 = 0
        L1a2:
            com.tkay.expressad.exoplayer.k.a.a(r1)
        L1a5:
            if (r16 <= 0) goto L1b9
            int r1 = r0.m()
            if (r1 != 0) goto L1af
            r1 = 1
            goto L1b0
        L1af:
            r1 = 0
        L1b0:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            r0.i()
            int r16 = r16 + (-1)
            goto L1a5
        L1b9:
            if (r9 != 0) goto L1c9
            if (r30 != 0) goto L1c9
            r0 = r23
            if (r0 != 0) goto L1cb
            if (r29 == 0) goto L1c4
            goto L1cb
        L1c4:
            r2 = r43
            r1 = r44
            goto L206
        L1c9:
            r0 = r23
        L1cb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Inconsistent stbl box for track "
            r1.<init>(r2)
            r2 = r43
            int r4 = r2.c
            r1.append(r4)
            java.lang.String r4 = ": remainingSynchronizationSamples "
            r1.append(r4)
            r1.append(r9)
            java.lang.String r4 = ", remainingSamplesAtTimestampDelta "
            r1.append(r4)
            r9 = r30
            r1.append(r9)
            java.lang.String r4 = ", remainingSamplesInChunk "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r0 = ", remainingTimestampDeltaChanges "
            r1.append(r0)
            r0 = r29
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = r44
            android.util.Log.w(r1, r0)
        L206:
            r5 = r7
            r4 = r22
            r7 = r6
            r6 = r10
            goto L248
        L20c:
            r2 = r1
            r1 = r11
            int r0 = r13.a
            long[] r0 = new long[r0]
            int r4 = r13.a
            int[] r4 = new int[r4]
        L216:
            boolean r5 = r13.a()
            if (r5 == 0) goto L229
            int r5 = r13.b
            long r6 = r13.d
            r0[r5] = r6
            int r5 = r13.b
            int r6 = r13.c
            r4[r5] = r6
            goto L216
        L229:
            com.tkay.expressad.exoplayer.m r5 = r2.h
            int r5 = r5.w
            com.tkay.expressad.exoplayer.m r6 = r2.h
            int r6 = r6.u
            int r5 = com.tkay.expressad.exoplayer.k.af.b(r5, r6)
            long r6 = (long) r14
            com.tkay.expressad.exoplayer.e.a.d$a r0 = com.tkay.expressad.exoplayer.e.a.d.a(r5, r0, r4, r6)
            long[] r4 = r0.a
            int[] r5 = r0.b
            int r6 = r0.c
            long[] r7 = r0.d
            int[] r8 = r0.e
            long r9 = r0.f
            r25 = r9
        L248:
            r11 = 1000000(0xf4240, double:4.940656E-318)
            long r13 = r2.e
            r9 = r25
            long r9 = com.tkay.expressad.exoplayer.k.af.a(r9, r11, r13)
            long[] r0 = r2.j
            if (r0 == 0) goto L4b0
            boolean r0 = r45.a()
            if (r0 == 0) goto L25f
            goto L4b0
        L25f:
            long[] r0 = r2.j
            int r0 = r0.length
            r11 = 1
            if (r0 != r11) goto L306
            int r0 = r2.d
            if (r0 != r11) goto L306
            int r0 = r7.length
            r11 = 2
            if (r0 < r11) goto L306
            long[] r0 = r2.k
            r11 = 0
            r12 = r0[r11]
            long[] r0 = r2.j
            r27 = r0[r11]
            long r14 = r2.e
            r21 = r12
            long r11 = r2.f
            r29 = r14
            r31 = r11
            long r11 = com.tkay.expressad.exoplayer.k.af.a(r27, r29, r31)
            long r12 = r21 + r11
            int r0 = r7.length
            r11 = 1
            int r0 = r0 - r11
            r11 = 3
            r14 = 0
            int r15 = com.tkay.expressad.exoplayer.k.af.a(r11, r14, r0)
            r44 = r1
            int r1 = r7.length
            int r1 = r1 - r11
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r1, r14, r0)
            r23 = r7[r14]
            int r1 = (r23 > r21 ? 1 : (r23 == r21 ? 0 : -1))
            if (r1 > 0) goto L2af
            r14 = r7[r15]
            int r1 = (r21 > r14 ? 1 : (r21 == r14 ? 0 : -1))
            if (r1 >= 0) goto L2af
            r0 = r7[r0]
            int r0 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            if (r0 >= 0) goto L2af
            int r0 = (r12 > r25 ? 1 : (r12 == r25 ? 0 : -1))
            if (r0 > 0) goto L2af
            r0 = 1
            goto L2b0
        L2af:
            r0 = 0
        L2b0:
            if (r0 == 0) goto L308
            long r27 = r25 - r12
            r0 = 0
            r11 = r7[r0]
            long r29 = r21 - r11
            com.tkay.expressad.exoplayer.m r0 = r2.h
            int r0 = r0.v
            long r0 = (long) r0
            long r11 = r2.e
            r31 = r0
            r33 = r11
            long r0 = com.tkay.expressad.exoplayer.k.af.a(r29, r31, r33)
            com.tkay.expressad.exoplayer.m r11 = r2.h
            int r11 = r11.v
            long r11 = (long) r11
            long r13 = r2.e
            r29 = r11
            r31 = r13
            long r11 = com.tkay.expressad.exoplayer.k.af.a(r27, r29, r31)
            int r13 = (r0 > r18 ? 1 : (r0 == r18 ? 0 : -1))
            if (r13 != 0) goto L2df
            int r13 = (r11 > r18 ? 1 : (r11 == r18 ? 0 : -1))
            if (r13 == 0) goto L308
        L2df:
            r13 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r15 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r15 > 0) goto L308
            int r13 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r13 > 0) goto L308
            int r0 = (int) r0
            r1 = r45
            r1.b = r0
            int r0 = (int) r11
            r1.c = r0
            long r0 = r2.e
            com.tkay.expressad.exoplayer.k.af.a(r7, r0)
            com.tkay.expressad.exoplayer.e.a.m r11 = new com.tkay.expressad.exoplayer.e.a.m
            r0 = r11
            r1 = r43
            r2 = r4
            r3 = r5
            r4 = r6
            r5 = r7
            r6 = r8
            r7 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r11
        L306:
            r44 = r1
        L308:
            long[] r0 = r2.j
            int r0 = r0.length
            r1 = 1
            if (r0 != r1) goto L34e
            long[] r0 = r2.j
            r1 = 0
            r9 = r0[r1]
            int r0 = (r9 > r18 ? 1 : (r9 == r18 ? 0 : -1))
            if (r0 != 0) goto L34e
            long[] r0 = r2.k
            r9 = r0[r1]
            r0 = 0
        L31c:
            int r1 = r7.length
            if (r0 >= r1) goto L333
            r11 = r7[r0]
            long r13 = r11 - r9
            r15 = 1000000(0xf4240, double:4.940656E-318)
            long r11 = r2.e
            r17 = r11
            long r11 = com.tkay.expressad.exoplayer.k.af.a(r13, r15, r17)
            r7[r0] = r11
            int r0 = r0 + 1
            goto L31c
        L333:
            long r11 = r25 - r9
            r13 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r2.e
            r15 = r0
            long r9 = com.tkay.expressad.exoplayer.k.af.a(r11, r13, r15)
            com.tkay.expressad.exoplayer.e.a.m r11 = new com.tkay.expressad.exoplayer.e.a.m
            r0 = r11
            r1 = r43
            r2 = r4
            r3 = r5
            r4 = r6
            r5 = r7
            r6 = r8
            r7 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r11
        L34e:
            int r0 = r2.d
            r1 = 1
            if (r0 != r1) goto L355
            r0 = 1
            goto L356
        L355:
            r0 = 0
        L356:
            r1 = 0
            r9 = 0
            r10 = 0
            r11 = 0
        L35a:
            long[] r12 = r2.j
            int r12 = r12.length
            r13 = -1
            if (r11 >= r12) goto L39d
            long[] r12 = r2.k
            r15 = r5
            r16 = r6
            r5 = r12[r11]
            int r12 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r12 == 0) goto L394
            long[] r12 = r2.j
            r21 = r12[r11]
            long r12 = r2.e
            r45 = r15
            long r14 = r2.f
            r23 = r12
            r25 = r14
            long r12 = com.tkay.expressad.exoplayer.k.af.a(r21, r23, r25)
            r14 = 1
            int r15 = com.tkay.expressad.exoplayer.k.af.a(r7, r5, r14, r14)
            long r5 = r5 + r12
            r12 = 0
            int r5 = com.tkay.expressad.exoplayer.k.af.a(r7, r5, r0, r12)
            int r6 = r5 - r15
            int r9 = r9 + r6
            if (r10 == r15) goto L390
            r6 = 1
            goto L391
        L390:
            r6 = 0
        L391:
            r1 = r1 | r6
            r10 = r5
            goto L396
        L394:
            r45 = r15
        L396:
            int r11 = r11 + 1
            r5 = r45
            r6 = r16
            goto L35a
        L39d:
            r45 = r5
            r16 = r6
            if (r9 == r3) goto L3a5
            r3 = 1
            goto L3a6
        L3a5:
            r3 = 0
        L3a6:
            r1 = r1 | r3
            if (r1 == 0) goto L3ac
            long[] r3 = new long[r9]
            goto L3ad
        L3ac:
            r3 = r4
        L3ad:
            if (r1 == 0) goto L3b2
            int[] r5 = new int[r9]
            goto L3b4
        L3b2:
            r5 = r45
        L3b4:
            if (r1 == 0) goto L3b8
            r6 = 0
            goto L3ba
        L3b8:
            r6 = r16
        L3ba:
            if (r1 == 0) goto L3bf
            int[] r10 = new int[r9]
            goto L3c0
        L3bf:
            r10 = r8
        L3c0:
            long[] r9 = new long[r9]
            r11 = 0
            r12 = 0
        L3c4:
            long[] r15 = r2.j
            int r15 = r15.length
            if (r11 >= r15) goto L491
            long[] r15 = r2.k
            r13 = r15[r11]
            long[] r15 = r2.j
            r29 = r15[r11]
            r15 = -1
            int r21 = (r13 > r15 ? 1 : (r13 == r15 ? 0 : -1))
            if (r21 == 0) goto L471
            r27 = r8
            r28 = r9
            long r8 = r2.e
            r31 = r10
            r32 = r11
            long r10 = r2.f
            r21 = r29
            r23 = r8
            r25 = r10
            long r8 = com.tkay.expressad.exoplayer.k.af.a(r21, r23, r25)
            long r8 = r8 + r13
            r10 = 1
            int r11 = com.tkay.expressad.exoplayer.k.af.a(r7, r13, r10, r10)
            r15 = 0
            int r8 = com.tkay.expressad.exoplayer.k.af.a(r7, r8, r0, r15)
            if (r1 == 0) goto L40e
            int r9 = r8 - r11
            java.lang.System.arraycopy(r4, r11, r3, r12, r9)
            r15 = r45
            java.lang.System.arraycopy(r15, r11, r5, r12, r9)
            r10 = r27
            r27 = r4
            r4 = r31
            java.lang.System.arraycopy(r10, r11, r4, r12, r9)
            goto L416
        L40e:
            r15 = r45
            r10 = r27
            r27 = r4
            r4 = r31
        L416:
            if (r11 >= r8) goto L430
            r9 = r4[r12]
            r16 = 1
            r9 = r9 & 1
            if (r9 == 0) goto L423
            r9 = r44
            goto L434
        L423:
            java.lang.String r0 = "Ignoring edit list: edit does not start with a sync sample."
            r9 = r44
            android.util.Log.w(r9, r0)
            com.tkay.expressad.exoplayer.e.a.b$g r0 = new com.tkay.expressad.exoplayer.e.a.b$g
            r0.<init>()
            throw r0
        L430:
            r9 = r44
            r16 = 1
        L434:
            if (r11 >= r8) goto L46e
            r23 = 1000000(0xf4240, double:4.940656E-318)
            r44 = r8
            r20 = r9
            long r8 = r2.f
            r21 = r18
            r25 = r8
            long r8 = com.tkay.expressad.exoplayer.k.af.a(r21, r23, r25)
            r21 = r7[r11]
            long r35 = r21 - r13
            r37 = 1000000(0xf4240, double:4.940656E-318)
            r21 = r13
            long r13 = r2.e
            r39 = r13
            long r13 = com.tkay.expressad.exoplayer.k.af.a(r35, r37, r39)
            long r8 = r8 + r13
            r28[r12] = r8
            if (r1 == 0) goto L463
            r8 = r5[r12]
            if (r8 <= r6) goto L463
            r6 = r15[r11]
        L463:
            int r12 = r12 + 1
            int r11 = r11 + 1
            r8 = r44
            r9 = r20
            r13 = r21
            goto L434
        L46e:
            r20 = r9
            goto L47f
        L471:
            r20 = r44
            r15 = r45
            r27 = r4
            r28 = r9
            r4 = r10
            r32 = r11
            r16 = 1
            r10 = r8
        L47f:
            long r18 = r18 + r29
            int r11 = r32 + 1
            r8 = r10
            r45 = r15
            r44 = r20
            r9 = r28
            r13 = -1
            r10 = r4
            r4 = r27
            goto L3c4
        L491:
            r28 = r9
            r4 = r10
            r23 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r2.e
            r21 = r18
            r25 = r0
            long r7 = com.tkay.expressad.exoplayer.k.af.a(r21, r23, r25)
            com.tkay.expressad.exoplayer.e.a.m r9 = new com.tkay.expressad.exoplayer.e.a.m
            r0 = r9
            r1 = r43
            r2 = r3
            r3 = r5
            r4 = r6
            r5 = r28
            r6 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r9
        L4b0:
            r27 = r4
            r15 = r5
            r16 = r6
            r41 = r9
            r10 = r8
            r8 = r41
            long r0 = r2.e
            com.tkay.expressad.exoplayer.k.af.a(r7, r0)
            com.tkay.expressad.exoplayer.e.a.m r11 = new com.tkay.expressad.exoplayer.e.a.m
            r0 = r11
            r1 = r43
            r2 = r27
            r3 = r15
            r4 = r16
            r5 = r7
            r6 = r10
            r7 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r11
        L4d0:
            com.tkay.expressad.exoplayer.t r0 = new com.tkay.expressad.exoplayer.t
            java.lang.String r1 = "Track has no sample table size information"
            r0.<init>(r1)
            throw r0
    }

    public static com.tkay.expressad.exoplayer.g.a a(com.tkay.expressad.exoplayer.e.a.a.b r6, boolean r7) {
            r0 = 0
            if (r7 == 0) goto L4
            return r0
        L4:
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            r7 = 8
            r6.c(r7)
        Lb:
            int r1 = r6.a()
            if (r1 < r7) goto L75
            int r1 = r6.c()
            int r2 = r6.i()
            int r3 = r6.i()
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aG
            if (r3 != r4) goto L6f
            r6.c(r1)
            int r1 = r1 + r2
            r2 = 12
            r6.d(r2)
        L2a:
            int r2 = r6.c()
            if (r2 >= r1) goto L6e
            int r2 = r6.c()
            int r3 = r6.i()
            int r4 = r6.i()
            int r5 = com.tkay.expressad.exoplayer.e.a.a.aH
            if (r4 != r5) goto L68
            r6.c(r2)
            int r2 = r2 + r3
            r6.d(r7)
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
        L4c:
            int r1 = r6.c()
            if (r1 >= r2) goto L5c
            com.tkay.expressad.exoplayer.g.a$a r1 = com.tkay.expressad.exoplayer.e.a.f.a(r6)
            if (r1 == 0) goto L4c
            r7.add(r1)
            goto L4c
        L5c:
            boolean r6 = r7.isEmpty()
            if (r6 != 0) goto L6e
            com.tkay.expressad.exoplayer.g.a r6 = new com.tkay.expressad.exoplayer.g.a
            r6.<init>(r7)
            return r6
        L68:
            int r3 = r3 + (-8)
            r6.d(r3)
            goto L2a
        L6e:
            return r0
        L6f:
            int r2 = r2 + (-8)
            r6.d(r2)
            goto Lb
        L75:
            return r0
    }

    private static com.tkay.expressad.exoplayer.g.a a(com.tkay.expressad.exoplayer.k.s r5, int r6) {
            r0 = 12
            r5.d(r0)
        L5:
            int r0 = r5.c()
            r1 = 0
            if (r0 >= r6) goto L4d
            int r0 = r5.c()
            int r2 = r5.i()
            int r3 = r5.i()
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aH
            if (r3 != r4) goto L47
            r5.c(r0)
            int r0 = r0 + r2
            r6 = 8
            r5.d(r6)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
        L2a:
            int r2 = r5.c()
            if (r2 >= r0) goto L3a
            com.tkay.expressad.exoplayer.g.a$a r2 = com.tkay.expressad.exoplayer.e.a.f.a(r5)
            if (r2 == 0) goto L2a
            r6.add(r2)
            goto L2a
        L3a:
            boolean r5 = r6.isEmpty()
            if (r5 == 0) goto L41
            return r1
        L41:
            com.tkay.expressad.exoplayer.g.a r5 = new com.tkay.expressad.exoplayer.g.a
            r5.<init>(r6)
            return r5
        L47:
            int r2 = r2 + (-8)
            r5.d(r2)
            goto L5
        L4d:
            return r1
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r21, int r22, int r23, int r24, int r25, int r26, com.tkay.expressad.exoplayer.d.e r27, com.tkay.expressad.exoplayer.e.a.b.c r28, int r29) {
            r0 = r21
            r1 = r23
            r2 = r24
            r3 = r27
            r4 = r28
            int r5 = r1 + 8
            int r5 = r5 + 8
            r0.c(r5)
            r5 = 16
            r0.d(r5)
            int r11 = r21.e()
            int r12 = r21.e()
            r5 = 50
            r0.d(r5)
            int r5 = r21.c()
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ae
            r8 = r22
            if (r8 != r6) goto L54
            android.util.Pair r6 = b(r0, r1, r2)
            if (r6 == 0) goto L51
            java.lang.Object r8 = r6.first
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            if (r3 != 0) goto L3f
            r3 = 0
            goto L49
        L3f:
            java.lang.Object r9 = r6.second
            com.tkay.expressad.exoplayer.e.a.k r9 = (com.tkay.expressad.exoplayer.e.a.k) r9
            java.lang.String r9 = r9.b
            com.tkay.expressad.exoplayer.d.e r3 = r3.a(r9)
        L49:
            com.tkay.expressad.exoplayer.e.a.k[] r9 = r4.b
            java.lang.Object r6 = r6.second
            com.tkay.expressad.exoplayer.e.a.k r6 = (com.tkay.expressad.exoplayer.e.a.k) r6
            r9[r29] = r6
        L51:
            r0.c(r5)
        L54:
            r20 = r3
            r3 = -1
            r9 = 1065353216(0x3f800000, float:1.0)
            r18 = r3
            r16 = r9
            r3 = 0
            r9 = 0
            r14 = 0
            r17 = 0
        L62:
            int r10 = r5 - r1
            if (r10 >= r2) goto L181
            r0.c(r5)
            int r10 = r21.c()
            int r13 = r21.i()
            if (r13 != 0) goto L7a
            int r15 = r21.c()
            int r15 = r15 - r1
            if (r15 == r2) goto L181
        L7a:
            if (r13 <= 0) goto L7e
            r6 = 1
            goto L7f
        L7e:
            r6 = 0
        L7f:
            java.lang.String r7 = "childAtomSize should be positive"
            com.tkay.expressad.exoplayer.k.a.a(r6, r7)
            int r6 = r21.i()
            int r7 = com.tkay.expressad.exoplayer.e.a.a.M
            r15 = 3
            if (r6 != r7) goto Lae
            if (r3 != 0) goto L91
            r15 = 1
            goto L92
        L91:
            r15 = 0
        L92:
            com.tkay.expressad.exoplayer.k.a.b(r15)
            int r10 = r10 + 8
            r0.c(r10)
            com.tkay.expressad.exoplayer.l.a r3 = com.tkay.expressad.exoplayer.l.a.a(r21)
            java.util.List<byte[]> r14 = r3.a
            int r6 = r3.b
            r4.d = r6
            if (r9 != 0) goto Laa
            float r3 = r3.e
            r16 = r3
        Laa:
            java.lang.String r3 = "video/avc"
            goto L17c
        Lae:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.N
            if (r6 != r7) goto Lcd
            if (r3 != 0) goto Lb6
            r15 = 1
            goto Lb7
        Lb6:
            r15 = 0
        Lb7:
            com.tkay.expressad.exoplayer.k.a.b(r15)
            int r10 = r10 + 8
            r0.c(r10)
            com.tkay.expressad.exoplayer.l.d r3 = com.tkay.expressad.exoplayer.l.d.a(r21)
            java.util.List<byte[]> r14 = r3.a
            int r3 = r3.b
            r4.d = r3
            java.lang.String r3 = "video/hevc"
            goto L17c
        Lcd:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.aR
            if (r6 != r7) goto Le5
            if (r3 != 0) goto Ld5
            r15 = 1
            goto Ld6
        Ld5:
            r15 = 0
        Ld6:
            com.tkay.expressad.exoplayer.k.a.b(r15)
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aP
            if (r8 != r3) goto Le1
            java.lang.String r3 = "video/x-vnd.on2.vp8"
            goto L17c
        Le1:
            java.lang.String r3 = "video/x-vnd.on2.vp9"
            goto L17c
        Le5:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.l
            if (r6 != r7) goto Lf5
            if (r3 != 0) goto Led
            r15 = 1
            goto Lee
        Led:
            r15 = 0
        Lee:
            com.tkay.expressad.exoplayer.k.a.b(r15)
            java.lang.String r3 = "video/3gpp"
            goto L17c
        Lf5:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r6 != r7) goto L114
            if (r3 != 0) goto Lfd
            r15 = 1
            goto Lfe
        Lfd:
            r15 = 0
        Lfe:
            com.tkay.expressad.exoplayer.k.a.b(r15)
            android.util.Pair r3 = d(r0, r10)
            java.lang.Object r6 = r3.first
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r3 = r3.second
            byte[] r3 = (byte[]) r3
            java.util.List r14 = java.util.Collections.singletonList(r3)
            r3 = r6
            goto L17c
        L114:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.an
            if (r6 != r7) goto L12b
            int r10 = r10 + 8
            r0.c(r10)
            int r6 = r21.m()
            int r7 = r21.m()
            float r6 = (float) r6
            float r7 = (float) r7
            float r16 = r6 / r7
            r9 = 1
            goto L17c
        L12b:
            int r7 = com.tkay.expressad.exoplayer.e.a.a.aN
            if (r6 != r7) goto L155
            int r6 = r10 + 8
        L131:
            int r7 = r6 - r10
            if (r7 >= r13) goto L152
            r0.c(r6)
            int r7 = r21.i()
            int r15 = r21.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.aO
            if (r15 != r1) goto L14e
            byte[] r1 = r0.a
            int r7 = r7 + r6
            byte[] r1 = java.util.Arrays.copyOfRange(r1, r6, r7)
            r17 = r1
            goto L17c
        L14e:
            int r6 = r6 + r7
            r1 = r23
            goto L131
        L152:
            r17 = 0
            goto L17c
        L155:
            int r1 = com.tkay.expressad.exoplayer.e.a.a.aM
            if (r6 != r1) goto L17c
            int r1 = r21.d()
            r0.d(r15)
            if (r1 != 0) goto L17c
            int r1 = r21.d()
            if (r1 == 0) goto L17a
            r6 = 1
            if (r1 == r6) goto L177
            r7 = 2
            if (r1 == r7) goto L174
            if (r1 == r15) goto L171
            goto L17c
        L171:
            r18 = r15
            goto L17c
        L174:
            r18 = r7
            goto L17c
        L177:
            r18 = r6
            goto L17c
        L17a:
            r18 = 0
        L17c:
            int r5 = r5 + r13
            r1 = r23
            goto L62
        L181:
            if (r3 != 0) goto L184
            return
        L184:
            java.lang.String r6 = java.lang.Integer.toString(r25)
            r8 = 0
            r9 = -1
            r10 = -1
            r13 = -1082130432(0xffffffffbf800000, float:-1.0)
            r19 = 0
            r7 = r3
            r15 = r26
            com.tkay.expressad.exoplayer.m r0 = com.tkay.expressad.exoplayer.m.a(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
            r4.c = r0
            return
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r19, int r20, int r21, int r22, int r23, java.lang.String r24, com.tkay.expressad.exoplayer.e.a.b.c r25) {
            r0 = r19
            r1 = r20
            r2 = r25
            int r3 = r21 + 8
            int r3 = r3 + 8
            r0.c(r3)
            int r3 = com.tkay.expressad.exoplayer.e.a.a.ao
            java.lang.String r4 = "application/ttml+xml"
            r5 = 0
            r6 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r1 != r3) goto L1f
        L19:
            r9 = r4
            r18 = r5
            r16 = r6
            goto L4c
        L1f:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.az
            if (r1 != r3) goto L34
            int r1 = r22 + (-8)
            int r1 = r1 + (-8)
            byte[] r3 = new byte[r1]
            r4 = 0
            r0.a(r3, r4, r1)
            java.util.List r5 = java.util.Collections.singletonList(r3)
            java.lang.String r4 = "application/x-quicktime-tx3g"
            goto L19
        L34:
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aA
            if (r1 != r0) goto L3b
            java.lang.String r4 = "application/x-mp4-vtt"
            goto L19
        L3b:
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aB
            if (r1 != r0) goto L42
            r6 = 0
            goto L19
        L42:
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aC
            if (r1 != r0) goto L5e
            r0 = 1
            r2.e = r0
            java.lang.String r4 = "application/x-mp4-cea-608"
            goto L19
        L4c:
            java.lang.String r8 = java.lang.Integer.toString(r23)
            r10 = 0
            r11 = -1
            r12 = 0
            r14 = -1
            r15 = 0
            r13 = r24
            com.tkay.expressad.exoplayer.m r0 = com.tkay.expressad.exoplayer.m.a(r8, r9, r10, r11, r12, r13, r14, r15, r16, r18)
            r2.c = r0
            return
        L5e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r24, int r25, int r26, int r27, int r28, java.lang.String r29, boolean r30, com.tkay.expressad.exoplayer.d.e r31, com.tkay.expressad.exoplayer.e.a.b.c r32, int r33) {
            r0 = r24
            r1 = r26
            r2 = r27
            r12 = r29
            r3 = r31
            r13 = r32
            int r4 = r1 + 8
            r5 = 8
            int r4 = r4 + r5
            r0.c(r4)
            r4 = 6
            if (r30 == 0) goto L1f
            int r5 = r24.e()
            r0.d(r4)
            goto L23
        L1f:
            r0.d(r5)
            r5 = 0
        L23:
            r15 = 2
            r6 = 16
            r11 = 1
            if (r5 == 0) goto L49
            if (r5 != r11) goto L2c
            goto L49
        L2c:
            if (r5 != r15) goto L48
            r0.d(r6)
            long r4 = r24.j()
            double r4 = java.lang.Double.longBitsToDouble(r4)
            long r4 = java.lang.Math.round(r4)
            int r4 = (int) r4
            int r5 = r24.m()
            r6 = 20
            r0.d(r6)
            goto L5a
        L48:
            return
        L49:
            int r7 = r24.e()
            r0.d(r4)
            int r4 = r24.k()
            if (r5 != r11) goto L59
            r0.d(r6)
        L59:
            r5 = r7
        L5a:
            int r6 = r24.c()
            int r7 = com.tkay.expressad.exoplayer.e.a.a.af
            r16 = 0
            r8 = r25
            if (r8 != r7) goto L8e
            android.util.Pair r7 = b(r0, r1, r2)
            if (r7 == 0) goto L8b
            java.lang.Object r8 = r7.first
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            if (r3 != 0) goto L79
            r3 = r16
            goto L83
        L79:
            java.lang.Object r9 = r7.second
            com.tkay.expressad.exoplayer.e.a.k r9 = (com.tkay.expressad.exoplayer.e.a.k) r9
            java.lang.String r9 = r9.b
            com.tkay.expressad.exoplayer.d.e r3 = r3.a(r9)
        L83:
            com.tkay.expressad.exoplayer.e.a.k[] r9 = r13.b
            java.lang.Object r7 = r7.second
            com.tkay.expressad.exoplayer.e.a.k r7 = (com.tkay.expressad.exoplayer.e.a.k) r7
            r9[r33] = r7
        L8b:
            r0.c(r6)
        L8e:
            r10 = r3
            int r3 = com.tkay.expressad.exoplayer.e.a.a.s
            java.lang.String r9 = "audio/raw"
            if (r8 != r3) goto L98
            java.lang.String r3 = "audio/ac3"
            goto Le2
        L98:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.u
            if (r8 != r3) goto L9f
            java.lang.String r3 = "audio/eac3"
            goto Le2
        L9f:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.w
            if (r8 != r3) goto La6
            java.lang.String r3 = "audio/vnd.dts"
            goto Le2
        La6:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.x
            if (r8 == r3) goto Le0
            int r3 = com.tkay.expressad.exoplayer.e.a.a.y
            if (r8 != r3) goto Laf
            goto Le0
        Laf:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.z
            if (r8 != r3) goto Lb6
            java.lang.String r3 = "audio/vnd.dts.hd;profile=lbr"
            goto Le2
        Lb6:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aD
            if (r8 != r3) goto Lbd
            java.lang.String r3 = "audio/3gpp"
            goto Le2
        Lbd:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aE
            if (r8 != r3) goto Lc4
            java.lang.String r3 = "audio/amr-wb"
            goto Le2
        Lc4:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.q
            if (r8 == r3) goto Lde
            int r3 = com.tkay.expressad.exoplayer.e.a.a.r
            if (r8 != r3) goto Lcd
            goto Lde
        Lcd:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.o
            if (r8 != r3) goto Ld4
            java.lang.String r3 = "audio/mpeg"
            goto Le2
        Ld4:
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aT
            if (r8 != r3) goto Ldb
            java.lang.String r3 = "audio/alac"
            goto Le2
        Ldb:
            r3 = r16
            goto Le2
        Lde:
            r3 = r9
            goto Le2
        Le0:
            java.lang.String r3 = "audio/vnd.dts.hd"
        Le2:
            r8 = r3
            r18 = r4
            r17 = r5
            r7 = r6
            r19 = r16
        Lea:
            int r3 = r7 - r1
            r4 = -1
            if (r3 >= r2) goto L200
            r0.c(r7)
            int r6 = r24.i()
            if (r6 <= 0) goto Lfa
            r3 = r11
            goto Lfb
        Lfa:
            r3 = 0
        Lfb:
            java.lang.String r5 = "childAtomSize should be positive"
            com.tkay.expressad.exoplayer.k.a.a(r3, r5)
            int r3 = r24.i()
            int r11 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r3 == r11) goto L18a
            if (r30 == 0) goto L110
            int r11 = com.tkay.expressad.exoplayer.e.a.a.p
            if (r3 != r11) goto L110
            goto L18a
        L110:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.t
            if (r3 != r4) goto L12f
            int r3 = r7 + 8
            r0.c(r3)
            java.lang.String r3 = java.lang.Integer.toString(r28)
            com.tkay.expressad.exoplayer.m r3 = com.tkay.expressad.exoplayer.b.a.a(r0, r3, r12, r10)
            r13.c = r3
        L123:
            r15 = r6
            r14 = r7
            r22 = r8
            r23 = r9
            r21 = r10
            r6 = 0
            r20 = 1
            goto L186
        L12f:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.v
            if (r3 != r4) goto L143
            int r3 = r7 + 8
            r0.c(r3)
            java.lang.String r3 = java.lang.Integer.toString(r28)
            com.tkay.expressad.exoplayer.m r3 = com.tkay.expressad.exoplayer.b.a.b(r0, r3, r12, r10)
            r13.c = r3
            goto L123
        L143:
            int r4 = com.tkay.expressad.exoplayer.e.a.a.A
            if (r3 != r4) goto L16b
            java.lang.String r3 = java.lang.Integer.toString(r28)
            r5 = 0
            r11 = -1
            r21 = 0
            r4 = r8
            r15 = r6
            r6 = r11
            r11 = r7
            r7 = r17
            r22 = r8
            r8 = r18
            r23 = r9
            r9 = r21
            r21 = r10
            r14 = r11
            r20 = 1
            r11 = r29
            com.tkay.expressad.exoplayer.m r3 = com.tkay.expressad.exoplayer.m.a(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r13.c = r3
            goto L185
        L16b:
            r15 = r6
            r14 = r7
            r22 = r8
            r23 = r9
            r21 = r10
            r20 = 1
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aT
            if (r3 != r4) goto L185
            byte[] r3 = new byte[r15]
            r0.c(r14)
            r6 = 0
            r0.a(r3, r6, r15)
            r19 = r3
            goto L186
        L185:
            r6 = 0
        L186:
            r8 = r22
            goto L1f5
        L18a:
            r15 = r6
            r14 = r7
            r22 = r8
            r23 = r9
            r21 = r10
            r6 = 0
            r20 = 1
            int r7 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r3 != r7) goto L19b
            r7 = r14
            goto L1c0
        L19b:
            int r3 = r24.c()
            r7 = r3
        L1a0:
            int r3 = r7 - r14
            if (r3 >= r15) goto L1bf
            r0.c(r7)
            int r3 = r24.i()
            if (r3 <= 0) goto L1b0
            r11 = r20
            goto L1b1
        L1b0:
            r11 = r6
        L1b1:
            com.tkay.expressad.exoplayer.k.a.a(r11, r5)
            int r8 = r24.i()
            int r9 = com.tkay.expressad.exoplayer.e.a.a.O
            if (r8 != r9) goto L1bd
            goto L1c0
        L1bd:
            int r7 = r7 + r3
            goto L1a0
        L1bf:
            r7 = r4
        L1c0:
            if (r7 == r4) goto L186
            android.util.Pair r3 = d(r0, r7)
            java.lang.Object r4 = r3.first
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r3 = r3.second
            byte[] r3 = (byte[]) r3
            java.lang.String r5 = "audio/mp4a-latm"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L1f2
            android.util.Pair r5 = com.tkay.expressad.exoplayer.k.d.a(r3)
            java.lang.Object r7 = r5.first
            java.lang.Integer r7 = (java.lang.Integer) r7
            int r7 = r7.intValue()
            java.lang.Object r5 = r5.second
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r19 = r3
            r8 = r4
            r17 = r5
            r18 = r7
            goto L1f5
        L1f2:
            r19 = r3
            r8 = r4
        L1f5:
            int r7 = r14 + r15
            r11 = r20
            r10 = r21
            r9 = r23
            r15 = 2
            goto Lea
        L200:
            r22 = r8
            r23 = r9
            r21 = r10
            com.tkay.expressad.exoplayer.m r0 = r13.c
            if (r0 != 0) goto L238
            r8 = r22
            if (r8 == 0) goto L238
            r0 = r23
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L218
            r6 = 2
            goto L219
        L218:
            r6 = r4
        L219:
            java.lang.String r0 = java.lang.Integer.toString(r28)
            r2 = 0
            r3 = -1
            if (r19 != 0) goto L224
            r7 = r16
            goto L229
        L224:
            java.util.List r1 = java.util.Collections.singletonList(r19)
            r7 = r1
        L229:
            r1 = r8
            r4 = r17
            r5 = r18
            r8 = r21
            r9 = r29
            com.tkay.expressad.exoplayer.m r0 = com.tkay.expressad.exoplayer.m.a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r13.c = r0
        L238:
            return
    }

    private static boolean a(long[] r7, long r8, long r10, long r12) {
            int r0 = r7.length
            r1 = 1
            int r0 = r0 - r1
            r2 = 3
            r3 = 0
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r2, r3, r0)
            int r5 = r7.length
            int r5 = r5 - r2
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r5, r3, r0)
            r5 = r7[r3]
            int r2 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r2 > 0) goto L26
            r4 = r7[r4]
            int r10 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r10 >= 0) goto L26
            r10 = r7[r0]
            int r7 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r7 >= 0) goto L26
            int r7 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r7 > 0) goto L26
            return r1
        L26:
            return r3
    }

    private static android.util.Pair<java.lang.Integer, com.tkay.expressad.exoplayer.e.a.k> b(com.tkay.expressad.exoplayer.k.s r4, int r5, int r6) {
            int r0 = r4.c()
        L4:
            int r1 = r0 - r5
            if (r1 >= r6) goto L2a
            r4.c(r0)
            int r1 = r4.i()
            if (r1 <= 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            java.lang.String r3 = "childAtomSize should be positive"
            com.tkay.expressad.exoplayer.k.a.a(r2, r3)
            int r2 = r4.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aa
            if (r2 != r3) goto L28
            android.util.Pair r2 = c(r4, r0, r1)
            if (r2 == 0) goto L28
            return r2
        L28:
            int r0 = r0 + r1
            goto L4
        L2a:
            r4 = 0
            return r4
    }

    private static com.tkay.expressad.exoplayer.e.a.b.f b(com.tkay.expressad.exoplayer.k.s r11) {
            r0 = 8
            r11.c(r0)
            int r1 = r11.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            r2 = 16
            if (r1 != 0) goto L13
            r3 = r0
            goto L14
        L13:
            r3 = r2
        L14:
            r11.d(r3)
            int r3 = r11.i()
            r4 = 4
            r11.d(r4)
            int r5 = r11.c()
            if (r1 != 0) goto L26
            r0 = r4
        L26:
            r6 = 0
            r7 = r6
        L28:
            if (r7 >= r0) goto L38
            byte[] r8 = r11.a
            int r9 = r5 + r7
            r8 = r8[r9]
            r9 = -1
            if (r8 == r9) goto L35
            r5 = r6
            goto L39
        L35:
            int r7 = r7 + 1
            goto L28
        L38:
            r5 = 1
        L39:
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r5 == 0) goto L44
            r11.d(r0)
            goto L57
        L44:
            if (r1 != 0) goto L4b
            long r0 = r11.h()
            goto L4f
        L4b:
            long r0 = r11.n()
        L4f:
            r9 = 0
            int r5 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r5 != 0) goto L56
            goto L57
        L56:
            r7 = r0
        L57:
            r11.d(r2)
            int r0 = r11.i()
            int r1 = r11.i()
            r11.d(r4)
            int r2 = r11.i()
            int r11 = r11.i()
            r4 = 65536(0x10000, float:9.1835E-41)
            r5 = -65536(0xffffffffffff0000, float:NaN)
            if (r0 != 0) goto L7c
            if (r1 != r4) goto L7c
            if (r2 != r5) goto L7c
            if (r11 != 0) goto L7c
            r6 = 90
            goto L91
        L7c:
            if (r0 != 0) goto L87
            if (r1 != r5) goto L87
            if (r2 != r4) goto L87
            if (r11 != 0) goto L87
            r6 = 270(0x10e, float:3.78E-43)
            goto L91
        L87:
            if (r0 != r5) goto L91
            if (r1 != 0) goto L91
            if (r2 != 0) goto L91
            if (r11 != r5) goto L91
            r6 = 180(0xb4, float:2.52E-43)
        L91:
            com.tkay.expressad.exoplayer.e.a.b$f r11 = new com.tkay.expressad.exoplayer.e.a.b$f
            r11.<init>(r3, r7, r6)
            return r11
    }

    private static com.tkay.expressad.exoplayer.g.a b(com.tkay.expressad.exoplayer.k.s r2, int r3) {
            r0 = 8
            r2.d(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        La:
            int r1 = r2.c()
            if (r1 >= r3) goto L1a
            com.tkay.expressad.exoplayer.g.a$a r1 = com.tkay.expressad.exoplayer.e.a.f.a(r2)
            if (r1 == 0) goto La
            r0.add(r1)
            goto La
        L1a:
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L22
            r2 = 0
            return r2
        L22:
            com.tkay.expressad.exoplayer.g.a r2 = new com.tkay.expressad.exoplayer.g.a
            r2.<init>(r0)
            return r2
    }

    private static float c(com.tkay.expressad.exoplayer.k.s r0, int r1) {
            int r1 = r1 + 8
            r0.c(r1)
            int r1 = r0.m()
            int r0 = r0.m()
            float r1 = (float) r1
            float r0 = (float) r0
            float r1 = r1 / r0
            return r1
    }

    private static int c(com.tkay.expressad.exoplayer.k.s r1) {
            r0 = 16
            r1.c(r0)
            int r1 = r1.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.b.c
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            int r0 = com.tkay.expressad.exoplayer.e.a.b.b
            if (r1 != r0) goto L15
            r1 = 2
            return r1
        L15:
            int r0 = com.tkay.expressad.exoplayer.e.a.b.d
            if (r1 == r0) goto L2e
            int r0 = com.tkay.expressad.exoplayer.e.a.b.e
            if (r1 == r0) goto L2e
            int r0 = com.tkay.expressad.exoplayer.e.a.b.f
            if (r1 == r0) goto L2e
            int r0 = com.tkay.expressad.exoplayer.e.a.b.g
            if (r1 != r0) goto L26
            goto L2e
        L26:
            int r0 = com.tkay.expressad.exoplayer.e.a.b.h
            if (r1 != r0) goto L2c
            r1 = 4
            return r1
        L2c:
            r1 = -1
            return r1
        L2e:
            r1 = 3
            return r1
    }

    private static android.util.Pair<java.lang.Integer, com.tkay.expressad.exoplayer.e.a.k> c(com.tkay.expressad.exoplayer.k.s r11, int r12, int r13) {
            int r0 = r12 + 8
            r1 = -1
            r2 = 0
            r3 = 0
            r5 = r1
            r4 = r2
            r6 = r4
            r7 = r3
        L9:
            int r8 = r0 - r12
            if (r8 >= r13) goto L3a
            r11.c(r0)
            int r8 = r11.i()
            int r9 = r11.i()
            int r10 = com.tkay.expressad.exoplayer.e.a.a.ag
            if (r9 != r10) goto L25
            int r6 = r11.i()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            goto L38
        L25:
            int r10 = com.tkay.expressad.exoplayer.e.a.a.ab
            if (r9 != r10) goto L32
            r4 = 4
            r11.d(r4)
            java.lang.String r4 = r11.o()
            goto L38
        L32:
            int r10 = com.tkay.expressad.exoplayer.e.a.a.ac
            if (r9 != r10) goto L38
            r5 = r0
            r7 = r8
        L38:
            int r0 = r0 + r8
            goto L9
        L3a:
            java.lang.String r12 = "cenc"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cbc1"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cens"
            boolean r12 = r12.equals(r4)
            if (r12 != 0) goto L5c
            java.lang.String r12 = "cbcs"
            boolean r12 = r12.equals(r4)
            if (r12 == 0) goto L5b
            goto L5c
        L5b:
            return r2
        L5c:
            r12 = 1
            if (r6 == 0) goto L61
            r13 = r12
            goto L62
        L61:
            r13 = r3
        L62:
            java.lang.String r0 = "frma atom is mandatory"
            com.tkay.expressad.exoplayer.k.a.a(r13, r0)
            if (r5 == r1) goto L6b
            r13 = r12
            goto L6c
        L6b:
            r13 = r3
        L6c:
            java.lang.String r0 = "schi atom is mandatory"
            com.tkay.expressad.exoplayer.k.a.a(r13, r0)
            com.tkay.expressad.exoplayer.e.a.k r11 = a(r11, r5, r7, r4)
            if (r11 == 0) goto L78
            r3 = r12
        L78:
            java.lang.String r12 = "tenc atom is mandatory"
            com.tkay.expressad.exoplayer.k.a.a(r3, r12)
            android.util.Pair r11 = android.util.Pair.create(r6, r11)
            return r11
    }

    private static android.util.Pair<java.lang.Long, java.lang.String> d(com.tkay.expressad.exoplayer.k.s r4) {
            r0 = 8
            r4.c(r0)
            int r1 = r4.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            if (r1 != 0) goto L11
            r2 = r0
            goto L13
        L11:
            r2 = 16
        L13:
            r4.d(r2)
            long r2 = r4.h()
            if (r1 != 0) goto L1d
            r0 = 4
        L1d:
            r4.d(r0)
            int r4 = r4.e()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4 >> 10
            r1 = r1 & 31
            int r1 = r1 + 96
            char r1 = (char) r1
            r0.append(r1)
            int r1 = r4 >> 5
            r1 = r1 & 31
            int r1 = r1 + 96
            char r1 = (char) r1
            r0.append(r1)
            r4 = r4 & 31
            int r4 = r4 + 96
            char r4 = (char) r4
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            android.util.Pair r4 = android.util.Pair.create(r0, r4)
            return r4
    }

    private static android.util.Pair<java.lang.String, byte[]> d(com.tkay.expressad.exoplayer.k.s r3, int r4) {
            int r4 = r4 + 8
            int r4 = r4 + 4
            r3.c(r4)
            r4 = 1
            r3.d(r4)
            e(r3)
            r0 = 2
            r3.d(r0)
            int r1 = r3.d()
            r2 = r1 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto L1d
            r3.d(r0)
        L1d:
            r2 = r1 & 64
            if (r2 == 0) goto L28
            int r2 = r3.e()
            r3.d(r2)
        L28:
            r1 = r1 & 32
            if (r1 == 0) goto L2f
            r3.d(r0)
        L2f:
            r3.d(r4)
            e(r3)
            int r0 = r3.d()
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.o.a(r0)
            java.lang.String r1 = "audio/mpeg"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L6d
            java.lang.String r1 = "audio/vnd.dts"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L6d
            java.lang.String r1 = "audio/vnd.dts.hd"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L56
            goto L6d
        L56:
            r1 = 12
            r3.d(r1)
            r3.d(r4)
            int r4 = e(r3)
            byte[] r1 = new byte[r4]
            r2 = 0
            r3.a(r1, r2, r4)
            android.util.Pair r3 = android.util.Pair.create(r0, r1)
            return r3
        L6d:
            r3 = 0
            android.util.Pair r3 = android.util.Pair.create(r0, r3)
            return r3
    }

    private static byte[] d(com.tkay.expressad.exoplayer.k.s r4, int r5, int r6) {
            int r0 = r5 + 8
        L2:
            int r1 = r0 - r5
            if (r1 >= r6) goto L1f
            r4.c(r0)
            int r1 = r4.i()
            int r2 = r4.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aO
            if (r2 != r3) goto L1d
            byte[] r4 = r4.a
            int r1 = r1 + r0
            byte[] r4 = java.util.Arrays.copyOfRange(r4, r0, r1)
            return r4
        L1d:
            int r0 = r0 + r1
            goto L2
        L1f:
            r4 = 0
            return r4
    }

    private static int e(com.tkay.expressad.exoplayer.k.s r3) {
            int r0 = r3.d()
            r1 = r0 & 127(0x7f, float:1.78E-43)
        L6:
            r2 = 128(0x80, float:1.8E-43)
            r0 = r0 & r2
            if (r0 != r2) goto L15
            int r0 = r3.d()
            int r1 = r1 << 7
            r2 = r0 & 127(0x7f, float:1.78E-43)
            r1 = r1 | r2
            goto L6
        L15:
            return r1
    }
}
