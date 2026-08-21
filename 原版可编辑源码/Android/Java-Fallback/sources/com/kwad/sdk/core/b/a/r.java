package com.kwad.sdk.core.b.a;

public final class r implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo> {
    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo
            r0.<init>()
            r4.adBaseInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r4.adBaseInfo
            java.lang.String r1 = "adBaseInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo
            r0.<init>()
            r4.advertiserInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r4.advertiserInfo
            java.lang.String r1 = "advertiserInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo
            r0.<init>()
            r4.adConversionInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r4.adConversionInfo
            java.lang.String r1 = "adConversionInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo
            r0.<init>()
            r4.adMaterialInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r4.adMaterialInfo
            java.lang.String r1 = "adMaterialInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.adTrackInfoList = r0
            java.lang.String r0 = "adTrackInfo"
            org.json.JSONArray r0 = r5.optJSONArray(r0)
            if (r0 == 0) goto L75
            r1 = 0
        L5b:
            int r2 = r0.length()
            if (r1 >= r2) goto L75
            com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo r2 = new com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo
            r2.<init>()
            org.json.JSONObject r3 = r0.optJSONObject(r1)
            r2.parseJson(r3)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo> r3 = r4.adTrackInfoList
            r3.add(r2)
            int r1 = r1 + 1
            goto L5b
        L75:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo
            r0.<init>()
            r4.downloadSafeInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r4.downloadSafeInfo
            java.lang.String r1 = "downloadSafeInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r0 = new com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf
            r0.<init>()
            r4.unDownloadConf = r0
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r0 = r4.unDownloadConf
            java.lang.String r1 = "unDownloadConf"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "status"
            int r0 = r5.optInt(r0)
            r4.status = r0
            java.lang.String r0 = "progress"
            int r0 = r5.optInt(r0)
            r4.progress = r0
            java.lang.String r0 = "soFarBytes"
            long r0 = r5.optLong(r0)
            r4.soFarBytes = r0
            java.lang.String r0 = "totalBytes"
            long r0 = r5.optLong(r0)
            r4.totalBytes = r0
            java.lang.String r0 = "downloadFilePath"
            java.lang.String r0 = r5.optString(r0)
            r4.downloadFilePath = r0
            java.lang.String r0 = r4.downloadFilePath
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto Lcb
            r4.downloadFilePath = r2
        Lcb:
            java.lang.String r0 = "downloadId"
            java.lang.String r0 = r5.optString(r0)
            r4.downloadId = r0
            java.lang.String r0 = r4.downloadId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Ldb
            r4.downloadId = r2
        Ldb:
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo
            r0.<init>()
            r4.adPreloadInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = r4.adPreloadInfo
            java.lang.String r1 = "adPreloadInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo
            r0.<init>()
            r4.adSplashInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r4.adSplashInfo
            java.lang.String r1 = "adSplashInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo
            r0.<init>()
            r4.adStyleInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = r4.adStyleInfo
            java.lang.String r1 = "adStyleInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo
            r0.<init>()
            r4.adStyleInfo2 = r0
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = r4.adStyleInfo2
            java.lang.String r1 = "adStyleInfo2"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo
            r0.<init>()
            r4.adAggregateInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo r0 = r4.adAggregateInfo
            java.lang.String r1 = "adAggregateInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo
            r0.<init>()
            r4.adRewardInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r4.adRewardInfo
            java.lang.String r1 = "adRewardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "serverExt"
            java.lang.String r0 = r5.optString(r0)
            r4.serverExt = r0
            java.lang.String r0 = r4.serverExt
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L157
            r4.serverExt = r2
        L157:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo
            r0.<init>()
            r4.adStyleConfInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r4.adStyleConfInfo
            java.lang.String r1 = "adStyleConfInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo
            r0.<init>()
            r4.fullScreenVideoInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = r4.fullScreenVideoInfo
            java.lang.String r1 = "fullScreenVideoInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo
            r0.<init>()
            r4.adFeedInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r0 = r4.adFeedInfo
            java.lang.String r1 = "adFeedInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo
            r0.<init>()
            r4.adInsertScreenInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r4.adInsertScreenInfo
            java.lang.String r1 = "adInsertScreenInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdProductInfo r0 = new com.kwad.sdk.core.response.model.AdProductInfo
            r0.<init>()
            r4.adProductInfo = r0
            com.kwad.sdk.core.response.model.AdProductInfo r0 = r4.adProductInfo
            java.lang.String r1 = "adProductInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "ocpcActionType"
            int r0 = r5.optInt(r0)
            r4.ocpcActionType = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo
            r0.<init>()
            r4.adMatrixInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r4.adMatrixInfo
            java.lang.String r1 = "adMatrixInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "trace"
            java.lang.String r5 = r5.optString(r0)
            r4.trace = r5
            java.lang.String r5 = r4.trace
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r5 != r0) goto L1db
            r4.trace = r2
        L1db:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r5.adBaseInfo
            java.lang.String r1 = "adBaseInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r5.advertiserInfo
            java.lang.String r1 = "advertiserInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r5.adConversionInfo
            java.lang.String r1 = "adConversionInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r5.adMaterialInfo
            java.lang.String r1 = "adMaterialInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo> r0 = r5.adTrackInfoList
            java.lang.String r1 = "adTrackInfo"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r5.downloadSafeInfo
            java.lang.String r1 = "downloadSafeInfo"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r0 = r5.unDownloadConf
            java.lang.String r1 = "unDownloadConf"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            int r0 = r5.status
            if (r0 == 0) goto L43
            int r0 = r5.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L43:
            int r0 = r5.progress
            if (r0 == 0) goto L4e
            int r0 = r5.progress
            java.lang.String r1 = "progress"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L4e:
            long r0 = r5.soFarBytes
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L5d
            long r0 = r5.soFarBytes
            java.lang.String r4 = "soFarBytes"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L5d:
            long r0 = r5.totalBytes
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L6a
            long r0 = r5.totalBytes
            java.lang.String r2 = "totalBytes"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L6a:
            java.lang.String r0 = r5.downloadFilePath
            java.lang.String r1 = ""
            if (r0 == 0) goto L7f
            java.lang.String r0 = r5.downloadFilePath
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7f
            java.lang.String r0 = r5.downloadFilePath
            java.lang.String r2 = "downloadFilePath"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L7f:
            java.lang.String r0 = r5.downloadId
            if (r0 == 0) goto L92
            java.lang.String r0 = r5.downloadId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L92
            java.lang.String r0 = r5.downloadId
            java.lang.String r2 = "downloadId"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L92:
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = r5.adPreloadInfo
            java.lang.String r2 = "adPreloadInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r5.adSplashInfo
            java.lang.String r2 = "adSplashInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = r5.adStyleInfo
            java.lang.String r2 = "adStyleInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = r5.adStyleInfo2
            java.lang.String r2 = "adStyleInfo2"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo r0 = r5.adAggregateInfo
            java.lang.String r2 = "adAggregateInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r5.adRewardInfo
            java.lang.String r2 = "adRewardInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            java.lang.String r0 = r5.serverExt
            if (r0 == 0) goto Lcf
            java.lang.String r0 = r5.serverExt
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lcf
            java.lang.String r0 = r5.serverExt
            java.lang.String r2 = "serverExt"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        Lcf:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r5.adStyleConfInfo
            java.lang.String r2 = "adStyleConfInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = r5.fullScreenVideoInfo
            java.lang.String r2 = "fullScreenVideoInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r0 = r5.adFeedInfo
            java.lang.String r2 = "adFeedInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r5.adInsertScreenInfo
            java.lang.String r2 = "adInsertScreenInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            com.kwad.sdk.core.response.model.AdProductInfo r0 = r5.adProductInfo
            java.lang.String r2 = "adProductInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            int r0 = r5.ocpcActionType
            if (r0 == 0) goto Lfd
            int r0 = r5.ocpcActionType
            java.lang.String r2 = "ocpcActionType"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        Lfd:
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r5.adMatrixInfo
            java.lang.String r2 = "adMatrixInfo"
            com.kwad.sdk.utils.t.a(r6, r2, r0)
            java.lang.String r0 = r5.trace
            if (r0 == 0) goto L117
            java.lang.String r0 = r5.trace
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L117
            java.lang.String r5 = r5.trace
            java.lang.String r0 = "trace"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        L117:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo r1 = (com.kwad.sdk.core.response.model.AdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo r1 = (com.kwad.sdk.core.response.model.AdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
