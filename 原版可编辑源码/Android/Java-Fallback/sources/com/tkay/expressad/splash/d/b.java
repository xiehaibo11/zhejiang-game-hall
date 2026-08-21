package com.tkay.expressad.splash.d;

public final class b implements com.tkay.expressad.splash.b.c {
    private com.tkay.expressad.out.p a;
    private com.tkay.expressad.splash.d.c b;
    private java.lang.String c;
    private java.lang.String d;

    public b(com.tkay.expressad.splash.d.c r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    private void a() {
            r1 = this;
            com.tkay.expressad.out.p r0 = r1.a
            if (r0 == 0) goto L7
            r0 = 0
            r1.a = r0
        L7:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r2, int r3) {
            r1 = this;
            com.tkay.expressad.splash.d.c r0 = r1.b
            if (r0 == 0) goto L2e
            boolean r0 = r0.a()
            if (r0 == 0) goto L2e
            if (r2 == 0) goto L2e
            com.tkay.expressad.out.p r0 = r1.a
            if (r0 == 0) goto L16
            r0.a()
            r2.t()
        L16:
            com.tkay.expressad.splash.d.c r0 = r1.b
            r0.b()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r2)
            r0 = 2
            if (r3 != r0) goto L2e
            com.tkay.expressad.splash.d.c r3 = r1.b
            if (r3 == 0) goto L2e
            r0 = 1
            r3.a(r2, r0)
        L2e:
            return
    }

    public final void a(com.tkay.expressad.out.p r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.splash.d.c r0 = r1.b
            if (r0 == 0) goto L16
            boolean r0 = r0.a()
            if (r0 == 0) goto L16
            com.tkay.expressad.out.p r0 = r1.a
            if (r0 == 0) goto L11
            r0.a(r2)
        L11:
            com.tkay.expressad.splash.d.c r2 = r1.b
            r2.b()
        L16:
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
