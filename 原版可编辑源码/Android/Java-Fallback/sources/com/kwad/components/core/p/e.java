package com.kwad.components.core.p;

public final class e extends com.kwad.sdk.core.network.d {
    public e() {
            r2 = this;
            r2.<init>()
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.kwad.sdk.utils.t.putValue(r0, r1)
            java.lang.String r1 = "impInfo"
            r2.putBody(r1, r0)
            java.lang.String r0 = com.kwad.sdk.utils.y.Iy()
            java.lang.String r1 = "appTag"
            r2.putBody(r1, r0)
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xf()
            return r0
    }
}
