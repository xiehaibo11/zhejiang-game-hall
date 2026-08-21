package com.kwad.components.offline.tk.a;

public final class a implements com.kwad.sdk.core.webview.c.c {
    private final com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction ZK;

    public a(com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction r1) {
            r0 = this;
            r0.<init>()
            r0.ZK = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.b r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.f r0 = new com.kwad.sdk.core.webview.c.f
            r0.<init>(r2)
            org.json.JSONObject r2 = r0.toJson()
            java.lang.String r2 = r2.toString()
            com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction r0 = r1.ZK
            if (r0 == 0) goto L14
            r0.onSuccess(r2)
        L14:
            return
    }

    @Override
    public final void onError(int r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.core.webview.c.e r0 = new com.kwad.sdk.core.webview.c.e
            r0.<init>(r2, r3)
            org.json.JSONObject r2 = r0.toJson()
            java.lang.String r2 = r2.toString()
            com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction r3 = r1.ZK
            if (r3 == 0) goto L14
            r3.onError(r2)
        L14:
            return
    }
}
