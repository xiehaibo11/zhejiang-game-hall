package com.kwad.sdk.core.network;

public class j extends com.kwad.sdk.core.response.a.a {
    public java.lang.String apg;
    public int aph;
    public java.lang.String api;
    public java.lang.String errorMsg;
    public java.lang.String host;
    public int httpCode;
    public java.lang.String url;

    public j() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aph = r0
            return
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            org.json.JSONObject r0 = r1.toJson()
            java.lang.String r0 = r0.toString()
            return r0
    }
}
