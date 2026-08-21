package com.tencent.bugly.proguard;

public class s {
    public static boolean a = false;
    public static com.tencent.bugly.proguard.r b = null;
    private static int c = 10;
    private static long d = 300000;
    private static long e = 30000;
    private static long f = 0;
    private static int g = 0;
    private static long h = 0;
    private static long i = 0;
    private static long j = 0;
    private static android.app.Application.ActivityLifecycleCallbacks k = null;
    private static java.lang.Class<?> l = null;
    private static boolean m = true;


    static class a implements android.app.Application.ActivityLifecycleCallbacks {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void onActivityCreated(android.app.Activity r2, android.os.Bundle r3) {
                r1 = this;
                java.lang.Class r2 = r2.getClass()
                java.lang.String r2 = r2.getName()
                java.lang.Class r3 = com.tencent.bugly.proguard.s.b()
                if (r3 == 0) goto L1d
                java.lang.Class r3 = com.tencent.bugly.proguard.s.b()
                java.lang.String r3 = r3.getName()
                boolean r3 = r3.equals(r2)
                if (r3 != 0) goto L1d
                return
            L1d:
                r3 = 1
                java.lang.Object[] r3 = new java.lang.Object[r3]
                r0 = 0
                r3[r0] = r2
                java.lang.String r0 = ">>> %s onCreated <<<"
                com.tencent.bugly.proguard.al.c(r0, r3)
                com.tencent.bugly.proguard.aa r3 = com.tencent.bugly.proguard.aa.b()
                if (r3 == 0) goto L39
                java.util.List<java.lang.String> r3 = r3.L
                java.lang.String r0 = "onCreated"
                java.lang.String r2 = com.tencent.bugly.proguard.s.a(r2, r0)
                r3.add(r2)
            L39:
                return
        }

        @Override
        public final void onActivityDestroyed(android.app.Activity r3) {
                r2 = this;
                java.lang.Class r3 = r3.getClass()
                java.lang.String r3 = r3.getName()
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                if (r0 == 0) goto L1d
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                java.lang.String r0 = r0.getName()
                boolean r0 = r0.equals(r3)
                if (r0 != 0) goto L1d
                return
            L1d:
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                java.lang.String r1 = ">>> %s onDestroyed <<<"
                com.tencent.bugly.proguard.al.c(r1, r0)
                com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
                if (r0 == 0) goto L39
                java.util.List<java.lang.String> r0 = r0.L
                java.lang.String r1 = "onDestroyed"
                java.lang.String r3 = com.tencent.bugly.proguard.s.a(r3, r1)
                r0.add(r3)
            L39:
                return
        }

        @Override
        public final void onActivityPaused(android.app.Activity r6) {
                r5 = this;
                java.lang.Class r6 = r6.getClass()
                java.lang.String r6 = r6.getName()
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                if (r0 == 0) goto L1d
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                java.lang.String r0 = r0.getName()
                boolean r0 = r0.equals(r6)
                if (r0 != 0) goto L1d
                return
            L1d:
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r6
                java.lang.String r1 = ">>> %s onPaused <<<"
                com.tencent.bugly.proguard.al.c(r1, r0)
                com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
                if (r0 != 0) goto L2f
                return
            L2f:
                java.util.List<java.lang.String> r1 = r0.L
                java.lang.String r2 = "onPaused"
                java.lang.String r6 = com.tencent.bugly.proguard.s.a(r6, r2)
                r1.add(r6)
                long r1 = java.lang.System.currentTimeMillis()
                r0.A = r1
                long r1 = r0.A
                long r3 = r0.z
                long r1 = r1 - r3
                r0.B = r1
                long r1 = r0.A
                com.tencent.bugly.proguard.s.c(r1)
                long r1 = r0.B
                r3 = 0
                int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r6 >= 0) goto L56
                r0.B = r3
            L56:
                java.lang.String r6 = "background"
                r0.y = r6
                return
        }

