package com.mbridge.msdk.mbbanner.common.c;

public final class c {
    private static java.lang.String b = "BannerShowManager";
    private float A;
    private android.view.View.OnClickListener B;
    private com.mbridge.msdk.mbbanner.common.b.a C;
    private com.mbridge.msdk.mbjscommon.c.b D;
    com.mbridge.msdk.click.b a;
    private com.mbridge.msdk.mbbanner.common.b.c c;
    private boolean d;
    private com.mbridge.msdk.foundation.entity.CampaignEx e;
    private com.mbridge.msdk.out.MBBannerView f;
    private android.widget.ImageView g;
    private com.mbridge.msdk.mbbanner.view.MBBannerWebView h;
    private android.widget.ImageView i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private java.lang.String q;
    private java.lang.String r;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> s;
    private int t;
    private long u;
    private com.mbridge.msdk.mbbanner.common.bridge.a v;
    private com.iab.omid.library.mmadbridge.adsession.AdSession w;
    private android.os.Handler x;
    private com.mbridge.msdk.foundation.same.e.a y;
    private float z;














    static {
            return
    }

    public c(com.mbridge.msdk.out.MBBannerView r3, com.mbridge.msdk.mbbanner.common.b.c r4, java.lang.String r5, java.lang.String r6, boolean r7, com.mbridge.msdk.c.d r8) {
            r2 = this;
            r2.<init>()
            r0 = 15000(0x3a98, double:7.411E-320)
            r2.u = r0
            com.mbridge.msdk.mbbanner.common.c.c$1 r0 = new com.mbridge.msdk.mbbanner.common.c.c$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.x = r0
            com.mbridge.msdk.mbbanner.common.c.c$6 r0 = new com.mbridge.msdk.mbbanner.common.c.c$6
            r0.<init>(r2)
            r2.y = r0
            com.mbridge.msdk.mbbanner.common.c.c$7 r0 = new com.mbridge.msdk.mbbanner.common.c.c$7
            r0.<init>(r2)
            r2.B = r0
            com.mbridge.msdk.mbbanner.common.c.c$8 r0 = new com.mbridge.msdk.mbbanner.common.c.c$8
            r0.<init>(r2)
            r2.C = r0
            com.mbridge.msdk.mbbanner.common.c.c$4 r0 = new com.mbridge.msdk.mbbanner.common.c.c$4
            r0.<init>(r2)
            r2.D = r0
            r2.d = r7
            r2.f = r3
            r2.q = r6
            r2.r = r5
            com.mbridge.msdk.mbbanner.common.b.e r3 = new com.mbridge.msdk.mbbanner.common.b.e
            r3.<init>(r4, r8)
            r2.c = r3
            return
    }

    static float a(com.mbridge.msdk.mbbanner.common.c.c r0, float r1) {
            r0.z = r1
            return r1
    }

    static com.iab.omid.library.mmadbridge.adsession.AdSession a(com.mbridge.msdk.mbbanner.common.c.c r0) {
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r0.w
            return r0
    }

    static com.iab.omid.library.mmadbridge.adsession.AdSession a(com.mbridge.msdk.mbbanner.common.c.c r0, com.iab.omid.library.mmadbridge.adsession.AdSession r1) {
            r0.w = r1
            return r1
    }

