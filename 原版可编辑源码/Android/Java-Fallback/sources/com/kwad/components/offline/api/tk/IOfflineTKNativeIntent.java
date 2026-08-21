package com.kwad.components.offline.api.tk;

public interface IOfflineTKNativeIntent {
    void callTKBridge(java.lang.String r1);

    void callbackPageStatus(boolean r1, java.lang.String r2);

    java.lang.String getClassName();

    android.content.Intent getIntent();

    java.lang.String getTemplateString();

    java.lang.String getUrl();

    void registerJSCallHandler(com.kwad.components.offline.api.tk.IOfflineTKCallHandler r1);
}
