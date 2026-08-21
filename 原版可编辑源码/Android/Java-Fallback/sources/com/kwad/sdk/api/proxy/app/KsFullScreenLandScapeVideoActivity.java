package com.kwad.sdk.api.proxy.app;

public class KsFullScreenLandScapeVideoActivity extends com.kwad.sdk.api.proxy.BaseProxyActivity {
    public KsFullScreenLandScapeVideoActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.kwad.sdk.api.proxy.IActivityProxy getDelegate(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity> r1 = com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity.class
            com.kwad.sdk.api.proxy.IComponentProxy r3 = r0.newComponentProxy(r3, r1, r2)
            com.kwad.sdk.api.proxy.IActivityProxy r3 = (com.kwad.sdk.api.proxy.IActivityProxy) r3
            return r3
    }
}
