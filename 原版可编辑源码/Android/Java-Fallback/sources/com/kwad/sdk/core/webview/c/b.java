package com.kwad.sdk.core.webview.c;

public final class b implements com.kwad.sdk.core.b {
    public java.lang.String ayT;
    public java.lang.String ayU;
    public java.lang.String data;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "action"
            java.lang.String r0 = r2.optString(r0)
            r1.ayT = r0
            java.lang.String r0 = "data"
            java.lang.String r0 = r2.optString(r0)
            r1.data = r0
            java.lang.String r0 = "callback"
            java.lang.String r2 = r2.optString(r0)
            r1.ayU = r2
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.ayT
            java.lang.String r2 = "action"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.data
            java.lang.String r2 = "data"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.ayU
            java.lang.String r2 = "callback"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
