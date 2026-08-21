package com.kwad.sdk.core.b.a;

public final class it implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData> {
    public it() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateShowTime"
            long r0 = r3.optLong(r0)
            r2.templateShowTime = r0
            java.lang.String r0 = "templateDelayTime"
            long r0 = r3.optLong(r0)
            r2.templateDelayTime = r0
            java.lang.String r0 = "data"
            java.lang.String r3 = r3.optString(r0)
            r2.data = r3
            java.lang.String r3 = r2.data
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r3 != r0) goto L25
            java.lang.String r3 = ""
            r2.data = r3
        L25:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            long r0 = r5.templateShowTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r5.templateShowTime
            java.lang.String r4 = "templateShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L16:
            long r0 = r5.templateDelayTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r5.templateDelayTime
            java.lang.String r2 = "templateDelayTime"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L23:
            java.lang.String r0 = r5.data
            if (r0 == 0) goto L38
            java.lang.String r0 = r5.data
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L38
            java.lang.String r5 = r5.data
            java.lang.String r0 = "data"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L38:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
