package com.tkay.basead.ui;

public class AsseblemSplashATView extends com.tkay.basead.ui.BaseSdkSplashATView {
    android.view.View a;




    public AsseblemSplashATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public AsseblemSplashATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    static void a(com.tkay.basead.ui.AsseblemSplashATView r0) {
            super.h()
            return
    }

    private static void a(com.tkay.basead.ui.AsseblemSplashATView r0, int r1, java.lang.Runnable r2) {
            super.a(r1, r2)
            return
    }

    @Override
    protected final void a() {
            r4 = this;
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.q()
            java.lang.String r1 = "layout"
            r2 = 2
            if (r0 != r2) goto L23
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r2 = r4.getContext()
            java.lang.String r3 = "myoffer_splash_ad_layout_asseblem_vertical_land"
            int r1 = com.tkay.core.common.l.h.a(r2, r3, r1)
            r0.inflate(r1, r4)
            goto L38
        L23:
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r2 = r4.getContext()
            java.lang.String r3 = "myoffer_splash_ad_layout_asseblem_vertical_port"
            int r1 = com.tkay.core.common.l.h.a(r2, r3, r1)
            r0.inflate(r1, r4)
        L38:
            r4.o()
            return
    }

    @Override
    protected final void b() {
            r13 = this;
            android.content.Context r0 = r13.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_splash_ad_title"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r13.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            android.content.Context r2 = r13.getContext()
            java.lang.String r3 = "myoffer_splash_ad_install_btn"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r1)
            android.view.View r2 = r13.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            android.content.Context r3 = r13.getContext()
            java.lang.String r4 = "myoffer_splash_desc"
            int r3 = com.tkay.core.common.l.h.a(r3, r4, r1)
            android.view.View r3 = r13.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            android.content.Context r4 = r13.getContext()
            java.lang.String r5 = "myoffer_splash_ad_content_image_area"
            int r4 = com.tkay.core.common.l.h.a(r4, r5, r1)
            android.view.View r4 = r13.findViewById(r4)
            android.widget.FrameLayout r4 = (android.widget.FrameLayout) r4
            android.content.Context r5 = r13.getContext()
            java.lang.String r6 = "myoffer_splash_bg"
            int r5 = com.tkay.core.common.l.h.a(r5, r6, r1)
            android.view.View r5 = r13.findViewById(r5)
            com.tkay.core.common.ui.component.RoundImageView r5 = (com.tkay.core.common.ui.component.RoundImageView) r5
            android.content.Context r6 = r13.getContext()
            java.lang.String r7 = "myoffer_splash_icon"
            int r1 = com.tkay.core.common.l.h.a(r6, r7, r1)
            android.view.View r1 = r13.findViewById(r1)
            com.tkay.core.common.ui.component.RoundImageView r1 = (com.tkay.core.common.ui.component.RoundImageView) r1
            r13.a = r2
            com.tkay.core.common.f.h r6 = r13.d
            java.lang.String r6 = r6.t()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            r7 = 17
            r8 = 1
            r9 = 0
            if (r6 != 0) goto La1
            r1.setVisibility(r9)
            r1.setNeedRadiu(r8)
            r6 = 12
            r1.setRadiusInDip(r6)
            android.view.ViewGroup$LayoutParams r6 = r1.getLayoutParams()
            int r6 = r6.width
            android.content.Context r10 = r13.getContext()
            com.tkay.core.common.res.b r10 = com.tkay.core.common.res.b.a(r10)
            com.tkay.core.common.res.e r11 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r12 = r13.d
            java.lang.String r12 = r12.t()
            r11.<init>(r8, r12)
            com.tkay.basead.ui.AsseblemSplashATView$1 r12 = new com.tkay.basead.ui.AsseblemSplashATView$1
            r12.<init>(r13, r1)
            r10.a(r11, r6, r6, r12)
            goto Lbb
        La1:
            com.tkay.basead.ui.a.a.a(r1)
            android.view.ViewGroup$LayoutParams r6 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6
            if (r6 == 0) goto Lb1
            r6.rightMargin = r9
            r1.setLayoutParams(r6)
        Lb1:
            if (r0 == 0) goto Lb6
            r0.setGravity(r7)
        Lb6:
            if (r3 == 0) goto Lbb
            r3.setGravity(r7)
        Lbb:
            java.util.List<android.view.View> r6 = r13.r
            r6.add(r1)
            r4.removeAllViews()
            com.tkay.basead.ui.WrapRoundImageView r1 = new com.tkay.basead.ui.WrapRoundImageView
            android.content.Context r6 = r13.getContext()
            r1.<init>(r6)
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams
            r10 = -1
            r6.<init>(r10, r10)
            r6.gravity = r7
            r1.setLayoutParams(r6)
            r1.setNeedRadiu(r9)
            android.widget.ImageView$ScaleType r7 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r7)
            r7 = 4
            r1.setVisibility(r7)
            r4.addView(r1, r6)
            r4.setVisibility(r9)
            r5.setNeedRadiu(r9)
            com.tkay.core.common.f.h r6 = r13.d
            java.lang.String r6 = r6.u()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L102
            java.lang.String r1 = "#EFEFEF"
            int r1 = android.graphics.Color.parseColor(r1)
            r5.setBackgroundColor(r1)
            goto L13a
        L102:
            android.content.Context r6 = r13.getContext()
            com.tkay.core.common.res.b r6 = com.tkay.core.common.res.b.a(r6)
            com.tkay.core.common.res.e r10 = new com.tkay.core.common.res.e
            com.tkay.core.common.f.h r11 = r13.d
            java.lang.String r11 = r11.u()
            r10.<init>(r8, r11)
            android.content.res.Resources r8 = r13.getResources()
            android.util.DisplayMetrics r8 = r8.getDisplayMetrics()
            int r8 = r8.widthPixels
            android.content.res.Resources r11 = r13.getResources()
            android.util.DisplayMetrics r11 = r11.getDisplayMetrics()
            int r11 = r11.widthPixels
            int r11 = r11 * 627
            int r11 = r11 / 1200
            com.tkay.basead.ui.AsseblemSplashATView$2 r12 = new com.tkay.basead.ui.AsseblemSplashATView$2
            r12.<init>(r13, r4, r1, r5)
            r6.a(r10, r8, r11, r12)
            java.util.List<android.view.View> r4 = r13.r
            r4.add(r1)
        L13a:
            com.tkay.core.common.f.h r1 = r13.d
            java.lang.String r1 = r1.r()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L153
            com.tkay.core.common.f.h r1 = r13.d
            java.lang.String r1 = r1.r()
            r0.setText(r1)
            r0.setVisibility(r9)
            goto L156
        L153:
            r0.setVisibility(r7)
        L156:
            java.util.List<android.view.View> r1 = r13.r
            r1.add(r0)
            com.tkay.core.common.f.h r0 = r13.d
            java.lang.String r0 = r0.w()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L171
            com.tkay.core.common.f.h r0 = r13.d
            java.lang.String r0 = r0.w()
            r2.setText(r0)
            goto L17e
        L171:
            android.content.Context r0 = r13.getContext()
            com.tkay.core.common.f.h r1 = r13.d
            int r0 = com.tkay.basead.a.e.a(r0, r1)
            r2.setText(r0)
        L17e:
            java.util.List<android.view.View> r0 = r13.r
            r0.add(r2)
            if (r3 == 0) goto L1a5
            com.tkay.core.common.f.h r0 = r13.d
            java.lang.String r0 = r0.s()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L19b
            com.tkay.core.common.f.h r0 = r13.d
            java.lang.String r0 = r0.s()
            r3.setText(r0)
            goto L1a0
        L19b:
            r0 = 8
            r3.setVisibility(r0)
        L1a0:
            java.util.List<android.view.View> r0 = r13.r
            r0.add(r3)
        L1a5:
            return
    }

    @Override
    protected void c() {
            r2 = this;
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
            if (r0 >= 0) goto Ld
            r0 = 100
            goto L15
        Ld:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
        L15:
            com.tkay.basead.ui.AsseblemSplashATView$3 r1 = new com.tkay.basead.ui.AsseblemSplashATView$3
            r1.<init>(r2)
            super.a(r0, r1)
            return
    }
}
