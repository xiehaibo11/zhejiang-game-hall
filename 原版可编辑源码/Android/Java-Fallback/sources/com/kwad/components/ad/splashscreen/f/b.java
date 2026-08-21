package com.kwad.components.ad.splashscreen.f;

public final class b implements com.kwad.sdk.widget.c {
    private com.kwad.components.ad.splashscreen.f.a CY;
    private android.view.ViewStub EJ;
    private android.view.ViewGroup EK;
    private android.view.View EL;
    private android.widget.TextView EM;
    private boolean EN;
    private com.kwad.components.ad.splashscreen.e EO;
    private com.kwad.sdk.widget.f EP;
    private android.view.ViewGroup gg;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;


    public b(android.view.ViewGroup r1, android.view.ViewStub r2, boolean r3, com.kwad.components.core.e.d.c r4) {
            r0 = this;
            r0.<init>()
            r0.gg = r1
            r0.EJ = r2
            r0.mApkDownloadHelper = r4
            r0.EN = r3
            return
    }

    private void a(com.kwad.components.ad.splashscreen.d r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r1 = r1.kx()
            r0.ac(r1)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.f.b r0, java.lang.String r1) {
            r0.ac(r1)
            return
    }

    private void ac(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.EM
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.setText(r2)
        L9:
            return
    }

    private void g(android.view.ViewGroup r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = com.kwad.sdk.R.id.ksad_splash_actionbar_native
            android.view.View r0 = r4.findViewById(r0)
            r3.EL = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_actionbar_text
            android.view.View r4 = r4.findViewById(r0)
            android.widget.TextView r4 = (android.widget.TextView) r4
            r3.EM = r4
            com.kwad.sdk.widget.f r4 = new com.kwad.sdk.widget.f
            android.view.View r0 = r3.EL
            android.content.Context r0 = r0.getContext()
            android.view.View r1 = r3.EL
            r4.<init>(r0, r1, r3)
            r3.EP = r4
            android.view.View r4 = r3.EL
            r4.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
            r2 = 4
            com.kwad.components.ad.splashscreen.d r4 = com.kwad.components.ad.splashscreen.d.a(r4, r0, r1, r2)
            r3.a(r4)
            return
    }

    private void g(boolean r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.splashscreen.e r0 = r1.EO
            if (r0 == 0) goto L7
            r0.f(r2, r3)
        L7:
            return
    }

    public final void G(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            r3.mAdTemplate = r4
            com.kwad.components.ad.splashscreen.f.a r0 = r3.CY
            if (r0 != 0) goto L16
            com.kwad.components.ad.splashscreen.f.b$1 r0 = new com.kwad.components.ad.splashscreen.f.b$1
            android.view.ViewGroup r1 = r3.gg
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r0.<init>(r3, r1, r2)
            r3.CY = r0
            goto L19
        L16:
            r0.setAdTemplate(r4)
        L19:
            if (r4 == 0) goto L21
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            r3.mAdInfo = r4
        L21:
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            if (r4 == 0) goto L2c
            com.kwad.components.ad.splashscreen.f.a r0 = r3.CY
            if (r0 == 0) goto L2c
            r4.b(r0)
        L2c:
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            android.view.View r0 = r1.EL
            boolean r2 = r2.equals(r0)
            r0 = 1
            r1.g(r0, r2)
            return
    }

    public final void a(com.kwad.components.ad.splashscreen.e r1) {
            r0 = this;
            r0.EO = r1
            return
    }

    @Override
    public final void b(android.view.View r3) {
            r2 = this;
            boolean r0 = r2.EN
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            android.view.View r1 = r2.EL
            boolean r3 = r3.equals(r1)
            r2.g(r0, r3)
            return
    }

    public final void ls() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "rollBackToNative mRootViewStub: "
            r0.<init>(r1)
            android.view.ViewStub r1 = r2.EJ
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SplashActionBarNativeHelper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            android.view.ViewGroup r0 = r2.EK
            if (r0 != 0) goto L3b
            android.view.ViewStub r0 = r2.EJ
            if (r0 == 0) goto L2a
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L2a
            android.view.ViewStub r0 = r2.EJ
            android.view.View r0 = r0.inflate()
            goto L32
        L2a:
            android.view.ViewGroup r0 = r2.gg
            int r1 = com.kwad.sdk.R.id.ksad_splash_actionbar_native_root
            android.view.View r0 = r0.findViewById(r1)
        L32:
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.EK = r0
            android.view.ViewGroup r0 = r2.EK
            r2.g(r0)
        L3b:
            android.view.ViewGroup r0 = r2.EK
            if (r0 == 0) goto L43
            r1 = 0
            r0.setVisibility(r1)
        L43:
            return
    }

    public final void onUnbind() {
            r2 = this;
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto Lb
            com.kwad.components.ad.splashscreen.f.a r1 = r2.CY
            if (r1 == 0) goto Lb
            r0.c(r1)
        Lb:
            return
    }
}
