package com.kwad.sdk.api.core;

import android.content.Context;
import android.view.View;
import com.kwad.sdk.api.KsSplashScreenAd;
import com.kwad.sdk.api.loader.Wrapper;

@KsAdSdkDynamicApi
public abstract class AbstrackKsSplashScreenAd implements KsSplashScreenAd {
    @Override
    @KsAdSdkDynamicApi
    public View getView(Context context, KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener) {
        return getView2(Wrapper.wrapContextIfNeed(context), splashScreenAdInteractionListener);
    }

    @KsAdSdkDynamicApi
    public abstract View getView2(Context context, KsSplashScreenAd.SplashScreenAdInteractionListener splashScreenAdInteractionListener);
}
