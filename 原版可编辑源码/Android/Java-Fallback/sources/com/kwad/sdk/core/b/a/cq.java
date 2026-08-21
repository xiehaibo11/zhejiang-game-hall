package com.kwad.sdk.core.b.a;

public final class cq implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts> {
    public cq() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "adActionDescription"
            java.lang.String r0 = r4.optString(r0)
            r3.adActionDescription = r0
            java.lang.String r0 = r3.adActionDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.adActionDescription = r2
        L15:
            java.lang.String r0 = "installAppLabel"
            java.lang.String r0 = r4.optString(r0)
            r3.installAppLabel = r0
            java.lang.String r0 = r3.installAppLabel
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.installAppLabel = r2
        L25:
            java.lang.String r0 = "openAppLabel"
            java.lang.String r4 = r4.optString(r0)
            r3.openAppLabel = r4
            java.lang.String r4 = r3.openAppLabel
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L35
            r3.openAppLabel = r2
        L35:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.adActionDescription
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.adActionDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.adActionDescription
            java.lang.String r2 = "adActionDescription"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.installAppLabel
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.installAppLabel
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.installAppLabel
            java.lang.String r2 = "installAppLabel"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.openAppLabel
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.openAppLabel
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r3 = r3.openAppLabel
            java.lang.String r0 = "openAppLabel"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L42:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
