package com.kwad.sdk.core.webview.request;

public class WebCardGetDataResponse extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final java.lang.String TAG = "WebCardGetDataResponse";
    private static final long serialVersionUID = 2407409365862659643L;
    public org.json.JSONObject data;
    public org.json.JSONArray impAdInfo;

    public WebCardGetDataResponse() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            super.parseJson(r3)
            if (r3 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "impAdInfo"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L3c
            boolean r1 = com.kwad.sdk.utils.bc.isNullString(r0)     // Catch: java.lang.Exception -> L3c
            if (r1 != 0) goto L24
            java.lang.String r3 = com.kwad.sdk.core.a.d.getResponseData(r0)     // Catch: java.lang.Exception -> L3c
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r3)     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L3b
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3c
            r0.<init>(r3)     // Catch: java.lang.Exception -> L3c
            r2.impAdInfo = r0     // Catch: java.lang.Exception -> L3c
            goto L40
        L24:
            java.lang.String r0 = "data"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> L3c
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r3)     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3c
            java.lang.String r3 = com.kwad.sdk.core.a.d.getResponseData(r3)     // Catch: java.lang.Exception -> L3c
            r0.<init>(r3)     // Catch: java.lang.Exception -> L3c
            r2.data = r0     // Catch: java.lang.Exception -> L3c
        L3b:
            return
        L3c:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L40:
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            org.json.JSONObject r1 = r3.data
            if (r1 == 0) goto Ld
            java.lang.String r2 = "data"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        Ld:
            org.json.JSONArray r1 = r3.impAdInfo
            if (r1 == 0) goto L16
            java.lang.String r2 = "impAdInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L16:
            return r0
    }
}
