package com.kwad.components.ad.reward.presenter.d;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    static class a extends com.kwad.components.ad.reward.presenter.b {
        public a(com.kwad.sdk.core.response.model.AdInfo r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final int hy() {
                r1 = this;
                int r0 = com.kwad.sdk.R.id.ksad_blur_end_cover
                return r0
        }

        @Override
        public final int hz() {
                r1 = this;
                r0 = 8
                return r0
        }
    }

    public b(com.kwad.sdk.core.response.model.AdTemplate r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            r0.mAdInfo = r1
            if (r2 == 0) goto L11
            r0.iy()
            return
        L11:
            r0.iz()
            return
    }

    private void iy() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.components.ad.reward.j.g(r0)
            if (r0 == 0) goto L10
            com.kwad.components.ad.reward.presenter.r r0 = new com.kwad.components.ad.reward.presenter.r
            r0.<init>()
            r2.a(r0)
        L10:
            com.kwad.components.ad.reward.presenter.d.a.b r0 = new com.kwad.components.ad.reward.presenter.d.a.b
            r0.<init>()
            r2.a(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bk(r0)
            if (r0 == 0) goto L28
            com.kwad.components.ad.reward.presenter.d.a.c r0 = new com.kwad.components.ad.reward.presenter.d.a.c
            r0.<init>()
            r2.a(r0)
        L28:
            com.kwad.components.ad.reward.presenter.d.b$a r0 = new com.kwad.components.ad.reward.presenter.d.b$a
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            r0.<init>(r1)
            r2.a(r0)
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.components.ad.reward.a.b.k(r0)
            if (r0 != 0) goto L4a
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ak(r0)
            if (r0 == 0) goto L4a
            com.kwad.components.ad.reward.presenter.d.a.a r0 = new com.kwad.components.ad.reward.presenter.d.a.a
            r0.<init>()
            r2.a(r0)
        L4a:
            return
    }

    private void iz() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.d.a.b r0 = new com.kwad.components.ad.reward.presenter.d.a.b
            r0.<init>()
            r1.a(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bk(r0)
            if (r0 == 0) goto L18
            com.kwad.components.ad.reward.presenter.d.a.c r0 = new com.kwad.components.ad.reward.presenter.d.a.c
            r0.<init>()
            r1.a(r0)
        L18:
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.am(r0)
            if (r0 == 0) goto L28
            com.kwad.components.ad.reward.presenter.d.a.a r0 = new com.kwad.components.ad.reward.presenter.d.a.a
            r0.<init>()
            r1.a(r0)
        L28:
            return
    }
}
