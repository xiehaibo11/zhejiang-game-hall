package com.tkay.expressad.video.module;

public class TkayClickCTAView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.f {
    private static final java.lang.String n = "tkay_reward_clickable_cta";
    private android.view.ViewGroup o;
    private android.widget.ImageView p;
    private android.widget.TextView q;
    private android.widget.TextView r;
    private android.widget.TextView s;
    private java.lang.String t;
    private float u;
    private float v;
    private int w;
    private android.animation.ObjectAnimator x;

    final class 1 implements com.tkay.expressad.video.dynview.f.h {
        final android.view.ViewGroup a;
        final com.tkay.expressad.video.module.TkayClickCTAView b;

        1(com.tkay.expressad.video.module.TkayClickCTAView r1, android.view.ViewGroup r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.a r2) {
                r1 = this;
                android.view.ViewGroup r0 = r1.a
                android.view.View r2 = r2.a()
                r0.addView(r2)
                com.tkay.expressad.video.module.TkayClickCTAView r2 = r1.b
                boolean r0 = com.tkay.expressad.video.module.TkayClickCTAView.a(r2)
                r2.f = r0
                com.tkay.expressad.video.module.TkayClickCTAView r2 = r1.b
                java.lang.String r0 = "tkay_tv_desc"
                int r0 = r2.findID(r0)
                android.view.View r0 = r2.findViewById(r0)
                android.widget.TextView r0 = (android.widget.TextView) r0
                com.tkay.expressad.video.module.TkayClickCTAView.a(r2, r0)
                com.tkay.expressad.video.module.TkayClickCTAView r2 = r1.b
                r2.c()
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.c.b r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "errorMsg:"
                r0.<init>(r1)
                java.lang.String r3 = r3.b()
                r0.append(r3)
                return
        }
    }





    public TkayClickCTAView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TkayClickCTAView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static android.widget.TextView a(com.tkay.expressad.video.module.TkayClickCTAView r0, android.widget.TextView r1) {
            r0.r = r1
            return r1
    }

    private void a() {
            r2 = this;
            java.lang.String r0 = "tkay_reward_clickable_cta"
            int r0 = r2.findLayout(r0)
            if (r0 < 0) goto L19
            android.view.LayoutInflater r1 = r2.c
            r1.inflate(r0, r2)
            boolean r0 = r2.f()
            r2.f = r0
            r2.c()
            r2.setWrapContent()
        L19:
            return
    }

    private void a(android.view.ViewGroup r2, com.tkay.expressad.foundation.d.c r3) {
            r1 = this;
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            com.tkay.expressad.video.dynview.c r3 = com.tkay.expressad.video.dynview.j.c.b(r2, r3)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayClickCTAView$1 r0 = new com.tkay.expressad.video.module.TkayClickCTAView$1
            r0.<init>(r1, r2)
            com.tkay.expressad.video.dynview.b.a(r3, r0)
            return
    }

    static boolean a(com.tkay.expressad.video.module.TkayClickCTAView r0) {
            boolean r0 = r0.f()
            return r0
    }

