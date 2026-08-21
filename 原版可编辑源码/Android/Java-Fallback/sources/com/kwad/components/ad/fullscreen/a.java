package com.kwad.components.ad.fullscreen;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.d {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.d> r0 = com.kwad.components.ad.b.d.class
            return r0
    }

    @Override
    public final void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public final void loadFullScreenVideoAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener r2) {
            r0 = this;
            com.kwad.components.ad.fullscreen.d.loadFullScreenVideoAd(r1, r2)
            return
    }

    @Override
    public final int priority() {
            r2 = this;
            java.lang.Class<com.kwad.components.ad.b.g> r0 = com.kwad.components.ad.b.g.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            r1 = 1
            if (r0 == 0) goto Lf
            int r0 = r0.priority()
            int r0 = r0 + r1
            return r0
        Lf:
            return r1
    }
}
