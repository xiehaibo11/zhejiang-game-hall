package com.kwad.sdk.core.b.a;

public final class z implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo> {
    public z() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$Styles
            r0.<init>()
            r3.styles = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r0 = r3.styles
            java.lang.String r1 = "styles"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2
            r0.<init>()
            r3.adDataV2 = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r3.adDataV2
            java.lang.String r1 = "adDataV2"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.tag = r0
            java.lang.String r0 = "tag"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L51
            r0 = 0
        L37:
            int r1 = r4.length()
            if (r0 >= r1) goto L51
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag> r2 = r3.tag
            r2.add(r1)
            int r0 = r0 + 1
            goto L37
        L51:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r0 = r2.styles
            java.lang.String r1 = "styles"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r2.adDataV2
            java.lang.String r1 = "adDataV2"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag> r2 = r2.tag
            java.lang.String r0 = "tag"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
