package com.kwad.components.ad.b;

import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public interface g extends com.kwad.sdk.components.a {
    void loadRewardVideoAd(KsScene ksScene, KsLoadManager.RewardVideoAdListener rewardVideoAdListener);

    void notifyRewardVerify();
}
