package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public abstract class AbstractKsDrawAd implements com.kwad.sdk.api.KsDrawAd {
    public AbstractKsDrawAd() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.view.View getDrawView(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            android.view.View r1 = r0.getDrawView2(r1)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected abstract android.view.View getDrawView2(android.content.Context r1);
}
