package com.kwad.components.offline.api.core.webview;

public interface IBridgeHandler {
    java.lang.String getKey();

    void handleJsCall(java.lang.String r1);

    void onDestroy();
}
