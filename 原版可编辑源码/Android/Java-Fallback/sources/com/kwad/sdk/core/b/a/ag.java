package com.kwad.sdk.core.b.a;

public final class ag implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo> {
    public ag() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "fullScreenSkipShowTime"
            int r0 = r3.optInt(r1, r0)
            r2.fullScreenSkipShowTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "rewardSkipConfirmSwitch"
            int r0 = r3.optInt(r1, r0)
            r2.rewardSkipConfirmSwitch = r0
            java.lang.String r0 = "closeDelaySeconds"
            long r0 = r3.optLong(r0)
            r2.closeDelaySeconds = r0
            java.lang.String r0 = "playableCloseSeconds"
            long r0 = r3.optLong(r0)
            r2.playableCloseSeconds = r0
            java.lang.String r0 = "rewardVideoInteractSwitch"
            boolean r0 = r3.optBoolean(r0)
            r2.rewardVideoInteractSwitch = r0
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = new com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info
            r0.<init>()
            r2.adShowVideoH5Info = r0
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r2.adShowVideoH5Info
            java.lang.String r1 = "adShowVideoH5Info"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "adPushSwitch"
            boolean r0 = r3.optBoolean(r0)
            r2.adPushSwitch = r0
            java.lang.String r0 = "adPushShowAfterTime"
            int r0 = r3.optInt(r0)
            r2.adPushShowAfterTime = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "900"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "adPushIntervalTime"
            int r0 = r3.optInt(r1, r0)
            r2.adPushIntervalTime = r0
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo
            r0.<init>()
            r2.nativeAdInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = r2.nativeAdInfo
            java.lang.String r1 = "nativeAdInfo"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "useNativeForOuterLiveAd"
            boolean r0 = r3.optBoolean(r0)
            r2.useNativeForOuterLiveAd = r0
            java.lang.String r0 = "adPushDownloadJumpType"
            int r0 = r3.optInt(r0)
            r2.adPushDownloadJumpType = r0
            java.lang.String r0 = "actionBarType"
            int r0 = r3.optInt(r0)
            r2.actionBarType = r0
            java.lang.String r0 = "endCardType"
            int r0 = r3.optInt(r0)
            r2.endCardType = r0
            java.lang.String r0 = "confirmCardType"
            int r0 = r3.optInt(r0)
            r2.confirmCardType = r0
            java.lang.String r0 = "innerAdType"
            int r3 = r3.optInt(r0)
            r2.innerAdType = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            int r0 = r5.fullScreenSkipShowTime
            java.lang.String r1 = "fullScreenSkipShowTime"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            int r0 = r5.rewardSkipConfirmSwitch
            java.lang.String r1 = "rewardSkipConfirmSwitch"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            long r0 = r5.closeDelaySeconds
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L24
            long r0 = r5.closeDelaySeconds
            java.lang.String r4 = "closeDelaySeconds"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L24:
            long r0 = r5.playableCloseSeconds
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L31
            long r0 = r5.playableCloseSeconds
            java.lang.String r2 = "playableCloseSeconds"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L31:
            boolean r0 = r5.rewardVideoInteractSwitch
            if (r0 == 0) goto L3c
            boolean r0 = r5.rewardVideoInteractSwitch
            java.lang.String r1 = "rewardVideoInteractSwitch"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L3c:
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r5.adShowVideoH5Info
            java.lang.String r1 = "adShowVideoH5Info"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            boolean r0 = r5.adPushSwitch
            if (r0 == 0) goto L4e
            boolean r0 = r5.adPushSwitch
            java.lang.String r1 = "adPushSwitch"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L4e:
            int r0 = r5.adPushShowAfterTime
            if (r0 == 0) goto L59
            int r0 = r5.adPushShowAfterTime
            java.lang.String r1 = "adPushShowAfterTime"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L59:
            int r0 = r5.adPushIntervalTime
            java.lang.String r1 = "adPushIntervalTime"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = r5.nativeAdInfo
            java.lang.String r1 = "nativeAdInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            boolean r0 = r5.useNativeForOuterLiveAd
            if (r0 == 0) goto L72
            boolean r0 = r5.useNativeForOuterLiveAd
            java.lang.String r1 = "useNativeForOuterLiveAd"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L72:
            int r0 = r5.adPushDownloadJumpType
            if (r0 == 0) goto L7d
            int r0 = r5.adPushDownloadJumpType
            java.lang.String r1 = "adPushDownloadJumpType"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L7d:
            int r0 = r5.actionBarType
            if (r0 == 0) goto L88
            int r0 = r5.actionBarType
            java.lang.String r1 = "actionBarType"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L88:
            int r0 = r5.endCardType
            if (r0 == 0) goto L93
            int r0 = r5.endCardType
            java.lang.String r1 = "endCardType"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L93:
            int r0 = r5.confirmCardType
            if (r0 == 0) goto L9e
            int r0 = r5.confirmCardType
            java.lang.String r1 = "confirmCardType"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L9e:
            int r0 = r5.innerAdType
            if (r0 == 0) goto La9
            int r5 = r5.innerAdType
            java.lang.String r0 = "innerAdType"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        La9:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
