package com.kwad.components.core.i;

import com.kwad.sdk.api.KsInnerAd;
import com.kwad.sdk.core.response.model.AdTemplate;

final class b implements KsInnerAd {
    private final int KR;
    private final AdTemplate mAdTemplate;

    public b(AdTemplate adTemplate, int i) {
        this.mAdTemplate = adTemplate;
        this.KR = i;
    }

    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override
    public final int getType() {
        return this.KR;
    }
}
