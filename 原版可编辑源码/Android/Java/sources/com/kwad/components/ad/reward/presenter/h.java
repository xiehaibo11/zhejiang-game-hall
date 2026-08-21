package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class h {
    public static boolean A(com.kwad.components.ad.reward.j jVar) {
        AdTemplate adTemplate = jVar.mAdTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if ((com.kwad.sdk.core.response.b.a.bv(adInfoCg) && jVar.oX != null && jVar.oX.px()) || com.kwad.components.ad.reward.a.b.k(adInfoCg) || adTemplate.mXiaomiAppStoreDetailViewOpen) {
            return false;
        }
        if (com.kwad.components.ad.reward.a.b.gO()) {
            return true;
        }
        return com.kwad.sdk.core.response.b.a.ax(adInfoCg) && com.kwad.sdk.core.response.b.a.al(adInfoCg);
    }
}
