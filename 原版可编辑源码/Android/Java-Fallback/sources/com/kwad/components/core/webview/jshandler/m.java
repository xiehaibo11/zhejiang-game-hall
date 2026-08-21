package com.kwad.components.core.webview.jshandler;

public class m implements com.kwad.sdk.core.webview.c.a {


    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    protected void a(com.kwad.components.core.webview.b.b.x r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.b.x r3 = new com.kwad.components.core.webview.b.b.x
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le
            r0.<init>(r2)     // Catch: org.json.JSONException -> Le
            r3.parseJson(r0)     // Catch: org.json.JSONException -> Le
            goto L12
        Le:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L12:
            com.kwad.components.core.webview.jshandler.m$1 r2 = new com.kwad.components.core.webview.jshandler.m$1
            r2.<init>(r1, r3)
            com.kwad.sdk.utils.bj.runOnUiThread(r2)
            return
    }

    protected void b(com.kwad.components.core.webview.b.b.x r1) {
            r0 = this;
            return
    }

    protected void c(com.kwad.components.core.webview.b.b.x r1) {
            r0 = this;
            return
    }

    protected void d(com.kwad.components.core.webview.b.b.x r1) {
            r0 = this;
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "updateVideoPlayStatus"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
