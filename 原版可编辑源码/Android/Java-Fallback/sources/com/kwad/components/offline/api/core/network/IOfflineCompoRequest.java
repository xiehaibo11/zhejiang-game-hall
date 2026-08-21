package com.kwad.components.offline.api.core.network;

public interface IOfflineCompoRequest {
    boolean encryptDisable();

    org.json.JSONObject getBody();

    java.util.Map<java.lang.String, java.lang.String> getBodyMap();

    java.util.Map<java.lang.String, java.lang.String> getHeader();

    java.lang.String getMethod();

    java.lang.String getRequestHost();

    com.kwad.sdk.api.KsScene getScene();

    java.lang.String getUrl();
}
