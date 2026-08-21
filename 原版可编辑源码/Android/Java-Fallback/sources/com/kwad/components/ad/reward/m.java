package com.kwad.components.ad.reward;

public final class m {
    public static void m(com.kwad.components.ad.reward.j r4) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            android.content.Context r1 = r4.mContext
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r3 = com.kwad.sdk.core.response.b.a.bv(r2)
            if (r3 == 0) goto L1b
            com.kwad.components.core.playable.a r3 = r4.oX
            if (r3 == 0) goto L1b
            com.kwad.components.core.playable.a r3 = r4.oX
            boolean r3 = r3.px()
            if (r3 == 0) goto L1b
            return
        L1b:
            boolean r3 = com.kwad.components.ad.reward.a.b.k(r2)
            if (r3 == 0) goto L22
            return
        L22:
            boolean r3 = r0.mXiaomiAppStoreDetailViewOpen
            if (r3 == 0) goto L27
            return
        L27:
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r2)
            if (r3 == 0) goto L3f
            boolean r2 = com.kwad.sdk.core.response.b.a.al(r2)
            if (r2 == 0) goto L3f
            boolean r2 = r0.hasEnterAdWebViewLandPageActivity
            if (r2 != 0) goto L3f
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            r2 = 1
            r4.hasEnterAdWebViewLandPageActivity = r2
            com.kwad.components.core.page.DownloadLandPageActivity.launch(r1, r0, r2)
        L3f:
            return
    }
}
