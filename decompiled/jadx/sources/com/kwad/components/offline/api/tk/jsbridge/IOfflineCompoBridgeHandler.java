package com.kwad.components.offline.api.tk.jsbridge;

/* JADX INFO: loaded from: classes2.dex */
public interface IOfflineCompoBridgeHandler {
    String getKey();

    void handleJsCall(String str, IOfflineCompoCallBackFunction iOfflineCompoCallBackFunction);

    void onDestroy();
}
