package com.kwad.components.ad.splashscreen.c;

public final class a extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.widget.c {
    private android.view.View CB;
    private boolean CC;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(android.view.View r5) {
            r4 = this;
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            android.content.Context r5 = r5.getContext()
            r1 = 1
            r2 = 53
            r3 = 2
            r0.c(r1, r5, r2, r3)
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            r3.CC = r0
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.components.ad.splashscreen.h.m(r0)
            android.view.View r1 = r3.CB
            if (r0 == 0) goto L24
            r2 = 0
            goto L26
        L24:
            r2 = 8
        L26:
            r1.setVisibility(r2)
            if (r0 == 0) goto L38
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.View r1 = r3.CB
            android.content.Context r1 = r1.getContext()
            android.view.View r2 = r3.CB
            r0.<init>(r1, r2, r3)
        L38:
            return
    }

    @Override
    public final void b(android.view.View r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onSlide: enableSlickClick: "
            r0.<init>(r1)
            boolean r1 = r4.CC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FullScreenTouchConvertPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r4.CC
            if (r0 != 0) goto L1a
            return
        L1a:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            r1 = 1
            android.content.Context r5 = r5.getContext()
            r2 = 153(0x99, float:2.14E-43)
            r3 = 2
            r0.c(r1, r5, r2, r3)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_splash_actionbar_full_screen
            android.view.View r0 = r1.findViewById(r0)
            r1.CB = r0
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}
