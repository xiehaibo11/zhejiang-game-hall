package com.kwad.components.ad.fullscreen;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class b {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;

    public b(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
    }

    public final AdInfo bB() {
        return this.mAdInfo;
    }

    public final boolean bC() {
        return com.kwad.sdk.core.response.b.d.ct(this.mAdTemplate);
    }

    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }
}
