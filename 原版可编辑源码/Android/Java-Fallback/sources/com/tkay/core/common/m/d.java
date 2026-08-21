package com.tkay.core.common.m;

public class d {
    public static final java.lang.String a = null;
    java.lang.String b;
    com.tkay.core.common.f.aj c;
    com.tkay.core.common.f.d d;
    java.lang.String e;
    int f;
    com.tkay.core.api.TYBaseAdAdapter g;
    com.tkay.core.common.m.b h;
    boolean i;
    boolean j;
    long k;
    long l;
    java.lang.Runnable m;
    java.lang.Runnable n;
    com.tkay.core.common.m.c o;
    java.lang.Boolean p;
    int q;
    java.lang.String r;
    boolean s;

    final class 1 implements java.lang.Runnable {
        final com.tkay.core.api.TYBaseAdAdapter a;
        final com.tkay.core.common.f.aj b;
        final java.util.Map c;
        final com.tkay.core.common.m.d d;

        1(com.tkay.core.common.m.d r1, com.tkay.core.api.TYBaseAdAdapter r2, com.tkay.core.common.f.aj r3, java.util.Map r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r11 = this;
                com.tkay.core.common.m.d r0 = r11.d
                com.tkay.core.common.m.b r0 = r0.h
                if (r0 == 0) goto Lf
                com.tkay.core.common.m.d r0 = r11.d
                com.tkay.core.common.m.b r0 = r0.h
                com.tkay.core.api.TYBaseAdAdapter r1 = r11.a
                r0.a(r1)
            Lf:
                com.tkay.core.common.m.d r0 = r11.d
                android.content.Context r0 = com.tkay.core.common.m.d.a(r0)
                java.lang.String r1 = ""
                java.lang.String r2 = "2006"
                r3 = 0
                if (r0 != 0) goto L44
                com.tkay.core.common.m.d r0 = r11.d
                com.tkay.core.common.m.b r0 = r0.h
                if (r0 == 0) goto L43
                com.tkay.core.common.m.a r0 = new com.tkay.core.common.m.a
                r0.<init>()
                r0.a = r3
                long r3 = android.os.SystemClock.elapsedRealtime()
                com.tkay.core.common.m.d r5 = r11.d
                long r5 = r5.k
                long r3 = r3 - r5
                r0.c = r3
                java.lang.String r3 = "Request Context is null! Please check the Ad init Context."
                com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r3)
                r0.b = r1
                com.tkay.core.common.m.d r1 = r11.d
                com.tkay.core.api.TYBaseAdAdapter r2 = r11.a
                r1.a(r2, r0)
            L43:
                return
            L44:
                com.tkay.core.common.m.d r4 = r11.d
                com.tkay.core.common.f.aj r5 = r11.b
                com.tkay.core.api.TYBaseAdAdapter r6 = r11.a
                com.tkay.core.common.m.d.a(r4, r0, r5, r6)
                com.tkay.core.common.m.d r4 = r11.d     // Catch: java.lang.Throwable -> L89
                java.util.Map r4 = com.tkay.core.common.m.d.b(r4)     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d r5 = r11.d     // Catch: java.lang.Throwable -> L89
                com.tkay.core.api.TYBaseAdAdapter r6 = r11.a     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d.a(r5, r6)     // Catch: java.lang.Throwable -> L89
                com.tkay.core.api.TYBaseAdAdapter r5 = r11.a     // Catch: java.lang.Throwable -> L89
                java.util.Map r6 = r11.c     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d$a r7 = new com.tkay.core.common.m.d$a     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d r8 = r11.d     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d r9 = r11.d     // Catch: java.lang.Throwable -> L89
                com.tkay.core.api.TYBaseAdAdapter r10 = r11.a     // Catch: java.lang.Throwable -> L89
                r7.<init>(r8, r9, r10, r3)     // Catch: java.lang.Throwable -> L89
                r5.internalLoad(r0, r6, r4, r7)     // Catch: java.lang.Throwable -> L89
                com.tkay.core.api.TYBaseAdAdapter r0 = r11.a     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()     // Catch: java.lang.Throwable -> L89
                com.tkay.core.api.TYBaseAdAdapter r4 = r11.a     // Catch: java.lang.Throwable -> L89
                java.lang.String r4 = r4.getNetworkPlacementId()     // Catch: java.lang.Throwable -> L89
                r0.g(r4)     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.d r4 = r11.d     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.b r4 = r4.h     // Catch: java.lang.Throwable -> L89
                if (r4 == 0) goto L88
                com.tkay.core.common.m.d r4 = r11.d     // Catch: java.lang.Throwable -> L89
                com.tkay.core.common.m.b r4 = r4.h     // Catch: java.lang.Throwable -> L89
                r4.b(r0)     // Catch: java.lang.Throwable -> L89
            L88:
                return
            L89:
                r0 = move-exception
                com.tkay.core.common.m.a r4 = new com.tkay.core.common.m.a
                r4.<init>()
                r4.a = r3
                long r5 = android.os.SystemClock.elapsedRealtime()
                com.tkay.core.common.m.d r3 = r11.d
                long r7 = r3.k
                long r5 = r5 - r7
                r4.c = r5
                java.lang.String r0 = r0.getMessage()
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r1, r0)
                r4.b = r0
                com.tkay.core.common.m.d r0 = r11.d
                com.tkay.core.api.TYBaseAdAdapter r1 = r11.a
                r0.a(r1, r4)
                return
        }
    }



    public class a implements com.tkay.core.api.TYCustomLoadListener {
        com.tkay.core.api.TYBaseAdAdapter a;
        com.tkay.core.common.m.d b;
        final com.tkay.core.common.m.d c;




        private a(com.tkay.core.common.m.d r1, com.tkay.core.common.m.d r2, com.tkay.core.api.TYBaseAdAdapter r3) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                r0.b = r2
                r0.a = r3
                return
        }

        a(com.tkay.core.common.m.d r1, com.tkay.core.common.m.d r2, com.tkay.core.api.TYBaseAdAdapter r3, byte r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public final void onAdCacheLoaded(com.tkay.core.api.BaseAd... r3) {
                r2 = this;
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.m.d$a$2 r1 = new com.tkay.core.common.m.d$a$2
                r1.<init>(r2, r3)
                r0.a(r1)
                return
        }

        @Override
        public final void onAdDataLoaded() {
                r2 = this;
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.m.d$a$1 r1 = new com.tkay.core.common.m.d$a$1
                r1.<init>(r2)
                r0.a(r1)
                return
        }

        @Override
        public final void onAdLoadError(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.m.d$a$3 r1 = new com.tkay.core.common.m.d$a$3
                r1.<init>(r2, r3, r4)
                r0.a(r1)
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.m.d> r0 = com.tkay.core.common.m.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.m.d.a = r0
            return
    }

    public d(com.tkay.core.common.f.aj r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.q = r2
            java.lang.String r1 = r1.t()
            r0.e = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.e
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            int r2 = r0.hashCode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.r = r1
            return
    }

    static android.content.Context a(com.tkay.core.common.m.d r3) {
            com.tkay.core.common.m.c r3 = r3.o
            java.lang.ref.WeakReference<android.content.Context> r3 = r3.b
            java.lang.Object r3 = r3.get()
            android.content.Context r3 = (android.content.Context) r3
            boolean r0 = r3 instanceof android.app.Activity
            if (r0 != 0) goto L16
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.D()
        L16:
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L2b
            java.lang.String r0 = com.tkay.core.common.m.d.a
            java.lang.String r1 = java.lang.String.valueOf(r3)
            java.lang.String r2 = "requestContext = "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.d(r0, r1)
        L2b:
            return r3
    }

    private void a(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.Runnable r0 = r2.p()
            r2.n = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.n
            r0.a(r1, r3)
            return
    }

    private void a(android.content.Context r4, com.tkay.core.common.f.aj r5, com.tkay.core.api.TYBaseAdAdapter r6) {
            r3 = this;
            boolean r0 = com.tkay.core.c.a.an()
            if (r0 == 0) goto L3a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            int r1 = r5.c()     // Catch: java.lang.Throwable -> L36
            boolean r1 = r0.c(r1)     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L35
            boolean r1 = r0.c()     // Catch: java.lang.Throwable -> L36
            com.tkay.core.common.m.c r2 = r3.o     // Catch: java.lang.Throwable -> L36
            android.content.Context r2 = r2.a     // Catch: java.lang.Throwable -> L36
            boolean r2 = com.tkay.core.api.TYSDK.isEUTraffic(r2)     // Catch: java.lang.Throwable -> L36
            boolean r4 = r6.setUserDataConsent(r4, r1, r2)     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto L35
            int r4 = r5.c()     // Catch: java.lang.Throwable -> L36
            r0.b(r4)     // Catch: java.lang.Throwable -> L36
        L35:
            return
        L36:
            r4 = move-exception
            r4.printStackTrace()
        L3a:
            return
    }

    private void a(com.tkay.core.api.TYBaseAdAdapter r1) {
            r0 = this;
            r0.g = r1
            return
    }

    private void a(com.tkay.core.api.TYBaseAdAdapter r3, com.tkay.core.common.f.aj r4) {
            r2 = this;
            java.util.Map r0 = r2.k()
            com.tkay.core.common.m.d$1 r1 = new com.tkay.core.common.m.d$1
            r1.<init>(r2, r3, r4, r0)
            com.tkay.core.common.m.c r3 = r2.o
            com.tkay.core.c.d r3 = r3.e
            int r3 = r3.Y()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "2"
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 == 0) goto L25
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            r3.a(r1)
            return
        L25:
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            r3.b(r1)
            return
    }

    private static void a(com.tkay.core.api.TYBaseAdAdapter r1, com.tkay.core.common.f.aj r2, com.tkay.core.common.f.d r3, com.tkay.core.api.BaseAd... r4) {
            if (r1 == 0) goto L26
            if (r2 == 0) goto L26
            java.util.Map r1 = r1.getNetworkInfoMap()
            if (r4 == 0) goto L1a
            int r0 = r4.length
            if (r0 <= 0) goto L1a
            r0 = 0
            r4 = r4[r0]
            java.util.Map r0 = r4.getNetworkInfoMap()
            if (r0 == 0) goto L1a
            java.util.Map r1 = r4.getNetworkInfoMap()
        L1a:
            com.tkay.core.common.f.l r2 = r2.M()
            if (r2 == 0) goto L26
            r2.a(r1)
            r2.a(r3)
        L26:
            return
    }

    private synchronized void a(com.tkay.core.api.TYBaseAdAdapter r9, com.tkay.core.api.BaseAd... r10) {
            r8 = this;
            monitor-enter(r8)
            boolean r0 = r8.n()     // Catch: java.lang.Throwable -> L72
            if (r0 == 0) goto L9
            monitor-exit(r8)
            return
        L9:
            com.tkay.core.common.f.aj r0 = r9.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L72
            r1 = 0
            int r3 = r0.l()     // Catch: java.lang.Throwable -> L72
            r4 = 2
            if (r3 != r4) goto L1a
            long r1 = r0.k()     // Catch: java.lang.Throwable -> L72
        L1a:
            com.tkay.core.common.f.d r3 = r8.d     // Catch: java.lang.Throwable -> L72
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L72
            long r6 = r8.k     // Catch: java.lang.Throwable -> L72
            long r4 = r4 - r6
            long r4 = r4 + r1
            r3.d(r4)     // Catch: java.lang.Throwable -> L72
            r8.i()     // Catch: java.lang.Throwable -> L72
            r8.j()     // Catch: java.lang.Throwable -> L72
            r1 = 0
            r8.g = r1     // Catch: java.lang.Throwable -> L72
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L72
            r8.p = r1     // Catch: java.lang.Throwable -> L72
            boolean r1 = r8.i     // Catch: java.lang.Throwable -> L72
            if (r1 == 0) goto L3d
            com.tkay.core.common.f.d r1 = r8.d     // Catch: java.lang.Throwable -> L72
            r2 = 1
            r1.r = r2     // Catch: java.lang.Throwable -> L72
        L3d:
            com.tkay.core.common.f.d r1 = r8.d     // Catch: java.lang.Throwable -> L72
            if (r9 == 0) goto L65
            if (r0 == 0) goto L65
            java.util.Map r2 = r9.getNetworkInfoMap()     // Catch: java.lang.Throwable -> L72
            if (r10 == 0) goto L59
            int r3 = r10.length     // Catch: java.lang.Throwable -> L72
            if (r3 <= 0) goto L59
            r3 = 0
            r3 = r10[r3]     // Catch: java.lang.Throwable -> L72
            java.util.Map r4 = r3.getNetworkInfoMap()     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L59
            java.util.Map r2 = r3.getNetworkInfoMap()     // Catch: java.lang.Throwable -> L72
        L59:
            com.tkay.core.common.f.l r0 = r0.M()     // Catch: java.lang.Throwable -> L72
            if (r0 == 0) goto L65
            r0.a(r2)     // Catch: java.lang.Throwable -> L72
            r0.a(r1)     // Catch: java.lang.Throwable -> L72
        L65:
            com.tkay.core.common.m.b r0 = r8.h     // Catch: java.lang.Throwable -> L72
            if (r0 == 0) goto L70
            com.tkay.core.common.m.b r0 = r8.h     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r8.r     // Catch: java.lang.Throwable -> L72
            r0.a(r1, r9, r10)     // Catch: java.lang.Throwable -> L72
        L70:
            monitor-exit(r8)
            return
        L72:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    static void a(com.tkay.core.common.m.d r2, android.content.Context r3, com.tkay.core.common.f.aj r4, com.tkay.core.api.TYBaseAdAdapter r5) {
            boolean r0 = com.tkay.core.c.a.an()
            if (r0 == 0) goto L3a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            int r1 = r4.c()     // Catch: java.lang.Throwable -> L36
            boolean r1 = r0.c(r1)     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L35
            boolean r1 = r0.c()     // Catch: java.lang.Throwable -> L36
            com.tkay.core.common.m.c r2 = r2.o     // Catch: java.lang.Throwable -> L36
            android.content.Context r2 = r2.a     // Catch: java.lang.Throwable -> L36
            boolean r2 = com.tkay.core.api.TYSDK.isEUTraffic(r2)     // Catch: java.lang.Throwable -> L36
            boolean r2 = r5.setUserDataConsent(r3, r1, r2)     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L35
            int r2 = r4.c()     // Catch: java.lang.Throwable -> L36
            r0.b(r2)     // Catch: java.lang.Throwable -> L36
        L35:
            return
        L36:
            r2 = move-exception
            r2.printStackTrace()
        L3a:
            return
    }

    static void a(com.tkay.core.common.m.d r0, com.tkay.core.api.TYBaseAdAdapter r1) {
            r0.g = r1
            return
    }

    static void a(com.tkay.core.common.m.d r0, com.tkay.core.api.TYBaseAdAdapter r1, com.tkay.core.api.BaseAd[] r2) {
            r0.a(r1, r2)
            return
    }

    static java.util.Map b(com.tkay.core.common.m.d r1) {
            com.tkay.core.common.m.c r1 = r1.o
            java.util.Map<java.lang.String, java.lang.Object> r1 = r1.f
            if (r1 != 0) goto Lc
            java.util.HashMap r1 = new java.util.HashMap
            r0 = 2
            r1.<init>(r0)
        Lc:
            return r1
    }

    private void b(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.Runnable r0 = r2.p()
            r2.m = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.m
            r0.a(r1, r3)
            return
    }

    private synchronized void b(com.tkay.core.api.TYBaseAdAdapter r3, com.tkay.core.common.f.aj r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.n()     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L9
            monitor-exit(r2)
            return
        L9:
            r2.i()     // Catch: java.lang.Throwable -> L2c
            r2.j()     // Catch: java.lang.Throwable -> L2c
            r0 = 0
            r2.g = r0     // Catch: java.lang.Throwable -> L2c
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L2c
            r2.p = r0     // Catch: java.lang.Throwable -> L2c
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L1f
            com.tkay.core.common.f.d r0 = r2.d     // Catch: java.lang.Throwable -> L2c
            r1 = 1
            r0.r = r1     // Catch: java.lang.Throwable -> L2c
        L1f:
            com.tkay.core.common.m.b r0 = r2.h     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L2a
            com.tkay.core.common.m.b r0 = r2.h     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = r2.r     // Catch: java.lang.Throwable -> L2c
            r0.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r2)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    static void c(com.tkay.core.common.m.d r0) {
            r0.o()
            return
    }

    static void d(com.tkay.core.common.m.d r0) {
            r0.q()
            return
    }

    private void i() {
            r2 = this;
            java.lang.Runnable r0 = r2.m
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.m
            r0.c(r1)
            r0 = 0
            r2.m = r0
        L10:
            return
    }

    private void j() {
            r2 = this;
            java.lang.Runnable r0 = r2.n
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.n
            r0.c(r1)
            r0 = 0
            r2.n = r0
        L10:
            return
    }

    private java.util.Map<java.lang.String, java.lang.Object> k() {
            r9 = this;
            com.tkay.core.common.m.c r0 = r9.o
            com.tkay.core.c.d r0 = r0.e
            com.tkay.core.common.m.c r1 = r9.o
            java.lang.String r1 = r1.c
            if (r0 != 0) goto L10
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
        L10:
            java.lang.String r2 = r9.b
            com.tkay.core.common.f.aj r3 = r9.c
            java.util.Map r2 = r0.a(r2, r1, r3)
            com.tkay.core.common.f.aj r3 = r9.c
            int r3 = r3.c()
            r4 = 2
            r5 = 0
            r6 = 1
            if (r3 == r4) goto L47
            r4 = 6
            if (r3 == r4) goto L27
            goto L7c
        L27:
            com.tkay.core.common.m.c r3 = r9.o
            android.content.Context r3 = r3.a
            java.lang.String r4 = r9.b
            int r7 = r0.Y()
            int r8 = r9.f
            org.json.JSONObject r1 = com.tkay.core.common.l.g.a(r3, r1, r4, r7, r8)
            int r0 = r0.aw()
            if (r0 != r6) goto L7c
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "tp_info"
            r2.put(r1, r0)
            goto L7c
        L47:
            com.tkay.core.common.m.c r1 = r9.o
            android.content.Context r1 = r1.a
            com.tkay.core.c.b r1 = com.tkay.core.c.b.a(r1)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.o()
            com.tkay.core.c.a r1 = r1.b(r3)
            if (r1 == 0) goto L6f
            int r1 = r1.j()
            if (r1 != r6) goto L65
            r1 = r6
            goto L66
        L65:
            r1 = r5
        L66:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.String r3 = "mediation_switch"
            r2.put(r3, r1)
        L6f:
            int r0 = r0.a()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "admob_show_with_pay_info"
            r2.put(r1, r0)
        L7c:
            com.tkay.core.common.f.aj r0 = r9.c
            boolean r0 = com.tkay.core.common.l.t.a(r0)
            if (r0 == 0) goto Ld4
            com.tkay.core.common.m.c r0 = r9.o
            com.tkay.core.c.d r0 = r0.e
            int r0 = r0.ar()
            if (r0 != r6) goto Ld4
            com.tkay.core.common.m.c r0 = r9.o
            android.content.Context r0 = r0.a
            com.tkay.core.a.a r0 = com.tkay.core.a.a.a(r0)
            java.lang.String r1 = r9.b
            com.tkay.core.common.f.ad r0 = r0.a(r1)
            if (r0 == 0) goto La0
            int r5 = r0.c
        La0:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r5)
            java.lang.String r1 = "tkay_adload_seq"
            r2.put(r1, r0)
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r9.b
            java.lang.Object r0 = r0.a(r1)
            monitor-enter(r0)
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r3 = r9.b     // Catch: java.lang.Throwable -> Ld1
            com.tkay.core.common.f.aj r4 = r9.c     // Catch: java.lang.Throwable -> Ld1
            int r4 = r4.c()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = r1.a(r3, r4)     // Catch: java.lang.Throwable -> Ld1
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r3 != 0) goto Lcf
            java.lang.String r3 = "tkay_content"
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> Ld1
        Lcf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld1
            goto Ld4
        Ld1:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        Ld4:
            return r2
    }

    private java.util.Map<java.lang.String, java.lang.Object> l() {
            r2 = this;
            com.tkay.core.common.m.c r0 = r2.o
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.f
            if (r0 != 0) goto Lc
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 2
            r0.<init>(r1)
        Lc:
            return r0
    }

    private android.content.Context m() {
            r4 = this;
            com.tkay.core.common.m.c r0 = r4.o
            java.lang.ref.WeakReference<android.content.Context> r0 = r0.b
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 != 0) goto L16
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.D()
        L16:
            boolean r1 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r1 == 0) goto L2b
            java.lang.String r1 = com.tkay.core.common.m.d.a
            java.lang.String r2 = java.lang.String.valueOf(r0)
            java.lang.String r3 = "requestContext = "
            java.lang.String r2 = r3.concat(r2)
            android.util.Log.d(r1, r2)
        L2b:
            return r0
    }

    private boolean n() {
            r2 = this;
            boolean r0 = r2.s
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r2.j
            if (r0 == 0) goto Lb
            return r1
        Lb:
            boolean r0 = r2.s()
            if (r0 == 0) goto L12
            return r1
        L12:
            r0 = 0
            return r0
    }

    private synchronized void o() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.n()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L9
            monitor-exit(r3)
            return
        L9:
            r0 = 1
            r3.i = r0     // Catch: java.lang.Throwable -> L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "network short timeout: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = r3.e     // Catch: java.lang.Throwable -> L27
            r0.append(r1)     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.m.b r0 = r3.h     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L25
            com.tkay.core.common.m.b r0 = r3.h     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = r3.r     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = r3.e     // Catch: java.lang.Throwable -> L27
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L27
        L25:
            monitor-exit(r3)
            return
        L27:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private java.lang.Runnable p() {
            r1 = this;
            com.tkay.core.common.m.d$2 r0 = new com.tkay.core.common.m.d$2
            r0.<init>(r1)
            return r0
    }

    private synchronized void q() {
            r4 = this;
            monitor-enter(r4)
            r4.i()     // Catch: java.lang.Throwable -> L18
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L18
            long r2 = r4.k     // Catch: java.lang.Throwable -> L18
            long r0 = r0 - r2
            r4.l = r0     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.f.d r2 = r4.d     // Catch: java.lang.Throwable -> L18
            if (r2 == 0) goto L16
            com.tkay.core.common.f.d r2 = r4.d     // Catch: java.lang.Throwable -> L18
            r2.c(r0)     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r4)
            return
        L18:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private void r() {
            r1 = this;
            r0 = 0
            r1.g = r0
            return
    }

    private boolean s() {
            r1 = this;
            java.lang.Boolean r0 = r1.p
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private long t() {
            r2 = this;
            long r0 = r2.k
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public final synchronized void a(com.tkay.core.api.TYBaseAdAdapter r5, com.tkay.core.common.m.a r6) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.n()     // Catch: java.lang.Throwable -> L68
            if (r0 == 0) goto L9
            monitor-exit(r4)
            return
        L9:
            r4.i()     // Catch: java.lang.Throwable -> L68
            r4.j()     // Catch: java.lang.Throwable -> L68
            if (r5 == 0) goto L1d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L68
            com.tkay.core.common.m.d$3 r1 = new com.tkay.core.common.m.d$3     // Catch: java.lang.Throwable -> L68
            r1.<init>(r4, r5)     // Catch: java.lang.Throwable -> L68
            r0.a(r1)     // Catch: java.lang.Throwable -> L68
        L1d:
            r5 = 0
            r4.g = r5     // Catch: java.lang.Throwable -> L68
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L68
            r4.p = r5     // Catch: java.lang.Throwable -> L68
            boolean r5 = r4.j     // Catch: java.lang.Throwable -> L68
            if (r5 == 0) goto L2e
            com.tkay.core.common.f.d r5 = r4.d     // Catch: java.lang.Throwable -> L68
            r0 = 2
            r5.r = r0     // Catch: java.lang.Throwable -> L68
            goto L37
        L2e:
            boolean r5 = r4.i     // Catch: java.lang.Throwable -> L68
            if (r5 == 0) goto L37
            com.tkay.core.common.f.d r5 = r4.d     // Catch: java.lang.Throwable -> L68
            r0 = 1
            r5.r = r0     // Catch: java.lang.Throwable -> L68
        L37:
            boolean r5 = r4.j     // Catch: java.lang.Throwable -> L68
            if (r5 != 0) goto L53
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L68
            com.tkay.core.common.c r5 = com.tkay.core.common.c.a()     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> L68
            r5.a(r2, r0)     // Catch: java.lang.Throwable -> L68
            com.tkay.core.common.c r5 = com.tkay.core.common.c.a()     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> L68
            com.tkay.core.api.AdError r3 = r6.b     // Catch: java.lang.Throwable -> L68
            r5.a(r2, r0, r3)     // Catch: java.lang.Throwable -> L68
        L53:
            com.tkay.core.common.f.d r5 = r4.d     // Catch: java.lang.Throwable -> L68
            r6.d = r5     // Catch: java.lang.Throwable -> L68
            com.tkay.core.common.f.aj r5 = r4.c     // Catch: java.lang.Throwable -> L68
            r6.e = r5     // Catch: java.lang.Throwable -> L68
            com.tkay.core.common.m.b r5 = r4.h     // Catch: java.lang.Throwable -> L68
            if (r5 == 0) goto L66
            com.tkay.core.common.m.b r5 = r4.h     // Catch: java.lang.Throwable -> L68
            java.lang.String r0 = r4.r     // Catch: java.lang.Throwable -> L68
            r5.a(r0, r6)     // Catch: java.lang.Throwable -> L68
        L66:
            monitor-exit(r4)
            return
        L68:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void a(com.tkay.core.common.m.b r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.tkay.core.common.m.c r2) {
            r1 = this;
            r1.o = r2
            java.lang.String r0 = r2.d
            r1.b = r0
            com.tkay.core.common.f.d r0 = r2.h
            r1.d = r0
            int r2 = r2.g
            r1.f = r2
            return
    }

    public final void b() {
            r11 = this;
            r0 = 1
            r11.s = r0
            com.tkay.core.common.f.aj r1 = r11.c
            boolean r1 = r1.j()
            if (r1 == 0) goto L2a
            com.tkay.core.common.f.aj r1 = r11.c
            com.tkay.core.common.f.l r1 = r1.M()
            if (r1 == 0) goto L2a
            com.tkay.core.common.m.c r1 = r11.o
            java.lang.String r1 = r1.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2a
            com.tkay.core.common.f.aj r1 = r11.c
            com.tkay.core.common.f.l r1 = r1.M()
            com.tkay.core.common.m.c r2 = r11.o
            java.lang.String r2 = r2.c
            r1.b(r2)
        L2a:
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a()
            java.lang.String r2 = r11.b
            com.tkay.core.common.f.aj r3 = r11.c
            com.tkay.core.common.f.a r1 = r1.a(r2, r3)
            if (r1 == 0) goto L57
            boolean r2 = r1.a()
            if (r2 == 0) goto L57
            com.tkay.core.common.m.b r0 = r11.h
            if (r0 == 0) goto L4d
            com.tkay.core.api.TYBaseAdAdapter r2 = r1.e()
            com.tkay.core.common.f.d r2 = r2.getTrackingInfo()
            r0.b(r2)
        L4d:
            com.tkay.core.api.TYBaseAdAdapter r0 = r1.e()
            com.tkay.core.common.f.aj r1 = r11.c
            r11.b(r0, r1)
            return
        L57:
            com.tkay.core.common.f.aj r1 = r11.c
            com.tkay.core.common.f.l r1 = r1.M()
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L78
            boolean r4 = r1.s
            if (r4 == 0) goto L78
            com.tkay.core.b.c.a r4 = r1.r
            if (r4 == 0) goto L72
            com.tkay.core.api.TYBaseAdAdapter r5 = r4.a()
            com.tkay.core.api.BaseAd r4 = r4.b()
            goto L74
        L72:
            r4 = r3
            r5 = r4
        L74:
            r1.r = r3
            r1 = r0
            goto L7b
        L78:
            r1 = r2
            r4 = r3
            r5 = r4
        L7b:
            if (r5 != 0) goto L85
            if (r1 != 0) goto L85
            com.tkay.core.common.f.aj r5 = r11.c
            com.tkay.core.api.TYBaseAdAdapter r5 = com.tkay.core.common.l.i.a(r5)
        L85:
            if (r5 != 0) goto Lcd
            com.tkay.core.common.m.b r0 = r11.h
            if (r0 == 0) goto Lcc
            com.tkay.core.common.m.a r0 = new com.tkay.core.common.m.a
            r0.<init>()
            r0.a = r2
            if (r1 == 0) goto L9b
            com.tkay.core.common.f.aj r2 = r11.c
            long r4 = r2.k()
            goto L9d
        L9b:
            r4 = 0
        L9d:
            r0.c = r4
            if (r1 == 0) goto La4
            java.lang.String r2 = "2012"
            goto La6
        La4:
            java.lang.String r2 = "2002"
        La6:
            java.lang.String r4 = ""
            if (r1 == 0) goto Lac
            r1 = r4
            goto Lc3
        Lac:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.tkay.core.common.f.aj r5 = r11.c
            java.lang.String r5 = r5.h()
            r1.append(r5)
            java.lang.String r5 = " does not exist!"
            r1.append(r5)
            java.lang.String r1 = r1.toString()
        Lc3:
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r4, r1)
            r0.b = r1
            r11.a(r3, r0)
        Lcc:
            return
        Lcd:
            com.tkay.core.common.f.aj r3 = r11.c     // Catch: java.lang.Throwable -> Lda
            int r3 = r3.c()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r6 = r5.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> Lda
            com.tkay.core.common.l.d.a(r3, r6)     // Catch: java.lang.Throwable -> Lda
        Lda:
            com.tkay.core.common.f.d r3 = r11.d
            com.tkay.core.common.f.aj r6 = r11.c
            com.tkay.core.common.f.d r3 = com.tkay.core.common.l.s.a(r5, r3, r6)
            r11.d = r3
            com.tkay.core.common.m.b r6 = r11.h
            if (r6 == 0) goto Leb
            r6.a(r3)
        Leb:
            com.tkay.core.common.f.aj r3 = r11.c
            long r6 = r3.B()
            r8 = -1
            int r3 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r3 == 0) goto L106
            java.lang.Runnable r3 = r11.p()
            r11.m = r3
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r10 = r11.m
            r3.a(r10, r6)
        L106:
            com.tkay.core.common.f.aj r3 = r11.c
            long r6 = r3.q()
            int r3 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r3 == 0) goto L11f
            java.lang.Runnable r3 = r11.p()
            r11.n = r3
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r8 = r11.n
            r3.a(r8, r6)
        L11f:
            long r6 = android.os.SystemClock.elapsedRealtime()
            r11.k = r6
            com.tkay.core.common.m.c r3 = r11.o
            java.lang.ref.WeakReference<android.content.Context> r3 = r3.b
            java.lang.Object r3 = r3.get()
            android.content.Context r3 = (android.content.Context) r3
            if (r3 == 0) goto L13a
            boolean r6 = r3 instanceof android.app.Activity
            if (r6 == 0) goto L13a
            android.app.Activity r3 = (android.app.Activity) r3
            r5.refreshActivityContext(r3)
        L13a:
            if (r1 == 0) goto L155
            com.tkay.core.common.m.b r1 = r11.h
            if (r1 == 0) goto L145
            com.tkay.core.common.f.d r3 = r11.d
            r1.b(r3)
        L145:
            if (r4 == 0) goto L14f
            com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
            r0[r2] = r4
            r11.a(r5, r0)
            return
        L14f:
            com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r2]
            r11.a(r5, r0)
            return
        L155:
            com.tkay.core.common.f.aj r0 = r11.c
            java.util.Map r1 = r11.k()
            com.tkay.core.common.m.d$1 r2 = new com.tkay.core.common.m.d$1
            r2.<init>(r11, r5, r0, r1)
            com.tkay.core.common.m.c r0 = r11.o
            com.tkay.core.c.d r0 = r0.e
            int r0 = r0.Y()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "2"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 == 0) goto L17c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r2)
            return
        L17c:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r0.b(r2)
            return
    }

    public final synchronized void c() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.n()     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L9
            monitor-exit(r5)
            return
        L9:
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L34
            r5.p = r0     // Catch: java.lang.Throwable -> L34
            r0 = 1
            r5.j = r0     // Catch: java.lang.Throwable -> L34
            com.tkay.core.common.m.a r0 = new com.tkay.core.common.m.a     // Catch: java.lang.Throwable -> L34
            r0.<init>()     // Catch: java.lang.Throwable -> L34
            r1 = 0
            r0.a = r1     // Catch: java.lang.Throwable -> L34
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L34
            long r3 = r5.k     // Catch: java.lang.Throwable -> L34
            long r1 = r1 - r3
            r0.c = r1     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "2001"
            java.lang.String r2 = ""
            java.lang.String r3 = ""
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r2, r3)     // Catch: java.lang.Throwable -> L34
            r0.b = r1     // Catch: java.lang.Throwable -> L34
            com.tkay.core.api.TYBaseAdAdapter r1 = r5.g     // Catch: java.lang.Throwable -> L34
            r5.a(r1, r0)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r5)
            return
        L34:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    public final java.lang.Boolean d() {
            r1 = this;
            java.lang.Boolean r0 = r1.p
            return r0
    }

    public final boolean e() {
            r1 = this;
            boolean r0 = r1.s()
            if (r0 == 0) goto Ld
            boolean r0 = r1.i
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    public final boolean g() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public final com.tkay.core.common.f.aj h() {
            r1 = this;
            com.tkay.core.common.f.aj r0 = r1.c
            return r0
    }
}
