package com.kwad.components.ad.draw;

public final class d {


    public static void loadDrawAd(com.kwad.sdk.api.KsScene r3, com.kwad.sdk.api.KsLoadManager.DrawAdListener r4) {
            com.kwad.sdk.internal.api.SceneImpl r3 = com.kwad.sdk.internal.api.SceneImpl.covert(r3)
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()
            java.lang.String r1 = "loadDrawAd"
            boolean r0 = r0.a(r3, r1)
            r1 = 6
            r3.setAdStyle(r1)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r1 = new com.kwad.components.core.p.a.a$a
            r1.<init>()
            com.kwad.components.core.p.a.b r2 = new com.kwad.components.core.p.a.b
            r2.<init>(r3)
            com.kwad.components.core.p.a.a$a r3 = r1.e(r2)
            com.kwad.components.core.p.a.a$a r3 = r3.aF(r0)
            com.kwad.components.ad.draw.d$1 r0 = new com.kwad.components.ad.draw.d$1
            r0.<init>(r4)
            com.kwad.components.core.p.a.a$a r3 = r3.a(r0)
            com.kwad.components.core.p.a.a r3 = r3.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r3)
            return
    }
}
