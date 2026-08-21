package com.kwad.sdk.core.b.a;

public final class ja implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf> {
    public ja() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "materialJumpType"
            int r0 = r2.optInt(r0)
            r1.materialJumpType = r0
            java.lang.String r0 = "actionBarType"
            int r0 = r2.optInt(r0)
            r1.actionBarType = r0
            java.lang.String r0 = "describeBarType"
            int r2 = r2.optInt(r0)
            r1.describeBarType = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.materialJumpType
            if (r0 == 0) goto L12
            int r0 = r2.materialJumpType
            java.lang.String r1 = "materialJumpType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.actionBarType
            if (r0 == 0) goto L1d
            int r0 = r2.actionBarType
            java.lang.String r1 = "actionBarType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            int r0 = r2.describeBarType
            if (r0 == 0) goto L28
            int r2 = r2.describeBarType
            java.lang.String r0 = "describeBarType"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L28:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf r1 = (com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf r1 = (com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
