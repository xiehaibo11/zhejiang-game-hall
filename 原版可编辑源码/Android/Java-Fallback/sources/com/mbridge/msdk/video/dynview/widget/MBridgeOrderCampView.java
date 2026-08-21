package com.mbridge.msdk.video.dynview.widget;

public class MBridgeOrderCampView extends com.mbridge.msdk.video.module.MBridgeBaseView {
    private com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView n;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> o;
    private int p;
    private int q;
    private int r;
    private int s;
    private java.lang.String t;
    private com.mbridge.msdk.widget.FeedBackButton u;
    private android.widget.ImageView v;
    private boolean w;
    private com.mbridge.msdk.video.dynview.e.c x;
    private com.mbridge.msdk.video.dynview.e.b y;
    private boolean z;





    public MBridgeOrderCampView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.w = r2
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$1 r0 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$1
            r0.<init>(r1)
            r1.x = r0
            r1.z = r2
            return
    }

    public MBridgeOrderCampView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.w = r1
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$1 r2 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$1
            r2.<init>(r0)
            r0.x = r2
            r0.z = r1
            return
    }

    static void a(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r2) {
            com.mbridge.msdk.video.dynview.moffer.a r0 = com.mbridge.msdk.video.dynview.moffer.a.a()     // Catch: java.lang.Exception -> L8
            r0.b()     // Catch: java.lang.Exception -> L8
            goto L12
        L8:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L12:
            com.mbridge.msdk.video.module.a.a r0 = r2.e
            if (r0 == 0) goto L1f
            com.mbridge.msdk.video.module.a.a r2 = r2.e
            r0 = 104(0x68, float:1.46E-43)
            java.lang.String r1 = ""
            r2.a(r0, r1)
        L1f:
            return
    }

    static void a(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, int r10, int r11) {
            if (r9 == 0) goto L5f
            boolean r0 = r9.isDynamicView()
            if (r0 == 0) goto L5f
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r9.getRewardTemplateMode()     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = ""
            if (r0 == 0) goto L23
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r2.<init>()     // Catch: java.lang.Exception -> L55
            int r0 = r0.b()     // Catch: java.lang.Exception -> L55
            r2.append(r0)     // Catch: java.lang.Exception -> L55
            r2.append(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L55
        L23:
            r7 = r1
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L55
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L55
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r1.<init>()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "order_view_click"
            r1.append(r2)     // Catch: java.lang.Exception -> L55
            r1.append(r7)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r9.getCampaignUnitId()     // Catch: java.lang.Exception -> L55
            boolean r3 = r9.isBidCampaign()     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = r9.getRequestId()     // Catch: java.lang.Exception -> L55
            java.lang.String r5 = r9.getRequestIdNotice()     // Catch: java.lang.Exception -> L55
            java.lang.String r6 = r9.getId()     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L55
            goto L5f
        L55:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        L5f:
            r9 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L76
            r0.<init>()     // Catch: org.json.JSONException -> L76
            java.lang.String r9 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L74
            org.json.JSONObject r10 = r8.a(r10)     // Catch: org.json.JSONException -> L74
            r0.put(r9, r10)     // Catch: org.json.JSONException -> L74
            java.lang.String r9 = "camp_position"
            r0.put(r9, r11)     // Catch: org.json.JSONException -> L74
            goto L7c
        L74:
            r9 = move-exception
            goto L79
        L76:
            r10 = move-exception
            r0 = r9
            r9 = r10
        L79:
            r9.printStackTrace()
        L7c:
            com.mbridge.msdk.video.module.a.a r9 = r8.e
            if (r9 == 0) goto L87
            com.mbridge.msdk.video.module.a.a r8 = r8.e
            r9 = 105(0x69, float:1.47E-43)
            r8.a(r9, r0)
        L87:
            return
    }

    static boolean a(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0, boolean r1) {
            r0.w = r1
            return r1
    }

    static com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView b(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0) {
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r0.n
            return r0
    }

    static java.util.List c(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.o
            return r0
    }

    static com.mbridge.msdk.video.dynview.e.b d(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0) {
            com.mbridge.msdk.video.dynview.e.b r0 = r0.y
            return r0
    }

    static android.content.Context e(com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public void createView(android.view.ViewGroup r5) {
            r4 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.o
            if (r0 != 0) goto Lc
            com.mbridge.msdk.video.dynview.e.b r5 = r4.y
            if (r5 == 0) goto Lb
            r5.b()
        Lb:
            return
        Lc:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.video.dynview.e.c r1 = r4.x
            java.lang.String r2 = "order_view_callback"
            r0.put(r2, r1)
            com.mbridge.msdk.video.dynview.j.c r1 = new com.mbridge.msdk.video.dynview.j.c
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r4.o
            com.mbridge.msdk.video.dynview.c r1 = r1.b(r2, r3)
            com.mbridge.msdk.video.dynview.b.a()
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$2 r2 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$2
            r2.<init>(r4, r5)
            com.mbridge.msdk.video.dynview.h.a r5 = new com.mbridge.msdk.video.dynview.h.a
            r5.<init>(r1, r2, r0)
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            r0.n = r0
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r5 = this;
            super.onAttachedToWindow()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.o
            if (r0 != 0) goto L8
            return
        L8:
            r0 = 0
        L9:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.o
            int r1 = r1.size()
            if (r0 >= r1) goto L34
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r2.<init>()     // Catch: org.json.JSONException -> L1f
            java.lang.String r1 = "camp_position"
            r2.put(r1, r0)     // Catch: org.json.JSONException -> L1d
            goto L26
        L1d:
            r1 = move-exception
            goto L23
        L1f:
            r2 = move-exception
            r4 = r2
            r2 = r1
            r1 = r4
        L23:
            r1.printStackTrace()
        L26:
            com.mbridge.msdk.video.module.a.a r1 = r5.e
            if (r1 == 0) goto L31
            com.mbridge.msdk.video.module.a.a r1 = r5.e
            r3 = 110(0x6e, float:1.54E-43)
            r1.a(r3, r2)
        L31:
            int r0 = r0 + 1
            goto L9
        L34:
            return
    }

    public void setCampOrderViewBuildCallback(com.mbridge.msdk.video.dynview.e.b r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setCampaignExes(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setNotchPadding(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.p = r1
            r0.q = r2
            r0.r = r3
            r0.s = r4
            r0.setViewStatus()
            return
    }

    public void setRewarded(boolean r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setViewStatus() {
            r7 = this;
            java.lang.String r0 = "_"
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r1 = r7.n
            if (r1 == 0) goto L13b
            boolean r2 = r7.z
            if (r2 == 0) goto L13b
            boolean r2 = r7.w
            java.lang.String r3 = "mbridge_native_order_camp_controller"
            int r2 = r7.filterFindViewId(r2, r3)
            android.view.View r1 = r1.findViewById(r2)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r2 = r7.n
            boolean r3 = r7.w
            java.lang.String r4 = "mbridge_native_order_camp_feed_btn"
            int r3 = r7.filterFindViewId(r3, r4)
            android.view.View r2 = r2.findViewById(r3)
            com.mbridge.msdk.widget.FeedBackButton r2 = (com.mbridge.msdk.widget.FeedBackButton) r2
            r7.u = r2
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r2 = r7.n
            boolean r3 = r7.w
            java.lang.String r4 = "mbridge_iv_link"
            int r3 = r7.filterFindViewId(r3, r4)
            android.view.View r2 = r2.findViewById(r3)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r7.v = r2
            if (r1 == 0) goto L49
            int r2 = r7.p
            int r3 = r7.r
            int r4 = r7.q
            int r5 = r7.s
            r1.setPadding(r2, r3, r4, r5)
        L49:
            com.mbridge.msdk.widget.FeedBackButton r1 = r7.u
            java.lang.String r2 = "MBridgeBaseView"
            r3 = 8
            if (r1 == 0) goto Lfa
            if (r1 != 0) goto L55
            goto Lfa
        L55:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r7.o     // Catch: java.lang.Exception -> Lf2
            if (r4 != 0) goto L5e
            r1.setVisibility(r3)     // Catch: java.lang.Exception -> Lf2
            goto Lfa
        L5e:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r7.o     // Catch: java.lang.Exception -> Lf2
            r4 = 0
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> Lf2
            if (r1 != 0) goto L6e
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.u     // Catch: java.lang.Exception -> Lf2
            r0.setVisibility(r3)     // Catch: java.lang.Exception -> Lf2
            goto Lfa
        L6e:
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lf2
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> Lf2
            if (r1 == 0) goto Lec
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r7.o     // Catch: java.lang.Exception -> Lf2
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> Lf2
            java.lang.String r1 = r1.getCampaignUnitId()     // Catch: java.lang.Exception -> Lf2
            r7.t = r1     // Catch: java.lang.Exception -> Lf2
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r7.o     // Catch: java.lang.Exception -> Lf2
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> Lf2
            r7.b = r1     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lf2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf2
            r4.<init>()     // Catch: java.lang.Exception -> Lf2
            java.lang.String r5 = r7.t     // Catch: java.lang.Exception -> Lf2
            r4.append(r5)     // Catch: java.lang.Exception -> Lf2
            r4.append(r0)     // Catch: java.lang.Exception -> Lf2
            r5 = 2
            r4.append(r5)     // Catch: java.lang.Exception -> Lf2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$3 r6 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$3     // Catch: java.lang.Exception -> Lf2
            r6.<init>(r7)     // Catch: java.lang.Exception -> Lf2
            r1.a(r4, r6)     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lf2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf2
            r4.<init>()     // Catch: java.lang.Exception -> Lf2
            java.lang.String r6 = r7.t     // Catch: java.lang.Exception -> Lf2
            r4.append(r6)     // Catch: java.lang.Exception -> Lf2
            r4.append(r0)     // Catch: java.lang.Exception -> Lf2
            r4.append(r5)     // Catch: java.lang.Exception -> Lf2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r7.b     // Catch: java.lang.Exception -> Lf2
            r1.a(r4, r6)     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lf2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf2
            r4.<init>()     // Catch: java.lang.Exception -> Lf2
            java.lang.String r6 = r7.t     // Catch: java.lang.Exception -> Lf2
            r4.append(r6)     // Catch: java.lang.Exception -> Lf2
            r4.append(r0)     // Catch: java.lang.Exception -> Lf2
            r4.append(r5)     // Catch: java.lang.Exception -> Lf2
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> Lf2
            com.mbridge.msdk.widget.FeedBackButton r4 = r7.u     // Catch: java.lang.Exception -> Lf2
            r1.a(r0, r4)     // Catch: java.lang.Exception -> Lf2
            goto Lfa
        Lec:
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.u     // Catch: java.lang.Exception -> Lf2
            r0.setVisibility(r3)     // Catch: java.lang.Exception -> Lf2
            goto Lfa
        Lf2:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        Lfa:
            android.widget.ImageView r0 = r7.v
            if (r0 == 0) goto L13b
            if (r0 != 0) goto L101
            goto L13b
        L101:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L133
            java.lang.String r0 = r0.k()     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.c.a r0 = r1.b(r0)     // Catch: java.lang.Exception -> L133
            if (r0 == 0) goto L12d
            java.lang.String r0 = r0.az()     // Catch: java.lang.Exception -> L133
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L122
            android.widget.ImageView r1 = r7.v     // Catch: java.lang.Exception -> L133
            r1.setVisibility(r3)     // Catch: java.lang.Exception -> L133
        L122:
            android.widget.ImageView r1 = r7.v     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$4 r3 = new com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView$4     // Catch: java.lang.Exception -> L133
            r3.<init>(r7, r0)     // Catch: java.lang.Exception -> L133
            r1.setOnClickListener(r3)     // Catch: java.lang.Exception -> L133
            goto L13b
        L12d:
            android.widget.ImageView r0 = r7.v     // Catch: java.lang.Exception -> L133
            r0.setVisibility(r3)     // Catch: java.lang.Exception -> L133
            goto L13b
        L133:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L13b:
            return
    }

    public void startAlphaAnimation() {
            r3 = this;
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1, r2)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.setDuration(r1)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r1 = r3.n
            r1.startAnimation(r0)
            return
    }

    public void startTranslateAnimation() {
            r10 = this;
            android.view.animation.TranslateAnimation r9 = new android.view.animation.TranslateAnimation
            r1 = 2
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 2
            r4 = 0
            r5 = 2
            r6 = 0
            r7 = 2
            r8 = 0
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView r0 = r10.n
            r0.startAnimation(r9)
            return
    }
}
