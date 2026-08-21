package com.tencent.bugly.proguard;

public final class ac {
    public static int a = 1000;
    public static long b = 259200000;
    private static com.tencent.bugly.proguard.ac d;
    private static java.lang.String i;
    public final com.tencent.bugly.proguard.ak c;
    private final java.util.List<com.tencent.bugly.proguard.o> e;
    private final com.tencent.bugly.crashreport.common.strategy.StrategyBean f;
    private com.tencent.bugly.crashreport.common.strategy.StrategyBean g;
    private android.content.Context h;


    static {
            return
    }

    private ac(android.content.Context r2, java.util.List<com.tencent.bugly.proguard.o> r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.h = r2
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r2)
            if (r0 == 0) goto L31
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            java.lang.String r2 = r2.H
            java.lang.String r0 = "oversea"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L23
            java.lang.String r2 = "https://astat.bugly.qcloud.com/rqd/async"
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.a = r2
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.b = r2
            goto L31
        L23:
            java.lang.String r0 = "na_https"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L31
            java.lang.String r2 = "https://astat.bugly.cros.wr.pvp.net/:8180/rqd/async"
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.a = r2
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.b = r2
        L31:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r2 = new com.tencent.bugly.crashreport.common.strategy.StrategyBean
            r2.<init>()
            r1.f = r2
            r1.e = r3
            com.tencent.bugly.proguard.ak r2 = com.tencent.bugly.proguard.ak.a()
            r1.c = r2
            return
    }

    static android.content.Context a(com.tencent.bugly.proguard.ac r0) {
            android.content.Context r0 = r0.h
            return r0
    }

    static com.tencent.bugly.crashreport.common.strategy.StrategyBean a(com.tencent.bugly.proguard.ac r0, com.tencent.bugly.crashreport.common.strategy.StrategyBean r1) {
            r0.g = r1
            return r1
    }

    public static synchronized com.tencent.bugly.proguard.ac a() {
            java.lang.Class<com.tencent.bugly.proguard.ac> r0 = com.tencent.bugly.proguard.ac.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.ac r1 = com.tencent.bugly.proguard.ac.d     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.ac a(android.content.Context r2, java.util.List<com.tencent.bugly.proguard.o> r3) {
            java.lang.Class<com.tencent.bugly.proguard.ac> r0 = com.tencent.bugly.proguard.ac.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.ac r1 = com.tencent.bugly.proguard.ac.d     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.ac r1 = new com.tencent.bugly.proguard.ac     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.ac.d = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.ac r2 = com.tencent.bugly.proguard.ac.d     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void a(java.lang.String r1) {
            boolean r0 = com.tencent.bugly.proguard.ap.b(r1)
            if (r0 != 0) goto L10
            boolean r0 = com.tencent.bugly.proguard.ap.d(r1)
            if (r0 != 0) goto Ld
            goto L10
        Ld:
            com.tencent.bugly.proguard.ac.i = r1
            return
        L10:
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r0 = "URL user set is invalid."
            com.tencent.bugly.proguard.al.d(r0, r1)
            return
    }

    static com.tencent.bugly.crashreport.common.strategy.StrategyBean b(com.tencent.bugly.proguard.ac r0) {
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r0.g
            return r0
    }

    public static com.tencent.bugly.crashreport.common.strategy.StrategyBean d() {
            com.tencent.bugly.proguard.w r0 = com.tencent.bugly.proguard.w.a()
            r1 = 2
            java.util.List r0 = r0.a(r1)
            if (r0 == 0) goto L27
            int r1 = r0.size()
            if (r1 <= 0) goto L27
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tencent.bugly.proguard.y r0 = (com.tencent.bugly.proguard.y) r0
            byte[] r1 = r0.g
            if (r1 == 0) goto L27
            byte[] r0 = r0.g
            android.os.Parcelable$Creator<com.tencent.bugly.crashreport.common.strategy.StrategyBean> r1 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.CREATOR
            java.lang.Object r0 = com.tencent.bugly.proguard.ap.a(r0, r1)
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = (com.tencent.bugly.crashreport.common.strategy.StrategyBean) r0
            return r0
        L27:
            r0 = 0
            return r0
    }

    static java.lang.String e() {
            java.lang.String r0 = com.tencent.bugly.proguard.ac.i
            return r0
    }

    protected final void a(com.tencent.bugly.crashreport.common.strategy.StrategyBean r7, boolean r8) {
            r6 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.Class<com.tencent.bugly.proguard.s> r2 = com.tencent.bugly.proguard.s.class
            java.lang.String r2 = r2.getName()
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "[Strategy] Notify %s"
            com.tencent.bugly.proguard.al.c(r2, r1)
            com.tencent.bugly.proguard.s.a(r7, r8)
            java.util.List<com.tencent.bugly.proguard.o> r8 = r6.e
            java.util.Iterator r8 = r8.iterator()
        L1a:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L44
            java.lang.Object r1 = r8.next()
            com.tencent.bugly.proguard.o r1 = (com.tencent.bugly.proguard.o) r1
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L39
            java.lang.Class r5 = r1.getClass()     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L39
            r4[r3] = r5     // Catch: java.lang.Throwable -> L39
            com.tencent.bugly.proguard.al.c(r2, r4)     // Catch: java.lang.Throwable -> L39
            r1.onServerStrategyChanged(r7)     // Catch: java.lang.Throwable -> L39
            goto L1a
        L39:
            r1 = move-exception
            boolean r4 = com.tencent.bugly.proguard.al.a(r1)
            if (r4 != 0) goto L1a
            r1.printStackTrace()
            goto L1a
        L44:
            return
    }

    public final void a(com.tencent.bugly.proguard.bt r9) {
            r8 = this;
            if (r9 != 0) goto L3
            return
        L3:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r8.g
            if (r0 == 0) goto L12
            long r0 = r9.h
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r2 = r8.g
            long r2 = r2.o
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L12
            return
        L12:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = new com.tencent.bugly.crashreport.common.strategy.StrategyBean
            r0.<init>()
            boolean r1 = r9.a
            r0.f = r1
            boolean r1 = r9.c
            r0.h = r1
            boolean r1 = r9.b
            r0.g = r1
            java.lang.String r1 = com.tencent.bugly.proguard.ac.i
            boolean r1 = com.tencent.bugly.proguard.ap.b(r1)
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L35
            java.lang.String r1 = com.tencent.bugly.proguard.ac.i
            boolean r1 = com.tencent.bugly.proguard.ap.d(r1)
            if (r1 != 0) goto L63
        L35:
            java.lang.String r1 = r9.d
            boolean r1 = com.tencent.bugly.proguard.ap.d(r1)
            if (r1 == 0) goto L4c
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.String r4 = r9.d
            r1[r3] = r4
            java.lang.String r4 = "[Strategy] Upload url changes to %s"
            com.tencent.bugly.proguard.al.c(r4, r1)
            java.lang.String r1 = r9.d
            r0.q = r1
        L4c:
            java.lang.String r1 = r9.e
            boolean r1 = com.tencent.bugly.proguard.ap.d(r1)
            if (r1 == 0) goto L63
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.String r4 = r9.e
            r1[r3] = r4
            java.lang.String r4 = "[Strategy] Exception upload url changes to %s"
            com.tencent.bugly.proguard.al.c(r4, r1)
            java.lang.String r1 = r9.e
            r0.r = r1
        L63:
            com.tencent.bugly.proguard.bs r1 = r9.f
            if (r1 == 0) goto L77
            com.tencent.bugly.proguard.bs r1 = r9.f
            java.lang.String r1 = r1.a
            boolean r1 = com.tencent.bugly.proguard.ap.b(r1)
            if (r1 != 0) goto L77
            com.tencent.bugly.proguard.bs r1 = r9.f
            java.lang.String r1 = r1.a
            r0.s = r1
        L77:
            long r4 = r9.h
            r6 = 0
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 == 0) goto L83
            long r4 = r9.h
            r0.o = r4
        L83:
            if (r9 == 0) goto L108
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            if (r1 == 0) goto L108
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            int r1 = r1.size()
            if (r1 > 0) goto L93
            goto L108
        L93:
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            r0.t = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            java.lang.String r4 = "B11"
            java.lang.Object r1 = r1.get(r4)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r4 = "1"
            if (r1 == 0) goto Lad
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto Lad
            r1 = 1
            goto Lae
        Lad:
            r1 = 0
        Lae:
            r0.i = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            java.lang.String r5 = "B3"
            java.lang.Object r1 = r1.get(r5)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 == 0) goto Lc2
            long r5 = java.lang.Long.parseLong(r1)
            r0.w = r5
        Lc2:
            int r1 = r9.l
            long r5 = (long) r1
            r0.p = r5
            int r1 = r9.l
            long r5 = (long) r1
            r0.v = r5
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            java.lang.String r5 = "B27"
            java.lang.Object r1 = r1.get(r5)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 == 0) goto Lf1
            int r5 = r1.length()
            if (r5 <= 0) goto Lf1
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> Le7
            if (r1 <= 0) goto Lf1
            r0.u = r1     // Catch: java.lang.Exception -> Le7
            goto Lf1
        Le7:
            r1 = move-exception
            boolean r5 = com.tencent.bugly.proguard.al.a(r1)
            if (r5 != 0) goto Lf1
            r1.printStackTrace()
        Lf1:
            java.util.Map<java.lang.String, java.lang.String> r1 = r9.g
            java.lang.String r5 = "B25"
            java.lang.Object r1 = r1.get(r5)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 == 0) goto L105
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L105
            r1 = 1
            goto L106
        L105:
            r1 = 0
        L106:
            r0.k = r1
        L108:
            r1 = 10
            java.lang.Object[] r1 = new java.lang.Object[r1]
            boolean r4 = r0.f
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r1[r3] = r4
            boolean r4 = r0.h
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r1[r2] = r4
            boolean r4 = r0.g
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r5 = 2
            r1[r5] = r4
            r4 = 3
            boolean r6 = r0.i
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r1[r4] = r6
            r4 = 4
            boolean r6 = r0.j
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r1[r4] = r6
            r4 = 5
            boolean r6 = r0.m
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r1[r4] = r6
            r4 = 6
            boolean r6 = r0.n
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r1[r4] = r6
            r4 = 7
            long r6 = r0.p
            java.lang.Long r6 = java.lang.Long.valueOf(r6)
            r1[r4] = r6
            r4 = 8
            boolean r6 = r0.k
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)
            r1[r4] = r6
            r4 = 9
            long r6 = r0.o
            java.lang.Long r6 = java.lang.Long.valueOf(r6)
            r1[r4] = r6
            java.lang.String r4 = "[Strategy] enableCrashReport:%b, enableQuery:%b, enableUserInfo:%b, enableAnr:%b, enableBlock:%b, enableSession:%b, enableSessionTimer:%b, sessionOverTime:%d, enableCocos:%b, strategyLastUpdateTime:%d"
            com.tencent.bugly.proguard.al.a(r4, r1)
            r8.g = r0
            java.lang.String r1 = r9.d
            boolean r1 = com.tencent.bugly.proguard.ap.d(r1)
            java.lang.String r4 = ""
            if (r1 != 0) goto L182
            java.lang.Object[] r1 = new java.lang.Object[r3]
            java.lang.String r6 = "[Strategy] download url is null"
            com.tencent.bugly.proguard.al.c(r6, r1)
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r1 = r8.g
            r1.q = r4
        L182:
            java.lang.String r9 = r9.e
            boolean r9 = com.tencent.bugly.proguard.ap.d(r9)
            if (r9 != 0) goto L195
            java.lang.Object[] r9 = new java.lang.Object[r3]
            java.lang.String r1 = "[Strategy] download crashurl is null"
            com.tencent.bugly.proguard.al.c(r1, r9)
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r9 = r8.g
            r9.r = r4
        L195:
            com.tencent.bugly.proguard.w r9 = com.tencent.bugly.proguard.w.a()
            r9.b(r5)
            com.tencent.bugly.proguard.y r9 = new com.tencent.bugly.proguard.y
            r9.<init>()
            r9.b = r5
            long r3 = r0.d
            r9.a = r3
            long r3 = r0.e
            r9.e = r3
            byte[] r1 = com.tencent.bugly.proguard.ap.a(r0)
            r9.g = r1
            com.tencent.bugly.proguard.w r1 = com.tencent.bugly.proguard.w.a()
            r1.a(r9)
            r8.a(r0, r2)
            return
    }

    public final synchronized boolean b() {
            r1 = this;
            monitor-enter(r1)
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r1.g     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L8
            r0 = 1
        L6:
            monitor-exit(r1)
            return r0
        L8:
            r0 = 0
            goto L6
        La:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final com.tencent.bugly.crashreport.common.strategy.StrategyBean c() {
            r2 = this;
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.g
            if (r0 == 0) goto L25
            java.lang.String r0 = r0.q
            boolean r0 = com.tencent.bugly.proguard.ap.d(r0)
            if (r0 != 0) goto L12
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.g
            java.lang.String r1 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.a
            r0.q = r1
        L12:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.g
            java.lang.String r0 = r0.r
            boolean r0 = com.tencent.bugly.proguard.ap.d(r0)
            if (r0 != 0) goto L22
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.g
            java.lang.String r1 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.b
            r0.r = r1
        L22:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.g
            return r0
        L25:
            java.lang.String r0 = com.tencent.bugly.proguard.ac.i
            boolean r0 = com.tencent.bugly.proguard.ap.b(r0)
            if (r0 != 0) goto L3d
            java.lang.String r0 = com.tencent.bugly.proguard.ac.i
            boolean r0 = com.tencent.bugly.proguard.ap.d(r0)
            if (r0 == 0) goto L3d
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.f
            java.lang.String r1 = com.tencent.bugly.proguard.ac.i
            r0.q = r1
            r0.r = r1
        L3d:
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r2.f
            return r0
    }
}
