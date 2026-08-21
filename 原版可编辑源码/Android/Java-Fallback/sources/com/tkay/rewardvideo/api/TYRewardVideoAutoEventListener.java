package com.tkay.rewardvideo.api;

public abstract class TYRewardVideoAutoEventListener {
    public TYRewardVideoAutoEventListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onAgainReward(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            return
    }

    public void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2) {
            r0 = this;
            return
    }

    public void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3) {
            r0 = this;
            return
    }

    public abstract void onReward(com.tkay.core.api.TYAdInfo r1);

    public void onRewardedVideoAdAgainPlayClicked(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            return
    }

    public void onRewardedVideoAdAgainPlayEnd(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            return
    }

    public void onRewardedVideoAdAgainPlayFailed(com.tkay.core.api.AdError r1, com.tkay.core.api.TYAdInfo r2) {
            r0 = this;
            return
    }

    public void onRewardedVideoAdAgainPlayStart(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            return
    }

    public abstract void onRewardedVideoAdClosed(com.tkay.core.api.TYAdInfo r1);

    public abstract void onRewardedVideoAdPlayClicked(com.tkay.core.api.TYAdInfo r1);

    public abstract void onRewardedVideoAdPlayEnd(com.tkay.core.api.TYAdInfo r1);

    public abstract void onRewardedVideoAdPlayFailed(com.tkay.core.api.AdError r1, com.tkay.core.api.TYAdInfo r2);

    public abstract void onRewardedVideoAdPlayStart(com.tkay.core.api.TYAdInfo r1);
}
