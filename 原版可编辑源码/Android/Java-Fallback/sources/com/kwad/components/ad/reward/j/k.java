package com.kwad.components.ad.reward.j;

public final class k implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.ad.reward.j.k.a xB;

    public interface a {
        void d(com.kwad.components.core.webview.b.b.q r1);
    }

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.ad.reward.j.k.a r1) {
            r0 = this;
            r0.xB = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.ad.reward.j.k$a r3 = r1.xB
            if (r3 == 0) goto L1b
            com.kwad.components.core.webview.b.b.q r3 = new com.kwad.components.core.webview.b.b.q
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r0.<init>(r2)     // Catch: org.json.JSONException -> L17
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L17
            com.kwad.components.ad.reward.j.k$a r2 = r1.xB     // Catch: org.json.JSONException -> L17
            r2.d(r3)     // Catch: org.json.JSONException -> L17
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
        L1b:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "showPlayEnd"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.xB = r0
            return
    }
}
