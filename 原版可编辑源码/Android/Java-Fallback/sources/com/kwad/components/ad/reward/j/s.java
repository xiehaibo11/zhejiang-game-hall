package com.kwad.components.ad.reward.j;

public final class s implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private com.kwad.components.ad.reward.j xG;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public boolean xH;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public s(android.content.Context r1, com.kwad.components.ad.reward.j r2) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.mAdTemplate = r1
            r0.xG = r2
            return
    }

    private void a(com.kwad.components.ad.reward.j.s.a r2) {
            r1 = this;
            boolean r2 = r2.xH
            if (r2 == 0) goto La
            com.kwad.components.ad.reward.j r2 = r1.xG
            com.kwad.components.ad.reward.presenter.e.s(r2)
            return
        La:
            android.content.Context r2 = r1.mContext
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r2, r0)
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L11
            r2.<init>(r1)     // Catch: java.lang.Exception -> L11
            com.kwad.components.ad.reward.j.s$a r1 = new com.kwad.components.ad.reward.j.s$a     // Catch: java.lang.Exception -> L11
            r1.<init>()     // Catch: java.lang.Exception -> L11
            r1.parseJson(r2)     // Catch: java.lang.Exception -> L11
            r0.a(r1)     // Catch: java.lang.Exception -> L11
            return
        L11:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "showLandingPage"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.xG = r0
            r1.mContext = r0
            r1.mAdTemplate = r0
            return
    }
}
