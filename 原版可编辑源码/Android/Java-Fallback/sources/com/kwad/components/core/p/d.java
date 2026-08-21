package com.kwad.components.core.p;

public final class d extends com.kwad.sdk.core.network.d {
    public long PD;

    public d(int r5, com.kwad.sdk.core.response.model.AdTemplate r6) {
            r4 = this;
            r4.<init>()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r6)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bD(r0)
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r6)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bE(r1)     // Catch: java.lang.Exception -> L44
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L24 java.lang.Exception -> L44
            if (r2 != 0) goto L28
            java.lang.String r2 = "serverExt"
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L24 java.lang.Exception -> L44
            r3.<init>(r1)     // Catch: org.json.JSONException -> L24 java.lang.Exception -> L44
            r4.putBody(r2, r3)     // Catch: org.json.JSONException -> L24 java.lang.Exception -> L44
            goto L28
        L24:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)     // Catch: java.lang.Exception -> L44
        L28:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L44
            if (r1 != 0) goto L48
            if (r0 == 0) goto L48
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r1.<init>(r0)     // Catch: java.lang.Exception -> L44
            java.lang.String r0 = "checkType"
            com.kwad.sdk.utils.t.putValue(r1, r0, r5)     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = "callbackUrlInfo"
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L44
            r4.putBody(r5, r0)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)
        L48:
            com.kwad.components.core.p.a.b r5 = new com.kwad.components.core.p.a.b
            com.kwad.sdk.internal.api.SceneImpl r6 = r6.mAdScene
            r5.<init>(r6)
            org.json.JSONArray r6 = new org.json.JSONArray
            r6.<init>()
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.utils.t.putValue(r6, r5)
            java.lang.String r5 = "impInfo"
            r4.putBody(r5, r6)
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xk()
            return r0
    }
}
