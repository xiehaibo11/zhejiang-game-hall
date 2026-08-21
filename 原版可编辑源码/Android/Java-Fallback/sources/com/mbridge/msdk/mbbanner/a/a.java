package com.mbridge.msdk.mbbanner.a;

public final class a {
    private static java.lang.String a = "BannerController";
    private java.lang.String b;
    private java.lang.String c;
    private com.mbridge.msdk.out.MBridgeIds d;
    private boolean e;
    private int f;
    private com.mbridge.msdk.out.MBBannerView g;
    private int h;
    private int i;
    private int j;
    private int k;
    private com.mbridge.msdk.out.BannerAdListener l;
    private com.mbridge.msdk.foundation.entity.CampaignUnit m;
    private com.mbridge.msdk.mbbanner.common.c.c n;
    private com.mbridge.msdk.c.d o;
    private com.mbridge.msdk.c.c p;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private boolean u;
    private com.mbridge.msdk.mbbanner.common.b.c v;
    private com.mbridge.msdk.mbbanner.common.b.b w;



    static {
            return
    }

    public a(com.mbridge.msdk.out.MBBannerView r2, com.mbridge.msdk.out.BannerSize r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.k = r0
            com.mbridge.msdk.mbbanner.a.a$1 r0 = new com.mbridge.msdk.mbbanner.a.a$1
            r0.<init>(r1)
            r1.v = r0
            com.mbridge.msdk.mbbanner.a.a$2 r0 = new com.mbridge.msdk.mbbanner.a.a$2
            r0.<init>(r1)
            r1.w = r0
            r1.g = r2
            if (r3 == 0) goto L24
            int r2 = r3.getHeight()
            r1.h = r2
            int r2 = r3.getWidth()
            r1.i = r2
        L24:
            r1.b = r5
            r1.c = r4
            com.mbridge.msdk.out.MBridgeIds r2 = new com.mbridge.msdk.out.MBridgeIds
            java.lang.String r3 = r1.c
            java.lang.String r4 = r1.b
            r2.<init>(r3, r4)
            r1.d = r2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.l()
            com.mbridge.msdk.c.c r4 = r1.p
            if (r4 != 0) goto L4e
            com.mbridge.msdk.c.c r4 = new com.mbridge.msdk.c.c
            r4.<init>()
            r1.p = r4
        L4e:
            com.mbridge.msdk.c.c r4 = r1.p
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            java.lang.String r0 = r1.b
            r4.a(r5, r2, r3, r0)
            r1.g()
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignUnit a(com.mbridge.msdk.mbbanner.a.a r0, com.mbridge.msdk.foundation.entity.CampaignUnit r1) {
            r0.m = r1
            return r1
    }

    static com.mbridge.msdk.out.BannerAdListener a(com.mbridge.msdk.mbbanner.a.a r0) {
            com.mbridge.msdk.out.BannerAdListener r0 = r0.l
            return r0
    }

    static void a(com.mbridge.msdk.mbbanner.a.a r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    static boolean a(com.mbridge.msdk.mbbanner.a.a r0, boolean r1) {
            r0.u = r1
            return r1
    }

    private int b(int r3) {
            r2 = this;
            r0 = 180(0xb4, float:2.52E-43)
            r1 = 10
            if (r3 <= 0) goto Ld
            if (r3 >= r1) goto La
            r3 = r1
            goto Ld
        La:
            if (r3 <= r0) goto Ld
            r3 = r0
        Ld:
            return r3
    }

    static com.mbridge.msdk.out.MBridgeIds b(com.mbridge.msdk.mbbanner.a.a r0) {
            com.mbridge.msdk.out.MBridgeIds r0 = r0.d
            return r0
    }

    private void b(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.out.BannerAdListener r0 = r3.l
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.MBridgeIds r1 = r3.d
            r0.onLoadFailed(r1, r4)
        L9:
            java.lang.String r0 = com.mbridge.msdk.mbbanner.a.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "showFailed:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            r3.c()
            return
    }

    static boolean b(com.mbridge.msdk.mbbanner.a.a r0, boolean r1) {
            r0.t = r1
            return r1
    }

    static java.lang.String c(com.mbridge.msdk.mbbanner.a.a r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static java.lang.String d(com.mbridge.msdk.mbbanner.a.a r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static int e(com.mbridge.msdk.mbbanner.a.a r0) {
            int r0 = r0.i
            return r0
    }

    static int f(com.mbridge.msdk.mbbanner.a.a r0) {
            int r0 = r0.h
            return r0
    }

    static java.lang.String f() {
            java.lang.String r0 = com.mbridge.msdk.mbbanner.a.a.a
            return r0
    }

    static int g(com.mbridge.msdk.mbbanner.a.a r0) {
            int r0 = r0.j
            return r0
    }

    private void g() {
            r3 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r3.b
            com.mbridge.msdk.c.d r0 = r0.e(r1, r2)
            r3.o = r0
            if (r0 != 0) goto L1e
            java.lang.String r0 = r3.b
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r0)
            r3.o = r0
        L1e:
            int r0 = r3.k
            r1 = -1
            if (r0 != r1) goto L2f
            com.mbridge.msdk.c.d r0 = r3.o
            int r0 = r0.b()
            int r0 = r3.b(r0)
            r3.j = r0
        L2f:
            int r0 = r3.f
            if (r0 != 0) goto L47
            com.mbridge.msdk.c.d r0 = r3.o
            int r0 = r0.c()
            r1 = 1
            if (r0 != r1) goto L3d
            goto L3e
        L3d:
            r1 = 0
        L3e:
            r3.e = r1
            com.mbridge.msdk.mbbanner.common.c.c r0 = r3.n
            if (r0 == 0) goto L47
            r0.a(r1)
        L47:
            return
    }

    static com.mbridge.msdk.mbbanner.common.b.b h(com.mbridge.msdk.mbbanner.a.a r0) {
            com.mbridge.msdk.mbbanner.common.b.b r0 = r0.w
            return r0
    }

    private void h() {
            r8 = this;
            boolean r0 = r8.s
            if (r0 != 0) goto L4c
            boolean r0 = r8.t
            if (r0 != 0) goto L9
            goto L4c
        L9:
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r8.m
            if (r0 == 0) goto L44
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            if (r0 != 0) goto L25
            com.mbridge.msdk.mbbanner.common.c.c r0 = new com.mbridge.msdk.mbbanner.common.c.c
            com.mbridge.msdk.out.MBBannerView r2 = r8.g
            com.mbridge.msdk.mbbanner.common.b.c r3 = r8.v
            java.lang.String r4 = r8.c
            java.lang.String r5 = r8.b
            boolean r6 = r8.e
            com.mbridge.msdk.c.d r7 = r8.o
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.n = r0
        L25:
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            boolean r1 = r8.q
            r0.b(r1)
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            boolean r1 = r8.r
            r0.c(r1)
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            boolean r1 = r8.e
            int r2 = r8.f
            r0.a(r1, r2)
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r8.m
            r0.a(r1)
            goto L49
        L44:
            java.lang.String r0 = "banner show failed because campain is exception"
            r8.b(r0)
        L49:
            r0 = 0
            r8.t = r0
        L4c:
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignUnit i(com.mbridge.msdk.mbbanner.a.a r0) {
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r0.m
            return r0
    }

    private void i() {
            r13 = this;
            com.mbridge.msdk.out.MBBannerView r0 = r13.g
            if (r0 == 0) goto L6f
            boolean r1 = r13.q
            if (r1 == 0) goto L46
            boolean r1 = r13.r
            if (r1 == 0) goto L46
            boolean r1 = r13.u
            if (r1 != 0) goto L46
            boolean r0 = com.mbridge.msdk.foundation.tools.am.a(r0)
            if (r0 != 0) goto L46
            com.mbridge.msdk.mbbanner.common.c.a r1 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r2 = 3
            java.lang.String r3 = r13.c
            java.lang.String r4 = r13.b
            com.mbridge.msdk.mbbanner.common.a.b r5 = new com.mbridge.msdk.mbbanner.common.a.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r6 = r13.i
            r0.append(r6)
            java.lang.String r6 = "x"
            r0.append(r6)
            int r6 = r13.h
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            int r6 = r13.j
            int r6 = r6 * 1000
            r5.<init>(r0, r6)
            com.mbridge.msdk.mbbanner.common.b.b r6 = r13.w
            r1.a(r2, r3, r4, r5, r6)
            goto L54
        L46:
            com.mbridge.msdk.mbbanner.common.c.a r7 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r8 = 2
            java.lang.String r9 = r13.c
            java.lang.String r10 = r13.b
            r11 = 0
            r12 = 0
            r7.a(r8, r9, r10, r11, r12)
        L54:
            boolean r0 = r13.q
            if (r0 != 0) goto L6f
            com.mbridge.msdk.mbbanner.common.c.a r1 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r2 = 4
            java.lang.String r3 = r13.c
            java.lang.String r4 = r13.b
            r5 = 0
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r1 = r13.b
            r0.a(r1)
        L6f:
            return
    }

    static com.mbridge.msdk.out.MBBannerView j(com.mbridge.msdk.mbbanner.a.a r0) {
            com.mbridge.msdk.out.MBBannerView r0 = r0.g
            return r0
    }

    private void j() {
            r2 = this;
            r2.i()
            com.mbridge.msdk.mbbanner.common.c.c r0 = r2.n
            if (r0 == 0) goto L13
            boolean r1 = r2.q
            r0.b(r1)
            com.mbridge.msdk.mbbanner.common.c.c r0 = r2.n
            boolean r1 = r2.r
            r0.c(r1)
        L13:
            return
    }

    static void k(com.mbridge.msdk.mbbanner.a.a r0) {
            r0.h()
            return
    }

    public final java.lang.String a() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r1.m
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.getRequestId()
            if (r0 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r1.m
            java.lang.String r0 = r0.getRequestId()
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            int r1 = r0.b(r1)
            r0.k = r1
            r0.j = r1
            return
    }

    public final void a(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.c.c r0 = r1.n
            if (r0 == 0) goto L7
            r0.a(r2, r3, r4, r5)
        L7:
            return
    }

    public final void a(com.mbridge.msdk.out.BannerAdListener r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(com.mbridge.msdk.out.BannerSize r2) {
            r1 = this;
            if (r2 == 0) goto Le
            int r0 = r2.getHeight()
            r1.h = r0
            int r2 = r2.getWidth()
            r1.i = r2
        Le:
            return
    }

    public final void a(java.lang.String r9) {
            r8 = this;
            int r0 = r8.h
            r1 = 1
            if (r0 < r1) goto L6a
            int r0 = r8.i
            if (r0 >= r1) goto La
            goto L6a
        La:
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L17
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L17
            boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(r1)     // Catch: java.lang.Exception -> L17
        L17:
            if (r0 != 0) goto L25
            com.mbridge.msdk.out.BannerAdListener r9 = r8.l
            if (r9 == 0) goto L24
            com.mbridge.msdk.out.MBridgeIds r0 = r8.d
            java.lang.String r1 = "banner load failed because WebView is not available"
            r9.onLoadFailed(r0, r1)
        L24:
            return
        L25:
            com.mbridge.msdk.mbbanner.common.a.b r6 = new com.mbridge.msdk.mbbanner.common.a.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r8.i
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r8.h
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            int r1 = r8.j
            int r1 = r1 * 1000
            r6.<init>(r0, r1)
            r6.a(r9)
            java.lang.String r9 = r8.c
            r6.b(r9)
            com.mbridge.msdk.mbbanner.common.c.a r9 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r0 = r8.c
            java.lang.String r1 = r8.b
            com.mbridge.msdk.mbbanner.common.b.b r2 = r8.w
            r9.a(r0, r1, r6, r2)
            com.mbridge.msdk.mbbanner.common.c.a r2 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r3 = 1
            java.lang.String r4 = r8.c
            java.lang.String r5 = r8.b
            com.mbridge.msdk.mbbanner.common.b.b r7 = r8.w
            r2.a(r3, r4, r5, r6, r7)
            return
        L6a:
            com.mbridge.msdk.out.BannerAdListener r9 = r8.l
            if (r9 == 0) goto L75
            com.mbridge.msdk.out.MBridgeIds r0 = r8.d
            java.lang.String r1 = "banner load failed because params are exception"
            r9.onLoadFailed(r0, r1)
        L75:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.e = r1
            if (r1 == 0) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 2
        L7:
            r0.f = r1
            return
    }

    public final void b() {
            r8 = this;
            r0 = 1
            r8.s = r0
            com.mbridge.msdk.out.BannerAdListener r0 = r8.l
            r1 = 0
            if (r0 == 0) goto La
            r8.l = r1
        La:
            com.mbridge.msdk.mbbanner.common.b.b r0 = r8.w
            if (r0 == 0) goto L10
            r8.w = r1
        L10:
            com.mbridge.msdk.mbbanner.common.b.c r0 = r8.v
            if (r0 == 0) goto L16
            r8.v = r1
        L16:
            com.mbridge.msdk.out.MBBannerView r0 = r8.g
            if (r0 == 0) goto L1c
            r8.g = r1
        L1c:
            com.mbridge.msdk.mbbanner.common.c.a r2 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r3 = 4
            java.lang.String r4 = r8.c
            java.lang.String r5 = r8.b
            r6 = 0
            r7 = 0
            r2.a(r3, r4, r5, r6, r7)
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r1 = r8.b
            r0.a(r1)
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.a()
            r0.b()
            com.mbridge.msdk.mbbanner.common.c.c r0 = r8.n
            if (r0 == 0) goto L41
            r0.a()
        L41:
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.q = r1
            r0.j()
            r0.h()
            return
    }

    public final void c() {
            r5 = this;
            boolean r0 = r5.s
            if (r0 == 0) goto L5
            return
        L5:
            r5.i()
            r5.g()
            com.mbridge.msdk.mbbanner.common.a.b r0 = new com.mbridge.msdk.mbbanner.common.a.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r5.i
            r1.append(r2)
            java.lang.String r2 = "x"
            r1.append(r2)
            int r2 = r5.h
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r2 = r5.j
            int r2 = r2 * 1000
            r0.<init>(r1, r2)
            java.lang.String r1 = r5.c
            r0.b(r1)
            com.mbridge.msdk.mbbanner.common.c.a r1 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r2 = r5.c
            java.lang.String r3 = r5.b
            com.mbridge.msdk.mbbanner.common.b.b r4 = r5.w
            r1.b(r2, r3, r0, r4)
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.r = r1
            r0.j()
            return
    }

    public final void d() {
            r6 = this;
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r2 = r6.c
            java.lang.String r3 = r6.b
            com.mbridge.msdk.mbbanner.common.a.b r4 = new com.mbridge.msdk.mbbanner.common.a.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r5 = r6.i
            r1.append(r5)
            java.lang.String r5 = "x"
            r1.append(r5)
            int r5 = r6.h
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            int r5 = r6.j
            int r5 = r5 * 1000
            r4.<init>(r1, r5)
            com.mbridge.msdk.mbbanner.common.b.b r5 = r6.w
            r1 = 4
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void e() {
            r6 = this;
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.a()
            java.lang.String r2 = r6.c
            java.lang.String r3 = r6.b
            com.mbridge.msdk.mbbanner.common.a.b r4 = new com.mbridge.msdk.mbbanner.common.a.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r5 = r6.i
            r1.append(r5)
            java.lang.String r5 = "x"
            r1.append(r5)
            int r5 = r6.h
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            int r5 = r6.j
            int r5 = r5 * 1000
            r4.<init>(r1, r5)
            com.mbridge.msdk.mbbanner.common.b.b r5 = r6.w
            r1 = 3
            r0.a(r1, r2, r3, r4, r5)
            return
    }
}
