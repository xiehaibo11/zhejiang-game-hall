package com.kwad.sdk.core.b.a;

public final class im implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.Styles> {
    public im() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.Styles r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.templateList = r0
            java.lang.String r0 = "templates"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L2d
            r0 = 0
        L13:
            int r1 = r4.length()
            if (r0 >= r1) goto L2d
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate> r2 = r3.templateList
            r2.add(r1)
            int r0 = r0 + 1
            goto L13
        L2d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.Styles r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate> r1 = r1.templateList
            java.lang.String r0 = "templates"
            com.kwad.sdk.utils.t.putValue(r2, r0, r1)
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.Styles) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.Styles) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