    private void b() {
            r2 = this;
            android.widget.ImageView r0 = r2.p
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    static void b(com.tkay.expressad.video.module.TkayClickCTAView r4) {
            com.tkay.expressad.foundation.d.c r0 = r4.b
            if (r0 == 0) goto L9
            com.tkay.expressad.foundation.d.c r0 = r4.b
            r0.j()
        L9:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c
            r1.<init>()     // Catch: org.json.JSONException -> L1c
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L1a
            r2 = 0
            org.json.JSONObject r2 = r4.a(r2)     // Catch: org.json.JSONException -> L1a
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L1a
            goto L23
        L1a:
            r0 = move-exception
            goto L20
        L1c:
            r1 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L20:
            r0.printStackTrace()
        L23:
            com.tkay.expressad.video.module.a.a r4 = r4.e
            r0 = 105(0x69, float:1.47E-43)
            r4.a(r0, r1)
            return
    }

    static void c(com.tkay.expressad.video.module.TkayClickCTAView r0) {
            r0.b()
            return
    }

    private void e() {
            r0 = this;
            r0.setWrapContent()
            return
    }

    private boolean f() {
            r4 = this;
            java.lang.String r0 = "tkay_viewgroup_ctaroot"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.o = r0
            java.lang.String r0 = "tkay_iv_appicon"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.p = r0
            java.lang.String r0 = "tkay_tv_title"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.q = r0
            java.lang.String r0 = "tkay_tv_install"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.s = r0
            r1 = 4
            android.view.View[] r1 = new android.view.View[r1]
            android.view.ViewGroup r2 = r4.o
            r3 = 0
            r1[r3] = r2
            android.widget.ImageView r2 = r4.p
            r3 = 1
            r1[r3] = r2
            android.widget.TextView r2 = r4.q
            r3 = 2
            r1[r3] = r2
            r2 = 3
            r1[r2] = r0
            boolean r0 = r4.isNotNULL(r1)
            return r0
    }

    private void g() {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.b
            if (r0 == 0) goto L9
            com.tkay.expressad.foundation.d.c r0 = r4.b
            r0.j()
        L9:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c
            r1.<init>()     // Catch: org.json.JSONException -> L1c
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L1a
            r2 = 0
            org.json.JSONObject r2 = r4.a(r2)     // Catch: org.json.JSONException -> L1a
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L1a
            goto L23
        L1a:
            r0 = move-exception
            goto L20
        L1c:
            r1 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L20:
            r0.printStackTrace()
        L23:
            com.tkay.expressad.video.module.a.a r0 = r4.e
            r2 = 105(0x69, float:1.47E-43)
            r0.a(r2, r1)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L31
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L1b
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L1b
            com.tkay.expressad.video.module.TkayClickCTAView$2 r0 = new com.tkay.expressad.video.module.TkayClickCTAView$2
            r0.<init>(r2)
            r2.setOnClickListener(r0)
        L1b:
            android.widget.TextView r0 = r2.s
            com.tkay.expressad.video.module.TkayClickCTAView$3 r1 = new com.tkay.expressad.video.module.TkayClickCTAView$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.p
            if (r0 == 0) goto L31
            com.tkay.expressad.video.module.TkayClickCTAView$4 r1 = new com.tkay.expressad.video.module.TkayClickCTAView$4
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
            android.animation.ObjectAnimator r0 = r1.x
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            return
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
            android.animation.ObjectAnimator r0 = r1.x
            if (r0 == 0) goto Lf
            r0.cancel()     // Catch: java.lang.Exception -> Lb
            return
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
            r1.u = r0
            float r0 = r2.getRawY()
            r1.v = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onSelfConfigurationChanged(r1)
            int r1 = r1.orientation
            r0.w = r1
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r4 = r3.b
            if (r4 == 0) goto Lad
            com.tkay.expressad.foundation.d.c r4 = r3.b
            boolean r4 = r4.j()
            if (r4 == 0) goto L23
            com.tkay.expressad.foundation.d.c r4 = r3.b
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            com.tkay.expressad.video.dynview.c r4 = com.tkay.expressad.video.dynview.j.c.b(r3, r4)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayClickCTAView$1 r0 = new com.tkay.expressad.video.module.TkayClickCTAView$1
            r0.<init>(r3, r3)
            com.tkay.expressad.video.dynview.b.a(r4, r0)
            goto L3c
        L23:
            java.lang.String r4 = "tkay_reward_clickable_cta"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L3c
            android.view.LayoutInflater r0 = r3.c
            r0.inflate(r4, r3)
            boolean r4 = r3.f()
            r3.f = r4
            r3.c()
            r3.setWrapContent()
        L3c:
            boolean r4 = r3.f
            if (r4 == 0) goto Lad
            android.widget.TextView r4 = r3.s
            com.tkay.expressad.foundation.d.c r0 = r3.b
            java.lang.String r0 = r0.cU
            r4.setText(r0)
            com.tkay.expressad.foundation.d.c r4 = r3.b
            java.lang.String r4 = r4.bd()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L74
            com.tkay.expressad.video.module.TkayClickCTAView$5 r4 = new com.tkay.expressad.video.module.TkayClickCTAView$5
            android.widget.ImageView r0 = r3.p
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r2 = r3.t
            r4.<init>(r3, r0, r1, r2)
            android.content.Context r0 = r3.a
            android.content.Context r0 = r0.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.bd()
            r0.a(r1, r4)
            goto L77
        L74:
            r3.b()
        L77:
            android.widget.TextView r4 = r3.q
            if (r4 == 0) goto L92
            com.tkay.expressad.foundation.d.c r4 = r3.b
            java.lang.String r4 = r4.bb()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L92
            android.widget.TextView r4 = r3.q
            com.tkay.expressad.foundation.d.c r0 = r3.b
            java.lang.String r0 = r0.bb()
            r4.setText(r0)
        L92:
            android.widget.TextView r4 = r3.r
            if (r4 == 0) goto Lad
            com.tkay.expressad.foundation.d.c r4 = r3.b
            java.lang.String r4 = r4.bc()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lad
            android.widget.TextView r4 = r3.r
            com.tkay.expressad.foundation.d.c r0 = r3.b
            java.lang.String r0 = r0.bc()
            r4.setText(r0)
        Lad:
            return
    }

    public void setObjectAnimator(android.animation.ObjectAnimator r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.t = r1
            return
    }
}
