package com.kwad.components.ad.draw.b.b;

public final class b extends com.kwad.components.ad.draw.a.a {
    private android.view.ViewGroup ce;
    private com.kwad.components.ad.draw.b.b.a.a cv;
    private com.kwad.components.ad.draw.view.playcard.DrawCardApp cy;
    private com.kwad.components.ad.draw.view.playcard.DrawCardH5 cz;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;




    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.draw.b.b.b$1 r0 = new com.kwad.components.ad.draw.b.b.b$1
            r0.<init>(r1)
            r1.cv = r0
            return
    }

    static void a(com.kwad.components.ad.draw.b.b.b r0) {
            r0.ao()
            return
    }

    private void ao() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto Lc
            r1.aq()
            return
        Lc:
            r1.ar()
            return
    }

    private void aq() {
            r3 = this;
            android.view.ViewGroup r0 = r3.ce
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = r3.cy
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.draw.b.b.b$2 r2 = new com.kwad.components.ad.draw.b.b.b$2
            r2.<init>(r3)
            r0.a(r1, r2)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = r3.cy
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = r3.cy
            r0.aM()
            return
    }

    private void ar() {
            r3 = this;
            android.view.ViewGroup r0 = r3.ce
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = r3.cz
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.draw.b.b.b$3 r2 = new com.kwad.components.ad.draw.b.b.b$3
            r2.<init>(r3)
            r0.a(r1, r2)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = r3.cz
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = r3.cz
            r0.aM()
            return
    }

    private void as() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.components.ad.draw.a.b r1 = r3.bE
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            r2 = 29
            com.kwad.sdk.core.report.a.a(r0, r2, r1)
            com.kwad.components.ad.draw.a.b r0 = r3.bE
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r0 = r0.bD
            if (r0 == 0) goto L1c
            com.kwad.components.ad.draw.a.b r0 = r3.bE
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r0 = r0.bD
            r0.onAdClicked()
        L1c:
            return
    }

    static android.view.ViewGroup b(com.kwad.components.ad.draw.b.b.b r0) {
            android.view.ViewGroup r0 = r0.ce
            return r0
    }

    static void c(com.kwad.components.ad.draw.b.b.b r0) {
            r0.as()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.b.b.a r0 = r0.bX
            com.kwad.components.ad.draw.b.b.a$a r1 = r2.cv
            r0.a(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = r2.cy
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = r2.cz
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_container
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.ce = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_container
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = (com.kwad.components.ad.draw.view.playcard.DrawCardApp) r0
            r1.cy = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_h5_container
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = (com.kwad.components.ad.draw.view.playcard.DrawCardH5) r0
            r1.cz = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.draw.view.playcard.DrawCardApp r0 = r2.cy
            r0.release()
            com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0 = r2.cz
            r0.release()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.b.b.a r0 = r0.bX
            r1 = 0
            r0.a(r1)
            return
    }
}
