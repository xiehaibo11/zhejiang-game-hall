package com.tkay.rewardvideo.api;

import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;

/* JADX INFO: loaded from: classes4.dex */
public interface TYRewardVideoListener {
    void onReward(TYAdInfo tYAdInfo);

    void onRewardedVideoAdClosed(TYAdInfo tYAdInfo);

    void onRewardedVideoAdFailed(AdError adError);

    void onRewardedVideoAdLoaded();

    void onRewardedVideoAdPlayClicked(TYAdInfo tYAdInfo);

    void onRewardedVideoAdPlayEnd(TYAdInfo tYAdInfo);

    void onRewardedVideoAdPlayFailed(AdError adError, TYAdInfo tYAdInfo);

    void onRewardedVideoAdPlayStart(TYAdInfo tYAdInfo);
}
