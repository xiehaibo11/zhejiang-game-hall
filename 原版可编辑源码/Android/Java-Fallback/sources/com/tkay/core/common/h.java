package com.tkay.core.common;

public abstract class h {
    int A;
    int B;
    java.lang.Object C;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> D;
    double E;
    com.tkay.core.common.f.aj F;
    protected java.util.Map<java.lang.String, com.tkay.core.common.m.d> G;
    java.util.List<com.tkay.core.common.f.aj> H;
    protected java.lang.Runnable I;
    protected java.lang.Runnable J;
    com.tkay.core.common.m.h K;
    com.tkay.core.common.m.f L;
    protected java.lang.Runnable M;
    com.tkay.core.common.f.aj N;
    double O;
    boolean P;
    com.tkay.core.common.f.aj Q;
    java.util.List<com.tkay.core.common.f.aj> R;
    boolean S;
    private final java.lang.String T;
    protected android.content.Context a;
    protected java.lang.ref.WeakReference<android.content.Context> b;
    protected int c;
    protected java.lang.String d;
    protected com.tkay.core.c.d e;
    protected java.lang.String f;
    protected java.lang.String g;
    java.util.Map<java.lang.String, java.lang.Object> h;
    com.tkay.core.common.f.d i;
    protected com.tkay.core.common.j j;
    protected int k;
    protected com.tkay.core.common.b.b l;
    boolean m;
    boolean n;
    protected boolean o;
    boolean p;
    boolean q;
    boolean r;
    boolean s;
    java.util.List<com.tkay.core.common.f.aj> t;
    java.util.List<com.tkay.core.common.f.aj> u;
    java.util.List<com.tkay.core.common.f.aj> v;
    java.util.List<com.tkay.core.common.m.e> w;
    java.lang.String x;
    com.tkay.core.api.AdError y;
    long z;


    final class 2 implements java.lang.Runnable {
        final com.tkay.core.common.h a;


        2(com.tkay.core.common.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.core.common.h r0 = r2.a
                r1 = 0
                r0.I = r1
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.h$2$1 r1 = new com.tkay.core.common.h$2$1
                r1.<init>(r2)
                r0.a(r1)
                return
        }
    }

    final class 3 implements java.lang.Runnable {
        final com.tkay.core.common.h a;

        3(com.tkay.core.common.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.core.common.h r0 = r1.a
                com.tkay.core.common.h.b(r0)
                return
        }
    }


    final class 5 implements com.tkay.core.common.m.b {
        final com.tkay.core.common.h a;

        5(com.tkay.core.common.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.core.api.TYBaseAdAdapter r2) {
                r1 = this;
                com.tkay.core.common.h r0 = r1.a
                r0.a(r2)
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.d r4) {
                r3 = this;
                com.tkay.core.common.h r0 = r3.a
                android.content.Context r0 = r0.a
                com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
                r1 = 1
                r0.a(r1, r4)
                java.lang.String r0 = com.tkay.core.common.b.f.i.a
                java.lang.String r1 = com.tkay.core.common.b.f.i.n
                java.lang.String r2 = ""
                com.tkay.core.common.l.g.a(r4, r0, r1, r2)
                return
        }

        @Override
        public final void a(java.lang.String r2, com.tkay.core.api.TYBaseAdAdapter r3, com.tkay.core.common.f.aj r4) {
                r1 = this;
                com.tkay.core.common.h r0 = r1.a
                com.tkay.core.common.h.a(r0, r2, r3, r4)
                return
        }

