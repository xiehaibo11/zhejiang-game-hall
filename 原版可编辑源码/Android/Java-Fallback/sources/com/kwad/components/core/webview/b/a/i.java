package com.kwad.components.core.webview.b.a;

public final class i implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.a.i.a WA;

    public interface a {
        void a(com.kwad.sdk.core.webview.d.b.a r1);
    }

    public i(com.kwad.components.core.webview.b.a.i.a r1) {
            r0 = this;
            r0.<init>()
            r0.WA = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.sdk.core.webview.d.b.a r3 = new com.kwad.sdk.core.webview.d.b.a
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le
            r0.<init>(r2)     // Catch: org.json.JSONException -> Le
            r3.parseJson(r0)     // Catch: org.json.JSONException -> Le
            goto L12
        Le:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L12:
            com.kwad.components.core.webview.b.a.i$a r2 = r1.WA
            if (r2 == 0) goto L19
            r2.a(r3)
        L19:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "notifyClickAd"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
