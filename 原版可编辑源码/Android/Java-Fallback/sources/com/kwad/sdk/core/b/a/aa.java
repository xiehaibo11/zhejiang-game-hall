package com.kwad.sdk.core.b.a;

public final class aa implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo> {
    public aa() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "preloadId"
            java.lang.String r0 = r3.optString(r0)
            r2.preloadId = r0
            java.lang.String r0 = r2.preloadId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.preloadId = r0
        L15:
            java.lang.String r0 = "preloadType"
            int r0 = r3.optInt(r0)
            r2.preloadType = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "已提前加载"
            r0.<init>(r1)
            java.lang.String r1 = "preloadTips"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.preloadTips = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "604800"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "validityPeriod"
            int r3 = r3.optInt(r1, r0)
            r2.validityPeriod = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.preloadId
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.preloadId
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.preloadId
            java.lang.String r1 = "preloadId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            int r0 = r2.preloadType
            if (r0 == 0) goto L27
            int r0 = r2.preloadType
            java.lang.String r1 = "preloadType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L27:
            java.lang.String r0 = r2.preloadTips
            java.lang.String r1 = "preloadTips"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.validityPeriod
            java.lang.String r0 = "validityPeriod"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
