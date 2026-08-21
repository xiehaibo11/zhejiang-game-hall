package com.kwad.sdk.core.b.a;

public final class iz implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf> {
    public iz() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf r0 = new com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf
            r0.<init>()
            r1.unDownloadRegionConf = r0
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf r1 = r1.unDownloadRegionConf
            java.lang.String r0 = "unDownloadRegionConf"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            r1.parseJson(r2)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadRegionConf r1 = r1.unDownloadRegionConf
            java.lang.String r0 = "unDownloadRegionConf"
            com.kwad.sdk.utils.t.a(r2, r0, r1)
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r1 = (com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r1 = (com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
