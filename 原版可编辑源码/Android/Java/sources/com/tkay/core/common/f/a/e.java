package com.tkay.core.common.f.a;

import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.core.api.ATShakeViewListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ITYAdvertiserInfoOperate;
import com.tkay.core.api.TYAdAppInfo;
import com.tkay.core.api.TYCustomVideo;
import com.tkay.core.common.b.k;
import java.io.Serializable;
import java.util.List;
import java.util.Map;

public final class e extends BaseAd implements a, Serializable {
    private int a;
    private int b;
    private int c;
    private int d;
    private int e;
    private BaseAd f;
    private Map<String, Object> g;

    @Override
    public final View getAdIconView() {
        return null;
    }

    public e(BaseAd baseAd, Map<String, Object> map) {
        this.a = 1;
        this.b = 5;
        this.c = 1;
        this.e = 5;
        this.f = baseAd;
        this.g = map;
        Object obj = map.get("orientation");
        if (obj != null) {
            this.a = Integer.parseInt(obj.toString());
        }
        Object obj2 = map.get(com.tkay.expressad.d.a.b.dk);
        if (obj2 != null) {
            this.b = Integer.parseInt(obj2.toString());
        }
        Object obj3 = map.get("allows_skip");
        if (obj3 != null) {
            this.c = Integer.parseInt(obj3.toString());
        }
        Object obj4 = map.get("button_type");
        if (obj4 != null) {
            this.d = Integer.parseInt(obj4.toString());
        }
        Object obj5 = map.get("s_c_t");
        if (obj5 != null) {
            this.e = Integer.parseInt(obj5.toString());
        }
    }

    private void a(Map<String, Object> map) {
        Object obj = map.get("orientation");
        if (obj != null) {
            this.a = Integer.parseInt(obj.toString());
        }
        Object obj2 = map.get(com.tkay.expressad.d.a.b.dk);
        if (obj2 != null) {
            this.b = Integer.parseInt(obj2.toString());
        }
        Object obj3 = map.get("allows_skip");
        if (obj3 != null) {
            this.c = Integer.parseInt(obj3.toString());
        }
        Object obj4 = map.get("button_type");
        if (obj4 != null) {
            this.d = Integer.parseInt(obj4.toString());
        }
        Object obj5 = map.get("s_c_t");
        if (obj5 != null) {
            this.e = Integer.parseInt(obj5.toString());
        }
    }

    @Override
    public final int a() {
        return this.a;
    }

    @Override
    public final long b() {
        return this.b;
    }

    @Override
    public final int c() {
        int i = this.c;
        return (i != 1 && i == 0) ? 1 : 0;
    }

    @Override
    public final int d() {
        int i = this.d;
        if (i != 1) {
            return i != 2 ? 2 : 1;
        }
        return 0;
    }

    @Override
    public final int e() {
        return this.e;
    }

    @Override
    public final int f() {
        Object obj;
        if (this.f.getDetail() == null || this.f.getDetail().H() != 8 || (obj = this.g.get("video_muted")) == null) {
            return 0;
        }
        return TextUtils.equals(obj.toString(), "0") ? 1 : 0;
    }

    @Override
    public final void setTrackingInfo(com.tkay.core.common.f.d dVar) {
        this.f.setTrackingInfo(dVar);
    }

    @Override
    public final com.tkay.core.common.f.d getDetail() {
        return this.f.getDetail();
    }

    @Override
    public final void setNetworkInfoMap(Map<String, Object> map) {
        this.f.setNetworkInfoMap(map);
    }

    @Override
    public final Map<String, Object> getNetworkInfoMap() {
        return this.f.getNetworkInfoMap();
    }

    @Override
    public final View getAppDownloadButton() {
        return this.f.getAppDownloadButton();
    }

    @Override
    public final void destroy() {
        this.f.destroy();
    }

    @Override
    public final void setNativeEventListener(k kVar) {
        this.f.setNativeEventListener(kVar);
    }

