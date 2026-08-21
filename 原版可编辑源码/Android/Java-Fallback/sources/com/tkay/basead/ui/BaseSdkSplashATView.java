package com.tkay.basead.ui;

public abstract class BaseSdkSplashATView extends com.tkay.basead.ui.BaseSplashATView {
    public static final int TYPE_ASSEBLEM = 1;
    public static final int TYPE_SINGLE_PICTURE = 0;
    protected com.tkay.core.common.ui.component.RoundImageView t;
    android.view.ViewGroup u;
    android.widget.TextView v;
    android.widget.TextView w;
    android.widget.TextView x;
    android.widget.TextView y;
    protected final android.view.View.OnClickListener z;





    public BaseSdkSplashATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.tkay.basead.ui.BaseSdkSplashATView$1 r1 = new com.tkay.basead.ui.BaseSdkSplashATView$1
            r1.<init>(r0)
            r0.z = r1
            return
    }

    public BaseSdkSplashATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            com.tkay.basead.ui.BaseSdkSplashATView$1 r1 = new com.tkay.basead.ui.BaseSdkSplashATView$1
            r1.<init>(r0)
            r0.z = r1
            r0.c()
            r0.p()
            com.tkay.basead.ui.CloseFrameLayout r1 = r0.B
            com.tkay.core.common.f.i r2 = r0.c
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = r2.h()
            r0.a(r1, r2)
            return
    }

    static void a(com.tkay.basead.ui.BaseSdkSplashATView r1) {
            r0 = 1
            super.b(r0)
            return
    }

    public static boolean isSinglePicture(com.tkay.core.common.f.h r3, com.tkay.core.common.f.j r4) {
            boolean r0 = r3 instanceof com.tkay.core.common.f.r
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L15
            boolean r0 = r4 instanceof com.tkay.core.common.f.t
            if (r0 == 0) goto L15
            r3 = 2
            com.tkay.core.common.f.t r4 = (com.tkay.core.common.f.t) r4
            int r4 = r4.X()
            if (r3 != r4) goto L14
            return r2
        L14:
            return r1
        L15:
            boolean r4 = r3 instanceof com.tkay.core.common.f.z
            if (r4 == 0) goto L22
            com.tkay.core.common.f.z r3 = (com.tkay.core.common.f.z) r3
            int r3 = r3.Y()
            if (r2 != r3) goto L22
            return r2
        L22:
            return r1
    }

    protected abstract void b();

    protected abstract void c();

    protected void o() {
            r9 = this;
            r9.b()
            android.content.Context r0 = r9.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_four_element_container"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r9.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r9.u = r0
            android.content.Context r0 = r9.getContext()
            java.lang.String r2 = "myoffer_publisher_name"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r9.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r9.v = r0
            android.content.Context r0 = r9.getContext()
            java.lang.String r2 = "myoffer_privacy_agreement"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r9.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r9.w = r0
            android.content.Context r0 = r9.getContext()
            java.lang.String r2 = "myoffer_permission_manage"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r9.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r9.x = r0
            android.content.Context r0 = r9.getContext()
            java.lang.String r2 = "myoffer_version_name"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r9.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r9.y = r0
            com.tkay.core.common.f.h r0 = r9.d
            boolean r0 = r0.K()
            r2 = 1
            r3 = 8
            r4 = 0
            if (r0 == 0) goto Le3
            android.view.ViewGroup r0 = r9.u
            if (r0 == 0) goto L72
            r0.setVisibility(r4)
        L72:
            android.widget.TextView r0 = r9.v
            if (r0 == 0) goto L8b
            r0.setVisibility(r4)
            android.widget.TextView r0 = r9.v
            com.tkay.core.common.f.h r5 = r9.d
            java.lang.String r5 = r5.F()
            r0.setText(r5)
            java.util.List<android.view.View> r0 = r9.r
            android.widget.TextView r5 = r9.v
            r0.add(r5)
        L8b:
            android.widget.TextView r0 = r9.w
            if (r0 == 0) goto L9c
            r0.setVisibility(r4)
            android.widget.TextView r0 = r9.w
            com.tkay.basead.ui.BaseSdkSplashATView$2 r5 = new com.tkay.basead.ui.BaseSdkSplashATView$2
            r5.<init>(r9)
            r0.setOnClickListener(r5)
        L9c:
            android.widget.TextView r0 = r9.x
            if (r0 == 0) goto Lad
            r0.setVisibility(r4)
            android.widget.TextView r0 = r9.x
            com.tkay.basead.ui.BaseSdkSplashATView$3 r5 = new com.tkay.basead.ui.BaseSdkSplashATView$3
            r5.<init>(r9)
            r0.setOnClickListener(r5)
        Lad:
            android.widget.TextView r0 = r9.y
            if (r0 == 0) goto L11a
            r0.setVisibility(r4)
            android.widget.TextView r0 = r9.y
            android.content.Context r5 = r9.getContext()
            android.content.res.Resources r5 = r5.getResources()
            android.content.Context r6 = r9.getContext()
            java.lang.String r7 = "myoffer_panel_version"
            java.lang.String r8 = "string"
            int r6 = com.tkay.core.common.l.h.a(r6, r7, r8)
            java.lang.Object[] r7 = new java.lang.Object[r2]
            com.tkay.core.common.f.h r8 = r9.d
            java.lang.String r8 = r8.G()
            r7[r4] = r8
            java.lang.String r5 = r5.getString(r6, r7)
            r0.setText(r5)
            java.util.List<android.view.View> r0 = r9.r
            android.widget.TextView r5 = r9.y
            r0.add(r5)
            goto L11a
        Le3:
            android.view.ViewGroup r0 = r9.u
            if (r0 == 0) goto Lea
            r0.setVisibility(r3)
        Lea:
            android.widget.TextView r0 = r9.y
            if (r0 == 0) goto Lf1
            r0.setVisibility(r3)
        Lf1:
            android.widget.TextView r0 = r9.v
            if (r0 == 0) goto Lf8
            r0.setVisibility(r3)
        Lf8:
            android.widget.TextView r0 = r9.w
            if (r0 == 0) goto Lff
            r0.setVisibility(r3)
        Lff:
            android.widget.TextView r0 = r9.x
            if (r0 == 0) goto L106
            r0.setVisibility(r3)
        L106:
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Throwable -> L11a
            java.lang.String r5 = "myoffer_four_element_container_bg"
            int r0 = com.tkay.core.common.l.h.a(r0, r5, r1)     // Catch: java.lang.Throwable -> L11a
            android.view.View r0 = r9.findViewById(r0)     // Catch: java.lang.Throwable -> L11a
            if (r0 == 0) goto L11a
            r5 = 0
            r0.setBackgroundDrawable(r5)     // Catch: java.lang.Throwable -> L11a
        L11a:
            android.content.Context r0 = r9.getContext()
            java.lang.String r5 = "myoffer_ad_logo"
            int r0 = com.tkay.core.common.l.h.a(r0, r5, r1)
            android.view.View r0 = r9.findViewById(r0)
            com.tkay.core.common.ui.component.RoundImageView r0 = (com.tkay.core.common.ui.component.RoundImageView) r0
            r9.t = r0
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            com.tkay.core.common.f.h r1 = r9.d
            java.lang.String r1 = r1.v()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L15f
            com.tkay.core.common.ui.component.RoundImageView r1 = r9.t
            r1.setVisibility(r4)
            int r1 = r0.width
            android.content.Context r3 = r9.getContext()
            com.tkay.core.common.res.b r3 = com.tkay.core.common.res.b.a(r3)
            com.tkay.core.common.res.e r4 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r5 = r9.d
            java.lang.String r5 = r5.v()
            r4.<init>(r2, r5)
            com.tkay.basead.ui.BaseSdkSplashATView$4 r2 = new com.tkay.basead.ui.BaseSdkSplashATView$4
            r2.<init>(r9, r0)
            r3.a(r4, r1, r1, r2)
            goto L1ab
        L15f:
            com.tkay.core.common.f.h r1 = r9.d
            android.graphics.Bitmap r1 = r1.J()
            if (r1 == 0) goto L1a6
            com.tkay.core.common.f.h r1 = r9.d
            android.graphics.Bitmap r1 = r1.J()
            int r2 = r1.getWidth()
            float r2 = (float) r2
            r3 = 1065353216(0x3f800000, float:1.0)
            float r2 = r2 * r3
            int r3 = r1.getHeight()
            float r3 = (float) r3
            float r2 = r2 / r3
            int r3 = r0.height
            float r5 = (float) r3
            float r5 = r5 * r2
            int r2 = (int) r5
            r0.width = r2
            r0.height = r3
            com.tkay.core.common.ui.component.RoundImageView r2 = r9.t
            r2.setLayoutParams(r0)
            com.tkay.core.common.ui.component.RoundImageView r0 = r9.t
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r0.setScaleType(r2)
            com.tkay.core.common.ui.component.RoundImageView r0 = r9.t
            r0.setImageBitmap(r1)
            com.tkay.core.common.ui.component.RoundImageView r0 = r9.t
            com.tkay.core.common.f.h r1 = r9.d
            android.graphics.Bitmap r1 = r1.J()
            r0.setImageBitmap(r1)
            com.tkay.core.common.ui.component.RoundImageView r0 = r9.t
            r0.setVisibility(r4)
            goto L1ab
        L1a6:
            com.tkay.core.common.ui.component.RoundImageView r0 = r9.t
            r0.setVisibility(r3)
        L1ab:
            java.util.List<android.view.View> r0 = r9.r
            com.tkay.core.common.ui.component.RoundImageView r1 = r9.t
            r0.add(r1)
            r9.q()
            r9.r()
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    protected void p() {
            r1 = this;
            super.p()
            android.view.View$OnClickListener r0 = r1.z
            r1.setOnClickListener(r0)
            return
    }
}
