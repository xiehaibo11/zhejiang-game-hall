package com.tkay.core.common.f.a;

public final class e extends com.tkay.core.api.BaseAd implements com.tkay.core.common.f.a.a, java.io.Serializable {
    private int a;
    private int b;
    private int c;
    private int d;
    private int e;
    private com.tkay.core.api.BaseAd f;
    private java.util.Map<java.lang.String, java.lang.Object> g;

    public e(com.tkay.core.api.BaseAd r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.a = r0
            r1 = 5
            r2.b = r1
            r2.c = r0
            r2.e = r1
            r2.f = r3
            r2.g = r4
            java.lang.String r3 = "orientation"
            java.lang.Object r3 = r4.get(r3)
            if (r3 == 0) goto L23
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            r2.a = r3
        L23:
            java.lang.String r3 = "countdown"
            java.lang.Object r3 = r4.get(r3)
            if (r3 == 0) goto L35
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            r2.b = r3
        L35:
            java.lang.String r3 = "allows_skip"
            java.lang.Object r3 = r4.get(r3)
            if (r3 == 0) goto L47
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            r2.c = r3
        L47:
            java.lang.String r3 = "button_type"
            java.lang.Object r3 = r4.get(r3)
            if (r3 == 0) goto L59
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            r2.d = r3
        L59:
            java.lang.String r3 = "s_c_t"
            java.lang.Object r3 = r4.get(r3)
            if (r3 == 0) goto L6b
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            r2.e = r3
        L6b:
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "orientation"
            java.lang.Object r0 = r2.get(r0)
            if (r0 == 0) goto L12
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r1.a = r0
        L12:
            java.lang.String r0 = "countdown"
            java.lang.Object r0 = r2.get(r0)
            if (r0 == 0) goto L24
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r1.b = r0
        L24:
            java.lang.String r0 = "allows_skip"
            java.lang.Object r0 = r2.get(r0)
            if (r0 == 0) goto L36
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r1.c = r0
        L36:
            java.lang.String r0 = "button_type"
            java.lang.Object r0 = r2.get(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r1.d = r0
        L48:
            java.lang.String r0 = "s_c_t"
            java.lang.Object r2 = r2.get(r0)
            if (r2 == 0) goto L5a
            java.lang.String r2 = r2.toString()
            int r2 = java.lang.Integer.parseInt(r2)
            r1.e = r2
        L5a:
            return
    }

    @Override
    public final int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public final long b() {
            r2 = this;
            int r0 = r2.b
            long r0 = (long) r0
            return r0
    }

    @Override
    public final int c() {
            r3 = this;
            int r0 = r3.c
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L7
            return r1
        L7:
            if (r0 != 0) goto La
            return r2
        La:
            return r1
    }

    @Override
    public final int d() {
            r3 = this;
            int r0 = r3.d
            r1 = 1
            if (r0 == r1) goto La
            r2 = 2
            if (r0 == r2) goto L9
            return r2
        L9:
            return r1
        La:
            r0 = 0
            return r0
    }

    @Override
    public final void destroy() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.destroy()
            return
    }

    @Override
    public final int e() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public final int f() {
            r2 = this;
            com.tkay.core.api.BaseAd r0 = r2.f
            com.tkay.core.common.f.d r0 = r0.getDetail()
            if (r0 == 0) goto L2c
            com.tkay.core.api.BaseAd r0 = r2.f
            com.tkay.core.common.f.d r0 = r0.getDetail()
            int r0 = r0.H()
            r1 = 8
            if (r0 == r1) goto L17
            goto L2c
        L17:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.g
            java.lang.String r1 = "video_muted"
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L2c
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "0"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            goto L2d
        L2c:
            r0 = 0
        L2d:
            return r0
    }

