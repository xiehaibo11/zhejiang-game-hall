package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoTKBridgeHandler;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements IOfflineCompoTKBridgeHandler {
    private final com.kwad.sdk.core.webview.c.g ZP;

    d(com.kwad.sdk.core.webview.c.g gVar) {
        this.ZP = gVar;
    }

    @Override // com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoTKBridgeHandler
    public final void callTKBridge(String str) {
        com.kwad.sdk.core.webview.c.g gVar = this.ZP;
        if (gVar != null) {
            gVar.callTKBridge(str);
        }
    }
}
