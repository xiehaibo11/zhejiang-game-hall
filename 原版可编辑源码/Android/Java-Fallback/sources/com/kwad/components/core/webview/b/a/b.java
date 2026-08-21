package com.kwad.components.core.webview.b.a;

public final class b implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public b(com.kwad.sdk.core.webview.b r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>()
            r0.TL = r1
            r0.mAdTemplate = r2
            return
    }

    private void Z(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            r0 = 1
            r4.mIsForceJumpLandingPage = r0
            com.kwad.components.core.e.d.a$a r1 = new com.kwad.components.core.e.d.a$a
            com.kwad.sdk.core.webview.b r2 = r3.TL
            android.view.ViewGroup r2 = r2.MT
            android.content.Context r2 = r2.getContext()
            r1.<init>(r2)
            com.kwad.components.core.e.d.a$a r4 = r1.P(r4)
            com.kwad.components.core.e.d.a$a r4 = r4.ao(r0)
            r0 = 0
            com.kwad.components.core.e.d.a$a r4 = r4.ao(r0)
            com.kwad.components.core.e.d.a.a(r4)
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            java.lang.String r0 = "adTemplate"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c
            r1.<init>(r3)     // Catch: java.lang.Exception -> L2c
            boolean r3 = r1.has(r0)     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L22
            java.lang.String r3 = r1.getString(r0)     // Catch: java.lang.Exception -> L2c
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c
            r1.<init>(r3)     // Catch: java.lang.Exception -> L2c
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L2c
            r2.Z(r0)     // Catch: java.lang.Exception -> L2c
            goto L27
        L22:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate     // Catch: java.lang.Exception -> L2c
            r2.Z(r3)     // Catch: java.lang.Exception -> L2c
        L27:
            r3 = 0
            r4.a(r3)     // Catch: java.lang.Exception -> L2c
            return
        L2c:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "activityMiddlePageConvert"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
