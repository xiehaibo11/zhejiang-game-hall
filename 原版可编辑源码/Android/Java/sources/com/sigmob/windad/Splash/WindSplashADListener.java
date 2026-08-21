package com.sigmob.windad.Splash;

import com.sigmob.windad.WindAdError;

public interface WindSplashADListener {
    void onSplashAdClick(String str);

    void onSplashAdClose(String str);

    void onSplashAdLoadFail(WindAdError windAdError, String str);

    void onSplashAdLoadSuccess(String str);

    void onSplashAdShow(String str);

    void onSplashAdShowError(WindAdError windAdError, String str);

    void onSplashAdSkip(String str);
}
