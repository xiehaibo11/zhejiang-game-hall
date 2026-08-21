package com.sigmob.windad.Splash;

public interface WindSplashADListener {
    void onSplashAdClick(java.lang.String r1);

    void onSplashAdClose(java.lang.String r1);

    void onSplashAdLoadFail(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onSplashAdLoadSuccess(java.lang.String r1);

    void onSplashAdShow(java.lang.String r1);

    void onSplashAdShowError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

    void onSplashAdSkip(java.lang.String r1);
}