        @Override
        public final void a(java.lang.String r5, com.tkay.core.api.TYBaseAdAdapter r6, com.tkay.core.api.BaseAd... r7) {
                r4 = this;
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.core.common.h r1 = r4.a
                java.lang.String r1 = r1.g
                com.tkay.core.api.ITYAdFilter r0 = r0.o(r1)
                r1 = 0
                if (r7 == 0) goto L16
                int r2 = r7.length
                if (r2 <= 0) goto L16
                r2 = 0
                r2 = r7[r2]
                goto L17
            L16:
                r2 = r1
            L17:
                if (r0 == 0) goto L52
                com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r6)
                boolean r0 = r0.isAdFilter(r3, r2)
                if (r0 == 0) goto L52
                com.tkay.core.common.m.a r7 = new com.tkay.core.common.m.a
                r7.<init>()
                r0 = 8
                r7.a = r0
                com.tkay.core.common.f.d r0 = r6.getTrackingInfo()
                long r0 = r0.K()
                r7.c = r0
                java.lang.String r0 = ""
                java.lang.String r1 = "4008"
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r0, r0)
                r7.b = r0
                com.tkay.core.common.f.d r0 = r6.getTrackingInfo()
                r7.d = r0
                com.tkay.core.common.f.aj r6 = r6.getUnitGroupInfo()
                r7.e = r6
                com.tkay.core.common.h r6 = r4.a
                r6.a(r5, r7)
                return
            L52:
                com.tkay.core.common.h r0 = r4.a
                if (r7 == 0) goto L5a
                java.util.List r1 = java.util.Arrays.asList(r7)
            L5a:
                r0.a(r5, r6, r1)
                return
        }

        @Override
        public final void a(java.lang.String r2, com.tkay.core.common.m.a r3) {
                r1 = this;
                com.tkay.core.common.h r0 = r1.a
                r0.a(r2, r3)
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.core.common.h r2 = r0.a
                com.tkay.core.common.h.a(r2, r1)
                return
        }

        @Override
        public final void b(com.tkay.core.common.f.d r2) {
                r1 = this;
                com.tkay.core.common.h r0 = r1.a
                com.tkay.core.common.h.a(r0, r2)
                return
        }
    }




    public static class a {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;
        public static final int e = 5;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public h(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r4.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r4.T = r0
            java.lang.String r0 = ""
            r4.d = r0
            r1 = 0
            r4.k = r1
            r4.m = r1
            r4.n = r1
            r4.o = r1
            r4.r = r1
            r4.s = r1
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r4.C = r2
            r2 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            r4.E = r2
            r2 = 0
            r4.I = r2
            com.tkay.core.common.h$1 r2 = new com.tkay.core.common.h$1
            r2.<init>(r4)
            r4.M = r2
            r4.P = r1
            r4.S = r1
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r5)
            r4.b = r1
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            r4.a = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r1 = 2
            r5.<init>(r1)
            java.util.List r5 = java.util.Collections.synchronizedList(r5)
            r4.w = r5
            java.lang.String r5 = "4001"
            com.tkay.core.api.AdError r5 = com.tkay.core.api.ErrorCode.getErrorCode(r5, r0, r0)
            r4.y = r5
            java.util.concurrent.ConcurrentHashMap r5 = new java.util.concurrent.ConcurrentHashMap
            r5.<init>()
            r4.G = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r0 = 3
            r5.<init>(r0)
            java.util.List r5 = java.util.Collections.synchronizedList(r5)
            r4.H = r5
            com.tkay.core.common.m.h r5 = new com.tkay.core.common.m.h
            r5.<init>()
            r4.K = r5
            return
    }

    private synchronized boolean A() {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "hasFinishAllRequest:isFinishBidding: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L73
            boolean r1 = r2.m     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "hasFinishAllRequest:requestWaitingPool: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L73
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.t     // Catch: java.lang.Throwable -> L73
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "hasFinishAllRequest:requestingPool: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L73
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.u     // Catch: java.lang.Throwable -> L73
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "hasFinishAllRequest:defaultRequestWaitingPool: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L73
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.v     // Catch: java.lang.Throwable -> L73
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = "hasFinishAllRequest:showCapWaitingPool: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L73
            java.util.List<com.tkay.core.common.m.e> r1 = r2.w     // Catch: java.lang.Throwable -> L73
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L73
            r0.append(r1)     // Catch: java.lang.Throwable -> L73
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.t     // Catch: java.lang.Throwable -> L73
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L70
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.v     // Catch: java.lang.Throwable -> L73
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L70
            java.util.List<com.tkay.core.common.m.e> r0 = r2.w     // Catch: java.lang.Throwable -> L73
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L70
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.u     // Catch: java.lang.Throwable -> L73
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L73
            if (r0 != 0) goto L70
            r0 = 1
            monitor-exit(r2)
            return r0
        L70:
            r0 = 0
            monitor-exit(r2)
            return r0
        L73:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private synchronized boolean B() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.t     // Catch: java.lang.Throwable -> L16
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L16
            if (r0 != 0) goto L14
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.u     // Catch: java.lang.Throwable -> L16
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L16
            if (r0 != 0) goto L14
            r0 = 1
        L12:
            monitor-exit(r1)
            return r0
        L14:
            r0 = 0
            goto L12
        L16:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private boolean C() {
            r3 = this;
            com.tkay.core.c.d r0 = r3.e
            int r0 = r0.k()
            r1 = 1
            if (r0 != r1) goto L1c
            int r0 = r3.k
            r2 = 8
            if (r0 == r2) goto L1c
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r2 = r3.g
            boolean r0 = r0.e(r2)
            if (r0 != 0) goto L1c
            return r1
        L1c:
            r0 = 0
            return r0
    }

    private void a(int r5, java.util.List<com.tkay.core.common.f.aj> r6, com.tkay.core.common.k.a r7) {
            r4 = this;
            com.tkay.core.common.f.aj r0 = r4.N
            if (r0 != 0) goto Lf
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.H
            boolean r0 = com.tkay.core.common.l.t.a(r0)
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            com.tkay.core.common.f.ag r1 = new com.tkay.core.common.f.ag
            r1.<init>()
            android.content.Context r2 = r4.a
            r1.b = r2
            com.tkay.core.common.j r2 = r4.j
            r1.c = r2
            java.lang.String r2 = r4.f
            r1.d = r2
            java.lang.String r2 = r4.g
            r1.e = r2
            com.tkay.core.c.d r2 = r4.e
            int r2 = r2.Y()
            r1.f = r2
            com.tkay.core.c.d r2 = r4.e
            long r2 = r2.I()
            r1.g = r2
            com.tkay.core.c.d r2 = r4.e
            long r2 = r2.A()
            r1.h = r2
            com.tkay.core.common.i.a()
            com.tkay.core.c.d r2 = r4.e
            java.lang.String r2 = com.tkay.core.common.i.a(r2, r0)
            r1.m = r2
            com.tkay.core.common.i.a()
            com.tkay.core.c.d r2 = r4.e
            java.lang.String r2 = com.tkay.core.common.i.a(r2)
            r1.p = r2
            com.tkay.core.common.i.a()
            com.tkay.core.c.d r2 = r4.e
            java.lang.String r2 = com.tkay.core.common.i.b(r2)
            r1.q = r2
            r1.j = r6
            com.tkay.core.c.d r6 = r4.e
            r1.o = r6
            com.tkay.core.common.f.d r6 = r4.i
            r1.t = r6
            java.util.Map<java.lang.String, java.lang.Object> r6 = r4.h
            r1.r = r6
            com.tkay.core.common.m.f r6 = r4.L
            com.tkay.core.common.f.am r6 = r6.g()
            r1.x = r6
            com.tkay.core.common.m.f r6 = r4.L
            com.tkay.core.common.f.ae r6 = r6.h()
            r1.y = r6
            com.tkay.core.common.x r6 = com.tkay.core.common.x.a()
            java.lang.String r2 = r4.g
            java.lang.String r3 = r4.f
            java.util.List r6 = r6.b(r2, r3)
            if (r6 != 0) goto L93
            java.util.ArrayList r6 = new java.util.ArrayList
            r2 = 4
            r6.<init>(r2)
            r1.k = r6
            goto L95
        L93:
            r1.k = r6
        L95:
            r1.n = r0
            r1.v = r5
            com.tkay.core.common.f.aj r5 = r4.N
            r1.u = r5
            com.tkay.core.common.f.aj r5 = r4.Q
            double r5 = com.tkay.core.common.l.g.a(r5)
            r1.w = r5
            com.tkay.core.b.h r5 = new com.tkay.core.b.h
            r5.<init>(r1)
            boolean r6 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            r5.a(r6)
            com.tkay.core.common.h$8 r6 = new com.tkay.core.common.h$8
            r6.<init>(r4, r7)
            r5.a(r6)
            return
    }

    private void a(long r3) {
            r2 = this;
            java.lang.Runnable r0 = r2.J
            if (r0 == 0) goto Ld
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.J
            r0.a(r1, r3)
        Ld:
            return
    }

    private void a(com.tkay.core.common.f.aj r12) {
            r11 = this;
            if (r12 == 0) goto L32
            boolean r0 = r12.j()
            if (r0 == 0) goto L32
            int r0 = r12.K()
            r1 = 2
            if (r0 == r1) goto L10
            goto L32
        L10:
            java.lang.String r2 = r11.f
            java.lang.String r3 = r11.g
            java.lang.String r4 = r11.d
            com.tkay.core.c.d r5 = r11.e
            r7 = 1
            int r8 = r11.k
            int r9 = r11.c
            com.tkay.core.common.j r0 = r11.j
            if (r0 == 0) goto L24
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.g
            goto L25
        L24:
            r0 = 0
        L25:
            r10 = r0
            java.lang.String r6 = ""
            com.tkay.core.common.f.d r0 = com.tkay.core.common.l.s.a(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            com.tkay.core.common.f.aj r1 = r11.F
            r2 = 1
            com.tkay.core.common.m.f.a(r12, r0, r1, r2)
        L32:
            return
    }

    private synchronized void a(com.tkay.core.common.f.aj r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 2
            if (r3 == r0) goto L7
            java.util.List<com.tkay.core.common.f.aj> r3 = r1.t     // Catch: java.lang.Throwable -> L14
            goto L9
        L7:
            java.util.List<com.tkay.core.common.f.aj> r3 = r1.v     // Catch: java.lang.Throwable -> L14
        L9:
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L14
            r0 = 0
            com.tkay.core.common.l.g.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return
        L11:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L14
            throw r2     // Catch: java.lang.Throwable -> L14
        L14:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void a(com.tkay.core.common.f.d r1) {
            r0 = this;
            r0.i = r1
            return
    }

    private void a(com.tkay.core.common.f.d r2, com.tkay.core.api.AdError r3) {
            r1 = this;
            com.tkay.core.common.b.b r0 = r1.l
            if (r0 == 0) goto L7
            r0.b(r2, r3)
        L7:
            return
    }

    static void a(com.tkay.core.common.h r0) {
            r0.j()
            return
    }

    static void a(com.tkay.core.common.h r0, com.tkay.core.common.f.aj r1) {
            r0.b(r1)
            return
    }

    static void a(com.tkay.core.common.h r0, com.tkay.core.common.f.aj r1, int r2) {
            r0.b(r1, r2)
            return
    }

    static void a(com.tkay.core.common.h r0, com.tkay.core.common.f.d r1) {
            com.tkay.core.common.b.b r0 = r0.l
            if (r0 == 0) goto L7
            r0.c(r1)
        L7:
            return
    }

    static void a(com.tkay.core.common.h r2, com.tkay.core.common.m.d r3, com.tkay.core.common.f.d r4) {
            com.tkay.core.common.m.c r0 = new com.tkay.core.common.m.c
            r0.<init>()
            android.content.Context r1 = r2.a
            r0.a = r1
            java.lang.ref.WeakReference<android.content.Context> r1 = r2.b
            r0.b = r1
            java.lang.String r1 = r2.f
            r0.c = r1
            java.lang.String r1 = r2.g
            r0.d = r1
            com.tkay.core.c.d r1 = r2.e
            r0.e = r1
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.h
            r0.f = r1
            int r1 = r2.A
            r0.g = r1
            r0.h = r4
            r3.a(r0)
            com.tkay.core.common.h$5 r4 = new com.tkay.core.common.h$5
            r4.<init>(r2)
            r3.a(r4)
            r3.b()
            return
    }

    static void a(com.tkay.core.common.h r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static void a(com.tkay.core.common.h r0, java.lang.String r1, com.tkay.core.api.TYBaseAdAdapter r2, com.tkay.core.common.f.aj r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.tkay.core.common.h r0, java.util.List r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.tkay.core.common.m.d r5) {
            r4 = this;
            boolean r0 = r5.e()
            if (r0 == 0) goto L10
            com.tkay.core.common.m.f r1 = r4.L
            r2 = -1
            int r3 = r5.f()
            r1.a(r2, r3)
        L10:
            r4.b(r5)
            r4.r()
            if (r0 != 0) goto L19
            return
        L19:
            com.tkay.core.common.m.f r0 = r4.L
            int r0 = r0.d()
            if (r0 != 0) goto L34
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.t
            int r0 = r0.size()
            if (r0 != 0) goto L34
            boolean r0 = r4.r
            if (r0 != 0) goto L31
            boolean r0 = r4.m
            if (r0 == 0) goto L34
        L31:
            r4.v()
        L34:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "checkToRequestNextAdSource: try to call next AdSource.||"
            r0.<init>(r1)
            int r1 = r5.f()
            r0.append(r1)
            com.tkay.core.common.m.f r0 = r4.L
            int r1 = r5.f()
            r0.a(r1)
            com.tkay.core.common.m.f r0 = r4.L
            int r1 = r5.f()
            java.util.List r0 = r0.b(r1)
            int r5 = r5.f()
            r4.a(r0, r5)
            r4.l()
            return
    }

    private void a(com.tkay.core.common.m.d r9, com.tkay.core.api.TYBaseAdAdapter r10, com.tkay.core.common.f.aj r11, com.tkay.core.common.f.d r12) {
            r8 = this;
            java.lang.String r10 = r10.getNetworkPlacementId()
            r12.g(r10)
            int r9 = r9.f()
            r0 = 0
            r10 = 2
            if (r9 == r10) goto L15
            double r2 = com.tkay.core.common.l.g.a(r11)
            goto L16
        L15:
            r2 = r0
        L16:
            double r4 = r8.E
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 <= 0) goto L1e
            r8.E = r2
        L1e:
            r8.d(r11)
            com.tkay.core.common.f.aj r9 = r8.F
            if (r9 != 0) goto L33
            r8.F = r11
            com.tkay.core.b.c r9 = com.tkay.core.b.c.a()
            java.lang.String r4 = r8.g
            com.tkay.core.common.f.aj r5 = r8.F
            r9.a(r4, r5)
            goto L4e
        L33:
            double r4 = com.tkay.core.common.l.g.a(r11)
            com.tkay.core.common.f.aj r9 = r8.F
            double r6 = com.tkay.core.common.l.g.a(r9)
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 <= 0) goto L4e
            r8.F = r11
            com.tkay.core.b.c r9 = com.tkay.core.b.c.a()
            java.lang.String r4 = r8.g
            com.tkay.core.common.f.aj r5 = r8.F
            r9.a(r4, r5)
        L4e:
            com.tkay.core.common.m.f r9 = r8.L
            r9.b(r11)
            double r4 = r8.O
            int r9 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r9 <= 0) goto L64
            int r9 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r9 >= 0) goto L60
            r12.s = r10
            goto L67
        L60:
            r9 = 1
            r12.s = r9
            goto L67
        L64:
            r9 = 0
            r12.s = r9
        L67:
            android.content.Context r9 = r8.a
            java.lang.String r10 = r8.g
            java.lang.String r12 = r8.f
            r0 = 0
            com.tkay.core.common.m.f.a(r9, r10, r12, r11, r0)
            return
    }

    private void a(com.tkay.core.common.m.d r3, com.tkay.core.common.f.d r4) {
            r2 = this;
            com.tkay.core.common.m.c r0 = new com.tkay.core.common.m.c
            r0.<init>()
            android.content.Context r1 = r2.a
            r0.a = r1
            java.lang.ref.WeakReference<android.content.Context> r1 = r2.b
            r0.b = r1
            java.lang.String r1 = r2.f
            r0.c = r1
            java.lang.String r1 = r2.g
            r0.d = r1
            com.tkay.core.c.d r1 = r2.e
            r0.e = r1
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.h
            r0.f = r1
            int r1 = r2.A
            r0.g = r1
            r0.h = r4
            r3.a(r0)
            com.tkay.core.common.h$5 r4 = new com.tkay.core.common.h$5
            r4.<init>(r2)
            r3.a(r4)
            r3.b()
            return
    }

    private synchronized void a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.tkay.core.common.m.h r0 = r1.K     // Catch: java.lang.Throwable -> L18
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto Lb
            monitor-exit(r1)
            return
        Lb:
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r1.G     // Catch: java.lang.Throwable -> L18
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.m.d r2 = (com.tkay.core.common.m.d) r2     // Catch: java.lang.Throwable -> L18
            r1.a(r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r1)
            return
        L18:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private synchronized void a(java.lang.String r3, com.tkay.core.api.TYBaseAdAdapter r4, com.tkay.core.common.f.aj r5) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r2.G     // Catch: java.lang.Throwable -> L37
            java.lang.Object r3 = r0.remove(r3)     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.m.d r3 = (com.tkay.core.common.m.d) r3     // Catch: java.lang.Throwable -> L37
            if (r3 != 0) goto Ld
            monitor-exit(r2)
            return
        Ld:
            com.tkay.core.common.f.d r0 = r4.getTrackingInfo()     // Catch: java.lang.Throwable -> L37
            r2.a(r3, r4, r5, r0)     // Catch: java.lang.Throwable -> L37
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "[Enter] onCacheAdLoaded: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = r5.aa()     // Catch: java.lang.Throwable -> L37
            r0.append(r1)     // Catch: java.lang.Throwable -> L37
            r2.b(r5)     // Catch: java.lang.Throwable -> L37
            r2.t()     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.d r4 = r4.getTrackingInfo()     // Catch: java.lang.Throwable -> L37
            r2.c(r4)     // Catch: java.lang.Throwable -> L37
            r5.t()     // Catch: java.lang.Throwable -> L37
            r2.a(r3)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r2)
            return
        L37:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void a(java.util.List<com.tkay.core.common.f.aj> r1) {
            r0 = this;
            r0.R = r1
            return
    }

    private synchronized void a(java.util.List<com.tkay.core.common.f.aj> r3, int r4) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.m.h r0 = r2.K     // Catch: java.lang.Throwable -> L47
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L45
            com.tkay.core.common.m.h r0 = r2.K     // Catch: java.lang.Throwable -> L47
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L45
            if (r3 == 0) goto L45
            int r0 = r3.size()     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L1a
            goto L45
        L1a:
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.u     // Catch: java.lang.Throwable -> L47
            r0.addAll(r3)     // Catch: java.lang.Throwable -> L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "addAdSourceToRequestingPool:start to request:  requesting size:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L47
            java.util.List<com.tkay.core.common.f.aj> r1 = r2.u     // Catch: java.lang.Throwable -> L47
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L47
            r0.append(r1)     // Catch: java.lang.Throwable -> L47
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L47
        L33:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r0 == 0) goto L43
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L47
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0     // Catch: java.lang.Throwable -> L47
            r2.b(r0, r4)     // Catch: java.lang.Throwable -> L47
            goto L33
        L43:
            monitor-exit(r2)
            return
        L45:
            monitor-exit(r2)
            return
        L47:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private com.tkay.core.common.f.aj b(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.D
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    private void b(long r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.M
            r0.a(r1, r3)
            return
    }

    private synchronized void b(com.tkay.core.common.f.aj r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.u     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void b(com.tkay.core.common.f.aj r9, int r10) {
            r8 = this;
            com.tkay.core.common.m.d r5 = new com.tkay.core.common.m.d
            r5.<init>(r9, r10)
            java.lang.String r2 = r5.a()
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r8.G
            r0.put(r2, r5)
            com.tkay.core.common.m.f r0 = r8.L
            r1 = 1
            r0.a(r1, r10)
            com.tkay.core.common.l.b.a r6 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.h$4 r7 = new com.tkay.core.common.h$4
            r0 = r7
            r1 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r6.b(r7)
            return
    }

    private void b(com.tkay.core.common.f.d r2) {
            r1 = this;
            com.tkay.core.common.b.b r0 = r1.l
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    static void b(com.tkay.core.common.h r0) {
            r0.o()
            return
    }

    static void b(com.tkay.core.common.h r0, com.tkay.core.common.f.aj r1) {
            r0.d(r1)
            return
    }

    private void b(com.tkay.core.common.m.d r3) {
            r2 = this;
            java.lang.Boolean r0 = r3.d()
            if (r0 == 0) goto L29
            java.lang.Boolean r0 = r3.d()
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L11
            goto L29
        L11:
            int r0 = r3.f()
            r1 = 2
            if (r0 != r1) goto L19
            return
        L19:
            java.lang.Boolean r3 = r3.d()
            boolean r3 = r3.booleanValue()
            r0 = 1
            if (r3 != r0) goto L29
            int r3 = r2.B
            int r3 = r3 + r0
            r2.B = r3
        L29:
            return
    }

    static java.lang.String c(com.tkay.core.common.h r0) {
            java.lang.String r0 = r0.T
            return r0
    }

    private void c(com.tkay.core.common.f.aj r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r2.D
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.D = r0
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r2.D
            java.lang.String r1 = r3.t()
            r0.put(r1, r3)
            return
    }

    private void c(com.tkay.core.common.f.d r2) {
            r1 = this;
            com.tkay.core.common.b.b r0 = r1.l
            if (r0 == 0) goto L7
            r0.d(r2)
        L7:
            return
    }

    static void c(com.tkay.core.common.h r0, com.tkay.core.common.f.aj r1) {
            r0.a(r1)
            return
    }

    static boolean c(int r1) {
            r0 = 3
            if (r1 == r0) goto L9
            r0 = 5
            if (r1 != r0) goto L7
            goto L9
        L7:
            r1 = 0
            return r1
        L9:
            r1 = 1
            return r1
    }

    private void d(com.tkay.core.common.f.aj r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            double r0 = com.tkay.core.common.l.g.a(r5)
            boolean r2 = r5.j()
            if (r2 == 0) goto L25
            int r2 = r5.c()
            r3 = 1
            if (r2 != r3) goto L25
            r2 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L25
            com.tkay.core.common.f.l r2 = r5.M()
            if (r2 == 0) goto L25
            double r0 = r2.o
        L25:
            com.tkay.core.common.f.aj r2 = r4.Q
            double r2 = com.tkay.core.common.l.g.a(r2)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L31
            r4.Q = r5
        L31:
            return
    }

    static void d(com.tkay.core.common.h r0) {
            r0.r()
            return
    }

    private static boolean d(int r1) {
            r0 = 3
            if (r1 == r0) goto L9
            r0 = 5
            if (r1 != r0) goto L7
            goto L9
        L7:
            r1 = 0
            return r1
        L9:
            r1 = 1
            return r1
    }

    private synchronized void e(int r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 2
            if (r4 == r0) goto Lb
            com.tkay.core.common.m.f r0 = r3.L     // Catch: java.lang.Throwable -> L30
            int r0 = r0.e()     // Catch: java.lang.Throwable -> L30
            goto L11
        Lb:
            com.tkay.core.common.m.f r0 = r3.L     // Catch: java.lang.Throwable -> L30
            int r0 = r0.f()     // Catch: java.lang.Throwable -> L30
        L11:
            if (r0 != 0) goto L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "checkToAddAdSourceToRequestingPool: vail requesting num: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L30
            r1.append(r0)     // Catch: java.lang.Throwable -> L30
            java.lang.String r0 = " | requestFrom: "
            r1.append(r0)     // Catch: java.lang.Throwable -> L30
            r1.append(r4)     // Catch: java.lang.Throwable -> L30
            com.tkay.core.common.m.f r0 = r3.L     // Catch: java.lang.Throwable -> L30
            java.util.List r0 = r0.b(r4)     // Catch: java.lang.Throwable -> L30
            r3.a(r0, r4)     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r3)
            return
        L30:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static void e(com.tkay.core.common.h r0) {
            r0.l()
            return
    }

    private int f(int r2) {
            r1 = this;
            if (r2 <= 0) goto L3
            return r2
        L3:
            int r2 = r1.B
            com.tkay.core.c.d r0 = r1.e
            int r0 = r0.an()
            if (r2 >= r0) goto Lf
            r2 = 5
            return r2
        Lf:
            r2 = 2
            return r2
    }

    private synchronized void j() {
            r3 = this;
            monitor-enter(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = r3.g     // Catch: java.lang.Throwable -> L5f
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = ":filled timeup to check cache."
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()     // Catch: java.lang.Throwable -> L5f
            android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r3.g     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.common.f.a r0 = r0.a(r1, r2)     // Catch: java.lang.Throwable -> L5f
            r1 = 1
            r3.s = r1     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r3.o     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L4e
            if (r0 == 0) goto L4e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r1.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r3.g     // Catch: java.lang.Throwable -> L5f
            r1.append(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = ":filled timeup to check cache exist."
            r1.append(r2)     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.api.TYBaseAdAdapter r1 = r0.e()     // Catch: java.lang.Throwable -> L5f
            if (r1 == 0) goto L43
            com.tkay.core.api.TYBaseAdAdapter r0 = r0.e()     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L5f
            goto L44
        L43:
            r0 = 0
        L44:
            r3.d(r0)     // Catch: java.lang.Throwable -> L5f
            r0 = 9
            r3.b(r0)     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r3)
            return
        L4e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = r3.g     // Catch: java.lang.Throwable -> L5f
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = ":filled timeup to check no cache, do nothing."
            r0.append(r1)     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r3)
            return
        L5f:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private synchronized void k() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.p     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L7
            monitor-exit(r4)
            return
        L7:
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.t     // Catch: java.lang.Throwable -> L77
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L77
            java.util.List<com.tkay.core.common.f.aj> r1 = r4.t     // Catch: java.lang.Throwable -> L74
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L74
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L28
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L74
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L10
            boolean r3 = r2.j()     // Catch: java.lang.Throwable -> L74
            if (r3 == 0) goto L10
            r4.a(r2)     // Catch: java.lang.Throwable -> L74
            goto L10
        L28:
            java.util.List<com.tkay.core.common.f.aj> r1 = r4.t     // Catch: java.lang.Throwable -> L74
            r1.clear()     // Catch: java.lang.Throwable -> L74
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L74
            java.util.List<com.tkay.core.common.m.e> r0 = r4.w     // Catch: java.lang.Throwable -> L77
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L77
            java.util.List<com.tkay.core.common.m.e> r1 = r4.w     // Catch: java.lang.Throwable -> L71
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L71
        L37:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L5d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L71
            com.tkay.core.common.m.e r2 = (com.tkay.core.common.m.e) r2     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L37
            com.tkay.core.common.f.aj r3 = r2.a()     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L37
            com.tkay.core.common.f.aj r3 = r2.a()     // Catch: java.lang.Throwable -> L71
            boolean r3 = r3.j()     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L37
            com.tkay.core.common.f.aj r2 = r2.a()     // Catch: java.lang.Throwable -> L71
            r4.a(r2)     // Catch: java.lang.Throwable -> L71
            goto L37
        L5d:
            java.util.List<com.tkay.core.common.m.e> r1 = r4.w     // Catch: java.lang.Throwable -> L71
            r1.clear()     // Catch: java.lang.Throwable -> L71
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.v     // Catch: java.lang.Throwable -> L77
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L77
            java.util.List<com.tkay.core.common.f.aj> r1 = r4.v     // Catch: java.lang.Throwable -> L6e
            r1.clear()     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r4)
            return
        L6e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L77
            throw r1     // Catch: java.lang.Throwable -> L77
        L71:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L77
            throw r1     // Catch: java.lang.Throwable -> L77
        L74:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L77
            throw r1     // Catch: java.lang.Throwable -> L77
        L77:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private synchronized void l() {
            r9 = this;
            monitor-enter(r9)
            com.tkay.core.common.m.f r0 = r9.L     // Catch: java.lang.Throwable -> Lb8
            r1 = 0
            double r2 = r0.a(r1)     // Catch: java.lang.Throwable -> Lb8
            double r4 = r9.s()     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = "checkWaterfallStatus: vail requesting num: "
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.common.m.f r6 = r9.L     // Catch: java.lang.Throwable -> Lb8
            int r6 = r6.d()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = "checkWaterfallStatus:isFinishBidding:"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Lb8
            boolean r6 = r9.m     // Catch: java.lang.Throwable -> Lb8
            r0.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = "checkWaterfallStatus:currentCacheNum >= mStrategy.getCachedOffersNum():"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Lb8
            int r6 = r9.B     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.c.d r7 = r9.e     // Catch: java.lang.Throwable -> Lb8
            int r7 = r7.an()     // Catch: java.lang.Throwable -> Lb8
            r8 = 1
            if (r6 < r7) goto L3c
            r6 = r8
            goto L3d
        L3c:
            r6 = r1
        L3d:
            r0.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = "checkWaterfallStatus:getCacheLowestPrice() > getWaitingResponseMaxPrice():"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Lb8
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L4c
            r1 = r8
        L4c:
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = "checkWaterfallStatus:requestHasShow:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.common.m.h r1 = r9.K     // Catch: java.lang.Throwable -> Lb8
            boolean r1 = r1.c()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = "checkWaterfallStatus:hasLongTimeout:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.common.m.h r1 = r9.K     // Catch: java.lang.Throwable -> Lb8
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
            boolean r0 = r9.m     // Catch: java.lang.Throwable -> Lb8
            if (r0 == 0) goto L7f
            int r0 = r9.B     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.c.d r1 = r9.e     // Catch: java.lang.Throwable -> Lb8
            int r1 = r1.an()     // Catch: java.lang.Throwable -> Lb8
            if (r0 < r1) goto L7f
            if (r2 >= 0) goto L8f
        L7f:
            com.tkay.core.common.m.h r0 = r9.K     // Catch: java.lang.Throwable -> Lb8
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> Lb8
            if (r0 != 0) goto L8f
            com.tkay.core.common.m.h r0 = r9.K     // Catch: java.lang.Throwable -> Lb8
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> Lb8
            if (r0 == 0) goto La6
        L8f:
            r9.p = r8     // Catch: java.lang.Throwable -> Lb8
            r9.k()     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.common.m.f r0 = r9.L     // Catch: java.lang.Throwable -> Lb8
            int r0 = r0.d()     // Catch: java.lang.Throwable -> Lb8
            if (r0 != 0) goto La6
            android.content.Context r0 = r9.a     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = r9.g     // Catch: java.lang.Throwable -> Lb8
            com.tkay.core.common.m.f.a(r0, r1)     // Catch: java.lang.Throwable -> Lb8
            r9.q()     // Catch: java.lang.Throwable -> Lb8
        La6:
            r9.p()     // Catch: java.lang.Throwable -> Lb8
            boolean r0 = r9.p     // Catch: java.lang.Throwable -> Lb8
            if (r0 != 0) goto Lb3
            boolean r0 = r9.A()     // Catch: java.lang.Throwable -> Lb8
            if (r0 == 0) goto Lb6
        Lb3:
            r9.q()     // Catch: java.lang.Throwable -> Lb8
        Lb6:
            monitor-exit(r9)
            return
        Lb8:
            r0 = move-exception
            monitor-exit(r9)
            throw r0
    }

    private void m() {
            r4 = this;
            com.tkay.core.c.d r0 = r4.e
            long r0 = r0.n()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L32
            com.tkay.core.common.h$2 r0 = new com.tkay.core.common.h$2
            r0.<init>(r4)
            r4.I = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = ": start filled count down."
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r4.I
            com.tkay.core.c.d r2 = r4.e
            long r2 = r2.n()
            r0.a(r1, r2)
            return
        L32:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = ": no filled count down."
            r0.append(r1)
            return
    }

    private java.lang.Runnable n() {
            r1 = this;
            com.tkay.core.common.h$3 r0 = new com.tkay.core.common.h$3
            r0.<init>(r1)
            return r0
    }

    private synchronized void o() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.o     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L4e
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.v     // Catch: java.lang.Throwable -> L50
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L50
            if (r0 <= 0) goto L4e
            r0 = 0
            r3.J = r0     // Catch: java.lang.Throwable -> L50
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.v     // Catch: java.lang.Throwable -> L50
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)     // Catch: java.lang.Throwable -> L50
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "handleDefaultAdSourceRequest: startLoadDefaultAdSource:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = r0.aa()     // Catch: java.lang.Throwable -> L50
            r1.append(r2)     // Catch: java.lang.Throwable -> L50
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.u     // Catch: java.lang.Throwable -> L50
            r1.add(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "handleDefaultAdSourceRequest:start to request: waiting size:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L50
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.v     // Catch: java.lang.Throwable -> L50
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L50
            r1.append(r2)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "; requesting size:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L50
            com.tkay.core.common.m.f r2 = r3.L     // Catch: java.lang.Throwable -> L50
            int r2 = r2.f()     // Catch: java.lang.Throwable -> L50
            r1.append(r2)     // Catch: java.lang.Throwable -> L50
            r1 = 2
            r3.b(r0, r1)     // Catch: java.lang.Throwable -> L50
        L4e:
            monitor-exit(r3)
            return
        L50:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private synchronized void p() {
            r7 = this;
            monitor-enter(r7)
            com.tkay.core.common.m.h r0 = r7.K     // Catch: java.lang.Throwable -> Le4
            boolean r0 = r0.g()     // Catch: java.lang.Throwable -> Le4
            if (r0 != 0) goto Lc4
            com.tkay.core.common.m.h r0 = r7.K     // Catch: java.lang.Throwable -> Le4
            boolean r0 = r0.e()     // Catch: java.lang.Throwable -> Le4
            if (r0 != 0) goto L13
            goto Lc4
        L13:
            com.tkay.core.common.m.h r0 = r7.K     // Catch: java.lang.Throwable -> Le4
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> Le4
            if (r0 == 0) goto L1d
            monitor-exit(r7)
            return
        L1d:
            r0 = 0
            boolean r1 = r7.m     // Catch: java.lang.Throwable -> Le4
            if (r1 == 0) goto L9e
            com.tkay.core.common.f.aj r1 = r7.F     // Catch: java.lang.Throwable -> Le4
            if (r1 == 0) goto L9e
            com.tkay.core.common.f.aj r1 = r7.F     // Catch: java.lang.Throwable -> Le4
            boolean r1 = r1.j()     // Catch: java.lang.Throwable -> Le4
            if (r1 == 0) goto L9e
            com.tkay.core.common.f.aj r0 = r7.F     // Catch: java.lang.Throwable -> Le4
            double r0 = com.tkay.core.common.l.g.a(r0)     // Catch: java.lang.Throwable -> Le4
            java.util.List<com.tkay.core.common.f.aj> r2 = r7.u     // Catch: java.lang.Throwable -> Le4
            monitor-enter(r2)     // Catch: java.lang.Throwable -> Le4
            java.util.List<com.tkay.core.common.f.aj> r3 = r7.u     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L9b
        L3d:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L9b
            if (r4 == 0) goto L62
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L9b
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4     // Catch: java.lang.Throwable -> L9b
            double r5 = com.tkay.core.common.l.g.a(r4)     // Catch: java.lang.Throwable -> L9b
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L3d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = "tryToSendWinNotice(), do not send win: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = r4.aa()     // Catch: java.lang.Throwable -> L9b
            r0.append(r1)     // Catch: java.lang.Throwable -> L9b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L9b
            monitor-exit(r7)
            return
        L62:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le4
            java.util.List<com.tkay.core.common.m.e> r2 = r7.w     // Catch: java.lang.Throwable -> Le4
            monitor-enter(r2)     // Catch: java.lang.Throwable -> Le4
            java.util.List<com.tkay.core.common.m.e> r3 = r7.w     // Catch: java.lang.Throwable -> L98
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L98
        L6c:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L98
            if (r4 == 0) goto L95
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L98
            com.tkay.core.common.m.e r4 = (com.tkay.core.common.m.e) r4     // Catch: java.lang.Throwable -> L98
            com.tkay.core.common.f.aj r4 = r4.a()     // Catch: java.lang.Throwable -> L98
            double r5 = com.tkay.core.common.l.g.a(r4)     // Catch: java.lang.Throwable -> L98
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L6c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98
            java.lang.String r1 = "tryToSendWinNotice(), do not send win: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L98
            java.lang.String r1 = r4.aa()     // Catch: java.lang.Throwable -> L98
            r0.append(r1)     // Catch: java.lang.Throwable -> L98
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L98
            monitor-exit(r7)
            return
        L95:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le4
            r0 = 1
            goto L9e
        L98:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le4
            throw r0     // Catch: java.lang.Throwable -> Le4
        L9b:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le4
            throw r0     // Catch: java.lang.Throwable -> Le4
        L9e:
            if (r0 == 0) goto Lc2
            com.tkay.core.common.f.aj r0 = r7.F     // Catch: java.lang.Throwable -> Le4
            com.tkay.core.common.f.l r0 = r0.M()     // Catch: java.lang.Throwable -> Le4
            if (r0 == 0) goto Lc2
            com.tkay.core.common.m.h r1 = r7.K     // Catch: java.lang.Throwable -> Le4
            r1.h()     // Catch: java.lang.Throwable -> Le4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4
            java.lang.String r2 = "tryToSendWinNotice(), send win notice: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Le4
            com.tkay.core.common.f.aj r2 = r7.F     // Catch: java.lang.Throwable -> Le4
            java.lang.String r2 = r2.aa()     // Catch: java.lang.Throwable -> Le4
            r1.append(r2)     // Catch: java.lang.Throwable -> Le4
            com.tkay.core.common.f.aj r1 = r7.F     // Catch: java.lang.Throwable -> Le4
            r0.a(r1)     // Catch: java.lang.Throwable -> Le4
        Lc2:
            monitor-exit(r7)
            return
        Lc4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4
            java.lang.String r1 = "tryToSendWinNotice(), mHasSendWinNotice: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le4
            com.tkay.core.common.m.h r1 = r7.K     // Catch: java.lang.Throwable -> Le4
            boolean r1 = r1.g()     // Catch: java.lang.Throwable -> Le4
            r0.append(r1)     // Catch: java.lang.Throwable -> Le4
            java.lang.String r1 = ", mHasHBAdSource: "
            r0.append(r1)     // Catch: java.lang.Throwable -> Le4
            com.tkay.core.common.m.h r1 = r7.K     // Catch: java.lang.Throwable -> Le4
            boolean r1 = r1.e()     // Catch: java.lang.Throwable -> Le4
            r0.append(r1)     // Catch: java.lang.Throwable -> Le4
            monitor-exit(r7)
            return
        Le4:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    private synchronized void q() {
            r10 = this;
            monitor-enter(r10)
            com.tkay.core.common.m.h r0 = r10.K     // Catch: java.lang.Throwable -> L4c
            boolean r0 = r0.e()     // Catch: java.lang.Throwable -> L4c
            if (r0 != 0) goto L1b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "tryToSendLossNotice(), mHasHBAdSource: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.m.h r1 = r10.K     // Catch: java.lang.Throwable -> L4c
            boolean r1 = r1.e()     // Catch: java.lang.Throwable -> L4c
            r0.append(r1)     // Catch: java.lang.Throwable -> L4c
            monitor-exit(r10)
            return
        L1b:
            com.tkay.core.common.m.h r0 = r10.K     // Catch: java.lang.Throwable -> L4c
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L4c
            if (r0 == 0) goto L25
            monitor-exit(r10)
            return
        L25:
            java.lang.String r1 = r10.f     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = r10.g     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = r10.d     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.c.d r4 = r10.e     // Catch: java.lang.Throwable -> L4c
            java.lang.String r5 = ""
            r6 = 1
            int r7 = r10.k     // Catch: java.lang.Throwable -> L4c
            int r8 = r10.c     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.j r0 = r10.j     // Catch: java.lang.Throwable -> L4c
            if (r0 == 0) goto L3d
            com.tkay.core.common.j r0 = r10.j     // Catch: java.lang.Throwable -> L4c
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.g     // Catch: java.lang.Throwable -> L4c
            goto L3e
        L3d:
            r0 = 0
        L3e:
            r9 = r0
            com.tkay.core.common.f.d r0 = com.tkay.core.common.l.s.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.m.f r1 = r10.L     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.f.aj r2 = r10.F     // Catch: java.lang.Throwable -> L4c
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L4c
            monitor-exit(r10)
            return
        L4c:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }

    private synchronized void r() {
            r6 = this;
            monitor-enter(r6)
            double r0 = r6.s()     // Catch: java.lang.Throwable -> L61
            double r2 = r6.E     // Catch: java.lang.Throwable -> L61
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L2c
            boolean r2 = r6.m     // Catch: java.lang.Throwable -> L61
            if (r2 != 0) goto L15
            boolean r2 = r6.r     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L1b
        L15:
            double r2 = r6.E     // Catch: java.lang.Throwable -> L61
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L1f
        L1b:
            boolean r0 = r6.s     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5f
        L1f:
            boolean r0 = r6.o     // Catch: java.lang.Throwable -> L61
            if (r0 != 0) goto L27
            r0 = -1
            r6.b(r0)     // Catch: java.lang.Throwable -> L61
        L27:
            r6.w()     // Catch: java.lang.Throwable -> L61
            monitor-exit(r6)
            return
        L2c:
            boolean r0 = r6.m     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5f
            java.lang.Runnable r0 = r6.J     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L4d
            boolean r0 = r6.B()     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L4d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L61
            java.lang.Runnable r1 = r6.J     // Catch: java.lang.Throwable -> L61
            r0.c(r1)     // Catch: java.lang.Throwable -> L61
            java.lang.Runnable r0 = r6.J     // Catch: java.lang.Throwable -> L61
            r0.run()     // Catch: java.lang.Throwable -> L61
            r0 = 0
            r6.J = r0     // Catch: java.lang.Throwable -> L61
            r0 = 1
            goto L4e
        L4d:
            r0 = 0
        L4e:
            if (r0 == 0) goto L52
            monitor-exit(r6)
            return
        L52:
            boolean r0 = r6.A()     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5f
            boolean r0 = r6.o     // Catch: java.lang.Throwable -> L61
            if (r0 != 0) goto L5f
            r6.z()     // Catch: java.lang.Throwable -> L61
        L5f:
            monitor-exit(r6)
            return
        L61:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    private double s() {
            r9 = this;
            com.tkay.core.c.d r0 = r9.e
            int r0 = r0.b()
            r1 = 0
            r2 = 2
            if (r0 != r2) goto L50
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r9.G
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r2 = r9.G     // Catch: java.lang.Throwable -> L4d
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L4d
            r3 = r1
            if (r2 == 0) goto L4b
        L1a:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L4b
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L4d
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L4d
            com.tkay.core.common.m.d r4 = (com.tkay.core.common.m.d) r4     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L1a
            boolean r5 = r4.g()     // Catch: java.lang.Throwable -> L4d
            if (r5 != 0) goto L1a
            com.tkay.core.common.f.aj r4 = r4.h()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L1a
            if (r3 != 0) goto L3e
        L3c:
            r3 = r4
            goto L1a
        L3e:
            double r5 = com.tkay.core.common.l.g.a(r4)     // Catch: java.lang.Throwable -> L4d
            double r7 = com.tkay.core.common.l.g.a(r3)     // Catch: java.lang.Throwable -> L4d
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L1a
            goto L3c
        L4b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            goto L51
        L4d:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L50:
            r3 = r1
        L51:
            java.util.List<com.tkay.core.common.f.aj> r0 = r9.t
            int r0 = r0.size()
            r2 = 0
            if (r0 <= 0) goto L63
            java.util.List<com.tkay.core.common.f.aj> r0 = r9.t
            java.lang.Object r0 = r0.get(r2)
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            goto L64
        L63:
            r0 = r1
        L64:
            java.util.List<com.tkay.core.common.m.e> r4 = r9.w
            monitor-enter(r4)
            java.util.List<com.tkay.core.common.m.e> r5 = r9.w     // Catch: java.lang.Throwable -> L93
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L93
            if (r5 <= 0) goto L7d
            java.util.List<com.tkay.core.common.m.e> r5 = r9.w     // Catch: java.lang.Throwable -> L93
            java.lang.Object r2 = r5.get(r2)     // Catch: java.lang.Throwable -> L93
            com.tkay.core.common.m.e r2 = (com.tkay.core.common.m.e) r2     // Catch: java.lang.Throwable -> L93
            if (r2 == 0) goto L7d
            com.tkay.core.common.f.aj r1 = r2.a()     // Catch: java.lang.Throwable -> L93
        L7d:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L93
            double r4 = com.tkay.core.common.l.g.a(r0)
            double r0 = com.tkay.core.common.l.g.a(r1)
            double r0 = java.lang.Math.max(r4, r0)
            double r2 = com.tkay.core.common.l.g.a(r3)
            double r0 = java.lang.Math.max(r0, r2)
            return r0
        L93:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private synchronized void t() {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.tkay.core.common.f.aj> r0 = r2.v     // Catch: java.lang.Throwable -> L18
            r0.clear()     // Catch: java.lang.Throwable -> L18
            java.lang.Runnable r0 = r2.J     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L16
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L18
            java.lang.Runnable r1 = r2.J     // Catch: java.lang.Throwable -> L18
            r0.c(r1)     // Catch: java.lang.Throwable -> L18
            r0 = 0
            r2.J = r0     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r2)
            return
        L18:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private void u() {
            r1 = this;
            r1.v()
            boolean r0 = r1.P
            if (r0 != 0) goto La
            r1.h()
        La:
            return
    }

    private synchronized boolean v() {
            r4 = this;
            monitor-enter(r4)
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.R     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            if (r0 == 0) goto L3d
            java.util.List<com.tkay.core.common.f.aj> r0 = r4.R     // Catch: java.lang.Throwable -> L3f
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3f
            if (r0 != 0) goto Lf
            goto L3d
        Lf:
            com.tkay.core.common.m.h r0 = r4.K     // Catch: java.lang.Throwable -> L3f
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L3f
            if (r0 == 0) goto L19
            monitor-exit(r4)
            return r1
        L19:
            com.tkay.core.common.m.h r0 = r4.K     // Catch: java.lang.Throwable -> L3f
            r0.f()     // Catch: java.lang.Throwable -> L3f
            r0 = 1
            r4.S = r0     // Catch: java.lang.Throwable -> L3f
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3f
            r2 = 3
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3f
            java.util.List<com.tkay.core.common.f.aj> r2 = r4.R     // Catch: java.lang.Throwable -> L3f
            r1.addAll(r2)     // Catch: java.lang.Throwable -> L3f
            java.util.List<com.tkay.core.common.f.aj> r2 = r4.R     // Catch: java.lang.Throwable -> L3f
            r2.clear()     // Catch: java.lang.Throwable -> L3f
            r2 = 8
            com.tkay.core.common.h$6 r3 = new com.tkay.core.common.h$6     // Catch: java.lang.Throwable -> L3f
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3f
            r4.a(r2, r1, r3)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r4)
            return r0
        L3d:
            monitor-exit(r4)
            return r1
        L3f:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private synchronized void w() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.m     // Catch: java.lang.Throwable -> L36
            if (r0 != 0) goto L7
            monitor-exit(r3)
            return
        L7:
            com.tkay.core.common.m.h r0 = r3.K     // Catch: java.lang.Throwable -> L36
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L11
            monitor-exit(r3)
            return
        L11:
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.H     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L34
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.H     // Catch: java.lang.Throwable -> L36
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L36
            if (r0 != 0) goto L1e
            goto L34
        L1e:
            boolean r0 = r3.q     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L24
            monitor-exit(r3)
            return
        L24:
            r0 = 1
            r3.q = r0     // Catch: java.lang.Throwable -> L36
            r0 = 7
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.H     // Catch: java.lang.Throwable -> L36
            com.tkay.core.common.h$7 r2 = new com.tkay.core.common.h$7     // Catch: java.lang.Throwable -> L36
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L36
            r3.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r3)
            return
        L34:
            monitor-exit(r3)
            return
        L36:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private boolean x() {
            r2 = this;
            java.lang.Runnable r0 = r2.J
            if (r0 == 0) goto L1d
            boolean r0 = r2.B()
            if (r0 == 0) goto L1d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.J
            r0.c(r1)
            java.lang.Runnable r0 = r2.J
            r0.run()
            r0 = 0
            r2.J = r0
            r0 = 1
            return r0
        L1d:
            r0 = 0
            return r0
    }

    private void y() {
            r13 = this;
            r0 = 1
            r13.o = r0
            r1 = 0
            r13.n = r1
            java.lang.Runnable r2 = r13.M
            if (r2 == 0) goto L13
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r3 = r13.M
            r2.c(r3)
        L13:
            java.lang.String r4 = r13.f
            java.lang.String r5 = r13.g
            java.lang.String r6 = r13.d
            com.tkay.core.c.d r7 = r13.e
            java.lang.String r8 = r13.x
            int r9 = r7.m()
            int r10 = r13.k
            int r11 = r13.c
            com.tkay.core.common.j r2 = r13.j
            if (r2 == 0) goto L2c
            java.util.Map<java.lang.String, java.lang.Object> r2 = r2.g
            goto L2d
        L2c:
            r2 = 0
        L2d:
            r12 = r2
            com.tkay.core.common.f.d r2 = com.tkay.core.common.l.s.a(r4, r5, r6, r7, r8, r9, r10, r11, r12)
            com.tkay.core.api.AdError r3 = r13.y
            com.tkay.core.common.k.c.a(r2, r3)
            boolean r2 = r13.P
            if (r2 != 0) goto L9f
            com.tkay.core.c.d r2 = r13.e
            int r2 = r2.k()
            r3 = 8
            if (r2 != r0) goto L56
            int r2 = r13.k
            if (r2 == r3) goto L56
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            java.lang.String r4 = r13.g
            boolean r2 = r2.e(r4)
            if (r2 != 0) goto L56
            goto L57
        L56:
            r0 = r1
        L57:
            if (r0 == 0) goto L9a
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r13.g
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.tkay.core.c.d r4 = r13.e
            int r4 = r4.Y()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.tkay.core.common.f r4 = r0.a(r1, r2)
            if (r4 == 0) goto L9f
            com.tkay.core.common.j r0 = r13.j
            if (r0 == 0) goto L9f
            r0.d = r3
            android.content.Context r5 = r13.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.core.c.d r1 = r13.e
            int r1 = r1.Y()
            r0.append(r1)
            java.lang.String r6 = r0.toString()
            java.lang.String r7 = r13.g
            com.tkay.core.common.j r8 = r13.j
            r9 = 0
            r4.a(r5, r6, r7, r8, r9)
            goto L9f
        L9a:
            com.tkay.core.api.AdError r0 = r13.y
            r13.a(r0)
        L9f:
            r13.f()
            return
    }

    private void z() {
            r3 = this;
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()
            android.content.Context r1 = r3.a
            java.lang.String r2 = r3.g
            com.tkay.core.common.f.a r0 = r0.a(r1, r2)
            if (r0 == 0) goto L14
            r0 = 9
            r3.b(r0)
            return
        L14:
            boolean r0 = r3.v()
            if (r0 != 0) goto L1d
            r3.y()
        L1d:
            return
    }

    protected final synchronized void a() {
            r3 = this;
            monitor-enter(r3)
            com.tkay.core.common.m.h r0 = r3.K     // Catch: java.lang.Throwable -> L43
            r0.a()     // Catch: java.lang.Throwable -> L43
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r3.G     // Catch: java.lang.Throwable -> L43
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L43
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L40
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r2 = r3.G     // Catch: java.lang.Throwable -> L40
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            java.util.Set r0 = r1.entrySet()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L43
        L19:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L43
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L43
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L43
            com.tkay.core.common.m.d r1 = (com.tkay.core.common.m.d) r1     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L19
            r1.c()     // Catch: java.lang.Throwable -> L43
            goto L19
        L31:
            boolean r0 = r3.o     // Catch: java.lang.Throwable -> L43
            if (r0 != 0) goto L3b
            r0 = 1
            r3.o = r0     // Catch: java.lang.Throwable -> L43
            r3.z()     // Catch: java.lang.Throwable -> L43
        L3b:
            r3.l()     // Catch: java.lang.Throwable -> L43
            monitor-exit(r3)
            return
        L40:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            throw r1     // Catch: java.lang.Throwable -> L43
        L43:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized void a(double r3, com.tkay.core.common.f.aj r5) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.m.h r0 = r2.K     // Catch: java.lang.Throwable -> L8d
            boolean r0 = r0.g()     // Catch: java.lang.Throwable -> L8d
            if (r0 != 0) goto L16
            if (r5 == 0) goto L16
            boolean r5 = r5.j()     // Catch: java.lang.Throwable -> L8d
            if (r5 == 0) goto L16
            com.tkay.core.common.m.h r5 = r2.K     // Catch: java.lang.Throwable -> L8d
            r5.h()     // Catch: java.lang.Throwable -> L8d
        L16:
            double r0 = r2.O     // Catch: java.lang.Throwable -> L8d
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 <= 0) goto L1e
            r2.O = r3     // Catch: java.lang.Throwable -> L8d
        L1e:
            com.tkay.core.c.d r3 = r2.e     // Catch: java.lang.Throwable -> L8d
            int r3 = r3.Y()     // Catch: java.lang.Throwable -> L8d
            if (r3 == 0) goto L8b
            r4 = 2
            if (r3 == r4) goto L8b
            com.tkay.core.common.m.h r3 = r2.K     // Catch: java.lang.Throwable -> L8d
            r3.d()     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r4 = r2.g     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r5.<init>()     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.c.d r0 = r2.e     // Catch: java.lang.Throwable -> L8d
            int r0 = r0.Y()     // Catch: java.lang.Throwable -> L8d
            r5.append(r0)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.common.f r3 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L8d
            if (r3 == 0) goto L52
            java.lang.String r4 = r2.f     // Catch: java.lang.Throwable -> L8d
            r3.b(r4)     // Catch: java.lang.Throwable -> L8d
            goto L7d
        L52:
            java.lang.String r3 = "AdManage is null--notifyimpression"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = "Id:"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r2.g     // Catch: java.lang.Throwable -> L8d
            r4.append(r5)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = "--format:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.c.d r5 = r2.e     // Catch: java.lang.Throwable -> L8d
            int r5 = r5.Y()     // Catch: java.lang.Throwable -> L8d
            r4.append(r5)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r5.q()     // Catch: java.lang.Throwable -> L8d
            com.tkay.core.common.k.c.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L8d
        L7d:
            boolean r3 = r2.o     // Catch: java.lang.Throwable -> L8d
            if (r3 != 0) goto L86
            r3 = 10
            r2.b(r3)     // Catch: java.lang.Throwable -> L8d
        L86:
            r2.l()     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r2)
            return
        L8b:
            monitor-exit(r2)
            return
        L8d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void a(com.tkay.core.api.AdError r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "placementId:"
            r0.<init>(r1)
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = ";result_callback:fail;loadType:"
            r0.append(r1)
            int r1 = r4.k
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Mediation"
            com.tkay.core.common.l.n.a(r1, r0)
            android.content.Context r0 = r4.a
            com.tkay.core.common.w r0 = com.tkay.core.common.w.a(r0)
            java.lang.String r1 = r4.g
            java.lang.String r2 = r4.f
            r3 = 0
            r0.a(r1, r2, r3)
            com.tkay.core.common.j r0 = r4.j
            if (r0 == 0) goto L46
            com.tkay.core.common.b.a r0 = r0.f
            if (r0 == 0) goto L46
            com.tkay.core.common.j r0 = r4.j
            com.tkay.core.common.b.a r0 = r0.f
            r0.onAdLoadFail(r5)
            com.tkay.core.common.j r5 = r4.j
            r0 = 0
            r5.f = r0
        L46:
            return
    }

    public abstract void a(com.tkay.core.api.TYBaseAdAdapter r1);

    public final void a(com.tkay.core.common.b.b r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(com.tkay.core.common.j r1) {
            r0 = this;
            r0.j = r1
            return
    }

    protected final void a(com.tkay.core.common.m.g r2) {
            r1 = this;
            com.tkay.core.common.m.f r0 = new com.tkay.core.common.m.f
            r0.<init>(r2)
            r1.L = r0
            java.util.List r0 = r0.a()
            r1.t = r0
            com.tkay.core.common.m.f r0 = r1.L
            java.util.List r0 = r0.b()
            r1.u = r0
            boolean r0 = r2.e
            r1.m = r0
            java.lang.String r0 = r2.b
            r1.f = r0
            java.lang.String r0 = r2.a
            r1.g = r0
            com.tkay.core.c.d r0 = r2.c
            r1.e = r0
            int r0 = r2.f
            r1.c = r0
            java.util.List<com.tkay.core.common.f.aj> r2 = r2.d
            java.lang.String r2 = com.tkay.core.common.m.f.a(r2)
            r1.x = r2
            return
    }

    public final synchronized void a(java.lang.String r12, com.tkay.core.api.TYBaseAdAdapter r13, java.util.List<? extends com.tkay.core.api.BaseAd> r14) {
            r11 = this;
            monitor-enter(r11)
            if (r13 == 0) goto La
            com.tkay.core.common.f.d r0 = r13.getTrackingInfo()     // Catch: java.lang.Throwable -> Lc4
            r0.x()     // Catch: java.lang.Throwable -> Lc4
        La:
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r0 = r11.G     // Catch: java.lang.Throwable -> Lc4
            java.lang.Object r12 = r0.remove(r12)     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.m.d r12 = (com.tkay.core.common.m.d) r12     // Catch: java.lang.Throwable -> Lc4
            if (r12 != 0) goto L16
            monitor-exit(r11)
            return
        L16:
            com.tkay.core.common.f.d r0 = r13.getTrackingInfo()     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.f.aj r1 = r13.getUnitGroupInfo()     // Catch: java.lang.Throwable -> Lc4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r3 = "[Enter] onAdLoaded(): "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r3 = r1.aa()     // Catch: java.lang.Throwable -> Lc4
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc4
            r11.b(r1)     // Catch: java.lang.Throwable -> Lc4
            r11.t()     // Catch: java.lang.Throwable -> Lc4
            r11.a(r12, r13, r1, r0)     // Catch: java.lang.Throwable -> Lc4
            long r2 = r1.B()     // Catch: java.lang.Throwable -> Lc4
            r4 = -1
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L4c
            long r2 = r0.J()     // Catch: java.lang.Throwable -> Lc4
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L4c
            com.tkay.core.common.k.c.a(r0)     // Catch: java.lang.Throwable -> Lc4
        L4c:
            com.tkay.core.common.f.d r2 = r13.getTrackingInfo()     // Catch: java.lang.Throwable -> Lc4
            r11.c(r2)     // Catch: java.lang.Throwable -> Lc4
            android.content.Context r2 = r11.a     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.a(r2)     // Catch: java.lang.Throwable -> Lc4
            r3 = 2
            r2.a(r3, r0)     // Catch: java.lang.Throwable -> Lc4
            long r9 = r1.p()     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.a r4 = com.tkay.core.common.a.a()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r5 = r11.g     // Catch: java.lang.Throwable -> Lc4
            int r6 = r0.z()     // Catch: java.lang.Throwable -> Lc4
            r7 = r13
            r8 = r14
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r14 = com.tkay.core.common.b.f.i.b     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = com.tkay.core.common.b.f.i.l     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r14, r2, r3)     // Catch: java.lang.Throwable -> Lc4
            boolean r14 = r11.P     // Catch: java.lang.Throwable -> Lc4
            if (r14 != 0) goto Lbf
            com.tkay.core.common.m.h r14 = r11.K     // Catch: java.lang.Throwable -> Lc4
            boolean r14 = r14.c()     // Catch: java.lang.Throwable -> Lc4
            if (r14 != 0) goto Lbf
            com.tkay.core.common.v r14 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r0 = r11.g     // Catch: java.lang.Throwable -> Lc4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r2.<init>()     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.c.d r3 = r11.e     // Catch: java.lang.Throwable -> Lc4
            int r3 = r3.Y()     // Catch: java.lang.Throwable -> Lc4
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.f r4 = r14.a(r0, r2)     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto Lbf
            com.tkay.core.c.d r14 = r11.e     // Catch: java.lang.Throwable -> Lc4
            int r14 = r14.U()     // Catch: java.lang.Throwable -> Lc4
            if (r14 <= 0) goto Lbf
            java.lang.String r8 = r11.f     // Catch: java.lang.Throwable -> Lc4
            double r6 = com.tkay.core.common.l.g.a(r1)     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.b.m r14 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lc4
            com.tkay.core.common.f$4 r0 = new com.tkay.core.common.f$4     // Catch: java.lang.Throwable -> Lc4
            r3 = r0
            r5 = r13
            r3.<init>(r4, r5, r6, r8)     // Catch: java.lang.Throwable -> Lc4
            r14.a(r0)     // Catch: java.lang.Throwable -> Lc4
        Lbf:
            r11.a(r12)     // Catch: java.lang.Throwable -> Lc4
            monitor-exit(r11)
            return
        Lc4:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    protected synchronized void a(java.lang.String r9, com.tkay.core.common.m.a r10) {
            r8 = this;
            monitor-enter(r8)
            com.tkay.core.common.f.d r0 = r10.d     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.f.aj r1 = r10.e     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.api.AdError r2 = r10.b     // Catch: java.lang.Throwable -> L5b
            long r3 = r10.c     // Catch: java.lang.Throwable -> L5b
            java.lang.String r5 = r0.x()     // Catch: java.lang.Throwable -> L5b
            java.util.Map<java.lang.String, com.tkay.core.common.m.d> r6 = r8.G     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r9 = r6.remove(r9)     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.m.d r9 = (com.tkay.core.common.m.d) r9     // Catch: java.lang.Throwable -> L5b
            if (r9 != 0) goto L19
            monitor-exit(r8)
            return
        L19:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            java.lang.String r7 = "[Enter] onAdError(): "
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r7 = r1.aa()     // Catch: java.lang.Throwable -> L5b
            r6.append(r7)     // Catch: java.lang.Throwable -> L5b
            r8.b(r1)     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.api.AdError r1 = r8.y     // Catch: java.lang.Throwable -> L5b
            int r6 = r0.H()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r7 = r0.T()     // Catch: java.lang.Throwable -> L5b
            r1.putNetworkErrorMsg(r5, r6, r7, r2)     // Catch: java.lang.Throwable -> L5b
            int r10 = r10.a     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.k.c.a(r0, r10, r2, r3)     // Catch: java.lang.Throwable -> L5b
            r5 = 0
            int r10 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r10 <= 0) goto L56
            com.tkay.core.common.b.b r10 = r8.l     // Catch: java.lang.Throwable -> L5b
            if (r10 == 0) goto L4b
            com.tkay.core.common.b.b r10 = r8.l     // Catch: java.lang.Throwable -> L5b
            r10.b(r0, r2)     // Catch: java.lang.Throwable -> L5b
        L4b:
            java.lang.String r10 = com.tkay.core.common.b.f.i.b     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = com.tkay.core.common.b.f.i.m     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r2.printStackTrace()     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.l.g.a(r0, r10, r1, r2)     // Catch: java.lang.Throwable -> L5b
        L56:
            r8.a(r9)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r8)
            return
        L5b:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final void a(java.util.List<com.tkay.core.common.f.aj> r13, java.util.List<com.tkay.core.common.f.aj> r14, java.util.List<com.tkay.core.common.f.aj> r15) {
            r12 = this;
            java.lang.Object r0 = r12.C
            monitor-enter(r0)
            if (r14 == 0) goto L36
            java.util.Iterator r14 = r14.iterator()     // Catch: java.lang.Throwable -> L33
        L9:
            boolean r1 = r14.hasNext()     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L36
            java.lang.Object r1 = r14.next()     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "4001"
            java.lang.String r3 = ""
            java.lang.String r4 = r1.z()     // Catch: java.lang.Throwable -> L33
            com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r3, r4)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.api.AdError r3 = r12.y     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = r1.t()     // Catch: java.lang.Throwable -> L33
            int r5 = r1.c()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r1.d()     // Catch: java.lang.Throwable -> L33
            r3.putNetworkErrorMsg(r4, r5, r1, r2)     // Catch: java.lang.Throwable -> L33
            goto L9
        L33:
            r13 = move-exception
            goto L104
        L36:
            if (r15 == 0) goto L3d
            java.util.List<com.tkay.core.common.f.aj> r14 = r12.H     // Catch: java.lang.Throwable -> L33
            r14.addAll(r15)     // Catch: java.lang.Throwable -> L33
        L3d:
            if (r13 == 0) goto L102
            int r14 = r13.size()     // Catch: java.lang.Throwable -> L33
            if (r14 != 0) goto L47
            goto L102
        L47:
            com.tkay.core.common.m.h r14 = r12.K     // Catch: java.lang.Throwable -> L33
            r14.f()     // Catch: java.lang.Throwable -> L33
            r14 = 0
            java.lang.Object r15 = r13.get(r14)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.f.aj r15 = (com.tkay.core.common.f.aj) r15     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.m.h r1 = r12.K     // Catch: java.lang.Throwable -> L33
            boolean r1 = com.tkay.core.common.m.f.a(r15, r1)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.m.f r2 = r12.L     // Catch: java.lang.Throwable -> L33
            boolean r2 = r2.c(r15)     // Catch: java.lang.Throwable -> L33
            r3 = 0
            if (r1 != 0) goto L64
            if (r2 == 0) goto Lc9
        L64:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            java.lang.String r5 = "isAdvanceRequest: "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L33
            r4.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r5 = ", cutInLine: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L33
            r4.append(r2)     // Catch: java.lang.Throwable -> L33
            boolean r4 = r12.o     // Catch: java.lang.Throwable -> L33
            if (r4 != 0) goto L7e
            java.lang.String r4 = "1"
        L7c:
            r10 = r4
            goto L88
        L7e:
            boolean r4 = r12.n     // Catch: java.lang.Throwable -> L33
            if (r4 == 0) goto L85
            java.lang.String r4 = "2"
            goto L7c
        L85:
            java.lang.String r4 = "3"
            goto L7c
        L88:
            java.lang.String r4 = "1"
            if (r1 == 0) goto L90
            java.lang.String r1 = "1"
        L8e:
            r11 = r1
            goto L96
        L90:
            if (r2 == 0) goto L95
            java.lang.String r1 = "2"
            goto L8e
        L95:
            r11 = r4
        L96:
            com.tkay.core.common.f.d r5 = r12.i     // Catch: java.lang.Throwable -> L33
            int r6 = r15.c()     // Catch: java.lang.Throwable -> L33
            java.lang.String r7 = r15.t()     // Catch: java.lang.Throwable -> L33
            double r8 = com.tkay.core.common.l.g.a(r15)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.k.c.a(r5, r6, r7, r8, r10, r11)     // Catch: java.lang.Throwable -> L33
            boolean r1 = r15.Z()     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto Laf
            r12.N = r15     // Catch: java.lang.Throwable -> L33
        Laf:
            com.tkay.core.common.m.f r1 = r12.L     // Catch: java.lang.Throwable -> L33
            r1.a(r15)     // Catch: java.lang.Throwable -> L33
            r13.remove(r14)     // Catch: java.lang.Throwable -> L33
            java.util.List<com.tkay.core.common.f.aj> r14 = r12.u     // Catch: java.lang.Throwable -> L33
            r14.add(r15)     // Catch: java.lang.Throwable -> L33
            android.content.Context r14 = r12.a     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r12.g     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = r12.f     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.m.f.a(r14, r1, r2, r3, r15)     // Catch: java.lang.Throwable -> L33
            r14 = 3
            r12.b(r15, r14)     // Catch: java.lang.Throwable -> L33
        Lc9:
            java.util.Iterator r13 = r13.iterator()     // Catch: java.lang.Throwable -> L33
        Lcd:
            boolean r14 = r13.hasNext()     // Catch: java.lang.Throwable -> L33
            if (r14 == 0) goto L100
            java.lang.Object r14 = r13.next()     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.f.aj r14 = (com.tkay.core.common.f.aj) r14     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.m.f r15 = r12.L     // Catch: java.lang.Throwable -> L33
            r15.a(r14)     // Catch: java.lang.Throwable -> L33
            android.content.Context r15 = r12.a     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r12.g     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = r12.f     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.m.f.a(r15, r1, r2, r3, r14)     // Catch: java.lang.Throwable -> L33
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r15 = r12.D     // Catch: java.lang.Throwable -> L33
            if (r15 != 0) goto Lf2
            java.util.concurrent.ConcurrentHashMap r15 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L33
            r15.<init>()     // Catch: java.lang.Throwable -> L33
            r12.D = r15     // Catch: java.lang.Throwable -> L33
        Lf2:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r15 = r12.D     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r14.t()     // Catch: java.lang.Throwable -> L33
            r15.put(r1, r14)     // Catch: java.lang.Throwable -> L33
            r15 = 1
            r12.a(r14, r15)     // Catch: java.lang.Throwable -> L33
            goto Lcd
        L100:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return
        L102:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return
        L104:
            monitor-exit(r0)
            throw r13
    }

    protected final void b() {
            r7 = this;
            com.tkay.core.common.m.f r0 = r7.L
            java.util.List r0 = r0.c()
            r7.v = r0
            r1 = 0
            if (r0 == 0) goto L2d
            int r0 = r0.size()
            if (r0 <= 0) goto L2d
            com.tkay.core.c.d r0 = r7.e
            long r3 = r0.p()
            java.util.List<com.tkay.core.common.f.aj> r0 = r7.t
            int r0 = r0.size()
            if (r0 != 0) goto L25
            boolean r0 = r7.m
            if (r0 == 0) goto L25
            r3 = r1
        L25:
            com.tkay.core.common.h$3 r0 = new com.tkay.core.common.h$3
            r0.<init>(r7)
            r7.J = r0
            goto L2f
        L2d:
            r3 = 1000(0x3e8, double:4.94E-321)
        L2f:
            long r5 = android.os.SystemClock.elapsedRealtime()
            r7.z = r5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = r7.g
            r0.append(r5)
            java.lang.String r5 = ": start waterfall."
            r0.append(r5)
            com.tkay.core.c.d r0 = r7.e
            long r5 = r0.n()
            int r0 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r0 <= 0) goto L74
            com.tkay.core.common.h$2 r0 = new com.tkay.core.common.h$2
            r0.<init>(r7)
            r7.I = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.g
            r0.append(r1)
            java.lang.String r1 = ": start filled count down."
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r7.I
            com.tkay.core.c.d r2 = r7.e
            long r5 = r2.n()
            r0.a(r1, r5)
            goto L83
        L74:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.g
            r0.append(r1)
            java.lang.String r1 = ": no filled count down."
            r0.append(r1)
        L83:
            com.tkay.core.c.d r0 = r7.e
            long r0 = r0.S()
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r5 = r7.M
            r2.a(r5, r0)
            java.util.List<com.tkay.core.common.f.aj> r0 = r7.v
            int r0 = r0.size()
            if (r0 != 0) goto La9
            java.util.List<com.tkay.core.common.f.aj> r0 = r7.t
            int r0 = r0.size()
            if (r0 != 0) goto La9
            boolean r0 = r7.m
            if (r0 == 0) goto La9
            r7.v()
        La9:
            com.tkay.core.common.m.f r0 = r7.L
            java.util.List r0 = r0.i()
            r1 = 1
            r7.a(r0, r1)
            java.lang.Runnable r0 = r7.J
            if (r0 == 0) goto Lc0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r7.J
            r0.a(r1, r3)
        Lc0:
            return
    }

    public final void b(int r18) {
            r17 = this;
            r0 = r17
            r1 = r18
            java.lang.Runnable r2 = r0.I
            r3 = 0
            if (r2 == 0) goto L23
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = r0.g
            r2.append(r4)
            java.lang.String r4 = ":remove filled countdown."
            r2.append(r4)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r4 = r0.I
            r2.c(r4)
            r0.I = r3
        L23:
            r2 = 5
            r4 = 10
            r5 = 1
            if (r1 == r2) goto L31
            r2 = 9
            if (r1 == r2) goto L31
            if (r1 == r4) goto L31
            r2 = 0
            goto L32
        L31:
            r2 = r5
        L32:
            r0.o = r5
            r0.n = r5
            java.lang.Runnable r6 = r0.M
            if (r6 == 0) goto L43
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r7 = r0.M
            r6.c(r7)
        L43:
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r8 = r0.z
            long r6 = r6 - r8
            java.lang.String r8 = r0.f
            java.lang.String r9 = r0.g
            java.lang.String r10 = r0.d
            com.tkay.core.c.d r11 = r0.e
            java.lang.String r12 = r0.x
            int r13 = r11.m()
            int r14 = r0.k
            int r15 = r0.c
            com.tkay.core.common.j r3 = r0.j
            if (r3 == 0) goto L65
            java.util.Map<java.lang.String, java.lang.Object> r3 = r3.g
            r16 = r3
            goto L67
        L65:
            r16 = 0
        L67:
            com.tkay.core.common.f.d r3 = com.tkay.core.common.l.s.a(r8, r9, r10, r11, r12, r13, r14, r15, r16)
            r3.a(r5)
            r3.d(r6)
            if (r2 == 0) goto L76
            r3.z(r1)
        L76:
            android.content.Context r2 = r0.a
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.a(r2)
            r5 = 12
            r2.a(r5, r3)
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            java.lang.String r3 = r0.g
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            com.tkay.core.c.d r6 = r0.e
            int r6 = r6.Y()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.tkay.core.common.f r2 = r2.a(r3, r5)
            if (r2 == 0) goto Laa
            if (r1 == r4) goto Laa
            com.tkay.core.c.d r1 = r0.e
            java.lang.String r1 = r1.V()
            r2.a(r1)
        Laa:
            android.content.Context r1 = r0.a
            java.lang.String r2 = r0.g
            com.tkay.core.common.m.f.a(r1, r2)
            r17.u()
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.o
            if (r0 != 0) goto L1b
            boolean r0 = r1.m
            if (r0 == 0) goto L19
            java.util.List<com.tkay.core.common.f.aj> r0 = r1.t
            int r0 = r0.size()
            if (r0 != 0) goto L19
            com.tkay.core.common.m.f r0 = r1.L
            int r0 = r0.d()
            if (r0 != 0) goto L19
            goto L1b
        L19:
            r0 = 0
            return r0
        L1b:
            r0 = 1
            return r0
    }

    public final void d() {
            r1 = this;
            r0 = 1
            r1.r = r0
            r1.r()
            return
    }

    public final void e() {
            r2 = this;
            java.lang.Object r0 = r2.C
            monitor-enter(r0)
            r1 = 1
            r2.m = r1     // Catch: java.lang.Throwable -> L10
            r2.r = r1     // Catch: java.lang.Throwable -> L10
            r2.r()     // Catch: java.lang.Throwable -> L10
            r2.l()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void f() {
            r4 = this;
            r0 = 1
            r4.P = r0
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r4.g
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.tkay.core.c.d r3 = r4.e
            int r3 = r3.Y()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tkay.core.common.f r0 = r0.a(r1, r2)
            if (r0 == 0) goto L27
            java.lang.String r1 = r4.f
            r0.b(r1)
            return
        L27:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Id:"
            r0.<init>(r1)
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = "--format:"
            r0.append(r1)
            com.tkay.core.c.d r1 = r4.e
            int r1 = r1.Y()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.q()
            java.lang.String r2 = "AdManage is null--notifycancel"
            com.tkay.core.common.k.c.a(r2, r0, r1)
            return
    }

    public void g() {
            r2 = this;
            java.lang.Runnable r0 = r2.M
            if (r0 == 0) goto Ld
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.M
            r0.c(r1)
        Ld:
            return
    }

    public void h() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "placementId:"
            r0.<init>(r1)
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = ";result_callback:success;loadType:"
            r0.append(r1)
            int r1 = r4.k
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Mediation"
            com.tkay.core.common.l.n.a(r1, r0)
            android.content.Context r0 = r4.a
            com.tkay.core.common.w r0 = com.tkay.core.common.w.a(r0)
            java.lang.String r1 = r4.g
            java.lang.String r2 = r4.f
            r3 = 1
            r0.a(r1, r2, r3)
            com.tkay.core.common.j r0 = r4.j
            if (r0 == 0) goto L46
            com.tkay.core.common.b.a r0 = r0.f
            if (r0 == 0) goto L46
            com.tkay.core.common.j r0 = r4.j
            com.tkay.core.common.b.a r0 = r0.f
            r0.onAdLoaded()
            com.tkay.core.common.j r0 = r4.j
            r1 = 0
            r0.f = r1
        L46:
            return
    }

    public final void i() {
            r8 = this;
            java.util.List<com.tkay.core.common.m.e> r0 = r8.w
            monitor-enter(r0)
            java.util.List<com.tkay.core.common.m.e> r1 = r8.w     // Catch: java.lang.Throwable -> L9e
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L9e
            if (r1 <= 0) goto L39
            java.util.List<com.tkay.core.common.m.e> r1 = r8.w     // Catch: java.lang.Throwable -> L9e
            r2 = 0
            java.lang.Object r1 = r1.remove(r2)     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.common.m.e r1 = (com.tkay.core.common.m.e) r1     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.common.f.aj r1 = r1.a()     // Catch: java.lang.Throwable -> L9e
            boolean r2 = r8.o     // Catch: java.lang.Throwable -> L9e
            if (r2 == 0) goto L30
            int r2 = r8.B     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.c.d r3 = r8.e     // Catch: java.lang.Throwable -> L9e
            int r3 = r3.an()     // Catch: java.lang.Throwable -> L9e
            if (r2 < r3) goto L30
            double r2 = com.tkay.core.common.l.g.a(r1)     // Catch: java.lang.Throwable -> L9e
            double r4 = r8.E     // Catch: java.lang.Throwable -> L9e
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L39
        L30:
            java.util.List<com.tkay.core.common.f.aj> r2 = r8.u     // Catch: java.lang.Throwable -> L9e
            r2.add(r1)     // Catch: java.lang.Throwable -> L9e
            r2 = 4
            r8.b(r1, r2)     // Catch: java.lang.Throwable -> L9e
        L39:
            java.util.List<com.tkay.core.common.m.e> r1 = r8.w     // Catch: java.lang.Throwable -> L9e
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L9e
            if (r1 <= 0) goto L94
            java.util.List<com.tkay.core.common.m.e> r1 = r8.w     // Catch: java.lang.Throwable -> L9e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L9e
        L47:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L9e
            if (r2 == 0) goto L94
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.common.m.e r2 = (com.tkay.core.common.m.e) r2     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.common.f.aj r3 = r2.a()     // Catch: java.lang.Throwable -> L9e
            boolean r4 = r8.o     // Catch: java.lang.Throwable -> L9e
            if (r4 == 0) goto L6f
            int r4 = r8.B     // Catch: java.lang.Throwable -> L9e
            com.tkay.core.c.d r5 = r8.e     // Catch: java.lang.Throwable -> L9e
            int r5 = r5.an()     // Catch: java.lang.Throwable -> L9e
            if (r4 < r5) goto L6f
            double r4 = com.tkay.core.common.l.g.a(r3)     // Catch: java.lang.Throwable -> L9e
            double r6 = r8.E     // Catch: java.lang.Throwable -> L9e
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L47
        L6f:
            int r2 = r2.b()     // Catch: java.lang.Throwable -> L9e
            r4 = 1
            if (r2 == r4) goto L8d
            r4 = 2
            if (r2 == r4) goto L86
            r4 = 3
            if (r2 == r4) goto L7d
            goto L47
        L7d:
            java.util.List<com.tkay.core.common.f.aj> r2 = r8.u     // Catch: java.lang.Throwable -> L9e
            r2.add(r3)     // Catch: java.lang.Throwable -> L9e
            r8.b(r3, r4)     // Catch: java.lang.Throwable -> L9e
            goto L47
        L86:
            r8.a(r3, r4)     // Catch: java.lang.Throwable -> L9e
            r8.e(r2)     // Catch: java.lang.Throwable -> L9e
            goto L47
        L8d:
            r8.a(r3, r4)     // Catch: java.lang.Throwable -> L9e
            r8.e(r2)     // Catch: java.lang.Throwable -> L9e
            goto L47
        L94:
            java.util.List<com.tkay.core.common.m.e> r1 = r8.w     // Catch: java.lang.Throwable -> L9e
            r1.clear()     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9e
            r8.l()
            return
        L9e:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
