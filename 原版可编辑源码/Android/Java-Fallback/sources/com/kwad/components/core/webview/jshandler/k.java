package com.kwad.components.core.webview.jshandler;

public final class k implements com.kwad.sdk.core.webview.c.a {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean aH(java.lang.String r2) {
            com.kwad.components.core.webview.jshandler.l$a r0 = new com.kwad.components.core.webview.jshandler.l$a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r1.<init>(r2)     // Catch: org.json.JSONException -> Ld
            r0.parseJson(r1)     // Catch: org.json.JSONException -> Ld
        Ld:
            java.lang.String r2 = r0.key
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L17
            r2 = 0
            return r2
        L17:
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r0 = r0.key
            java.lang.String r1 = "ksadsdk_js_storage_cache_name"
            com.kwad.sdk.utils.y.i(r2, r1, r0)
            r2 = 1
            return r2
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = -1
            if (r0 != 0) goto L18
            boolean r3 = aH(r3)
            if (r3 == 0) goto L12
            r3 = 0
            r4.a(r3)
            return
        L12:
            java.lang.String r3 = ""
            r4.onError(r1, r3)
            return
        L18:
            java.lang.String r3 = "data is empty"
            r4.onError(r1, r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "removeStorageItem"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
