package com.kwad.sdk.api.proxy.app;

public class DownloadService extends com.kwad.sdk.api.proxy.BaseProxyService {
    public DownloadService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.kwad.sdk.api.proxy.IServiceProxy getDelegate(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.Class<com.kwad.sdk.api.proxy.app.DownloadService> r1 = com.kwad.sdk.api.proxy.app.DownloadService.class
            com.kwad.sdk.api.proxy.IComponentProxy r3 = r0.newComponentProxy(r3, r1, r2)
            com.kwad.sdk.api.proxy.IServiceProxy r3 = (com.kwad.sdk.api.proxy.IServiceProxy) r3
            return r3
    }
}
