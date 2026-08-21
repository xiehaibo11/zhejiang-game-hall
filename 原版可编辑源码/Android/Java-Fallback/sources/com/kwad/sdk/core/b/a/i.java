package com.kwad.sdk.core.b.a;

public final class i implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo> {
    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "creativeId"
            long r0 = r6.optLong(r0)
            r5.creativeId = r0
            java.lang.String r0 = "adSourceType"
            int r0 = r6.optInt(r0)
            r5.adSourceType = r0
            java.lang.String r0 = "liveStreamId"
            java.lang.String r0 = r6.optString(r0)
            r5.liveStreamId = r0
            java.lang.String r0 = r5.liveStreamId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L25
            r5.liveStreamId = r2
        L25:
            java.lang.String r0 = "universeLiveType"
            int r0 = r6.optInt(r0)
            r5.universeLiveType = r0
            java.lang.String r0 = "viewCount"
            long r0 = r6.optLong(r0)
            r5.viewCount = r0
            java.lang.String r0 = "sdkExtraData"
            java.lang.String r0 = r6.optString(r0)
            r5.sdkExtraData = r0
            java.lang.String r0 = r5.sdkExtraData
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r5.sdkExtraData = r2
        L45:
            java.lang.String r0 = "adDescription"
            java.lang.String r0 = r6.optString(r0)
            r5.adDescription = r0
            java.lang.String r0 = r5.adDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r5.adDescription = r2
        L55:
            java.lang.String r0 = "installAppLabel"
            java.lang.String r0 = r6.optString(r0)
            r5.installAppLabel = r0
            java.lang.String r0 = r5.installAppLabel
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r5.installAppLabel = r2
        L65:
            java.lang.String r0 = "openAppLabel"
            java.lang.String r0 = r6.optString(r0)
            r5.openAppLabel = r0
            java.lang.String r0 = r5.openAppLabel
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r5.openAppLabel = r2
        L75:
            java.lang.String r0 = "adMarkIcon"
            java.lang.String r0 = r6.optString(r0)
            r5.adMarkIcon = r0
            java.lang.String r0 = r5.adMarkIcon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L85
            r5.adMarkIcon = r2
        L85:
            java.lang.String r0 = "adGrayMarkIcon"
            java.lang.String r0 = r6.optString(r0)
            r5.adGrayMarkIcon = r0
            java.lang.String r0 = r5.adGrayMarkIcon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L95
            r5.adGrayMarkIcon = r2
        L95:
            java.lang.String r0 = "adSourceDescription"
            java.lang.String r0 = r6.optString(r0)
            r5.adSourceDescription = r0
            java.lang.String r0 = r5.adSourceDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto La5
            r5.adSourceDescription = r2
        La5:
            java.lang.String r0 = "adOperationType"
            int r0 = r6.optInt(r0)
            r5.adOperationType = r0
            java.lang.String r0 = "adActionDescription"
            java.lang.String r0 = r6.optString(r0)
            r5.adActionDescription = r0
            java.lang.String r0 = r5.adActionDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lbd
            r5.adActionDescription = r2
        Lbd:
            java.lang.String r0 = "adActionBarColor"
            java.lang.String r0 = r6.optString(r0)
            r5.adActionBarColor = r0
            java.lang.String r0 = r5.adActionBarColor
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lcd
            r5.adActionBarColor = r2
        Lcd:
            java.lang.String r0 = "adShowDuration"
            int r0 = r6.optInt(r0)
            r5.adShowDuration = r0
            java.lang.String r0 = "appName"
            java.lang.String r0 = r6.optString(r0)
            r5.appName = r0
            java.lang.String r0 = r5.appName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Le5
            r5.appName = r2
        Le5:
            java.lang.String r0 = "appIconUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.appIconUrl = r0
            java.lang.String r0 = r5.appIconUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lf5
            r5.appIconUrl = r2
        Lf5:
            java.lang.String r0 = "appPackageName"
            java.lang.String r0 = r6.optString(r0)
            r5.appPackageName = r0
            java.lang.String r0 = r5.appPackageName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L105
            r5.appPackageName = r2
        L105:
            java.lang.String r0 = "appScore"
            int r0 = r6.optInt(r0)
            r5.appScore = r0
            java.lang.String r0 = "appDownloadCountDesc"
            java.lang.String r0 = r6.optString(r0)
            r5.appDownloadCountDesc = r0
            java.lang.String r0 = r5.appDownloadCountDesc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L11d
            r5.appDownloadCountDesc = r2
        L11d:
            java.lang.String r0 = "appCategory"
            java.lang.String r0 = r6.optString(r0)
            r5.appCategory = r0
            java.lang.String r0 = r5.appCategory
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L12d
            r5.appCategory = r2
        L12d:
            java.lang.String r0 = "appVersion"
            java.lang.String r0 = r6.optString(r0)
            r5.appVersion = r0
            java.lang.String r0 = r5.appVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L13d
            r5.appVersion = r2
        L13d:
            java.lang.String r0 = "corporationName"
            java.lang.String r0 = r6.optString(r0)
            r5.corporationName = r0
            java.lang.String r0 = r5.corporationName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L14d
            r5.corporationName = r2
        L14d:
            java.lang.String r0 = "packageSize"
            long r0 = r6.optLong(r0)
            r5.packageSize = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.appImageUrl = r0
            java.lang.String r0 = "appImageUrl"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L179
            r1 = 0
        L165:
            int r3 = r0.length()
            if (r1 >= r3) goto L179
            java.util.List<java.lang.String> r3 = r5.appImageUrl
            java.lang.Object r4 = r0.opt(r1)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r1 = r1 + 1
            goto L165
        L179:
            com.kwad.sdk.core.response.model.AdInfo$MaterialSize r0 = new com.kwad.sdk.core.response.model.AdInfo$MaterialSize
            r0.<init>()
            r5.appImageSize = r0
            com.kwad.sdk.core.response.model.AdInfo$MaterialSize r0 = r5.appImageSize
            java.lang.String r1 = "appImageSize"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "appDescription"
            java.lang.String r0 = r6.optString(r0)
            r5.appDescription = r0
            java.lang.String r0 = r5.appDescription
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L19b
            r5.appDescription = r2
        L19b:
            java.lang.String r0 = "enableSkipAd"
            int r0 = r6.optInt(r0)
            r5.enableSkipAd = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "0"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "adCacheSwitch"
            int r0 = r6.optInt(r1, r0)
            r5.adCacheSwitch = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "1800"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r3 = "adCacheSecond"
            long r0 = r6.optLong(r3, r0)
            r5.adCacheSecond = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "1"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "adCacheStrategy"
            int r0 = r6.optInt(r3, r0)
            r5.adCacheStrategy = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "adCacheSize"
            int r0 = r6.optInt(r1, r0)
            r5.adCacheSize = r0
            java.lang.String r0 = "skipSecond"
            int r0 = r6.optInt(r0)
            r5.skipSecond = r0
            java.lang.String r0 = "ecpm"
            int r0 = r6.optInt(r0)
            r5.ecpm = r0
            java.lang.String r0 = "videoPlayedNS"
            java.lang.String r0 = r6.optString(r0)
            r5.videoPlayedNS = r0
            java.lang.String r0 = r5.videoPlayedNS
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L20d
            r5.videoPlayedNS = r2
        L20d:
            java.lang.String r0 = "productName"
            java.lang.String r0 = r6.optString(r0)
            r5.productName = r0
            java.lang.String r0 = r5.productName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L21d
            r5.productName = r2
        L21d:
            com.kwad.sdk.core.response.model.ABParams r0 = new com.kwad.sdk.core.response.model.ABParams
            r0.<init>()
            r5.mABParams = r0
            com.kwad.sdk.core.response.model.ABParams r0 = r5.mABParams     // Catch: java.lang.Exception -> L234
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L234
            java.lang.String r3 = "expParam"
            java.lang.String r3 = r6.optString(r3)     // Catch: java.lang.Exception -> L234
            r1.<init>(r3)     // Catch: java.lang.Exception -> L234
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L234
        L234:
            java.lang.String r0 = "showUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.showUrl = r0
            java.lang.String r0 = r5.showUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L244
            r5.showUrl = r2
        L244:
            java.lang.String r0 = "clickUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.clickUrl = r0
            java.lang.String r0 = r5.clickUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L254
            r5.clickUrl = r2
        L254:
            java.lang.String r0 = "convUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.convUrl = r0
            java.lang.String r0 = r5.convUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L264
            r5.convUrl = r2
        L264:
            java.lang.String r0 = "adAttributeType"
            int r0 = r6.optInt(r0)
            r5.adAttributeType = r0
            com.kwad.sdk.core.response.model.AdInfo$H5Config r0 = new com.kwad.sdk.core.response.model.AdInfo$H5Config
            r0.<init>()
            r5.apiExpParam = r0
            com.kwad.sdk.core.response.model.AdInfo$H5Config r0 = r5.apiExpParam
            java.lang.String r1 = "apiExpParam"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "taskType"
            int r0 = r6.optInt(r0)
            r5.taskType = r0
            java.lang.String r0 = "campaignType"
            int r0 = r6.optInt(r0)
            r5.campaignType = r0
            java.lang.String r0 = "itemType"
            int r0 = r6.optInt(r0)
            r5.itemType = r0
            java.lang.String r0 = "industryFirstLevelId"
            int r0 = r6.optInt(r0)
            r5.industryFirstLevelId = r0
            java.lang.String r0 = "extraClickReward"
            boolean r0 = r6.optBoolean(r0)
            r5.extraClickReward = r0
            java.lang.String r0 = "enableClientProofreadTime"
            boolean r6 = r6.optBoolean(r0)
            r5.enableClientProofreadTime = r6
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            long r0 = r6.creativeId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r6.creativeId
            java.lang.String r4 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L16:
            int r0 = r6.adSourceType
            if (r0 == 0) goto L21
            int r0 = r6.adSourceType
            java.lang.String r1 = "adSourceType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L21:
            java.lang.String r0 = r6.liveStreamId
            java.lang.String r1 = ""
            if (r0 == 0) goto L36
            java.lang.String r0 = r6.liveStreamId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = r6.liveStreamId
            java.lang.String r4 = "liveStreamId"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L36:
            int r0 = r6.universeLiveType
            if (r0 == 0) goto L41
            int r0 = r6.universeLiveType
            java.lang.String r4 = "universeLiveType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L41:
            long r4 = r6.viewCount
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L4e
            long r4 = r6.viewCount
            java.lang.String r0 = "viewCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L4e:
            java.lang.String r0 = r6.sdkExtraData
            if (r0 == 0) goto L61
            java.lang.String r0 = r6.sdkExtraData
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L61
            java.lang.String r0 = r6.sdkExtraData
            java.lang.String r4 = "sdkExtraData"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L61:
            java.lang.String r0 = r6.adDescription
            if (r0 == 0) goto L74
            java.lang.String r0 = r6.adDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L74
            java.lang.String r0 = r6.adDescription
            java.lang.String r4 = "adDescription"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L74:
            java.lang.String r0 = r6.installAppLabel
            if (r0 == 0) goto L87
            java.lang.String r0 = r6.installAppLabel
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L87
            java.lang.String r0 = r6.installAppLabel
            java.lang.String r4 = "installAppLabel"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L87:
            java.lang.String r0 = r6.openAppLabel
            if (r0 == 0) goto L9a
            java.lang.String r0 = r6.openAppLabel
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9a
            java.lang.String r0 = r6.openAppLabel
            java.lang.String r4 = "openAppLabel"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L9a:
            java.lang.String r0 = r6.adMarkIcon
            if (r0 == 0) goto Lad
            java.lang.String r0 = r6.adMarkIcon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lad
            java.lang.String r0 = r6.adMarkIcon
            java.lang.String r4 = "adMarkIcon"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lad:
            java.lang.String r0 = r6.adGrayMarkIcon
            if (r0 == 0) goto Lc0
            java.lang.String r0 = r6.adGrayMarkIcon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = r6.adGrayMarkIcon
            java.lang.String r4 = "adGrayMarkIcon"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lc0:
            java.lang.String r0 = r6.adSourceDescription
            if (r0 == 0) goto Ld3
            java.lang.String r0 = r6.adSourceDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld3
            java.lang.String r0 = r6.adSourceDescription
            java.lang.String r4 = "adSourceDescription"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Ld3:
            int r0 = r6.adOperationType
            if (r0 == 0) goto Lde
            int r0 = r6.adOperationType
            java.lang.String r4 = "adOperationType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lde:
            java.lang.String r0 = r6.adActionDescription
            if (r0 == 0) goto Lf1
            java.lang.String r0 = r6.adActionDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lf1
            java.lang.String r0 = r6.adActionDescription
            java.lang.String r4 = "adActionDescription"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lf1:
            java.lang.String r0 = r6.adActionBarColor
            if (r0 == 0) goto L104
            java.lang.String r0 = r6.adActionBarColor
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L104
            java.lang.String r0 = r6.adActionBarColor
            java.lang.String r4 = "adActionBarColor"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L104:
            int r0 = r6.adShowDuration
            if (r0 == 0) goto L10f
            int r0 = r6.adShowDuration
            java.lang.String r4 = "adShowDuration"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L10f:
            java.lang.String r0 = r6.appName
            if (r0 == 0) goto L122
            java.lang.String r0 = r6.appName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L122
            java.lang.String r0 = r6.appName
            java.lang.String r4 = "appName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L122:
            java.lang.String r0 = r6.appIconUrl
            if (r0 == 0) goto L135
            java.lang.String r0 = r6.appIconUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L135
            java.lang.String r0 = r6.appIconUrl
            java.lang.String r4 = "appIconUrl"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L135:
            java.lang.String r0 = r6.appPackageName
            if (r0 == 0) goto L148
            java.lang.String r0 = r6.appPackageName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L148
            java.lang.String r0 = r6.appPackageName
            java.lang.String r4 = "appPackageName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L148:
            int r0 = r6.appScore
            if (r0 == 0) goto L153
            int r0 = r6.appScore
            java.lang.String r4 = "appScore"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L153:
            java.lang.String r0 = r6.appDownloadCountDesc
            if (r0 == 0) goto L166
            java.lang.String r0 = r6.appDownloadCountDesc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L166
            java.lang.String r0 = r6.appDownloadCountDesc
            java.lang.String r4 = "appDownloadCountDesc"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L166:
            java.lang.String r0 = r6.appCategory
            if (r0 == 0) goto L179
            java.lang.String r0 = r6.appCategory
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L179
            java.lang.String r0 = r6.appCategory
            java.lang.String r4 = "appCategory"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L179:
            java.lang.String r0 = r6.appVersion
            if (r0 == 0) goto L18c
            java.lang.String r0 = r6.appVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L18c
            java.lang.String r0 = r6.appVersion
            java.lang.String r4 = "appVersion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L18c:
            java.lang.String r0 = r6.corporationName
            if (r0 == 0) goto L19f
            java.lang.String r0 = r6.corporationName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L19f
            java.lang.String r0 = r6.corporationName
            java.lang.String r4 = "corporationName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L19f:
            long r4 = r6.packageSize
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L1ac
            long r2 = r6.packageSize
            java.lang.String r0 = "packageSize"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L1ac:
            java.util.List<java.lang.String> r0 = r6.appImageUrl
            java.lang.String r2 = "appImageUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$MaterialSize r0 = r6.appImageSize
            java.lang.String r2 = "appImageSize"
            com.kwad.sdk.utils.t.a(r7, r2, r0)
            java.lang.String r0 = r6.appDescription
            if (r0 == 0) goto L1cd
            java.lang.String r0 = r6.appDescription
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1cd
            java.lang.String r0 = r6.appDescription
            java.lang.String r2 = "appDescription"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1cd:
            int r0 = r6.enableSkipAd
            if (r0 == 0) goto L1d8
            int r0 = r6.enableSkipAd
            java.lang.String r2 = "enableSkipAd"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1d8:
            int r0 = r6.adCacheSwitch
            java.lang.String r2 = "adCacheSwitch"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            long r2 = r6.adCacheSecond
            java.lang.String r0 = "adCacheSecond"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
            int r0 = r6.adCacheStrategy
            java.lang.String r2 = "adCacheStrategy"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            int r0 = r6.adCacheSize
            java.lang.String r2 = "adCacheSize"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            int r0 = r6.skipSecond
            if (r0 == 0) goto L1ff
            int r0 = r6.skipSecond
            java.lang.String r2 = "skipSecond"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1ff:
            int r0 = r6.ecpm
            if (r0 == 0) goto L20a
            int r0 = r6.ecpm
            java.lang.String r2 = "ecpm"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L20a:
            java.lang.String r0 = r6.videoPlayedNS
            if (r0 == 0) goto L21d
            java.lang.String r0 = r6.videoPlayedNS
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L21d
            java.lang.String r0 = r6.videoPlayedNS
            java.lang.String r2 = "videoPlayedNS"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L21d:
            java.lang.String r0 = r6.productName
            if (r0 == 0) goto L230
            java.lang.String r0 = r6.productName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L230
            java.lang.String r0 = r6.productName
            java.lang.String r2 = "productName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L230:
            com.kwad.sdk.core.response.model.ABParams r0 = r6.mABParams
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "expParam"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.showUrl
            if (r0 == 0) goto L252
            java.lang.String r0 = r6.showUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L252
            java.lang.String r0 = r6.showUrl
            java.lang.String r2 = "showUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L252:
            java.lang.String r0 = r6.clickUrl
            if (r0 == 0) goto L265
            java.lang.String r0 = r6.clickUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L265
            java.lang.String r0 = r6.clickUrl
            java.lang.String r2 = "clickUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L265:
            java.lang.String r0 = r6.convUrl
            if (r0 == 0) goto L278
            java.lang.String r0 = r6.convUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L278
            java.lang.String r0 = r6.convUrl
            java.lang.String r1 = "convUrl"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L278:
            int r0 = r6.adAttributeType
            if (r0 == 0) goto L283
            int r0 = r6.adAttributeType
            java.lang.String r1 = "adAttributeType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L283:
            com.kwad.sdk.core.response.model.AdInfo$H5Config r0 = r6.apiExpParam
            java.lang.String r1 = "apiExpParam"
            com.kwad.sdk.utils.t.a(r7, r1, r0)
            int r0 = r6.taskType
            if (r0 == 0) goto L295
            int r0 = r6.taskType
            java.lang.String r1 = "taskType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L295:
            int r0 = r6.campaignType
            if (r0 == 0) goto L2a0
            int r0 = r6.campaignType
            java.lang.String r1 = "campaignType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L2a0:
            int r0 = r6.itemType
            if (r0 == 0) goto L2ab
            int r0 = r6.itemType
            java.lang.String r1 = "itemType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L2ab:
            int r0 = r6.industryFirstLevelId
            if (r0 == 0) goto L2b6
            int r0 = r6.industryFirstLevelId
            java.lang.String r1 = "industryFirstLevelId"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L2b6:
            boolean r0 = r6.extraClickReward
            if (r0 == 0) goto L2c1
            boolean r0 = r6.extraClickReward
            java.lang.String r1 = "extraClickReward"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L2c1:
            boolean r0 = r6.enableClientProofreadTime
            if (r0 == 0) goto L2cc
            boolean r6 = r6.enableClientProofreadTime
            java.lang.String r0 = "enableClientProofreadTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L2cc:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
