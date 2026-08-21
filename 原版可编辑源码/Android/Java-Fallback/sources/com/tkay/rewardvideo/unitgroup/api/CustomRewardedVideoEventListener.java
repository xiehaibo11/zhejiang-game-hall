package com.tkay.rewardvideo.unitgroup.api;

public interface CustomRewardedVideoEventListener {
    void onAgainReward();

    void onDeeplinkCallback(boolean r1);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYNetworkConfirmInfo r2);

    void onReward();

    void onRewardedVideoAdAgainPlayClicked();

    void onRewardedVideoAdAgainPlayEnd();

    void onRewardedVideoAdAgainPlayFailed(java.lang.String r1, java.lang.String r2);

    void onRewardedVideoAdAgainPlayStart();

    void onRewardedVideoAdClosed();

    void onRewardedVideoAdPlayClicked();

    void onRewardedVideoAdPlayEnd();

    void onRewardedVideoAdPlayFailed(java.lang.String r1, java.lang.String r2);

    void onRewardedVideoAdPlayStart();
}
