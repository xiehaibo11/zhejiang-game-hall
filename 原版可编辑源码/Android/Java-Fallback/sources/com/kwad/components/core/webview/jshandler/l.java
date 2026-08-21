package com.kwad.components.core.webview.jshandler;

public final class l implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String key;
        public java.lang.String value;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean aI(java.lang.String r3) {
            com.kwad.components.core.webview.jshandler.l$a r0 = new com.kwad.components.core.webview.jshandler.l$a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r1.<init>(r3)     // Catch: org.json.JSONException -> Ld
            r0.parseJson(r1)     // Catch: org.json.JSONException -> Ld
        Ld:
            java.lang.String r3 = r0.key
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L2d
            java.lang.String r3 = r0.value
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L1e
            goto L2d
        L1e:
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r1 = r0.key
            java.lang.String r0 = r0.value
            java.lang.String r2 = "ksadsdk_js_storage_cache_name"
            com.kwad.sdk.utils.y.a(r3, r2, r1, r0)
            r3 = 1
            return r3
        L2d:
            r3 = 0
            return r3
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = -1
            if (r0 != 0) goto L18
            boolean r3 = aI(r3)
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
            java.lang.String r0 = "setStorageItem"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
