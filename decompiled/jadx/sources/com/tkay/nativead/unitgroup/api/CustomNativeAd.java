package com.tkay.nativead.unitgroup.api;

import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.core.api.TYAdAppInfo;
import com.tkay.core.api.TYCustomVideo;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.a;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class CustomNativeAd extends a {
    public static String IS_AUTO_PLAY_KEY = "is_auto_play";
    static final double MAX_STAR_RATING = 5.0d;
    static final double MIN_STAR_RATING = 0.0d;
    private TYAdAppInfo adAppInfo;
    private View adLogoView;
    private String mAdChoiceIconUrl;
    private String mAdFrom;
    private String mAdvertiserName;
    private int mAppCommentNum;
    private View mAppDownloadButton;
    private double mAppPrice;
    private String mCallToAction;
    private String mClickDestinationUrl;
    private View.OnClickListener mCloseViewListener;
    private String mDomain;
    private String mIconImageUrl;
    private List<String> mImageUrlList;
    private int mMainImageHeight;
    private String mMainImageUrl;
    private int mMainImageWidth;
    private int mNativeExpressHeight;
    private int mNativeExpressWidth;
    private Map<String, Object> mNetworkInfoMap;
    private String mText;
    private String mTitle;
    private int mVideoHeight;
    private String mVideoUrl;
    private int mVideoWidth;
    private String mWarning;
    private String showId;
    private double videoDuration;
    private Double mStarRating = Double.valueOf(0.0d);
    private int nInteractionType = 0;

    @Override // com.tkay.nativead.unitgroup.a
    public void clear(View view) {
    }

    @Override // com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdIconView() {
        return null;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public Bitmap getAdLogo() {
        return null;
    }

    @Override // com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        return null;
    }

    @Override // com.tkay.core.api.BaseAd
    public ViewGroup getCustomAdContainer() {
        return null;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public TYCustomVideo getNativeCustomVideo() {
        return null;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getNativeType() {
        return 1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public double getVideoProgress() {
        return 0.0d;
    }

    public void impressionTrack(View view) {
    }

    @Override // com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return false;
    }

    @Override // com.tkay.nativead.unitgroup.a
    public void onPause() {
    }

    @Override // com.tkay.nativead.unitgroup.a
    public void onResume() {
    }

    @Override // com.tkay.nativead.unitgroup.a
    public void pauseVideo() {
    }

    @Override // com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
    }

    public void registerDownloadConfirmListener() {
    }

    @Override // com.tkay.nativead.unitgroup.a
    public void resumeVideo() {
    }

    @Override // com.tkay.core.api.BaseAd
    public void setVideoMute(boolean z) {
    }

    public void unregeisterDownloadConfirmListener() {
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public double getVideoDuration() {
        return this.videoDuration;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getNativeAdInteractionType() {
        return this.nInteractionType;
    }

    @Override // com.tkay.core.api.BaseAd
    public void registerListener(View view, List<View> list, FrameLayout.LayoutParams layoutParams) {
        TYNativePrepareInfo tYNativePrepareInfo = new TYNativePrepareInfo();
        tYNativePrepareInfo.setClickViewList(list);
        tYNativePrepareInfo.setChoiceViewLayoutParams(layoutParams);
        prepare(view, tYNativePrepareInfo);
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getTitle() {
        return this.mTitle;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getDescriptionText() {
        return this.mText;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getMainImageUrl() {
        return this.mMainImageUrl;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getIconImageUrl() {
        return this.mIconImageUrl;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getCallToActionText() {
        return this.mCallToAction;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final Double getStarRating() {
        return this.mStarRating;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getVideoUrl() {
        return this.mVideoUrl;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getAdChoiceIconUrl() {
        return this.mAdChoiceIconUrl;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getAdFrom() {
        return this.mAdFrom;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final List<String> getImageUrlList() {
        return this.mImageUrlList;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getAdLogoView() {
        return this.adLogoView;
    }

    @Override // com.tkay.core.api.BaseAd, com.tkay.core.api.IATThirdPartyMaterial
    public final Map<String, Object> getNetworkInfoMap() {
        return this.mNetworkInfoMap;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public TYAdAppInfo getAdAppInfo() {
        return this.adAppInfo;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getMainImageHeight() {
        int i = this.mMainImageHeight;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getMainImageWidth() {
        int i = this.mMainImageWidth;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getNativeExpressWidth() {
        int i = this.mNativeExpressWidth;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getNativeExpressHeight() {
        int i = this.mNativeExpressHeight;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getVideoWidth() {
        int i = this.mVideoWidth;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getVideoHeight() {
        int i = this.mVideoHeight;
        if (i > 0) {
            return i;
        }
        return -1;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public double getAppPrice() {
        return this.mAppPrice;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public int getAppCommentNum() {
        return this.mAppCommentNum;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getAdvertiserName() {
        return this.mAdvertiserName;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getDomain() {
        return this.mDomain;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public String getWarning() {
        return this.mWarning;
    }

    public final void setVideoDuration(double d) {
        this.videoDuration = d;
    }

    public final void setNativeInteractionType(int i) {
        this.nInteractionType = i;
    }

    public final void setMainImageUrl(String str) {
        this.mMainImageUrl = str;
    }

    public final void setIconImageUrl(String str) {
        this.mIconImageUrl = str;
    }

    public final void setCallToActionText(String str) {
        this.mCallToAction = str;
    }

    public final void setTitle(String str) {
        this.mTitle = str;
    }

    public final void setDescriptionText(String str) {
        this.mText = str;
    }

    public final void setStarRating(Double d) {
        if (d == null) {
            this.mStarRating = null;
        } else {
            if (d.doubleValue() < 0.0d || d.doubleValue() > MAX_STAR_RATING) {
                return;
            }
            this.mStarRating = d;
        }
    }

    public final void setVideoUrl(String str) {
        this.mVideoUrl = str;
    }

    public final void setAdChoiceIconUrl(String str) {
        this.mAdChoiceIconUrl = str;
    }

    public final void setAdFrom(String str) {
        this.mAdFrom = str;
    }

    public final void setImageUrlList(List<String> list) {
        this.mImageUrlList = list;
    }

    public final void setAdLogoView(View view) {
        this.adLogoView = view;
    }

    public final void setDomain(String str) {
        this.mDomain = str;
    }

    public final void setWarning(String str) {
        this.mWarning = str;
    }

    @Override // com.tkay.core.api.BaseAd
    public final void setNetworkInfoMap(Map<String, Object> map) {
        this.mNetworkInfoMap = map;
    }

    public final void setShowId(String str) {
        this.showId = str;
    }

    public final String getShowId() {
        return this.showId;
    }

    public final void setAdAppInfo(TYAdAppInfo tYAdAppInfo) {
        this.adAppInfo = tYAdAppInfo;
    }

    public void setMainImageHeight(int i) {
        this.mMainImageHeight = i;
    }

    public void setMainImageWidth(int i) {
        this.mMainImageWidth = i;
    }

    public void setNativeExpressWidth(int i) {
        this.mNativeExpressWidth = i;
    }

    public void setNativeExpressHeight(int i) {
        this.mNativeExpressHeight = i;
    }

    public void setVideoWidth(int i) {
        this.mVideoWidth = i;
    }

    public void setVideoHeight(int i) {
        this.mVideoHeight = i;
    }

    public void setAppPrice(double d) {
        this.mAppPrice = d;
    }

    public void setAppCommentNum(int i) {
        this.mAppCommentNum = i;
    }

    public void setAdvertiserName(String str) {
        this.mAdvertiserName = str;
    }

    public void setAppDownloadButton(View view) {
        this.mAppDownloadButton = view;
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public View getAppDownloadButton() {
        return this.mAppDownloadButton;
    }

    @Override // com.tkay.nativead.unitgroup.a
    public final void bindDislikeListener(View.OnClickListener onClickListener) {
        View closeView;
        this.mCloseViewListener = onClickListener;
        TYNativePrepareInfo nativePrepareInfo = getNativePrepareInfo();
        if (nativePrepareInfo == null || (closeView = nativePrepareInfo.getCloseView()) == null) {
            return;
        }
        closeView.setOnClickListener(this.mCloseViewListener);
    }

    public final boolean checkHasCloseViewListener() {
        return this.mCloseViewListener != null;
    }

    @Override // com.tkay.core.api.BaseAd
    public void destroy() {
        this.mCloseViewListener = null;
    }

    public class NativeAdConst {
        public static final String IMAGE_TYPE = "2";
        public static final String UNKNOWN_TYPE = "0";
        public static final String VIDEO_TYPE = "1";

        public NativeAdConst() {
        }
    }

    public class NativeType {
        public static final int FEED = 1;
        public static final int PATCH = 2;

        public NativeType() {
        }
    }
}
