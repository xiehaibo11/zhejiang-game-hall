package com.tkay.rewardvideo.api;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

public abstract class TYRewardVideoAutoEventListener {
    public void onAgainReward(TYAdInfo tYAdInfo) {
    }

    public void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z) {
    }

    public void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
    }

    public abstract void onReward(TYAdInfo tYAdInfo);

    public void onRewardedVideoAdAgainPlayClicked(TYAdInfo tYAdInfo) {
    }

    public void onRewardedVideoAdAgainPlayEnd(TYAdInfo tYAdInfo) {
    }

    public void onRewardedVideoAdAgainPlayFailed(AdError adError, TYAdInfo tYAdInfo) {
    }

    public void onRewardedVideoAdAgainPlayStart(TYAdInfo tYAdInfo) {
    }

    public abstract void onRewardedVideoAdClosed(TYAdInfo tYAdInfo);

    public abstract void onRewardedVideoAdPlayClicked(TYAdInfo tYAdInfo);

    public abstract void onRewardedVideoAdPlayEnd(TYAdInfo tYAdInfo);

    public abstract void onRewardedVideoAdPlayFailed(AdError adError, TYAdInfo tYAdInfo);

    public abstract void onRewardedVideoAdPlayStart(TYAdInfo tYAdInfo);
}
