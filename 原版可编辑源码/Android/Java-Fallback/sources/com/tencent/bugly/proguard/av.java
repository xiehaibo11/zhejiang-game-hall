package com.tencent.bugly.proguard;

public final class av implements java.lang.Thread.UncaughtExceptionHandler {
    private static java.lang.String h;
    private static final java.lang.Object i = null;
    protected final android.content.Context a;
    protected final com.tencent.bugly.proguard.as b;
    protected final com.tencent.bugly.proguard.ac c;
    protected final com.tencent.bugly.proguard.aa d;
    protected java.lang.Thread.UncaughtExceptionHandler e;
    protected java.lang.Thread.UncaughtExceptionHandler f;
    protected boolean g;
    private int j;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.tencent.bugly.proguard.av.i = r0
            return
    }

    public av(android.content.Context r2, com.tencent.bugly.proguard.as r3, com.tencent.bugly.proguard.ac r4, com.tencent.bugly.proguard.aa r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            r1.d = r5
            return
    }

    private static java.lang.String a(java.lang.Throwable r3) {
            java.lang.String r3 = r3.getMessage()
            if (r3 != 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            int r0 = r3.length()
            r1 = 1000(0x3e8, float:1.401E-42)
            if (r0 > r1) goto L12
            return r3
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r2 = 0
            java.lang.String r3 = r3.substring(r2, r1)
            r0.append(r3)
            java.lang.String r3 = "\n[Message over limit size:1000, has been cutted!]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static java.lang.String a(java.lang.Throwable r6, int r7) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.lang.StackTraceElement[] r2 = r6.getStackTrace()     // Catch: java.lang.Throwable -> L4c
            if (r2 == 0) goto L5b
            java.lang.StackTraceElement[] r6 = r6.getStackTrace()     // Catch: java.lang.Throwable -> L4c
            int r2 = r6.length     // Catch: java.lang.Throwable -> L4c
            r3 = 0
        L16:
            if (r3 >= r2) goto L5b
            r4 = r6[r3]     // Catch: java.lang.Throwable -> L4c
            if (r7 <= 0) goto L3d
            int r5 = r0.length()     // Catch: java.lang.Throwable -> L4c
            if (r5 < r7) goto L3d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "\n[Stack over limit size :"
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L4c
            r6.append(r7)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r7 = " , has been cutted !]"
            r6.append(r7)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L4c
            r0.append(r6)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L4c
            return r6
        L3d:
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L4c
            r0.append(r4)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "\n"
            r0.append(r4)     // Catch: java.lang.Throwable -> L4c
            int r3 = r3 + 1
            goto L16
        L4c:
            r6 = move-exception
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]
            java.lang.String r6 = r6.toString()
            r7[r1] = r6
            java.lang.String r6 = "gen stack error %s"
            com.tencent.bugly.proguard.al.e(r6, r7)
        L5b:
            java.lang.String r6 = r0.toString()
            return r6
    }

    private static void a(com.tencent.bugly.crashreport.crash.CrashDetailBean r7, java.lang.Throwable r8, boolean r9) {
            java.lang.Class r0 = r8.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = a(r8)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.StackTraceElement[] r3 = r8.getStackTrace()
            int r3 = r3.length
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4 = 0
            r2[r4] = r3
            java.lang.Throwable r3 = r8.getCause()
            r5 = 1
            if (r3 == 0) goto L24
            r3 = 1
            goto L25
        L24:
            r3 = 0
        L25:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2[r5] = r3
            java.lang.String r3 = "stack frame :%d, has cause %b"
            com.tencent.bugly.proguard.al.e(r3, r2)
            java.lang.StackTraceElement[] r2 = r8.getStackTrace()
            int r2 = r2.length
            java.lang.String r3 = ""
            if (r2 <= 0) goto L44
            java.lang.StackTraceElement[] r2 = r8.getStackTrace()
            r2 = r2[r4]
            java.lang.String r2 = r2.toString()
            goto L45
        L44:
            r2 = r3
        L45:
            r5 = r8
        L46:
            if (r5 == 0) goto L53
            java.lang.Throwable r6 = r5.getCause()
            if (r6 == 0) goto L53
            java.lang.Throwable r5 = r5.getCause()
            goto L46
        L53:
            if (r5 == 0) goto Lbc
            if (r5 == r8) goto Lbc
            java.lang.Class r8 = r5.getClass()
            java.lang.String r8 = r8.getName()
            r7.n = r8
            java.lang.String r8 = a(r5)
            r7.o = r8
            java.lang.StackTraceElement[] r8 = r5.getStackTrace()
            int r8 = r8.length
            if (r8 <= 0) goto L7a
            java.lang.StackTraceElement[] r8 = r5.getStackTrace()
            r8 = r8[r4]
            java.lang.String r8 = r8.toString()
            r7.p = r8
        L7a:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r0)
            java.lang.String r9 = ":"
            r8.append(r9)
            r8.append(r1)
            java.lang.String r0 = "\n"
            r8.append(r0)
            r8.append(r2)
            java.lang.String r1 = "\n......"
            r8.append(r1)
            java.lang.String r1 = "\nCaused by:\n"
            r8.append(r1)
            java.lang.String r1 = r7.n
            r8.append(r1)
            r8.append(r9)
            java.lang.String r9 = r7.o
            r8.append(r9)
            r8.append(r0)
            int r9 = com.tencent.bugly.proguard.at.h
            java.lang.String r9 = a(r5, r9)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.q = r8
            goto Lee
        Lbc:
            r7.n = r0
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            boolean r0 = r0.i()
            if (r0 == 0) goto Ld3
            if (r9 == 0) goto Ld3
            java.lang.Object[] r9 = new java.lang.Object[r4]
            java.lang.String r0 = "This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful!"
            com.tencent.bugly.proguard.al.e(r0, r9)
            java.lang.String r3 = " This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful![Bugly]"
        Ld3:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r1)
            r9.append(r3)
            java.lang.String r9 = r9.toString()
            r7.o = r9
            r7.p = r2
            int r9 = com.tencent.bugly.proguard.at.h
            java.lang.String r9 = a(r8, r9)
            r7.q = r9
        Lee:
            java.lang.String r8 = r7.q
            byte[] r8 = r8.getBytes()
            java.lang.String r8 = com.tencent.bugly.proguard.ap.c(r8)
            r7.u = r8
            java.util.Map<java.lang.String, java.lang.String> r8 = r7.z
            java.lang.String r7 = r7.B
            r8.put(r7, r9)
            return
    }

    private static boolean a(java.lang.Thread.UncaughtExceptionHandler r7) {
            r0 = 1
            if (r7 != 0) goto L4
            return r0
        L4:
            java.lang.Class r7 = r7.getClass()
            java.lang.String r7 = r7.getName()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()
            int r2 = r1.length
            r3 = 0
            r4 = 0
        L17:
            if (r4 >= r2) goto L35
            r5 = r1[r4]
            java.lang.String r6 = r5.getClassName()
            java.lang.String r5 = r5.getMethodName()
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L32
            java.lang.String r6 = "uncaughtException"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L32
            return r3
        L32:
            int r4 = r4 + 1
            goto L17
        L35:
            return r0
    }

    private static boolean a(java.lang.Thread r3) {
            java.lang.Object r0 = com.tencent.bugly.proguard.av.i
            monitor-enter(r0)
            java.lang.String r1 = com.tencent.bugly.proguard.av.h     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L17
            java.lang.String r1 = r3.getName()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = com.tencent.bugly.proguard.av.h     // Catch: java.lang.Throwable -> L20
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L14
            goto L17
        L14:
            r3 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r3
        L17:
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L20
            com.tencent.bugly.proguard.av.h = r3     // Catch: java.lang.Throwable -> L20
            r3 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r3
        L20:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r3
    }

    private com.tencent.bugly.crashreport.crash.CrashDetailBean b(java.lang.Thread r6, java.lang.Throwable r7, boolean r8, java.lang.String r9, byte[] r10, boolean r11) {
            r5 = this;
            r0 = 0
            if (r7 != 0) goto Lc
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "We can do nothing with a null throwable."
            com.tencent.bugly.proguard.al.d(r7, r6)
            r6 = 0
            return r6
        Lc:
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = new com.tencent.bugly.crashreport.crash.CrashDetailBean
            r1.<init>()
            long r2 = java.lang.System.currentTimeMillis()
            r1.r = r2
            long r2 = com.tencent.bugly.proguard.ab.j()
            r1.C = r2
            long r2 = com.tencent.bugly.proguard.ab.f()
            r1.D = r2
            long r2 = com.tencent.bugly.proguard.ab.l()
            r1.E = r2
            com.tencent.bugly.proguard.aa r2 = r5.d
            long r2 = r2.k()
            r1.F = r2
            com.tencent.bugly.proguard.aa r2 = r5.d
            long r2 = r2.j()
            r1.G = r2
            com.tencent.bugly.proguard.aa r2 = r5.d
            long r2 = r2.l()
            r1.H = r2
            if (r8 != 0) goto L50
            int r2 = com.tencent.bugly.proguard.aa.B()
            r3 = 31
            if (r2 < r3) goto L50
            r2 = 0
            r1.I = r2
            goto L58
        L50:
            android.content.Context r2 = r5.a
            long r2 = com.tencent.bugly.proguard.ab.b(r2)
            r1.I = r2
        L58:
            long r2 = com.tencent.bugly.proguard.ab.g()
            r1.J = r2
            long r2 = com.tencent.bugly.proguard.ab.h()
            r1.K = r2
            byte[] r2 = com.tencent.bugly.proguard.ao.a()
            r1.y = r2
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            byte[] r4 = r1.y
            if (r4 != 0) goto L73
            r4 = 0
            goto L76
        L73:
            byte[] r4 = r1.y
            int r4 = r4.length
        L76:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3[r0] = r4
            java.lang.String r4 = "user log size:%d"
            com.tencent.bugly.proguard.al.a(r4, r3)
            if (r8 == 0) goto L85
            r3 = 0
            goto L86
        L85:
            r3 = 2
        L86:
            r1.b = r3
            com.tencent.bugly.proguard.aa r3 = r5.d
            java.lang.String r3 = r3.g()
            r1.e = r3
            com.tencent.bugly.proguard.aa r3 = r5.d
            java.lang.String r3 = r3.o
            r1.f = r3
            com.tencent.bugly.proguard.aa r3 = r5.d
            java.lang.String r3 = r3.q()
            r1.g = r3
            com.tencent.bugly.proguard.aa r3 = r5.d
            java.lang.String r3 = r3.f()
            r1.m = r3
            int r3 = com.tencent.bugly.proguard.at.h
            java.util.Map r11 = com.tencent.bugly.proguard.ap.a(r11, r3)
            r1.z = r11
            com.tencent.bugly.proguard.aa r11 = r5.d
            java.lang.String r11 = r11.d
            r1.A = r11
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r3 = r6.getName()
            r11.append(r3)
            java.lang.String r3 = "("
            r11.append(r3)
            long r3 = r6.getId()
            r11.append(r3)
            java.lang.String r6 = ")"
            r11.append(r6)
            java.lang.String r6 = r11.toString()
            r1.B = r6
            com.tencent.bugly.proguard.aa r6 = r5.d
            java.lang.String r6 = r6.s()
            r1.L = r6
            com.tencent.bugly.proguard.aa r6 = r5.d
            java.util.Map r6 = r6.p()
            r1.h = r6
            com.tencent.bugly.proguard.aa r6 = r5.d
            java.util.Map r6 = r6.A()
            r1.i = r6
            com.tencent.bugly.proguard.aa r6 = r5.d
            long r3 = r6.a
            r1.Q = r3
            com.tencent.bugly.proguard.aa r6 = r5.d
            boolean r6 = r6.a()
            r1.R = r6
            a(r1, r7, r8)
            if (r8 != 0) goto L129
            if (r9 == 0) goto L10c
            int r6 = r9.length()     // Catch: java.lang.Throwable -> L148
            if (r6 <= 0) goto L10c
            r6 = 1
            goto L10d
        L10c:
            r6 = 0
        L10d:
            if (r10 == 0) goto L114
            int r7 = r10.length     // Catch: java.lang.Throwable -> L148
            if (r7 <= 0) goto L114
            r7 = 1
            goto L115
        L114:
            r7 = 0
        L115:
            if (r6 == 0) goto L125
            java.util.HashMap r6 = new java.util.HashMap     // Catch: java.lang.Throwable -> L148
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L148
            r1.S = r6     // Catch: java.lang.Throwable -> L148
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.S     // Catch: java.lang.Throwable -> L148
            java.lang.String r8 = "UserData"
            r6.put(r8, r9)     // Catch: java.lang.Throwable -> L148
        L125:
            if (r7 == 0) goto L129
            r1.Y = r10     // Catch: java.lang.Throwable -> L148
        L129:
            com.tencent.bugly.proguard.aa r6 = r5.d     // Catch: java.lang.Throwable -> L148
            int r6 = r6.z()     // Catch: java.lang.Throwable -> L148
            r1.U = r6     // Catch: java.lang.Throwable -> L148
            com.tencent.bugly.proguard.aa r6 = r5.d     // Catch: java.lang.Throwable -> L148
            int r6 = r6.x     // Catch: java.lang.Throwable -> L148
            r1.V = r6     // Catch: java.lang.Throwable -> L148
            com.tencent.bugly.proguard.aa r6 = r5.d     // Catch: java.lang.Throwable -> L148
            java.util.Map r6 = r6.t()     // Catch: java.lang.Throwable -> L148
            r1.W = r6     // Catch: java.lang.Throwable -> L148
            com.tencent.bugly.proguard.aa r6 = r5.d     // Catch: java.lang.Throwable -> L148
            java.util.Map r6 = r6.y()     // Catch: java.lang.Throwable -> L148
            r1.X = r6     // Catch: java.lang.Throwable -> L148
            goto L156
        L148:
            r6 = move-exception
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.String r6 = r6.toString()
            r7[r0] = r6
            java.lang.String r6 = "handle crash error %s"
            com.tencent.bugly.proguard.al.e(r6, r7)
        L156:
            return r1
    }

    private static void c() {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "current process die"
            com.tencent.bugly.proguard.al.e(r1, r0)
            int r0 = android.os.Process.myPid()
            android.os.Process.killProcess(r0)
            r0 = 1
            java.lang.System.exit(r0)
            return
    }

    public final synchronized void a() {
            r6 = this;
            monitor-enter(r6)
            int r0 = r6.j     // Catch: java.lang.Throwable -> L80
            r1 = 10
            r2 = 0
            r3 = 1
            if (r0 < r1) goto L18
            java.lang.String r0 = "java crash handler over %d, no need set."
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L80
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L80
            r3[r2] = r1     // Catch: java.lang.Throwable -> L80
            com.tencent.bugly.proguard.al.a(r0, r3)     // Catch: java.lang.Throwable -> L80
            monitor-exit(r6)
            return
        L18:
            r6.g = r3     // Catch: java.lang.Throwable -> L80
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L69
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L80
            java.lang.Class r4 = r0.getClass()     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.equals(r4)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L38
            monitor-exit(r6)
            return
        L38:
            java.lang.String r1 = "com.android.internal.os.RuntimeInit$UncaughtHandler"
            java.lang.Class r4 = r0.getClass()     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.equals(r4)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L5a
            java.lang.String r1 = "backup system java handler: %s"
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L80
            r4[r2] = r5     // Catch: java.lang.Throwable -> L80
            com.tencent.bugly.proguard.al.a(r1, r4)     // Catch: java.lang.Throwable -> L80
            r6.f = r0     // Catch: java.lang.Throwable -> L80
            r6.e = r0     // Catch: java.lang.Throwable -> L80
            goto L69
        L5a:
            java.lang.String r1 = "backup java handler: %s"
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L80
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L80
            r4[r2] = r5     // Catch: java.lang.Throwable -> L80
            com.tencent.bugly.proguard.al.a(r1, r4)     // Catch: java.lang.Throwable -> L80
            r6.e = r0     // Catch: java.lang.Throwable -> L80
        L69:
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r6)     // Catch: java.lang.Throwable -> L80
            int r0 = r6.j     // Catch: java.lang.Throwable -> L80
            int r0 = r0 + r3
            r6.j = r0     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = "registered java monitor: %s"
            java.lang.Object[] r1 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L80
            r1[r2] = r3     // Catch: java.lang.Throwable -> L80
            com.tencent.bugly.proguard.al.a(r0, r1)     // Catch: java.lang.Throwable -> L80
            monitor-exit(r6)
            return
        L80:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final synchronized void a(com.tencent.bugly.crashreport.common.strategy.StrategyBean r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto L2a
            boolean r0 = r5.f     // Catch: java.lang.Throwable -> L27
            boolean r1 = r4.g     // Catch: java.lang.Throwable -> L27
            if (r0 == r1) goto L2a
            java.lang.String r0 = "java changed to %b"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L27
            r2 = 0
            boolean r3 = r5.f     // Catch: java.lang.Throwable -> L27
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> L27
            r1[r2] = r3     // Catch: java.lang.Throwable -> L27
            com.tencent.bugly.proguard.al.a(r0, r1)     // Catch: java.lang.Throwable -> L27
            boolean r5 = r5.f     // Catch: java.lang.Throwable -> L27
            if (r5 == 0) goto L23
            r4.a()     // Catch: java.lang.Throwable -> L27
            monitor-exit(r4)
            return
        L23:
            r4.b()     // Catch: java.lang.Throwable -> L27
            goto L2a
        L27:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L2a:
            monitor-exit(r4)
            return
    }

    public final void a(java.lang.Thread r22, java.lang.Throwable r23, boolean r24, java.lang.String r25, byte[] r26, boolean r27) {
            r21 = this;
            r1 = r21
            r2 = r22
            r3 = r23
            r4 = r24
            java.lang.String r5 = "sys default last handle end!"
            java.lang.String r6 = "sys default last handle start!"
            java.lang.String r7 = "system handle end!"
            java.lang.String r8 = "system handle start!"
            java.lang.String r9 = "crashreport last handle end!"
            java.lang.String r10 = "crashreport last handle start!"
            r11 = 0
            if (r4 == 0) goto L52
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r12 = r22.getName()
            r0[r11] = r12
            r12 = 1
            long r13 = r22.getId()
            java.lang.Long r13 = java.lang.Long.valueOf(r13)
            r0[r12] = r13
            java.lang.String r12 = "Java Crash Happen cause by %s(%d)"
            com.tencent.bugly.proguard.al.e(r12, r0)
            boolean r0 = a(r22)
            if (r0 == 0) goto L59
            java.lang.Object[] r0 = new java.lang.Object[r11]
            java.lang.String r12 = "this class has handled this exception"
            com.tencent.bugly.proguard.al.a(r12, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L4e
            java.lang.Object[] r0 = new java.lang.Object[r11]
            java.lang.String r12 = "call system handler"
            com.tencent.bugly.proguard.al.a(r12, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            goto L59
        L4e:
            c()
            goto L59
        L52:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            java.lang.String r12 = "Java Catch Happen"
            com.tencent.bugly.proguard.al.e(r12, r0)
        L59:
            boolean r0 = r1.g     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r0 != 0) goto La2
            java.lang.String r0 = "Java crash handler is disable. Just return."
            java.lang.Object[] r12 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.al.c(r0, r12)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r4 == 0) goto La1
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            if (r0 == 0) goto L80
            boolean r0 = a(r0)
            if (r0 == 0) goto L80
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r0)
            return
        L80:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L94
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r0)
            return
        L94:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r0)
            c()
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r0)
        La1:
            return
        La2:
            com.tencent.bugly.proguard.ac r0 = r1.c     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r0 != 0) goto Lb1
            java.lang.String r0 = "no remote but still store!"
            java.lang.Object[] r12 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.al.d(r0, r12)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
        Lb1:
            com.tencent.bugly.proguard.ac r0 = r1.c     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r0 = r0.c()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            boolean r0 = r0.f     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r12 = "JAVA_CRASH"
            java.lang.String r13 = "JAVA_CATCH"
            if (r0 != 0) goto L128
            com.tencent.bugly.proguard.ac r0 = r1.c     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r0 == 0) goto L128
            java.lang.String r0 = "crash report was closed by remote , will not upload to Bugly , print local for helpful!"
            java.lang.Object[] r14 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.al.e(r0, r14)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r4 == 0) goto Ld2
            r15 = r12
            goto Ld3
        Ld2:
            r15 = r13
        Ld3:
            java.lang.String r16 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.aa r0 = r1.d     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r18 = r22.getName()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r19 = com.tencent.bugly.proguard.ap.a(r23)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            r20 = 0
            r17 = r0
            com.tencent.bugly.proguard.as.a(r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r4 == 0) goto L127
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            if (r0 == 0) goto L106
            boolean r0 = a(r0)
            if (r0 == 0) goto L106
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r0)
            return
        L106:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L11a
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r0)
            return
        L11a:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r0)
            c()
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r0)
        L127:
            return
        L128:
            com.tencent.bugly.crashreport.crash.CrashDetailBean r0 = r21.b(r22, r23, r24, r25, r26, r27)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r0 != 0) goto L173
            java.lang.String r0 = "pkg crash datas fail!"
            java.lang.Object[] r12 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.al.e(r0, r12)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r4 == 0) goto L172
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            if (r0 == 0) goto L151
            boolean r0 = a(r0)
            if (r0 == 0) goto L151
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r0)
            return
        L151:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L165
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r0)
            return
        L165:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r0)
            c()
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r0)
        L172:
            return
        L173:
            if (r4 == 0) goto L176
            goto L177
        L176:
            r12 = r13
        L177:
            java.lang.String r13 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.aa r14 = r1.d     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r14 = r14.d     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r15 = r22.getName()     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            java.lang.String r16 = com.tencent.bugly.proguard.ap.a(r23)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            r17 = r0
            com.tencent.bugly.proguard.as.a(r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            com.tencent.bugly.proguard.as r12 = r1.b     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            boolean r12 = r12.a(r0, r4)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            if (r12 != 0) goto L199
            com.tencent.bugly.proguard.as r12 = r1.b     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            r12.b(r0, r4)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
        L199:
            if (r4 == 0) goto L1a0
            com.tencent.bugly.proguard.as r12 = r1.b     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
            r12.a(r0)     // Catch: java.lang.Throwable -> L1de java.lang.Throwable -> L1e0
        L1a0:
            if (r4 == 0) goto L227
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            if (r0 == 0) goto L1bc
            boolean r0 = a(r0)
            if (r0 == 0) goto L1bc
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r0)
            return
        L1bc:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L1d0
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r0)
            return
        L1d0:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r0)
            c()
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r0)
            return
        L1de:
            r0 = move-exception
            goto L228
        L1e0:
            r0 = move-exception
            boolean r12 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L1de
            if (r12 != 0) goto L1ea
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1de
        L1ea:
            if (r4 == 0) goto L227
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            if (r0 == 0) goto L206
            boolean r0 = a(r0)
            if (r0 == 0) goto L206
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.e
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r0)
            return
        L206:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            if (r0 == 0) goto L21a
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r0)
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.f
            r0.uncaughtException(r2, r3)
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r0)
            return
        L21a:
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r0)
            c()
            java.lang.Object[] r0 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r0)
        L227:
            return
        L228:
            if (r4 == 0) goto L266
            java.lang.Thread$UncaughtExceptionHandler r4 = r1.e
            if (r4 == 0) goto L245
            boolean r4 = a(r4)
            if (r4 != 0) goto L235
            goto L245
        L235:
            java.lang.Object[] r4 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r6, r4)
            java.lang.Thread$UncaughtExceptionHandler r4 = r1.e
            r4.uncaughtException(r2, r3)
            java.lang.Object[] r2 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r5, r2)
            goto L266
        L245:
            java.lang.Thread$UncaughtExceptionHandler r4 = r1.f
            if (r4 == 0) goto L259
            java.lang.Object[] r4 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r8, r4)
            java.lang.Thread$UncaughtExceptionHandler r4 = r1.f
            r4.uncaughtException(r2, r3)
            java.lang.Object[] r2 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r7, r2)
            goto L266
        L259:
            java.lang.Object[] r2 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r10, r2)
            c()
            java.lang.Object[] r2 = new java.lang.Object[r11]
            com.tencent.bugly.proguard.al.e(r9, r2)
        L266:
            throw r0
    }

    public final synchronized void b() {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            r5.g = r0     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = "close java monitor!"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L39
            com.tencent.bugly.proguard.al.a(r1, r2)     // Catch: java.lang.Throwable -> L39
            java.lang.Thread$UncaughtExceptionHandler r1 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = "bugly"
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L39
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L37
            java.lang.String r1 = "Java monitor to unregister: %s"
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L39
            r3[r0] = r4     // Catch: java.lang.Throwable -> L39
            com.tencent.bugly.proguard.al.a(r1, r3)     // Catch: java.lang.Throwable -> L39
            java.lang.Thread$UncaughtExceptionHandler r0 = r5.e     // Catch: java.lang.Throwable -> L39
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r0)     // Catch: java.lang.Throwable -> L39
            int r0 = r5.j     // Catch: java.lang.Throwable -> L39
            int r0 = r0 - r2
            r5.j = r0     // Catch: java.lang.Throwable -> L39
        L37:
            monitor-exit(r5)
            return
        L39:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    @Override
    public final void uncaughtException(java.lang.Thread r9, java.lang.Throwable r10) {
            r8 = this;
            java.lang.Object r0 = com.tencent.bugly.proguard.av.i
            monitor-enter(r0)
            r4 = 1
            r5 = 0
            r6 = 0
            com.tencent.bugly.proguard.aa r1 = r8.d     // Catch: java.lang.Throwable -> L12
            boolean r7 = r1.Q     // Catch: java.lang.Throwable -> L12
            r1 = r8
            r2 = r9
            r3 = r10
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r9
    }
}
