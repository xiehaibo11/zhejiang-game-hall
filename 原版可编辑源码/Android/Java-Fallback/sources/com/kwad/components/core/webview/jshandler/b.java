package com.kwad.components.core.webview.jshandler;

public final class b implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String data;

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

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            com.kwad.components.core.webview.b.b.j r0 = new com.kwad.components.core.webview.b.b.j
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld
            r1.<init>(r4)     // Catch: java.lang.Exception -> Ld
            r0.parseJson(r1)     // Catch: java.lang.Exception -> Ld
        Ld:
            com.kwad.components.core.webview.jshandler.b$a r4 = new com.kwad.components.core.webview.jshandler.b$a
            r4.<init>()
            java.lang.String r1 = r0.data
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1f
            java.lang.String r0 = ""
            r4.data = r0
            goto L36
        L1f:
            java.lang.String r1 = new java.lang.String
            com.kwad.sdk.core.a.c$b r2 = com.kwad.sdk.core.a.c.AJ()
            java.lang.String r0 = r0.data
            byte[] r0 = r0.getBytes()
            byte[] r0 = r2.encode(r0)
            java.nio.charset.Charset r2 = com.kwad.sdk.crash.utils.a.UTF_8
            r1.<init>(r0, r2)
            r4.data = r1
        L36:
            r5.a(r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "base64"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
