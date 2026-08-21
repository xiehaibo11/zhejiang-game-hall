package com.kwad.sdk.core.b.a;

public final class ae implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo> {
    public ae() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "logoPosition"
            int r0 = r5.optInt(r2, r0)
            r4.logoPosition = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "mute"
            int r0 = r5.optInt(r2, r0)
            r4.mute = r0
            java.lang.String r0 = "skipType"
            int r0 = r5.optInt(r0)
            r4.skipType = r0
            java.lang.String r0 = "skipTips"
            java.lang.String r0 = r5.optString(r0)
            r4.skipTips = r0
            java.lang.String r0 = r4.skipTips
            java.lang.Object r2 = org.json.JSONObject.NULL
            java.lang.String r3 = ""
            if (r0 != r2) goto L41
            r4.skipTips = r3
        L41:
            java.lang.String r0 = "speakerMuteIconUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.speakerMuteIconUrl = r0
            java.lang.String r0 = r4.speakerMuteIconUrl
            java.lang.Object r2 = org.json.JSONObject.NULL
            if (r0 != r2) goto L51
            r4.speakerMuteIconUrl = r3
        L51:
            java.lang.String r0 = "speakerIconUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.speakerIconUrl = r0
            java.lang.String r0 = r4.speakerIconUrl
            java.lang.Object r2 = org.json.JSONObject.NULL
            if (r0 != r2) goto L61
            r4.speakerIconUrl = r3
        L61:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r2 = "5"
            r0.<init>(r2)
            int r0 = r0.intValue()
            java.lang.String r3 = "imageDisplaySecond"
            int r0 = r5.optInt(r3, r0)
            r4.imageDisplaySecond = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r2)
            int r0 = r0.intValue()
            java.lang.String r2 = "videoDisplaySecond"
            int r0 = r5.optInt(r2, r0)
            r4.videoDisplaySecond = r0
            java.lang.String r0 = "countdownShow"
            int r0 = r5.optInt(r0)
            r4.countdownShow = r0
            java.lang.String r0 = "fullScreenClickSwitch"
            int r0 = r5.optInt(r0)
            r4.fullScreenClickSwitch = r0
            java.lang.String r0 = "skipButtonPosition"
            int r0 = r5.optInt(r0)
            r4.skipButtonPosition = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "splashShowClickButtonSwitch"
            int r0 = r5.optInt(r1, r0)
            r4.splashShowClickButtonSwitch = r0
            java.lang.String r0 = "skipSecond"
            int r0 = r5.optInt(r0)
            r4.skipSecond = r0
            java.lang.String r0 = "impressionStatisticalChangeSwitch"
            boolean r0 = r5.optBoolean(r0)
            r4.impressionStatisticalChangeSwitch = r0
            java.lang.String r0 = "impressionLimitSize"
            double r0 = r5.optDouble(r0)
            r4.impressionLimitSize = r0
            com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo
            r0.<init>()
            r4.cutRuleInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r4 = r4.cutRuleInfo
            java.lang.String r0 = "cutRuleInfo"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            r4.parseJson(r5)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.logoPosition
            java.lang.String r1 = "logoPosition"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            int r0 = r4.mute
            java.lang.String r1 = "mute"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            int r0 = r4.skipType
            if (r0 == 0) goto L20
            int r0 = r4.skipType
            java.lang.String r1 = "skipType"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L20:
            java.lang.String r0 = r4.skipTips
            java.lang.String r1 = ""
            if (r0 == 0) goto L35
            java.lang.String r0 = r4.skipTips
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L35
            java.lang.String r0 = r4.skipTips
            java.lang.String r2 = "skipTips"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L35:
            java.lang.String r0 = r4.speakerMuteIconUrl
            if (r0 == 0) goto L48
            java.lang.String r0 = r4.speakerMuteIconUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            java.lang.String r0 = r4.speakerMuteIconUrl
            java.lang.String r2 = "speakerMuteIconUrl"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L48:
            java.lang.String r0 = r4.speakerIconUrl
            if (r0 == 0) goto L5b
            java.lang.String r0 = r4.speakerIconUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5b
            java.lang.String r0 = r4.speakerIconUrl
            java.lang.String r1 = "speakerIconUrl"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L5b:
            int r0 = r4.imageDisplaySecond
            java.lang.String r1 = "imageDisplaySecond"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            int r0 = r4.videoDisplaySecond
            java.lang.String r1 = "videoDisplaySecond"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            int r0 = r4.countdownShow
            if (r0 == 0) goto L74
            int r0 = r4.countdownShow
            java.lang.String r1 = "countdownShow"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L74:
            int r0 = r4.fullScreenClickSwitch
            if (r0 == 0) goto L7f
            int r0 = r4.fullScreenClickSwitch
            java.lang.String r1 = "fullScreenClickSwitch"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L7f:
            int r0 = r4.skipButtonPosition
            if (r0 == 0) goto L8a
            int r0 = r4.skipButtonPosition
            java.lang.String r1 = "skipButtonPosition"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L8a:
            int r0 = r4.splashShowClickButtonSwitch
            java.lang.String r1 = "splashShowClickButtonSwitch"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            int r0 = r4.skipSecond
            if (r0 == 0) goto L9c
            int r0 = r4.skipSecond
            java.lang.String r1 = "skipSecond"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L9c:
            boolean r0 = r4.impressionStatisticalChangeSwitch
            if (r0 == 0) goto La7
            boolean r0 = r4.impressionStatisticalChangeSwitch
            java.lang.String r1 = "impressionStatisticalChangeSwitch"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        La7:
            double r0 = r4.impressionLimitSize
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb6
            double r0 = r4.impressionLimitSize
            java.lang.String r2 = "impressionLimitSize"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        Lb6:
            com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r4 = r4.cutRuleInfo
            java.lang.String r0 = "cutRuleInfo"
            com.kwad.sdk.utils.t.a(r5, r0, r4)
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
