package com.kwad.sdk.core.b.a;

public final class t implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo> {
    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "interactiveStyle"
            int r0 = r5.optInt(r0)
            r4.interactiveStyle = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "4"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "interactivityDefaultStyle"
            int r0 = r5.optInt(r1, r0)
            r4.interactivityDefaultStyle = r0
            java.lang.String r0 = "isMediaDisable"
            boolean r0 = r5.optBoolean(r0)
            r4.isMediaDisable = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "1500"
            r0.<init>(r1)
            long r2 = r0.longValue()
            java.lang.String r0 = "switchDefaultTime"
            long r2 = r5.optLong(r0, r2)
            r4.switchDefaultTime = r2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo
            r0.<init>()
            r4.shakeInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r4.shakeInfo
            java.lang.String r2 = "shakeInfo"
            org.json.JSONObject r2 = r5.optJSONObject(r2)
            r0.parseJson(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo
            r0.<init>()
            r4.rotateInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r4.rotateInfo
            java.lang.String r2 = "rotateInfo"
            org.json.JSONObject r2 = r5.optJSONObject(r2)
            r0.parseJson(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo
            r0.<init>()
            r4.slideInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r4.slideInfo
            java.lang.String r2 = "slideInfo"
            org.json.JSONObject r2 = r5.optJSONObject(r2)
            r0.parseJson(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo
            r0.<init>()
            r4.splashActionBarInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r4.splashActionBarInfo
            java.lang.String r2 = "actionBarInfo"
            org.json.JSONObject r2 = r5.optJSONObject(r2)
            r0.parseJson(r2)
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "tkDefaultTimeout"
            long r0 = r5.optLong(r2, r0)
            r4.tkDefaultTimeout = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.interactiveStyle
            if (r0 == 0) goto L12
            int r0 = r3.interactiveStyle
            java.lang.String r1 = "interactiveStyle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            int r0 = r3.interactivityDefaultStyle
            java.lang.String r1 = "interactivityDefaultStyle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            boolean r0 = r3.isMediaDisable
            if (r0 == 0) goto L24
            boolean r0 = r3.isMediaDisable
            java.lang.String r1 = "isMediaDisable"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L24:
            long r0 = r3.switchDefaultTime
            java.lang.String r2 = "switchDefaultTime"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r3.shakeInfo
            java.lang.String r1 = "shakeInfo"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r3.rotateInfo
            java.lang.String r1 = "rotateInfo"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r3.slideInfo
            java.lang.String r1 = "slideInfo"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r3.splashActionBarInfo
            java.lang.String r1 = "actionBarInfo"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            long r0 = r3.tkDefaultTimeout
            java.lang.String r3 = "tkDefaultTimeout"
            com.kwad.sdk.utils.t.putValue(r4, r3, r0)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
