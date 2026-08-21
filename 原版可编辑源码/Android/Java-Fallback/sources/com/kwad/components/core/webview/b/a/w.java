package com.kwad.components.core.webview.b.a;

public final class w implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.a.w.a WN;


    public interface a {
        void a(com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r1);
    }

    public w(com.kwad.components.core.webview.b.a.w.a r1) {
            r0 = this;
            r0.<init>()
            r0.WN = r1
            return
    }

    static com.kwad.components.core.webview.b.a.w.a a(com.kwad.components.core.webview.b.a.w r0) {
            com.kwad.components.core.webview.b.a.w$a r0 = r0.WN
            return r0
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            java.lang.String r4 = "UpdateLiveCurrentShopInfoHandler"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = "handleJsCall: "
            r0.<init>(r1)     // Catch: java.lang.Exception -> L29
            r0.append(r3)     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L29
            com.kwad.sdk.core.e.c.d(r4, r0)     // Catch: java.lang.Exception -> L29
            com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r4 = new com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo     // Catch: java.lang.Exception -> L29
            r4.<init>()     // Catch: java.lang.Exception -> L29
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L29
            r0.<init>(r3)     // Catch: java.lang.Exception -> L29
            r4.parseJson(r0)     // Catch: java.lang.Exception -> L29
            com.kwad.components.core.webview.b.a.w$1 r3 = new com.kwad.components.core.webview.b.a.w$1     // Catch: java.lang.Exception -> L29
            r3.<init>(r2, r4)     // Catch: java.lang.Exception -> L29
            com.kwad.sdk.utils.bj.postOnUiThread(r3)     // Catch: java.lang.Exception -> L29
            return
        L29:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "updateLiveCurrentShopInfo"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
