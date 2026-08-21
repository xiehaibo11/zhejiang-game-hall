package com.kwad.sdk.core.webview.d;

public final class b implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c aza;


    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public java.lang.String method;
        public java.lang.String params;
        public java.lang.String url;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.sdk.core.webview.d.b r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.aza
            return r0
    }

    private void a(com.kwad.sdk.core.webview.d.b.a r3) {
            r2 = this;
            com.kwad.sdk.core.webview.request.b r0 = new com.kwad.sdk.core.webview.request.b
            r0.<init>()
            com.kwad.sdk.core.webview.d.b$1 r1 = new com.kwad.sdk.core.webview.d.b$1
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            r2.aza = r4
            com.kwad.sdk.core.webview.d.b$a r4 = new com.kwad.sdk.core.webview.d.b$a
            r4.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L13
            r0.<init>(r3)     // Catch: org.json.JSONException -> L13
            r4.parseJson(r0)     // Catch: org.json.JSONException -> L13
            r2.a(r4)     // Catch: org.json.JSONException -> L13
            return
        L13:
            r3 = move-exception
            com.kwad.sdk.core.webview.c.c r4 = r2.aza
            if (r4 == 0) goto L1e
            r0 = -1
            java.lang.String r1 = "data parse json error."
            r4.onError(r0, r1)
        L1e:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "requestData"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.aza = r0
            return
    }
}
