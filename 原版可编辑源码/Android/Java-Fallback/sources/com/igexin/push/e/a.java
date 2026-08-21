package com.igexin.push.e;

public class a {
    private static java.lang.String a;
    private boolean b;

    static {
            java.lang.Class<com.igexin.push.e.a> r0 = com.igexin.push.e.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.e.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void b(boolean r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.e.a.a
            r0.append(r1)
            java.lang.String r1 = "|call setActive, param active = "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = "; this.active = "
            r0.append(r1)
            boolean r1 = r6.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            boolean r0 = r6.b
            if (r0 == r7) goto L67
            r6.b = r7
            if (r7 == 0) goto L4a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.push.e.a.a
            r7.append(r0)
            java.lang.String r0 = "|active = true, start connect~~~~"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r7, r0)
            r6.e()
            goto L94
        L4a:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.push.e.a.a
            r7.append(r0)
            java.lang.String r0 = "|active = false, disconnect..."
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r7, r0)
            r7 = 1
            r6.a(r7)
            goto L94
        L67:
            if (r0 == 0) goto L94
            boolean r7 = com.igexin.push.core.d.n
            if (r7 != 0) goto L94
            long r2 = com.igexin.push.core.d.F
            r4 = 1500(0x5dc, double:7.41E-321)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 <= 0) goto L94
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.push.e.a.a
            r7.append(r0)
            java.lang.String r0 = "|start active again, online = false, reset delay"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r7, r0)
            r0 = 0
            com.igexin.push.core.d.F = r0
            r6.d()
        L94:
            return
    }

    public int a(java.lang.String r2, com.igexin.push.d.c.c r3) {
            r1 = this;
            r0 = 0
            int r2 = r1.a(r2, r3, r0)
            return r2
    }

    public int a(java.lang.String r10, com.igexin.push.d.c.c r11, boolean r12) {
            r9 = this;
            if (r10 == 0) goto L81
            if (r11 != 0) goto L6
            goto L81
        L6:
            boolean r10 = com.igexin.push.core.d.n
            r0 = 0
            if (r10 != 0) goto L37
            boolean r10 = r11 instanceof com.igexin.push.d.c.g
            if (r10 != 0) goto L37
            boolean r10 = r11 instanceof com.igexin.push.d.c.i
            if (r10 != 0) goto L37
            boolean r10 = r11 instanceof com.igexin.push.d.c.d
            if (r10 != 0) goto L37
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r12 = "networkLayer|sendData|not online|"
            r10.append(r12)
            java.lang.Class r11 = r11.getClass()
            java.lang.String r11 = r11.getName()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.Object[] r11 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r10, r11)
            r10 = -3
            return r10
        L37:
            boolean r10 = r9.b
            if (r10 == 0) goto L80
            r10 = -2
            if (r12 == 0) goto L66
            r12 = 10
            int r1 = com.igexin.push.config.j.e
            if (r1 <= 0) goto L46
            int r12 = com.igexin.push.config.j.e
        L46:
            r7 = r12
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()
            r3 = 3
            com.igexin.push.core.c r12 = com.igexin.push.core.c.a()
            com.igexin.b.a.b.b r4 = r12.h()
            r6 = 1
            com.igexin.push.d.h r8 = new com.igexin.push.d.h
            r8.<init>()
            r5 = r11
            com.igexin.b.a.b.e r11 = r1.a(r2, r3, r4, r5, r6, r7, r8)
            if (r11 != 0) goto L80
            return r10
        L66:
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()
            r3 = 3
            com.igexin.push.core.c r12 = com.igexin.push.core.c.a()
            com.igexin.b.a.b.b r4 = r12.h()
            r6 = 1
            r5 = r11
            com.igexin.b.a.b.e r11 = r1.a(r2, r3, r4, r5, r6)
            if (r11 != 0) goto L80
            return r10
        L80:
            return r0
        L81:
            r10 = -1
            return r10
    }

    public void a(com.igexin.b.a.b.a.a.q r2) {
            r1 = this;
            com.igexin.b.a.b.a.a.q r0 = com.igexin.b.a.b.a.a.q.a
            if (r2 != r0) goto L18
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            com.igexin.push.d.b.b r0 = new com.igexin.push.d.b.b
            r0.<init>()
        Ld:
            r2.a(r0)
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            r2.c()
            goto L26
        L18:
            com.igexin.b.a.b.a.a.q r0 = com.igexin.b.a.b.a.a.q.b
            if (r2 != r0) goto L26
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            com.igexin.push.d.b.a r0 = new com.igexin.push.d.b.a
            r0.<init>()
            goto Ld
        L26:
            return
    }

    public void a(com.igexin.push.d.c.c r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.a(r2)
            return
    }

    public void a(boolean r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.e.a.a
            r0.append(r1)
            java.lang.String r1 = "|call -> disconnect, reset delay = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            if (r3 == 0) goto L22
            r0 = 0
            com.igexin.push.core.d.F = r0
        L22:
            com.igexin.b.a.b.a.a.f r3 = com.igexin.b.a.b.a.a.f.a()
            r3.c()
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public void b() {
            r5 = this;
            boolean r0 = com.igexin.push.core.d.k
            long r1 = java.lang.System.currentTimeMillis()
            boolean r1 = com.igexin.push.util.a.a(r1)
            boolean r2 = com.igexin.push.util.a.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.e.a.a
            r3.append(r4)
            java.lang.String r4 = "|start: isPushOn = "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = " silentTime = "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = " isBlockEndTime = "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r3, r4)
            if (r0 == 0) goto L44
            if (r1 != 0) goto L44
            if (r2 == 0) goto L44
            r0 = 1
            r5.b(r0)
        L44:
            return
    }

    public void c() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.e.a.a
            r0.append(r1)
            java.lang.String r1 = "|stop by user"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            r3.b(r1)
            boolean r0 = com.igexin.push.core.d.n
            if (r0 == 0) goto L29
            com.igexin.push.core.d.n = r1
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()
            r0.b()
        L29:
            return
    }

    public void d() {
            r2 = this;
            com.igexin.push.d.b r0 = com.igexin.push.d.b.a()
            com.igexin.push.d.i r0 = r0.c()
            long r0 = r0.a()
            com.igexin.push.core.d.F = r0
            com.igexin.push.f.b.f r0 = com.igexin.push.f.b.f.i()
            r0.j()
            return
    }

    public void e() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.e.a.a
            r0.append(r1)
            java.lang.String r1 = "|call -> tryConnect and reset delay = 0"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            r0 = 1
            r2.a(r0)
            return
    }

    public void f() {
            r3 = this;
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            r0.c()
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            com.igexin.push.core.h r1 = com.igexin.push.core.h.a()
            com.igexin.push.core.j r2 = com.igexin.push.core.j.c
            r1.a(r2)
            r0.i()
            boolean r0 = r3.h()
            r1 = 0
            if (r0 == 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r0.append(r2)
            java.lang.String r2 = "|sdkOn = false or pushOn = false, disconect|user"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            goto L57
        L3f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r0.append(r2)
            java.lang.String r2 = "|disconnect by network"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
        L57:
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            java.lang.Class<com.igexin.b.a.b.a.a.m> r2 = com.igexin.b.a.b.a.a.m.class
            r0.a(r2)
            r3.a(r1)
            return
    }

    public void g() {
            r3 = this;
            r0 = -1
            com.igexin.push.d.a.b.b = r0
            boolean r0 = com.igexin.push.core.d.j
            r1 = 0
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r0.append(r2)
            java.lang.String r2 = "|isAppidWrong = true"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.String r1 = "isAppidWrong = true"
            r0.a(r1)
            return
        L2a:
            boolean r0 = com.igexin.push.util.EncryptUtils.isLoadSuccess()
            if (r0 == 0) goto L51
            boolean r0 = com.igexin.push.core.d.al
            if (r0 == 0) goto L38
            r3.d()
            goto L69
        L38:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r0.append(r2)
            java.lang.String r2 = "|initSuccess = false"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            goto L69
        L51:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r0.append(r2)
            java.lang.String r2 = "|so error ++++++++"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        L69:
            return
    }

    public boolean h() {
            r1 = this;
            boolean r0 = com.igexin.push.core.d.k
            r0 = r0 ^ 1
            return r0
    }

    public void i() {
            r4 = this;
            com.igexin.push.core.h r0 = com.igexin.push.core.h.a()
            com.igexin.push.core.j r1 = com.igexin.push.core.j.d
            r0.a(r1)
            boolean r0 = com.igexin.push.util.a.f()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.e.a.a
            r1.append(r2)
            java.lang.String r2 = "|network changed, available = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = ", last = "
            r1.append(r2)
            boolean r2 = com.igexin.push.core.d.i
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            com.igexin.push.d.b r1 = com.igexin.push.d.b.a()
            r1.b()
            if (r0 != 0) goto L55
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.igexin.push.e.a.a
            r1.append(r3)
            java.lang.String r3 = "|network changed, available = false, do nothing"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            goto L74
        L55:
            boolean r1 = com.igexin.push.core.d.i
            if (r1 != 0) goto L74
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.igexin.push.e.a.a
            r1.append(r3)
            java.lang.String r3 = "|network changed, try connect reset delay"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            r4.e()
        L74:
            if (r0 == 0) goto L7d
            com.igexin.push.c.i r1 = com.igexin.push.c.i.a()
            r1.c()
        L7d:
            com.igexin.push.core.d.i = r0
            return
    }
}
