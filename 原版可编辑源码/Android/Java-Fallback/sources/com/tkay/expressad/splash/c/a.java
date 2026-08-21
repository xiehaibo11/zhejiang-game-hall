package com.tkay.expressad.splash.c;

public final class a {

    static class 1 {
    }

    static class a {
        private static final com.tkay.expressad.splash.c.a a = null;

        static {
                com.tkay.expressad.splash.c.a r0 = new com.tkay.expressad.splash.c.a
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.splash.c.a.a.a = r0
                return
        }

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.splash.c.a a() {
                com.tkay.expressad.splash.c.a r0 = com.tkay.expressad.splash.c.a.a.a
                return r0
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.splash.c.a a() {
            com.tkay.expressad.splash.c.a r0 = com.tkay.expressad.splash.c.a.a.a()
            return r0
    }

    private static void a(android.content.Context r1, com.tkay.expressad.splash.view.TYSplashView r2, com.tkay.expressad.splash.a.b r3, com.tkay.expressad.splash.b.a r4) {
            com.tkay.expressad.splash.view.TYSplashNativeView r0 = new com.tkay.expressad.splash.view.TYSplashNativeView     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> Lb
            if (r4 == 0) goto La
            r4.a(r0)     // Catch: java.lang.Throwable -> Lb
        La:
            return
        Lb:
            if (r4 == 0) goto L12
            java.lang.String r1 = "View render error."
            r4.a(r1)
        L12:
            return
    }

    public static void a(com.tkay.expressad.splash.view.TYSplashView r2, com.tkay.expressad.splash.a.b r3, com.tkay.expressad.splash.b.a r4) {
            android.content.Context r0 = r2.getContext()
            if (r0 != 0) goto Le
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
        Le:
            com.tkay.expressad.splash.view.TYSplashNativeView r1 = new com.tkay.expressad.splash.view.TYSplashNativeView     // Catch: java.lang.Throwable -> L17
            r1.<init>(r0, r2, r3)     // Catch: java.lang.Throwable -> L17
            r4.a(r1)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            java.lang.String r2 = "View render error."
            r4.a(r2)
            return
    }
}
