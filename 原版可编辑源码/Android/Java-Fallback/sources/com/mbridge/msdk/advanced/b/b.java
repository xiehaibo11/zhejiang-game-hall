package com.mbridge.msdk.advanced.b;

public final class b {
    public android.os.Handler a;
    private java.lang.String b;
    private com.mbridge.msdk.foundation.entity.CampaignEx c;
    private com.mbridge.msdk.advanced.view.MBNativeAdvancedView d;
    private com.mbridge.msdk.advanced.c.d e;
    private com.mbridge.msdk.click.b f;
    private com.mbridge.msdk.advanced.c.c g;
    private boolean h;
    private int i;
    private android.widget.ImageView j;
    private java.lang.String k;
    private java.lang.String l;
    private com.mbridge.msdk.out.MBridgeIds m;
    private boolean n;
    private android.view.View.OnClickListener o;
    private com.mbridge.msdk.advanced.c.a p;









    public b(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "NativeAdvancedShowManager"
            r3.b = r0
            r0 = -1
            r3.i = r0
            com.mbridge.msdk.advanced.b.b$1 r0 = new com.mbridge.msdk.advanced.b.b$1
            r0.<init>(r3)
            r3.o = r0
            com.mbridge.msdk.advanced.b.b$2 r0 = new com.mbridge.msdk.advanced.b.b$2
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.a = r0
            com.mbridge.msdk.advanced.b.b$3 r0 = new com.mbridge.msdk.advanced.b.b$3
            r0.<init>(r3)
            r3.p = r0
            r3.k = r6
            r3.l = r5
            com.mbridge.msdk.out.MBridgeIds r0 = new com.mbridge.msdk.out.MBridgeIds
            r0.<init>(r5, r6)
            r3.m = r0
            android.widget.ImageView r5 = r3.j
            if (r5 != 0) goto L96
            android.widget.ImageView r5 = new android.widget.ImageView
            r5.<init>(r4)
            r3.j = r5
            r6 = 1073741824(0x40000000, float:2.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)
            r5.setPadding(r0, r1, r2, r4)
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            android.widget.ImageView r5 = r3.j
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.FIT_XY
            r5.setScaleType(r6)
            android.widget.ImageView r5 = r3.j
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r5 = (android.widget.RelativeLayout.LayoutParams) r5
            if (r5 != 0) goto L78
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r6 = 1105723392(0x41e80000, float:29.0)
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)
            r0 = 1098907648(0x41800000, float:16.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r4, r0)
            r5.<init>(r6, r0)
        L78:
            android.widget.ImageView r6 = r3.j
            r6.setLayoutParams(r5)
            android.widget.ImageView r5 = r3.j
            android.content.res.Resources r4 = r4.getResources()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.d()
            java.lang.String r0 = "mbridge_native_advanced_close_icon"
            java.lang.String r1 = "drawable"
            int r4 = r4.getIdentifier(r0, r1, r6)
            r5.setImageResource(r4)
        L96:
            return
    }

    static void a(com.mbridge.msdk.advanced.b.b r11, int r12) {
            com.mbridge.msdk.advanced.c.d r0 = r11.e
            r1 = 0
            if (r0 == 0) goto L49
            com.mbridge.msdk.out.MBridgeIds r2 = r11.m
            r0.c(r2)
            r11.e = r1
            java.lang.String r0 = r11.k
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.c
            if (r2 == 0) goto L49
            boolean r3 = r2.isMraid()
            if (r3 == 0) goto L49
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            int r9 = com.mbridge.msdk.foundation.tools.v.D(r3)
            com.mbridge.msdk.foundation.entity.p r10 = new com.mbridge.msdk.foundation.entity.p
            java.lang.String r5 = r2.getId()
            java.lang.String r6 = r2.getRequestId()
            java.lang.String r7 = r2.getRequestIdNotice()
            java.lang.String r4 = "2000061"
            r3 = r10
            r8 = r0
            r3.<init>(r4, r5, r6, r7, r8, r9)
            int r2 = com.mbridge.msdk.foundation.entity.p.a
            r10.a(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.same.report.c.b(r10, r2, r0)
        L49:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.c
            if (r0 == 0) goto L9b
            com.mbridge.msdk.advanced.common.c r0 = com.mbridge.msdk.advanced.common.c.a()
            java.lang.String r2 = r11.k
            com.mbridge.msdk.advanced.common.c r0 = r0.b(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.c
            java.lang.String r2 = r2.getRequestId()
            com.mbridge.msdk.advanced.common.c r0 = r0.d(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.c
            java.lang.String r2 = r2.getRequestIdNotice()
            com.mbridge.msdk.advanced.common.c r0 = r0.g(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.c
            java.lang.String r2 = r2.getId()
            com.mbridge.msdk.advanced.common.c r0 = r0.c(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r11.c
            long r3 = r3.getCreativeId()
            r2.append(r3)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.advanced.common.c r0 = r0.e(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.c
            boolean r2 = r2.isBidCampaign()
            com.mbridge.msdk.advanced.common.c r0 = r0.a(r2)
            goto L9c
        L9b:
            r0 = r1
        L9c:
            java.lang.String r2 = r11.k
            if (r0 == 0) goto Lcd
            java.lang.String r3 = "2000069"
            r0.a(r3)
            r0.a(r12)
            com.mbridge.msdk.foundation.same.report.b r12 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r12 = r12.c()
            if (r12 == 0) goto Lbe
            com.mbridge.msdk.foundation.same.report.b r12 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r0 = r0.b()
            r12.a(r0)
            goto Lcd
        Lbe:
            java.lang.String r12 = r0.b()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.report.c.a(r12, r0, r2)
        Lcd:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r12 = r11.d
            if (r12 == 0) goto Le4
            r0 = 8
            r12.setVisibility(r0)
            r11.e()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r12 = r11.d
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r12 = r12.getAdvancedNativeWebview()
            if (r12 == 0) goto Le4
            r12.finishAdSession()
        Le4:
            android.os.Handler r11 = r11.a
            if (r11 == 0) goto Leb
            r11.removeCallbacksAndMessages(r1)
        Leb:
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

    static boolean a(com.mbridge.msdk.advanced.b.b r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean a(com.mbridge.msdk.advanced.b.b r0, boolean r1) {
            r0.n = r1
            return r1
    }

    static int b(com.mbridge.msdk.advanced.b.b r0, int r1) {
            r0.i = r1
            return r1
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx b(com.mbridge.msdk.advanced.b.b r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.c
            return r0
    }

    static com.mbridge.msdk.advanced.view.MBNativeAdvancedView c(com.mbridge.msdk.advanced.b.b r0) {
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r0.d
            return r0
    }

    static java.lang.String d(com.mbridge.msdk.advanced.b.b r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String e(com.mbridge.msdk.advanced.b.b r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.advanced.c.d f(com.mbridge.msdk.advanced.b.b r0) {
            com.mbridge.msdk.advanced.c.d r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.out.MBridgeIds g(com.mbridge.msdk.advanced.b.b r0) {
            com.mbridge.msdk.out.MBridgeIds r0 = r0.m
            return r0
    }

    static com.mbridge.msdk.click.b h(com.mbridge.msdk.advanced.b.b r0) {
            com.mbridge.msdk.click.b r0 = r0.f
            return r0
    }

    public final java.lang.String a() {
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

    public final void a(com.mbridge.msdk.advanced.c.c r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.mbridge.msdk.advanced.c.d r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r11, com.mbridge.msdk.advanced.view.MBNativeAdvancedView r12, boolean r13) {
            r10 = this;
            java.lang.String r0 = "OMSDK"
            if (r12 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r2 = r10.k
            com.mbridge.msdk.advanced.b.b$4 r3 = new com.mbridge.msdk.advanced.b.b$4
            r3.<init>(r10, r12)
            r1.a(r2, r3)
            boolean r1 = r11.isMraid()
            if (r1 == 0) goto L5a
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            boolean r1 = r1.b()
            if (r1 == 0) goto L5a
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r2 = r10.k
            com.mbridge.msdk.widget.FeedBackButton r1 = r1.b(r2)
            if (r1 == 0) goto L5a
            r2 = 0
            android.view.ViewGroup$LayoutParams r3 = r1.getLayoutParams()     // Catch: java.lang.Exception -> L38
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3     // Catch: java.lang.Exception -> L38
            r2 = r3
            goto L3c
        L38:
            r3 = move-exception
            r3.printStackTrace()
        L3c:
            if (r2 != 0) goto L47
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            int r3 = com.mbridge.msdk.foundation.b.b.a
            int r4 = com.mbridge.msdk.foundation.b.b.b
            r2.<init>(r3, r4)
        L47:
            r3 = 12
            r2.addRule(r3)
            android.view.ViewParent r3 = r1.getParent()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            if (r3 == 0) goto L57
            r3.removeView(r1)
        L57:
            r12.addView(r1, r2)
        L5a:
            boolean r1 = r10.h
            r10.h = r1
            r10.c = r11
            r10.d = r12
            com.mbridge.msdk.advanced.js.a r1 = r12.getAdvancedNativeJSBridgeImpl()
            if (r1 != 0) goto L80
            com.mbridge.msdk.advanced.js.a r1 = new com.mbridge.msdk.advanced.js.a
            android.content.Context r2 = r12.getContext()
            java.lang.String r3 = r10.l
            java.lang.String r4 = r10.k
            r1.<init>(r2, r3, r4)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r2.add(r11)
            r1.a(r2)
        L80:
            boolean r2 = r10.h
            r1.a(r2)
            com.mbridge.msdk.advanced.c.a r2 = r10.p
            r1.a(r2)
            r12.setAdvancedNativeJSBridgeImpl(r1)
            boolean r1 = r11.isHasMBTplMark()
            if (r1 != 0) goto L97
            boolean r1 = r10.h
            if (r1 != 0) goto L9e
        L97:
            android.widget.ImageView r1 = r10.j
            r2 = 8
            r1.setVisibility(r2)
        L9e:
            android.widget.ImageView r1 = r10.j
            if (r1 == 0) goto La7
            android.view.View$OnClickListener r2 = r10.o
            r1.setOnClickListener(r2)
        La7:
            android.widget.ImageView r1 = r10.j
            r12.setCloseView(r1)
            int r1 = r12.getVisibility()
            r2 = 0
            if (r1 == 0) goto Lb6
            r12.setVisibility(r2)
        Lb6:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r1 = r12.getAdvancedNativeWebview()
            boolean r1 = com.mbridge.msdk.foundation.tools.am.a(r1)
            com.mbridge.msdk.advanced.c.c r3 = r10.g
            if (r3 == 0) goto L2b8
            if (r1 != 0) goto L2b8
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r1 = r3.b()
            if (r1 == 0) goto L2b8
            com.mbridge.msdk.advanced.c.c r1 = r10.g
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r1 = r1.b()
            float r1 = r1.getAlpha()
            r3 = 1056964608(0x3f000000, float:0.5)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 < 0) goto L2b8
            com.mbridge.msdk.advanced.c.c r1 = r10.g
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r1 = r1.b()
            int r1 = r1.getVisibility()
            if (r1 != 0) goto L2b8
            boolean r1 = r10.n
            if (r1 == 0) goto Lec
            goto L2b8
        Lec:
            r12.show()
            com.mbridge.msdk.foundation.controller.a r13 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r12.getContext()
            r13.a(r1)
            java.lang.String r13 = r10.k
            r11.setCampaignUnitId(r13)
            com.mbridge.msdk.foundation.b.b r13 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r10.k
            r13.a(r1, r11)
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r10.c
            if (r13 == 0) goto L180
            boolean r13 = r13.isActiveOm()
            if (r13 == 0) goto L180
            if (r12 == 0) goto L180
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r13 = r12.getAdvancedNativeWebview()
            if (r13 == 0) goto L180
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L13d
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r3 = r13.getUrl()     // Catch: java.lang.Throwable -> L13d
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r10.c     // Catch: java.lang.Throwable -> L13d
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = com.mbridge.msdk.a.b.a(r1, r13, r3, r4)     // Catch: java.lang.Throwable -> L13d
            if (r1 == 0) goto L180
            r13.setAdSession(r1)     // Catch: java.lang.Throwable -> L13d
            r1.registerAdView(r13)     // Catch: java.lang.Throwable -> L13d
            r1.start()     // Catch: java.lang.Throwable -> L13d
            java.lang.String r13 = "adSession.start()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L13d
            goto L180
        L13d:
            r13 = move-exception
            java.lang.String r1 = r13.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.c
            if (r0 == 0) goto L180
            java.lang.String r4 = r0.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.c
            java.lang.String r5 = r0.getRequestIdNotice()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.c
            java.lang.String r6 = r0.getId()
            com.mbridge.msdk.foundation.same.report.d r3 = new com.mbridge.msdk.foundation.same.report.d
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r3.<init>(r0)
            java.lang.String r7 = r10.k
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fetch OM failed, exception"
            r0.append(r1)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r8 = r0.toString()
            r3.a(r4, r5, r6, r7, r8)
        L180:
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r10.c
            boolean r13 = r13.isReport()
            if (r13 != 0) goto L285
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r10.c
            boolean r0 = r13.isHasMBTplMark()
            r1 = 1
            if (r0 != 0) goto L1f8
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r2 = r10.k
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            r3.a(r0)
            java.lang.String r3 = r13.getImpressionURL()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L1c7
            java.lang.Thread r3 = new java.lang.Thread
            com.mbridge.msdk.advanced.b.b$8 r4 = new com.mbridge.msdk.advanced.b.b$8
            r4.<init>(r10, r0, r13)
            r3.<init>(r4)
            r3.start()
            r7 = 0
            r8 = 1
            java.lang.String r6 = r13.getImpressionURL()
            int r9 = com.mbridge.msdk.click.a.a.g
            r3 = r0
            r4 = r13
            r5 = r2
            com.mbridge.msdk.click.b.a(r3, r4, r5, r6, r7, r8, r9)
        L1c7:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L1ed
            com.mbridge.msdk.foundation.entity.l r3 = r13.getNativeVideoTracking()
            if (r3 == 0) goto L1ed
            com.mbridge.msdk.foundation.entity.l r3 = r13.getNativeVideoTracking()
            java.lang.String[] r3 = r3.l()
            if (r3 == 0) goto L1ed
            r7 = 0
            r8 = 0
            com.mbridge.msdk.foundation.entity.l r3 = r13.getNativeVideoTracking()
            java.lang.String[] r6 = r3.l()
            r3 = r0
            r4 = r13
            r5 = r2
            com.mbridge.msdk.click.b.a(r3, r4, r5, r6, r7, r8)
        L1ed:
            r13.setReport(r1)
            java.lang.String r0 = r10.k
            java.lang.String r2 = "h5_native"
            com.mbridge.msdk.foundation.same.a.d.a(r0, r13, r2)
            r2 = r1
        L1f8:
            if (r2 == 0) goto L234
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r0.j()
            java.lang.String r5 = r10.k
            if (r13 == 0) goto L227
            java.lang.String r0 = r13.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L21d
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L21d
            if (r0 != 0) goto L227
            java.lang.String r6 = r13.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L21d
            r7 = 0
            r8 = 1
            int r9 = com.mbridge.msdk.click.a.a.h     // Catch: java.lang.Throwable -> L21d
            r4 = r13
            com.mbridge.msdk.click.b.a(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L21d
            goto L227
        L21d:
            r0 = move-exception
            java.lang.String r1 = r10.b
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L227:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = r10.k
            r10.a(r13, r0, r1)
        L234:
            com.mbridge.msdk.foundation.controller.a r13 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r13 = r13.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.c
            java.lang.String r1 = r10.k
            if (r0 == 0) goto L27c
            boolean r2 = r0.isMraid()     // Catch: java.lang.Exception -> L278
            if (r2 == 0) goto L27c
            com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L278
            r2.<init>()     // Catch: java.lang.Exception -> L278
            java.lang.String r3 = r0.getRequestId()     // Catch: java.lang.Exception -> L278
            r2.k(r3)     // Catch: java.lang.Exception -> L278
            java.lang.String r3 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L278
            r2.l(r3)     // Catch: java.lang.Exception -> L278
            java.lang.String r3 = r0.getId()     // Catch: java.lang.Exception -> L278
            r2.n(r3)     // Catch: java.lang.Exception -> L278
            boolean r0 = r0.isMraid()     // Catch: java.lang.Exception -> L278
            if (r0 == 0) goto L26b
            int r0 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Exception -> L278
            goto L26d
        L26b:
            int r0 = com.mbridge.msdk.foundation.entity.p.b     // Catch: java.lang.Exception -> L278
        L26d:
            r2.a(r0)     // Catch: java.lang.Exception -> L278
            android.content.Context r13 = r13.getApplicationContext()     // Catch: java.lang.Exception -> L278
            com.mbridge.msdk.foundation.same.report.c.a(r2, r13, r1)     // Catch: java.lang.Exception -> L278
            goto L27c
        L278:
            r13 = move-exception
            r13.printStackTrace()
        L27c:
            com.mbridge.msdk.advanced.c.d r13 = r10.e
            if (r13 == 0) goto L285
            com.mbridge.msdk.out.MBridgeIds r0 = r10.m
            r13.a(r0)
        L285:
            int r13 = r10.i
            r0 = -1
            if (r13 == r0) goto L28d
            r12.changeCloseBtnState(r13)
        L28d:
            java.lang.String r12 = r10.k
            com.mbridge.msdk.advanced.b.c.a(r12)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = r10.l
            r12.append(r13)
            java.lang.String r13 = r10.k
            r12.append(r13)
            java.lang.String r11 = r11.getRequestId()
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            com.mbridge.msdk.advanced.common.b.b(r11)
            android.os.Handler r11 = r10.a
            r12 = 2
            r0 = 1000(0x3e8, double:4.94E-321)
            r11.sendEmptyMessageDelayed(r12, r0)
            return
        L2b8:
            if (r13 == 0) goto L2c4
            com.mbridge.msdk.advanced.b.b$5 r13 = new com.mbridge.msdk.advanced.b.b$5
            r13.<init>(r10, r11, r12)
            r0 = 200(0xc8, double:9.9E-322)
            r12.postDelayed(r13, r0)
        L2c4:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, boolean r9, java.lang.String r10) {
            r7 = this;
            com.mbridge.msdk.click.b r0 = r7.f
            if (r0 != 0) goto L15
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r7.k
            r0.<init>(r1, r2)
            r7.f = r0
        L15:
            com.mbridge.msdk.click.b r0 = r7.f
            com.mbridge.msdk.advanced.b.b$6 r1 = new com.mbridge.msdk.advanced.b.b$6
            r1.<init>(r7)
            r0.a(r1)
            if (r8 == 0) goto L6a
            boolean r0 = r8.needShowIDialog()     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L6a
            com.mbridge.msdk.advanced.b.b$7 r6 = new com.mbridge.msdk.advanced.b.b$7     // Catch: java.lang.Throwable -> L6a
            r6.<init>(r7, r9, r10, r8)     // Catch: java.lang.Throwable -> L6a
            boolean r0 = com.mbridge.msdk.click.c.a(r8)     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L6a
            boolean r0 = r8.needShowIDialog()     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L6a
            com.mbridge.msdk.click.b r0 = r7.f     // Catch: java.lang.Throwable -> L6a
            boolean r0 = r0.b(r8)     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L53
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = ""
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r7.d     // Catch: java.lang.Throwable -> L6a
            android.content.Context r4 = r0.getContext()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r7.k     // Catch: java.lang.Throwable -> L6a
            r3 = r8
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L6a
            goto L69
        L53:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L6a
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.advanced.d.a.a(r0, r8)     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.advanced.c.d r0 = r7.e     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L69
            com.mbridge.msdk.advanced.c.d r0 = r7.e     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.out.MBridgeIds r1 = r7.m     // Catch: java.lang.Throwable -> L6a
            r0.b(r1)     // Catch: java.lang.Throwable -> L6a
        L69:
            return
        L6a:
            if (r9 == 0) goto L77
            boolean r9 = android.text.TextUtils.isEmpty(r10)
            if (r9 != 0) goto L77
            java.lang.String r9 = r7.k
            com.mbridge.msdk.advanced.d.a.a(r8, r9, r10)
        L77:
            java.lang.String r9 = r7.k
            r8.setCampaignUnitId(r9)
            com.mbridge.msdk.click.b r9 = r7.f
            r9.c(r8)
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r7.c
            boolean r9 = r9.isReportClick()
            if (r9 != 0) goto L9a
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r7.c
            r10 = 1
            r9.setReportClick(r10)
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r9 = r9.j()
            com.mbridge.msdk.advanced.d.a.a(r9, r8)
        L9a:
            com.mbridge.msdk.advanced.c.d r8 = r7.e
            if (r8 == 0) goto La3
            com.mbridge.msdk.out.MBridgeIds r9 = r7.m
            r8.b(r9)
        La3:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final com.mbridge.msdk.advanced.c.a b() {
            r1 = this;
            com.mbridge.msdk.advanced.c.a r0 = r1.p
            return r0
    }

    public final void c() {
            r2 = this;
            com.mbridge.msdk.advanced.c.d r0 = r2.e
            r1 = 0
            if (r0 == 0) goto L7
            r2.e = r1
        L7:
            com.mbridge.msdk.advanced.c.a r0 = r2.p
            if (r0 == 0) goto Ld
            r2.p = r1
        Ld:
            android.view.View$OnClickListener r0 = r2.o
            if (r0 == 0) goto L13
            r2.o = r1
        L13:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r2.d
            if (r0 == 0) goto L1a
            r0.destroy()
        L1a:
            com.mbridge.msdk.advanced.c.c r0 = r2.g
            if (r0 == 0) goto L20
            r2.g = r1
        L20:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r2.k
            r0.c(r1)
            return
    }

    public final void d() {
            r3 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.d
            if (r0 == 0) goto L1d
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 != 0) goto L1d
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.d
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L1d
            boolean r1 = r0.isDestoryed()
            if (r1 != 0) goto L1d
            java.lang.String r1 = "onViewAppeared"
            java.lang.String r2 = ""
            com.mbridge.msdk.advanced.js.b.a(r0, r1, r2)
        L1d:
            return
    }

    public final void e() {
            r4 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r4.d
            if (r0 == 0) goto L1b
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L1b
            boolean r1 = r0.isDestoryed()
            if (r1 != 0) goto L1b
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r2 = "onViewDisappeared"
            java.lang.String r3 = ""
            r1.a(r0, r2, r3)
        L1b:
            return
    }
}
