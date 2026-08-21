package com.sigmob.sdk.mraid2;

public class m extends com.sigmob.sdk.videoAd.c {
    java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> f;
    private int g;
    private boolean h;
    private com.sigmob.sdk.mraid2.c i;
    private com.sigmob.sdk.base.views.x j;
    private boolean k;





    public m(android.app.Activity r1, com.sigmob.sdk.base.models.BaseAdUnit r2, android.os.Bundle r3, android.os.Bundle r4, java.lang.String r5, com.sigmob.sdk.base.common.j r6) {
            r0 = this;
            r0.<init>(r1, r5, r6)
            r4 = 0
            r0.k = r4
            java.lang.String r2 = r2.getUuid()
            java.util.List r2 = com.sigmob.sdk.base.common.f.b(r2)
            r0.f = r2
            java.lang.Object r2 = r2.get(r4)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            com.sigmob.sdk.base.models.rtb.Ad r2 = r2.getAd()
            java.lang.Integer r2 = r2.display_orientation
            int r2 = r2.intValue()
            r5 = 1
            if (r2 == r5) goto L30
            r6 = 2
            if (r2 == r6) goto L2e
            r2 = 3
            java.lang.String r6 = "REQUESTED_ORIENTATION"
            int r2 = r3.getInt(r6, r2)
            goto L31
        L2e:
            r2 = 6
            goto L31
        L30:
            r2 = 7
        L31:
            r0.g = r2
            com.sigmob.sdk.base.common.j r2 = r0.h()
            int r6 = r0.g
            r2.a(r6)
            android.app.Activity r2 = r0.k()
            r2.requestWindowFeature(r5)
            android.app.Activity r2 = r0.k()
            android.view.Window r2 = r2.getWindow()
            r5 = 16778240(0x1000400, float:2.3512757E-38)
            r2.addFlags(r5)
            int r2 = r0.g
            r0.b(r1, r2, r3)
            android.view.ViewGroup r1 = r0.j()
            r1.setBackgroundColor(r4)
            return
    }

    static java.lang.String a(com.sigmob.sdk.mraid2.m r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    private void a(int r4, android.widget.RelativeLayout.LayoutParams r5) {
            r3 = this;
            android.content.Context r0 = r3.b
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r0)
            r1 = 1
            r2 = 10
            if (r4 == r1) goto L1d
            r1 = 2
            if (r4 == r1) goto L1d
            r1 = 3
            if (r4 == r1) goto L17
            r1 = 4
            if (r4 == r1) goto L17
            goto L2a
        L17:
            r5.addRule(r2)
            r4 = 11
            goto L22
        L1d:
            r5.addRule(r2)
            r4 = 9
        L22:
            r5.addRule(r4)
            int r4 = r0 * 2
            r5.setMargins(r0, r4, r0, r0)
        L2a:
            return
    }

