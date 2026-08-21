package com.mbridge.msdk.video.module;

public class MBridgeVideoEndCoverView extends com.mbridge.msdk.video.module.MBridgeBaseView {
    private final java.lang.String n;
    private android.view.View o;
    private android.widget.ImageView p;
    private android.widget.ImageView q;
    private android.widget.TextView r;
    private android.widget.TextView s;
    private android.widget.TextView t;
    private com.mbridge.msdk.video.js.factory.b u;




    public MBridgeVideoEndCoverView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "MBridgeVideoEndCoverView"
            r0.n = r1
            return
    }

    public MBridgeVideoEndCoverView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "MBridgeVideoEndCoverView"
            r0.n = r1
            return
    }

    private boolean a(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L55
            java.lang.String r0 = "mbridge_vec_iv_icon"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Throwable -> L49
            r1.p = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "mbridge_vec_iv_close"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Throwable -> L49
            r1.q = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "mbridge_vec_tv_title"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Throwable -> L49
            r1.r = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "mbridge_vec_tv_desc"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Throwable -> L49
            r1.s = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "mbridge_vec_btn"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r2 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L49
            r1.t = r2     // Catch: java.lang.Throwable -> L49
            goto L55
        L49:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBridgeVideoEndCoverView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            r2 = 0
            return r2
        L55:
            r2 = 1
            return r2
    }

    protected final void a() {
            r6 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L7e
            r1.<init>()     // Catch: org.json.JSONException -> L7e
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L64
            r2.<init>()     // Catch: org.json.JSONException -> L64
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.n     // Catch: org.json.JSONException -> L62
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r3.j()     // Catch: org.json.JSONException -> L62
            float r4 = r6.g     // Catch: org.json.JSONException -> L62
            int r3 = com.mbridge.msdk.foundation.tools.ae.a(r3, r4)     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.o     // Catch: org.json.JSONException -> L62
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r3.j()     // Catch: org.json.JSONException -> L62
            float r4 = r6.h     // Catch: org.json.JSONException -> L62
            int r3 = com.mbridge.msdk.foundation.tools.ae.a(r3, r4)     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.q     // Catch: org.json.JSONException -> L62
            r3 = 0
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            android.content.Context r1 = r6.getContext()     // Catch: java.lang.Exception -> L48 org.json.JSONException -> L62
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L48 org.json.JSONException -> L62
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Exception -> L48 org.json.JSONException -> L62
            int r1 = r1.orientation     // Catch: java.lang.Exception -> L48 org.json.JSONException -> L62
            r6.d = r1     // Catch: java.lang.Exception -> L48 org.json.JSONException -> L62
            goto L4c
        L48:
            r1 = move-exception
            r1.printStackTrace()     // Catch: org.json.JSONException -> L62
        L4c:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.r     // Catch: org.json.JSONException -> L62
            int r3 = r6.d     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.s     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r6.getContext()     // Catch: org.json.JSONException -> L62
            float r3 = com.mbridge.msdk.foundation.tools.ae.d(r3)     // Catch: org.json.JSONException -> L62
            double r3 = (double) r3     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            goto L71
        L62:
            r1 = move-exception
            goto L68
        L64:
            r2 = move-exception
            r5 = r2
            r2 = r1
            r1 = r5
        L68:
            java.lang.String r3 = "MBridgeVideoEndCoverView"
            java.lang.String r1 = r1.getMessage()     // Catch: org.json.JSONException -> L7e
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)     // Catch: org.json.JSONException -> L7e
        L71:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L7e
            r1.<init>()     // Catch: org.json.JSONException -> L7e
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L7c
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L7c
            goto L85
        L7c:
            r0 = move-exception
            goto L82
        L7e:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
        L82:
            r0.printStackTrace()
        L85:
            com.mbridge.msdk.video.module.a.a r0 = r6.e
            r2 = 105(0x69, float:1.47E-43)
            r0.a(r2, r1)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            android.widget.ImageView r0 = r2.q
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$1 r1 = new com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.p
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$2 r1 = new com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.t
            com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$3 r1 = new com.mbridge.msdk.video.module.MBridgeVideoEndCoverView$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public void init(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = "mbridge_reward_videoend_cover"
            int r3 = r2.findLayout(r3)
            if (r3 < 0) goto L22
            android.view.LayoutInflater r0 = r2.c
            r1 = 0
            android.view.View r3 = r0.inflate(r3, r1)
            r2.o = r3
            if (r3 == 0) goto L22
            boolean r3 = r2.a(r3)
            r2.f = r3
            android.view.View r3 = r2.o
            r0 = -1
            r2.addView(r3, r0, r0)
            r2.c()
        L22:
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.g = r0
            float r0 = r2.getRawY()
            r1.h = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onSelfConfigurationChanged(r2)
            int r2 = r2.orientation
            r1.d = r2
            android.view.View r2 = r1.o
            r1.removeView(r2)
            android.view.View r2 = r1.o
            if (r2 != 0) goto L1b
            android.content.Context r2 = r1.a
            r1.init(r2)
            com.mbridge.msdk.video.js.factory.b r2 = r1.u
            r1.preLoadData(r2)
            goto L3b
        L1b:
            android.view.ViewParent r2 = r2.getParent()
            if (r2 == 0) goto L2e
            android.view.View r2 = r1.o
            android.view.ViewParent r2 = r2.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            android.view.View r0 = r1.o
            r2.removeView(r0)
        L2e:
            android.view.View r2 = r1.o
            r1.addView(r2)
            android.view.View r2 = r1.o
            r1.a(r2)
            r1.c()
        L3b:
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r4) {
            r3 = this;
            r3.u = r4
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L7e
            boolean r4 = r3.f     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L7e
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L7e
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = r4.getIconUrl()     // Catch: java.lang.Throwable -> L74
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L74
            if (r4 != 0) goto L46
            android.widget.ImageView r4 = r3.p     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L46
            com.mbridge.msdk.video.module.a.a.i r4 = new com.mbridge.msdk.video.module.a.a.i     // Catch: java.lang.Throwable -> L74
            android.widget.ImageView r0 = r3.p     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L74
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L74
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L74
            r4.<init>(r0, r1)     // Catch: java.lang.Throwable -> L74
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L74
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.getIconUrl()     // Catch: java.lang.Throwable -> L74
            r0.a(r1, r4)     // Catch: java.lang.Throwable -> L74
        L46:
            android.widget.TextView r4 = r3.r     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L55
            android.widget.TextView r4 = r3.r     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r0.getAppName()     // Catch: java.lang.Throwable -> L74
            r4.setText(r0)     // Catch: java.lang.Throwable -> L74
        L55:
            android.widget.TextView r4 = r3.t     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L64
            android.widget.TextView r4 = r3.t     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r0.getAdCall()     // Catch: java.lang.Throwable -> L74
            r4.setText(r0)     // Catch: java.lang.Throwable -> L74
        L64:
            android.widget.TextView r4 = r3.s     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L7e
            android.widget.TextView r4 = r3.s     // Catch: java.lang.Throwable -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r0.getAppDesc()     // Catch: java.lang.Throwable -> L74
            r4.setText(r0)     // Catch: java.lang.Throwable -> L74
            goto L7e
        L74:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MBridgeVideoEndCoverView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L7e:
            return
    }
}
