package com.tkay.splashad.api;

public interface ITYSplashEyeAd {
    void destroy();

    int[] getSuggestedSize(android.content.Context r1);

    void onFinished();

    void setEyeAdContainer(android.view.ViewGroup r1);

    void show(android.content.Context r1, android.graphics.Rect r2, com.tkay.splashad.api.TYSplashEyeAdListener r3);
}
