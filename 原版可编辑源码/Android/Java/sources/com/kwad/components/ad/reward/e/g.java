package com.kwad.components.ad.reward.e;

import com.kwad.sdk.api.KsRewardVideoAd;

public class g implements KsRewardVideoAd.RewardAdInteractionListener {
    private KsRewardVideoAd.RewardAdInteractionListener rB;

    public final void b(KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener) {
        this.rB = rewardAdInteractionListener;
    }

    @Override
    public void onAdClicked() {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onAdClicked();
        }
    }

    @Override
    public void onExtraRewardVerify(int i) {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onExtraRewardVerify(i);
        }
    }

    @Override
    public void onPageDismiss() {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onPageDismiss();
        }
    }

    @Override
    public void onRewardStepVerify(int i, int i2) {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onRewardStepVerify(i, i2);
        }
    }

    @Override
    public void onRewardVerify() {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onRewardVerify();
        }
    }

    @Override
    public void onVideoPlayEnd() {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onVideoPlayEnd();
        }
    }

    @Override
    public void onVideoPlayError(int i, int i2) {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onVideoPlayError(i, i2);
        }
    }

    @Override
    public void onVideoPlayStart() {
        try {
            if (this.rB != null) {
                this.rB.onVideoPlayStart();
            }
        } catch (Throwable th) {
            com.kwad.components.core.d.a.b(th);
        }
    }

    @Override
    public void onVideoSkipToEnd(long j) {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = this.rB;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onVideoSkipToEnd(j);
        }
    }
}
