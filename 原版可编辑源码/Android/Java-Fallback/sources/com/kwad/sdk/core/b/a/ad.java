package com.kwad.sdk.core.b.a;

public final class ad implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info> {
    public ad() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "showPageType"
            int r0 = r2.optInt(r0)
            r1.showPageType = r0
            java.lang.String r0 = "videoAutoLoopAtH5"
            boolean r0 = r2.optBoolean(r0)
            r1.videoAutoLoopAtH5 = r0
            java.lang.String r0 = "videoMutedAtH5"
            boolean r0 = r2.optBoolean(r0)
            r1.videoMutedAtH5 = r0
            java.lang.String r0 = "videoClickAtH5"
            boolean r2 = r2.optBoolean(r0)
            r1.videoClickAtH5 = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.showPageType
            if (r0 == 0) goto L12
            int r0 = r2.showPageType
            java.lang.String r1 = "showPageType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            boolean r0 = r2.videoAutoLoopAtH5
            if (r0 == 0) goto L1d
            boolean r0 = r2.videoAutoLoopAtH5
            java.lang.String r1 = "videoAutoLoopAtH5"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            boolean r0 = r2.videoMutedAtH5
            if (r0 == 0) goto L28
            boolean r0 = r2.videoMutedAtH5
            java.lang.String r1 = "videoMutedAtH5"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L28:
            boolean r0 = r2.videoClickAtH5
            if (r0 == 0) goto L33
            boolean r2 = r2.videoClickAtH5
            java.lang.String r0 = "videoClickAtH5"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L33:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r1 = (com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r1 = (com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
