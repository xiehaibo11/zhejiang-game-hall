package com.kwad.components.ad.reward.presenter.d;

import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.presenter.d.a.c;
import com.kwad.components.ad.reward.presenter.r;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;

    static class a extends com.kwad.components.ad.reward.presenter.b {
        public a(AdInfo adInfo) {
            super(adInfo);
        }

        @Override
        public final int hy() {
            return R.id.ksad_blur_end_cover;
        }

        @Override
        public final int hz() {
            return 8;
        }
    }

    public b(AdTemplate adTemplate, boolean z) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = d.cg(adTemplate);
        if (z) {
            iy();
        } else {
            iz();
        }
    }

    private void iy() {
        if (j.g(this.mAdInfo)) {
            a(new r());
        }
        a(new com.kwad.components.ad.reward.presenter.d.a.b());
        if (com.kwad.sdk.core.response.b.b.bk(this.mAdTemplate)) {
            a(new c());
        }
        a(new a(this.mAdInfo));
        if (com.kwad.components.ad.reward.a.b.k(this.mAdInfo) || !com.kwad.sdk.core.response.b.a.ak(this.mAdInfo)) {
            return;
        }
        a(new com.kwad.components.ad.reward.presenter.d.a.a());
    }

    private void iz() {
        a(new com.kwad.components.ad.reward.presenter.d.a.b());
        if (com.kwad.sdk.core.response.b.b.bk(this.mAdTemplate)) {
            a(new c());
        }
        if (com.kwad.sdk.core.response.b.a.am(this.mAdInfo)) {
            a(new com.kwad.components.ad.reward.presenter.d.a.a());
        }
    }
}