    @Override
    public final com.tkay.core.api.TYAdAppInfo getAdAppInfo() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            com.tkay.core.api.TYAdAppInfo r0 = r0.getAdAppInfo()
            return r0
    }

    @Override
    public final java.lang.String getAdChoiceIconUrl() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getAdChoiceIconUrl()
            return r0
    }

    @Override
    public final java.lang.String getAdFrom() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getAdFrom()
            return r0
    }

    @Override
    public final android.view.View getAdIconView() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final android.graphics.Bitmap getAdLogo() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            android.graphics.Bitmap r0 = r0.getAdLogo()
            return r0
    }

    @Override
    public final android.view.View getAdLogoView() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            android.view.View r0 = r0.getAdLogoView()
            return r0
    }

    @Override
    public final android.view.View getAdMediaView(java.lang.Object... r2) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            android.view.View r2 = r0.getAdMediaView(r2)
            return r2
    }

    @Override
    public final java.lang.String getAdType() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getAdType()
            return r0
    }

    @Override
    public final com.tkay.core.api.ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
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
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getAdvertiserName()
            return r0
    }

    @Override
    public final int getAppCommentNum() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getAppCommentNum()
            return r0
    }

    @Override
    public final android.view.View getAppDownloadButton() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            android.view.View r0 = r0.getAppDownloadButton()
            return r0
    }

    @Override
    public final double getAppPrice() {
            r2 = this;
            com.tkay.core.api.BaseAd r0 = r2.f
            double r0 = r0.getAppPrice()
            return r0
    }

    @Override
    public final java.lang.String getCallToActionText() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getCallToActionText()
            return r0
    }

    @Override
    public final android.view.ViewGroup getCustomAdContainer() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            android.view.ViewGroup r0 = r0.getCustomAdContainer()
            return r0
    }

    @Override
    public final java.lang.String getDescriptionText() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getDescriptionText()
            return r0
    }

    @Override
    public final com.tkay.core.common.f.d getDetail() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            com.tkay.core.common.f.d r0 = r0.getDetail()
            return r0
    }

    @Override
    public final java.lang.String getDomain() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
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
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getIconImageUrl()
            return r0
    }

    @Override
    public final java.util.List<java.lang.String> getImageUrlList() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.util.List r0 = r0.getImageUrlList()
            return r0
    }

    @Override
    public final int getMainImageHeight() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getMainImageHeight()
            return r0
    }

    @Override
    public final java.lang.String getMainImageUrl() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getMainImageUrl()
            return r0
    }

    @Override
    public final int getMainImageWidth() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getMainImageWidth()
            return r0
    }

    @Override
    public final int getNativeAdInteractionType() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getNativeAdInteractionType()
            return r0
    }

    @Override
    public final com.tkay.core.api.TYCustomVideo getNativeCustomVideo() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            com.tkay.core.api.TYCustomVideo r0 = r0.getNativeCustomVideo()
            return r0
    }

    @Override
    public final int getNativeExpressHeight() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getNativeExpressHeight()
            return r0
    }

    @Override
    public final int getNativeExpressWidth() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getNativeExpressWidth()
            return r0
    }

    @Override
    public final int getNativeType() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getNativeType()
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.util.Map r0 = r0.getNetworkInfoMap()
            return r0
    }

    @Override
    public final android.view.View getShakeView(int r2, int r3, com.tkay.core.api.ATShakeViewListener r4) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            if (r0 == 0) goto L9
            android.view.View r2 = r0.getShakeView(r2, r3, r4)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public final java.lang.Double getStarRating() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.Double r0 = r0.getStarRating()
            return r0
    }

    @Override
    public final java.lang.String getTitle() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getTitle()
            return r0
    }

    @Override
    public final double getVideoDuration() {
            r2 = this;
            com.tkay.core.api.BaseAd r0 = r2.f
            double r0 = r0.getVideoDuration()
            return r0
    }

    @Override
    public final int getVideoHeight() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getVideoHeight()
            return r0
    }

    @Override
    public final double getVideoProgress() {
            r2 = this;
            com.tkay.core.api.BaseAd r0 = r2.f
            double r0 = r0.getVideoProgress()
            return r0
    }

    @Override
    public final java.lang.String getVideoUrl() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            java.lang.String r0 = r0.getVideoUrl()
            return r0
    }

    @Override
    public final int getVideoWidth() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            int r0 = r0.getVideoWidth()
            return r0
    }

    @Override
    public final java.lang.String getWarning() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getWarning()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final void registerListener(android.view.View r2, java.util.List<android.view.View> r3, android.widget.FrameLayout.LayoutParams r4) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.registerListener(r2, r3, r4)
            return
    }

    @Override
    public final void setNativeEventListener(com.tkay.core.common.b.k r2) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.setNativeEventListener(r2)
            return
    }

    @Override
    public final void setNetworkInfoMap(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.setNetworkInfoMap(r2)
            return
    }

    @Override
    public final void setTrackingInfo(com.tkay.core.common.f.d r2) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.setTrackingInfo(r2)
            return
    }

    @Override
    public final void setVideoMute(boolean r2) {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.f
            r0.setVideoMute(r2)
            return
    }
}
