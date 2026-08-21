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

/* JADX INFO: loaded from: classes3.dex */
public final class e extends BaseAd implements a, Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f6131a;
    private int b;
    private int c;
    private int d;
    private int e;
    private BaseAd f;
    private Map<String, Object> g;

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getAdIconView() {
        return null;
    }

    public e(BaseAd baseAd, Map<String, Object> map) {
        this.f6131a = 1;
        this.b = 5;
        this.c = 1;
        this.e = 5;
        this.f = baseAd;
        this.g = map;
        Object obj = map.get("orientation");
        if (obj != null) {
            this.f6131a = Integer.parseInt(obj.toString());
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
            this.f6131a = Integer.parseInt(obj.toString());
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

    @Override // com.tkay.core.common.f.a.a
    public final int a() {
        return this.f6131a;
    }

    @Override // com.tkay.core.common.f.a.a
    public final long b() {
        return this.b;
    }

    @Override // com.tkay.core.common.f.a.a
    public final int c() {
        int i = this.c;
        return (i != 1 && i == 0) ? 1 : 0;
    }

    @Override // com.tkay.core.common.f.a.a
    public final int d() {
        int i = this.d;
        if (i != 1) {
            return i != 2 ? 2 : 1;
        }
        return 0;
    }

    @Override // com.tkay.core.common.f.a.a
    public final int e() {
        return this.e;
    }

    @Override // com.tkay.core.common.f.a.a
    public final int f() {
        Object obj;
        if (this.f.getDetail() == null || this.f.getDetail().H() != 8 || (obj = this.g.get("video_muted")) == null) {
            return 0;
        }
        return TextUtils.equals(obj.toString(), "0") ? 1 : 0;
    }

    @Override // com.tkay.core.api.BaseAd
    public final void setTrackingInfo(com.tkay.core.common.f.d dVar) {
        this.f.setTrackingInfo(dVar);
    }

    @Override // com.tkay.core.api.BaseAd
    public final com.tkay.core.common.f.d getDetail() {
        return this.f.getDetail();
    }

    @Override // com.tkay.core.api.BaseAd
    public final void setNetworkInfoMap(Map<String, Object> map) {
        this.f.setNetworkInfoMap(map);
    }

    @Override // com.tkay.core.api.BaseAd, com.tkay.core.api.IATThirdPartyMaterial
    public final Map<String, Object> getNetworkInfoMap() {
        return this.f.getNetworkInfoMap();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getAppDownloadButton() {
        return this.f.getAppDownloadButton();
    }

    @Override // com.tkay.core.api.BaseAd
    public final void destroy() {
        this.f.destroy();
    }

    @Override // com.tkay.core.api.BaseAd
    public final void setNativeEventListener(k kVar) {
        this.f.setNativeEventListener(kVar);
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getTitle() {
        return this.f.getTitle();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getDescriptionText() {
        return this.f.getDescriptionText();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getMainImageUrl() {
        return this.f.getMainImageUrl();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getIconImageUrl() {
        return this.f.getIconImageUrl();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getCallToActionText() {
        return this.f.getCallToActionText();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final Double getStarRating() {
        return this.f.getStarRating();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getVideoUrl() {
        return this.f.getVideoUrl();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getAdChoiceIconUrl() {
        return this.f.getAdChoiceIconUrl();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getAdFrom() {
        return this.f.getAdFrom();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getAdLogoView() {
        return this.f.getAdLogoView();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final List<String> getImageUrlList() {
        return this.f.getImageUrlList();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final TYAdAppInfo getAdAppInfo() {
        return this.f.getAdAppInfo();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getAdMediaView(Object... objArr) {
        return this.f.getAdMediaView(objArr);
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final Bitmap getAdLogo() {
        return this.f.getAdLogo();
    }

    @Override // com.tkay.core.api.BaseAd
    public final ViewGroup getCustomAdContainer() {
        return this.f.getCustomAdContainer();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getMainImageHeight() {
        return this.f.getMainImageHeight();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getMainImageWidth() {
        return this.f.getMainImageWidth();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getNativeExpressWidth() {
        return this.f.getNativeExpressWidth();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getNativeExpressHeight() {
        return this.f.getNativeExpressHeight();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getVideoWidth() {
        return this.f.getVideoWidth();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getVideoHeight() {
        return this.f.getVideoHeight();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final double getAppPrice() {
        return this.f.getAppPrice();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getAppCommentNum() {
        return this.f.getAppCommentNum();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getAdvertiserName() {
        return this.f.getAdvertiserName();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getNativeType() {
        return this.f.getNativeType();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final int getNativeAdInteractionType() {
        return this.f.getNativeAdInteractionType();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final double getVideoDuration() {
        return this.f.getVideoDuration();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final double getVideoProgress() {
        return this.f.getVideoProgress();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getAdType() {
        return this.f.getAdType();
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final TYCustomVideo getNativeCustomVideo() {
        return this.f.getNativeCustomVideo();
    }

    @Override // com.tkay.core.api.BaseAd
    public final void registerListener(View view, List<View> list, FrameLayout.LayoutParams layoutParams) {
        this.f.registerListener(view, list, layoutParams);
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getDomain() {
        BaseAd baseAd = this.f;
        return baseAd != null ? baseAd.getDomain() : "";
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final String getWarning() {
        BaseAd baseAd = this.f;
        return baseAd != null ? baseAd.getWarning() : "";
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final View getShakeView(int i, int i2, ATShakeViewListener aTShakeViewListener) {
        BaseAd baseAd = this.f;
        if (baseAd != null) {
            return baseAd.getShakeView(i, i2, aTShakeViewListener);
        }
        return null;
    }

    @Override // com.tkay.core.api.BaseAd
    public final void setVideoMute(boolean z) {
        this.f.setVideoMute(z);
    }

    @Override // com.tkay.core.api.IATThirdPartyMaterial
    public final ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
        BaseAd baseAd = this.f;
        if (baseAd != null) {
            return baseAd.getAdvertiserInfoOperate();
        }
        return null;
    }
}
