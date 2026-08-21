package com.tkay.nativead.a;

import android.graphics.Bitmap;
import android.view.View;
import com.tkay.core.api.ATShakeViewListener;
import com.tkay.core.api.ITYAdvertiserInfoOperate;
import com.tkay.core.api.TYAdAppInfo;
import com.tkay.core.api.TYCustomVideo;
import com.tkay.nativead.api.TYNativeMaterial;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.List;
import java.util.Map;

public final class b implements TYNativeMaterial {
    CustomNativeAd a;

    public b(CustomNativeAd customNativeAd) {
        this.a = customNativeAd;
    }

    @Override
    public final int getNativeType() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNativeType();
        }
        return 0;
    }

    @Override
    public final View getAdMediaView(Object... objArr) {
        CustomNativeAd customNativeAd;
        if (this.a.isNativeExpress() || (customNativeAd = this.a) == null) {
            return null;
        }
        return customNativeAd.getAdMediaView(objArr);
    }

    @Override
    public final View getAdIconView() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAdIconView();
        }
        return null;
    }

    @Override
    public final String getTitle() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getTitle() : "";
    }

    @Override
    public final String getDescriptionText() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getDescriptionText() : "";
    }

    @Override
    public final String getMainImageUrl() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getMainImageUrl() : "";
    }

    @Override
    public final String getIconImageUrl() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getIconImageUrl() : "";
    }

    @Override
    public final String getCallToActionText() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getCallToActionText() : "";
    }

    @Override
    public final Double getStarRating() {
        CustomNativeAd customNativeAd = this.a;
        double dDoubleValue = 0.0d;
        if (customNativeAd != null && customNativeAd.getStarRating() != null) {
            dDoubleValue = this.a.getStarRating().doubleValue();
        }
        return Double.valueOf(dDoubleValue);
    }

    @Override
    public final String getVideoUrl() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getVideoUrl() : "";
    }

    @Override
    public final String getAdChoiceIconUrl() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getAdChoiceIconUrl() : "";
    }

    @Override
    public final String getAdFrom() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getAdFrom() : "";
    }

    @Override
    public final List<String> getImageUrlList() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getImageUrlList();
        }
        return null;
    }

    @Override
    public final View getAdLogoView() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAdLogoView();
        }
        return null;
    }

    @Override
    public final Map<String, Object> getNetworkInfoMap() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNetworkInfoMap();
        }
        return null;
    }

    @Override
    public final View getAppDownloadButton() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAppDownloadButton();
        }
        return null;
    }

    @Override
    public final TYAdAppInfo getAdAppInfo() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAdAppInfo();
        }
        return null;
    }

    @Override
    public final Bitmap getAdLogo() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAdLogo();
        }
        return null;
    }

    @Override
    public final int getNativeAdInteractionType() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNativeAdInteractionType();
        }
        return 0;
    }

    @Override
    public final double getVideoDuration() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getVideoDuration();
        }
        return 0.0d;
    }

    @Override
    public final String getAdType() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getAdType() : "0";
    }

    @Override
    public final TYCustomVideo getNativeCustomVideo() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNativeCustomVideo();
        }
        return null;
    }

    @Override
    public final int getMainImageHeight() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getMainImageHeight();
        }
        return 0;
    }

    @Override
    public final int getMainImageWidth() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getMainImageWidth();
        }
        return 0;
    }

    @Override
    public final int getNativeExpressWidth() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNativeExpressWidth();
        }
        return 0;
    }

    @Override
    public final int getNativeExpressHeight() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getNativeExpressHeight();
        }
        return 0;
    }

    @Override
    public final int getVideoWidth() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getVideoWidth();
        }
        return 0;
    }

    @Override
    public final int getVideoHeight() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getVideoHeight();
        }
        return 0;
    }

    @Override
    public final double getAppPrice() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAppPrice();
        }
        return 0.0d;
    }

    @Override
    public final int getAppCommentNum() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAppCommentNum();
        }
        return 0;
    }

    @Override
    public final String getAdvertiserName() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getAdvertiserName() : "";
    }

    @Override
    public final String getDomain() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getDomain() : "";
    }

    @Override
    public final String getWarning() {
        CustomNativeAd customNativeAd = this.a;
        return customNativeAd != null ? customNativeAd.getWarning() : "";
    }

    @Override
    public final View getShakeView(int i, int i2, ATShakeViewListener aTShakeViewListener) {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getShakeView(i, i2, aTShakeViewListener);
        }
        return null;
    }

    @Override
    public final double getVideoProgress() {
        return this.a.getVideoProgress();
    }

    @Override
    public final ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
        CustomNativeAd customNativeAd = this.a;
        if (customNativeAd != null) {
            return customNativeAd.getAdvertiserInfoOperate();
        }
        return null;
    }
}
