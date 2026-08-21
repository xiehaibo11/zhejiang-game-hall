package com.tencent.bugly.proguard;

public final class at {
    private static com.tencent.bugly.proguard.at D = null;
    public static int a = 0;
    public static boolean b = false;
    public static int d = 2;
    public static boolean e = false;
    public static int f = 20480;
    public static int g = 3000;
    public static int h = 20480;
    public static long i = 209715200;
    public static long j = 604800000;
    public static java.lang.String k = null;
    public static boolean l = false;
    public static java.lang.String m = null;
    public static int n = 5000;
    public static boolean o = true;
    public static boolean p;
    public static java.lang.String q;
    public static java.lang.String r;
    public java.lang.Boolean A;
    public int B;
    public boolean C;
    public final android.content.Context c;
    public final com.tencent.bugly.proguard.as s;
    public final com.tencent.bugly.proguard.av t;
    public final com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler u;
    public final com.tencent.bugly.proguard.ac v;
    public final com.tencent.bugly.proguard.ak w;
    public final com.tencent.bugly.proguard.ay x;
    public com.tencent.bugly.BuglyStrategy.a y;
    public com.tencent.bugly.proguard.aw z;





    static {
            return
    }

    private at(android.content.Context r9, com.tencent.bugly.proguard.ak r10, boolean r11, com.tencent.bugly.BuglyStrategy.a r12) {
            r8 = this;
            r8.<init>()
            r0 = 31
            r8.B = r0
            r0 = 0
            r8.C = r0
            r0 = 1004(0x3ec, float:1.407E-42)
            com.tencent.bugly.proguard.at.a = r0
            android.content.Context r9 = com.tencent.bugly.proguard.ap.a(r9)
            r8.c = r9
            com.tencent.bugly.proguard.ac r0 = com.tencent.bugly.proguard.ac.a()
            r8.v = r0
            r8.w = r10
            r8.y = r12
            r0 = 0
            r8.z = r0
            com.tencent.bugly.proguard.ai r3 = com.tencent.bugly.proguard.ai.a()
            com.tencent.bugly.proguard.w r4 = com.tencent.bugly.proguard.w.a()
            com.tencent.bugly.proguard.as r0 = new com.tencent.bugly.proguard.as
            com.tencent.bugly.proguard.ac r5 = r8.v
            r1 = r0
            r2 = r9
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r8.s = r0
            com.tencent.bugly.proguard.aa r12 = com.tencent.bugly.proguard.aa.a(r9)
            com.tencent.bugly.proguard.av r0 = new com.tencent.bugly.proguard.av
            com.tencent.bugly.proguard.as r1 = r8.s
            com.tencent.bugly.proguard.ac r2 = r8.v
            r0.<init>(r9, r1, r2, r12)
            r8.t = r0
            com.tencent.bugly.proguard.as r3 = r8.s
            com.tencent.bugly.proguard.ac r4 = r8.v
            r7 = 0
            r1 = r9
            r2 = r12
            r5 = r10
            r6 = r11
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r11 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance(r1, r2, r3, r4, r5, r6, r7)
            r8.u = r11
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r11 = r8.u
            r12.N = r11
            com.tencent.bugly.proguard.ac r3 = r8.v
            com.tencent.bugly.proguard.as r6 = r8.s
            com.tencent.bugly.proguard.ay r11 = com.tencent.bugly.proguard.ay.f
            if (r11 != 0) goto L6a
            com.tencent.bugly.proguard.ay r11 = new com.tencent.bugly.proguard.ay
            r1 = r11
            r2 = r9
            r4 = r12
            r5 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            com.tencent.bugly.proguard.ay.f = r11
        L6a:
            com.tencent.bugly.proguard.ay r9 = com.tencent.bugly.proguard.ay.f
            r8.x = r9
            return
    }

