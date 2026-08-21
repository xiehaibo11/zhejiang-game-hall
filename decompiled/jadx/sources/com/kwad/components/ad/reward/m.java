package com.kwad.components.ad.reward;

import android.content.Context;
import com.kwad.components.core.page.DownloadLandPageActivity;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class m {
    public static void m(j jVar) {
        AdTemplate adTemplate = jVar.mAdTemplate;
        Context context = jVar.mContext;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if ((com.kwad.sdk.core.response.b.a.bv(adInfoCg) && jVar.oX != null && jVar.oX.px()) || com.kwad.components.ad.reward.a.b.k(adInfoCg) || adTemplate.mXiaomiAppStoreDetailViewOpen || !com.kwad.sdk.core.response.b.a.ax(adInfoCg) || !com.kwad.sdk.core.response.b.a.al(adInfoCg) || adTemplate.hasEnterAdWebViewLandPageActivity) {
            return;
        }
        jVar.mAdTemplate.hasEnterAdWebViewLandPageActivity = true;
        DownloadLandPageActivity.launch(context, adTemplate, true);
    }
}
