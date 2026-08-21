package com.kwad.sdk.core.b.a;

public final class dn implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo> {
    public dn() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "fullScreenEndCardSwitch"
            boolean r0 = r2.optBoolean(r0)
            r1.fullScreenEndCardSwitch = r0
            java.lang.String r0 = "showLandingPage"
            int r2 = r2.optInt(r0)
            r1.showLandingPage = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            boolean r0 = r2.fullScreenEndCardSwitch
            if (r0 == 0) goto L12
            boolean r0 = r2.fullScreenEndCardSwitch
            java.lang.String r1 = "fullScreenEndCardSwitch"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.showLandingPage
            if (r0 == 0) goto L1d
            int r2 = r2.showLandingPage
            java.lang.String r0 = "showLandingPage"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
