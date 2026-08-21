package com.kwad.components.ad.reward.j;

public final class d implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.ad.reward.j.d.a xu;

    public interface a {
        void a(com.kwad.components.core.webview.b.b.p r1);
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.ad.reward.j.d.a r1) {
            r0 = this;
            r0.xu = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.b.p r3 = new com.kwad.components.core.webview.b.b.p
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r0.<init>(r2)     // Catch: org.json.JSONException -> L17
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L17
            com.kwad.components.ad.reward.j.d$a r2 = r1.xu     // Catch: org.json.JSONException -> L17
            if (r2 == 0) goto L16
            com.kwad.components.ad.reward.j.d$a r2 = r1.xu     // Catch: org.json.JSONException -> L17
            r2.a(r3)     // Catch: org.json.JSONException -> L17
        L16:
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "clickCall"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.xu = r0
            return
    }
}
