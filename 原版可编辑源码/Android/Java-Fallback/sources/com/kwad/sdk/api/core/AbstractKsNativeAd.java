package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public abstract class AbstractKsNativeAd implements com.kwad.sdk.api.KsNativeAd {
    public AbstractKsNativeAd() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public abstract android.graphics.Bitmap getSdkLogo();

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.view.View getVideoView(android.content.Context r1, com.kwad.sdk.api.KsAdVideoPlayConfig r2) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            android.view.View r1 = r0.getVideoView2(r1, r2)
            return r1
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.view.View getVideoView(android.content.Context r1, boolean r2) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            android.view.View r1 = r0.getVideoView2(r1, r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected abstract android.view.View getVideoView2(android.content.Context r1, com.kwad.sdk.api.KsAdVideoPlayConfig r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected abstract android.view.View getVideoView2(android.content.Context r1, boolean r2);
}