    @Override
    public final String getTitle() {
        return this.f.getTitle();
    }

    @Override
    public final String getDescriptionText() {
        return this.f.getDescriptionText();
    }

    @Override
    public final String getMainImageUrl() {
        return this.f.getMainImageUrl();
    }

    @Override
    public final String getIconImageUrl() {
        return this.f.getIconImageUrl();
    }

    @Override
    public final String getCallToActionText() {
        return this.f.getCallToActionText();
    }

    @Override
    public final Double getStarRating() {
        return this.f.getStarRating();
    }

    @Override
    public final String getVideoUrl() {
        return this.f.getVideoUrl();
    }

    @Override
    public final String getAdChoiceIconUrl() {
        return this.f.getAdChoiceIconUrl();
    }

    @Override
    public final String getAdFrom() {
        return this.f.getAdFrom();
    }

    @Override
    public final View getAdLogoView() {
        return this.f.getAdLogoView();
    }

    @Override
    public final List<String> getImageUrlList() {
        return this.f.getImageUrlList();
    }

    @Override
    public final TYAdAppInfo getAdAppInfo() {
        return this.f.getAdAppInfo();
    }

    @Override
    public final View getAdMediaView(Object... objArr) {
        return this.f.getAdMediaView(objArr);
    }

    @Override
    public final Bitmap getAdLogo() {
        return this.f.getAdLogo();
    }

    @Override
    public final ViewGroup getCustomAdContainer() {
        return this.f.getCustomAdContainer();
    }

    @Override
    public final int getMainImageHeight() {
        return this.f.getMainImageHeight();
    }

    @Override
    public final int getMainImageWidth() {
        return this.f.getMainImageWidth();
    }

    @Override
    public final int getNativeExpressWidth() {
        return this.f.getNativeExpressWidth();
    }

    @Override
    public final int getNativeExpressHeight() {
        return this.f.getNativeExpressHeight();
    }

    @Override
    public final int getVideoWidth() {
        return this.f.getVideoWidth();
    }

    @Override
    public final int getVideoHeight() {
        return this.f.getVideoHeight();
    }

    @Override
    public final double getAppPrice() {
        return this.f.getAppPrice();
    }

    @Override
    public final int getAppCommentNum() {
        return this.f.getAppCommentNum();
    }

    @Override
    public final String getAdvertiserName() {
        return this.f.getAdvertiserName();
    }

    @Override
    public final int getNativeType() {
        return this.f.getNativeType();
    }

    @Override
    public final int getNativeAdInteractionType() {
        return this.f.getNativeAdInteractionType();
    }

    @Override
    public final double getVideoDuration() {
        return this.f.getVideoDuration();
    }

    @Override
    public final double getVideoProgress() {
        return this.f.getVideoProgress();
    }

    @Override
    public final String getAdType() {
        return this.f.getAdType();
    }

    @Override
    public final TYCustomVideo getNativeCustomVideo() {
        return this.f.getNativeCustomVideo();
    }

    @Override
    public final void registerListener(View view, List<View> list, FrameLayout.LayoutParams layoutParams) {
        this.f.registerListener(view, list, layoutParams);
    }

    @Override
    public final String getDomain() {
        BaseAd baseAd = this.f;
        return baseAd != null ? baseAd.getDomain() : "";
    }

    @Override
    public final String getWarning() {
        BaseAd baseAd = this.f;
        return baseAd != null ? baseAd.getWarning() : "";
    }

    @Override
    public final View getShakeView(int i, int i2, ATShakeViewListener aTShakeViewListener) {
        BaseAd baseAd = this.f;
        if (baseAd != null) {
            return baseAd.getShakeView(i, i2, aTShakeViewListener);
        }
        return null;
    }

    @Override
    public final void setVideoMute(boolean z) {
        this.f.setVideoMute(z);
    }

    @Override
    public final ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
        BaseAd baseAd = this.f;
        if (baseAd != null) {
            return baseAd.getAdvertiserInfoOperate();
        }
        return null;
    }
}
