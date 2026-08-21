package com.kwad.components.ad.reward.j.a;

public final class a extends com.kwad.components.core.webview.b.c.b {
    private com.kwad.components.ad.reward.j xG;

    public a(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.<init>()
            r0.xG = r1
            return
    }

    public final void b(com.kwad.components.ad.reward.c.b r3) {
            r2 = this;
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.a(r1, r3)
            return
    }

    public final com.kwad.components.ad.reward.j jo() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.xG
            return r0
    }

    @Override
    public final void release() {
            r1 = this;
            super.release()
            r0 = 0
            r1.xG = r0
            return
    }
}
