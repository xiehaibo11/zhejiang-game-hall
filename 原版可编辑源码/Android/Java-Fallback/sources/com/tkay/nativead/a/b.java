package com.tkay.nativead.a;

public final class b implements com.tkay.nativead.api.TYNativeMaterial {
    com.tkay.nativead.unitgroup.api.CustomNativeAd a;

    public b(com.tkay.nativead.unitgroup.api.CustomNativeAd r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final com.tkay.core.api.TYAdAppInfo getAdAppInfo() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            com.tkay.core.api.TYAdAppInfo r0 = r0.getAdAppInfo()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getAdChoiceIconUrl() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAdChoiceIconUrl()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.lang.String getAdFrom() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAdFrom()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final android.view.View getAdIconView() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            android.view.View r0 = r0.getAdIconView()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final android.graphics.Bitmap getAdLogo() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            android.graphics.Bitmap r0 = r0.getAdLogo()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View getAdLogoView() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            android.view.View r0 = r0.getAdLogoView()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View getAdMediaView(java.lang.Object... r3) {
            r2 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r2.a
            boolean r0 = r0.isNativeExpress()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r2.a
            if (r0 == 0) goto L13
            android.view.View r3 = r0.getAdMediaView(r3)
            return r3
        L13:
            return r1
    }

    @Override
    public final java.lang.String getAdType() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAdType()
            return r0
        L9:
            java.lang.String r0 = "0"
            return r0
    }

    @Override
    public final com.tkay.core.api.ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            com.tkay.core.api.ITYAdvertiserInfoOperate r0 = r0.getAdvertiserInfoOperate()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getAdvertiserName() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAdvertiserName()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final int getAppCommentNum() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getAppCommentNum()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View getAppDownloadButton() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            android.view.View r0 = r0.getAppDownloadButton()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final double getAppPrice() {
            r2 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r2.a
            if (r0 == 0) goto L9
            double r0 = r0.getAppPrice()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getCallToActionText() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getCallToActionText()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.lang.String getDescriptionText() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getDescriptionText()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.lang.String getDomain() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getDomain()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.lang.String getIconImageUrl() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getIconImageUrl()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.util.List<java.lang.String> getImageUrlList() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.util.List r0 = r0.getImageUrlList()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getMainImageHeight() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getMainImageHeight()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getMainImageUrl() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getMainImageUrl()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final int getMainImageWidth() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getMainImageWidth()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getNativeAdInteractionType() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getNativeAdInteractionType()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final com.tkay.core.api.TYCustomVideo getNativeCustomVideo() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            com.tkay.core.api.TYCustomVideo r0 = r0.getNativeCustomVideo()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getNativeExpressHeight() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getNativeExpressHeight()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getNativeExpressWidth() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getNativeExpressWidth()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getNativeType() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getNativeType()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.util.Map r0 = r0.getNetworkInfoMap()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View getShakeView(int r2, int r3, com.tkay.core.api.ATShakeViewListener r4) {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            android.view.View r2 = r0.getShakeView(r2, r3, r4)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public final java.lang.Double getStarRating() {
            r3 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r3.a
            r1 = 0
            if (r0 == 0) goto L16
            java.lang.Double r0 = r0.getStarRating()
            if (r0 == 0) goto L16
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r3.a
            java.lang.Double r0 = r0.getStarRating()
            double r1 = r0.doubleValue()
        L16:
            java.lang.Double r0 = java.lang.Double.valueOf(r1)
            return r0
    }

    @Override
    public final java.lang.String getTitle() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getTitle()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final double getVideoDuration() {
            r2 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r2.a
            if (r0 == 0) goto L9
            double r0 = r0.getVideoDuration()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getVideoHeight()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final double getVideoProgress() {
            r2 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r2.a
            double r0 = r0.getVideoProgress()
            return r0
    }

    @Override
    public final java.lang.String getVideoUrl() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getVideoUrl()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getVideoWidth()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getWarning() {
            r1 = this;
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getWarning()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }
}
