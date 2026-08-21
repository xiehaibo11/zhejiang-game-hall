package com.kwad.components.offline.tk.a;

public final class d implements com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoTKBridgeHandler {
    private final com.kwad.sdk.core.webview.c.g ZP;

    d(com.kwad.sdk.core.webview.c.g r1) {
            r0 = this;
            r0.<init>()
            r0.ZP = r1
            return
    }

    @Override
    public final void callTKBridge(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.g r0 = r1.ZP
            if (r0 == 0) goto L7
            r0.callTKBridge(r2)
        L7:
            return
    }
}
