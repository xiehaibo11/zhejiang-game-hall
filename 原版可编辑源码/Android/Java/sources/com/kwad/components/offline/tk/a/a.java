package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction;

public final class a implements com.kwad.sdk.core.webview.c.c {
    private final IOfflineCompoCallBackFunction ZK;

    public a(IOfflineCompoCallBackFunction iOfflineCompoCallBackFunction) {
        this.ZK = iOfflineCompoCallBackFunction;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar) {
        String string = new com.kwad.sdk.core.webview.c.f(bVar).toJson().toString();
        IOfflineCompoCallBackFunction iOfflineCompoCallBackFunction = this.ZK;
        if (iOfflineCompoCallBackFunction != null) {
            iOfflineCompoCallBackFunction.onSuccess(string);
        }
    }

    @Override
    public final void onError(int i, String str) {
        String string = new com.kwad.sdk.core.webview.c.e(i, str).toJson().toString();
        IOfflineCompoCallBackFunction iOfflineCompoCallBackFunction = this.ZK;
        if (iOfflineCompoCallBackFunction != null) {
            iOfflineCompoCallBackFunction.onError(string);
        }
    }
}
