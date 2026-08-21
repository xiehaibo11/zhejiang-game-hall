package com.kwad.sdk.core.b.a;

public final class hw implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo> {
    public hw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "endCardCountDaily"
            int r0 = r4.optInt(r2, r0)
            r3.endCardCountDaily = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "endCardShowSecond"
            int r0 = r4.optInt(r1, r0)
            r3.endCardShowSecond = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "true"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "endCardFullScreenClick"
            boolean r0 = r4.optBoolean(r1, r0)
            r3.endCardFullScreenClick = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "false"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "endCardShowCountDown"
            boolean r4 = r4.optBoolean(r1, r0)
            r3.endCardShowCountDown = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.endCardCountDaily
            java.lang.String r1 = "endCardCountDaily"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.endCardShowSecond
            java.lang.String r1 = "endCardShowSecond"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            boolean r0 = r2.endCardFullScreenClick
            java.lang.String r1 = "endCardFullScreenClick"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            boolean r2 = r2.endCardShowCountDown
            java.lang.String r0 = "endCardShowCountDown"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
