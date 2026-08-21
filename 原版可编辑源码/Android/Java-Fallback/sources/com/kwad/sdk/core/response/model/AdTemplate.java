package com.kwad.sdk.core.response.model;

public class AdTemplate extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -5413539480595883024L;
    public java.util.List<com.kwad.sdk.core.response.model.AdInfo> adInfoList;
    public long adLoadTotalTime;
    public long adShowStartTimeStamp;
    public int adStyle;
    public transient int adxResult;
    public int contentType;
    public boolean converted;
    public long downloadDuration;
    public transient int downloadSource;
    public java.lang.String extra;
    public boolean fromCache;
    public boolean hasEnterAdWebViewLandPageActivity;
    public java.lang.String impAdExtra;
    public transient java.lang.String installFrom;
    public boolean interactLandingPageShowing;
    public boolean isWebViewDownload;
    public long llsid;
    public long loadDataTime;
    public com.kwad.sdk.internal.api.SceneImpl mAdScene;
    public com.kwad.sdk.core.response.model.AdStatusInfo mAdStatusInfo;
    public boolean mAdWebVideoPageShowing;
    public long mBidEcpm;
    private com.kwai.adclient.kscommerciallogger.model.BusinessType mBusinessType;
    public boolean mCheatingFlow;
    public long mCurPlayTime;
    public transient boolean mDownloadFinishReported;
    public boolean mHasReportVideoLoad;
    public boolean mHasSelected;
    public int mInitVoiceStatus;
    public boolean mIsAudioEnable;
    public boolean mIsForceJumpLandingPage;
    public boolean mIsFromContent;
    public int mIsLeftSlipStatus;
    protected transient java.util.Map<java.lang.String, java.lang.Object> mLocalParams;
    public int mMediaPlayerType;
    public java.lang.String mOriginJString;
    public long mOutClickTimeParam;
    public com.kwad.sdk.core.response.model.PageInfo mPageInfo;
    public int mPhotoResponseType;
    public transient boolean mPvReported;
    public boolean mRewardVerifyCalled;
    public transient boolean mTrackUrlReported;
    public java.lang.String mUniqueId;
    public com.kwad.sdk.core.response.model.VideoPlayerStatus mVideoPlayerStatus;
    public volatile long mVisibleTimeParam;
    public boolean mXiaomiAppStoreDetailViewOpen;
    public boolean notNetworkRequest;
    public com.kwad.sdk.core.response.model.PhotoInfo photoInfo;
    public long posId;
    public int positionShow;
    public int realShowType;
    private int serverPosition;
    public long showStartTime;
    public com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo tkLiveShopItemInfo;
    public int type;
    public boolean watched;

    public AdTemplate() {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.adInfoList = r0
            com.kwad.sdk.core.response.model.PhotoInfo r0 = r3.createPhotoInfo()
            r3.photoInfo = r0
            r0 = -1
            r3.positionShow = r0
            r3.adxResult = r0
            r3.serverPosition = r0
            r0 = 0
            r3.mIsFromContent = r0
            r3.hasEnterAdWebViewLandPageActivity = r0
            r3.mHasReportVideoLoad = r0
            java.lang.String r1 = ""
            r3.mUniqueId = r1
            r3.mHasSelected = r0
            r2 = 2
            r3.downloadSource = r2
            r3.installFrom = r1
            r3.mMediaPlayerType = r0
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = new com.kwad.sdk.core.response.model.VideoPlayerStatus
            r1.<init>()
            r3.mVideoPlayerStatus = r1
            r1 = -1
            r3.mOutClickTimeParam = r1
            r3.mVisibleTimeParam = r1
            r3.mIsLeftSlipStatus = r0
            r3.interactLandingPageShowing = r0
            r3.mIsForceJumpLandingPage = r0
            r3.mAdWebVideoPageShowing = r0
            r3.mIsAudioEnable = r0
            r3.mRewardVerifyCalled = r0
            r3.mCheatingFlow = r0
            r3.mXiaomiAppStoreDetailViewOpen = r0
            r3.isWebViewDownload = r0
            r3.watched = r0
            r3.converted = r0
            r3.fromCache = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.mLocalParams = r0
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = new com.kwad.sdk.core.response.model.AdStatusInfo
            r0.<init>()
            r3.mAdStatusInfo = r0
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterParseJson(r3)
            if (r3 == 0) goto L23
            java.lang.String r0 = r2.mOriginJString
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            java.lang.String r0 = r3.toString()
            r2.mOriginJString = r0
        L13:
            com.kwad.sdk.core.response.model.PhotoInfo r0 = r2.createPhotoInfo()
            java.lang.String r1 = "photoInfo"
            org.json.JSONObject r3 = r3.optJSONObject(r1)
            r0.parseJson(r3)
            r2.setPhotoInfo(r0)
        L23:
            int r3 = r2.contentType
            r2.realShowType = r3
            java.lang.String r3 = r2.mUniqueId
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L39
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r2.mUniqueId = r3
        L39:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            com.kwad.sdk.core.response.model.PhotoInfo r0 = r2.photoInfo
            java.lang.String r1 = "photoInfo"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            return
    }

    @Override
    public void beforeToJson(org.json.JSONObject r3) {
            r2 = this;
            super.beforeToJson(r3)
            java.lang.String r0 = r2.mOriginJString
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            java.lang.String r1 = r2.mOriginJString     // Catch: org.json.JSONException -> L16
            r0.<init>(r1)     // Catch: org.json.JSONException -> L16
            com.kwad.sdk.utils.u.merge(r3, r0)     // Catch: org.json.JSONException -> L16
            return
        L16:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L1a:
            return
    }

    protected com.kwad.sdk.core.response.model.PhotoInfo createPhotoInfo() {
            r1 = this;
            com.kwad.sdk.core.response.model.PhotoInfo r0 = new com.kwad.sdk.core.response.model.PhotoInfo
            r0.<init>()
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.sdk.core.response.model.AdTemplate
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.mUniqueId
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            java.lang.String r2 = r2.mUniqueId
            boolean r2 = r0.equals(r2)
            return r2
        Lf:
            boolean r2 = super.equals(r2)
            return r2
    }

    public com.kwai.adclient.kscommerciallogger.model.BusinessType getBusinessType() {
            r1 = this;
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = r1.mBusinessType
            if (r0 == 0) goto L5
            return r0
        L5:
            com.kwad.sdk.internal.api.SceneImpl r0 = r1.mAdScene
            if (r0 == 0) goto L13
            int r0 = r0.getAdStyle()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwad.sdk.core.report.KSLoggerReporter.cs(r0)
            r1.mBusinessType = r0
        L13:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = r1.mBusinessType
            return r0
    }

    public long getDownloadFinishTime() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r2.mAdStatusInfo
            long r0 = r0.getDownloadFinishTime()
            return r0
    }

    public long getDownloadSize() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r2.mAdStatusInfo
            long r0 = r0.getDownloadSize()
            return r0
    }

    public int getDownloadType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            int r0 = r0.getDownloadType()
            return r0
    }

    public long getLoadDataTime() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r2.mAdStatusInfo
            long r0 = r0.getLoadDataTime()
            return r0
    }

    public <T> T getLocalParams(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.mLocalParams
            java.lang.Object r3 = r0.get(r3)
            if (r3 == 0) goto L11
            return r3
        L11:
            return r1
    }

    public java.util.Map<java.lang.String, java.lang.Object> getLocalParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mLocalParams
            return r0
    }

    public int getServerPosition() {
            r2 = this;
            int r0 = r2.serverPosition
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            int r0 = r2.getShowPosition()
            return r0
    }

    public int getShowPosition() {
            r1 = this;
            int r0 = r1.positionShow
            return r0
    }

    public java.lang.String getUniqueId() {
            r1 = this;
            java.lang.String r0 = r1.mUniqueId
            return r0
    }

    public long getmCurPlayTime() {
            r2 = this;
            long r0 = r2.mCurPlayTime
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.mUniqueId
            if (r0 == 0) goto L9
            int r0 = r0.hashCode()
            return r0
        L9:
            int r0 = super.hashCode()
            return r0
    }

    public boolean isLoadFromCache() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            boolean r0 = r0.isLoadFromCache()
            return r0
    }

    public java.lang.Object putLocalParams(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mLocalParams
            java.lang.Object r2 = r0.put(r2, r3)
            return r2
    }

    public void setCheatingFlow(boolean r2) {
            r1 = this;
            boolean r0 = r1.mCheatingFlow
            if (r0 != 0) goto L6
            r1.mCheatingFlow = r2
        L6:
            return
    }

    public void setDownloadFinishTime(long r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            r0.setDownloadFinishTime(r2)
            return
    }

    public void setDownloadSize(long r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            r0.setDownloadSize(r2)
            return
    }

    public void setDownloadType(int r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            r0.setDownloadType(r2)
            return
    }

    public void setLoadDataTime(long r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            r0.setLoadDataTime(r2)
            return
    }

    public void setLoadFromCache(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = r1.mAdStatusInfo
            r0.setLoadFromCache(r2)
            return
    }

    protected void setPhotoInfo(com.kwad.sdk.core.response.model.PhotoInfo r1) {
            r0 = this;
            r0.photoInfo = r1
            return
    }

    public void setServerPosition(int r3) {
            r2 = this;
            int r0 = r2.serverPosition
            r1 = -1
            if (r0 != r1) goto L7
            r2.serverPosition = r3
        L7:
            return
    }

    public void setShowPosition(int r1) {
            r0 = this;
            r0.positionShow = r1
            return
    }

    public void setmCurPlayTime(long r1) {
            r0 = this;
            r0.mCurPlayTime = r1
            return
    }
}
