package com.kwad.components.ad.interstitial.d.a;

public abstract class a extends com.kwad.components.ad.interstitial.d.b implements com.kwad.components.core.webview.b.i {
    private com.kwad.components.core.webview.b.h lp;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.o r3) {
            r2 = this;
            com.kwad.components.core.webview.b.b.m r0 = new com.kwad.components.core.webview.b.b.m
            r0.<init>()
            com.kwad.components.ad.interstitial.d.c r1 = r2.jf
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r1.dJ
            boolean r1 = r1.isVideoSoundEnable()
            r1 = r1 ^ 1
            r0.Xa = r1
            r3.c(r0)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.kwad.components.core.webview.b.b.t r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            com.kwad.components.core.webview.b.a.i r3 = new com.kwad.components.core.webview.b.a.i
            com.kwad.components.ad.interstitial.d.a.a$1 r0 = new com.kwad.components.ad.interstitial.d.a.a$1
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r2) {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c r2 = r1.jf
            r0 = 1
            r2.ji = r0
            com.kwad.components.ad.interstitial.d.c r2 = r1.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r2 = r2.hz
            r2.onAdClicked()
            return
    }

    @Override
    public void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.core.webview.b.h r0 = r3.lp
            android.app.Activity r1 = r3.getActivity()
            com.kwad.components.ad.interstitial.d.c r2 = r3.jf
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    @Override
    public void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            return
    }

    @Override
    public com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.widget.KSFrameLayout r0 = r0.jo
            return r0
    }

    @Override
    public void onCreate() {
            r4 = this;
            super.onCreate()
            com.kwad.components.core.webview.b.h r0 = new com.kwad.components.core.webview.b.h
            android.content.Context r1 = r4.getContext()
            r2 = -1
            r0.<init>(r2, r1)
            r4.lp = r0
            return
    }

    @Override
    public void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.h r0 = r1.lp
            r0.jv()
            return
    }
}
