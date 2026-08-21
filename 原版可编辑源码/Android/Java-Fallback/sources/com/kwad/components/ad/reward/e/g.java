package com.kwad.components.ad.reward.e;

public class g implements com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener {
    private com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener rB;

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void b(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r1) {
            r0 = this;
            r0.rB = r1
            return
    }

    @Override
    public void onAdClicked() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onAdClicked()
        L7:
            return
    }

    @Override
    public void onExtraRewardVerify(int r2) {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onExtraRewardVerify(r2)
        L7:
            return
    }

    @Override
    public void onPageDismiss() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onPageDismiss()
        L7:
            return
    }

    @Override
    public void onRewardStepVerify(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onRewardStepVerify(r2, r3)
        L7:
            return
    }

    @Override
    public void onRewardVerify() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onRewardVerify()
        L7:
            return
    }

    @Override
    public void onVideoPlayEnd() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onVideoPlayEnd()
        L7:
            return
    }

    @Override
    public void onVideoPlayError(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onVideoPlayError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoPlayStart() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB     // Catch: java.lang.Throwable -> La
            r0.onVideoPlayStart()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r0 = move-exception
            com.kwad.components.core.d.a.b(r0)
            return
    }

    @Override
    public void onVideoSkipToEnd(long r2) {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = r1.rB
            if (r0 == 0) goto L7
            r0.onVideoSkipToEnd(r2)
        L7:
            return
    }
}
