package com.kwad.components.ad.reward;

public final class i extends com.kwad.sdk.core.network.d {
    public i(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            r2.<init>()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bD(r0)
            java.lang.String r1 = "callbackUrlInfo"
            r2.putBody(r1, r0)
            com.kwad.components.core.p.a.b r0 = new com.kwad.components.core.p.a.b
            com.kwad.sdk.internal.api.SceneImpl r1 = r3.mAdScene
            r0.<init>(r1)
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.utils.t.putValue(r1, r0)
            java.lang.String r0 = "impInfo"
            r2.putBody(r0, r1)
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)     // Catch: org.json.JSONException -> L41
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bE(r3)     // Catch: org.json.JSONException -> L41
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L41
            if (r0 != 0) goto L40
            java.lang.String r0 = "serverExt"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L41
            r1.<init>(r3)     // Catch: org.json.JSONException -> L41
            r2.putBody(r0, r1)     // Catch: org.json.JSONException -> L41
        L40:
            return
        L41:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xg()
            return r0
    }
}
