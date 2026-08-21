package com.kwad.components.offline.api.tk;

public interface IOfflineCompoTachikomaView {
    java.lang.Object execute(java.lang.String r1);

    void execute(java.lang.String r1, java.lang.String r2, com.kwad.components.offline.api.tk.IOfflineTKRenderListener r3);

    int getUniqId();

    android.view.View getView();

    void onDestroy();

    void registerHostActionHandler(com.kwad.components.offline.api.tk.IOfflineHostActionHandler r1);

    void registerJsBridge(com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoBridgeHandler r1);

    void registerTKBridge(com.kwad.components.offline.api.tk.jsbridge.IOfflineCompoTKBridgeHandler r1);

    void setCustomEnv(java.util.Map<java.lang.String, java.lang.Object> r1);

    void unregisterJsBridge();
}
