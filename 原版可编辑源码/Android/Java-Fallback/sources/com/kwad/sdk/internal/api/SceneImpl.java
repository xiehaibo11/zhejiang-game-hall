package com.kwad.sdk.internal.api;

public class SceneImpl extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.api.KsScene, java.io.Serializable, java.lang.Cloneable {
    private static final long serialVersionUID = 93865491903408451L;
    public int action;
    public int adNum;
    public int adStyle;
    public java.lang.String backUrl;
    public java.lang.String bidResponse;
    public java.lang.String bidResponseV2;
    public long entryScene;
    public int height;
    public final com.kwad.sdk.internal.api.EcAttribute mEcAttribute;
    public transient com.kwad.sdk.internal.api.a mKsAdLabel;
    public com.kwad.sdk.internal.api.NativeAdExtraDataImpl nativeAdExtraData;
    public long posId;
    public java.util.Map<java.lang.String, java.lang.String> rewardCallbackExtraData;
    public int screenOrientation;
    public com.kwad.sdk.internal.api.b splashExtraData;
    public com.kwad.sdk.core.scene.URLPackage urlPackage;
    public int width;

    public SceneImpl() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.adNum = r0
            r0 = 0
            r1.screenOrientation = r0
            com.kwad.sdk.internal.api.EcAttribute r0 = new com.kwad.sdk.internal.api.EcAttribute
            r0.<init>()
            r1.mEcAttribute = r0
            return
    }

    public SceneImpl(long r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.adNum = r0
            r0 = 0
            r2.screenOrientation = r0
            com.kwad.sdk.internal.api.EcAttribute r0 = new com.kwad.sdk.internal.api.EcAttribute
            r0.<init>()
            r2.mEcAttribute = r0
            r2.posId = r3
            r2.entryScene = r3
            long r3 = com.kwad.sdk.utils.bf.getPosId()
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 == 0) goto L24
            long r3 = com.kwad.sdk.utils.bf.getPosId()
            r2.posId = r3
        L24:
            return
    }

    public static com.kwad.sdk.internal.api.SceneImpl covert(com.kwad.sdk.api.KsScene r5) {
            boolean r0 = r5 instanceof com.kwad.sdk.internal.api.SceneImpl
            if (r0 == 0) goto L7
            com.kwad.sdk.internal.api.SceneImpl r5 = (com.kwad.sdk.internal.api.SceneImpl) r5
            return r5
        L7:
            com.kwad.sdk.internal.api.SceneImpl r0 = new com.kwad.sdk.internal.api.SceneImpl
            r0.<init>()
            long r1 = r5.getPosId()
            r0.posId = r1
            long r1 = r5.getPosId()
            r0.entryScene = r1
            int r1 = r5.getAdNum()
            r0.adNum = r1
            int r1 = r5.getAction()
            r0.action = r1
            int r1 = r5.getWidth()
            r0.width = r1
            int r1 = r5.getHeight()
            r0.height = r1
            int r1 = r5.getAdStyle()
            r0.adStyle = r1
            int r1 = getScreenOrientation(r5)
            r0.screenOrientation = r1
            java.lang.String r1 = getBackUrl(r5)
            r0.backUrl = r1
            com.kwad.sdk.internal.api.EcAttribute r1 = r0.mEcAttribute
            java.lang.String r2 = getPromoteId(r5)
            r1.setPromoteId(r2)
            com.kwad.sdk.internal.api.EcAttribute r1 = r0.mEcAttribute
            java.lang.String r2 = getComment(r5)
            r1.setComment(r2)
            com.kwad.sdk.internal.api.EcAttribute r1 = r0.mEcAttribute
            long r2 = getUserCommRateBuying(r5)
            r1.setUserCommRateBuying(r2)
            com.kwad.sdk.internal.api.EcAttribute r1 = r0.mEcAttribute
            long r2 = getUserCommRateSharing(r5)
            r1.setUserCommRateSharing(r2)
            long r1 = com.kwad.sdk.utils.bf.getPosId()
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L76
            long r1 = com.kwad.sdk.utils.bf.getPosId()
            r0.posId = r1
        L76:
            return r0
    }

    public static java.lang.String getBackUrl(com.kwad.sdk.api.KsScene r1) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r1.getBackUrl()     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }

    private static java.lang.String getComment(com.kwad.sdk.api.KsScene r1) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r1.getComment()     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }

    private static java.lang.String getPromoteId(com.kwad.sdk.api.KsScene r1) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r1.getPromoteId()     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }

    private static int getScreenOrientation(com.kwad.sdk.api.KsScene r0) {
            int r0 = r0.getScreenOrientation()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static long getSerialVersionUID() {
            r0 = 93865491903408451(0x14d7a2ae591e943, double:2.1492198632728656E-302)
            return r0
    }

    public static long getUserCommRateBuying(com.kwad.sdk.api.KsScene r2) {
            r0 = 0
            if (r2 != 0) goto L5
            return r0
        L5:
            long r0 = r2.getUserCommRateBuying()     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }

    public static long getUserCommRateSharing(com.kwad.sdk.api.KsScene r2) {
            r0 = 0
            if (r2 != 0) goto L5
            return r0
        L5:
            long r0 = r2.getUserCommRateSharing()     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.KsScene> r0 = com.kwad.sdk.api.KsScene.class
            java.lang.Class<com.kwad.sdk.internal.api.SceneImpl> r1 = com.kwad.sdk.internal.api.SceneImpl.class
            com.kwad.sdk.service.b.b(r0, r1)
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r2) {
            r1 = this;
            super.afterParseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "extraData"
            java.lang.String r2 = r2.optString(r0)
            java.util.Map r2 = com.kwad.sdk.utils.u.parseJSON2MapString(r2)
            r1.rewardCallbackExtraData = r2
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.rewardCallbackExtraData
            org.json.JSONObject r0 = com.kwad.sdk.utils.u.parseMap2JSON(r0)
            java.lang.String r1 = "extraData"
            com.kwad.sdk.utils.u.putValue(r3, r1, r0)
            return
    }

    public com.kwad.sdk.internal.api.SceneImpl clone() {
            r3 = this;
            org.json.JSONObject r0 = r3.toJson()
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.internal.api.SceneImpl r1 = new com.kwad.sdk.internal.api.SceneImpl     // Catch: org.json.JSONException -> L16
            r1.<init>()     // Catch: org.json.JSONException -> L16
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            r2.<init>(r0)     // Catch: org.json.JSONException -> L16
            r1.parseJson(r2)     // Catch: org.json.JSONException -> L16
            return r1
        L16:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            com.kwad.sdk.internal.api.SceneImpl r0 = new com.kwad.sdk.internal.api.SceneImpl
            r0.<init>()
            return r0
    }

    public java.lang.Object clone() {
            r1 = this;
            com.kwad.sdk.internal.api.SceneImpl r0 = r1.clone()
            return r0
    }

    @Override
    public int getAction() {
            r1 = this;
            int r0 = r1.action
            return r0
    }

    @Override
    public int getAdNum() {
            r1 = this;
            int r0 = r1.adNum
            return r0
    }

    @Override
    public int getAdStyle() {
            r1 = this;
            int r0 = r1.adStyle
            return r0
    }

    @Override
    public java.lang.String getBackUrl() {
            r1 = this;
            java.lang.String r0 = r1.backUrl
            return r0
    }

    @Override
    public java.lang.String getBidResponse() {
            r1 = this;
            java.lang.String r0 = r1.bidResponse
            return r0
    }

    @Override
    public java.lang.String getBidResponseV2() {
            r1 = this;
            java.lang.String r0 = r1.bidResponseV2
            return r0
    }

    @Override
    public java.lang.String getComment() {
            r1 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r1.mEcAttribute
            java.lang.String r0 = r0.getComment()
            return r0
    }

    @Override
    public int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public int getPageScene() {
            r1 = this;
            com.kwad.sdk.core.scene.URLPackage r0 = r1.urlPackage
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.page
            return r0
    }

    @Override
    public long getPosId() {
            r2 = this;
            long r0 = r2.posId
            return r0
    }

    @Override
    public java.lang.String getPromoteId() {
            r1 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r1.mEcAttribute
            java.lang.String r0 = r0.getPromoteId()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getRewardCallbackExtraData() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.rewardCallbackExtraData
            return r0
    }

    @Override
    public int getScreenOrientation() {
            r1 = this;
            int r0 = r1.screenOrientation
            return r0
    }

    public com.kwad.sdk.core.scene.URLPackage getUrlPackage() {
            r1 = this;
            com.kwad.sdk.core.scene.URLPackage r0 = r1.urlPackage
            return r0
    }

    @Override
    public long getUserCommRateBuying() {
            r2 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r2.mEcAttribute
            long r0 = r0.getUserCommRateBuying()
            return r0
    }

    @Override
    public long getUserCommRateSharing() {
            r2 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r2.mEcAttribute
            long r0 = r0.getUserCommRateSharing()
            return r0
    }

    @Override
    public int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    public void needShowMiniWindow(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setAction(int r1) {
            r0 = this;
            r0.action = r1
            return
    }

    @Override
    public void setAdNum(int r1) {
            r0 = this;
            r0.adNum = r1
            return
    }

    @Override
    public void setAdStyle(int r1) {
            r0 = this;
            r0.adStyle = r1
            return
    }

    @Override
    public void setBackUrl(java.lang.String r1) {
            r0 = this;
            r0.backUrl = r1
            return
    }

    @Override
    public void setBidResponse(java.lang.String r1) {
            r0 = this;
            r0.bidResponse = r1
            return
    }

    @Override
    public void setBidResponseV2(java.lang.String r1) {
            r0 = this;
            r0.bidResponseV2 = r1
            return
    }

    @Override
    public void setComment(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r1.mEcAttribute
            r0.setComment(r2)
            return
    }

    @Override
    public void setHeight(int r1) {
            r0 = this;
            r0.height = r1
            return
    }

    @Override
    public void setKsAdLabel(com.kwad.sdk.api.model.IKsAdLabel r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            com.kwad.sdk.internal.api.a r0 = new com.kwad.sdk.internal.api.a
            r0.<init>()
            r3.mKsAdLabel = r0
            int r1 = r4.getThirdAge()
            r0.ajr = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            int r1 = r4.getThirdGender()
            r0.ajs = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            java.lang.String r1 = r4.getThirdInterest()
            r0.ajt = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            java.lang.String r1 = r4.getPrevTitle()
            r0.aju = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            java.lang.String r1 = r4.getPostTitle()
            r0.ajv = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            java.lang.String r1 = r4.getHistoryTitle()
            r0.ajw = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            java.lang.String r1 = r4.getChannel()
            r0.ajx = r1
            com.kwad.sdk.internal.api.a r0 = r3.mKsAdLabel
            long r1 = r4.getCpmBidFloor()
            r0.ajy = r1
            return
    }

    @Override
    public void setNativeAdExtraData(com.kwad.sdk.api.model.NativeAdExtraData r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = new com.kwad.sdk.internal.api.NativeAdExtraDataImpl
            r0.<init>()
            r2.nativeAdExtraData = r0
            boolean r1 = r3.isEnableShake()     // Catch: java.lang.Throwable -> L20
            r0.enableShake = r1     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r2.nativeAdExtraData     // Catch: java.lang.Throwable -> L20
            int r1 = r3.getShowLiveStyle()     // Catch: java.lang.Throwable -> L20
            r0.showLiveStyle = r1     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r2.nativeAdExtraData     // Catch: java.lang.Throwable -> L20
            int r3 = r3.getShowLiveStatus()     // Catch: java.lang.Throwable -> L20
            r0.showLiveStatus = r3     // Catch: java.lang.Throwable -> L20
        L20:
            return
    }

    @Override
    public void setPosId(long r1) {
            r0 = this;
            r0.posId = r1
            r0.entryScene = r1
            return
    }

    @Override
    public void setPromoteId(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r1.mEcAttribute
            r0.setPromoteId(r2)
            return
    }

    @Override
    public void setRewardCallbackExtraData(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.rewardCallbackExtraData = r1
            return
    }

    @Override
    public void setScreenOrientation(int r1) {
            r0 = this;
            r0.screenOrientation = r1
            return
    }

    @Override
    public void setSplashExtraData(com.kwad.sdk.api.model.SplashAdExtraData r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.internal.api.b r0 = new com.kwad.sdk.internal.api.b
            r0.<init>()
            r2.splashExtraData = r0
            boolean r1 = r3.getDisableShakeStatus()
            r0.disableShake = r1
            com.kwad.sdk.internal.api.b r0 = r2.splashExtraData
            boolean r1 = r3.getDisableSlideStatus()
            r0.disableSlide = r1
            com.kwad.sdk.internal.api.b r0 = r2.splashExtraData
            boolean r3 = r3.getDisableRotateStatus()
            r0.disableRotate = r3
            return
    }

    public void setUrlPackage(com.kwad.sdk.core.scene.URLPackage r1) {
            r0 = this;
            r0.urlPackage = r1
            return
    }

    @Override
    public void setUserCommRateBuying(int r4) {
            r3 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r3.mEcAttribute
            long r1 = (long) r4
            r0.setUserCommRateBuying(r1)
            return
    }

    @Override
    public void setUserCommRateSharing(int r4) {
            r3 = this;
            com.kwad.sdk.internal.api.EcAttribute r0 = r3.mEcAttribute
            long r1 = (long) r4
            r0.setUserCommRateSharing(r1)
            return
    }

    @Override
    public void setWidth(int r1) {
            r0 = this;
            r0.width = r1
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r5.posId
            java.lang.String r3 = "posId"
            com.kwad.sdk.utils.u.putValue(r0, r3, r1)
            long r1 = r5.entryScene
            java.lang.String r3 = "entryScene"
            com.kwad.sdk.utils.u.putValue(r0, r3, r1)
            int r1 = r5.adNum
            java.lang.String r2 = "adNum"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            int r1 = r5.action
            java.lang.String r2 = "action"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            int r1 = r5.width
            java.lang.String r2 = "width"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            int r1 = r5.height
            java.lang.String r2 = "height"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            com.kwad.sdk.internal.api.a r1 = r5.mKsAdLabel
            if (r1 == 0) goto L44
            long r1 = r1.ajy
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L44
            com.kwad.sdk.internal.api.a r1 = r5.mKsAdLabel
            long r1 = r1.ajy
            java.lang.String r3 = "cpmBidFloor"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
        L44:
            int r1 = r5.adStyle
            java.lang.String r2 = "adStyle"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            com.kwad.sdk.core.scene.URLPackage r1 = r5.urlPackage
            if (r1 == 0) goto L58
            org.json.JSONObject r1 = r1.toJson()
            java.lang.String r2 = "urlPackage"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
        L58:
            com.kwad.sdk.internal.api.EcAttribute r1 = r5.mEcAttribute
            java.lang.String r1 = r1.getPromoteId()
            java.lang.String r2 = "promoteId"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            com.kwad.sdk.internal.api.EcAttribute r1 = r5.mEcAttribute
            java.lang.String r1 = r1.getComment()
            java.lang.String r2 = "comment"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            java.lang.String r1 = r5.backUrl
            java.lang.String r2 = "backUrl"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            com.kwad.sdk.internal.api.EcAttribute r1 = r5.mEcAttribute
            long r1 = r1.getUserCommRateBuying()
            java.lang.String r3 = "userCommRateBuying"
            com.kwad.sdk.utils.u.putValue(r0, r3, r1)
            com.kwad.sdk.internal.api.EcAttribute r1 = r5.mEcAttribute
            long r1 = r1.getUserCommRateSharing()
            java.lang.String r3 = "userCommRateSharing"
            com.kwad.sdk.utils.u.putValue(r0, r3, r1)
            int r1 = r5.screenOrientation
            java.lang.String r2 = "screenOrientation"
            com.kwad.sdk.utils.u.putValue(r0, r2, r1)
            return r0
    }
}
