package com.kwad.sdk.core.b.a;

public final class ij implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.StatusInfo> {
    public ij() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.request.model.StatusInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "personalRecommend"
            int r0 = r4.optInt(r0)
            r3.aur = r0
            java.lang.String r0 = "programmaticRecommend"
            int r0 = r4.optInt(r0)
            r3.aus = r0
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r0 = new com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo
            r0.<init>()
            r3.aut = r0
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r0 = r3.aut
            java.lang.String r1 = "splashAdInfo"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo r0 = new com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo
            r0.<init>()
            r3.auu = r0
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo r0 = r3.auu
            java.lang.String r1 = "nativeAdInfo"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.auv = r0
            java.lang.String r0 = "taskStats"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L61
            r0 = 0
        L47:
            int r1 = r4.length()
            if (r0 >= r1) goto L61
            com.kwad.sdk.core.request.model.f r1 = new com.kwad.sdk.core.request.model.f
            r1.<init>()
            org.json.JSONObject r2 = r4.optJSONObject(r0)
            r1.parseJson(r2)
            java.util.List<com.kwad.sdk.core.request.model.f> r2 = r3.auv
            r2.add(r1)
            int r0 = r0 + 1
            goto L47
        L61:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.request.model.StatusInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.aur
            if (r0 == 0) goto L12
            int r0 = r2.aur
            java.lang.String r1 = "personalRecommend"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.aus
            if (r0 == 0) goto L1d
            int r0 = r2.aus
            java.lang.String r1 = "programmaticRecommend"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r0 = r2.aut
            java.lang.String r1 = "splashAdInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo r0 = r2.auu
            java.lang.String r1 = "nativeAdInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            java.util.List<com.kwad.sdk.core.request.model.f> r2 = r2.auv
            java.lang.String r0 = "taskStats"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo r1 = (com.kwad.sdk.core.request.model.StatusInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo r1 = (com.kwad.sdk.core.request.model.StatusInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
