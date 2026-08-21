package com.kwad.components.core.webview.b.a;

public class d implements com.kwad.sdk.core.webview.c.a {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public void a(com.kwad.components.core.webview.b.b.g r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.b.g r3 = new com.kwad.components.core.webview.b.b.g
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r0.<init>(r2)     // Catch: org.json.JSONException -> L11
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L11
            r1.a(r3)     // Catch: org.json.JSONException -> L11
            return
        L11:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "commonLog"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
