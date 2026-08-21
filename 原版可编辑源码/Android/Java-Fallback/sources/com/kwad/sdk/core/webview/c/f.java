package com.kwad.sdk.core.webview.c;

public final class f implements com.kwad.sdk.core.b {
    public final com.kwad.sdk.core.b ayV;
    public final int result;

    public f(com.kwad.sdk.core.b r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.result = r0
            r1.ayV = r2
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.result
            java.lang.String r2 = "result"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            com.kwad.sdk.core.b r1 = r3.ayV
            java.lang.String r2 = "data"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            return r0
    }
}
