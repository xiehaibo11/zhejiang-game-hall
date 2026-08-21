package com.kwad.sdk.export.proxy;

public interface AdHttpProxy {
    com.kwad.sdk.core.network.c doGet(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2);

    com.kwad.sdk.core.network.c doGetWithoutResponse(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2);

    com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, com.kwad.sdk.export.proxy.AdHttpBodyBuilder r3);

    com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.util.Map<java.lang.String, java.lang.String> r3);

    com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, org.json.JSONObject r3);

    boolean downloadUrlToStream(java.lang.String r1, java.io.OutputStream r2, int r3);
}
