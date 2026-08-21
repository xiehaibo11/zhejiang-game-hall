package com.kwad.components.ad.reward.presenter;

public final class h {
    public static boolean A(com.kwad.components.ad.reward.j r4) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r1)
            r3 = 0
            if (r2 == 0) goto L1a
            com.kwad.components.core.playable.a r2 = r4.oX
            if (r2 == 0) goto L1a
            com.kwad.components.core.playable.a r4 = r4.oX
            boolean r4 = r4.px()
            if (r4 == 0) goto L1a
            return r3
        L1a:
            boolean r4 = com.kwad.components.ad.reward.a.b.k(r1)
            if (r4 == 0) goto L21
            return r3
        L21:
            boolean r4 = r0.mXiaomiAppStoreDetailViewOpen
            if (r4 == 0) goto L26
            return r3
        L26:
            boolean r4 = com.kwad.components.ad.reward.a.b.gO()
            r0 = 1
            if (r4 == 0) goto L2e
            return r0
        L2e:
            boolean r4 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r4 == 0) goto L3b
            boolean r4 = com.kwad.sdk.core.response.b.a.al(r1)
            if (r4 == 0) goto L3b
            return r0
        L3b:
            return r3
    }
}
