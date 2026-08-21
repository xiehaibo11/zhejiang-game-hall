package com.kwad.components.offline.api.tk;

public interface IOfflineTKDialog {
    void callTKBridge(java.lang.String r1);

    void callbackDialogDismiss();

    void callbackPageStatus(boolean r1, java.lang.String r2);

    int getDialogId();

    java.lang.String getStyleTemplate();

    void registerJSCallHandler(com.kwad.components.offline.api.tk.IOfflineTKCallHandler r1);
}