    public static synchronized com.tencent.bugly.proguard.at a() {
            java.lang.Class<com.tencent.bugly.proguard.at> r0 = com.tencent.bugly.proguard.at.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.at r1 = com.tencent.bugly.proguard.at.D     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.at a(android.content.Context r3, boolean r4, com.tencent.bugly.BuglyStrategy.a r5) {
            java.lang.Class<com.tencent.bugly.proguard.at> r0 = com.tencent.bugly.proguard.at.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.at r1 = com.tencent.bugly.proguard.at.D     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.tencent.bugly.proguard.at r1 = new com.tencent.bugly.proguard.at     // Catch: java.lang.Throwable -> L16
            com.tencent.bugly.proguard.ak r2 = com.tencent.bugly.proguard.ak.a()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r3, r2, r4, r5)     // Catch: java.lang.Throwable -> L16
            com.tencent.bugly.proguard.at.D = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.tencent.bugly.proguard.at r3 = com.tencent.bugly.proguard.at.D     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r3
        L16:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static com.tencent.bugly.proguard.av a(com.tencent.bugly.proguard.at r0) {
            com.tencent.bugly.proguard.av r0 = r0.t
            return r0
    }

    static android.content.Context b(com.tencent.bugly.proguard.at r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    public final void a(long r3) {
            r2 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.at$4 r1 = new com.tencent.bugly.proguard.at$4
            r1.<init>(r2)
            r0.a(r1, r3)
            return
    }

    public final void a(com.tencent.bugly.crashreport.crash.CrashDetailBean r2) {
            r1 = this;
            com.tencent.bugly.proguard.as r0 = r1.s
            r0.b(r2)
            return
    }

    public final synchronized void a(boolean r2, boolean r3, boolean r4) {
            r1 = this;
            monitor-enter(r1)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r1.u     // Catch: java.lang.Throwable -> L8
            r0.testNativeCrash(r2, r3, r4)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void b() {
            r1 = this;
            monitor-enter(r1)
            com.tencent.bugly.proguard.av r0 = r1.t     // Catch: java.lang.Throwable -> Le
            r0.a()     // Catch: java.lang.Throwable -> Le
            r1.e()     // Catch: java.lang.Throwable -> Le
            r1.f()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void c() {
            r1 = this;
            monitor-enter(r1)
            com.tencent.bugly.proguard.av r0 = r1.t     // Catch: java.lang.Throwable -> Le
            r0.b()     // Catch: java.lang.Throwable -> Le
            r1.d()     // Catch: java.lang.Throwable -> Le
            r1.g()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void d() {
            r2 = this;
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r2.u
            r1 = 0
            r0.setUserOpened(r1)
            return
    }

    public final void e() {
            r2 = this;
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r2.u
            r1 = 1
            r0.setUserOpened(r1)
            return
    }

    public final void f() {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tencent.bugly.proguard.at$1 r1 = new com.tencent.bugly.proguard.at$1
            r1.<init>(r2)
            r0.post(r1)
            com.tencent.bugly.proguard.ay r0 = r2.x
            r1 = 1
            r0.b(r1)
            return
    }

    public final void g() {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tencent.bugly.proguard.at$2 r1 = new com.tencent.bugly.proguard.at$2
            r1.<init>(r2)
            r0.post(r1)
            com.tencent.bugly.proguard.ay r0 = r2.x
            r1 = 0
            r0.b(r1)
            return
    }

    public final synchronized void h() {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            r1 = 0
        L3:
            int r2 = r1 + 1
            r3 = 30
            if (r1 >= r3) goto L2e
            java.lang.String r1 = "try main sleep for make a test anr! try:%d/30 , kill it if you don't want to wait!"
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            r3[r0] = r4     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            com.tencent.bugly.proguard.al.a(r1, r3)     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            r3 = 5000(0x1388, double:2.4703E-320)
            com.tencent.bugly.proguard.ap.b(r3)     // Catch: java.lang.Throwable -> L1e java.lang.Throwable -> L20
            r1 = r2
            goto L3
        L1e:
            r0 = move-exception
            goto L2c
        L20:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L2a
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1e
        L2a:
            monitor-exit(r5)
            return
        L2c:
            monitor-exit(r5)
            throw r0
        L2e:
            monitor-exit(r5)
            return
    }

    public final boolean i() {
            r1 = this;
            com.tencent.bugly.proguard.ay r0 = r1.x
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.a
            boolean r0 = r0.get()
            return r0
    }

    public final boolean j() {
            r1 = this;
            int r0 = r1.B
            r0 = r0 & 16
            if (r0 <= 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final boolean k() {
            r1 = this;
            int r0 = r1.B
            r0 = r0 & 8
            if (r0 <= 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }
}
