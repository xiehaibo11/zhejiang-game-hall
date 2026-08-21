package com.tkay.expressad.mbbanner.a.c;

public class e implements com.tkay.expressad.mbbanner.a.c.c {
    private static final java.lang.String a = null;
    private com.tkay.expressad.mbbanner.a.c.c b;
    private com.tkay.expressad.d.c c;
    private boolean d;

    static {
            java.lang.Class<com.tkay.expressad.mbbanner.a.c.e> r0 = com.tkay.expressad.mbbanner.a.c.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.mbbanner.a.c.e.a = r0
            return
    }

    public e(com.tkay.expressad.mbbanner.a.c.c r2, com.tkay.expressad.d.c r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.c = r3
            r1.b = r2
            return
    }

    private static boolean a(com.tkay.expressad.d.c r5, boolean r6) {
            r0 = 0
            if (r6 == 0) goto L4
            return r0
        L4:
            if (r5 == 0) goto L24
            double r1 = r5.a()
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 != 0) goto L11
            return r0
        L11:
            double r5 = r5.a()
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            double r1 = r1.nextDouble()
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 <= 0) goto L24
            r5 = 1
            return r5
        L24:
            return r0
    }

    @Override
    public final void a() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r2.b
            if (r0 == 0) goto Lb
            boolean r1 = r2.d
            if (r1 != 0) goto Lb
            r0.a(r3)
        Lb:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r2, boolean r3) {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r3 = r1.b
            if (r3 == 0) goto L9
            boolean r0 = r1.d
            r3.a(r2, r0)
        L9:
            return
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r7) {
            r6 = this;
            if (r7 == 0) goto L41
            int r0 = r7.size()     // Catch: java.lang.Exception -> L41
            if (r0 <= 0) goto L41
            com.tkay.expressad.d.c r0 = r6.c     // Catch: java.lang.Exception -> L41
            r1 = 0
            java.lang.Object r2 = r7.get(r1)     // Catch: java.lang.Exception -> L41
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Exception -> L41
            boolean r2 = r2.A()     // Catch: java.lang.Exception -> L41
            if (r2 != 0) goto L35
            if (r0 == 0) goto L35
            double r2 = r0.a()     // Catch: java.lang.Exception -> L41
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L35
            double r2 = r0.a()     // Catch: java.lang.Exception -> L41
            java.util.Random r0 = new java.util.Random     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            double r4 = r0.nextDouble()     // Catch: java.lang.Exception -> L41
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L35
            r1 = 1
        L35:
            r6.d = r1     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            boolean r1 = r6.d     // Catch: java.lang.Exception -> L41
            r0.append(r1)     // Catch: java.lang.Exception -> L41
        L41:
            com.tkay.expressad.mbbanner.a.c.c r0 = r6.b
            if (r0 == 0) goto L48
            r0.a(r7)
        L48:
            return
    }

    @Override
    public final void a(boolean r2) {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void b() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    @Override
    public final void c() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    @Override
    public final void d() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }
}
