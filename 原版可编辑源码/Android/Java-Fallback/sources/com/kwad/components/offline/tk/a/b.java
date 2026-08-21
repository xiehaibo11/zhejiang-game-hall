package com.kwad.components.offline.tk.a;

public final class b implements com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoBridgeHandler {
    private final com.kwad.sdk.core.webview.c.a ZL;

    public b(com.kwad.sdk.core.webview.c.a r1) {
            r0 = this;
            r0.<init>()
            com.kwad.sdk.utils.ao.checkNotNull(r1)
            r0.ZL = r1
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            com.kwad.sdk.core.webview.c.a r0 = r1.ZL
            java.lang.String r0 = r0.getKey()
            return r0
    }

    @Override
    public final void handleJsCall(java.lang.String r3, com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction r4) {
            r2 = this;
            com.kwad.sdk.core.webview.c.a r0 = r2.ZL
            com.kwad.components.offline.tk.a.a r1 = new com.kwad.components.offline.tk.a.a
            r1.<init>(r4)
            r0.a(r3, r1)
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.sdk.core.webview.c.a r0 = r1.ZL
            r0.onDestroy()
            return
    }
}
