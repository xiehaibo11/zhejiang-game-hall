package com.tkay.expressad.exoplayer;

final class j implements com.tkay.expressad.exoplayer.h {
    private static final java.lang.String w = "ExoPlayerImpl";
    private final android.os.Handler A;
    private final com.tkay.expressad.exoplayer.k B;
    private final android.os.Handler C;
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w.c> D;
    private final com.tkay.expressad.exoplayer.ae.b E;
    private final com.tkay.expressad.exoplayer.ae.a F;
    private final java.util.ArrayDeque<com.tkay.expressad.exoplayer.j.a> G;
    private boolean H;
    private int I;
    private boolean J;
    private int K;
    private boolean L;
    private boolean M;
    private com.tkay.expressad.exoplayer.v N;
    private com.tkay.expressad.exoplayer.g O;
    private com.tkay.expressad.exoplayer.u P;
    private int Q;
    private int R;
    private long S;
    private final com.tkay.expressad.exoplayer.y[] x;
    private final com.tkay.expressad.exoplayer.i.h y;
    private final com.tkay.expressad.exoplayer.i.i z;


    private static final class a {
        private final com.tkay.expressad.exoplayer.u a;
        private final java.util.Set<com.tkay.expressad.exoplayer.w.c> b;
        private final com.tkay.expressad.exoplayer.i.h c;
        private final boolean d;
        private final int e;
        private final int f;
        private final boolean g;
        private final boolean h;
        private final boolean i;
        private final boolean j;
        private final boolean k;
        private final boolean l;

        public a(com.tkay.expressad.exoplayer.u r1, com.tkay.expressad.exoplayer.u r2, java.util.Set<com.tkay.expressad.exoplayer.w.c> r3, com.tkay.expressad.exoplayer.i.h r4, boolean r5, int r6, int r7, boolean r8, boolean r9, boolean r10) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.g = r8
                r0.h = r9
                r3 = 0
                r4 = 1
                if (r10 != 0) goto L20
                int r5 = r2.f
                int r6 = r1.f
                if (r5 == r6) goto L1e
                goto L20
            L1e:
                r5 = r3
                goto L21
            L20:
                r5 = r4
            L21:
                r0.i = r5
                com.tkay.expressad.exoplayer.ae r5 = r2.a
                com.tkay.expressad.exoplayer.ae r6 = r1.a
                if (r5 != r6) goto L32
                java.lang.Object r5 = r2.b
                java.lang.Object r6 = r1.b
                if (r5 == r6) goto L30
                goto L32
            L30:
                r5 = r3
                goto L33
            L32:
                r5 = r4
            L33:
                r0.j = r5
                boolean r5 = r2.g
                boolean r6 = r1.g
                if (r5 == r6) goto L3d
                r5 = r4
                goto L3e
            L3d:
                r5 = r3
            L3e:
                r0.k = r5
                com.tkay.expressad.exoplayer.i.i r2 = r2.i
                com.tkay.expressad.exoplayer.i.i r1 = r1.i
                if (r2 == r1) goto L47
                r3 = r4
            L47:
                r0.l = r3
                return
        }

