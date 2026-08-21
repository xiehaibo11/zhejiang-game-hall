package com.kwad.components.ad.splashscreen.c;

public final class b extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.core.widget.KsLogoView mLogoView;


    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.components.core.widget.KsLogoView a(com.kwad.components.ad.splashscreen.c.b r0) {
            com.kwad.components.core.widget.KsLogoView r0 = r0.mLogoView
            return r0
    }

    static void a(com.kwad.components.ad.splashscreen.c.b r0, android.view.ViewGroup r1) {
            r0.i(r1)
            return
    }

    private void i(android.view.ViewGroup r6) {
            r5 = this;
            com.kwad.components.ad.splashscreen.h r0 = r5.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.components.ad.splashscreen.f.c.v(r0)
            if (r0 != 0) goto L35
            android.content.Context r6 = r5.getContext()
            com.kwad.components.ad.splashscreen.h r0 = r5.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r0 = r0.getWidth()
            com.kwad.components.ad.splashscreen.h r1 = r5.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            int r1 = r1.getHeight()
            boolean r6 = com.kwad.components.ad.splashscreen.f.c.a(r6, r0, r1)
            if (r6 == 0) goto L34
            int r6 = com.kwad.sdk.R.id.ksad_splash_logo_container
            android.view.View r6 = r5.findViewById(r6)
            r0 = 16
            r1 = -1
            com.kwad.components.ad.splashscreen.f.c.a(r6, r1, r0, r0, r1)
        L34:
            return
        L35:
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r1 = 51
            r0.gravity = r1
            r6.setLayoutParams(r0)
            android.content.Context r0 = r6.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.heightPixels
            double r1 = (double) r1
            int r0 = r0.widthPixels
            double r3 = (double) r0
            double r1 = r1 / r3
            r3 = 4610685218569846784(0x3ffc71c720000000, double:1.7777777910232544)
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L7e
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            boolean r1 = r0 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r1 == 0) goto L7e
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            android.content.Context r1 = r6.getContext()
            r2 = 1094713344(0x41400000, float:12.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            r0.leftMargin = r1
            android.content.Context r6 = r6.getContext()
            int r6 = com.kwad.sdk.d.a.a.a(r6, r2)
            r0.topMargin = r6
        L7e:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_logo_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r2.mLogoView = r0
            com.kwad.components.ad.splashscreen.c.b$1 r1 = new com.kwad.components.ad.splashscreen.c.b$1
            r1.<init>(r2)
            r0.post(r1)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L50
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = (com.kwad.sdk.core.response.model.AdInfo) r0
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            if (r0 == 0) goto L50
            int r0 = r0.logoPosition
            if (r0 == 0) goto L49
            com.kwad.components.core.widget.KsLogoView r0 = r2.mLogoView
            r0.setVisibility(r1)
            com.kwad.components.core.widget.KsLogoView r0 = r2.mLogoView
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.aa(r1)
            return
        L49:
            com.kwad.components.core.widget.KsLogoView r0 = r2.mLogoView
            r1 = 8
            r0.setVisibility(r1)
        L50:
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }
}
