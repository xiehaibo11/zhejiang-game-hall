package com.kwad.sdk.core.b.a;

public final class fj implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag> {
    public fj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "styleId"
            int r0 = r3.optInt(r0)
            r2.styleId = r0
            java.lang.String r0 = "type"
            java.lang.String r0 = r3.optString(r0)
            r2.type = r0
            java.lang.String r0 = r2.type
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L1d
            java.lang.String r0 = ""
            r2.type = r0
        L1d:
            java.lang.String r0 = "isHide"
            boolean r3 = r3.optBoolean(r0)
            r2.isHide = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.styleId
            if (r0 == 0) goto L12
            int r0 = r2.styleId
            java.lang.String r1 = "styleId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.lang.String r0 = r2.type
            if (r0 == 0) goto L27
            java.lang.String r0 = r2.type
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r2.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L27:
            boolean r0 = r2.isHide
            if (r0 == 0) goto L32
            boolean r2 = r2.isHide
            java.lang.String r0 = "isHide"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L32:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
