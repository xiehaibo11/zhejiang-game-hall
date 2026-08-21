package com.kwad.sdk.core.b.a;

public final class bb implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate> {
    public bb() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateId"
            java.lang.String r0 = r3.optString(r0)
            r2.templateId = r0
            java.lang.String r0 = r2.templateId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.templateId = r0
        L15:
            java.lang.String r0 = "renderType"
            int r3 = r3.optInt(r0)
            r2.renderType = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.templateId
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.templateId
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.templateId
            java.lang.String r1 = "templateId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            int r0 = r2.renderType
            if (r0 == 0) goto L27
            int r2 = r2.renderType
            java.lang.String r0 = "renderType"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L27:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
