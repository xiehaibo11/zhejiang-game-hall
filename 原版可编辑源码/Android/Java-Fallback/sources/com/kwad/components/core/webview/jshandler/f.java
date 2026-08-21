package com.kwad.components.core.webview.jshandler;

public final class f implements com.kwad.sdk.core.webview.c.a {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String aG(java.lang.String r3) {
            com.kwad.components.core.webview.jshandler.l$a r0 = new com.kwad.components.core.webview.jshandler.l$a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r1.<init>(r3)     // Catch: org.json.JSONException -> Ld
            r0.parseJson(r1)     // Catch: org.json.JSONException -> Ld
        Ld:
            java.lang.String r3 = r0.key
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r3 == 0) goto L18
            return r1
        L18:
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r0 = r0.key
            java.lang.String r2 = "ksadsdk_js_storage_cache_name"
            java.lang.String r3 = com.kwad.sdk.utils.y.b(r3, r2, r0, r1)
            return r3
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            java.lang.String r2 = aG(r2)
            com.kwad.components.core.webview.jshandler.l$a r0 = new com.kwad.components.core.webview.jshandler.l$a
            r0.<init>()
            r0.value = r2
            r3.a(r0)
            return
        L15:
            r2 = -1
            java.lang.String r0 = "data is empty"
            r3.onError(r2, r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getStorageItem"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
