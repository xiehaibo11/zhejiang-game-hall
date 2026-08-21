package com.kwad.sdk.core.b.a;

public final class gs implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo> {
    public gs() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "preLandingPageShowType"
            int r3 = r3.optInt(r1, r0)
            r2.preLandingPageShowType = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            int r1 = r1.preLandingPageShowType
            java.lang.String r0 = "preLandingPageShowType"
            com.kwad.sdk.utils.t.putValue(r2, r0, r1)
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
