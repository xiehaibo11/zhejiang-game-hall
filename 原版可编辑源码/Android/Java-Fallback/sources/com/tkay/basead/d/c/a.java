package com.tkay.basead.d.c;

public final class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.tkay.core.common.f.aa r2, com.tkay.basead.d.c r3) {
            if (r2 == 0) goto L4c
            if (r3 != 0) goto L5
            goto L4c
        L5:
            int r0 = r3.a()
            r2.v(r0)
            int r0 = r3.b()
            r2.w(r0)
            java.lang.String r0 = r3.d()
            r2.a(r0)
            int r0 = r3.c()
            r2.p(r0)
            int r0 = r3.e()
            r2.o(r0)
            int r0 = r3.f()
            long r0 = (long) r0
            r2.b(r0)
            int r0 = r3.g()
            r2.n(r0)
            int r0 = r3.h()
            r2.a(r0)
            int r0 = r3.i()
            r2.b(r0)
            java.lang.String r3 = r3.j()
            r2.b(r3)
        L4c:
            return
    }

    public static void a(com.tkay.core.common.f.i r4, com.tkay.core.common.f.z r5) {
            if (r4 == 0) goto Laf
            if (r5 != 0) goto L6
            goto Laf
        L6:
            com.tkay.core.common.f.j r0 = r4.m
            if (r0 == 0) goto Laf
            com.tkay.core.common.f.j r1 = r4.m
            boolean r1 = r1 instanceof com.tkay.core.common.f.aa
            if (r1 != 0) goto L12
            goto Laf
        L12:
            com.tkay.core.common.f.j r1 = r5.k()
            if (r1 == 0) goto L68
            int r2 = r0.y()
            r1.v(r2)
            int r2 = r0.z()
            r1.w(r2)
            int r2 = r0.s()
            r1.p(r2)
            java.lang.String r2 = r0.r()
            r1.a(r2)
            int r2 = r0.t()
            r1.q(r2)
            int r2 = r0.q()
            r1.o(r2)
            long r2 = r0.n()
            r1.b(r2)
            int r2 = r0.p()
            r1.n(r2)
            int r2 = r0.b()
            r1.b(r2)
            int r2 = r0.a()
            r1.a(r2)
            java.lang.String r0 = r0.E()
            r1.b(r0)
            r4.m = r1
            goto L6d
        L68:
            com.tkay.core.common.f.j r0 = r4.m
            r5.a(r0)
        L6d:
            boolean r0 = r5 instanceof com.tkay.core.common.f.f
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L82
            r0 = r5
            com.tkay.core.common.f.f r0 = (com.tkay.core.common.f.f) r0
            java.lang.String r0 = r0.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L82
            r0 = r2
            goto L83
        L82:
            r0 = r1
        L83:
            if (r0 == 0) goto Laf
            java.lang.String r5 = r5.A()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto Laf
            com.tkay.core.common.f.j r5 = r4.m
            r5.r(r2)
            com.tkay.core.common.f.j r5 = r4.m
            r5.t(r2)
            com.tkay.core.common.f.j r5 = r4.m
            r0 = 2
            r5.H(r0)
            com.tkay.core.common.f.j r5 = r4.m
            r5.h(r0)
            com.tkay.core.common.f.j r5 = r4.m
            r5.A(r1)
            com.tkay.core.common.f.j r4 = r4.m
            r5 = -2
            r4.s(r5)
        Laf:
            return
    }
}
