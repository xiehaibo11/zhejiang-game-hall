package com.tkay.expressad.advanced.d;

public final class b implements com.tkay.expressad.advanced.b.a {
    private com.tkay.expressad.out.i a;
    private com.tkay.expressad.advanced.d.c b;

    public b(com.tkay.expressad.advanced.d.c r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    private static void a() {
            return
    }

    private void b() {
            r2 = this;
            com.tkay.expressad.out.i r0 = r2.a
            r1 = 0
            if (r0 == 0) goto L7
            r2.a = r1
        L7:
            com.tkay.expressad.advanced.d.c r0 = r2.b
            if (r0 == 0) goto Ld
            r2.b = r1
        Ld:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c r3, int r4) {
            r2 = this;
            com.tkay.expressad.advanced.d.c r0 = r2.b
            if (r0 == 0) goto L2f
            boolean r0 = r0.a()
            if (r0 == 0) goto L2f
            if (r3 == 0) goto L2f
            com.tkay.expressad.out.i r0 = r2.a
            if (r0 == 0) goto L17
            com.tkay.expressad.advanced.d.c r1 = r2.b
            if (r1 == 0) goto L17
            r0.a()
        L17:
            com.tkay.expressad.advanced.d.c r0 = r2.b
            r0.b()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r3)
            r0 = 2
            if (r4 != r0) goto L2f
            com.tkay.expressad.advanced.d.c r4 = r2.b
            if (r4 == 0) goto L2f
            r0 = 1
            r4.a(r3, r0)
        L2f:
            return
    }

    public final void a(com.tkay.expressad.out.i r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final void a(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onLoadFailed: "
            r0.<init>(r1)
            r0.append(r4)
            r0.append(r3)
            com.tkay.expressad.advanced.d.c r4 = r2.b
            if (r4 == 0) goto L23
            boolean r4 = r4.a()
            if (r4 == 0) goto L23
            com.tkay.expressad.out.i r4 = r2.a
            if (r4 == 0) goto L1e
            r4.a(r3)
        L1e:
            com.tkay.expressad.advanced.d.c r3 = r2.b
            r3.b()
        L23:
            return
    }
}
