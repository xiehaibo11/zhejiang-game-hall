package com.kwad.components.core.webview.jshandler;

public final class d implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String data;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.components.core.webview.b.b.j r0 = new com.kwad.components.core.webview.b.b.j
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld
            r1.<init>(r3)     // Catch: java.lang.Exception -> Ld
            r0.parseJson(r1)     // Catch: java.lang.Exception -> Ld
        Ld:
            com.kwad.components.core.webview.jshandler.d$a r3 = new com.kwad.components.core.webview.jshandler.d$a
            r3.<init>()
            java.lang.String r1 = r0.data
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1d
            java.lang.String r0 = ""
            goto L23
        L1d:
            java.lang.String r0 = r0.data
            java.lang.String r0 = com.kwad.sdk.utils.ad.bp(r0)
        L23:
            r3.data = r0
            r4.a(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "md5"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
