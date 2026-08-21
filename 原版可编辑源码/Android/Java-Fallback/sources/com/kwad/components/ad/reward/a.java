package com.kwad.components.ad.reward;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.g {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.g> r0 = com.kwad.components.ad.b.g.class
            return r0
    }

    @Override
    public final void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public final void loadRewardVideoAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.RewardVideoAdListener r2) {
            r0 = this;
            com.kwad.components.ad.reward.e.loadRewardVideoAd(r1, r2)
            return
    }

    @Override
    public final void notifyRewardVerify() {
            r1 = this;
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            r0.notifyRewardVerify()
            return
    }
}
