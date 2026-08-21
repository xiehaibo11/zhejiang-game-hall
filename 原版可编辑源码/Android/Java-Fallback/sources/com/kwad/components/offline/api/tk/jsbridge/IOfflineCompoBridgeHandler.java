package com.kwad.components.offline.api.tk.jsbridge;

public interface IOfflineCompoBridgeHandler {
    java.lang.String getKey();

    void handleJsCall(java.lang.String r1, com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoCallBackFunction r2);

    void onDestroy();
}
