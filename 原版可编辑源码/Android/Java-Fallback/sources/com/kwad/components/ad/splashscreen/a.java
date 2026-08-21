package com.kwad.components.ad.splashscreen;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.h {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.util.List<java.lang.String> R() {
            r1 = this;
            com.kwad.components.ad.splashscreen.SplashPreloadManager r0 = com.kwad.components.ad.splashscreen.SplashPreloadManager.kB()
            java.util.List r0 = r0.R()
            return r0
    }

    @Override
    public final java.lang.Class<com.kwad.components.ad.b.h> getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.h> r0 = com.kwad.components.ad.b.h.class
            return r0
    }

    @Override
    public final void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public final void loadSplashScreenAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.SplashScreenAdListener r2) {
            r0 = this;
            com.kwad.components.ad.splashscreen.b.loadSplashScreenAd(r1, r2)
            return
    }
}
