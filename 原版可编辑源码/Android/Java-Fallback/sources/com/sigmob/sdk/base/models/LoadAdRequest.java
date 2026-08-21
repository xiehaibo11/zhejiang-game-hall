package com.sigmob.sdk.base.models;

public class LoadAdRequest implements java.io.Serializable {
    private int ad_count;
    private java.lang.String ad_scene;
    private java.lang.String ad_scene_desc;
    private java.lang.String ad_scene_id;
    private int bidFloor;
    private java.lang.String bidToken;
    private java.lang.String currency;
    private boolean disableAutoHideAd;
    private boolean enable_keep_on;
    private boolean enable_screen_lock_displayad;
    private boolean isExpired;
    private boolean isHalfInterstitial;
    private java.lang.String last_campid;
    private java.lang.String last_crid;
    private final int mAdtype;
    private java.lang.String mLoadId;
    private java.util.Map<java.lang.String, java.lang.String> mOptions;
    private final java.lang.String mPlacementId;
    private final java.lang.String mUserId;
    private java.lang.String requestId;
    private int request_scene_type;

    public LoadAdRequest(com.sigmob.windad.WindAdRequest r5) {
            r4 = this;
            r4.<init>()
            r0 = 1
            r4.ad_count = r0
            java.lang.String r0 = r5.getUserId()
            r4.mUserId = r0
            java.lang.String r0 = r5.getLoadId()
            r4.mLoadId = r0
            int r0 = r5.getAdType()
            r4.mAdtype = r0
            boolean r0 = r5.isHalfInterstitial()
            r4.isHalfInterstitial = r0
            java.lang.String r0 = r5.getPlacementId()
            r4.mPlacementId = r0
            boolean r0 = r5 instanceof com.sigmob.windad.Splash.WindSplashAdRequest
            if (r0 == 0) goto L32
            r0 = r5
            com.sigmob.windad.Splash.WindSplashAdRequest r0 = (com.sigmob.windad.Splash.WindSplashAdRequest) r0
            boolean r0 = r0.isDisableAutoHideAd()
            r4.disableAutoHideAd = r0
            goto L58
        L32:
            boolean r0 = r5 instanceof com.sigmob.windad.interstitial.WindInterstitialAdRequest
            if (r0 == 0) goto L46
            r0 = r5
            com.sigmob.windad.interstitial.WindInterstitialAdRequest r0 = (com.sigmob.windad.interstitial.WindInterstitialAdRequest) r0
            boolean r1 = r0.isEnableKeepOn()
            r4.enable_keep_on = r1
            boolean r0 = r0.isEnableScreenLockDisPlayAd()
        L43:
            r4.enable_screen_lock_displayad = r0
            goto L58
        L46:
            boolean r0 = r5 instanceof com.sigmob.windad.rewardVideo.WindRewardAdRequest
            if (r0 == 0) goto L58
            r0 = r5
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r0 = (com.sigmob.windad.rewardVideo.WindRewardAdRequest) r0
            boolean r1 = r0.isEnableKeepOn()
            r4.enable_keep_on = r1
            boolean r0 = r0.isEnableScreenLockDisPlayAd()
            goto L43
        L58:
            boolean r0 = r5.hasOptions()
            if (r0 == 0) goto L9b
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.mOptions = r0
            java.util.Map r0 = r5.getOptions()
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L71:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L9b
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map r2 = r5.getOptions()
            java.lang.Object r2 = r2.get(r1)
            boolean r3 = r2 instanceof java.lang.String
            if (r3 == 0) goto L8c
            java.lang.String r2 = (java.lang.String) r2
            goto L95
        L8c:
            if (r2 == 0) goto L93
            java.lang.String r2 = r2.toString()
            goto L95
        L93:
            java.lang.String r2 = ""
        L95:
            java.util.Map<java.lang.String, java.lang.String> r3 = r4.mOptions
            r3.put(r1, r2)
            goto L71
        L9b:
            return
    }

    public int getAdCount() {
            r1 = this;
            int r0 = r1.ad_count
            return r0
    }

