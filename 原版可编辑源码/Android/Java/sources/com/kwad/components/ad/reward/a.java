package com.kwad.components.ad.reward;

import android.content.Context;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.g {
    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.g.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final void loadRewardVideoAd(KsScene ksScene, KsLoadManager.RewardVideoAdListener rewardVideoAdListener) {
        e.loadRewardVideoAd(ksScene, rewardVideoAdListener);
    }

    @Override
    public final void notifyRewardVerify() {
        c.ft().notifyRewardVerify();
    }
}
