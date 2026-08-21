package com.tkay.expressad.video.module;

public class TkayVideoEndCoverView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.f {
    private final java.lang.String n;
    private android.view.View o;
    private android.widget.ImageView p;
    private android.widget.ImageView q;
    private android.widget.TextView r;
    private android.widget.TextView s;
    private android.widget.TextView t;
    private com.tkay.expressad.video.signal.factory.b u;




    public TkayVideoEndCoverView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "TkayVideoEndCoverView"
            r0.n = r1
            return
    }

    public TkayVideoEndCoverView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "TkayVideoEndCoverView"
            r0.n = r1
            return
    }

    private boolean a(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L4f
            java.lang.String r0 = "tkay_vec_iv_icon"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Throwable -> L49
            r1.p = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "tkay_vec_iv_close"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Throwable -> L49
            r1.q = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "tkay_vec_tv_title"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Throwable -> L49
            r1.r = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "tkay_vec_tv_desc"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Throwable -> L49
            r1.s = r0     // Catch: java.lang.Throwable -> L49
            java.lang.String r0 = "tkay_vec_btn"
            int r0 = r1.findID(r0)     // Catch: java.lang.Throwable -> L49
            android.view.View r2 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L49
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L49
            r1.t = r2     // Catch: java.lang.Throwable -> L49
            goto L4f
        L49:
            r2 = move-exception
            r2.getMessage()
            r2 = 0
            return r2
        L4f:
            r2 = 1
            return r2
    }

    private void b() {
            r2 = this;
            android.view.View r0 = r2.o
            if (r0 != 0) goto Lf
            android.content.Context r0 = r2.a
            r2.init(r0)
            com.tkay.expressad.video.signal.factory.b r0 = r2.u
            r2.preLoadData(r0)
            return
        Lf:
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L22
            android.view.View r0 = r2.o
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r2.o
            r0.removeView(r1)
        L22:
            android.view.View r0 = r2.o
            r2.addView(r0)
            android.view.View r0 = r2.o
            r2.a(r0)
            r2.c()
            return
    }

    private void e() {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.b
            if (r0 == 0) goto L5f
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r0 = r0.bd()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3a
            android.widget.ImageView r0 = r4.p
            if (r0 == 0) goto L3a
            com.tkay.expressad.video.module.a.a.j r1 = new com.tkay.expressad.video.module.a.a.j
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r3 = 1090519040(0x41000000, float:8.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r1.<init>(r0, r2)
            android.content.Context r0 = r4.a
            android.content.Context r0 = r0.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r2 = r4.b
            java.lang.String r2 = r2.bd()
            r0.a(r2, r1)
        L3a:
            android.widget.TextView r0 = r4.r
            if (r0 == 0) goto L47
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.bb()
            r0.setText(r1)
        L47:
            android.widget.TextView r0 = r4.t
            if (r0 == 0) goto L52
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.cU
            r0.setText(r1)
        L52:
            android.widget.TextView r0 = r4.s
            if (r0 == 0) goto L5f
            com.tkay.expressad.foundation.d.c r1 = r4.b
            java.lang.String r1 = r1.bc()
            r0.setText(r1)
        L5f:
            return
    }

    protected final void a() {
            r6 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L78
            r1.<init>()     // Catch: org.json.JSONException -> L78
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L64
            r2.<init>()     // Catch: org.json.JSONException -> L64
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.cc     // Catch: org.json.JSONException -> L62
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r3.f()     // Catch: org.json.JSONException -> L62
            float r4 = r6.g     // Catch: org.json.JSONException -> L62
            int r3 = com.tkay.expressad.foundation.h.t.a(r3, r4)     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.cd     // Catch: org.json.JSONException -> L62
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r3.f()     // Catch: org.json.JSONException -> L62
            float r4 = r6.h     // Catch: org.json.JSONException -> L62
            int r3 = com.tkay.expressad.foundation.h.t.a(r3, r4)     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.cf     // Catch: org.json.JSONException -> L62
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
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.cg     // Catch: org.json.JSONException -> L62
            int r3 = r6.d     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.ch     // Catch: org.json.JSONException -> L62
            android.content.Context r3 = r6.getContext()     // Catch: org.json.JSONException -> L62
            float r3 = com.tkay.expressad.foundation.h.t.c(r3)     // Catch: org.json.JSONException -> L62
            double r3 = (double) r3     // Catch: org.json.JSONException -> L62
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L62
            goto L6b
        L62:
            r1 = move-exception
            goto L68
        L64:
            r2 = move-exception
            r5 = r2
            r2 = r1
            r1 = r5
        L68:
            r1.getMessage()     // Catch: org.json.JSONException -> L78
        L6b:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L78
            r1.<init>()     // Catch: org.json.JSONException -> L78
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L76
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L76
            goto L7f
        L76:
            r0 = move-exception
            goto L7c
        L78:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
        L7c:
            r0.printStackTrace()
        L7f:
            com.tkay.expressad.video.module.a.a r0 = r6.e
            r2 = 105(0x69, float:1.47E-43)
            r0.a(r2, r1)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            android.widget.ImageView r0 = r2.q
            com.tkay.expressad.video.module.TkayVideoEndCoverView$1 r1 = new com.tkay.expressad.video.module.TkayVideoEndCoverView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.p
            com.tkay.expressad.video.module.TkayVideoEndCoverView$2 r1 = new com.tkay.expressad.video.module.TkayVideoEndCoverView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.t
            com.tkay.expressad.video.module.TkayVideoEndCoverView$3 r1 = new com.tkay.expressad.video.module.TkayVideoEndCoverView$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public void init(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = "tkay_reward_videoend_cover"
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
            com.tkay.expressad.video.signal.factory.b r2 = r1.u
            r1.preLoadData(r2)
            return
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
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r4) {
            r3 = this;
            r3.u = r4
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L71
            boolean r4 = r3.f     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L71
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L71
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L72
            java.lang.String r4 = r4.bd()     // Catch: java.lang.Throwable -> L72
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L72
            if (r4 != 0) goto L46
            android.widget.ImageView r4 = r3.p     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L46
            com.tkay.expressad.video.module.a.a.j r4 = new com.tkay.expressad.video.module.a.a.j     // Catch: java.lang.Throwable -> L72
            android.widget.ImageView r0 = r3.p     // Catch: java.lang.Throwable -> L72
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L72
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L72
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)     // Catch: java.lang.Throwable -> L72
            r4.<init>(r0, r1)     // Catch: java.lang.Throwable -> L72
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L72
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.bd()     // Catch: java.lang.Throwable -> L72
            r0.a(r1, r4)     // Catch: java.lang.Throwable -> L72
        L46:
            android.widget.TextView r4 = r3.r     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L55
            android.widget.TextView r4 = r3.r     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L72
            java.lang.String r0 = r0.bb()     // Catch: java.lang.Throwable -> L72
            r4.setText(r0)     // Catch: java.lang.Throwable -> L72
        L55:
            android.widget.TextView r4 = r3.t     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L62
            android.widget.TextView r4 = r3.t     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L72
            java.lang.String r0 = r0.cU     // Catch: java.lang.Throwable -> L72
            r4.setText(r0)     // Catch: java.lang.Throwable -> L72
        L62:
            android.widget.TextView r4 = r3.s     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L71
            android.widget.TextView r4 = r3.s     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L72
            java.lang.String r0 = r0.bc()     // Catch: java.lang.Throwable -> L72
            r4.setText(r0)     // Catch: java.lang.Throwable -> L72
        L71:
            return
        L72:
            r4 = move-exception
            r4.getMessage()
            return
    }
}
