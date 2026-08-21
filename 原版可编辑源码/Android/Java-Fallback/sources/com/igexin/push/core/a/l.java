package com.igexin.push.core.a;

public class l extends com.igexin.push.core.a.a {
    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    private void b() {
            r3 = this;
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Login successed with cid = "
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            com.igexin.push.d.b r0 = com.igexin.push.d.b.a()
            r0.f()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "loginRsp|"
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.u
            r0.append(r1)
            java.lang.String r1 = "|success"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "isCidBroadcasted|"
            r0.append(r2)
            boolean r2 = com.igexin.push.core.d.o
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            boolean r0 = com.igexin.push.core.d.o
            r1 = 1
            if (r0 != 0) goto L65
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()
            r0.c()
            com.igexin.push.core.d.o = r1
        L65:
            com.igexin.push.core.d.n = r1
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()
            r0.b()
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.d()
            java.lang.String r0 = com.igexin.push.core.d.A
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L84
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.e()
        L84:
            com.igexin.push.util.c.f()
            r3.a()
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r0.b()
            r3.d()
            r3.e()
            return
    }

    private void c() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "loginRsp|"
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.u
            r0.append(r1)
            java.lang.String r1 = "|failed"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Login "
            r2.append(r3)
            java.lang.String r3 = com.igexin.push.core.d.u
            r2.append(r3)
            java.lang.String r3 = " failed"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.a(r2)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "LoginResultAction login failed, clear session or cid"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r0.c()
            com.igexin.push.core.m r0 = com.igexin.push.core.m.a()
            r0.c()
            return
    }

    private void d() {
            r2 = this;
            java.lang.String r0 = com.igexin.push.core.d.u
            java.lang.String r1 = com.igexin.push.core.d.v
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            java.lang.String r0 = com.igexin.push.core.d.u
            com.igexin.push.core.d.v = r0
        Le:
            return
    }

    private void e() {
            r4 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            boolean r0 = com.igexin.assist.sdk.a.i(r0)
            if (r0 != 0) goto L9
            return
        L9:
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.a.m r1 = new com.igexin.push.core.a.m
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    public void a() {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.push.core.d.H
            long r0 = r0 - r2
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            long r0 = r0 - r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            r2 = 1
            if (r0 <= 0) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r1
        L16:
            java.lang.String r3 = com.igexin.push.core.d.C
            java.lang.String r4 = com.igexin.push.core.d.B
            boolean r3 = com.igexin.b.b.a.a(r3, r4)
            r3 = r3 ^ r2
            java.lang.String r4 = com.igexin.push.core.d.u
            java.lang.String r5 = com.igexin.push.core.d.v
            boolean r4 = r4.equals(r5)
            r2 = r2 ^ r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "LoginResultAction|isOverOneDay = "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ", isDeviceTokenDiff = "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r5 = ", isCidDiff = "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r1)
            if (r0 != 0) goto L54
            if (r3 != 0) goto L54
            if (r2 == 0) goto L5b
        L54:
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.f()
        L5b:
            return
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean a(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof com.igexin.push.d.c.k
            if (r0 == 0) goto L24
            r0 = 0
            com.igexin.push.core.d.F = r0
            boolean r0 = com.igexin.push.core.d.n
            if (r0 != 0) goto L24
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            r0.h()
            com.igexin.push.d.c.k r3 = (com.igexin.push.d.c.k) r3
            boolean r3 = r3.a
            if (r3 == 0) goto L21
            r2.b()
            goto L24
        L21:
            r2.c()
        L24:
            r3 = 1
            return r3
    }
}
