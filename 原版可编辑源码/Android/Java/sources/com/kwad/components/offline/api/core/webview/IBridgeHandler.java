package com.kwad.components.offline.api.core.webview;

public interface IBridgeHandler {
    String getKey();

    void handleJsCall(String str);

    void onDestroy();
}
