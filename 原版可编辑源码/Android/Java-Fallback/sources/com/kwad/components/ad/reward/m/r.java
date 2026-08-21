package com.kwad.components.ad.reward.m;

public final class r {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    private r() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.reward.m.r C(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.components.ad.reward.m.r r0 = new com.kwad.components.ad.reward.m.r
            r0.<init>()
            r0.setAdTemplate(r1)
            return r0
    }

    public static com.kwad.components.ad.reward.m.r a(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.components.core.e.d.c r2) {
            com.kwad.components.ad.reward.m.r r0 = new com.kwad.components.ad.reward.m.r
            r0.<init>()
            r0.setAdTemplate(r1)
            r0.setApkDownloadHelper(r2)
            return r0
    }

    private void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.mAdTemplate = r1
            return
    }

    private void setApkDownloadHelper(com.kwad.components.core.e.d.c r1) {
            r0 = this;
            r0.mApkDownloadHelper = r1
            return
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    public final com.kwad.components.core.e.d.c hi() {
            r1 = this;
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            return r0
    }
}
