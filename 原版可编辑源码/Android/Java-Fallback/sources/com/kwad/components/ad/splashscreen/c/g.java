package com.kwad.components.ad.splashscreen.c;

public final class g extends com.kwad.components.ad.splashscreen.c.e {


    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.g r0) {
            r0.kZ()
            return
    }

    private static void j(android.view.View r1, int r2) {
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            boolean r0 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r0 == 0) goto L14
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.topMargin = r2
            r1.setLayoutParams(r0)
            return
        L14:
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            boolean r0 = r0 instanceof android.widget.LinearLayout.LayoutParams
            if (r0 == 0) goto L27
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0
            r0.topMargin = r2
            r1.setLayoutParams(r0)
        L27:
            return
    }

    private void kY() {
            r1 = this;
            com.kwad.components.ad.splashscreen.c.g$1 r0 = new com.kwad.components.ad.splashscreen.c.g$1
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            return
    }

    private void kZ() {
            r4 = this;
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            android.view.ViewGroup r1 = r1.p(r0)
            int r2 = com.kwad.sdk.R.id.ksad_preload_container
            android.view.View r1 = r1.findViewById(r2)
            int r2 = r4.t(r0)
            j(r1, r2)
            boolean r0 = com.kwad.components.ad.splashscreen.f.c.v(r0)
            if (r0 == 0) goto L76
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_logo_container
            android.view.View r0 = r0.findViewById(r1)
            android.app.Activity r1 = r4.getActivity()
            int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r1)
            android.content.Context r2 = r4.getContext()
            r3 = 1094713344(0x41400000, float:12.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            int r1 = r1 + r2
            j(r0, r1)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_sound
            android.view.View r0 = r0.findViewById(r1)
            android.app.Activity r1 = r4.getActivity()
            int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r1)
            android.content.Context r2 = r4.getContext()
            r3 = 1107296256(0x42000000, float:32.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            int r1 = r1 + r2
            j(r0, r1)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_skip_view_area
            android.view.View r0 = r0.findViewById(r1)
            android.app.Activity r1 = r4.getActivity()
            int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r1)
            j(r0, r1)
        L76:
            return
    }

    private int t(com.kwad.sdk.core.response.model.AdInfo r2) {
            r1 = this;
            boolean r2 = com.kwad.components.ad.splashscreen.f.c.v(r2)
            if (r2 == 0) goto L1a
            android.app.Activity r2 = r1.getActivity()
            r0 = 1107296256(0x42000000, float:32.0)
        Lc:
            int r2 = com.kwad.sdk.d.a.a.a(r2, r0)
            android.app.Activity r0 = r1.getActivity()
            int r0 = com.kwad.sdk.d.a.a.getStatusBarHeight(r0)
            int r2 = r2 + r0
            return r2
        L1a:
            android.app.Activity r2 = r1.getActivity()
            r0 = 1098907648(0x41800000, float:16.0)
            goto Lc
    }

    @Override
    public final void ah() {
            r0 = this;
            super.ah()
            r0.kY()
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }
}
