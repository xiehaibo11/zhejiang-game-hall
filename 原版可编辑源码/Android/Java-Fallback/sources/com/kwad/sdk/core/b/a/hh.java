package com.kwad.sdk.core.b.a;

public final class hh implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo> {
    public hh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.title = r2
        L15:
            java.lang.String r0 = "subTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.subTitle = r0
            java.lang.String r0 = r3.subTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.subTitle = r2
        L25:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
            r0.<init>()
            r3.downloadTexts = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r3.downloadTexts
            java.lang.String r1 = "downloadTexts"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
            r0.<init>()
            r3.x = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = r3.x
            java.lang.String r1 = "x"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
            r0.<init>()
            r3.y = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = r3.y
            java.lang.String r1 = "y"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
            r0.<init>()
            r3.z = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r3 = r3.z
            java.lang.String r0 = "z"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.subTitle
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.subTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.subTitle
            java.lang.String r1 = "subTitle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L2f:
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r3.downloadTexts
            java.lang.String r1 = "downloadTexts"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = r3.x
            java.lang.String r1 = "x"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = r3.y
            java.lang.String r1 = "y"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r3 = r3.z
            java.lang.String r0 = "z"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
