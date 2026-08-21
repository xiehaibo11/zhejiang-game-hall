package com.kwad.components.core.webview.b.a;

public final class t implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.a.t.a WH;

    public interface a {
        void b(com.kwad.components.core.webview.b.b.t r1);
    }

    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.core.webview.b.a.t.a r1) {
            r0 = this;
            r0.WH = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.a.t$a r3 = r1.WH
            if (r3 == 0) goto L24
            com.kwad.components.core.webview.b.b.t r3 = new com.kwad.components.core.webview.b.b.t
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L17 org.json.JSONException -> L19
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L17 org.json.JSONException -> L19
            r3.parseJson(r0)     // Catch: java.lang.Throwable -> L17 org.json.JSONException -> L19
        L11:
            com.kwad.components.core.webview.b.a.t$a r2 = r1.WH
            r2.b(r3)
            return
        L17:
            r2 = move-exception
            goto L1e
        L19:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L17
            goto L11
        L1e:
            com.kwad.components.core.webview.b.a.t$a r0 = r1.WH
            r0.b(r3)
            throw r2
        L24:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "skipVideo"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.WH = r0
            return
    }
}
