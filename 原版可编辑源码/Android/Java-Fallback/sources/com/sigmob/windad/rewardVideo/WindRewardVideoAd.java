package com.sigmob.windad.rewardVideo;

public class WindRewardVideoAd extends com.sigmob.sdk.base.j implements com.sigmob.sdk.rewardVideoAd.f, com.sigmob.sdk.rewardVideoAd.g {
    protected com.sigmob.windad.rewardVideo.WindRewardVideoAdListener b;

    public WindRewardVideoAd(com.sigmob.windad.rewardVideo.WindRewardAdRequest r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r1.setAdLoadListener(r1)
            return
    }

    @Override
    public boolean loadAd() {
            r1 = this;
            boolean r0 = super.loadAd()
            return r0
    }

    @Override
    public boolean loadAd(java.lang.String r1) {
            r0 = this;
            boolean r1 = super.loadAd(r1)
            return r1
    }

    @Override
    public void onVideoAdClicked(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdClicked(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdClosed(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdClosed(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdLoadError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdLoadError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoAdLoadSuccess(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdLoadSuccess(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayComplete(com.sigmob.windad.rewardVideo.WindRewardInfo r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdRewarded(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayEnd(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdPlayEnd(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdPlayError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayStart(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdPlayStart(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPreLoadFail(com.sigmob.windad.WindAdError r1, java.lang.String r2) {
            r0 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r1 = r0.b
            if (r1 == 0) goto L7
            r1.onRewardAdPreLoadFail(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPreLoadSuccess(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRewardAdPreLoadSuccess(r2)
        L7:
            return
    }

    public void setWindRewardVideoAdListener(com.sigmob.windad.rewardVideo.WindRewardVideoAdListener r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public boolean show(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            boolean r1 = super.show(r1, r0)
            return r1
    }
}
