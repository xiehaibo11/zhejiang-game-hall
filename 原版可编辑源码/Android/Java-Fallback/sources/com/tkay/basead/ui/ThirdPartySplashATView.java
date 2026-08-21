package com.tkay.basead.ui;

public class ThirdPartySplashATView extends com.tkay.basead.ui.AsseblemSplashATView {
    com.tkay.core.api.BaseAd P;

    public ThirdPartySplashATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ThirdPartySplashATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            com.tkay.basead.d.i r1 = com.tkay.basead.d.i.a()
            com.tkay.core.api.BaseAd r1 = r1.a(r5)
            r0.P = r1
            android.content.Context r1 = r0.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "myoffer_splash_ad_lable_area"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            r3 = 0
            if (r1 == 0) goto L2a
            r1.setVisibility(r3)
            java.util.List<android.view.View> r4 = r0.r
            r4.add(r1)
        L2a:
            android.content.Context r1 = r0.getContext()
            java.lang.String r4 = "myoffer_splash_ad_content_image_area"
            int r1 = com.tkay.core.common.l.h.a(r1, r4, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            if (r1 == 0) goto L68
            com.tkay.core.api.BaseAd r2 = r0.P
            if (r2 == 0) goto L68
            java.lang.Object[] r4 = new java.lang.Object[r3]
            android.view.View r2 = r2.getAdMediaView(r4)
            if (r2 == 0) goto L68
            com.tkay.core.api.BaseAd r2 = r0.P
            java.lang.Object[] r3 = new java.lang.Object[r3]
            android.view.View r2 = r2.getAdMediaView(r3)
            android.view.ViewParent r3 = r2.getParent()
            if (r3 == 0) goto L5f
            android.view.ViewParent r3 = r2.getParent()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r3.removeView(r2)
        L5f:
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r4 = -1
            r3.<init>(r4, r4)
            r1.addView(r2, r3)
        L68:
            return
    }

    private void s() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_splash_ad_lable_area"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r2 = 0
            if (r0 == 0) goto L1d
            r0.setVisibility(r2)
            java.util.List<android.view.View> r3 = r4.r
            r3.add(r0)
        L1d:
            android.content.Context r0 = r4.getContext()
            java.lang.String r3 = "myoffer_splash_ad_content_image_area"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            if (r0 == 0) goto L5b
            com.tkay.core.api.BaseAd r1 = r4.P
            if (r1 == 0) goto L5b
            java.lang.Object[] r3 = new java.lang.Object[r2]
            android.view.View r1 = r1.getAdMediaView(r3)
            if (r1 == 0) goto L5b
            com.tkay.core.api.BaseAd r1 = r4.P
            java.lang.Object[] r2 = new java.lang.Object[r2]
            android.view.View r1 = r1.getAdMediaView(r2)
            android.view.ViewParent r2 = r1.getParent()
            if (r2 == 0) goto L52
            android.view.ViewParent r2 = r1.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r2.removeView(r1)
        L52:
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
        L5b:
            return
    }

    @Override
    protected final float a(com.tkay.basead.ui.a r1, int r2) {
            r0 = this;
            r1 = 1065353216(0x3f800000, float:1.0)
            return r1
    }

    @Override
    protected final void c() {
            r0 = this;
            return
    }

    @Override
    protected final boolean m() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void o() {
            r2 = this;
            super.o()
            com.tkay.basead.ui.GuideToClickView r0 = r2.J
            if (r0 == 0) goto Le
            com.tkay.basead.ui.GuideToClickView r0 = r2.J
            r1 = 8
            r0.setVisibility(r1)
        Le:
            return
    }

    @Override
    protected final void p() {
            r0 = this;
            return
    }

    public void registerNativeClickListener(android.view.View r4) {
            r3 = this;
            com.tkay.core.api.BaseAd r0 = r3.P
            if (r0 == 0) goto L2b
            com.tkay.core.common.f.i r0 = r3.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.x()
            r1 = 0
            if (r0 != 0) goto L1c
            java.util.List<android.view.View> r0 = r3.r
            r0.add(r3)
            com.tkay.core.api.BaseAd r0 = r3.P
            java.util.List<android.view.View> r2 = r3.r
            r0.registerListener(r4, r2, r1)
            return
        L1c:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.view.View r2 = r3.a
            r0.add(r2)
            com.tkay.core.api.BaseAd r2 = r3.P
            r2.registerListener(r4, r0, r1)
        L2b:
            return
    }
}
