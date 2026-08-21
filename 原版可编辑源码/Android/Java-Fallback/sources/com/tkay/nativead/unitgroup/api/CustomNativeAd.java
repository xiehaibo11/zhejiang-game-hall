package com.tkay.nativead.unitgroup.api;

public class CustomNativeAd extends com.tkay.nativead.unitgroup.a {
    public static java.lang.String IS_AUTO_PLAY_KEY = "is_auto_play";
    static final double MAX_STAR_RATING = 5.0d;
    static final double MIN_STAR_RATING = 0.0d;
    private com.tkay.core.api.TYAdAppInfo adAppInfo;
    private android.view.View adLogoView;
    private java.lang.String mAdChoiceIconUrl;
    private java.lang.String mAdFrom;
    private java.lang.String mAdvertiserName;
    private int mAppCommentNum;
    private android.view.View mAppDownloadButton;
    private double mAppPrice;
    private java.lang.String mCallToAction;
    private java.lang.String mClickDestinationUrl;
    private android.view.View.OnClickListener mCloseViewListener;
    private java.lang.String mDomain;
    private java.lang.String mIconImageUrl;
    private java.util.List<java.lang.String> mImageUrlList;
    private int mMainImageHeight;
    private java.lang.String mMainImageUrl;
    private int mMainImageWidth;
    private int mNativeExpressHeight;
    private int mNativeExpressWidth;
    private java.util.Map<java.lang.String, java.lang.Object> mNetworkInfoMap;
    private java.lang.Double mStarRating;
    private java.lang.String mText;
    private java.lang.String mTitle;
    private int mVideoHeight;
    private java.lang.String mVideoUrl;
    private int mVideoWidth;
    private java.lang.String mWarning;
    private int nInteractionType;
    private java.lang.String showId;
    private double videoDuration;

    public class NativeAdConst {
        public static final java.lang.String IMAGE_TYPE = "2";
        public static final java.lang.String UNKNOWN_TYPE = "0";
        public static final java.lang.String VIDEO_TYPE = "1";
        final com.tkay.nativead.unitgroup.api.CustomNativeAd this$0;

