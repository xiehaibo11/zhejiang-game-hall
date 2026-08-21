package com.kwad.sdk.core.b.a;

public final class hy implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo> {
    public hy() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
            r0.<init>()
            r1.interactionInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            java.lang.String r0 = "interactionInfo"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            r1.parseJson(r2)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L7
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            java.lang.String r0 = "interactionInfo"
            com.kwad.sdk.utils.t.a(r2, r0, r1)
            return r2
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
