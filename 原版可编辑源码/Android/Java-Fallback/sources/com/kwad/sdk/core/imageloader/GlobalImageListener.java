package com.kwad.sdk.core.imageloader;

public class GlobalImageListener implements com.kwad.sdk.core.imageloader.OnRenderResultListener<com.kwad.sdk.core.response.model.AdTemplate> {
    public GlobalImageListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onRenderResult(boolean r2, com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            if (r2 != 0) goto Ld
            java.lang.Class<com.kwad.sdk.service.a.b> r0 = com.kwad.sdk.service.a.b.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.b r0 = (com.kwad.sdk.service.a.b) r0
            r0.C(r4, r5)
        Ld:
            if (r2 != 0) goto L1a
            java.lang.Class<com.kwad.sdk.service.a.b> r2 = com.kwad.sdk.service.a.b.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.b r2 = (com.kwad.sdk.service.a.b) r2
            r2.ab(r3)
        L1a:
            return
    }

    @Override
    public void onRenderResult(boolean r1, com.kwad.sdk.core.response.model.AdTemplate r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            r0.onRenderResult(r1, r2, r3, r4)
            return
    }
}