        public NativeAdConst(com.tkay.nativead.unitgroup.api.CustomNativeAd r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    public class NativeType {
        public static final int FEED = 1;
        public static final int PATCH = 2;
        final com.tkay.nativead.unitgroup.api.CustomNativeAd this$0;

        public NativeType(com.tkay.nativead.unitgroup.api.CustomNativeAd r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    public CustomNativeAd() {
            r2 = this;
            r2.<init>()
            r0 = 0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r2.mStarRating = r0
            r0 = 0
            r2.nInteractionType = r0
            return
    }

    @Override
    public final void bindDislikeListener(android.view.View.OnClickListener r2) {
            r1 = this;
            r1.mCloseViewListener = r2
            com.tkay.nativead.api.TYNativePrepareInfo r2 = r1.getNativePrepareInfo()
            if (r2 == 0) goto L13
            android.view.View r2 = r2.getCloseView()
            if (r2 == 0) goto L13
            android.view.View$OnClickListener r0 = r1.mCloseViewListener
            r2.setOnClickListener(r0)
        L13:
            return
    }

    public final boolean checkHasCloseViewListener() {
            r1 = this;
            android.view.View$OnClickListener r0 = r1.mCloseViewListener
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            r0 = 0
            r1.mCloseViewListener = r0
            return
    }

    @Override
    public com.tkay.core.api.TYAdAppInfo getAdAppInfo() {
            r1 = this;
            com.tkay.core.api.TYAdAppInfo r0 = r1.adAppInfo
            return r0
    }

    @Override
    public final java.lang.String getAdChoiceIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.mAdChoiceIconUrl
            return r0
    }

    @Override
    public java.lang.String getAdFrom() {
            r1 = this;
            java.lang.String r0 = r1.mAdFrom
            return r0
    }

    @Override
    public android.view.View getAdIconView() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.graphics.Bitmap getAdLogo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View getAdLogoView() {
            r1 = this;
            android.view.View r0 = r1.adLogoView
            return r0
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getAdvertiserName() {
            r1 = this;
            java.lang.String r0 = r1.mAdvertiserName
            return r0
    }

    @Override
    public int getAppCommentNum() {
            r1 = this;
            int r0 = r1.mAppCommentNum
            return r0
    }

    @Override
    public android.view.View getAppDownloadButton() {
            r1 = this;
            android.view.View r0 = r1.mAppDownloadButton
            return r0
    }

    @Override
    public double getAppPrice() {
            r2 = this;
            double r0 = r2.mAppPrice
            return r0
    }

    @Override
    public java.lang.String getCallToActionText() {
            r1 = this;
            java.lang.String r0 = r1.mCallToAction
            return r0
    }

    @Override
    public android.view.ViewGroup getCustomAdContainer() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getDescriptionText() {
            r1 = this;
            java.lang.String r0 = r1.mText
            return r0
    }

    @Override
    public java.lang.String getDomain() {
            r1 = this;
            java.lang.String r0 = r1.mDomain
            return r0
    }

    @Override
    public java.lang.String getIconImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.mIconImageUrl
            return r0
    }

    @Override
    public final java.util.List<java.lang.String> getImageUrlList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.mImageUrlList
            return r0
    }

    @Override
    public int getMainImageHeight() {
            r1 = this;
            int r0 = r1.mMainImageHeight
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public java.lang.String getMainImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.mMainImageUrl
            return r0
    }

    @Override
    public int getMainImageWidth() {
            r1 = this;
            int r0 = r1.mMainImageWidth
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public int getNativeAdInteractionType() {
            r1 = this;
            int r0 = r1.nInteractionType
            return r0
    }

    @Override
    public com.tkay.core.api.TYCustomVideo getNativeCustomVideo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getNativeExpressHeight() {
            r1 = this;
            int r0 = r1.mNativeExpressHeight
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public int getNativeExpressWidth() {
            r1 = this;
            int r0 = r1.mNativeExpressWidth
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public int getNativeType() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mNetworkInfoMap
            return r0
    }

    public final java.lang.String getShowId() {
            r1 = this;
            java.lang.String r0 = r1.showId
            return r0
    }

    @Override
    public final java.lang.Double getStarRating() {
            r1 = this;
            java.lang.Double r0 = r1.mStarRating
            return r0
    }

    @Override
    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.mTitle
            return r0
    }

    @Override
    public double getVideoDuration() {
            r2 = this;
            double r0 = r2.videoDuration
            return r0
    }

    @Override
    public int getVideoHeight() {
            r1 = this;
            int r0 = r1.mVideoHeight
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public double getVideoProgress() {
            r2 = this;
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getVideoUrl() {
            r1 = this;
            java.lang.String r0 = r1.mVideoUrl
            return r0
    }

    @Override
    public int getVideoWidth() {
            r1 = this;
            int r0 = r1.mVideoWidth
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    @Override
    public java.lang.String getWarning() {
            r1 = this;
            java.lang.String r0 = r1.mWarning
            return r0
    }

    public void impressionTrack(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onPause() {
            r0 = this;
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            return
    }

    @Override
    public void pauseVideo() {
            r0 = this;
            return
    }

    @Override
    public void prepare(android.view.View r1, com.tkay.nativead.api.TYNativePrepareInfo r2) {
            r0 = this;
            return
    }

    public void registerDownloadConfirmListener() {
            r0 = this;
            return
    }

    @Override
    public void registerListener(android.view.View r2, java.util.List<android.view.View> r3, android.widget.FrameLayout.LayoutParams r4) {
            r1 = this;
            com.tkay.nativead.api.TYNativePrepareInfo r0 = new com.tkay.nativead.api.TYNativePrepareInfo
            r0.<init>()
            r0.setClickViewList(r3)
            r0.setChoiceViewLayoutParams(r4)
            r1.prepare(r2, r0)
            return
    }

    @Override
    public void resumeVideo() {
            r0 = this;
            return
    }

    public final void setAdAppInfo(com.tkay.core.api.TYAdAppInfo r1) {
            r0 = this;
            r0.adAppInfo = r1
            return
    }

    public final void setAdChoiceIconUrl(java.lang.String r1) {
            r0 = this;
            r0.mAdChoiceIconUrl = r1
            return
    }

    public final void setAdFrom(java.lang.String r1) {
            r0 = this;
            r0.mAdFrom = r1
            return
    }

    public final void setAdLogoView(android.view.View r1) {
            r0 = this;
            r0.adLogoView = r1
            return
    }

    public void setAdvertiserName(java.lang.String r1) {
            r0 = this;
            r0.mAdvertiserName = r1
            return
    }

    public void setAppCommentNum(int r1) {
            r0 = this;
            r0.mAppCommentNum = r1
            return
    }

    public void setAppDownloadButton(android.view.View r1) {
            r0 = this;
            r0.mAppDownloadButton = r1
            return
    }

    public void setAppPrice(double r1) {
            r0 = this;
            r0.mAppPrice = r1
            return
    }

    public final void setCallToActionText(java.lang.String r1) {
            r0 = this;
            r0.mCallToAction = r1
            return
    }

    public final void setDescriptionText(java.lang.String r1) {
            r0 = this;
            r0.mText = r1
            return
    }

    public final void setDomain(java.lang.String r1) {
            r0 = this;
            r0.mDomain = r1
            return
    }

    public final void setIconImageUrl(java.lang.String r1) {
            r0 = this;
            r0.mIconImageUrl = r1
            return
    }

    public final void setImageUrlList(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.mImageUrlList = r1
            return
    }

    public void setMainImageHeight(int r1) {
            r0 = this;
            r0.mMainImageHeight = r1
            return
    }

    public final void setMainImageUrl(java.lang.String r1) {
            r0 = this;
            r0.mMainImageUrl = r1
            return
    }

    public void setMainImageWidth(int r1) {
            r0 = this;
            r0.mMainImageWidth = r1
            return
    }

    public void setNativeExpressHeight(int r1) {
            r0 = this;
            r0.mNativeExpressHeight = r1
            return
    }

    public void setNativeExpressWidth(int r1) {
            r0 = this;
            r0.mNativeExpressWidth = r1
            return
    }

    public final void setNativeInteractionType(int r1) {
            r0 = this;
            r0.nInteractionType = r1
            return
    }

    @Override
    public final void setNetworkInfoMap(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            r0.mNetworkInfoMap = r1
            return
    }

    public final void setShowId(java.lang.String r1) {
            r0 = this;
            r0.showId = r1
            return
    }

    public final void setStarRating(java.lang.Double r5) {
            r4 = this;
            if (r5 != 0) goto L6
            r5 = 0
            r4.mStarRating = r5
            return
        L6:
            double r0 = r5.doubleValue()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L1c
            double r0 = r5.doubleValue()
            r2 = 4617315517961601024(0x4014000000000000, double:5.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L1c
            r4.mStarRating = r5
        L1c:
            return
    }

    public final void setTitle(java.lang.String r1) {
            r0 = this;
            r0.mTitle = r1
            return
    }

    public final void setVideoDuration(double r1) {
            r0 = this;
            r0.videoDuration = r1
            return
    }

    public void setVideoHeight(int r1) {
            r0 = this;
            r0.mVideoHeight = r1
            return
    }

    @Override
    public void setVideoMute(boolean r1) {
            r0 = this;
            return
    }

    public final void setVideoUrl(java.lang.String r1) {
            r0 = this;
            r0.mVideoUrl = r1
            return
    }

    public void setVideoWidth(int r1) {
            r0 = this;
            r0.mVideoWidth = r1
            return
    }

    public final void setWarning(java.lang.String r1) {
            r0 = this;
            r0.mWarning = r1
            return
    }

    public void unregeisterDownloadConfirmListener() {
            r0 = this;
            return
    }
}
