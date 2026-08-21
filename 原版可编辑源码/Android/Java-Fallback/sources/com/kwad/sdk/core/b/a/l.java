package com.kwad.sdk.core.b.a;

public final class l implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo> {
    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "h5Url"
            java.lang.String r0 = r6.optString(r0)
            r5.h5Url = r0
            java.lang.String r0 = r5.h5Url
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r5.h5Url = r2
        L15:
            java.lang.String r0 = "h5Type"
            int r0 = r6.optInt(r0)
            r5.h5Type = r0
            java.lang.String r0 = "deeplinkUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.deeplinkUrl = r0
            java.lang.String r0 = r5.deeplinkUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r5.deeplinkUrl = r2
        L2d:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.deeplinkConf = r0
            java.lang.String r0 = "deeplinkConf"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L57
            r1 = 0
        L3d:
            int r3 = r0.length()
            if (r1 >= r3) goto L57
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo r3 = new com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r1)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo> r4 = r5.deeplinkConf
            r4.add(r3)
            int r1 = r1 + 1
            goto L3d
        L57:
            java.lang.String r0 = "deeplinkExtra"
            java.lang.String r0 = r6.optString(r0)
            r5.deeplinkExtra = r0
            java.lang.String r0 = r5.deeplinkExtra
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L67
            r5.deeplinkExtra = r2
        L67:
            java.lang.String r0 = "appDownloadUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.appDownloadUrl = r0
            java.lang.String r0 = r5.appDownloadUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L77
            r5.appDownloadUrl = r2
        L77:
            java.lang.String r0 = "marketUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.marketUrl = r0
            java.lang.String r0 = r5.marketUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L87
            r5.marketUrl = r2
        L87:
            java.lang.String r0 = "supportThirdDownload"
            int r0 = r6.optInt(r0)
            r5.supportThirdDownload = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "2000"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "retryH5TimeStep"
            int r0 = r6.optInt(r1, r0)
            r5.retryH5TimeStep = r0
            java.lang.String r0 = "playableUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.playableUrl = r0
            java.lang.String r0 = r5.playableUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lb2
            r5.playableUrl = r2
        Lb2:
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo
            r0.<init>()
            r5.playableStyleInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r0 = r5.playableStyleInfo
            java.lang.String r1 = "playableStyleInfo"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo
            r0.<init>()
            r5.smallAppJumpInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r0 = r5.smallAppJumpInfo
            java.lang.String r1 = "smallAppJumpInfo"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "webUriSourceType"
            int r0 = r6.optInt(r0)
            r5.webUriSourceType = r0
            java.lang.String r0 = "callbackUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.callbackUrl = r0
            java.lang.String r0 = r5.callbackUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lee
            r5.callbackUrl = r2
        Lee:
            java.lang.String r0 = "callbackUrlInfo"
            java.lang.String r0 = r6.optString(r0)
            r5.callbackUrlInfo = r0
            java.lang.String r0 = r5.callbackUrlInfo
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lfe
            r5.callbackUrlInfo = r2
        Lfe:
            java.lang.String r0 = "blockCallbackIfSpam"
            boolean r0 = r6.optBoolean(r0)
            r5.blockCallbackIfSpam = r0
            java.lang.String r0 = "needDeeplinkReplaceAdapta"
            boolean r0 = r6.optBoolean(r0)
            r5.needDeeplinkReplaceAdapta = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "0"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r2 = "h5DeeplinkLimitedTimeMs"
            int r0 = r6.optInt(r2, r0)
            r5.h5DeeplinkLimitedTimeMs = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "playableDeeplinkLimitedTimeMs"
            int r0 = r6.optInt(r1, r0)
            r5.playableDeeplinkLimitedTimeMs = r0
            java.lang.String r0 = "isSupportKeepPlaying"
            boolean r0 = r6.optBoolean(r0)
            r5.isSupportKeepPlaying = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "3000"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "keepPlayingBackOffTime"
            long r0 = r6.optLong(r2, r0)
            r5.keepPlayingBackOffTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.h5Url
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.h5Url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.h5Url
            java.lang.String r2 = "h5Url"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            int r0 = r3.h5Type
            if (r0 == 0) goto L27
            int r0 = r3.h5Type
            java.lang.String r2 = "h5Type"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.deeplinkUrl
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.deeplinkUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.deeplinkUrl
            java.lang.String r2 = "deeplinkUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo> r0 = r3.deeplinkConf
            java.lang.String r2 = "deeplinkConf"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            java.lang.String r0 = r3.deeplinkExtra
            if (r0 == 0) goto L54
            java.lang.String r0 = r3.deeplinkExtra
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L54
            java.lang.String r0 = r3.deeplinkExtra
            java.lang.String r2 = "deeplinkExtra"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L54:
            java.lang.String r0 = r3.appDownloadUrl
            if (r0 == 0) goto L67
            java.lang.String r0 = r3.appDownloadUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L67
            java.lang.String r0 = r3.appDownloadUrl
            java.lang.String r2 = "appDownloadUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L67:
            java.lang.String r0 = r3.marketUrl
            if (r0 == 0) goto L7a
            java.lang.String r0 = r3.marketUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7a
            java.lang.String r0 = r3.marketUrl
            java.lang.String r2 = "marketUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L7a:
            int r0 = r3.supportThirdDownload
            if (r0 == 0) goto L85
            int r0 = r3.supportThirdDownload
            java.lang.String r2 = "supportThirdDownload"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L85:
            int r0 = r3.retryH5TimeStep
            java.lang.String r2 = "retryH5TimeStep"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            java.lang.String r0 = r3.playableUrl
            if (r0 == 0) goto L9f
            java.lang.String r0 = r3.playableUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = r3.playableUrl
            java.lang.String r2 = "playableUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L9f:
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r0 = r3.playableStyleInfo
            java.lang.String r2 = "playableStyleInfo"
            com.kwad.sdk.utils.t.a(r4, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r0 = r3.smallAppJumpInfo
            java.lang.String r2 = "smallAppJumpInfo"
            com.kwad.sdk.utils.t.a(r4, r2, r0)
            int r0 = r3.webUriSourceType
            if (r0 == 0) goto Lb8
            int r0 = r3.webUriSourceType
            java.lang.String r2 = "webUriSourceType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lb8:
            java.lang.String r0 = r3.callbackUrl
            if (r0 == 0) goto Lcb
            java.lang.String r0 = r3.callbackUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lcb
            java.lang.String r0 = r3.callbackUrl
            java.lang.String r2 = "callbackUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lcb:
            java.lang.String r0 = r3.callbackUrlInfo
            if (r0 == 0) goto Lde
            java.lang.String r0 = r3.callbackUrlInfo
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lde
            java.lang.String r0 = r3.callbackUrlInfo
            java.lang.String r1 = "callbackUrlInfo"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lde:
            boolean r0 = r3.blockCallbackIfSpam
            if (r0 == 0) goto Le9
            boolean r0 = r3.blockCallbackIfSpam
            java.lang.String r1 = "blockCallbackIfSpam"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Le9:
            boolean r0 = r3.needDeeplinkReplaceAdapta
            if (r0 == 0) goto Lf4
            boolean r0 = r3.needDeeplinkReplaceAdapta
            java.lang.String r1 = "needDeeplinkReplaceAdapta"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lf4:
            int r0 = r3.h5DeeplinkLimitedTimeMs
            java.lang.String r1 = "h5DeeplinkLimitedTimeMs"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            int r0 = r3.playableDeeplinkLimitedTimeMs
            java.lang.String r1 = "playableDeeplinkLimitedTimeMs"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            boolean r0 = r3.isSupportKeepPlaying
            if (r0 == 0) goto L10d
            boolean r0 = r3.isSupportKeepPlaying
            java.lang.String r1 = "isSupportKeepPlaying"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L10d:
            long r0 = r3.keepPlayingBackOffTime
            java.lang.String r3 = "keepPlayingBackOffTime"
            com.kwad.sdk.utils.t.putValue(r4, r3, r0)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
