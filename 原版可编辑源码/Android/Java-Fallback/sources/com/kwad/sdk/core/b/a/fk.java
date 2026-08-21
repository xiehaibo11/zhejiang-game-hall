package com.kwad.sdk.core.b.a;

public final class fk implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate> {
    public fk() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.templateUrl = r0
            java.lang.String r0 = r3.templateUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.templateUrl = r2
        L15:
            java.lang.String r0 = "templateVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.templateVersion = r0
            java.lang.String r0 = r3.templateVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.templateVersion = r2
        L25:
            java.lang.String r0 = "templateVersionCode"
            long r0 = r4.optLong(r0)
            r3.templateVersionCode = r0
            java.lang.String r0 = "templateMd5"
            java.lang.String r4 = r4.optString(r0)
            r3.templateMd5 = r4
            java.lang.String r4 = r3.templateMd5
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L3d
            r3.templateMd5 = r2
        L3d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.templateUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.templateUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.templateUrl
            java.lang.String r2 = "templateUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.templateVersion
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.templateVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.templateVersion
            java.lang.String r2 = "templateVersion"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            long r2 = r6.templateVersionCode
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L3e
            long r2 = r6.templateVersionCode
            java.lang.String r0 = "templateVersionCode"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L3e:
            java.lang.String r0 = r6.templateMd5
            if (r0 == 0) goto L51
            java.lang.String r0 = r6.templateMd5
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L51
            java.lang.String r6 = r6.templateMd5
            java.lang.String r0 = "templateMd5"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L51:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
