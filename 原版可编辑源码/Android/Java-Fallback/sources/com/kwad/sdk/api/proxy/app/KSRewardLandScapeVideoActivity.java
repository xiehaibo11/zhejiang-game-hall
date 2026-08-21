package com.kwad.sdk.api.proxy.app;

public class KSRewardLandScapeVideoActivity extends com.kwad.sdk.api.proxy.BaseProxyActivity {
    public KSRewardLandScapeVideoActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.kwad.sdk.api.proxy.IActivityProxy getDelegate(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.Class<com.kwad.sdk.api.proxy.app.KSRewardLandScapeVideoActivity> r1 = com.kwad.sdk.api.proxy.app.KSRewardLandScapeVideoActivity.class
            com.kwad.sdk.api.proxy.IComponentProxy r3 = r0.newComponentProxy(r3, r1, r2)
            com.kwad.sdk.api.proxy.IActivityProxy r3 = (com.kwad.sdk.api.proxy.IActivityProxy) r3
            return r3
    }
}
