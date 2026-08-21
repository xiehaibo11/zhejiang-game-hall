package com.kwad.sdk.core.b.a;

public final class y implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo> {
    public y() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "2"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "materialType"
            int r0 = r4.optInt(r1, r0)
            r3.materialType = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "false"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "videoVoice"
            boolean r0 = r4.optBoolean(r1, r0)
            r3.videoVoice = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.materialFeatureList = r0
            java.lang.String r0 = "materialFeature"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L53
            r0 = 0
        L39:
            int r1 = r4.length()
            if (r0 >= r1) goto L53
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r2 = r3.materialFeatureList
            r2.add(r1)
            int r0 = r0 + 1
            goto L39
        L53:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.materialType
            java.lang.String r1 = "materialType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            boolean r0 = r2.videoVoice
            java.lang.String r1 = "videoVoice"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r2 = r2.materialFeatureList
            java.lang.String r0 = "materialFeature"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
