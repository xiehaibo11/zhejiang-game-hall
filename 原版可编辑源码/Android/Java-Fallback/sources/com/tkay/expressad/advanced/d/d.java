package com.tkay.expressad.advanced.d;

public final class d implements com.tkay.expressad.advanced.b.b {
    private static final java.lang.String a = "NativeAdvancedShowListenerImpl";
    private com.tkay.expressad.out.i b;
    private com.tkay.expressad.foundation.d.c c;
    private boolean d;
    private com.tkay.expressad.advanced.d.c e;

    public d(com.tkay.expressad.advanced.d.c r1, com.tkay.expressad.out.i r2, double r3, com.tkay.expressad.foundation.d.c r5) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.b = r2
            r0.c = r5
            boolean r1 = a(r3, r5)
            r0.d = r1
            return
    }

    private static boolean a(double r8, com.tkay.expressad.foundation.d.c r10) {
            r0 = 0
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L72
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.b.c()     // Catch: java.lang.Exception -> L72
            long r2 = r1.l()     // Catch: java.lang.Exception -> L72
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            long r6 = r1.x()     // Catch: java.lang.Exception -> L72
            long r6 = r6 * r4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = "cbp : "
            r1.<init>(r4)     // Catch: java.lang.Exception -> L72
            r1.append(r8)     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = " plct : "
            r1.append(r4)     // Catch: java.lang.Exception -> L72
            r1.append(r6)     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = " plctb : "
            r1.append(r4)     // Catch: java.lang.Exception -> L72
            r1.append(r2)     // Catch: java.lang.Exception -> L72
            r1 = 1
            if (r10 == 0) goto L3e
            boolean r2 = r10.a(r6, r2)     // Catch: java.lang.Exception -> L72
            if (r2 == 0) goto L3b
            r10.e(r1)     // Catch: java.lang.Exception -> L72
            return r1
        L3b:
            r10.e(r0)     // Catch: java.lang.Exception -> L72
        L3e:
            if (r10 == 0) goto L72
            boolean r10 = r10.A()     // Catch: java.lang.Exception -> L72
            if (r10 != 0) goto L72
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r10 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r10 != 0) goto L4d
            return r0
        L4d:
            java.util.Random r10 = new java.util.Random     // Catch: java.lang.Exception -> L72
            r10.<init>()     // Catch: java.lang.Exception -> L72
            double r2 = r10.nextDouble()     // Catch: java.lang.Exception -> L72
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = "hit : "
            r10.<init>(r4)     // Catch: java.lang.Exception -> L72
            r10.append(r2)     // Catch: java.lang.Exception -> L72
            java.lang.String r4 = " "
            r10.append(r4)     // Catch: java.lang.Exception -> L72
            int r8 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r8 <= 0) goto L6b
            r9 = r1
            goto L6c
        L6b:
            r9 = r0
        L6c:
            r10.append(r9)     // Catch: java.lang.Exception -> L72
            if (r8 <= 0) goto L72
            return r1
        L72:
            return r0
    }

    private void g() {
            r1 = this;
            com.tkay.expressad.out.i r0 = r1.b
            if (r0 == 0) goto L7
            r0 = 0
            r1.b = r0
        L7:
            return
    }

    @Override
    public final void a() {
            r2 = this;
            com.tkay.expressad.advanced.d.c r0 = r2.e
            if (r0 == 0) goto L7
            r1 = 1
            r0.d = r1
        L7:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = "load_to=0&allow_skip="
            r0.<init>(r1)
            com.tkay.expressad.advanced.d.c r1 = r2.e
            int r1 = r1.d()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            com.tkay.expressad.out.i r0 = r2.b
            if (r0 == 0) goto L27
            boolean r1 = r2.d
            if (r1 != 0) goto L27
            r0.b()
        L27:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.out.i r0 = r2.b
            if (r0 == 0) goto Lb
            boolean r1 = r2.d
            if (r1 != 0) goto Lb
            r0.a(r3)
        Lb:
            return
    }

    @Override
    public final void b() {
            r0 = this;
            return
    }

    @Override
    public final void c() {
            r2 = this;
            com.tkay.expressad.out.i r0 = r2.b
            if (r0 == 0) goto Le
            r0.f()
            com.tkay.expressad.advanced.d.c r0 = r2.e
            if (r0 == 0) goto Le
            r1 = 0
            r0.d = r1
        Le:
            return
    }

    @Override
    public final void d() {
            r0 = this;
            return
    }

    @Override
    public final void e() {
            r0 = this;
            return
    }

    @Override
    public final void f() {
            r0 = this;
            return
    }
}
