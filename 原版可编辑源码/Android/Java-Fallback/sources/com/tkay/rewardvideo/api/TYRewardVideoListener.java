package com.tkay.rewardvideo.api;

public interface TYRewardVideoListener {
    void onReward(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdClosed(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdFailed(com.tkay.core.api.AdError r1);

    void onRewardedVideoAdLoaded();

    void onRewardedVideoAdPlayClicked(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdPlayEnd(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdPlayFailed(com.tkay.core.api.AdError r1, com.tkay.core.api.TYAdInfo r2);

    void onRewardedVideoAdPlayStart(com.tkay.core.api.TYAdInfo r1);
}
