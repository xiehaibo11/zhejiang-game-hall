package com.kwad.components.ad.reward.presenter;

public final class d extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;


    public d(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.response.model.AdInfo r3, android.view.ViewGroup r4) {
            r1 = this;
            r1.<init>()
            r1.mAdInfo = r3
            r1.mAdTemplate = r2
            boolean r2 = com.kwad.components.ad.reward.a.b.i(r3)
            if (r2 == 0) goto L3a
            com.kwad.components.ad.reward.b.c r2 = new com.kwad.components.ad.reward.b.c
            r2.<init>()
            r1.a(r2)
            int r3 = com.kwad.sdk.R.id.ksad_reward_order_card
            android.view.View r3 = r4.findViewById(r3)
            android.view.ViewStub r3 = (android.view.ViewStub) r3
            if (r3 == 0) goto L24
            android.view.View r3 = r3.inflate()
            goto L2a
        L24:
            int r3 = com.kwad.sdk.R.id.ksad_reward_order_root
            android.view.View r3 = r4.findViewById(r3)
        L2a:
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.e r4 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.e
            com.kwad.components.ad.reward.presenter.d$1 r0 = new com.kwad.components.ad.reward.presenter.d$1
            r0.<init>(r1, r2)
            r4.<init>(r3, r0)
            r1.a(r4)
            return
        L3a:
            int r2 = com.kwad.sdk.core.response.b.a.bM(r3)
            r3 = 1
            if (r2 != r3) goto L60
            int r2 = com.kwad.sdk.R.id.ksad_reward_jinniu_card
            android.view.View r2 = r4.findViewById(r2)
            android.view.ViewStub r2 = (android.view.ViewStub) r2
            if (r2 == 0) goto L50
            android.view.View r2 = r2.inflate()
            goto L56
        L50:
            int r2 = com.kwad.sdk.R.id.ksad_reward_jinniu_root
            android.view.View r2 = r4.findViewById(r2)
        L56:
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.d r3 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.d
            r3.<init>(r2)
            r1.a(r3)
        L60:
            return
    }
}
