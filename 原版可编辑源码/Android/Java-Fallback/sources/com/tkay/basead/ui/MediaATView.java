package com.tkay.basead.ui;

public class MediaATView extends com.tkay.basead.ui.BaseMediaATView {
    public static final java.lang.String TAG = null;
    android.widget.RelativeLayout g;
    android.widget.RelativeLayout h;
    android.widget.TextView i;
    android.widget.TextView j;
    android.widget.TextView k;
    android.widget.TextView l;
    final float m;
    private android.widget.TextView n;
    private android.widget.TextView o;
    private android.widget.ImageView p;
    private android.widget.ImageView q;
    private android.widget.ImageView r;
    private com.tkay.core.common.ui.component.RoundImageView s;
    private android.widget.TextView t;









    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "tkay_"
            r0.<init>(r1)
            java.lang.Class<com.tkay.basead.ui.MediaATView> r1 = com.tkay.basead.ui.MediaATView.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.basead.ui.MediaATView.TAG = r0
            return
    }

    public MediaATView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, boolean r4, com.tkay.basead.ui.BaseMediaATView.a r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.m = r1
            return
    }

    static android.widget.ImageView a(com.tkay.basead.ui.MediaATView r0) {
            android.widget.ImageView r0 = r0.q
            return r0
    }

    static android.widget.ImageView b(com.tkay.basead.ui.MediaATView r0) {
            android.widget.ImageView r0 = r0.p
            return r0
    }

    static android.widget.ImageView c(com.tkay.basead.ui.MediaATView r0) {
            android.widget.ImageView r0 = r0.r
            return r0
    }

    static com.tkay.core.common.ui.component.RoundImageView d(com.tkay.basead.ui.MediaATView r0) {
            com.tkay.core.common.ui.component.RoundImageView r0 = r0.s
            return r0
    }

    @Override
    public java.util.List<android.view.View> getClickViews() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.widget.TextView r1 = r2.n
            r0.add(r1)
            android.widget.ImageView r1 = r2.q
            r0.add(r1)
            android.widget.TextView r1 = r2.o
            r0.add(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = r2.s
            r0.add(r1)
            android.widget.TextView r1 = r2.t
            r0.add(r1)
            com.tkay.core.common.f.j r1 = r2.b
            if (r1 == 0) goto L34
            com.tkay.core.common.f.j r1 = r2.b
            int r1 = r1.x()
            if (r1 != 0) goto L34
            android.widget.ImageView r1 = r2.p
            r0.add(r1)
            android.widget.RelativeLayout r1 = r2.g
            r0.add(r1)
        L34:
            return r0
    }

    @Override
    public android.view.View getMonitorClickView() {
            r1 = this;
            android.widget.TextView r0 = r1.o
            return r0
    }

    @Override
    public void init(int r9, int r10) {
            r8 = this;
            super.init(r9, r10)
            android.content.Context r0 = r8.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r8.getContext()
            java.lang.String r2 = "myoffer_media_ad_view"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r2 = 0
            r3 = 0
            android.view.View r0 = r0.inflate(r1, r3, r2)
            android.widget.FrameLayout r1 = r8.f
            if (r1 == 0) goto L31
            android.widget.FrameLayout r1 = r8.f
            r1.removeAllViews()
            android.widget.FrameLayout r1 = r8.f
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r4 = -1
            r3.<init>(r4, r4)
            r1.addView(r0, r3)
        L31:
            android.content.Context r0 = r8.getContext()
            java.lang.String r1 = "id"
            java.lang.String r3 = "myoffer_banner_ad_title"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.n = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_media_ad_cta"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.o = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_media_ad_bg_blur"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r8.p = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_media_ad_main_image"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r8.q = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_ad_logo"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r8.r = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_media_ad_icon"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r8.s = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_banner_ad_desc"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.t = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_media_ad_container"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r8.g = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_four_element_container"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r8.h = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_publisher_name"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.i = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_privacy_agreement"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.j = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_permission_manage"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.k = r0
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_version_name"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.l = r0
            com.tkay.core.common.f.h r0 = r8.a
            java.lang.String r0 = r0.r()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r4 = 8
            if (r3 != 0) goto L131
            android.widget.TextView r3 = r8.n
            r3.setText(r0)
            goto L14a
        L131:
            android.widget.TextView r0 = r8.n
            r0.setVisibility(r4)
            android.widget.TextView r0 = r8.t
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r3 = r0 instanceof android.widget.LinearLayout.LayoutParams
            if (r3 == 0) goto L14a
            r3 = r0
            android.widget.LinearLayout$LayoutParams r3 = (android.widget.LinearLayout.LayoutParams) r3
            r3.topMargin = r2
            android.widget.TextView r3 = r8.t
            r3.setLayoutParams(r0)
        L14a:
            com.tkay.core.common.f.h r0 = r8.a
            java.lang.String r0 = r0.w()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r5 = "string"
            if (r3 != 0) goto L15e
            android.widget.TextView r3 = r8.o
            r3.setText(r0)
            goto L16d
        L15e:
            android.widget.TextView r0 = r8.o
            android.content.Context r3 = r8.getContext()
            java.lang.String r6 = "myoffer_cta_learn_more"
            int r3 = com.tkay.core.common.l.h.a(r3, r6, r5)
            r0.setText(r3)
        L16d:
            android.widget.ImageView r0 = r8.q
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.FIT_CENTER
            r0.setScaleType(r3)
            android.content.Context r0 = r8.getContext()
            com.tkay.core.common.res.b r0 = com.tkay.core.common.res.b.a(r0)
            com.tkay.core.common.res.e r3 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r6 = r8.a
            java.lang.String r6 = r6.u()
            r7 = 1
            r3.<init>(r7, r6)
            com.tkay.basead.ui.MediaATView$1 r6 = new com.tkay.basead.ui.MediaATView$1
            r6.<init>(r8)
            r0.a(r3, r9, r10, r6)
            com.tkay.core.common.f.h r9 = r8.a
            java.lang.String r9 = r9.v()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L1b8
            android.content.Context r9 = r8.getContext()
            com.tkay.core.common.res.b r9 = com.tkay.core.common.res.b.a(r9)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r0 = r8.a
            java.lang.String r0 = r0.v()
            r10.<init>(r7, r0)
            com.tkay.basead.ui.MediaATView$2 r0 = new com.tkay.basead.ui.MediaATView$2
            r0.<init>(r8)
            r9.a(r10, r0)
            goto L1bd
        L1b8:
            android.widget.ImageView r9 = r8.r
            r9.setVisibility(r4)
        L1bd:
            com.tkay.core.common.f.h r9 = r8.a
            java.lang.String r9 = r9.s()
            boolean r10 = android.text.TextUtils.isEmpty(r9)
            if (r10 != 0) goto L1cf
            android.widget.TextView r10 = r8.t
            r10.setText(r9)
            goto L1d4
        L1cf:
            android.widget.TextView r9 = r8.t
            r9.setVisibility(r4)
        L1d4:
            com.tkay.core.common.f.h r9 = r8.a
            java.lang.String r9 = r9.t()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L211
            com.tkay.core.common.ui.component.RoundImageView r9 = r8.s
            r10 = 6
            r9.setRadiusInDip(r10)
            com.tkay.core.common.ui.component.RoundImageView r9 = r8.s
            r9.setNeedRadiu(r7)
            com.tkay.core.common.ui.component.RoundImageView r9 = r8.s
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            android.content.Context r10 = r8.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r0 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r3 = r8.a
            java.lang.String r3 = r3.t()
            r0.<init>(r7, r3)
            int r3 = r9.width
            int r9 = r9.height
            com.tkay.basead.ui.MediaATView$3 r4 = new com.tkay.basead.ui.MediaATView$3
            r4.<init>(r8)
            r10.a(r0, r3, r9, r4)
            goto L216
        L211:
            com.tkay.core.common.ui.component.RoundImageView r9 = r8.s
            r9.setVisibility(r4)
        L216:
            com.tkay.core.common.f.h r9 = r8.a
            boolean r9 = r9.K()
            if (r9 == 0) goto L2a3
            android.widget.RelativeLayout r9 = r8.h
            if (r9 == 0) goto L22f
            r9.setVisibility(r2)
            android.widget.RelativeLayout r9 = r8.h
            com.tkay.basead.ui.MediaATView$4 r10 = new com.tkay.basead.ui.MediaATView$4
            r10.<init>(r8)
            r9.setOnClickListener(r10)
        L22f:
            android.widget.TextView r9 = r8.i
            if (r9 == 0) goto L24b
            r9.setVisibility(r2)
            android.widget.TextView r9 = r8.i
            com.tkay.core.common.f.h r10 = r8.a
            java.lang.String r10 = r10.F()
            r9.setText(r10)
            android.widget.TextView r9 = r8.i
            com.tkay.basead.ui.MediaATView$5 r10 = new com.tkay.basead.ui.MediaATView$5
            r10.<init>(r8)
            r9.setOnClickListener(r10)
        L24b:
            android.widget.TextView r9 = r8.j
            if (r9 == 0) goto L25c
            r9.setVisibility(r2)
            android.widget.TextView r9 = r8.j
            com.tkay.basead.ui.MediaATView$6 r10 = new com.tkay.basead.ui.MediaATView$6
            r10.<init>(r8)
            r9.setOnClickListener(r10)
        L25c:
            android.widget.TextView r9 = r8.k
            if (r9 == 0) goto L26d
            r9.setVisibility(r2)
            android.widget.TextView r9 = r8.k
            com.tkay.basead.ui.MediaATView$7 r10 = new com.tkay.basead.ui.MediaATView$7
            r10.<init>(r8)
            r9.setOnClickListener(r10)
        L26d:
            android.widget.TextView r9 = r8.l
            if (r9 == 0) goto L2a3
            r9.setVisibility(r2)
            android.widget.TextView r9 = r8.l
            android.content.Context r10 = r8.getContext()
            android.content.res.Resources r10 = r10.getResources()
            android.content.Context r0 = r8.getContext()
            java.lang.String r3 = "myoffer_panel_version"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r5)
            java.lang.Object[] r3 = new java.lang.Object[r7]
            com.tkay.core.common.f.h r4 = r8.a
            java.lang.String r4 = r4.G()
            r3[r2] = r4
            java.lang.String r10 = r10.getString(r0, r3)
            r9.setText(r10)
            android.widget.TextView r9 = r8.l
            com.tkay.basead.ui.MediaATView$8 r10 = new com.tkay.basead.ui.MediaATView$8
            r10.<init>(r8)
            r9.setOnClickListener(r10)
        L2a3:
            com.tkay.core.common.f.h r9 = r8.a
            boolean r9 = com.tkay.basead.a.e.a(r9)
            if (r9 != 0) goto L2d5
            android.content.Context r9 = r8.getContext()
            java.lang.String r10 = "myoffer_media_ad_main_image_container"
            int r9 = com.tkay.core.common.l.h.a(r9, r10, r1)
            android.view.View r9 = r8.findViewById(r9)
            if (r9 == 0) goto L2d5
            android.view.ViewGroup$LayoutParams r10 = r9.getLayoutParams()
            boolean r0 = r10 instanceof android.widget.RelativeLayout.LayoutParams
            if (r0 == 0) goto L2d5
            r0 = r10
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            android.content.Context r1 = r8.getContext()
            r2 = 1118306304(0x42a80000, float:84.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.bottomMargin = r1
            r9.setLayoutParams(r10)
        L2d5:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            return
    }
}
