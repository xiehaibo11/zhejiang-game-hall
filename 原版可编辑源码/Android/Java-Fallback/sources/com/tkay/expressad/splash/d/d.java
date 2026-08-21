package com.tkay.expressad.splash.d;

public class d implements com.tkay.expressad.splash.b.d {
    private static final java.lang.String a = "SplashShowListenerImpl";
    private com.tkay.expressad.out.q b;
    private com.tkay.expressad.foundation.d.c c;
    private boolean d;
    private com.tkay.expressad.splash.d.c e;

    public d(com.tkay.expressad.splash.d.c r1, com.tkay.expressad.out.q r2, double r3, com.tkay.expressad.foundation.d.c r5) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.b = r2
            r0.c = r5
            boolean r1 = a(r3, r5)
            r0.d = r1
            return
    }

    private static boolean a(double r10, com.tkay.expressad.foundation.d.c r12) {
            r0 = 0
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L89
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L89
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L89
            r2 = 0
            if (r1 != 0) goto L2a
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L89
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L89
            if (r1 == 0) goto L2a
            long r2 = r1.l()     // Catch: java.lang.Exception -> L89
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            long r6 = r1.x()     // Catch: java.lang.Exception -> L89
            long r4 = r4 * r6
            r8 = r2
            r2 = r4
            r4 = r8
            goto L2b
        L2a:
            r4 = r2
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = "cbp : "
            r1.<init>(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r10)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = " plct : "
            r1.append(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = " plctb : "
            r1.append(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r4)     // Catch: java.lang.Exception -> L89
            r1 = 1
            if (r12 == 0) goto L55
            boolean r2 = r12.a(r2, r4)     // Catch: java.lang.Exception -> L89
            if (r2 == 0) goto L52
            r12.e(r1)     // Catch: java.lang.Exception -> L89
            return r1
        L52:
            r12.e(r0)     // Catch: java.lang.Exception -> L89
        L55:
            if (r12 == 0) goto L89
            boolean r12 = r12.A()     // Catch: java.lang.Exception -> L89
            if (r12 != 0) goto L89
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r12 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r12 != 0) goto L64
            return r0
        L64:
            java.util.Random r12 = new java.util.Random     // Catch: java.lang.Exception -> L89
            r12.<init>()     // Catch: java.lang.Exception -> L89
            double r2 = r12.nextDouble()     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = "hit : "
            r12.<init>(r4)     // Catch: java.lang.Exception -> L89
            r12.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = " "
            r12.append(r4)     // Catch: java.lang.Exception -> L89
            int r10 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r10 <= 0) goto L82
            r11 = r1
            goto L83
        L82:
            r11 = r0
        L83:
            r12.append(r11)     // Catch: java.lang.Exception -> L89
            if (r10 <= 0) goto L89
            return r1
        L89:
            return r0
    }

    private static void d() {
            return
    }

    private static void e() {
            return
    }

    private void f() {
            r1 = this;
            com.tkay.expressad.out.q r0 = r1.b
            if (r0 == 0) goto L7
            r0 = 0
            r1.b = r0
        L7:
            return
    }

    @Override
    public final void a() {
            r3 = this;
            com.tkay.expressad.splash.d.c r0 = r3.e
            if (r0 == 0) goto L7
            r1 = 1
            r0.a = r1
        L7:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = "load_to="
            r0.<init>(r1)
            com.tkay.expressad.splash.d.c r1 = r3.e
            long r1 = r1.c()
            r0.append(r1)
            java.lang.String r1 = "&allow_skip="
            r0.append(r1)
            com.tkay.expressad.splash.d.c r1 = r3.e
            boolean r1 = r1.d()
            r0.append(r1)
            java.lang.String r1 = "&countdown="
            r0.append(r1)
            com.tkay.expressad.splash.d.c r1 = r3.e
            int r1 = r1.e()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            com.tkay.expressad.out.q r0 = r3.b
            if (r0 == 0) goto L43
            boolean r1 = r3.d
            if (r1 != 0) goto L43
            r0.a()
        L43:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.out.q r0 = r2.b
            if (r0 == 0) goto Lb
            boolean r1 = r2.d
            if (r1 != 0) goto Lb
            r0.a(r3)
        Lb:
            return
    }

    @Override
    public final void a(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.splash.d.c r0 = r2.e
            if (r0 == 0) goto L7
            r1 = 0
            r0.a = r1
        L7:
            com.tkay.expressad.out.q r0 = r2.b
            if (r0 == 0) goto Le
            r0.a(r3)
        Le:
            return
    }

    @Override
    public final void b() {
            r2 = this;
            com.tkay.expressad.out.q r0 = r2.b
            if (r0 == 0) goto L7
            r0.b()
        L7:
            com.tkay.expressad.splash.d.c r0 = r2.e
            if (r0 == 0) goto Le
            r1 = 0
            r0.a = r1
        Le:
            return
    }

    @Override
    public final void c() {
            r0 = this;
            return
    }
}
