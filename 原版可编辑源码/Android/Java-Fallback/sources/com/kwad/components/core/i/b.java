package com.kwad.components.core.i;

final class b implements com.kwad.sdk.api.KsInnerAd {
    private final int KR;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public b(com.kwad.sdk.core.response.model.AdTemplate r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            r0.KR = r2
            return
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public final int getType() {
            r1 = this;
            int r0 = r1.KR
            return r0
    }
}
