package com.mbridge.msdk.splash.c;

public final class d {
    public android.os.Handler a;
    private java.lang.String b;
    private com.mbridge.msdk.foundation.entity.CampaignEx c;
    private com.mbridge.msdk.splash.view.MBSplashView d;
    private com.mbridge.msdk.splash.d.d e;
    private com.mbridge.msdk.click.b f;
    private boolean g;
    private android.widget.TextView h;
    private android.view.View i;
    private java.lang.String j;
    private java.lang.String k;
    private com.mbridge.msdk.out.MBridgeIds l;
    private int m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private boolean r;
    private boolean s;
    private android.content.Context t;
    private android.view.View.OnClickListener u;
    private com.mbridge.msdk.splash.d.a v;
    private com.mbridge.msdk.click.h w;









    public d(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "SplashShowManager"
            r4.b = r0
            r0 = 5
            r4.m = r0
            java.lang.String r0 = "点击跳过|"
            r4.n = r0
            r4.o = r0
            java.lang.String r0 = "秒"
            r4.p = r0
            java.lang.String r0 = "秒后自动关闭"
            r4.q = r0
            com.mbridge.msdk.splash.c.d$1 r0 = new com.mbridge.msdk.splash.c.d$1
            r0.<init>(r4)
            r4.u = r0
            com.mbridge.msdk.splash.c.d$2 r0 = new com.mbridge.msdk.splash.c.d$2
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r4, r1)
            r4.a = r0
            com.mbridge.msdk.splash.c.d$3 r0 = new com.mbridge.msdk.splash.c.d$3
            r0.<init>(r4)
            r4.v = r0
            com.mbridge.msdk.splash.c.d$5 r0 = new com.mbridge.msdk.splash.c.d$5
            r0.<init>(r4)
            r4.w = r0
            r4.j = r7
            r4.k = r6
            com.mbridge.msdk.out.MBridgeIds r6 = new com.mbridge.msdk.out.MBridgeIds
            java.lang.String r0 = r4.k
            r6.<init>(r0, r7)
            r4.l = r6
            r4.t = r5
            android.widget.TextView r6 = r4.h
            if (r6 != 0) goto L117
            android.widget.TextView r6 = new android.widget.TextView
            r6.<init>(r5)
            r4.h = r6
            r7 = 1
            r6.setGravity(r7)
            android.widget.TextView r6 = r4.h
            r7 = 0
            r6.setTextIsSelectable(r7)
            android.widget.TextView r6 = r4.h
            r7 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            r6.setPadding(r0, r1, r2, r7)
            android.widget.TextView r6 = r4.h
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6
            if (r6 != 0) goto L8e
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = 1120403456(0x42c80000, float:100.0)
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            r0 = 1112014848(0x42480000, float:50.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r0)
            r6.<init>(r7, r5)
        L8e:
            android.widget.TextView r5 = r4.h
            r5.setLayoutParams(r6)
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            if (r5 == 0) goto L117
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.d()
            android.content.res.Resources r7 = r5.getResources()
            java.lang.String r0 = "string"
            java.lang.String r1 = "mbridge_splash_count_time_can_skip"
            int r7 = r7.getIdentifier(r1, r0, r6)
            android.content.res.Resources r1 = r5.getResources()
            java.lang.String r2 = "mbridge_splash_count_time_can_skip_not"
            int r1 = r1.getIdentifier(r2, r0, r6)
            android.content.res.Resources r2 = r5.getResources()
            java.lang.String r3 = "mbridge_splash_count_time_can_skip_s"
            int r0 = r2.getIdentifier(r3, r0, r6)
            android.content.res.Resources r2 = r5.getResources()
            java.lang.String r7 = r2.getString(r7)
            r4.o = r7
            android.content.res.Resources r7 = r5.getResources()
            java.lang.String r7 = r7.getString(r1)
            r4.q = r7
            r4.n = r7
            android.content.res.Resources r7 = r5.getResources()
            java.lang.String r7 = r7.getString(r0)
            r4.p = r7
            android.widget.TextView r7 = r4.h
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "mbridge_splash_close_bg"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            r7.setBackgroundResource(r0)
            android.content.res.Resources r7 = r5.getResources()
            java.lang.String r0 = "mbridge_splash_count_time_skip_text_color"
            java.lang.String r1 = "color"
            int r6 = r7.getIdentifier(r0, r1, r6)
            android.widget.TextView r7 = r4.h
            android.content.res.Resources r5 = r5.getResources()
            int r5 = r5.getColor(r6)
            r7.setTextColor(r5)
        L117:
            return
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.view.View$OnClickListener r0 = r1.u
            r2.setOnClickListener(r0)
        L7:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, android.content.Context r10, java.lang.String r11) {
            r8 = this;
            if (r9 == 0) goto L32
            java.util.List r0 = r9.getPv_urls()     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L32
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L28
            if (r1 <= 0) goto L32
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L28
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L32
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L28
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L28
            r6 = 0
            r7 = 1
            r2 = r10
            r3 = r9
            r4 = r11
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L28
            goto L12
        L28:
            r9 = move-exception
            java.lang.String r10 = r8.b
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L32:
            return
    }

    static void a(com.mbridge.msdk.splash.c.d r0, int r1) {
            r0.b(r1)
            return
    }

    static void a(com.mbridge.msdk.splash.c.d r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, boolean r2, java.lang.String r3) {
            r0.b(r1, r2, r3)
            return
    }

    static boolean a(com.mbridge.msdk.splash.c.d r0) {
            boolean r0 = r0.g
            return r0
    }

    private void b(int r6) {
            r5 = this;
            com.mbridge.msdk.splash.d.d r0 = r5.e
            r1 = 0
            if (r0 == 0) goto L13
            com.mbridge.msdk.out.MBridgeIds r2 = r5.l
            r0.a(r2, r6)
            r5.e = r1
            java.lang.String r0 = r5.j
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.c
            com.mbridge.msdk.splash.e.a.a(r0, r2)
        L13:
            r0 = 0
            r5.s = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.c
            if (r0 == 0) goto L68
            com.mbridge.msdk.splash.a.b r0 = com.mbridge.msdk.splash.a.b.a()
            java.lang.String r2 = r5.j
            com.mbridge.msdk.splash.a.b r0 = r0.b(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.c
            java.lang.String r2 = r2.getRequestId()
            com.mbridge.msdk.splash.a.b r0 = r0.d(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.c
            java.lang.String r2 = r2.getRequestIdNotice()
            com.mbridge.msdk.splash.a.b r0 = r0.g(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.c
            java.lang.String r2 = r2.getId()
            com.mbridge.msdk.splash.a.b r0 = r0.c(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r5.c
            long r3 = r3.getCreativeId()
            r2.append(r3)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.splash.a.b r0 = r0.e(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.c
            boolean r2 = r2.isBidCampaign()
            com.mbridge.msdk.splash.a.b r0 = r0.a(r2)
            goto L69
        L68:
            r0 = r1
        L69:
            java.lang.String r2 = r5.j
            com.mbridge.msdk.splash.e.a.a(r0, r2, r6)
            com.mbridge.msdk.splash.view.MBSplashView r6 = r5.d
            if (r6 == 0) goto L7b
            com.mbridge.msdk.splash.view.MBSplashWebview r6 = r6.getSplashWebview()
            if (r6 == 0) goto L7b
            r6.finishAdSession()
        L7b:
            android.os.Handler r6 = r5.a
            if (r6 == 0) goto L82
            r6.removeCallbacksAndMessages(r1)
        L82:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r9, android.content.Context r10, java.lang.String r11) {
            r8 = this;
            if (r9 == 0) goto L25
            java.lang.String r0 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L1b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L25
            java.lang.String r4 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L1b
            r5 = 0
            r6 = 1
            int r7 = com.mbridge.msdk.click.a.a.h     // Catch: java.lang.Throwable -> L1b
            r1 = r10
            r2 = r9
            r3 = r11
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1b
            goto L25
        L1b:
            r9 = move-exception
            java.lang.String r10 = r8.b
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L25:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r4, boolean r5, java.lang.String r6) {
            r3 = this;
            com.mbridge.msdk.click.b r0 = r3.f
            if (r0 != 0) goto L1a
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r3.j
            r0.<init>(r1, r2)
            r3.f = r0
            com.mbridge.msdk.click.h r1 = r3.w
            r0.a(r1)
        L1a:
            java.lang.String r0 = r3.j
            r4.setCampaignUnitId(r0)
            com.mbridge.msdk.click.b r0 = r3.f
            r0.c(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.c
            boolean r0 = r0.isReportClick()
            if (r0 != 0) goto L3d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.c
            r1 = 1
            r0.setReportClick(r1)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.splash.e.a.a(r0, r4)
        L3d:
            com.mbridge.msdk.splash.d.d r0 = r3.e
            if (r0 == 0) goto L4a
            com.mbridge.msdk.out.MBridgeIds r1 = r3.l
            r0.b(r1)
            r0 = 3
            r3.b(r0)
        L4a:
            if (r5 == 0) goto L57
            boolean r5 = android.text.TextUtils.isEmpty(r6)
            if (r5 != 0) goto L57
            java.lang.String r5 = r3.j
            com.mbridge.msdk.splash.e.a.a(r4, r5, r6)
        L57:
            return
    }

    static void b(com.mbridge.msdk.splash.c.d r4, int r5) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            if (r0 == 0) goto L18
            r0.updateCountdown(r5)
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L18
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            r0.c(r5)
        L18:
            if (r5 >= 0) goto L1d
            r4.m = r5
            goto L30
        L1d:
            com.mbridge.msdk.splash.d.d r0 = r4.e
            if (r0 == 0) goto L29
            com.mbridge.msdk.out.MBridgeIds r1 = r4.l
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.a(r1, r2)
        L29:
            android.view.View r5 = r4.i
            if (r5 != 0) goto L30
            r4.h()
        L30:
            return
    }

    static boolean b(com.mbridge.msdk.splash.c.d r0) {
            boolean r0 = r0.s
            return r0
    }

    static int c(com.mbridge.msdk.splash.c.d r0, int r1) {
            r0.m = r1
            return r1
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r10, android.content.Context r11, java.lang.String r12) {
            r9 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.a(r11)
            java.lang.String r0 = r10.getImpressionURL()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2c
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.splash.c.d$8 r1 = new com.mbridge.msdk.splash.c.d$8
            r1.<init>(r9, r11, r10)
            r0.<init>(r1)
            r0.start()
            r6 = 0
            r7 = 1
            java.lang.String r5 = r10.getImpressionURL()
            int r8 = com.mbridge.msdk.click.a.a.g
            r2 = r11
            r3 = r10
            r4 = r12
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7, r8)
        L2c:
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L52
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            if (r0 == 0) goto L52
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            java.lang.String[] r0 = r0.l()
            if (r0 == 0) goto L52
            r5 = 0
            r6 = 0
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            java.lang.String[] r4 = r0.l()
            r1 = r11
            r2 = r10
            r3 = r12
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L52:
            return
    }

    static void c(com.mbridge.msdk.splash.c.d r0) {
            r0.g()
            return
    }

    static int d(com.mbridge.msdk.splash.c.d r0) {
            int r0 = r0.m
            return r0
    }

    static int e(com.mbridge.msdk.splash.c.d r2) {
            int r0 = r2.m
            int r1 = r0 + (-1)
            r2.m = r1
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx f(com.mbridge.msdk.splash.c.d r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.c
            return r0
    }

    static com.mbridge.msdk.splash.view.MBSplashView g(com.mbridge.msdk.splash.c.d r0) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r0.d
            return r0
    }

    private synchronized void g() {
            r5 = this;
            monitor-enter(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.c     // Catch: java.lang.Throwable -> L116
            if (r0 != 0) goto L7
            monitor-exit(r5)
            return
        L7:
            r0 = 1
            r5.s = r0     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.splash.d.d r1 = r5.e     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L4a
            com.mbridge.msdk.splash.view.MBSplashView r1 = r5.d     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L4a
            android.content.Context r1 = r5.t     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L31
            android.content.Context r1 = r5.t     // Catch: java.lang.Throwable -> L116
            boolean r1 = r1 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L31
            android.content.Context r1 = r5.t     // Catch: java.lang.Throwable -> L116
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Throwable -> L116
            boolean r1 = r1.isFinishing()     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L31
            com.mbridge.msdk.splash.d.d r0 = r5.e     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.out.MBridgeIds r1 = r5.l     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = "Activity is finishing"
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L116
            monitor-exit(r5)
            return
        L31:
            com.mbridge.msdk.splash.view.MBSplashView r1 = r5.d     // Catch: java.lang.Throwable -> L116
            boolean r1 = r1.isShown()     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L41
            com.mbridge.msdk.splash.d.d r1 = r5.e     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.out.MBridgeIds r2 = r5.l     // Catch: java.lang.Throwable -> L116
            r1.a(r2)     // Catch: java.lang.Throwable -> L116
            goto L4a
        L41:
            com.mbridge.msdk.splash.d.d r1 = r5.e     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.out.MBridgeIds r2 = r5.l     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = "SplashView or container is not visibility"
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L116
        L4a:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.c     // Catch: java.lang.Throwable -> L116
            boolean r1 = r1.isReport()     // Catch: java.lang.Throwable -> L116
            if (r1 != 0) goto L114
            com.mbridge.msdk.splash.view.MBSplashView r1 = r5.d     // Catch: java.lang.Throwable -> L116
            boolean r1 = r1.isDynamicView()     // Catch: java.lang.Throwable -> L116
            if (r1 != 0) goto L99
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.c     // Catch: java.lang.Throwable -> L116
            r2 = 0
            boolean r3 = r1.isHasMBTplMark()     // Catch: java.lang.Throwable -> L116
            if (r3 != 0) goto L7b
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.c(r1, r2, r3)     // Catch: java.lang.Throwable -> L116
            r1.setReport(r0)     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = r5.j     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = "splash"
            com.mbridge.msdk.foundation.same.a.d.a(r2, r1, r3)     // Catch: java.lang.Throwable -> L116
            goto L7c
        L7b:
            r0 = r2
        L7c:
            if (r0 == 0) goto Lcc
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L116
            goto Lcc
        L99:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.c     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.b(r1, r2, r3)     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.c(r1, r2, r3)     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L116
            r5.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L116
            r1.setReport(r0)     // Catch: java.lang.Throwable -> L116
            java.lang.String r0 = r5.j     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = "splash"
            com.mbridge.msdk.foundation.same.a.d.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L116
        Lcc:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L116
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.c     // Catch: java.lang.Throwable -> L116
            java.lang.String r2 = r5.j     // Catch: java.lang.Throwable -> L116
            if (r1 == 0) goto L114
            boolean r3 = r1.isMraid()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            if (r3 == 0) goto L114
            com.mbridge.msdk.foundation.entity.p r3 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            r3.<init>()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            java.lang.String r4 = r1.getRequestId()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            r3.k(r4)     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            java.lang.String r4 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            r3.l(r4)     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            java.lang.String r4 = r1.getId()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            r3.n(r4)     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            boolean r1 = r1.isMraid()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            if (r1 == 0) goto L103
            int r1 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            goto L105
        L103:
            int r1 = com.mbridge.msdk.foundation.entity.p.b     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
        L105:
            r3.a(r1)     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            com.mbridge.msdk.foundation.same.report.c.a(r3, r0, r2)     // Catch: java.lang.Exception -> L110 java.lang.Throwable -> L116
            goto L114
        L110:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L116
        L114:
            monitor-exit(r5)
            return
        L116:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    static java.lang.String h(com.mbridge.msdk.splash.c.d r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    private void h() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.o
            r0.append(r1)
            int r1 = r2.m
            r0.append(r1)
            java.lang.String r1 = r2.p
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L30
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.m
            r0.append(r1)
            java.lang.String r1 = r2.q
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L30:
            android.widget.TextView r1 = r2.h
            r1.setText(r0)
            return
    }

    static java.lang.String i(com.mbridge.msdk.splash.c.d r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.splash.d.d j(com.mbridge.msdk.splash.c.d r0) {
            com.mbridge.msdk.splash.d.d r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.out.MBridgeIds k(com.mbridge.msdk.splash.c.d r0) {
            com.mbridge.msdk.out.MBridgeIds r0 = r0.l
            return r0
    }

    static com.mbridge.msdk.click.b l(com.mbridge.msdk.splash.c.d r0) {
            com.mbridge.msdk.click.b r0 = r0.f
            return r0
    }

    static android.content.Context m(com.mbridge.msdk.splash.c.d r0) {
            android.content.Context r0 = r0.t
            return r0
    }

    public final com.mbridge.msdk.splash.d.a a() {
            r1 = this;
            com.mbridge.msdk.splash.d.a r0 = r1.v
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void a(android.view.ViewGroup r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.view.View$OnClickListener r0 = r1.u
            r2.setOnClickListener(r0)
        L7:
            r1.i = r2
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, com.mbridge.msdk.splash.view.MBSplashView r9) {
            r7 = this;
            java.lang.String r0 = "OMSDK"
            boolean r1 = r7.g
            r7.a(r1)
            r7.c = r8
            r7.d = r9
            com.mbridge.msdk.splash.js.b r1 = r9.getSplashJSBridgeImpl()
            if (r1 != 0) goto L29
            com.mbridge.msdk.splash.js.b r1 = new com.mbridge.msdk.splash.js.b
            android.content.Context r2 = r9.getContext()
            java.lang.String r3 = r7.k
            java.lang.String r4 = r7.j
            r1.<init>(r2, r3, r4)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r2.add(r8)
            r1.a(r2)
        L29:
            int r2 = r7.m
            r1.b(r2)
            boolean r2 = r7.g
            r1.a(r2)
            com.mbridge.msdk.splash.d.a r2 = r7.v
            r1.a(r2)
            r9.setSplashJSBridgeImpl(r1)
            boolean r8 = r8.isHasMBTplMark()
            android.view.View r1 = r7.i
            r2 = 8
            if (r1 != 0) goto L5a
            if (r8 == 0) goto L4c
            android.widget.TextView r8 = r7.h
            r8.setVisibility(r2)
        L4c:
            r7.h()
            android.widget.TextView r8 = r7.h
            r7.a(r8)
            android.widget.TextView r8 = r7.h
            r9.setCloseView(r8)
            goto L69
        L5a:
            if (r8 == 0) goto L5f
            r1.setVisibility(r2)
        L5f:
            android.view.View r8 = r7.i
            r7.a(r8)
            android.view.View r8 = r7.i
            r9.setCloseView(r8)
        L69:
            r9.show()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.c
            if (r8 == 0) goto Le0
            boolean r8 = r8.isActiveOm()
            if (r8 == 0) goto Le0
            if (r9 == 0) goto Le0
            com.mbridge.msdk.splash.view.MBSplashWebview r8 = r9.getSplashWebview()
            if (r8 == 0) goto Le0
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La1
            android.content.Context r9 = r9.j()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r8.getUrl()     // Catch: java.lang.Throwable -> La1
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.c     // Catch: java.lang.Throwable -> La1
            com.iab.omid.library.mmadbridge.adsession.AdSession r9 = com.mbridge.msdk.a.b.a(r9, r8, r1, r2)     // Catch: java.lang.Throwable -> La1
            if (r9 == 0) goto Le0
            r8.setAdSession(r9)     // Catch: java.lang.Throwable -> La1
            r9.registerAdView(r8)     // Catch: java.lang.Throwable -> La1
            r9.start()     // Catch: java.lang.Throwable -> La1
            java.lang.String r9 = "adSession.start()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)     // Catch: java.lang.Throwable -> La1
            goto Le0
        La1:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.c
            if (r0 == 0) goto Le0
            java.lang.String r2 = r0.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.c
            java.lang.String r3 = r0.getRequestIdNotice()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.c
            java.lang.String r4 = r0.getId()
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r8 = r8.getContext()
            r1.<init>(r8)
            java.lang.String r5 = r7.j
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "fetch OM failed, exception"
            r8.append(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            java.lang.String r6 = r8.toString()
            r1.a(r2, r3, r4, r5, r6)
        Le0:
            java.lang.String r8 = r7.j
            com.mbridge.msdk.splash.c.b.a(r8)
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.c
            java.lang.String r8 = r8.getImageUrl()
            com.mbridge.msdk.splash.c.b.b(r8)
            android.os.Handler r8 = r7.a
            r9 = 1
            r8.removeMessages(r9)
            android.os.Handler r8 = r7.a
            r0 = 1000(0x3e8, double:4.94E-321)
            r8.sendEmptyMessageDelayed(r9, r0)
            android.os.Handler r8 = r7.a
            r9 = 2
            r8.sendEmptyMessageDelayed(r9, r0)
            com.mbridge.msdk.foundation.b.b r8 = com.mbridge.msdk.foundation.b.b.a()
            boolean r8 = r8.b()
            if (r8 != 0) goto L10d
            goto L188
        L10d:
            com.mbridge.msdk.splash.view.MBSplashView r8 = r7.d
            boolean r8 = r8.isDynamicView()
            if (r8 == 0) goto L116
            goto L188
        L116:
            com.mbridge.msdk.foundation.b.b r8 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r9 = r7.j
            com.mbridge.msdk.splash.c.d$4 r0 = new com.mbridge.msdk.splash.c.d$4
            r0.<init>(r7)
            r8.a(r9, r0)
            com.mbridge.msdk.foundation.b.b r8 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r9 = r7.j
            com.mbridge.msdk.widget.FeedBackButton r8 = r8.b(r9)
            if (r8 == 0) goto L176
            r9 = 0
            android.view.ViewGroup$LayoutParams r0 = r8.getLayoutParams()     // Catch: java.lang.Exception -> L139
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0     // Catch: java.lang.Exception -> L139
            r9 = r0
            goto L13d
        L139:
            r0 = move-exception
            r0.printStackTrace()
        L13d:
            if (r9 != 0) goto L148
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            int r0 = com.mbridge.msdk.foundation.b.b.a
            int r1 = com.mbridge.msdk.foundation.b.b.b
            r9.<init>(r0, r1)
        L148:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r9.topMargin = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r9.leftMargin = r0
            android.view.ViewParent r0 = r8.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L171
            r0.removeView(r8)
        L171:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r7.d
            r0.addView(r8, r9)
        L176:
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.c
            java.lang.String r9 = r7.j
            r8.setCampaignUnitId(r9)
            com.mbridge.msdk.foundation.b.b r8 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r9 = r7.j
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.c
            r8.a(r9, r0)
        L188:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r5, boolean r6, java.lang.String r7) {
            r4 = this;
            if (r5 == 0) goto L7f
            boolean r0 = r5.needShowIDialog()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L7f
            com.mbridge.msdk.splash.c.d$6 r0 = new com.mbridge.msdk.splash.c.d$6     // Catch: java.lang.Throwable -> L75
            r0.<init>(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.splash.view.MBSplashView r1 = r4.d     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L7f
            boolean r1 = com.mbridge.msdk.click.c.a(r5)     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L7f
            boolean r1 = r5.needShowIDialog()     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L7f
            boolean r1 = r4.r     // Catch: java.lang.Throwable -> L75
            if (r1 != 0) goto L7f
            com.mbridge.msdk.click.b r1 = r4.f     // Catch: java.lang.Throwable -> L75
            if (r1 != 0) goto L3b
            com.mbridge.msdk.click.b r1 = new com.mbridge.msdk.click.b     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L75
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = r4.j     // Catch: java.lang.Throwable -> L75
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75
            r4.f = r1     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.click.h r2 = r4.w     // Catch: java.lang.Throwable -> L75
            r1.a(r2)     // Catch: java.lang.Throwable -> L75
        L3b:
            com.mbridge.msdk.splash.view.MBSplashView r1 = r4.d     // Catch: java.lang.Throwable -> L75
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.splash.view.MBSplashView r2 = r4.d     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.splash.c.d$7 r3 = new com.mbridge.msdk.splash.c.d$7     // Catch: java.lang.Throwable -> L75
            r3.<init>(r4, r5, r1, r0)     // Catch: java.lang.Throwable -> L75
            r2.post(r3)     // Catch: java.lang.Throwable -> L75
            r0 = 1
            r4.r = r0     // Catch: java.lang.Throwable -> L75
            int r1 = r4.m     // Catch: java.lang.Throwable -> L75
            if (r1 <= 0) goto L5b
            android.os.Handler r1 = r4.a     // Catch: java.lang.Throwable -> L75
            if (r1 == 0) goto L5b
            android.os.Handler r1 = r4.a     // Catch: java.lang.Throwable -> L75
            r1.removeMessages(r0)     // Catch: java.lang.Throwable -> L75
        L5b:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L74
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d     // Catch: java.lang.Throwable -> L75
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r0.getSplashWebview()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L74
            boolean r1 = r0.isDestoryed()     // Catch: java.lang.Throwable -> L75
            if (r1 != 0) goto L74
            java.lang.String r1 = "onInstallAlertShow"
            java.lang.String r2 = ""
            com.mbridge.msdk.splash.js.c.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L75
        L74:
            return
        L75:
            r0 = move-exception
            java.lang.String r1 = r4.b
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L7f:
            if (r5 == 0) goto L84
            r4.b(r5, r6, r7)
        L84:
            return
    }

    public final void a(com.mbridge.msdk.splash.d.d r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.g = r1
            if (r1 == 0) goto L9
            java.lang.String r1 = r0.o
            r0.n = r1
            goto Ld
        L9:
            java.lang.String r1 = r0.q
            r0.n = r1
        Ld:
            return
    }

    public final java.lang.String b() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.c
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.getRequestId()
            if (r0 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.c
            java.lang.String r0 = r0.getRequestId()
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public final void c() {
            r2 = this;
            com.mbridge.msdk.splash.d.d r0 = r2.e
            r1 = 0
            if (r0 == 0) goto L7
            r2.e = r1
        L7:
            com.mbridge.msdk.splash.d.a r0 = r2.v
            if (r0 == 0) goto Ld
            r2.v = r1
        Ld:
            android.view.View$OnClickListener r0 = r2.u
            if (r0 == 0) goto L13
            r2.u = r1
        L13:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.d
            if (r0 == 0) goto L1a
            r0.destroy()
        L1a:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r2.j
            r0.c(r1)
            return
    }

    public final void d() {
            r4 = this;
            boolean r0 = r4.r
            if (r0 != 0) goto L37
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 != 0) goto L37
            int r0 = r4.m
            if (r0 <= 0) goto L1b
            android.os.Handler r0 = r4.a
            if (r0 == 0) goto L1b
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r4.a
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.sendEmptyMessageDelayed(r1, r2)
        L1b:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            if (r0 == 0) goto L37
            r0.onResume()
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L37
            boolean r1 = r0.isDestoryed()
            if (r1 != 0) goto L37
            java.lang.String r1 = "onSystemResume"
            java.lang.String r2 = ""
            com.mbridge.msdk.splash.js.c.a(r0, r1, r2)
        L37:
            return
    }

    public final void e() {
            r3 = this;
            int r0 = r3.m
            if (r0 <= 0) goto Lc
            android.os.Handler r0 = r3.a
            if (r0 == 0) goto Lc
            r1 = 1
            r0.removeMessages(r1)
        Lc:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r3.d
            if (r0 == 0) goto L28
            r0.onPause()
            com.mbridge.msdk.splash.view.MBSplashView r0 = r3.d
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L28
            boolean r1 = r0.isDestoryed()
            if (r1 != 0) goto L28
            java.lang.String r1 = "onSystemPause"
            java.lang.String r2 = ""
            com.mbridge.msdk.splash.js.c.a(r0, r1, r2)
        L28:
            return
    }

    public final void f() {
            r4 = this;
            r0 = 0
            r4.r = r0
            int r0 = r4.m
            if (r0 <= 0) goto L16
            android.os.Handler r0 = r4.a
            if (r0 == 0) goto L16
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r4.a
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.sendEmptyMessageDelayed(r1, r2)
        L16:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r4.d
            if (r0 == 0) goto L2d
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L2d
            boolean r1 = r0.isDestoryed()
            if (r1 != 0) goto L2d
            java.lang.String r1 = "onInstallAlertHide"
            java.lang.String r2 = ""
            com.mbridge.msdk.splash.js.c.a(r0, r1, r2)
        L2d:
            return
    }
}
