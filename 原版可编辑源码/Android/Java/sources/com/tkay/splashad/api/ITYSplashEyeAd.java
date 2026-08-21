package com.tkay.splashad.api;

import android.content.Context;
import android.graphics.Rect;
import android.view.ViewGroup;

public interface ITYSplashEyeAd {
    void destroy();

    int[] getSuggestedSize(Context context);

    void onFinished();

    void setEyeAdContainer(ViewGroup viewGroup);

    void show(Context context, Rect rect, TYSplashEyeAdListener tYSplashEyeAdListener);
}
