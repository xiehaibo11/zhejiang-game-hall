package com.tkay.core.common;

public final class d {
    com.tkay.core.common.f.d a;
    com.tkay.core.common.f.aj b;
    long c;
    com.tkay.core.api.TYBaseAdAdapter d;
    int e;
    java.lang.Runnable f;
    java.lang.Runnable g;
    boolean h;
    boolean i;
    private java.lang.Boolean j;



    private d(int r1) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            return
    }

    private void a(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    private void a(long r4, java.lang.Runnable r6, long r7, java.lang.Runnable r9) {
            r3 = this;
            r0 = -1
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 == 0) goto L18
            if (r6 == 0) goto L18
            com.tkay.core.common.d$1 r2 = new com.tkay.core.common.d$1
            r2.<init>(r3, r6)
            r3.f = r2
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r2 = r3.f
            r6.a(r2, r4)
        L18:
            int r4 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r4 == 0) goto L2e
            if (r9 == 0) goto L2e
            com.tkay.core.common.d$2 r4 = new com.tkay.core.common.d$2
            r4.<init>(r3, r9)
            r3.g = r4
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r5 = r3.g
            r4.a(r5, r7)
        L2e:
            return
    }

    private void a(com.tkay.core.api.TYBaseAdAdapter r1) {
            r0 = this;
            r0.d = r1
            return
    }

    private void a(com.tkay.core.common.f.aj r1) {
            r0 = this;
            r0.b = r1
            return
    }

    private void a(com.tkay.core.common.f.d r1) {
            r0 = this;
            r0.a = r1
            return
    }

    private void a(boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.j = r1
            return
    }

    private boolean a() {
            r3 = this;
            java.lang.Boolean r0 = r3.j
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = r2
        L9:
            if (r0 == 0) goto L1b
            boolean r0 = r3.h
            if (r0 != 0) goto L16
            boolean r0 = r3.i
            if (r0 == 0) goto L14
            goto L16
        L14:
            r0 = r2
            goto L17
        L16:
            r0 = r1
        L17:
            if (r0 != 0) goto L1a
            goto L1b
        L1a:
            return r2
        L1b:
            return r1
    }

    private boolean b() {
            r1 = this;
            java.lang.Boolean r0 = r1.j
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private com.tkay.core.common.f.d c() {
            r1 = this;
            com.tkay.core.common.f.d r0 = r1.a
            return r0
    }

    private long d() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    private void e() {
            r1 = this;
            r0 = 0
            r1.d = r0
            return
    }

    private int f() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    private void g() {
            r3 = this;
            java.lang.Runnable r0 = r3.f
            r1 = 0
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r2 = r3.f
            r0.c(r2)
            r3.f = r1
        L10:
            java.lang.Runnable r0 = r3.g
            if (r0 == 0) goto L1f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r2 = r3.g
            r0.c(r2)
            r3.g = r1
        L1f:
            return
    }

    private void h() {
            r2 = this;
            java.lang.Runnable r0 = r2.f
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.f
            r0.c(r1)
            r0 = 0
            r2.f = r0
        L10:
            return
    }

    private void i() {
            r2 = this;
            java.lang.Runnable r0 = r2.g
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.g
            r0.c(r1)
            r0 = 0
            r2.g = r0
        L10:
            return
    }

    private java.lang.Boolean j() {
            r1 = this;
            java.lang.Boolean r0 = r1.j
            return r0
    }

    private boolean k() {
            r1 = this;
            boolean r0 = r1.h
            if (r0 != 0) goto Lb
            boolean r0 = r1.i
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    private com.tkay.core.common.f.aj l() {
            r1 = this;
            com.tkay.core.common.f.aj r0 = r1.b
            return r0
    }
}
