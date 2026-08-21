package com.kwad.components.core.webview.jshandler;

public final class n implements com.kwad.sdk.core.webview.c.a {
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> TJ;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.components.core.webview.jshandler.n.b oQ;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int adStyle;
        public long creativeId;

        public a() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.creativeId = r0
                r0 = -1
                r2.adStyle = r0
                return
        }
    }

    public interface b {
        void y(com.kwad.sdk.core.response.model.AdTemplate r1);
    }

    public n(com.kwad.sdk.core.webview.b r1) {
            r0 = this;
            r0.<init>()
            r0.cE = r1
            return
    }

    public n(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1) {
            r0 = this;
            r0.<init>()
            r0.TJ = r1
            return
    }

    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> ru() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.TJ
            if (r0 == 0) goto L5
            return r0
        L5:
            com.kwad.sdk.core.webview.b r0 = r1.cE
            if (r0 == 0) goto Le
            java.util.List r0 = r0.DX()
            return r0
        Le:
            r0 = 0
            return r0
    }

    public final void a(com.kwad.components.core.webview.jshandler.n.b r1) {
            r0 = this;
            r0.oQ = r1
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.components.core.webview.jshandler.n$a r4 = new com.kwad.components.core.webview.jshandler.n$a     // Catch: org.json.JSONException -> L22
            r4.<init>()     // Catch: org.json.JSONException -> L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L22
            r0.<init>(r3)     // Catch: org.json.JSONException -> L22
            r4.parseJson(r0)     // Catch: org.json.JSONException -> L22
            long r0 = r4.creativeId     // Catch: org.json.JSONException -> L22
            int r3 = r4.adStyle     // Catch: org.json.JSONException -> L22
            java.util.List r4 = r2.ru()     // Catch: org.json.JSONException -> L22
            com.kwad.sdk.core.response.model.AdTemplate r3 = com.kwad.sdk.core.response.b.d.a(r4, r0, r3)     // Catch: org.json.JSONException -> L22
            com.kwad.components.core.webview.jshandler.n$b r4 = r2.oQ     // Catch: org.json.JSONException -> L22
            if (r4 == 0) goto L22
            com.kwad.components.core.webview.jshandler.n$b r4 = r2.oQ     // Catch: org.json.JSONException -> L22
            r4.y(r3)     // Catch: org.json.JSONException -> L22
        L22:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "adImpression"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
