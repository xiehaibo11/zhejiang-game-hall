package com.kwad.sdk.core.network;

public class j extends com.kwad.sdk.core.response.a.a {
    public String apg;
    public int aph = 0;
    public String api;
    public String errorMsg;
    public String host;
    public int httpCode;
    public String url;

    @Override
    public String toString() {
        return toJson().toString();
    }
}
