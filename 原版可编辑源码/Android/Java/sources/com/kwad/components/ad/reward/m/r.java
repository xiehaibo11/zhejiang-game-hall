package com.kwad.components.ad.reward.m;

import com.kwad.sdk.core.response.model.AdTemplate;

public final class r {
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    private r() {
    }

    public static r C(AdTemplate adTemplate) {
        r rVar = new r();
        rVar.setAdTemplate(adTemplate);
        return rVar;
    }

    public static r a(AdTemplate adTemplate, com.kwad.components.core.e.d.c cVar) {
        r rVar = new r();
        rVar.setAdTemplate(adTemplate);
        rVar.setApkDownloadHelper(cVar);
        return rVar;
    }

    private void setAdTemplate(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }

    private void setApkDownloadHelper(com.kwad.components.core.e.d.c cVar) {
        this.mApkDownloadHelper = cVar;
    }

    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    public final com.kwad.components.core.e.d.c hi() {
        return this.mApkDownloadHelper;
    }
}
