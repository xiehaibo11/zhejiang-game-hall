package com.sigmob.windad.interstitial;

public class WindInterstitialAd extends com.sigmob.sdk.base.j implements com.sigmob.sdk.rewardVideoAd.f, com.sigmob.sdk.rewardVideoAd.g {
    protected com.sigmob.windad.interstitial.WindInterstitialAdListener b;

    public WindInterstitialAd(com.sigmob.windad.interstitial.WindInterstitialAdRequest r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public WindInterstitialAd(com.sigmob.windad.interstitial.WindInterstitialAdRequest r1, boolean r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.setAdLoadListener(r0)
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
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdClicked(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdClosed(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdClosed(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdLoadError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdLoadError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoAdLoadSuccess(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdLoadSuccess(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayComplete(com.sigmob.windad.rewardVideo.WindRewardInfo r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void onVideoAdPlayEnd(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdPlayEnd(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdPlayError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoAdPlayStart(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdPlayStart(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPreLoadFail(com.sigmob.windad.WindAdError r1, java.lang.String r2) {
            r0 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r1 = r0.b
            if (r1 == 0) goto L7
            r1.onInterstitialAdPreLoadFail(r2)
        L7:
            return
    }

    @Override
    public void onVideoAdPreLoadSuccess(java.lang.String r2) {
            r1 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onInterstitialAdPreLoadSuccess(r2)
        L7:
            return
    }

    public void setWindInterstitialAdListener(com.sigmob.windad.interstitial.WindInterstitialAdListener r1) {
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
