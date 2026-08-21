package com.kwad.components.core.webview.b.a;

public final class a extends com.kwad.components.core.webview.b.a.v implements java.util.Observer {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public a(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            super.a(r1, r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdStatusInfo r1 = r1.mAdStatusInfo
            r0.b(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getTrackAdStatus"
            return r0
    }

    @Override
    public final void update(java.util.Observable r1, java.lang.Object r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r2 = (com.kwad.sdk.core.response.model.AdStatusInfo) r2
            if (r2 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }
}
