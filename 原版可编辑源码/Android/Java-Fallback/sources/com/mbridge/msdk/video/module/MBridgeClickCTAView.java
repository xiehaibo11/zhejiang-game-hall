package com.mbridge.msdk.video.module;

public class MBridgeClickCTAView extends com.mbridge.msdk.video.module.MBridgeBaseView {
    private android.view.ViewGroup n;
    private android.widget.ImageView o;
    private android.widget.TextView p;
    private android.widget.TextView q;
    private com.mbridge.msdk.widget.MBDownloadProgressBar r;
    private java.lang.String s;
    private float t;
    private float u;
    private int v;
    private android.animation.ObjectAnimator w;






    public MBridgeClickCTAView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeClickCTAView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static android.widget.TextView a(com.mbridge.msdk.video.module.MBridgeClickCTAView r0, android.widget.TextView r1) {
            r0.q = r1
            return r1
    }

    private void a() {
            r2 = this;
            android.widget.ImageView r0 = r2.o
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeClickCTAView r0) {
            boolean r0 = r0.b()
            return r0
    }

    static void b(com.mbridge.msdk.video.module.MBridgeClickCTAView r10) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            if (r0 == 0) goto L54
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L54
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = ""
            if (r0 == 0) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L50
            r2.<init>()     // Catch: java.lang.Exception -> L50
            int r0 = r0.b()     // Catch: java.lang.Exception -> L50
            r2.append(r0)     // Catch: java.lang.Exception -> L50
            r2.append(r1)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L50
        L29:
            r8 = r1
            android.content.Context r1 = r10.a     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = "cta_click"
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            java.lang.String r3 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            boolean r4 = r0.isBidCampaign()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r0.getRequestId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            java.lang.String r6 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b     // Catch: java.lang.Exception -> L50
            java.lang.String r7 = r0.getId()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L67
            r1.<init>()     // Catch: org.json.JSONException -> L67
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L65
            r2 = 0
            org.json.JSONObject r2 = r10.a(r2)     // Catch: org.json.JSONException -> L65
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L65
            goto L6e
        L65:
            r0 = move-exception
            goto L6b
        L67:
            r1 = move-exception
            r9 = r1
            r1 = r0
            r0 = r9
        L6b:
            r0.printStackTrace()
        L6e:
            com.mbridge.msdk.video.module.a.a r10 = r10.e
            r0 = 105(0x69, float:1.47E-43)
            r10.a(r0, r1)
            return
    }

    private boolean b() {
            r4 = this;
            java.lang.String r0 = "mbridge_viewgroup_ctaroot"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.n = r0
            java.lang.String r0 = "mbridge_iv_appicon"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.o = r0
            java.lang.String r0 = "mbridge_tv_title"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.p = r0
            java.lang.String r0 = "mbridge_tv_install"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = (com.mbridge.msdk.widget.MBDownloadProgressBar) r0
            r4.r = r0
            r1 = 4
            android.view.View[] r1 = new android.view.View[r1]
            android.view.ViewGroup r2 = r4.n
            r3 = 0
            r1[r3] = r2
            android.widget.ImageView r2 = r4.o
            r3 = 1
            r1[r3] = r2
            android.widget.TextView r2 = r4.p
            r3 = 2
            r1[r3] = r2
            r2 = 3
            r1[r2] = r0
            boolean r0 = r4.isNotNULL(r1)
            return r0
    }

    static void c(com.mbridge.msdk.video.module.MBridgeClickCTAView r0) {
            r0.a()
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L31
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L1b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeClickCTAView$2 r0 = new com.mbridge.msdk.video.module.MBridgeClickCTAView$2
            r0.<init>(r2)
            r2.setOnClickListener(r0)
        L1b:
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r2.r
            com.mbridge.msdk.video.module.MBridgeClickCTAView$3 r1 = new com.mbridge.msdk.video.module.MBridgeClickCTAView$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.o
            if (r0 == 0) goto L31
            com.mbridge.msdk.video.module.MBridgeClickCTAView$4 r1 = new com.mbridge.msdk.video.module.MBridgeClickCTAView$4
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L31:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.animation.ObjectAnimator r0 = r1.w
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.animation.ObjectAnimator r0 = r1.w
            if (r0 == 0) goto Lf
            r0.cancel()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.t = r0
            float r0 = r2.getRawY()
            r1.u = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onSelfConfigurationChanged(r1)
            int r1 = r1.orientation
            r0.v = r1
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            if (r4 == 0) goto Lfd
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            boolean r4 = r4.isDynamicView()
            if (r4 == 0) goto L24
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            com.mbridge.msdk.video.dynview.j.c r0 = new com.mbridge.msdk.video.dynview.j.c
            r0.<init>()
            com.mbridge.msdk.video.dynview.c r4 = r0.b(r3, r4)
            com.mbridge.msdk.video.dynview.b r0 = com.mbridge.msdk.video.dynview.b.a()
            com.mbridge.msdk.video.module.MBridgeClickCTAView$1 r1 = new com.mbridge.msdk.video.module.MBridgeClickCTAView$1
            r1.<init>(r3, r3)
            r0.a(r4, r1)
            goto L3d
        L24:
            java.lang.String r4 = "mbridge_reward_clickable_cta"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L3d
            android.view.LayoutInflater r0 = r3.c
            r0.inflate(r4, r3)
            boolean r4 = r3.b()
            r3.f = r4
            r3.c()
            r3.setWrapContent()
        L3d:
            boolean r4 = r3.f
            if (r4 == 0) goto Lfd
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            int r4 = r4.getAdSpaceT()
            r0 = 2
            if (r4 != r0) goto L6d
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r0 = r3.getContext()
            r1 = 1119748096(0x42be0000, float:95.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            android.content.Context r1 = r3.getContext()
            r2 = 1108869120(0x42180000, float:38.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r4.<init>(r0, r1)
            r0 = 11
            r4.addRule(r0)
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r3.r
            r0.setLayoutParams(r4)
        L6d:
            com.mbridge.msdk.widget.MBDownloadProgressBar r4 = r3.r
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r0 = r0.getAkdlui()
            r4.setUniqueKey(r0)
            com.mbridge.msdk.widget.MBDownloadProgressBar r4 = r3.r
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            int r0 = r0.getLinkType()
            r4.setLinkType(r0)
            com.mbridge.msdk.widget.MBDownloadProgressBar r4 = r3.r
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r0 = r0.getCMPTEntryUrl()
            r4.setCtaldtypeUrl(r0)
            com.mbridge.msdk.widget.MBDownloadProgressBar r4 = r3.r
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r0 = r0.getAdCall()
            r4.setText(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            java.lang.String r4 = r4.getIconUrl()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lc4
            com.mbridge.msdk.video.module.MBridgeClickCTAView$5 r4 = new com.mbridge.msdk.video.module.MBridgeClickCTAView$5
            android.widget.ImageView r0 = r3.o
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b
            java.lang.String r2 = r3.s
            r4.<init>(r3, r0, r1, r2)
            android.content.Context r0 = r3.a
            android.content.Context r0 = r0.getApplicationContext()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b
            java.lang.String r1 = r1.getIconUrl()
            r0.a(r1, r4)
            goto Lc7
        Lc4:
            r3.a()
        Lc7:
            android.widget.TextView r4 = r3.p
            if (r4 == 0) goto Le2
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            java.lang.String r4 = r4.getAppName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Le2
            android.widget.TextView r4 = r3.p
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r0 = r0.getAppName()
            r4.setText(r0)
        Le2:
            android.widget.TextView r4 = r3.q
            if (r4 == 0) goto Lfd
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b
            java.lang.String r4 = r4.getAppDesc()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lfd
            android.widget.TextView r4 = r3.q
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r0 = r0.getAppDesc()
            r4.setText(r0)
        Lfd:
            return
    }

    public void setObjectAnimator(android.animation.ObjectAnimator r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }
}
