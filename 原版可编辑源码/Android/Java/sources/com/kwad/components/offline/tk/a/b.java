package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoBridgeHandler;
import com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction;
import com.kwad.sdk.utils.ao;

public final class b implements IOfflineCompoBridgeHandler {
    private final com.kwad.sdk.core.webview.c.a ZL;

    public b(com.kwad.sdk.core.webview.c.a aVar) {
        ao.checkNotNull(aVar);
        this.ZL = aVar;
    }

    @Override
    public final String getKey() {
        return this.ZL.getKey();
    }

    @Override
    public final void handleJsCall(String str, IOfflineCompoCallBackFunction iOfflineCompoCallBackFunction) {
        this.ZL.a(str, new a(iOfflineCompoCallBackFunction));
    }

    @Override
    public final void onDestroy() {
        this.ZL.onDestroy();
    }
}
