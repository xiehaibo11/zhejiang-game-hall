package com.kwad.sdk.crash;

public final class b {
    private static final java.util.concurrent.atomic.AtomicBoolean ISLOADED = null;
    private static android.os.Handler TT;
    private static volatile boolean azr;
    private static volatile boolean azs;
    private static final java.lang.String[] azt = null;
    private static boolean azu;
    private static boolean azv;









    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.crash.b.TT = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.crash.b.ISLOADED = r0
            java.lang.String r0 = "c++_shared"
            java.lang.String r2 = "kscutils"
            java.lang.String r3 = "exception-handler"
            java.lang.String[] r0 = new java.lang.String[]{r0, r2, r3}
            com.kwad.sdk.crash.b.azt = r0
            com.kwad.sdk.crash.b.azu = r1
            com.kwad.sdk.crash.b.azv = r1
            return
    }

    public static boolean Em() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.crash.b.ISLOADED
            boolean r0 = r0.get()
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            r0 = 0
            java.lang.String[] r2 = com.kwad.sdk.crash.b.azt     // Catch: java.lang.Throwable -> L1f
            int r3 = r2.length     // Catch: java.lang.Throwable -> L1f
            r4 = r0
        Lf:
            if (r4 >= r3) goto L19
            r5 = r2[r4]     // Catch: java.lang.Throwable -> L1f
            java.lang.System.loadLibrary(r5)     // Catch: java.lang.Throwable -> L1f
            int r4 = r4 + 1
            goto Lf
        L19:
            java.util.concurrent.atomic.AtomicBoolean r2 = com.kwad.sdk.crash.b.ISLOADED     // Catch: java.lang.Throwable -> L1f
            r2.set(r1)     // Catch: java.lang.Throwable -> L1f
            return r1
        L1f:
            java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.sdk.crash.b.ISLOADED
            r1.set(r0)
            return r0
    }

    private static void En() {
            com.kwad.sdk.crash.handler.AnrHandler r0 = com.kwad.sdk.crash.handler.AnrHandler.getInstance()
            java.io.File r1 = com.kwad.sdk.crash.a.a.EO()
            com.kwad.sdk.crash.b$5 r2 = new com.kwad.sdk.crash.b$5
            r2.<init>()
            com.kwad.sdk.crash.b$6 r3 = new com.kwad.sdk.crash.b$6
            r3.<init>()
            r0.init(r1, r2, r3)
            return
    }

    private static synchronized void Eo() {
            java.lang.Class<com.kwad.sdk.crash.b> r0 = com.kwad.sdk.crash.b.class
            monitor-enter(r0)
            boolean r1 = com.kwad.sdk.crash.b.azr     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L1f
            r1 = 1
            com.kwad.sdk.crash.b.azr = r1     // Catch: java.lang.Throwable -> L21
            android.os.Handler r1 = com.kwad.sdk.core.threads.a.CN()     // Catch: java.lang.Throwable -> L21
            com.kwad.sdk.crash.b$8 r2 = new com.kwad.sdk.crash.b$8     // Catch: java.lang.Throwable -> L21
            r2.<init>()     // Catch: java.lang.Throwable -> L21
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L21
            int r4 = com.kwad.sdk.crash.d.azT     // Catch: java.lang.Throwable -> L21
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L21
            long r3 = r3.toMillis(r4)     // Catch: java.lang.Throwable -> L21
            r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r0)
            return
        L21:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void Ep() {
            Eq()
            boolean r0 = com.kwad.sdk.crash.b.azu
            if (r0 == 0) goto La
            Er()
        La:
            boolean r0 = com.kwad.sdk.crash.b.azv
            if (r0 == 0) goto L11
            Es()
        L11:
            return
    }

    private static void Eq() {
            java.lang.String r0 = "ExceptionCollector"
            java.lang.String r1 = "reportJavaException"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.report.f r0 = new com.kwad.sdk.crash.report.f
            r0.<init>()
            com.kwad.sdk.crash.handler.c r1 = com.kwad.sdk.crash.handler.c.ES()
            com.kwad.sdk.crash.report.e r1 = r1.getUploader()
            r0.a(r1)
            java.io.File r1 = com.kwad.sdk.crash.a.a.EN()
            r0.C(r1)
            return
    }

    private static void Er() {
            java.lang.String r0 = "ExceptionCollector"
            java.lang.String r1 = "reportAnrException"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.report.b r0 = new com.kwad.sdk.crash.report.b
            r0.<init>()
            com.kwad.sdk.crash.handler.AnrHandler r1 = com.kwad.sdk.crash.handler.AnrHandler.getInstance()
            com.kwad.sdk.crash.report.e r1 = r1.getUploader()
            r0.a(r1)
            java.io.File r1 = com.kwad.sdk.crash.a.a.EO()
            r0.C(r1)
            return
    }

    private static void Es() {
            java.lang.String r0 = "ExceptionCollector"
            java.lang.String r1 = "reportNativeException"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.report.g r0 = new com.kwad.sdk.crash.report.g
            r0.<init>()
            com.kwad.sdk.crash.handler.NativeCrashHandler r1 = com.kwad.sdk.crash.handler.NativeCrashHandler.getInstance()
            com.kwad.sdk.crash.report.e r1 = r1.getUploader()
            r0.a(r1)
            java.io.File r1 = com.kwad.sdk.crash.a.a.EP()
            r0.C(r1)
            return
    }

    static void Et() {
            En()
            return
    }

    static boolean Eu() {
            boolean r0 = com.kwad.sdk.crash.b.azv
            return r0
    }

    static android.os.Handler Ev() {
            android.os.Handler r0 = com.kwad.sdk.crash.b.TT
            return r0
    }

    static void Ew() {
            Ep()
            return
    }

    public static void a(com.kwad.sdk.crash.c r2) {
            android.content.Context r0 = r2.context
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = com.kwad.sdk.crash.b.azs
            if (r0 == 0) goto La
            return
        La:
            r0 = 1
            com.kwad.sdk.crash.b.azs = r0
            boolean r0 = r2.azu
            com.kwad.sdk.crash.b.azu = r0
            boolean r0 = r2.azv
            com.kwad.sdk.crash.b.azv = r0
            android.content.Context r0 = r2.context     // Catch: java.lang.Throwable -> L48
            com.kwad.sdk.crash.utils.e.init(r0)     // Catch: java.lang.Throwable -> L48
            android.content.Context r0 = r2.context     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = r2.azG     // Catch: java.lang.Throwable -> L48
            com.kwad.sdk.crash.a.a.init(r0, r1)     // Catch: java.lang.Throwable -> L48
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> L48
            r0.a(r2)     // Catch: java.lang.Throwable -> L48
            android.content.Context r0 = r2.context     // Catch: java.lang.Throwable -> L48
            bu(r0)     // Catch: java.lang.Throwable -> L48
            android.content.Context r0 = r2.context     // Catch: java.lang.Throwable -> L48
            boolean r0 = bt(r0)     // Catch: java.lang.Throwable -> L48
            if (r0 != 0) goto L45
            boolean r0 = com.kwad.sdk.crash.b.azu     // Catch: java.lang.Throwable -> L48
            if (r0 != 0) goto L3d
            boolean r0 = com.kwad.sdk.crash.b.azv     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L45
        L3d:
            com.kwad.sdk.crash.b$1 r0 = new com.kwad.sdk.crash.b$1     // Catch: java.lang.Throwable -> L48
            r0.<init>()     // Catch: java.lang.Throwable -> L48
            com.kwad.sdk.crash.g.a(r2, r0)     // Catch: java.lang.Throwable -> L48
        L45:
            Eo()     // Catch: java.lang.Throwable -> L48
        L48:
            return
    }

    static boolean access$000() {
            boolean r0 = com.kwad.sdk.crash.b.azu
            return r0
    }

    private static boolean bt(android.content.Context r2) {
            r0 = 1
            if (r2 != 0) goto L4
            return r0
        L4:
            int r2 = com.kwad.sdk.utils.y.ca(r2)
            r1 = 3
            if (r2 < r1) goto Lc
            return r0
        Lc:
            r2 = 0
            return r2
    }

    private static void bu(android.content.Context r4) {
            com.kwad.sdk.crash.handler.c r0 = com.kwad.sdk.crash.handler.c.ES()
            java.io.File r1 = com.kwad.sdk.crash.a.a.EN()
            com.kwad.sdk.crash.b$3 r2 = new com.kwad.sdk.crash.b$3
            r2.<init>()
            com.kwad.sdk.crash.b$4 r3 = new com.kwad.sdk.crash.b$4
            r3.<init>()
            r0.init(r1, r2, r3)
            com.kwad.sdk.crash.handler.d r0 = new com.kwad.sdk.crash.handler.d
            r0.<init>(r4)
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r0)
            return
    }

    private static void c(boolean r3, java.lang.String r4) {
            java.io.File r0 = com.kwad.sdk.crash.a.a.EP()
            boolean r0 = com.kwad.sdk.crash.a.a.A(r0)
            if (r0 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.crash.handler.NativeCrashHandler r0 = com.kwad.sdk.crash.handler.NativeCrashHandler.getInstance()
            java.io.File r1 = com.kwad.sdk.crash.a.a.EP()
            com.kwad.sdk.crash.b$7 r2 = new com.kwad.sdk.crash.b$7
            r2.<init>()
            r0.init(r1, r3, r4, r2)
            return
    }

    static void d(boolean r0, java.lang.String r1) {
            r0 = 0
            c(r0, r1)
            return
    }

    public static void l(java.lang.Throwable r1) {
            com.kwad.sdk.crash.b$2 r0 = new com.kwad.sdk.crash.b$2
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }
}
