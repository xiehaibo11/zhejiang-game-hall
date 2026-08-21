package com.kwad.sdk.core.b.a;

public final class n implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2> {
    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2 r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.templateDataList = r0
            java.lang.String r0 = "templateDatas"
            org.json.JSONArray r0 = r5.optJSONArray(r0)
            if (r0 == 0) goto L2d
            r1 = 0
        L13:
            int r2 = r0.length()
            if (r1 >= r2) goto L2d
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r2 = new com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData
            r2.<init>()
            org.json.JSONObject r3 = r0.optJSONObject(r1)
            r2.parseJson(r3)
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData> r3 = r4.templateDataList
            r3.add(r2)
            int r1 = r1 + 1
            goto L13
        L2d:
            com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo
            r0.<init>()
            r4.bottomBannerInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo r0 = r4.bottomBannerInfo
            java.lang.String r1 = "bottomBannerInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew
            r0.<init>()
            r4.actionBarInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = r4.actionBarInfo
            java.lang.String r1 = "actionBarInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo
            r0.<init>()
            r4.aggregationCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = r4.aggregationCardInfo
            java.lang.String r1 = "aggregationCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.halfCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.halfCardInfo
            java.lang.String r1 = "halfCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo
            r0.<init>()
            r4.endCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = r4.endCardInfo
            java.lang.String r1 = "endCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo
            r0.<init>()
            r4.interstitialCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r4.interstitialCardInfo
            java.lang.String r1 = "interstitialCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
            r0.<init>()
            r4.feedInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r4.feedInfo
            java.lang.String r1 = "feedInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
            r0.<init>()
            r4.adUnionFeedLiveMediaInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r4.adUnionFeedLiveMediaInfo
            java.lang.String r1 = "adUnionFeedLiveMediaInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
            r0.<init>()
            r4.adUnionFeedLiveTemplateInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r4.adUnionFeedLiveTemplateInfo
            java.lang.String r1 = "adUnionFeedLiveTemplateInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.complianceCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.complianceCardInfo
            java.lang.String r1 = "complianceCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.downloadConfirmCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.downloadConfirmCardInfo
            java.lang.String r1 = "downloadConfirmCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo
            r0.<init>()
            r4.splashInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r4.splashInfo
            java.lang.String r1 = "splashInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo
            r0.<init>()
            r4.neoVideoInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r4.neoVideoInfo
            java.lang.String r1 = "neoVideoInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo
            r0.<init>()
            r4.fullScreenInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r4.fullScreenInfo
            java.lang.String r1 = "fullScreenInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.middleTKCardInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.middleTKCardInfo
            java.lang.String r1 = "middleTKCardInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.actionBarTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.actionBarTKInfo
            java.lang.String r1 = "actionBarTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.topBarTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.topBarTKInfo
            java.lang.String r1 = "topBarTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo
            r0.<init>()
            r4.splashPlayCardTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo r0 = r4.splashPlayCardTKInfo
            java.lang.String r1 = "splashPlayCardTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo
            r0.<init>()
            r4.splashEndCardTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r4.splashEndCardTKInfo
            java.lang.String r1 = "splashEndCardTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo
            r0.<init>()
            r4.topFloorTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo r0 = r4.topFloorTKInfo
            java.lang.String r1 = "topFloorTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo
            r0.<init>()
            r4.activityMiddlePageInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = r4.activityMiddlePageInfo
            java.lang.String r1 = "activityMiddlePageInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.confirmTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.confirmTKInfo
            java.lang.String r1 = "confirmTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.playendTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.playendTKInfo
            java.lang.String r1 = "playendTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.activityTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.activityTKInfo
            java.lang.String r1 = "activityTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.neoTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.neoTKInfo
            java.lang.String r1 = "neoTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo
            r0.<init>()
            r4.rewardVideoInteractInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r4.rewardVideoInteractInfo
            java.lang.String r1 = "rewardVideoInteractInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo
            r0.<init>()
            r4.rewardVideoTaskInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r4.rewardVideoTaskInfo
            java.lang.String r1 = "rewardVideoTaskInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo
            r0.<init>()
            r4.mRewardWebTaskCloseInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo r0 = r4.mRewardWebTaskCloseInfo
            java.lang.String r1 = "mRewardWebTaskCloseInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo
            r0.<init>()
            r4.merchantLiveReservationInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = r4.merchantLiveReservationInfo
            java.lang.String r1 = "merchantLiveReservationInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo
            r0.<init>()
            r4.pushTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo r0 = r4.pushTKInfo
            java.lang.String r1 = "pushTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.splashActionBarInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.splashActionBarInfo
            java.lang.String r1 = "splashActionBarInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.videoLiveTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r4.videoLiveTKInfo
            java.lang.String r1 = "videoLiveTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo
            r0.<init>()
            r4.preLandingPageTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r4.preLandingPageTKInfo
            java.lang.String r1 = "preLandingPageTKInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo
            r0.<init>()
            r4.installedActivateInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r0 = r4.installedActivateInfo
            java.lang.String r1 = "installedActivateInfo"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
            r0.<init>()
            r4.videoImageTKInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r4 = r4.videoImageTKInfo
            java.lang.String r0 = "videoImageTKInfo"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            r4.parseJson(r5)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2 r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData> r0 = r2.templateDataList
            java.lang.String r1 = "templateDatas"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo r0 = r2.bottomBannerInfo
            java.lang.String r1 = "bottomBannerInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = r2.actionBarInfo
            java.lang.String r1 = "actionBarInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = r2.aggregationCardInfo
            java.lang.String r1 = "aggregationCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.halfCardInfo
            java.lang.String r1 = "halfCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = r2.endCardInfo
            java.lang.String r1 = "endCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r2.interstitialCardInfo
            java.lang.String r1 = "interstitialCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r2.feedInfo
            java.lang.String r1 = "feedInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r2.adUnionFeedLiveMediaInfo
            java.lang.String r1 = "adUnionFeedLiveMediaInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r2.adUnionFeedLiveTemplateInfo
            java.lang.String r1 = "adUnionFeedLiveTemplateInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.complianceCardInfo
            java.lang.String r1 = "complianceCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.downloadConfirmCardInfo
            java.lang.String r1 = "downloadConfirmCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r2.splashInfo
            java.lang.String r1 = "splashInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r2.neoVideoInfo
            java.lang.String r1 = "neoVideoInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r2.fullScreenInfo
            java.lang.String r1 = "fullScreenInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.middleTKCardInfo
            java.lang.String r1 = "middleTKCardInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.actionBarTKInfo
            java.lang.String r1 = "actionBarTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.topBarTKInfo
            java.lang.String r1 = "topBarTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo r0 = r2.splashPlayCardTKInfo
            java.lang.String r1 = "splashPlayCardTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r2.splashEndCardTKInfo
            java.lang.String r1 = "splashEndCardTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo r0 = r2.topFloorTKInfo
            java.lang.String r1 = "topFloorTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = r2.activityMiddlePageInfo
            java.lang.String r1 = "activityMiddlePageInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.confirmTKInfo
            java.lang.String r1 = "confirmTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.playendTKInfo
            java.lang.String r1 = "playendTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.activityTKInfo
            java.lang.String r1 = "activityTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.neoTKInfo
            java.lang.String r1 = "neoTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r2.rewardVideoInteractInfo
            java.lang.String r1 = "rewardVideoInteractInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r2.rewardVideoTaskInfo
            java.lang.String r1 = "rewardVideoTaskInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo r0 = r2.mRewardWebTaskCloseInfo
            java.lang.String r1 = "mRewardWebTaskCloseInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = r2.merchantLiveReservationInfo
            java.lang.String r1 = "merchantLiveReservationInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo r0 = r2.pushTKInfo
            java.lang.String r1 = "pushTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.splashActionBarInfo
            java.lang.String r1 = "splashActionBarInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r2.videoLiveTKInfo
            java.lang.String r1 = "videoLiveTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r2.preLandingPageTKInfo
            java.lang.String r1 = "preLandingPageTKInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r0 = r2.installedActivateInfo
            java.lang.String r1 = "installedActivateInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r2 = r2.videoImageTKInfo
            java.lang.String r0 = "videoImageTKInfo"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