    private void a(android.content.Context r5, int r6) {
            r4 = this;
            com.sigmob.sdk.base.views.x r0 = r4.j
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 3
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r1 = r4.f
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            if (r1 == 0) goto L2f
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r1 = r4.f
            java.lang.Object r1 = r1.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r1.slotAdSetting
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r1.rv_setting
            if (r1 == 0) goto L2f
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r4.f
            java.lang.Object r0 = r0.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r0.slotAdSetting
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r0.rv_setting
            java.lang.Integer r0 = r0.endcard_close_position
            int r0 = r0.intValue()
        L2f:
            com.sigmob.sdk.base.views.x r1 = new com.sigmob.sdk.base.views.x
            r1.<init>(r5, r0)
            r4.j = r1
            r1.setVisibility(r6)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r1 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r5)
            int r5 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r5)
            r6.<init>(r3, r5)
            r4.a(r0, r6)
            android.view.ViewGroup r5 = r4.j()
            com.sigmob.sdk.base.views.x r0 = r4.j
            r5.addView(r0, r6)
            com.sigmob.sdk.base.views.x r5 = r4.j
            com.sigmob.sdk.mraid2.m$4 r6 = new com.sigmob.sdk.mraid2.m$4
            r6.<init>(r4)
            r5.setOnTouchListener(r6)
            com.sigmob.sdk.base.views.x r5 = r4.j
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r6 = r4.f
            java.lang.Object r6 = r6.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r6 = (com.sigmob.sdk.base.models.BaseAdUnit) r6
            r5.a(r6)
            return
    }

    private void a(com.sigmob.sdk.base.models.BaseAdUnit r2, com.sigmob.sdk.base.common.a r3) {
            r1 = this;
            com.sigmob.sdk.base.common.ab r0 = r2.getSessionManager()
            if (r0 != 0) goto Le
            com.sigmob.sdk.base.common.r r0 = new com.sigmob.sdk.base.common.r
            r0.<init>()
            r0.a(r2)
        Le:
            r2 = 0
            r0.a(r3, r2)
            return
    }

    private void a(com.sigmob.sdk.mraid2.e r8, com.sigmob.sdk.base.models.BaseAdUnit r9, java.lang.String r10, java.lang.String r11, org.json.JSONObject r12, java.lang.String r13, boolean r14) {
            r7 = this;
            com.sigmob.sdk.base.common.af r0 = com.sigmob.sdk.base.common.af.f
            android.net.Uri r2 = android.net.Uri.parse(r11)
            boolean r0 = r0.a(r2)
            java.lang.String r2 = "android.intent.action.VIEW"
            java.lang.String r4 = ""
            if (r0 == 0) goto L6a
            if (r14 == 0) goto L36
            if (r9 == 0) goto L1a
            r0 = 1
            r9.setRecord(r0)     // Catch: java.lang.Exception -> L48
            r0 = r9
            goto L28
        L1a:
            java.util.List r0 = r8.getAdUnitList()     // Catch: java.lang.Exception -> L48
            r5 = 0
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Exception -> L48
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0     // Catch: java.lang.Exception -> L48
            r0.setRecord(r5)     // Catch: java.lang.Exception -> L48
        L28:
            r0.setUrl(r11)     // Catch: java.lang.Exception -> L48
            android.content.Context r1 = r7.i()     // Catch: java.lang.Exception -> L48
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r5 = com.sigmob.sdk.base.common.AdActivity.class
            com.sigmob.sdk.base.common.AdActivity.a(r1, r5, r0)     // Catch: java.lang.Exception -> L48
            goto Lca
        L36:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L48
            android.net.Uri r1 = android.net.Uri.parse(r11)     // Catch: java.lang.Exception -> L48
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L48
            android.content.Context r1 = r7.i()     // Catch: java.lang.Exception -> L48
            com.sigmob.sdk.base.common.s.b(r1, r0)     // Catch: java.lang.Exception -> L48
            goto Lca
        L48:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 != 0) goto L68
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L64
            android.net.Uri r4 = android.net.Uri.parse(r13)     // Catch: java.lang.Exception -> L64
            r0.<init>(r2, r4)     // Catch: java.lang.Exception -> L64
            android.content.Context r2 = r7.i()     // Catch: java.lang.Exception -> L64
            com.sigmob.sdk.base.common.s.b(r2, r0)     // Catch: java.lang.Exception -> L64
            goto L68
        L64:
            r0 = move-exception
            r0.printStackTrace()
        L68:
            r0 = r1
            goto Lcb
        L6a:
            android.content.Context r0 = r7.i()     // Catch: java.lang.Exception -> L76
            android.net.Uri r5 = android.net.Uri.parse(r11)     // Catch: java.lang.Exception -> L76
            com.sigmob.sdk.base.common.s.a(r0, r5)     // Catch: java.lang.Exception -> L76
            goto L96
        L76:
            r0 = move-exception
            java.lang.String r4 = r0.getMessage()
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 != 0) goto L96
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L92
            android.net.Uri r5 = android.net.Uri.parse(r13)     // Catch: java.lang.Exception -> L92
            r0.<init>(r2, r5)     // Catch: java.lang.Exception -> L92
            android.content.Context r2 = r7.i()     // Catch: java.lang.Exception -> L92
            com.sigmob.sdk.base.common.s.b(r2, r0)     // Catch: java.lang.Exception -> L92
            goto L96
        L92:
            r0 = move-exception
            r0.printStackTrace()
        L96:
            if (r9 == 0) goto Lca
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lc6
            if (r0 == 0) goto Lae
            java.lang.String r0 = "open_deeplink"
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.I     // Catch: java.lang.Exception -> Lc6
            com.sigmob.sdk.base.network.f.a(r9, r2)     // Catch: java.lang.Exception -> Lc6
            com.sigmob.sdk.base.models.ClickCommon r2 = r9.getClickCommon()     // Catch: java.lang.Exception -> Lc6
            java.lang.String r5 = "1"
        Lab:
            r2.isDeeplink = r5     // Catch: java.lang.Exception -> Lc6
            goto Lbc
        Lae:
            java.lang.String r0 = "open_deeplink_failed"
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.J     // Catch: java.lang.Exception -> Lc6
            com.sigmob.sdk.base.network.f.a(r9, r2)     // Catch: java.lang.Exception -> Lc6
            com.sigmob.sdk.base.models.ClickCommon r2 = r9.getClickCommon()     // Catch: java.lang.Exception -> Lc6
            java.lang.String r5 = "0"
            goto Lab
        Lbc:
            r2 = 0
            com.sigmob.sdk.mraid2.m$3 r5 = new com.sigmob.sdk.mraid2.m$3     // Catch: java.lang.Exception -> Lc6
            r5.<init>(r7, r11, r12)     // Catch: java.lang.Exception -> Lc6
            com.sigmob.sdk.base.common.z.a(r0, r2, r9, r5)     // Catch: java.lang.Exception -> Lc6
            goto Lca
        Lc6:
            r0 = move-exception
            r0.printStackTrace()
        Lca:
            r0 = r4
        Lcb:
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            r6 = r0
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    private void a(com.sigmob.sdk.mraid2.e r2, com.sigmob.sdk.base.models.BaseAdUnit r3, java.lang.String r4, org.json.JSONObject r5, java.lang.String r6) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L6a
            if (r0 == 0) goto L4b
            java.lang.String r6 = "com.sigmob.action.interstitial.click"
            r1.a(r6)     // Catch: java.lang.Exception -> L6a
            com.sigmob.sdk.mraid2.b r6 = r2.getMraidBridge()     // Catch: java.lang.Exception -> L6a
            if (r6 == 0) goto L2b
            com.sigmob.sdk.mraid2.b r2 = r2.getMraidBridge()     // Catch: java.lang.Exception -> L6a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r6.<init>()     // Catch: java.lang.Exception -> L6a
            r6.append(r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = "_success"
            r6.append(r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> L6a
            java.lang.String r6 = ""
            r2.b(r4, r6)     // Catch: java.lang.Exception -> L6a
        L2b:
            if (r3 == 0) goto L6e
            com.sigmob.sdk.base.models.ClickCommon r2 = r3.getClickCommon()     // Catch: java.lang.Exception -> L6a
            com.sigmob.sdk.base.a r4 = com.sigmob.sdk.base.a.b     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = r4.name()     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Exception -> L6a
            java.lang.String r6 = "click"
            com.sigmob.sdk.mraid2.m$2 r0 = new com.sigmob.sdk.mraid2.m$2     // Catch: java.lang.Exception -> L6a
            r0.<init>(r1, r3, r2, r5)     // Catch: java.lang.Exception -> L6a
            com.sigmob.sdk.base.common.z.a(r4, r6, r3, r0)     // Catch: java.lang.Exception -> L6a
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.c     // Catch: java.lang.Exception -> L6a
            r1.a(r3, r2)     // Catch: java.lang.Exception -> L6a
            goto L6e
        L4b:
            com.sigmob.sdk.mraid2.b r3 = r2.getMraidBridge()     // Catch: java.lang.Exception -> L6a
            if (r3 == 0) goto L6e
            com.sigmob.sdk.mraid2.b r2 = r2.getMraidBridge()     // Catch: java.lang.Exception -> L6a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r3.<init>()     // Catch: java.lang.Exception -> L6a
            r3.append(r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = "_failed"
            r3.append(r4)     // Catch: java.lang.Exception -> L6a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L6a
            r2.b(r3, r6)     // Catch: java.lang.Exception -> L6a
            goto L6e
        L6a:
            r2 = move-exception
            r2.printStackTrace()
        L6e:
            return
    }

    static void a(com.sigmob.sdk.mraid2.m r0, com.sigmob.sdk.mraid2.e r1, com.sigmob.sdk.base.models.BaseAdUnit r2, java.lang.String r3, java.lang.String r4, org.json.JSONObject r5, java.lang.String r6, boolean r7) {
            r0.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    static void a(com.sigmob.sdk.mraid2.m r0, com.sigmob.sdk.mraid2.e r1, com.sigmob.sdk.base.models.BaseAdUnit r2, java.lang.String r3, org.json.JSONObject r4, java.lang.String r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    static void a(com.sigmob.sdk.mraid2.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean a(com.sigmob.sdk.mraid2.m r0, boolean r1) {
            r0.k = r1
            return r1
    }

    static com.sigmob.sdk.base.common.j b(com.sigmob.sdk.mraid2.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static void b(com.sigmob.sdk.mraid2.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean b(com.sigmob.sdk.mraid2.m r0, boolean r1) {
            r0.h = r1
            return r1
    }

    static java.lang.String c(com.sigmob.sdk.mraid2.m r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static void c(com.sigmob.sdk.mraid2.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.base.common.j d(com.sigmob.sdk.mraid2.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static void d(com.sigmob.sdk.mraid2.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.base.common.j e(com.sigmob.sdk.mraid2.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static void e(com.sigmob.sdk.mraid2.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean f(com.sigmob.sdk.mraid2.m r0) {
            boolean r0 = r0.h
            return r0
    }

    static android.content.Context g(com.sigmob.sdk.mraid2.m r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    static android.content.Context h(com.sigmob.sdk.mraid2.m r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    static android.content.Context i(com.sigmob.sdk.mraid2.m r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    static void j(com.sigmob.sdk.mraid2.m r0) {
            r0.l()
            return
    }

    static void k(com.sigmob.sdk.mraid2.m r0) {
            r0.m()
            return
    }

    static com.sigmob.sdk.base.common.j l(com.sigmob.sdk.mraid2.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    private void l() {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.j
            if (r0 == 0) goto L8
            r1 = 4
            r0.setVisibility(r1)
        L8:
            return
    }

    private void m() {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.j
            r1 = 0
            if (r0 != 0) goto La
            android.content.Context r0 = r2.b
            r2.a(r0, r1)
        La:
            com.sigmob.sdk.base.views.x r0 = r2.j
            r0.setVisibility(r1)
            return
    }

    public android.view.View a() {
            r4 = this;
            com.sigmob.sdk.mraid2.c r0 = new com.sigmob.sdk.mraid2.c
            android.content.Context r1 = r4.b
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r4.f
            com.sigmob.sdk.base.common.e r3 = r4.e
            r0.<init>(r1, r2, r3)
            r4.i = r0
            com.sigmob.sdk.mraid2.m$1 r1 = new com.sigmob.sdk.mraid2.m$1
            r1.<init>(r4)
            r0.a(r1)
            com.sigmob.sdk.mraid2.c r0 = r4.i
            android.widget.FrameLayout r0 = r0.e()
            return r0
    }

    @Override
    public void a(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @Override
    public void a(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void b() {
            r4 = this;
            super.b()
            android.view.View r0 = r4.a()
            android.view.ViewGroup r1 = r4.j()
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r1.addView(r0, r2)
            com.sigmob.sdk.mraid2.c r0 = r4.i
            if (r0 == 0) goto L24
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r1 = r4.f
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r1 = (com.sigmob.sdk.base.models.BaseAdUnit) r1
            r0.a(r1)
        L24:
            java.lang.String r0 = "com.sigmob.action.interstitial.vopen"
            r4.a(r0)
            return
    }

    @Override
    public void c() {
            r1 = this;
            boolean r0 = r1.k
            if (r0 == 0) goto La
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r1.a(r0)
            return
        La:
            com.sigmob.sdk.mraid2.c r0 = r1.i
            r0.a()
            return
    }

    @Override
    public void d() {
            r1 = this;
            com.sigmob.sdk.mraid2.c r0 = r1.i
            r0.b()
            return
    }

    @Override
    public void e() {
            r1 = this;
            com.sigmob.sdk.mraid2.c r0 = r1.i
            if (r0 == 0) goto L7
            r0.d()
        L7:
            boolean r0 = r1.k
            if (r0 != 0) goto L10
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r1.a(r0)
        L10:
            super.e()
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }
}