    private java.lang.String a(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L8f
            java.lang.String r1 = r5.getBannerUrl()
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r2 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()
            java.lang.String r1 = r2.getHtmlContentFromUrl(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L89
            java.lang.String r1 = r5.getBannerHtml()
            boolean r5 = r5.isActiveOm()
            java.lang.String r2 = "file:////"
            if (r5 == 0) goto L62
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> L38
            r5.<init>(r1)     // Catch: java.lang.Exception -> L38
            boolean r3 = r5.exists()     // Catch: java.lang.Exception -> L38
            if (r3 == 0) goto L31
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.x.a(r5)     // Catch: java.lang.Exception -> L38
        L31:
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = com.iab.omid.library.mmadbridge.ScriptInjector.injectScriptContentIntoHtml(r5, r0)     // Catch: java.lang.Exception -> L38
            goto L5e
        L38:
            java.io.File r5 = new java.io.File
            r5.<init>(r1)
            boolean r0 = r5.exists()
            if (r0 == 0) goto L60
            boolean r0 = r5.isFile()
            if (r0 == 0) goto L60
            boolean r5 = r5.canRead()
            if (r5 == 0) goto L60
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
        L5e:
            r0 = r5
            goto L8f
        L60:
            r0 = r1
            goto L8f
        L62:
            java.io.File r5 = new java.io.File
            r5.<init>(r1)
            boolean r0 = r5.exists()
            if (r0 == 0) goto L60
            boolean r0 = r5.isFile()
            if (r0 == 0) goto L60
            boolean r5 = r5.canRead()
            if (r5 == 0) goto L60
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            goto L5e
        L89:
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            java.lang.String r0 = com.iab.omid.library.mmadbridge.ScriptInjector.injectScriptContentIntoHtml(r5, r1)
        L8f:
            return r0
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
            java.lang.String r10 = com.mbridge.msdk.mbbanner.common.c.c.b
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L32:
            return
    }

    static void a(com.mbridge.msdk.mbbanner.common.c.c r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static void a(com.mbridge.msdk.mbbanner.common.c.c r0, java.lang.String r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.e
            if (r0 == 0) goto L27
            boolean r0 = r3.f()
            if (r0 != 0) goto L27
            android.os.Handler r0 = r3.x
            com.mbridge.msdk.foundation.same.e.a r1 = r3.y
            r0.removeCallbacks(r1)
            com.mbridge.msdk.mbbanner.common.b.c r0 = r3.c
            if (r0 == 0) goto L18
            r0.a(r4)
        L18:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e
            java.lang.String r2 = r3.q
            com.mbridge.msdk.foundation.same.report.e.b(r0, r1, r2, r4)
        L27:
            return
    }

    private void a(java.lang.String r3, int r4) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.e
            if (r0 == 0) goto L43
            com.mbridge.msdk.mbbanner.common.a.a r0 = com.mbridge.msdk.mbbanner.common.a.a.a()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e
            java.lang.String r1 = r1.getId()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.c(r1)
            java.lang.String r1 = r2.q
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.b(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e
            java.lang.String r1 = r1.getRequestId()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.d(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e
            java.lang.String r1 = r1.getRequestIdNotice()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.e(r1)
            com.mbridge.msdk.mbbanner.common.a.a r3 = r0.g(r3)
            com.mbridge.msdk.mbbanner.common.a.a r3 = r3.a(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.e
            boolean r4 = r4.isBidCampaign()
            com.mbridge.msdk.mbbanner.common.a.a r3 = r3.a(r4)
            java.lang.String r4 = r2.q
            com.mbridge.msdk.mbbanner.common.d.a.a(r3, r4)
        L43:
            return
    }

    static boolean a(com.mbridge.msdk.mbbanner.common.c.c r0, boolean r1) {
            r0.o = r1
            return r1
    }

    static float b(com.mbridge.msdk.mbbanner.common.c.c r0, float r1) {
            r0.A = r1
            return r1
    }

    static java.lang.String b() {
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.c.b
            return r0
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
            java.lang.String r10 = com.mbridge.msdk.mbbanner.common.c.c.b
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L25:
            return
    }

    static boolean b(com.mbridge.msdk.mbbanner.common.c.c r0) {
            boolean r0 = r0.p
            return r0
    }

    static boolean b(com.mbridge.msdk.mbbanner.common.c.c r0, boolean r1) {
            r0.l = r1
            return r1
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r10, android.content.Context r11, java.lang.String r12) {
            r9 = this;
            java.lang.String r0 = r10.getImpressionURL()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.mbbanner.common.c.c$13 r1 = new com.mbridge.msdk.mbbanner.common.c.c$13
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
        L25:
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L4b
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            if (r0 == 0) goto L4b
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            java.lang.String[] r0 = r0.l()
            if (r0 == 0) goto L4b
            r5 = 0
            r6 = 0
            com.mbridge.msdk.foundation.entity.l r0 = r10.getNativeVideoTracking()
            java.lang.String[] r4 = r0.l()
            r1 = r11
            r2 = r10
            r3 = r12
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L4b:
            return
    }

    static void c(com.mbridge.msdk.mbbanner.common.c.c r4) {
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r4.h
            if (r0 == 0) goto L11
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L11
            com.mbridge.msdk.out.MBBannerView r0 = r4.f
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r4.h
            r0.removeView(r1)
        L11:
            android.widget.ImageView r0 = r4.g
            r1 = 8
            if (r0 == 0) goto L29
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L29
            android.widget.ImageView r0 = r4.g
            r0.setVisibility(r1)
            com.mbridge.msdk.out.MBBannerView r0 = r4.f
            android.widget.ImageView r2 = r4.g
            r0.removeView(r2)
        L29:
            android.widget.ImageView r0 = r4.i
            if (r0 == 0) goto L3f
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L3f
            com.mbridge.msdk.out.MBBannerView r0 = r4.f
            android.widget.ImageView r2 = r4.i
            r0.removeView(r2)
            android.widget.ImageView r0 = r4.i
            r0.setVisibility(r1)
        L3f:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r4.q
            r0.c(r1)
            com.mbridge.msdk.mbbanner.common.a.a r0 = com.mbridge.msdk.mbbanner.common.a.a.a()
            java.lang.String r1 = r4.q
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.b(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.e
            java.lang.String r1 = r1.getRequestId()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.d(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.e
            java.lang.String r1 = r1.getRequestIdNotice()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.e(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.e
            java.lang.String r1 = r1.getId()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.c(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.e
            long r2 = r2.getCreativeId()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.f(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.e
            boolean r1 = r1.isBidCampaign()
            com.mbridge.msdk.mbbanner.common.a.a r0 = r0.a(r1)
            java.lang.String r1 = r4.q
            if (r0 == 0) goto Lc3
            java.lang.String r2 = "2000069"
            r0.a(r2)
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r2 = r2.c()
            if (r2 == 0) goto Lb4
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r0 = r0.b()
            r1.a(r0)
            goto Lc3
        Lb4:
            java.lang.String r0 = r0.b()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.same.report.c.a(r0, r2, r1)
        Lc3:
            java.lang.String r0 = r4.q
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r4.s
            com.mbridge.msdk.mbbanner.common.util.BannerUtils.inserCloseId(r0, r1)
            com.mbridge.msdk.mbbanner.common.b.c r4 = r4.c
            if (r4 == 0) goto Ld1
            r4.e()
        Ld1:
            return
    }

    private boolean c() {
            r10 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.e
            java.lang.String r0 = r10.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto Le0
            com.mbridge.msdk.out.MBBannerView r1 = r10.f
            r3 = 1
            if (r1 == 0) goto Ld4
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            if (r1 != 0) goto L45
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = new com.mbridge.msdk.mbbanner.view.MBBannerWebView     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L3f
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L3f
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L3f
            r10.h = r1     // Catch: java.lang.Throwable -> L3f
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L3f
            r5 = -1
            r4.<init>(r5, r5)     // Catch: java.lang.Throwable -> L3f
            r1.setLayoutParams(r4)     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.mbbanner.view.a r4 = new com.mbridge.msdk.mbbanner.view.a     // Catch: java.lang.Throwable -> L3f
            java.lang.String r5 = r10.q     // Catch: java.lang.Throwable -> L3f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r6 = r10.s     // Catch: java.lang.Throwable -> L3f
            com.mbridge.msdk.mbbanner.common.b.a r7 = r10.C     // Catch: java.lang.Throwable -> L3f
            r4.<init>(r5, r6, r7)     // Catch: java.lang.Throwable -> L3f
            r1.setWebViewClient(r4)     // Catch: java.lang.Throwable -> L3f
            goto L45
        L3f:
            java.lang.String r0 = "banner show failed because WebView is not available and try to show default"
            r10.a(r0, r3)
            return r2
        L45:
            android.widget.ImageView r1 = r10.g
            if (r1 == 0) goto L4e
            r4 = 8
            r1.setVisibility(r4)
        L4e:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            int r1 = r1.getVisibility()
            if (r1 == 0) goto L5b
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            r1.setVisibility(r2)
        L5b:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            android.view.ViewParent r1 = r1.getParent()
            if (r1 != 0) goto L73
            com.mbridge.msdk.out.MBBannerView r1 = r10.f
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r2 = r10.h
            r1.addView(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.e
            boolean r1 = r1.isMraid()
            r10.d(r1)
        L73:
            r10.g()
            com.mbridge.msdk.mbbanner.common.bridge.a r1 = new com.mbridge.msdk.mbbanner.common.bridge.a
            com.mbridge.msdk.out.MBBannerView r2 = r10.f
            android.content.Context r2 = r2.getContext()
            java.lang.String r4 = r10.r
            java.lang.String r5 = r10.q
            r1.<init>(r2, r4, r5)
            r10.v = r1
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r10.s
            r1.a(r2)
            com.mbridge.msdk.mbbanner.common.bridge.a r1 = r10.v
            com.mbridge.msdk.mbbanner.common.b.a r2 = r10.C
            r1.a(r2)
            com.mbridge.msdk.mbbanner.common.bridge.a r1 = r10.v
            int r2 = r10.t
            r1.a(r2)
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            com.mbridge.msdk.mbjscommon.c.b r2 = r10.D
            r1.setWebViewListener(r2)
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            com.mbridge.msdk.mbbanner.common.bridge.a r2 = r10.v
            r1.setObject(r2)
            java.lang.String r1 = "file"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto Lce
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.e
            boolean r1 = r1.isActiveOm()
            if (r1 == 0) goto Lbc
            java.lang.String r0 = com.mbridge.msdk.a.b.a(r0)
        Lbc:
            r6 = r0
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r4 = r10.h
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.e
            java.lang.String r5 = r0.getBannerUrl()
            r9 = 0
            java.lang.String r7 = "text/html"
            java.lang.String r8 = "utf-8"
            r4.loadDataWithBaseURL(r5, r6, r7, r8, r9)
            goto Ldf
        Lce:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r10.h
            r1.loadUrl(r0)
            goto Ldf
        Ld4:
            r0 = 2
            java.lang.String r1 = "banner render failed because banner view is null"
            r10.a(r1, r0)
            java.lang.String r0 = "banner show failed because banner view is exception"
            r10.a(r0)
        Ldf:
            return r3
        Le0:
            return r2
    }

    static boolean c(com.mbridge.msdk.mbbanner.common.c.c r0, boolean r1) {
            r0.n = r1
            return r1
    }

    private void d() {
            r3 = this;
            com.mbridge.msdk.out.MBBannerView r0 = r3.f
            if (r0 == 0) goto L61
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r3.h
            if (r0 == 0) goto L15
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L15
            com.mbridge.msdk.out.MBBannerView r0 = r3.f
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r1 = r3.h
            r0.removeView(r1)
        L15:
            android.widget.ImageView r0 = r3.g
            if (r0 != 0) goto L3a
            android.widget.ImageView r0 = new android.widget.ImageView
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            r3.g = r0
            com.mbridge.msdk.mbbanner.common.c.c$9 r1 = new com.mbridge.msdk.mbbanner.common.c.c$9
            r1.<init>(r3)
            r0.setOnTouchListener(r1)
            android.widget.ImageView r0 = r3.g
            com.mbridge.msdk.mbbanner.common.c.c$10 r1 = new com.mbridge.msdk.mbbanner.common.c.c$10
            r1.<init>(r3)
            r0.setOnClickListener(r1)
        L3a:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.e
            java.lang.String r0 = r0.getImageUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)
            com.mbridge.msdk.mbbanner.common.c.c$11 r2 = new com.mbridge.msdk.mbbanner.common.c.c$11
            r2.<init>(r3)
            r1.a(r0, r2)
            goto L66
        L5b:
            java.lang.String r0 = "banner show failed because campain is exception"
            r3.a(r0)
            goto L66
        L61:
            java.lang.String r0 = "banner show failed because banner view is exception"
            r3.a(r0)
        L66:
            return
    }

    static void d(com.mbridge.msdk.mbbanner.common.c.c r2) {
            boolean r0 = r2.d
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.i
            if (r0 == 0) goto L2e
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L2e
            android.widget.ImageView r0 = r2.i
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.i
            r1 = 0
            r0.setOnClickListener(r1)
            com.mbridge.msdk.out.MBBannerView r0 = r2.f
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.i
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L2e
            com.mbridge.msdk.out.MBBannerView r0 = r2.f
            android.widget.ImageView r2 = r2.i
            r0.removeView(r2)
        L2e:
            return
    }

    private void d(boolean r4) {
            r3 = this;
            com.mbridge.msdk.out.MBBannerView r0 = r3.f
            if (r0 == 0) goto L69
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r3.q
            com.mbridge.msdk.widget.FeedBackButton r0 = r0.b(r1)
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()
            boolean r1 = r1.b()
            if (r1 == 0) goto L49
            if (r4 == 0) goto L49
            if (r0 == 0) goto L49
            android.view.ViewParent r4 = r0.getParent()
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            if (r4 == 0) goto L27
            r4.removeView(r0)
        L27:
            r4 = 0
            r0.setVisibility(r4)
            android.view.ViewGroup$LayoutParams r4 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r4 = (android.widget.RelativeLayout.LayoutParams) r4
            if (r4 != 0) goto L3c
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            int r1 = com.mbridge.msdk.foundation.b.b.a
            int r2 = com.mbridge.msdk.foundation.b.b.b
            r4.<init>(r1, r2)
        L3c:
            r1 = 12
            r4.addRule(r1)
            r0.setLayoutParams(r4)
            com.mbridge.msdk.out.MBBannerView r4 = r3.f
            r4.addView(r0)
        L49:
            com.mbridge.msdk.foundation.b.b r4 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r0 = r3.q
            com.mbridge.msdk.mbbanner.common.c.c$5 r1 = new com.mbridge.msdk.mbbanner.common.c.c$5
            r1.<init>(r3)
            r4.a(r0, r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.e
            java.lang.String r0 = r3.q
            r4.setCampaignUnitId(r0)
            com.mbridge.msdk.foundation.b.b r4 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r0 = r3.q
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e
            r4.a(r0, r1)
        L69:
            return
    }

    private void e() {
            r23 = this;
            r1 = r23
            java.lang.String r2 = "true"
            boolean r0 = r1.l
            r3 = 1
            if (r0 == 0) goto L30
            boolean r0 = r1.m
            if (r0 != 0) goto L30
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.c
            if (r0 == 0) goto L30
            r1.m = r3
            android.os.Handler r0 = r1.x
            com.mbridge.msdk.foundation.same.e.a r4 = r1.y
            r0.removeCallbacks(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            if (r0 == 0) goto L30
            boolean r0 = r0.isCallbacked()
            if (r0 != 0) goto L30
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            r0.setCallbacked(r3)
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.c
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.s
            r0.a(r4)
        L30:
            boolean r0 = r1.l
            if (r0 == 0) goto L309
            boolean r0 = r1.j
            if (r0 == 0) goto L309
            boolean r0 = r1.k
            if (r0 == 0) goto L309
            boolean r0 = r1.m
            if (r0 == 0) goto L309
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            if (r0 == 0) goto L309
            boolean r0 = r23.f()
            if (r0 != 0) goto L309
            com.mbridge.msdk.out.MBBannerView r0 = r1.f
            r4 = 0
            if (r0 != 0) goto L50
            goto L5c
        L50:
            boolean r0 = com.mbridge.msdk.foundation.tools.am.a(r0)
            if (r0 != 0) goto L5c
            boolean r0 = r1.o
            if (r0 != 0) goto L5c
            r5 = r3
            goto L5d
        L5c:
            r5 = r4
        L5d:
            r6 = 1000(0x3e8, double:4.94E-321)
            if (r5 != 0) goto L6d
            com.mbridge.msdk.out.MBBannerView r0 = r1.f
            if (r0 == 0) goto L6d
            com.mbridge.msdk.mbbanner.common.c.c$12 r8 = new com.mbridge.msdk.mbbanner.common.c.c$12
            r8.<init>(r1)
            r0.postDelayed(r8, r6)
        L6d:
            boolean r0 = r1.n
            if (r0 == 0) goto L1e3
            if (r5 == 0) goto L1e3
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.c.b
            java.lang.String r8 = "onBannerWebViewShow && transInfoToMraid"
            com.mbridge.msdk.foundation.tools.z.d(r0, r8)
            r8 = 2
            int[] r9 = new int[r8]
            com.mbridge.msdk.out.MBBannerView r0 = r1.f
            r0.getLocationInWindow(r9)
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r1.h
            r10 = r9[r4]
            float r10 = (float) r10
            r11 = r9[r3]
            float r11 = (float) r11
            java.lang.String r12 = "fireOnBannerWebViewShow"
            java.lang.String r13 = "BannerCallJS"
            com.mbridge.msdk.foundation.tools.z.d(r13, r12)
            org.json.JSONObject r14 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lca
            r14.<init>()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r15 = "startX"
            double r6 = (double) r10     // Catch: java.lang.Throwable -> Lca
            r14.put(r15, r6)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r6 = "startY"
            double r10 = (double) r11     // Catch: java.lang.Throwable -> Lca
            r14.put(r6, r10)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r6 = "scale"
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lca
            android.content.Context r7 = r7.j()     // Catch: java.lang.Throwable -> Lca
            float r7 = com.mbridge.msdk.foundation.tools.ae.d(r7)     // Catch: java.lang.Throwable -> Lca
            double r10 = (double) r7     // Catch: java.lang.Throwable -> Lca
            r14.put(r6, r10)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r6 = r14.toString()     // Catch: java.lang.Throwable -> Lca
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r8)     // Catch: java.lang.Throwable -> Lca
            com.mbridge.msdk.mbjscommon.windvane.h r7 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r10 = "webviewshow"
            r7.a(r0, r10, r6)     // Catch: java.lang.Throwable -> Lca
            goto Lce
        Lca:
            r0 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r13, r12, r0)
        Lce:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r1.h
            r6 = r9[r4]
            r7 = r9[r3]
            com.mbridge.msdk.out.MBBannerView r9 = r1.f
            int r9 = r9.getWidth()
            com.mbridge.msdk.out.MBBannerView r10 = r1.f
            int r10 = r10.getHeight()
            java.lang.String r11 = "transInfoForMraid"
            com.mbridge.msdk.foundation.tools.z.d(r13, r11)
            com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b6
            android.content.Context r12 = r12.j()     // Catch: java.lang.Throwable -> L1b6
            android.content.res.Resources r12 = r12.getResources()     // Catch: java.lang.Throwable -> L1b6
            android.content.res.Configuration r12 = r12.getConfiguration()     // Catch: java.lang.Throwable -> L1b6
            int r12 = r12.orientation     // Catch: java.lang.Throwable -> L1b6
            org.json.JSONObject r14 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1b6
            r14.<init>()     // Catch: java.lang.Throwable -> L1b6
            java.lang.String r15 = "orientation"
            if (r12 != r8) goto L103
            java.lang.String r8 = "landscape"
            goto L10a
        L103:
            if (r12 != r3) goto L108
            java.lang.String r8 = "portrait"
            goto L10a
        L108:
            java.lang.String r8 = "undefined"
        L10a:
            r14.put(r15, r8)     // Catch: java.lang.Throwable -> L1b6
            java.lang.String r8 = "locked"
            r14.put(r8, r2)     // Catch: java.lang.Throwable -> L1b6
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b6
            android.content.Context r8 = r8.j()     // Catch: java.lang.Throwable -> L1b6
            int r8 = com.mbridge.msdk.foundation.tools.v.x(r8)     // Catch: java.lang.Throwable -> L1b6
            float r8 = (float) r8     // Catch: java.lang.Throwable -> L1b6
            com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b6
            android.content.Context r12 = r12.j()     // Catch: java.lang.Throwable -> L1b6
            int r12 = com.mbridge.msdk.foundation.tools.v.y(r12)     // Catch: java.lang.Throwable -> L1b6
            float r12 = (float) r12     // Catch: java.lang.Throwable -> L1b6
            com.mbridge.msdk.foundation.controller.a r15 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b6
            android.content.Context r15 = r15.j()     // Catch: java.lang.Throwable -> L1b6
            java.util.HashMap r15 = com.mbridge.msdk.foundation.tools.v.z(r15)     // Catch: java.lang.Throwable -> L1b6
            java.lang.String r3 = "width"
            java.lang.Object r3 = r15.get(r3)     // Catch: java.lang.Throwable -> L1b6
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L1b6
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L1b6
            java.lang.String r4 = "height"
            java.lang.Object r4 = r15.get(r4)     // Catch: java.lang.Throwable -> L1b6
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L1b6
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L1b6
            java.util.HashMap r15 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1b6
            r15.<init>()     // Catch: java.lang.Throwable -> L1b6
            r22 = r5
            java.lang.String r5 = "placementType"
            java.lang.String r1 = "inline"
            r15.put(r5, r1)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r1 = "state"
            java.lang.String r5 = "default"
            r15.put(r1, r5)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r1 = "viewable"
            r15.put(r1, r2)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r1 = "currentAppOrientation"
            r15.put(r1, r14)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r16 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            float r1 = (float) r6     // Catch: java.lang.Throwable -> L1b4
            float r2 = (float) r7     // Catch: java.lang.Throwable -> L1b4
            float r5 = (float) r9     // Catch: java.lang.Throwable -> L1b4
            float r6 = (float) r10     // Catch: java.lang.Throwable -> L1b4
            r17 = r0
            r18 = r1
            r19 = r2
            r20 = r5
            r21 = r6
            r16.a(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r16 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            r17 = r0
            r18 = r1
            r19 = r2
            r20 = r5
            r21 = r6
            r16.b(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            r1.b(r0, r8, r12)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            float r2 = (float) r3     // Catch: java.lang.Throwable -> L1b4
            float r3 = (float) r4     // Catch: java.lang.Throwable -> L1b4
            r1.c(r0, r2, r3)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            r1.a(r0, r15)     // Catch: java.lang.Throwable -> L1b4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L1b4
            r1.a(r0)     // Catch: java.lang.Throwable -> L1b4
            goto L1bc
        L1b4:
            r0 = move-exception
            goto L1b9
        L1b6:
            r0 = move-exception
            r22 = r5
        L1b9:
            com.mbridge.msdk.foundation.tools.z.c(r13, r11, r0)
        L1bc:
            r2 = 0
            r1 = r23
            r1.n = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            java.lang.String r0 = r0.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e5
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.e
            java.lang.String r2 = r2.getImageUrl()
            r0.c(r2)
            goto L1e5
        L1e3:
            r22 = r5
        L1e5:
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.c.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "showSuccessed:"
            r2.append(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.e
            java.lang.String r3 = r3.getId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            if (r22 == 0) goto L303
            android.widget.ImageView r0 = r1.g
            java.lang.String r2 = "banner"
            if (r0 == 0) goto L24b
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L24b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            if (r0 == 0) goto L2dd
            if (r0 == 0) goto L23c
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            java.lang.String r4 = r1.q
            r1.c(r0, r3, r4)
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            java.lang.String r4 = r1.q
            r1.b(r0, r3, r4)
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            java.lang.String r4 = r1.q
            r1.a(r0, r3, r4)
        L23c:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            r3 = 1
            r0.setReport(r3)
            java.lang.String r0 = r1.q
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.e
            com.mbridge.msdk.foundation.same.a.d.a(r0, r3, r2)
            goto L2dd
        L24b:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.s
            if (r0 == 0) goto L2dd
            int r0 = r0.size()
            if (r0 <= 0) goto L2dd
            r0 = 0
            r3 = 0
            r4 = 0
        L258:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.s
            int r5 = r5.size()
            if (r0 >= r5) goto L2b1
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.s
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            boolean r5 = r5.isHasMBTplMark()
            if (r5 != 0) goto L2ae
            if (r0 == 0) goto L27e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.s
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            boolean r5 = r5.isReport()
            if (r5 != 0) goto L2ae
        L27e:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r1.s
            java.lang.Object r3 = r3.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.String r5 = r1.q
            r1.c(r3, r4, r5)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r1.s
            java.lang.Object r3 = r3.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r4 = 1
            r3.setReport(r4)
            java.lang.String r3 = r1.q
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.s
            java.lang.Object r4 = r4.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            com.mbridge.msdk.foundation.same.a.d.a(r3, r4, r2)
            r4 = r0
            r3 = 1
        L2ae:
            int r0 = r0 + 1
            goto L258
        L2b1:
            if (r3 == 0) goto L2dd
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.s
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.lang.String r3 = r1.q
            r1.b(r0, r2, r3)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.s
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.lang.String r3 = r1.q
            r1.a(r0, r2, r3)
        L2dd:
            r2 = 1
            r1.p = r2
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.c
            if (r0 == 0) goto L2ea
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.e
            r4 = 0
            r0.a(r3, r4)
        L2ea:
            android.os.Handler r0 = r1.x
            r3 = 1000(0x3e8, double:4.94E-321)
            r0.sendEmptyMessageDelayed(r2, r3)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.e
            java.lang.String r3 = r1.q
            java.lang.String r4 = ""
            com.mbridge.msdk.foundation.same.report.e.a(r0, r2, r3, r4)
            goto L309
        L303:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            r2 = 0
            r0.setReport(r2)
        L309:
            return
    }

    static void e(com.mbridge.msdk.mbbanner.common.c.c r0) {
            r0.g()
            return
    }

    static void f(com.mbridge.msdk.mbbanner.common.c.c r0) {
            r0.e()
            return
    }

    private synchronized boolean f() {
            r3 = this;
            monitor-enter(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.e     // Catch: java.lang.Throwable -> L11
            boolean r0 = r0.isReport()     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Lf
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e     // Catch: java.lang.Throwable -> L11
            r2 = 1
            r1.setReport(r2)     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r3)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private void g() {
            r4 = this;
            boolean r0 = r4.d
            if (r0 == 0) goto L57
            android.widget.ImageView r0 = r4.i
            if (r0 == 0) goto L57
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1b
            android.widget.ImageView r0 = r4.i
            r1 = 0
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r4.i
            android.view.View$OnClickListener r1 = r4.B
            r0.setOnClickListener(r1)
        L1b:
            android.widget.ImageView r0 = r4.i
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L57
            com.mbridge.msdk.out.MBBannerView r0 = r4.f
            if (r0 == 0) goto L57
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 1094713344(0x41400000, float:12.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r3, r2)
            r0.<init>(r1, r2)
            r1 = 11
            r0.addRule(r1)
            r1 = 10
            r0.addRule(r1)
            com.mbridge.msdk.out.MBBannerView r1 = r4.f
            android.widget.ImageView r2 = r4.i
            r1.addView(r2, r0)
        L57:
            return
    }

    static void g(com.mbridge.msdk.mbbanner.common.c.c r0) {
            r0.d()
            return
    }

    static com.mbridge.msdk.mbbanner.common.b.c h(com.mbridge.msdk.mbbanner.common.c.c r0) {
            com.mbridge.msdk.mbbanner.common.b.c r0 = r0.c
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx i(com.mbridge.msdk.mbbanner.common.c.c r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.e
            return r0
    }

    static float j(com.mbridge.msdk.mbbanner.common.c.c r0) {
            float r0 = r0.z
            return r0
    }

    static float k(com.mbridge.msdk.mbbanner.common.c.c r0) {
            float r0 = r0.A
            return r0
    }

    static android.widget.ImageView l(com.mbridge.msdk.mbbanner.common.c.c r0) {
            android.widget.ImageView r0 = r0.g
            return r0
    }

    static void m(com.mbridge.msdk.mbbanner.common.c.c r3) {
            android.widget.ImageView r0 = r3.g
            if (r0 == 0) goto L44
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r3.h
            if (r0 == 0) goto Ld
            r1 = 8
            r0.setVisibility(r1)
        Ld:
            android.widget.ImageView r0 = r3.g
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1b
            android.widget.ImageView r0 = r3.g
            r1 = 0
            r0.setVisibility(r1)
        L1b:
            com.mbridge.msdk.out.MBBannerView r0 = r3.f
            if (r0 == 0) goto L44
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r1 = 10
            r0.addRule(r1)
            android.widget.ImageView r1 = r3.g
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r3.g
            android.view.ViewParent r1 = r1.getParent()
            if (r1 != 0) goto L40
            com.mbridge.msdk.out.MBBannerView r1 = r3.f
            android.widget.ImageView r2 = r3.g
            r1.addView(r2, r0)
        L40:
            r0 = 1
            r3.d(r0)
        L44:
            return
    }

    static com.mbridge.msdk.out.MBBannerView n(com.mbridge.msdk.mbbanner.common.c.c r0) {
            com.mbridge.msdk.out.MBBannerView r0 = r0.f
            return r0
    }

    static java.lang.String o(com.mbridge.msdk.mbbanner.common.c.c r0) {
            java.lang.String r0 = r0.q
            return r0
    }

    static android.widget.ImageView p(com.mbridge.msdk.mbbanner.common.c.c r0) {
            android.widget.ImageView r0 = r0.i
            return r0
    }

    static com.mbridge.msdk.mbbanner.view.MBBannerWebView q(com.mbridge.msdk.mbbanner.common.c.c r0) {
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r0.h
            return r0
    }

    public final void a() {
            r3 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r3.w
            r1 = 0
            if (r0 == 0) goto L11
            r0.finish()
            r3.w = r1
            java.lang.String r0 = "omsdk"
            java.lang.String r2 = " adSession.finish() "
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)
        L11:
            com.mbridge.msdk.mbbanner.common.b.c r0 = r3.c
            if (r0 == 0) goto L17
            r3.c = r1
        L17:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r3.h
            if (r0 == 0) goto L1e
            r0.setWebViewListener(r1)
        L1e:
            com.mbridge.msdk.mbjscommon.c.b r0 = r3.D
            if (r0 == 0) goto L24
            r3.D = r1
        L24:
            android.widget.ImageView r0 = r3.i
            if (r0 == 0) goto L2b
            r0.setOnClickListener(r1)
        L2b:
            android.widget.ImageView r0 = r3.g
            if (r0 == 0) goto L32
            r0.setOnClickListener(r1)
        L32:
            com.mbridge.msdk.out.MBBannerView r0 = r3.f
            if (r0 == 0) goto L39
            r0.removeAllViews()
        L39:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r0 = r3.h
            if (r0 == 0) goto L40
            r0.release()
        L40:
            com.mbridge.msdk.mbbanner.common.bridge.a r0 = r3.v
            if (r0 == 0) goto L47
            r0.a()
        L47:
            com.mbridge.msdk.mbbanner.common.b.a r0 = r3.C
            if (r0 == 0) goto L4d
            r3.C = r1
        L4d:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r1 = r3.q
            r0.c(r1)
            return
    }

    public final void a(int r3, int r4, int r5, int r6) {
            r2 = this;
            if (r3 != r5) goto L5
            if (r4 != r6) goto L5
            return
        L5:
            com.mbridge.msdk.mbbanner.view.MBBannerWebView r5 = r2.h
            java.lang.String r6 = "fireOnBannerViewSizeChange"
            java.lang.String r0 = "BannerCallJS"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L18
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L18
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L18
            r1.a(r5, r3, r4)     // Catch: java.lang.Throwable -> L18
            goto L1c
        L18:
            r3 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r6, r3)
        L1c:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, boolean r10, java.lang.String r11) {
            r8 = this;
            boolean r0 = r8.p
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.click.b r0 = r8.a
            if (r0 != 0) goto L1a
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r8.q
            r0.<init>(r1, r2)
            r8.a = r0
        L1a:
            com.mbridge.msdk.click.b r0 = r8.a
            com.mbridge.msdk.mbbanner.common.c.c$2 r1 = new com.mbridge.msdk.mbbanner.common.c.c$2
            r1.<init>(r8)
            r0.a(r1)
            r0 = 1
            if (r9 == 0) goto L80
            boolean r1 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L80
            java.lang.String r1 = r8.q     // Catch: java.lang.Throwable -> L7c
            r9.setCampaignUnitId(r1)     // Catch: java.lang.Throwable -> L7c
            com.mbridge.msdk.mbbanner.common.c.c$3 r7 = new com.mbridge.msdk.mbbanner.common.c.c$3     // Catch: java.lang.Throwable -> L7c
            r7.<init>(r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L7c
            boolean r1 = com.mbridge.msdk.click.c.a(r9)     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L80
            boolean r1 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L80
            com.mbridge.msdk.click.b r1 = r8.a     // Catch: java.lang.Throwable -> L7c
            boolean r1 = r1.b(r9)     // Catch: java.lang.Throwable -> L7c
            if (r1 != 0) goto L67
            com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = ""
            com.mbridge.msdk.out.MBBannerView r1 = r8.f     // Catch: java.lang.Throwable -> L7c
            android.content.Context r5 = r1.getContext()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = r8.q     // Catch: java.lang.Throwable -> L7c
            r4 = r9
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L7c
            com.mbridge.msdk.mbbanner.common.b.c r1 = r8.c     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L7b
            com.mbridge.msdk.mbbanner.common.b.c r1 = r8.c     // Catch: java.lang.Throwable -> L7c
            r1.a(r0)     // Catch: java.lang.Throwable -> L7c
            goto L7b
        L67:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L7c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L7c
            com.mbridge.msdk.mbbanner.common.d.a.a(r1, r9)     // Catch: java.lang.Throwable -> L7c
            com.mbridge.msdk.mbbanner.common.b.c r1 = r8.c     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L7b
            com.mbridge.msdk.mbbanner.common.b.c r1 = r8.c     // Catch: java.lang.Throwable -> L7c
            r1.a()     // Catch: java.lang.Throwable -> L7c
        L7b:
            return
        L7c:
            r1 = move-exception
            r1.printStackTrace()
        L80:
            com.mbridge.msdk.click.b r1 = r8.a
            r1.c(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            boolean r1 = r1.isReportClick()
            if (r1 != 0) goto L9d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            r1.setReportClick(r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.mbbanner.common.d.a.a(r0, r9)
        L9d:
            com.mbridge.msdk.mbbanner.common.b.c r0 = r8.c
            if (r0 == 0) goto La4
            r0.a()
        La4:
            if (r10 == 0) goto Lb1
            boolean r10 = android.text.TextUtils.isEmpty(r11)
            if (r10 != 0) goto Lb1
            java.lang.String r10 = r8.q
            com.mbridge.msdk.mbbanner.common.d.a.a(r9, r10, r11)
        Lb1:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignUnit r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L1a
            java.util.ArrayList r5 = r5.getAds()
            r4.s = r5
            if (r5 == 0) goto L1a
            int r5 = r5.size()
            if (r5 <= 0) goto L1a
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r4.s
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            goto L1b
        L1a:
            r5 = 0
        L1b:
            r4.e = r5
            if (r5 != 0) goto L25
            java.lang.String r5 = "banner show failed because campain is exception"
            r4.a(r5)
            return
        L25:
            android.os.Handler r5 = r4.x
            com.mbridge.msdk.foundation.same.e.a r1 = r4.y
            r5.removeCallbacks(r1)
            boolean r5 = r4.d
            if (r5 == 0) goto L64
            android.widget.ImageView r5 = r4.i
            if (r5 != 0) goto L64
            android.widget.ImageView r5 = new android.widget.ImageView
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r5.<init>(r1)
            r4.i = r5
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = "mbridge_banner_close"
            java.lang.String r3 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            r5.setBackgroundResource(r1)
            android.widget.ImageView r5 = r4.i
            r1 = 8
            r5.setVisibility(r1)
            android.widget.ImageView r5 = r4.i
            java.lang.String r1 = "closeButton"
            r5.setContentDescription(r1)
        L64:
            r4.l = r0
            r4.m = r0
            r4.p = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.e
            java.lang.String r5 = r5.getBannerHtml()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L82
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.e
            java.lang.String r5 = r5.getBannerUrl()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Le2
        L82:
            com.mbridge.msdk.mbbanner.common.a.a r5 = com.mbridge.msdk.mbbanner.common.a.a.a()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.e
            java.lang.String r0 = r0.getId()
            com.mbridge.msdk.mbbanner.common.a.a r5 = r5.c(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.e
            java.lang.String r0 = r0.getRequestId()
            com.mbridge.msdk.mbbanner.common.a.a r5 = r5.d(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.e
            java.lang.String r0 = r0.getRequestIdNotice()
            com.mbridge.msdk.mbbanner.common.a.a r5 = r5.e(r0)
            java.lang.String r0 = r4.q
            com.mbridge.msdk.mbbanner.common.a.a r5 = r5.b(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.e
            boolean r0 = r0.isBidCampaign()
            com.mbridge.msdk.mbbanner.common.a.a r5 = r5.a(r0)
            java.lang.String r0 = r4.q
            if (r5 == 0) goto Le2
            java.lang.String r1 = "2000067"
            r5.a(r1)
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r1 = r1.c()
            if (r1 == 0) goto Ld3
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r5 = r5.b()
            r0.a(r5)
            goto Le2
        Ld3:
            java.lang.String r5 = r5.b()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.same.report.c.a(r5, r1, r0)
        Le2:
            android.os.Handler r5 = r4.x
            com.mbridge.msdk.foundation.same.e.a r0 = r4.y
            long r1 = r4.u
            r5.postDelayed(r0, r1)
            boolean r5 = r4.c()
            if (r5 != 0) goto L112
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.e
            java.lang.String r5 = r5.getBannerHtml()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L109
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.e
            java.lang.String r5 = r5.getBannerUrl()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L10f
        L109:
            r5 = 2
            java.lang.String r0 = "banner render failed because res load failed"
            r4.a(r0, r5)
        L10f:
            r4.d()
        L112:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(boolean r3, int r4) {
            r2 = this;
            r2.t = r4
            r0 = 1
            if (r4 == 0) goto L6
            goto L23
        L6:
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            java.lang.String r1 = r2.q
            com.mbridge.msdk.c.d r3 = r3.e(r4, r1)
            if (r3 == 0) goto L25
            int r3 = r3.c()
            if (r3 != r0) goto L22
            r3 = r0
            goto L23
        L22:
            r3 = 0
        L23:
            r2.d = r3
        L25:
            return
    }

    public final void b(boolean r8) {
            r7 = this;
            r7.j = r8
            r7.e()
            if (r8 != 0) goto L42
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.e
            java.lang.String r4 = r7.q
            if (r8 == 0) goto L42
            java.lang.String r0 = r8.getId()
            java.lang.String r5 = com.mbridge.msdk.mbjscommon.mraid.c.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L42
            com.mbridge.msdk.foundation.same.report.d r0 = new com.mbridge.msdk.foundation.same.report.d
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            java.lang.String r1 = r8.getRequestId()
            java.lang.String r2 = r8.getRequestIdNotice()
            java.lang.String r3 = r8.getId()
            boolean r6 = r8.isBidCampaign()
            r0.a(r1, r2, r3, r4, r5, r6)
            java.lang.String r8 = r8.getId()
            com.mbridge.msdk.mbjscommon.mraid.c.b(r8)
        L42:
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.k = r1
            r0.e()
            return
    }
}
