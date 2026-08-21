package com.kwad.components.ad.reward.c;

public final class f implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.ad.reward.c.d qp;


    public f(com.kwad.components.ad.reward.c.d r1) {
            r0 = this;
            r0.<init>()
            r0.qp = r1
            return
    }

    static com.kwad.components.ad.reward.c.d a(com.kwad.components.ad.reward.c.f r0) {
            com.kwad.components.ad.reward.c.d r0 = r0.qp
            return r0
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.ad.reward.c.b r3 = new com.kwad.components.ad.reward.c.b     // Catch: org.json.JSONException -> L16
            r3.<init>()     // Catch: org.json.JSONException -> L16
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            r0.<init>(r2)     // Catch: org.json.JSONException -> L16
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L16
            com.kwad.components.ad.reward.c.f$1 r2 = new com.kwad.components.ad.reward.c.f$1     // Catch: org.json.JSONException -> L16
            r2.<init>(r1, r3)     // Catch: org.json.JSONException -> L16
            com.kwad.sdk.utils.bj.runOnUiThread(r2)     // Catch: org.json.JSONException -> L16
            return
        L16:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "updateExtraReward"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.qp = r0
            return
    }
}