    public java.lang.String getAdSceneDesc() {
            r1 = this;
            java.lang.String r0 = r1.ad_scene_desc
            return r0
    }

    public java.lang.String getAdSceneId() {
            r1 = this;
            java.lang.String r0 = r1.ad_scene_id
            return r0
    }

    public int getAdType() {
            r1 = this;
            int r0 = r1.mAdtype
            return r0
    }

    public int getBidFloor() {
            r1 = this;
            int r0 = r1.bidFloor
            return r0
    }

    public java.lang.String getBidToken() {
            r1 = this;
            java.lang.String r0 = r1.bidToken
            return r0
    }

    public java.lang.String getCurrency() {
            r1 = this;
            java.lang.String r0 = r1.currency
            return r0
    }

    public java.lang.String getLastCampid() {
            r1 = this;
            java.lang.String r0 = r1.last_campid
            return r0
    }

    public java.lang.String getLastCrid() {
            r1 = this;
            java.lang.String r0 = r1.last_crid
            return r0
    }

    public java.lang.String getLoadId() {
            r1 = this;
            java.lang.String r0 = r1.mLoadId
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getOptions() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mOptions
            return r0
    }

    public java.lang.String getPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.mPlacementId
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.requestId
            return r0
    }

    public int getRequest_scene_type() {
            r1 = this;
            int r0 = r1.request_scene_type
            return r0
    }

    public java.lang.String getUserId() {
            r1 = this;
            java.lang.String r0 = r1.mUserId
            return r0
    }

    public boolean isDisableAutoHideAd() {
            r1 = this;
            boolean r0 = r1.disableAutoHideAd
            return r0
    }

    public boolean isEnable_keep_on() {
            r1 = this;
            boolean r0 = r1.enable_keep_on
            return r0
    }

    public boolean isEnable_screen_lock_displayad() {
            r1 = this;
            boolean r0 = r1.enable_screen_lock_displayad
            return r0
    }

    public boolean isExpired() {
            r1 = this;
            boolean r0 = r1.isExpired
            return r0
    }

    public boolean isHalfInterstitial() {
            r1 = this;
            boolean r0 = r1.isHalfInterstitial
            return r0
    }

    public void setAd_count(int r1) {
            r0 = this;
            r0.ad_count = r1
            return
    }

    public void setAd_scene_desc(java.lang.String r1) {
            r0 = this;
            r0.ad_scene_desc = r1
            return
    }

    public void setAd_scene_id(java.lang.String r1) {
            r0 = this;
            r0.ad_scene_id = r1
            return
    }

    public void setBidFloor(int r1) {
            r0 = this;
            r0.bidFloor = r1
            return
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setBidToken(java.lang.String r1) {
            r0 = this;
            r0.bidToken = r1
            return r0
    }

    public void setCurrency(java.lang.String r1) {
            r0 = this;
            r0.currency = r1
            return
    }

    public void setDisableAutoHideAd(boolean r1) {
            r0 = this;
            r0.disableAutoHideAd = r1
            return
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setExpired(boolean r1) {
            r0 = this;
            r0.isExpired = r1
            return r0
    }

    public void setHalfInterstitial(boolean r1) {
            r0 = this;
            r0.isHalfInterstitial = r1
            return
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setLastCampid(java.lang.String r1) {
            r0 = this;
            r0.last_campid = r1
            return r0
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setLastCrid(java.lang.String r1) {
            r0 = this;
            r0.last_crid = r1
            return r0
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setLoadId(java.lang.String r1) {
            r0 = this;
            r0.mLoadId = r1
            return r0
    }

    public void setOptions(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mOptions
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mOptions = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mOptions
            r0.putAll(r2)
            return
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setRequestId(java.lang.String r1) {
            r0 = this;
            r0.requestId = r1
            return r0
    }

    public com.sigmob.sdk.base.models.LoadAdRequest setRequest_scene_type(int r1) {
            r0 = this;
            r0.request_scene_type = r1
            return r0
    }
}
