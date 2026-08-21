package com.kwad.components.core.webview.jshandler;

public final class af implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.jshandler.af.a Vg;

    public interface a {
        void a(com.kwad.components.core.webview.a.b r1);
    }

    public af(com.kwad.components.core.webview.jshandler.af.a r1) {
            r0 = this;
            r0.<init>()
            r0.Vg = r1
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.components.core.webview.a.b r0 = new com.kwad.components.core.webview.a.b
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L17
            r1.<init>(r3)     // Catch: java.lang.Exception -> L17
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L17
            com.kwad.components.core.webview.jshandler.af$a r3 = r2.Vg     // Catch: java.lang.Exception -> L17
            if (r3 == 0) goto L16
            com.kwad.components.core.webview.jshandler.af$a r3 = r2.Vg     // Catch: java.lang.Exception -> L17
            r3.a(r0)     // Catch: java.lang.Exception -> L17
        L16:
            return
        L17:
            r3 = move-exception
            r0 = -1
            java.lang.String r1 = ""
            r4.onError(r0, r1)
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "openNewPage"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Vg = r0
            return
    }
}