        public final void a() {
                r5 = this;
                boolean r0 = r5.j
                if (r0 != 0) goto L8
                int r0 = r5.f
                if (r0 != 0) goto L28
            L8:
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L28
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                com.tkay.expressad.exoplayer.u r2 = r5.a
                com.tkay.expressad.exoplayer.ae r2 = r2.a
                com.tkay.expressad.exoplayer.u r3 = r5.a
                java.lang.Object r3 = r3.b
                int r4 = r5.f
                r1.onTimelineChanged(r2, r3, r4)
                goto Le
            L28:
                boolean r0 = r5.d
                if (r0 == 0) goto L44
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L32:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L44
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                int r2 = r5.e
                r1.onPositionDiscontinuity(r2)
                goto L32
            L44:
                boolean r0 = r5.l
                if (r0 == 0) goto L73
                com.tkay.expressad.exoplayer.i.h r0 = r5.c
                com.tkay.expressad.exoplayer.u r1 = r5.a
                com.tkay.expressad.exoplayer.i.i r1 = r1.i
                java.lang.Object r1 = r1.d
                r0.a(r1)
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L59:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L73
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                com.tkay.expressad.exoplayer.u r2 = r5.a
                com.tkay.expressad.exoplayer.h.af r2 = r2.h
                com.tkay.expressad.exoplayer.u r3 = r5.a
                com.tkay.expressad.exoplayer.i.i r3 = r3.i
                com.tkay.expressad.exoplayer.i.g r3 = r3.c
                r1.onTracksChanged(r2, r3)
                goto L59
            L73:
                boolean r0 = r5.k
                if (r0 == 0) goto L91
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L7d:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L91
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                com.tkay.expressad.exoplayer.u r2 = r5.a
                boolean r2 = r2.g
                r1.onLoadingChanged(r2)
                goto L7d
            L91:
                boolean r0 = r5.i
                if (r0 == 0) goto Lb1
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L9b:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto Lb1
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                boolean r2 = r5.h
                com.tkay.expressad.exoplayer.u r3 = r5.a
                int r3 = r3.f
                r1.onPlayerStateChanged(r2, r3)
                goto L9b
            Lb1:
                boolean r0 = r5.g
                if (r0 == 0) goto Lcb
                java.util.Set<com.tkay.expressad.exoplayer.w$c> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            Lbb:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto Lcb
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
                r1.onSeekProcessed()
                goto Lbb
            Lcb:
                return
        }
    }

    public j(com.tkay.expressad.exoplayer.y[] r14, com.tkay.expressad.exoplayer.i.h r15, com.tkay.expressad.exoplayer.p r16, com.tkay.expressad.exoplayer.k.c r17) {
            r13 = this;
            r11 = r13
            r1 = r14
            r13.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Init "
            r0.<init>(r2)
            int r2 = java.lang.System.identityHashCode(r13)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = " [ExoPlayerLib/2.8.4] ["
            r0.append(r2)
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.e
            r0.append(r2)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ExoPlayerImpl"
            android.util.Log.i(r2, r0)
            int r0 = r1.length
            r2 = 0
            if (r0 <= 0) goto L35
            r0 = 1
            goto L36
        L35:
            r0 = r2
        L36:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r14)
            com.tkay.expressad.exoplayer.y[] r0 = (com.tkay.expressad.exoplayer.y[]) r0
            r11.x = r0
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r15)
            com.tkay.expressad.exoplayer.i.h r0 = (com.tkay.expressad.exoplayer.i.h) r0
            r11.y = r0
            r11.H = r2
            r11.I = r2
            r11.J = r2
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r11.D = r0
            com.tkay.expressad.exoplayer.i.i r0 = new com.tkay.expressad.exoplayer.i.i
            int r2 = r1.length
            com.tkay.expressad.exoplayer.aa[] r2 = new com.tkay.expressad.exoplayer.aa[r2]
            int r3 = r1.length
            com.tkay.expressad.exoplayer.i.f[] r3 = new com.tkay.expressad.exoplayer.i.f[r3]
            r4 = 0
            r0.<init>(r2, r3, r4)
            r11.z = r0
            com.tkay.expressad.exoplayer.ae$b r0 = new com.tkay.expressad.exoplayer.ae$b
            r0.<init>()
            r11.E = r0
            com.tkay.expressad.exoplayer.ae$a r0 = new com.tkay.expressad.exoplayer.ae$a
            r0.<init>()
            r11.F = r0
            com.tkay.expressad.exoplayer.v r0 = com.tkay.expressad.exoplayer.v.a
            r11.N = r0
            android.os.Looper r0 = android.os.Looper.myLooper()
            if (r0 == 0) goto L81
            android.os.Looper r0 = android.os.Looper.myLooper()
            goto L85
        L81:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
        L85:
            com.tkay.expressad.exoplayer.j$1 r2 = new com.tkay.expressad.exoplayer.j$1
            r2.<init>(r13, r0)
            r11.A = r2
            com.tkay.expressad.exoplayer.u r0 = new com.tkay.expressad.exoplayer.u
            com.tkay.expressad.exoplayer.ae r4 = com.tkay.expressad.exoplayer.ae.a
            r5 = 0
            com.tkay.expressad.exoplayer.h.af r7 = com.tkay.expressad.exoplayer.h.af.a
            com.tkay.expressad.exoplayer.i.i r8 = r11.z
            r3 = r0
            r3.<init>(r4, r5, r7, r8)
            r11.P = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r11.G = r0
            com.tkay.expressad.exoplayer.k r12 = new com.tkay.expressad.exoplayer.k
            com.tkay.expressad.exoplayer.i.i r3 = r11.z
            boolean r5 = r11.H
            int r6 = r11.I
            boolean r7 = r11.J
            android.os.Handler r8 = r11.A
            r0 = r12
            r1 = r14
            r2 = r15
            r4 = r16
            r9 = r13
            r10 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r11.B = r12
            android.os.Handler r0 = new android.os.Handler
            com.tkay.expressad.exoplayer.k r1 = r11.B
            android.os.Looper r1 = r1.b()
            r0.<init>(r1)
            r11.C = r0
            return
    }

    private boolean H() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r0 = r0.a()
            if (r0 != 0) goto L11
            int r0 = r1.K
            if (r0 <= 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            return r0
        L11:
            r0 = 1
            return r0
    }

    private com.tkay.expressad.exoplayer.u a(boolean r16, boolean r17, int r18) {
            r15 = this;
            r0 = r15
            if (r16 == 0) goto Ld
            r1 = 0
            r0.Q = r1
            r0.R = r1
            r1 = 0
            r0.S = r1
            goto L1f
        Ld:
            int r1 = r15.p()
            r0.Q = r1
            int r1 = r15.o()
            r0.R = r1
            long r1 = r15.t()
            r0.S = r1
        L1f:
            com.tkay.expressad.exoplayer.u r1 = new com.tkay.expressad.exoplayer.u
            if (r17 == 0) goto L26
            com.tkay.expressad.exoplayer.ae r2 = com.tkay.expressad.exoplayer.ae.a
            goto L2a
        L26:
            com.tkay.expressad.exoplayer.u r2 = r0.P
            com.tkay.expressad.exoplayer.ae r2 = r2.a
        L2a:
            r4 = r2
            if (r17 == 0) goto L2f
            r2 = 0
            goto L33
        L2f:
            com.tkay.expressad.exoplayer.u r2 = r0.P
            java.lang.Object r2 = r2.b
        L33:
            r5 = r2
            com.tkay.expressad.exoplayer.u r2 = r0.P
            com.tkay.expressad.exoplayer.h.s$a r6 = r2.c
            com.tkay.expressad.exoplayer.u r2 = r0.P
            long r7 = r2.d
            com.tkay.expressad.exoplayer.u r2 = r0.P
            long r9 = r2.e
            r12 = 0
            if (r17 == 0) goto L46
            com.tkay.expressad.exoplayer.h.af r2 = com.tkay.expressad.exoplayer.h.af.a
            goto L4a
        L46:
            com.tkay.expressad.exoplayer.u r2 = r0.P
            com.tkay.expressad.exoplayer.h.af r2 = r2.h
        L4a:
            r13 = r2
            if (r17 == 0) goto L50
            com.tkay.expressad.exoplayer.i.i r2 = r0.z
            goto L54
        L50:
            com.tkay.expressad.exoplayer.u r2 = r0.P
            com.tkay.expressad.exoplayer.i.i r2 = r2.i
        L54:
            r14 = r2
            r3 = r1
            r11 = r18
            r3.<init>(r4, r5, r6, r7, r9, r11, r12, r13, r14)
            return r1
    }

    private void a(com.tkay.expressad.exoplayer.u r8, int r9, boolean r10, int r11) {
            r7 = this;
            int r0 = r7.K
            int r0 = r0 - r9
            r7.K = r0
            if (r0 != 0) goto L52
            long r0 = r8.d
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 != 0) goto L1d
            com.tkay.expressad.exoplayer.h.s$a r1 = r8.c
            r2 = 0
            long r4 = r8.e
            r0 = r8
            com.tkay.expressad.exoplayer.u r8 = r0.a(r1, r2, r4)
        L1d:
            r1 = r8
            com.tkay.expressad.exoplayer.u r8 = r7.P
            com.tkay.expressad.exoplayer.ae r8 = r8.a
            boolean r8 = r8.a()
            r9 = 0
            if (r8 == 0) goto L2d
            boolean r8 = r7.L
            if (r8 == 0) goto L3d
        L2d:
            com.tkay.expressad.exoplayer.ae r8 = r1.a
            boolean r8 = r8.a()
            if (r8 == 0) goto L3d
            r7.R = r9
            r7.Q = r9
            r2 = 0
            r7.S = r2
        L3d:
            boolean r8 = r7.L
            if (r8 == 0) goto L43
            r4 = r9
            goto L45
        L43:
            r8 = 2
            r4 = r8
        L45:
            boolean r5 = r7.M
            r7.L = r9
            r7.M = r9
            r6 = 0
            r0 = r7
            r2 = r10
            r3 = r11
            r0.a(r1, r2, r3, r4, r5, r6)
        L52:
            return
    }

    private void a(com.tkay.expressad.exoplayer.u r16, boolean r17, int r18, int r19, boolean r20, boolean r21) {
            r15 = this;
            r0 = r15
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.j$a> r1 = r0.G
            boolean r1 = r1.isEmpty()
            r1 = r1 ^ 1
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.j$a> r2 = r0.G
            com.tkay.expressad.exoplayer.j$a r14 = new com.tkay.expressad.exoplayer.j$a
            com.tkay.expressad.exoplayer.u r5 = r0.P
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r6 = r0.D
            com.tkay.expressad.exoplayer.i.h r7 = r0.y
            boolean r12 = r0.H
            r3 = r14
            r4 = r16
            r8 = r17
            r9 = r18
            r10 = r19
            r11 = r20
            r13 = r21
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            r2.addLast(r14)
            r2 = r16
            r0.P = r2
            if (r1 == 0) goto L2f
            return
        L2f:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.j$a> r1 = r0.G
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L48
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.j$a> r1 = r0.G
            java.lang.Object r1 = r1.peekFirst()
            com.tkay.expressad.exoplayer.j$a r1 = (com.tkay.expressad.exoplayer.j.a) r1
            r1.a()
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.j$a> r1 = r0.G
            r1.removeFirst()
            goto L2f
        L48:
            return
    }

    private long b(long r5) {
            r4 = this;
            long r5 = com.tkay.expressad.exoplayer.b.a(r5)
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            boolean r0 = r0.a()
            if (r0 != 0) goto L25
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            com.tkay.expressad.exoplayer.u r1 = r4.P
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.c
            int r1 = r1.a
            com.tkay.expressad.exoplayer.ae$a r2 = r4.F
            r3 = 0
            r0.a(r1, r2, r3)
            com.tkay.expressad.exoplayer.ae$a r0 = r4.F
            long r0 = r0.a()
            long r5 = r5 + r0
        L25:
            return r5
    }

    @Override
    public final int A() {
            r1 = this;
            boolean r0 = r1.y()
            if (r0 == 0) goto Ld
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            int r0 = r0.c
            return r0
        Ld:
            r0 = -1
            return r0
    }

    @Override
    public final long B() {
            r4 = this;
            boolean r0 = r4.y()
            if (r0 == 0) goto L26
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            com.tkay.expressad.exoplayer.u r1 = r4.P
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.c
            int r1 = r1.a
            com.tkay.expressad.exoplayer.ae$a r2 = r4.F
            r3 = 0
            r0.a(r1, r2, r3)
            com.tkay.expressad.exoplayer.ae$a r0 = r4.F
            long r0 = r0.a()
            com.tkay.expressad.exoplayer.u r2 = r4.P
            long r2 = r2.e
            long r2 = com.tkay.expressad.exoplayer.b.a(r2)
            long r0 = r0 + r2
            return r0
        L26:
            long r0 = r4.t()
            return r0
    }

    @Override
    public final int C() {
            r1 = this;
            com.tkay.expressad.exoplayer.y[] r0 = r1.x
            int r0 = r0.length
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af D() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.h.af r0 = r0.h
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.i.g E() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.i.i r0 = r0.i
            com.tkay.expressad.exoplayer.i.g r0 = r0.c
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae F() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            return r0
    }

    @Override
    public final java.lang.Object G() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            java.lang.Object r0 = r0.b
            return r0
    }

    @Override
    public final android.os.Looper a() {
            r1 = this;
            com.tkay.expressad.exoplayer.k r0 = r1.B
            android.os.Looper r0 = r0.b()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.x a(com.tkay.expressad.exoplayer.x.b r8) {
            r7 = this;
            com.tkay.expressad.exoplayer.x r6 = new com.tkay.expressad.exoplayer.x
            com.tkay.expressad.exoplayer.k r1 = r7.B
            com.tkay.expressad.exoplayer.u r0 = r7.P
            com.tkay.expressad.exoplayer.ae r3 = r0.a
            int r4 = r7.p()
            android.os.Handler r5 = r7.C
            r0 = r6
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    @Override
    public final void a(int r3) {
            r2 = this;
            int r0 = r2.I
            if (r0 == r3) goto L21
            r2.I = r3
            com.tkay.expressad.exoplayer.k r0 = r2.B
            r0.a(r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r0 = r2.D
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
            r1.onRepeatModeChanged(r3)
            goto L11
        L21:
            return
    }

    @Override
    public final void a(int r11, long r12) {
            r10 = this;
            com.tkay.expressad.exoplayer.u r0 = r10.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            if (r11 < 0) goto L9c
            boolean r1 = r0.a()
            if (r1 != 0) goto L12
            int r1 = r0.b()
            if (r11 >= r1) goto L9c
        L12:
            r7 = 1
            r10.M = r7
            int r1 = r10.K
            int r1 = r1 + r7
            r10.K = r1
            boolean r1 = r10.y()
            r2 = 0
            if (r1 == 0) goto L35
            java.lang.String r11 = "ExoPlayerImpl"
            java.lang.String r12 = "seekTo ignored because an ad is playing"
            android.util.Log.w(r11, r12)
            android.os.Handler r11 = r10.A
            r12 = -1
            com.tkay.expressad.exoplayer.u r13 = r10.P
            android.os.Message r11 = r11.obtainMessage(r2, r7, r12, r13)
            r11.sendToTarget()
            return
        L35:
            r10.Q = r11
            boolean r1 = r0.a()
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r1 == 0) goto L4f
            int r1 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r1 != 0) goto L49
            r3 = 0
            goto L4a
        L49:
            r3 = r12
        L4a:
            r10.S = r3
            r10.R = r2
            goto L7c
        L4f:
            int r1 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r1 != 0) goto L5c
            com.tkay.expressad.exoplayer.ae$b r1 = r10.E
            com.tkay.expressad.exoplayer.ae$b r1 = r0.a(r11, r1, r2)
            long r1 = r1.h
            goto L60
        L5c:
            long r1 = com.tkay.expressad.exoplayer.b.b(r12)
        L60:
            r8 = r1
            com.tkay.expressad.exoplayer.ae$b r2 = r10.E
            com.tkay.expressad.exoplayer.ae$a r3 = r10.F
            r1 = r0
            r4 = r11
            r5 = r8
            android.util.Pair r1 = r1.a(r2, r3, r4, r5)
            long r2 = com.tkay.expressad.exoplayer.b.a(r8)
            r10.S = r2
            java.lang.Object r1 = r1.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r10.R = r1
        L7c:
            com.tkay.expressad.exoplayer.k r1 = r10.B
            long r12 = com.tkay.expressad.exoplayer.b.b(r12)
            r1.a(r0, r11, r12)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r11 = r10.D
            java.util.Iterator r11 = r11.iterator()
        L8b:
            boolean r12 = r11.hasNext()
            if (r12 == 0) goto L9b
            java.lang.Object r12 = r11.next()
            com.tkay.expressad.exoplayer.w$c r12 = (com.tkay.expressad.exoplayer.w.c) r12
            r12.onPositionDiscontinuity(r7)
            goto L8b
        L9b:
            return
        L9c:
            com.tkay.expressad.exoplayer.o r1 = new com.tkay.expressad.exoplayer.o
            r1.<init>(r0, r11, r12)
            throw r1
    }

    @Override
    public final void a(long r2) {
            r1 = this;
            int r0 = r1.p()
            r1.a(r0, r2)
            return
    }

    final void a(android.os.Message r14) {
            r13 = this;
            int r1 = r14.what
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L52
            if (r1 == r3) goto L2d
            if (r1 != r2) goto L27
            java.lang.Object r0 = r14.obj
            com.tkay.expressad.exoplayer.g r0 = (com.tkay.expressad.exoplayer.g) r0
            r13.O = r0
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r1 = r13.D
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L26
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.w$c r2 = (com.tkay.expressad.exoplayer.w.c) r2
            r2.onPlayerError(r0)
            goto L16
        L26:
            return
        L27:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
        L2d:
            java.lang.Object r0 = r14.obj
            com.tkay.expressad.exoplayer.v r0 = (com.tkay.expressad.exoplayer.v) r0
            com.tkay.expressad.exoplayer.v r1 = r13.N
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L51
            r13.N = r0
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r1 = r13.D
            java.util.Iterator r1 = r1.iterator()
        L41:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L51
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.w$c r2 = (com.tkay.expressad.exoplayer.w.c) r2
            r2.onPlaybackParametersChanged(r0)
            goto L41
        L51:
            return
        L52:
            java.lang.Object r1 = r14.obj
            r7 = r1
            com.tkay.expressad.exoplayer.u r7 = (com.tkay.expressad.exoplayer.u) r7
            int r1 = r14.arg1
            int r4 = r14.arg2
            r5 = -1
            r6 = 0
            if (r4 == r5) goto L60
            goto L61
        L60:
            r3 = r6
        L61:
            int r4 = r14.arg2
            int r0 = r13.K
            int r0 = r0 - r1
            r13.K = r0
            if (r0 != 0) goto Lb6
            long r0 = r7.d
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r0 != 0) goto L81
            com.tkay.expressad.exoplayer.h.s$a r8 = r7.c
            r9 = 0
            long r11 = r7.e
            com.tkay.expressad.exoplayer.u r0 = r7.a(r8, r9, r11)
            r1 = r0
            goto L82
        L81:
            r1 = r7
        L82:
            com.tkay.expressad.exoplayer.u r0 = r13.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r0 = r0.a()
            if (r0 == 0) goto L90
            boolean r0 = r13.L
            if (r0 == 0) goto La0
        L90:
            com.tkay.expressad.exoplayer.ae r0 = r1.a
            boolean r0 = r0.a()
            if (r0 == 0) goto La0
            r13.R = r6
            r13.Q = r6
            r7 = 0
            r13.S = r7
        La0:
            boolean r0 = r13.L
            if (r0 == 0) goto La6
            r5 = r6
            goto La7
        La6:
            r5 = r2
        La7:
            boolean r7 = r13.M
            r13.L = r6
            r13.M = r6
            r6 = 0
            r0 = r13
            r2 = r3
            r3 = r4
            r4 = r5
            r5 = r7
            r0.a(r1, r2, r3, r4, r5, r6)
        Lb6:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.ac r2) {
            r1 = this;
            if (r2 != 0) goto L4
            com.tkay.expressad.exoplayer.ac r2 = com.tkay.expressad.exoplayer.ac.e
        L4:
            com.tkay.expressad.exoplayer.k r0 = r1.B
            r0.a(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s r2) {
            r1 = this;
            r0 = 1
            r1.a(r2, r0, r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s r9, boolean r10, boolean r11) {
            r8 = this;
            r0 = 0
            r8.O = r0
            r0 = 2
            com.tkay.expressad.exoplayer.u r2 = r8.a(r10, r11, r0)
            r0 = 1
            r8.L = r0
            int r1 = r8.K
            int r1 = r1 + r0
            r8.K = r1
            com.tkay.expressad.exoplayer.k r0 = r8.B
            r0.a(r9, r10, r11)
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 0
            r1 = r8
            r1.a(r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.v r2) {
            r1 = this;
            if (r2 != 0) goto L4
            com.tkay.expressad.exoplayer.v r2 = com.tkay.expressad.exoplayer.v.a
        L4:
            com.tkay.expressad.exoplayer.k r0 = r1.B
            r0.b(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.w.c r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r0 = r1.D
            r0.add(r2)
            return
    }

    @Override
    public final void a(boolean r9) {
            r8 = this;
            boolean r0 = r8.H
            if (r0 == r9) goto L16
            r8.H = r9
            com.tkay.expressad.exoplayer.k r0 = r8.B
            r0.a(r9)
            com.tkay.expressad.exoplayer.u r2 = r8.P
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 1
            r1 = r8
            r1.a(r2, r3, r4, r5, r6, r7)
        L16:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.c... r6) {
            r5 = this;
            int r0 = r6.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L1e
            r2 = r6[r1]
            com.tkay.expressad.exoplayer.x$b r3 = r2.a
            com.tkay.expressad.exoplayer.x r3 = r5.a(r3)
            int r4 = r2.b
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            java.lang.Object r2 = r2.c
            com.tkay.expressad.exoplayer.x r2 = r3.a(r2)
            r2.i()
            int r1 = r1 + 1
            goto L2
        L1e:
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.w.g b() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void b(int r3) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.a(r3, r0)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.w.c r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r0 = r1.D
            r0.remove(r2)
            return
    }

    @Override
    public final void b(boolean r3) {
            r2 = this;
            boolean r0 = r2.J
            if (r0 == r3) goto L21
            r2.J = r3
            com.tkay.expressad.exoplayer.k r0 = r2.B
            r0.b(r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.w$c> r0 = r2.D
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.w$c r1 = (com.tkay.expressad.exoplayer.w.c) r1
            r1.onShuffleModeEnabledChanged(r3)
            goto L11
        L21:
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.h.c... r8) {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r8.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L28
            r4 = r8[r3]
            com.tkay.expressad.exoplayer.x$b r5 = r4.a
            com.tkay.expressad.exoplayer.x r5 = r7.a(r5)
            int r6 = r4.b
            com.tkay.expressad.exoplayer.x r5 = r5.a(r6)
            java.lang.Object r4 = r4.c
            com.tkay.expressad.exoplayer.x r4 = r5.a(r4)
            com.tkay.expressad.exoplayer.x r4 = r4.i()
            r0.add(r4)
            int r3 = r3 + 1
            goto L8
        L28:
            java.util.Iterator r8 = r0.iterator()
            r0 = r2
        L2d:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L49
            java.lang.Object r1 = r8.next()
            com.tkay.expressad.exoplayer.x r1 = (com.tkay.expressad.exoplayer.x) r1
            r3 = 1
            r4 = r3
        L3b:
            if (r4 == 0) goto L2d
            r1.k()     // Catch: java.util.concurrent.TimeoutException -> L42 java.lang.InterruptedException -> L47
            r4 = r2
            goto L3b
        L42:
            r5 = move-exception
            r5.getMessage()
            goto L3b
        L47:
            r0 = r3
            goto L3b
        L49:
            if (r0 == 0) goto L52
            java.lang.Thread r8 = java.lang.Thread.currentThread()
            r8.interrupt()
        L52:
            return
    }

    @Override
    public final int c(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.y[] r0 = r1.x
            r2 = r0[r2]
            int r2 = r2.a()
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.w.e c() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void c(boolean r9) {
            r8 = this;
            if (r9 == 0) goto L5
            r0 = 0
            r8.O = r0
        L5:
            r0 = 1
            com.tkay.expressad.exoplayer.u r2 = r8.a(r9, r9, r0)
            int r1 = r8.K
            int r1 = r1 + r0
            r8.K = r1
            com.tkay.expressad.exoplayer.k r0 = r8.B
            r0.c(r9)
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 0
            r1 = r8
            r1.a(r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public final int d() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            int r0 = r0.f
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.g e() {
            r1 = this;
            com.tkay.expressad.exoplayer.g r0 = r1.O
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            boolean r0 = r1.H
            return r0
    }

    @Override
    public final int g() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    @Override
    public final boolean h() {
            r1 = this;
            boolean r0 = r1.J
            return r0
    }

    @Override
    public final boolean i() {
            r1 = this;
            com.tkay.expressad.exoplayer.u r0 = r1.P
            boolean r0 = r0.g
            return r0
    }

    @Override
    public final void j() {
            r1 = this;
            int r0 = r1.p()
            r1.b(r0)
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.v k() {
            r1 = this;
            com.tkay.expressad.exoplayer.v r0 = r1.N
            return r0
    }

    @Override
    public final java.lang.Object l() {
            r4 = this;
            int r0 = r4.p()
            com.tkay.expressad.exoplayer.u r1 = r4.P
            com.tkay.expressad.exoplayer.ae r1 = r1.a
            int r1 = r1.b()
            if (r0 <= r1) goto L10
            r0 = 0
            return r0
        L10:
            com.tkay.expressad.exoplayer.u r1 = r4.P
            com.tkay.expressad.exoplayer.ae r1 = r1.a
            com.tkay.expressad.exoplayer.ae$b r2 = r4.E
            r3 = 1
            com.tkay.expressad.exoplayer.ae$b r0 = r1.a(r0, r2, r3)
            java.lang.Object r0 = r0.a
            return r0
    }

    @Override
    public final void m() {
            r1 = this;
            r0 = 0
            r1.c(r0)
            return
    }

    @Override
    public final void n() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Release "
            r0.<init>(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " [ExoPlayerLib/2.8.4] ["
            r0.append(r1)
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.e
            r0.append(r1)
            java.lang.String r1 = "] ["
            r0.append(r1)
            java.lang.String r1 = com.tkay.expressad.exoplayer.l.a()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ExoPlayerImpl"
            android.util.Log.i(r1, r0)
            com.tkay.expressad.exoplayer.k r0 = r2.B
            r0.a()
            android.os.Handler r0 = r2.A
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }

    @Override
    public final int o() {
            r1 = this;
            boolean r0 = r1.H()
            if (r0 == 0) goto L9
            int r0 = r1.R
            return r0
        L9:
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            int r0 = r0.a
            return r0
    }

    @Override
    public final int p() {
            r4 = this;
            boolean r0 = r4.H()
            if (r0 == 0) goto L9
            int r0 = r4.Q
            return r0
        L9:
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            com.tkay.expressad.exoplayer.u r1 = r4.P
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.c
            int r1 = r1.a
            com.tkay.expressad.exoplayer.ae$a r2 = r4.F
            r3 = 0
            com.tkay.expressad.exoplayer.ae$a r0 = r0.a(r1, r2, r3)
            int r0 = r0.c
            return r0
    }

    @Override
    public final int q() {
            r4 = this;
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            if (r1 == 0) goto Lc
            r0 = -1
            return r0
        Lc:
            int r1 = r4.p()
            int r2 = r4.I
            boolean r3 = r4.J
            int r0 = r0.a(r1, r2, r3)
            return r0
    }

    @Override
    public final int r() {
            r4 = this;
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            if (r1 == 0) goto Lc
            r0 = -1
            return r0
        Lc:
            int r1 = r4.p()
            int r2 = r4.I
            boolean r3 = r4.J
            int r0 = r0.b(r1, r2, r3)
            return r0
    }

    @Override
    public final long s() {
            r5 = this;
            com.tkay.expressad.exoplayer.u r0 = r5.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            if (r1 == 0) goto L10
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
        L10:
            boolean r1 = r5.y()
            r2 = 0
            if (r1 == 0) goto L31
            com.tkay.expressad.exoplayer.u r1 = r5.P
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.c
            int r3 = r1.a
            com.tkay.expressad.exoplayer.ae$a r4 = r5.F
            r0.a(r3, r4, r2)
            com.tkay.expressad.exoplayer.ae$a r0 = r5.F
            int r2 = r1.b
            int r1 = r1.c
            long r0 = r0.c(r2, r1)
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            return r0
        L31:
            int r1 = r5.p()
            com.tkay.expressad.exoplayer.ae$b r3 = r5.E
            com.tkay.expressad.exoplayer.ae$b r0 = r0.a(r1, r3, r2)
            long r0 = r0.i
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            return r0
    }

    @Override
    public final long t() {
            r2 = this;
            boolean r0 = r2.H()
            if (r0 == 0) goto L9
            long r0 = r2.S
            return r0
        L9:
            com.tkay.expressad.exoplayer.u r0 = r2.P
            long r0 = r0.j
            long r0 = r2.b(r0)
            return r0
    }

    @Override
    public final long u() {
            r2 = this;
            boolean r0 = r2.H()
            if (r0 == 0) goto L9
            long r0 = r2.S
            return r0
        L9:
            com.tkay.expressad.exoplayer.u r0 = r2.P
            long r0 = r0.k
            long r0 = r2.b(r0)
            return r0
    }

    @Override
    public final int v() {
            r10 = this;
            long r0 = r10.u()
            long r2 = r10.s()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r7 = 0
            if (r6 == 0) goto L2a
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L17
            goto L2a
        L17:
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r5 = 100
            if (r4 != 0) goto L20
            return r5
        L20:
            r8 = 100
            long r0 = r0 * r8
            long r0 = r0 / r2
            int r0 = (int) r0
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r7, r5)
            return r0
        L2a:
            return r7
    }

    @Override
    public final boolean w() {
            r4 = this;
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            r2 = 0
            if (r1 != 0) goto L1b
            int r1 = r4.p()
            com.tkay.expressad.exoplayer.ae$b r3 = r4.E
            com.tkay.expressad.exoplayer.ae$b r0 = r0.a(r1, r3, r2)
            boolean r0 = r0.e
            if (r0 == 0) goto L1b
            r0 = 1
            return r0
        L1b:
            return r2
    }

    @Override
    public final boolean x() {
            r4 = this;
            com.tkay.expressad.exoplayer.u r0 = r4.P
            com.tkay.expressad.exoplayer.ae r0 = r0.a
            boolean r1 = r0.a()
            r2 = 0
            if (r1 != 0) goto L1b
            int r1 = r4.p()
            com.tkay.expressad.exoplayer.ae$b r3 = r4.E
            com.tkay.expressad.exoplayer.ae$b r0 = r0.a(r1, r3, r2)
            boolean r0 = r0.d
            if (r0 == 0) goto L1b
            r0 = 1
            return r0
        L1b:
            return r2
    }

    @Override
    public final boolean y() {
            r1 = this;
            boolean r0 = r1.H()
            if (r0 != 0) goto L12
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            boolean r0 = r0.a()
            if (r0 == 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public final int z() {
            r1 = this;
            boolean r0 = r1.y()
            if (r0 == 0) goto Ld
            com.tkay.expressad.exoplayer.u r0 = r1.P
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.c
            int r0 = r0.b
            return r0
        Ld:
            r0 = -1
            return r0
    }
}