        @Override
        public final void onActivityResumed(android.app.Activity r10) {
                r9 = this;
                java.lang.Class r10 = r10.getClass()
                java.lang.String r10 = r10.getName()
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                if (r0 == 0) goto L1d
                java.lang.Class r0 = com.tencent.bugly.proguard.s.b()
                java.lang.String r0 = r0.getName()
                boolean r0 = r0.equals(r10)
                if (r0 != 0) goto L1d
                return
            L1d:
                r0 = 1
                java.lang.Object[] r1 = new java.lang.Object[r0]
                r2 = 0
                r1[r2] = r10
                java.lang.String r3 = ">>> %s onResumed <<<"
                com.tencent.bugly.proguard.al.c(r3, r1)
                com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.b()
                if (r1 != 0) goto L2f
                return
            L2f:
                java.util.List<java.lang.String> r3 = r1.L
                java.lang.String r4 = "onResumed"
                java.lang.String r4 = com.tencent.bugly.proguard.s.a(r10, r4)
                r3.add(r4)
                r1.y = r10
                long r3 = java.lang.System.currentTimeMillis()
                r1.z = r3
                long r3 = r1.z
                long r5 = com.tencent.bugly.proguard.s.c()
                long r3 = r3 - r5
                r1.C = r3
                long r3 = r1.z
                long r5 = com.tencent.bugly.proguard.s.d()
                long r3 = r3 - r5
                long r5 = com.tencent.bugly.proguard.s.e()
                r7 = 0
                int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r10 <= 0) goto L61
                long r5 = com.tencent.bugly.proguard.s.e()
                goto L65
            L61:
                long r5 = com.tencent.bugly.proguard.s.f()
            L65:
                int r10 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r10 <= 0) goto Ldb
                r1.c()
                com.tencent.bugly.proguard.s.g()
                r10 = 2
                java.lang.Object[] r10 = new java.lang.Object[r10]
                r5 = 1000(0x3e8, double:4.94E-321)
                long r3 = r3 / r5
                java.lang.Long r1 = java.lang.Long.valueOf(r3)
                r10[r2] = r1
                long r3 = com.tencent.bugly.proguard.s.f()
                long r3 = r3 / r5
                java.lang.Long r1 = java.lang.Long.valueOf(r3)
                r10[r0] = r1
                java.lang.String r1 = "[session] launch app one times (app in background %d seconds and over %d seconds)"
                com.tencent.bugly.proguard.al.a(r1, r10)
                int r10 = com.tencent.bugly.proguard.s.h()
                int r1 = com.tencent.bugly.proguard.s.i()
                int r10 = r10 % r1
                r1 = 4
                if (r10 != 0) goto La1
                com.tencent.bugly.proguard.r r10 = com.tencent.bugly.proguard.s.b
                boolean r0 = com.tencent.bugly.proguard.s.j()
                r10.a(r1, r0)
                return
            La1:
                com.tencent.bugly.proguard.r r10 = com.tencent.bugly.proguard.s.b
                r10.a(r1, r2)
                long r3 = java.lang.System.currentTimeMillis()
                long r5 = com.tencent.bugly.proguard.s.k()
                long r5 = r3 - r5
                long r7 = com.tencent.bugly.proguard.s.l()
                int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r10 <= 0) goto Ldb
                com.tencent.bugly.proguard.s.b(r3)
                java.lang.Object[] r10 = new java.lang.Object[r2]
                java.lang.String r1 = "add a timer to upload hot start user info"
                com.tencent.bugly.proguard.al.a(r1, r10)
                boolean r10 = com.tencent.bugly.proguard.s.j()
                if (r10 == 0) goto Ldb
                com.tencent.bugly.proguard.r r10 = com.tencent.bugly.proguard.s.b
                long r1 = com.tencent.bugly.proguard.s.l()
                com.tencent.bugly.proguard.ak r3 = com.tencent.bugly.proguard.ak.a()
                com.tencent.bugly.proguard.r$a r4 = new com.tencent.bugly.proguard.r$a
                r5 = 0
                r4.<init>(r10, r5, r0)
                r3.a(r4, r1)
            Ldb:
                return
        }

        @Override
        public final void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityStarted(android.app.Activity r5) {
                r4 = this;
                java.lang.Class r0 = r5.getClass()
                java.lang.String r0 = r0.getName()
                r1 = 1
                java.lang.Object[] r2 = new java.lang.Object[r1]
                r3 = 0
                r2[r3] = r0
                java.lang.String r0 = ">>> %s onStart <<<"
                com.tencent.bugly.proguard.al.c(r0, r2)
                com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
                int r5 = r5.hashCode()
                r0.a(r5, r1)
                return
        }

        @Override
        public final void onActivityStopped(android.app.Activity r4) {
                r3 = this;
                java.lang.Class r0 = r4.getClass()
                java.lang.String r0 = r0.getName()
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                r1[r2] = r0
                java.lang.String r0 = ">>> %s onStop <<<"
                com.tencent.bugly.proguard.al.c(r0, r1)
                com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
                int r4 = r4.hashCode()
                r0.a(r4, r2)
                return
        }
    }

    static {
            return
    }

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.tencent.bugly.proguard.ap.a()
            r0.append(r1)
            java.lang.String r1 = "  "
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r2 = "\n"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a() {
            com.tencent.bugly.proguard.r r0 = com.tencent.bugly.proguard.s.b
            if (r0 == 0) goto L9
            r1 = 2
            r2 = 0
            r0.a(r1, r2)
        L9:
            return
    }

    public static void a(long r3) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 >= 0) goto L10
            com.tencent.bugly.proguard.ac r3 = com.tencent.bugly.proguard.ac.a()
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r3 = r3.c()
            long r3 = r3.p
        L10:
            com.tencent.bugly.proguard.s.f = r3
            return
    }

    public static void a(android.content.Context r3) {
            boolean r0 = com.tencent.bugly.proguard.s.a
            if (r0 == 0) goto L36
            if (r3 != 0) goto L7
            goto L36
        L7:
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 14
            if (r1 < r2) goto L33
            android.content.Context r1 = r3.getApplicationContext()
            boolean r1 = r1 instanceof android.app.Application
            if (r1 == 0) goto L1d
            android.content.Context r3 = r3.getApplicationContext()
            r0 = r3
            android.app.Application r0 = (android.app.Application) r0
        L1d:
            if (r0 == 0) goto L33
            android.app.Application$ActivityLifecycleCallbacks r3 = com.tencent.bugly.proguard.s.k     // Catch: java.lang.Exception -> L29
            if (r3 == 0) goto L33
            android.app.Application$ActivityLifecycleCallbacks r3 = com.tencent.bugly.proguard.s.k     // Catch: java.lang.Exception -> L29
            r0.unregisterActivityLifecycleCallbacks(r3)     // Catch: java.lang.Exception -> L29
            goto L33
        L29:
            r3 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r3)
            if (r0 != 0) goto L33
            r3.printStackTrace()
        L33:
            r3 = 0
            com.tencent.bugly.proguard.s.a = r3
        L36:
            return
    }

    public static void a(android.content.Context r5, com.tencent.bugly.BuglyStrategy r6) {
            boolean r0 = com.tencent.bugly.proguard.s.a
            if (r0 == 0) goto L5
            return
        L5:
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r5)
            boolean r0 = r0.f
            com.tencent.bugly.proguard.s.m = r0
            com.tencent.bugly.proguard.r r0 = new com.tencent.bugly.proguard.r
            boolean r1 = com.tencent.bugly.proguard.s.m
            r0.<init>(r5, r1)
            com.tencent.bugly.proguard.s.b = r0
            r0 = 1
            com.tencent.bugly.proguard.s.a = r0
            r0 = 0
            if (r6 == 0) goto L28
            java.lang.Class r2 = r6.getUserInfoActivity()
            com.tencent.bugly.proguard.s.l = r2
            long r2 = r6.getAppReportDelay()
            goto L29
        L28:
            r2 = r0
        L29:
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 > 0) goto L31
            c(r5, r6)
            return
        L31:
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.s$1 r1 = new com.tencent.bugly.proguard.s$1
            r1.<init>(r5, r6)
            r0.a(r1, r2)
            return
    }

    public static void a(com.tencent.bugly.crashreport.common.strategy.StrategyBean r4, boolean r5) {
            com.tencent.bugly.proguard.r r0 = com.tencent.bugly.proguard.s.b
            if (r0 == 0) goto L9
            if (r5 != 0) goto L9
            r0.b()
        L9:
            if (r4 != 0) goto Lc
            return
        Lc:
            long r0 = r4.p
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L18
            long r0 = r4.p
            com.tencent.bugly.proguard.s.e = r0
        L18:
            int r5 = r4.u
            if (r5 <= 0) goto L20
            int r5 = r4.u
            com.tencent.bugly.proguard.s.c = r5
        L20:
            long r0 = r4.v
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L2a
            long r4 = r4.v
            com.tencent.bugly.proguard.s.d = r4
        L2a:
            return
    }

    static long b(long r0) {
            com.tencent.bugly.proguard.s.j = r0
            return r0
    }

    static java.lang.Class b() {
            java.lang.Class<?> r0 = com.tencent.bugly.proguard.s.l
            return r0
    }

    static void b(android.content.Context r0, com.tencent.bugly.BuglyStrategy r1) {
            c(r0, r1)
            return
    }

    static long c() {
            long r0 = com.tencent.bugly.proguard.s.i
            return r0
    }

    static long c(long r0) {
            com.tencent.bugly.proguard.s.h = r0
            return r0
    }

    private static void c(android.content.Context r12, com.tencent.bugly.BuglyStrategy r13) {
            r0 = 1
            r1 = 0
            if (r13 == 0) goto Ld
            boolean r2 = r13.recordUserInfoOnceADay()
            boolean r13 = r13.isEnableUserInfo()
            goto Lf
        Ld:
            r13 = 1
            r2 = 0
        Lf:
            if (r2 == 0) goto L5d
            com.tencent.bugly.proguard.aa r13 = com.tencent.bugly.proguard.aa.a(r12)
            java.lang.String r2 = r13.d
            java.util.List r2 = com.tencent.bugly.proguard.r.a(r2)
            if (r2 == 0) goto L58
            r3 = 0
        L1e:
            int r4 = r2.size()
            if (r3 >= r4) goto L58
            java.lang.Object r4 = r2.get(r3)
            com.tencent.bugly.crashreport.biz.UserInfoBean r4 = (com.tencent.bugly.crashreport.biz.UserInfoBean) r4
            java.lang.String r5 = r4.n
            java.lang.String r6 = r13.o
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L55
            int r5 = r4.b
            if (r5 != r0) goto L55
            long r5 = com.tencent.bugly.proguard.ap.b()
            r7 = 0
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 <= 0) goto L58
            long r9 = r4.e
            int r11 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r11 < 0) goto L55
            long r2 = r4.f
            int r13 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r13 > 0) goto L53
            com.tencent.bugly.proguard.r r13 = com.tencent.bugly.proguard.s.b
            r13.b()
        L53:
            r13 = 0
            goto L59
        L55:
            int r3 = r3 + 1
            goto L1e
        L58:
            r13 = 1
        L59:
            if (r13 != 0) goto L5c
            return
        L5c:
            r13 = 0
        L5d:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()
            if (r2 == 0) goto L6c
            boolean r3 = com.tencent.bugly.proguard.z.a()
            if (r3 == 0) goto L6c
            r2.a(r1, r0)
        L6c:
            if (r13 == 0) goto La1
            r13 = 0
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 14
            if (r2 < r3) goto La1
            android.content.Context r2 = r12.getApplicationContext()
            boolean r2 = r2 instanceof android.app.Application
            if (r2 == 0) goto L84
            android.content.Context r12 = r12.getApplicationContext()
            r13 = r12
            android.app.Application r13 = (android.app.Application) r13
        L84:
            if (r13 == 0) goto La1
            android.app.Application$ActivityLifecycleCallbacks r12 = com.tencent.bugly.proguard.s.k     // Catch: java.lang.Exception -> L97
            if (r12 != 0) goto L91
            com.tencent.bugly.proguard.s$a r12 = new com.tencent.bugly.proguard.s$a     // Catch: java.lang.Exception -> L97
            r12.<init>()     // Catch: java.lang.Exception -> L97
            com.tencent.bugly.proguard.s.k = r12     // Catch: java.lang.Exception -> L97
        L91:
            android.app.Application$ActivityLifecycleCallbacks r12 = com.tencent.bugly.proguard.s.k     // Catch: java.lang.Exception -> L97
            r13.registerActivityLifecycleCallbacks(r12)     // Catch: java.lang.Exception -> L97
            goto La1
        L97:
            r12 = move-exception
            boolean r13 = com.tencent.bugly.proguard.al.a(r12)
            if (r13 != 0) goto La1
            r12.printStackTrace()
        La1:
            boolean r12 = com.tencent.bugly.proguard.s.m
            if (r12 == 0) goto Lc4
            long r12 = java.lang.System.currentTimeMillis()
            com.tencent.bugly.proguard.s.i = r12
            com.tencent.bugly.proguard.r r12 = com.tencent.bugly.proguard.s.b
            r12.a(r0, r1)
            java.lang.Object[] r12 = new java.lang.Object[r1]
            java.lang.String r13 = "[session] launch app, new start"
            com.tencent.bugly.proguard.al.a(r13, r12)
            com.tencent.bugly.proguard.r r12 = com.tencent.bugly.proguard.s.b
            r12.a()
            com.tencent.bugly.proguard.r r12 = com.tencent.bugly.proguard.s.b
            r0 = 21600000(0x1499700, double:1.0671818E-316)
            r12.a(r0)
        Lc4:
            return
    }

    static long d() {
            long r0 = com.tencent.bugly.proguard.s.h
            return r0
    }

    static long e() {
            long r0 = com.tencent.bugly.proguard.s.f
            return r0
    }

    static long f() {
            long r0 = com.tencent.bugly.proguard.s.e
            return r0
    }

    static int g() {
            int r0 = com.tencent.bugly.proguard.s.g
            int r1 = r0 + 1
            com.tencent.bugly.proguard.s.g = r1
            return r0
    }

    static int h() {
            int r0 = com.tencent.bugly.proguard.s.g
            return r0
    }

    static int i() {
            int r0 = com.tencent.bugly.proguard.s.c
            return r0
    }

    static boolean j() {
            boolean r0 = com.tencent.bugly.proguard.s.m
            return r0
    }

    static long k() {
            long r0 = com.tencent.bugly.proguard.s.j
            return r0
    }

    static long l() {
            long r0 = com.tencent.bugly.proguard.s.d
            return r0
    }
}
