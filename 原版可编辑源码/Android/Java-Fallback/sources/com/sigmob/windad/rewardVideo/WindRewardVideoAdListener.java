package com.sigmob.windad.rewardVideo;

public interface WindRewardVideoAdListener {
    void onRewardAdClicked(java.lang.String r1);

    void onRewardAdClosed(java.lang.String r1);

    void onRewardAdLoadError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onRewardAdLoadSuccess(java.lang.String r1);

    void onRewardAdPlayEnd(java.lang.String r1);

    void onRewardAdPlayError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onRewardAdPlayStart(java.lang.String r1);

    void onRewardAdPreLoadFail(java.lang.String r1);

    void onRewardAdPreLoadSuccess(java.lang.String r1);

    void onRewardAdRewarded(com.sigmob.windad.rewardVideo.WindRewardInfo r1, java.lang.String r2);
}
