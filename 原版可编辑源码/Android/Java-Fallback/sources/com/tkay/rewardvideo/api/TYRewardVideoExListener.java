package com.tkay.rewardvideo.api;

public interface TYRewardVideoExListener extends com.tkay.rewardvideo.api.TYRewardVideoListener {
    void onAgainReward(com.tkay.core.api.TYAdInfo r1);

    void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3);

    void onRewardedVideoAdAgainPlayClicked(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdAgainPlayEnd(com.tkay.core.api.TYAdInfo r1);

    void onRewardedVideoAdAgainPlayFailed(com.tkay.core.api.AdError r1, com.tkay.core.api.TYAdInfo r2);

    void onRewardedVideoAdAgainPlayStart(com.tkay.core.api.TYAdInfo r1);
}
