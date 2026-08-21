package com.kwad.components.core.webview.b.a;

public final class s implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.a.s.a WG;

    public interface a {
        void a(com.kwad.components.core.webview.b.b.s r1);
    }

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.core.webview.b.a.s.a r1) {
            r0 = this;
            r0.WG = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.a.s$a r3 = r1.WG
            if (r3 == 0) goto L1b
            com.kwad.components.core.webview.b.b.s r3 = new com.kwad.components.core.webview.b.b.s
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r0.<init>(r2)     // Catch: org.json.JSONException -> L17
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L17
            com.kwad.components.core.webview.b.a.s$a r2 = r1.WG     // Catch: org.json.JSONException -> L17
            r2.a(r3)     // Catch: org.json.JSONException -> L17
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
            java.lang.String r0 = "showToast"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.WG = r0
            return
    }
}
