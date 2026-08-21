package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public abstract class AbstrackKsSplashScreenAd implements com.kwad.sdk.api.KsSplashScreenAd {
    public AbstrackKsSplashScreenAd() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.view.View getView(android.content.Context r1, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r2) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            android.view.View r1 = r0.getView2(r1, r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public abstract android.view.View getView2(android.content.Context r1, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r2);
}
