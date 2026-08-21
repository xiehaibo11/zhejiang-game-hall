package com.kwad.components.core.webview.b;

public final class a implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public a(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            r0 = -1
            if (r3 == 0) goto L21
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aK(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L16
            java.lang.String r3 = "landing page url is null"
            goto L23
        L16:
            com.kwad.components.core.webview.b.b.l r0 = new com.kwad.components.core.webview.b.b.l
            r0.<init>()
            r0.WZ = r3
            r4.a(r0)
            return
        L21:
            java.lang.String r3 = "adTemplate is null"
        L23:
            r4.onError(r0, r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getLandingPageInfo"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
