package com.tkay.expressad.splash.c;

public final class b {
    private static java.lang.String a = "ResManager";
    private static int b = 1;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> c;



    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tkay.expressad.splash.c.b.c = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.foundation.d.c a(com.tkay.expressad.foundation.d.c r4) {
            java.lang.String r0 = r4.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L2a
            java.lang.String r0 = r4.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r4.d()
            java.lang.String r3 = "<MBTPLMARK>"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L23
            goto L2a
        L23:
            r4.a(r1)
            r4.b(r2)
            goto L30
        L2a:
            r4.a(r2)
            r4.b(r1)
        L30:
            return r4
    }

    static java.util.concurrent.ConcurrentHashMap a() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.splash.c.b.c
            return r0
    }

    public static void a(com.tkay.expressad.splash.view.TYSplashView r3, com.tkay.expressad.foundation.d.c r4, com.tkay.expressad.splash.view.a r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r4.be()
            com.tkay.expressad.splash.c.b$1 r2 = new com.tkay.expressad.splash.c.b$1
            r2.<init>(r4, r5, r3)
            r0.a(r1, r2)
            java.lang.String r3 = r4.bd()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L3a
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            com.tkay.expressad.foundation.g.d.b r3 = com.tkay.expressad.foundation.g.d.b.a(r3)
            java.lang.String r4 = r4.bd()
            com.tkay.expressad.splash.c.b$2 r5 = new com.tkay.expressad.splash.c.b$2
            r5.<init>()
            r3.a(r4, r5)
        L3a:
            return
    }

    private static void a(com.tkay.expressad.splash.view.TYSplashView r1, java.lang.String r2, com.tkay.expressad.foundation.d.c r3, java.lang.String r4, java.lang.String r5, boolean r6, int r7, boolean r8) {
            com.tkay.expressad.splash.c.e$c r0 = new com.tkay.expressad.splash.c.e$c
            r0.<init>()
            r0.c(r5)
            r0.b(r4)
            r0.a(r3)
            r0.a(r2)
            r0.b(r6)
            r0.a(r7)
            r0.a(r8)
            com.tkay.expressad.splash.c.e r2 = com.tkay.expressad.splash.c.e.a.a()
            r3 = 0
            r2.a(r1, r0, r3)
            return
    }

    public static void a(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.splash.c.b.c
            r0.remove(r1)
            return
    }

    public static boolean a(com.tkay.expressad.splash.view.TYSplashView r3, com.tkay.expressad.foundation.d.c r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = 1
            java.lang.String r2 = r4.S()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L13
            boolean r1 = r3.isVideoReady()
        L13:
            if (r1 == 0) goto L23
            java.lang.String r2 = r4.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L23
            boolean r1 = r3.isH5Ready()
        L23:
            if (r1 == 0) goto L3d
            java.lang.String r2 = r4.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L3d
            java.lang.String r2 = r4.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3d
            boolean r1 = r3.isH5Ready()
        L3d:
            java.lang.String r2 = r4.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L52
            java.lang.String r2 = r4.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L52
            r1 = r0
        L52:
            boolean r2 = r4.j()
            if (r2 == 0) goto L67
            java.lang.String r4 = r4.be()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L68
            boolean r0 = r3.isImageReady()
            goto L68
        L67:
            r0 = r1
        L68:
            return r0
    }

    private static java.lang.String b(java.lang.String r3) {
            java.lang.String r0 = ""
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L20
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L20
            boolean r3 = r1.exists()     // Catch: java.lang.Throwable -> L20
            if (r3 == 0) goto L26
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "file:///"
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L20
            r3.append(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L20
            goto L26
        L20:
            r3 = move-exception
            throw r3     // Catch: java.lang.Exception -> L22
        L22:
            r3 = move-exception
            r3.getMessage()
        L26:
            return r0
    }
}
