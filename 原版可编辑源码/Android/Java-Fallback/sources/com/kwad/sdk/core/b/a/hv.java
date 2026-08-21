package com.kwad.sdk.core.b.a;

public final class hv implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo> {
    public hv() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "dailyShowCount"
            int r0 = r2.optInt(r0)
            r1.dailyShowCount = r0
            com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl r0 = new com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl
            r0.<init>()
            r1.splashStyleControl = r0
            com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl r1 = r1.splashStyleControl
            java.lang.String r0 = "splashStyleControl"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            r1.parseJson(r2)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.dailyShowCount
            if (r0 == 0) goto L12
            int r0 = r2.dailyShowCount
            java.lang.String r1 = "dailyShowCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl r2 = r2.splashStyleControl
            java.lang.String r0 = "splashStyleControl"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r1 = (com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r1 = (com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
