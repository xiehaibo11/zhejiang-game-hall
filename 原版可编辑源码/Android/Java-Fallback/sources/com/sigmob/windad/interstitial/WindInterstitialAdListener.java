package com.sigmob.windad.interstitial;

public interface WindInterstitialAdListener {
    void onInterstitialAdClicked(java.lang.String r1);

    void onInterstitialAdClosed(java.lang.String r1);

    void onInterstitialAdLoadError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onInterstitialAdLoadSuccess(java.lang.String r1);

    void onInterstitialAdPlayEnd(java.lang.String r1);

    void onInterstitialAdPlayError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onInterstitialAdPlayStart(java.lang.String r1);

    void onInterstitialAdPreLoadFail(java.lang.String r1);

    void onInterstitialAdPreLoadSuccess(java.lang.String r1);
}
