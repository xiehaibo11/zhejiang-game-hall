package com.tkay.network.gdt;

public class GDTTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    private static final java.lang.String l = null;
    java.lang.ref.WeakReference<android.content.Context> a;
    android.content.Context b;
    com.qq.e.ads.nativ.NativeUnifiedADData c;
    int d;
    int e;
    int f;
    int g;
    android.view.View h;
    com.qq.e.ads.nativ.MediaView i;
    boolean j;
    com.qq.e.ads.nativ.widget.NativeAdContainer k;


    final class 2 extends com.qq.e.ads.nativ.NativeADEventListenerWithClickInfo {
        final com.qq.e.ads.nativ.NativeUnifiedADData a;
        final com.tkay.network.gdt.GDTTYNativeAd b;

        2(com.tkay.network.gdt.GDTTYNativeAd r1, com.qq.e.ads.nativ.NativeUnifiedADData r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onADClicked(android.view.View r2) {
                r1 = this;
                com.tkay.network.gdt.GDTTYNativeAd r0 = r1.b
                r0.h = r2
                java.lang.String r2 = java.lang.String.valueOf(r2)
                java.lang.String r0 = "onADClicked...."
                java.lang.String r2 = r0.concat(r2)
                java.lang.String r0 = "GDTTYNativeAd"
                android.util.Log.i(r0, r2)
                com.tkay.network.gdt.GDTTYNativeAd r2 = r1.b
                r2.notifyAdClicked()
                return
        }

        @Override
        public final void onADError(com.qq.e.comm.util.AdError r1) {
                r0 = this;
                return
        }

        @Override
        public final void onADExposed() {
                r4 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
                com.tkay.network.gdt.GDTTYNativeAd r1 = r4.b
                java.lang.String r1 = r1.getShowId()
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                com.qq.e.ads.nativ.NativeUnifiedADData r3 = r4.a
                r2.<init>(r3)
                r0.a(r1, r2)
                com.tkay.network.gdt.GDTTYNativeAd r0 = r4.b
                r0.notifyAdImpression()
                return
        }

        @Override
        public final void onADStatusChanged() {
                r0 = this;
                return
        }
    }


    static {
            java.lang.Class<com.tkay.network.gdt.GDTTYNativeAd> r0 = com.tkay.network.gdt.GDTTYNativeAd.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.gdt.GDTTYNativeAd.l = r0
            return
    }

    protected GDTTYNativeAd(android.content.Context r3, com.qq.e.ads.nativ.NativeUnifiedADData r4, int r5, int r6, int r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.g = r0
            r2.j = r0
            android.content.Context r0 = r3.getApplicationContext()
            r2.b = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            r2.d = r5
            r2.e = r6
            r2.f = r7
            r2.c = r4
            java.lang.String r3 = r4.getTitle()
            r2.setTitle(r3)
            java.lang.String r3 = r4.getDesc()
            r2.setDescriptionText(r3)
            java.lang.String r3 = r4.getIconUrl()
            r2.setIconImageUrl(r3)
            int r3 = r4.getAppScore()
            double r5 = (double) r3
            java.lang.Double r3 = java.lang.Double.valueOf(r5)
            r2.setStarRating(r3)
            double r5 = r4.getAppPrice()
            r2.setAppPrice(r5)
            java.lang.String r3 = r2.getCallToAction(r4)
            r2.setCallToActionText(r3)
            java.lang.String r3 = r4.getImgUrl()
            r2.setMainImageUrl(r3)
            int r3 = r4.getPictureWidth()
            r2.setMainImageWidth(r3)
            int r3 = r4.getPictureHeight()
            r2.setMainImageHeight(r3)
            java.util.List r3 = r4.getImgList()
            r2.setImageUrlList(r3)
            int r3 = r4.getVideoDuration()
            double r5 = (double) r3
            r0 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r5 = r5 / r0
            r2.setVideoDuration(r5)
            boolean r3 = r4.isAppAd()
            r2.setNativeInteractionType(r3)
            com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo r3 = r4.getAppMiitInfo()
            boolean r5 = r4.isAppAd()
            if (r5 == 0) goto L9c
            if (r3 == 0) goto L9c
            long r5 = r4.getDownloadCount()     // Catch: java.lang.Exception -> L92
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L92
            goto L94
        L92:
            java.lang.String r5 = ""
        L94:
            com.tkay.network.gdt.GDTATDownloadAppInfo r6 = new com.tkay.network.gdt.GDTATDownloadAppInfo
            r6.<init>(r3, r5)
            r2.setAdAppInfo(r6)
        L9c:
            int r3 = r4.getAdPatternType()
            r5 = 2
            if (r3 != r5) goto La8
            java.lang.String r3 = "1"
            r2.mAdSourceType = r3
            goto Lac
        La8:
            java.lang.String r3 = "2"
            r2.mAdSourceType = r3
        Lac:
            com.tkay.network.gdt.GDTTYNativeAd$2 r3 = new com.tkay.network.gdt.GDTTYNativeAd$2
            r3.<init>(r2, r4)
            r4.setNativeAdEventListener(r3)
            java.util.Map r3 = r4.getExtraInfo()
            r2.setNetworkInfoMap(r3)
            return
    }

    private void a(android.view.View r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = r3 instanceof android.view.ViewGroup
            r1 = 0
            if (r0 == 0) goto L1f
            com.qq.e.ads.nativ.MediaView r0 = r2.i
            if (r3 == r0) goto L1f
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
        Le:
            int r0 = r3.getChildCount()
            if (r1 >= r0) goto L1e
            android.view.View r0 = r3.getChildAt(r1)
            r2.a(r0)
            int r1 = r1 + 1
            goto Le
        L1e:
            return
        L1f:
            r0 = 0
            r3.setOnClickListener(r0)
            r3.setClickable(r1)
            return
    }

    private void a(android.view.View r3, java.util.List<android.view.View> r4) {
            r2 = this;
            boolean r0 = r3 instanceof android.view.ViewGroup
            if (r0 == 0) goto L1c
            com.qq.e.ads.nativ.MediaView r0 = r2.i
            if (r3 == r0) goto L1c
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r0 = 0
        Lb:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L1b
            android.view.View r1 = r3.getChildAt(r0)
            r2.a(r1, r4)
            int r0 = r0 + 1
            goto Lb
        L1b:
            return
        L1c:
            r4.add(r3)
            return
    }

    private void a(com.qq.e.ads.nativ.NativeUnifiedADData r5) {
            r4 = this;
            java.lang.String r0 = r5.getTitle()
            r4.setTitle(r0)
            java.lang.String r0 = r5.getDesc()
            r4.setDescriptionText(r0)
            java.lang.String r0 = r5.getIconUrl()
            r4.setIconImageUrl(r0)
            int r0 = r5.getAppScore()
            double r0 = (double) r0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r4.setStarRating(r0)
            double r0 = r5.getAppPrice()
            r4.setAppPrice(r0)
            java.lang.String r0 = r4.getCallToAction(r5)
            r4.setCallToActionText(r0)
            java.lang.String r0 = r5.getImgUrl()
            r4.setMainImageUrl(r0)
            int r0 = r5.getPictureWidth()
            r4.setMainImageWidth(r0)
            int r0 = r5.getPictureHeight()
            r4.setMainImageHeight(r0)
            java.util.List r0 = r5.getImgList()
            r4.setImageUrlList(r0)
            int r0 = r5.getVideoDuration()
            double r0 = (double) r0
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r0 = r0 / r2
            r4.setVideoDuration(r0)
            boolean r0 = r5.isAppAd()
            r4.setNativeInteractionType(r0)
            com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo r0 = r5.getAppMiitInfo()
            boolean r1 = r5.isAppAd()
            if (r1 == 0) goto L7f
            if (r0 == 0) goto L7f
            long r1 = r5.getDownloadCount()     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L75
            goto L77
        L75:
            java.lang.String r1 = ""
        L77:
            com.tkay.network.gdt.GDTATDownloadAppInfo r2 = new com.tkay.network.gdt.GDTATDownloadAppInfo
            r2.<init>(r0, r1)
            r4.setAdAppInfo(r2)
        L7f:
            int r0 = r5.getAdPatternType()
            r1 = 2
            if (r0 != r1) goto L8b
            java.lang.String r0 = "1"
            r4.mAdSourceType = r0
            goto L8f
        L8b:
            java.lang.String r0 = "2"
            r4.mAdSourceType = r0
        L8f:
            com.tkay.network.gdt.GDTTYNativeAd$2 r0 = new com.tkay.network.gdt.GDTTYNativeAd$2
            r0.<init>(r4, r5)
            r5.setNativeAdEventListener(r0)
            java.util.Map r5 = r5.getExtraInfo()
            r4.setNetworkInfoMap(r5)
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            r0.a(r1)
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            super.destroy()
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.c
            r1 = 0
            if (r0 == 0) goto L12
            r0.setNativeAdEventListener(r1)
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.c
            r0.destroy()
            r2.c = r1
        L12:
            r2.i = r1
            r2.b = r1
            java.lang.ref.WeakReference<android.content.Context> r0 = r2.a
            if (r0 == 0) goto L1f
            r0.clear()
            r2.a = r1
        L1f:
            com.qq.e.ads.nativ.widget.NativeAdContainer r0 = r2.k
            if (r0 == 0) goto L28
            r0.removeAllViews()
            r2.k = r1
        L28:
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r3) {
            r2 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.c
            if (r0 == 0) goto L39
            int r0 = r0.getAdPatternType()
            r1 = 2
            if (r0 == r1) goto L10
            android.view.View r3 = super.getAdMediaView(r3)
            return r3
        L10:
            com.qq.e.ads.nativ.MediaView r3 = r2.i
            if (r3 != 0) goto L36
            com.qq.e.ads.nativ.MediaView r3 = new com.qq.e.ads.nativ.MediaView
            android.content.Context r0 = r2.b
            r3.<init>(r0)
            r2.i = r3
            r0 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3.setBackgroundColor(r0)
            com.qq.e.ads.nativ.MediaView r3 = r2.i
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            if (r3 != 0) goto L31
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r0 = -1
            r1 = -2
            r3.<init>(r0, r1)
        L31:
            com.qq.e.ads.nativ.MediaView r0 = r2.i
            r0.setLayoutParams(r3)
        L36:
            com.qq.e.ads.nativ.MediaView r3 = r2.i
            return r3
        L39:
            android.view.View r3 = super.getAdMediaView(r3)
            return r3
    }

    public java.lang.String getCallToAction(com.qq.e.ads.nativ.NativeUnifiedADData r3) {
            r2 = this;
            java.lang.String r0 = r3.getCTAText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r3 = r3.getCTAText()
            return r3
        Lf:
            boolean r0 = r3.isAppAd()
            int r3 = r3.getAppStatus()
            java.lang.String r1 = "浏览"
            if (r0 != 0) goto L1c
            return r1
        L1c:
            if (r3 == 0) goto L39
            r0 = 1
            if (r3 == r0) goto L36
            r0 = 2
            if (r3 == r0) goto L33
            r0 = 4
            if (r3 == r0) goto L39
            r0 = 8
            if (r3 == r0) goto L30
            r0 = 16
            if (r3 == r0) goto L39
            return r1
        L30:
            java.lang.String r3 = "安装"
            return r3
        L33:
            java.lang.String r3 = "更新"
            return r3
        L36:
            java.lang.String r3 = "启动"
            return r3
        L39:
            java.lang.String r3 = "下载"
            return r3
    }

    @Override
    public android.view.ViewGroup getCustomAdContainer() {
            r2 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.c
            if (r0 == 0) goto Ld
            com.qq.e.ads.nativ.widget.NativeAdContainer r0 = new com.qq.e.ads.nativ.widget.NativeAdContainer
            android.content.Context r1 = r2.b
            r0.<init>(r1)
            r2.k = r0
        Ld:
            com.qq.e.ads.nativ.widget.NativeAdContainer r0 = r2.k
            return r0
    }

    @Override
    public double getVideoProgress() {
            r4 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r4.c
            if (r0 == 0) goto L10
            int r0 = r0.getVideoCurrentPosition()
            double r0 = (double) r0
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r0 = r0 / r2
            return r0
        L10:
            double r0 = super.getVideoProgress()
            return r0
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onResume() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.c
            if (r0 == 0) goto L7
            r0.resume()
        L7:
            return
    }

    @Override
    public void pauseVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.c
            if (r0 == 0) goto L7
            r0.pauseVideo()
        L7:
            return
    }

    @Override
    public void prepare(android.view.View r8, com.tkay.nativead.api.TYNativePrepareInfo r9) {
            r7 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r7.c
            if (r0 == 0) goto L8b
            com.qq.e.ads.nativ.widget.NativeAdContainer r0 = r7.k
            if (r0 == 0) goto L8b
            java.util.List r0 = r9.getClickViewList()
            if (r0 == 0) goto L14
            int r1 = r0.size()
            if (r1 != 0) goto L1c
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r7.a(r8, r0)
        L1c:
            r5 = r0
            android.widget.FrameLayout$LayoutParams r4 = r9.getChoiceViewLayoutParams()
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            boolean r0 = r9 instanceof com.tkay.nativead.api.TYNativePrepareExInfo
            if (r0 == 0) goto L35
            com.tkay.nativead.api.TYNativePrepareExInfo r9 = (com.tkay.nativead.api.TYNativePrepareExInfo) r9
            java.util.List r9 = r9.getCreativeClickViewList()
            if (r9 == 0) goto L35
            r6.addAll(r9)
        L35:
            com.qq.e.ads.nativ.NativeUnifiedADData r1 = r7.c
            android.content.Context r2 = r8.getContext()
            com.qq.e.ads.nativ.widget.NativeAdContainer r3 = r7.k
            r1.bindAdToView(r2, r3, r4, r5, r6)
            com.qq.e.ads.nativ.MediaView r8 = r7.i     // Catch: java.lang.Throwable -> L87
            if (r8 != 0) goto L45
            return
        L45:
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r7.c     // Catch: java.lang.Throwable -> L87
            com.qq.e.ads.nativ.MediaView r9 = r7.i     // Catch: java.lang.Throwable -> L87
            com.qq.e.ads.cfg.VideoOption$Builder r0 = new com.qq.e.ads.cfg.VideoOption$Builder     // Catch: java.lang.Throwable -> L87
            r0.<init>()     // Catch: java.lang.Throwable -> L87
            int r1 = r7.d     // Catch: java.lang.Throwable -> L87
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L56
            r1 = r3
            goto L57
        L56:
            r1 = r2
        L57:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayMuted(r1)     // Catch: java.lang.Throwable -> L87
            int r1 = r7.d     // Catch: java.lang.Throwable -> L87
            if (r1 != r3) goto L61
            r1 = r3
            goto L62
        L61:
            r1 = r2
        L62:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setDetailPageMuted(r1)     // Catch: java.lang.Throwable -> L87
            int r1 = r7.e     // Catch: java.lang.Throwable -> L87
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r1)     // Catch: java.lang.Throwable -> L87
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()     // Catch: java.lang.Throwable -> L87
            com.tkay.network.gdt.GDTTYNativeAd$3 r1 = new com.tkay.network.gdt.GDTTYNativeAd$3     // Catch: java.lang.Throwable -> L87
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L87
            r8.bindMediaView(r9, r0, r1)     // Catch: java.lang.Throwable -> L87
            int r8 = r7.g     // Catch: java.lang.Throwable -> L87
            if (r8 <= 0) goto L86
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r7.c     // Catch: java.lang.Throwable -> L87
            int r9 = r7.g     // Catch: java.lang.Throwable -> L87
            if (r9 != r3) goto L83
            r2 = r3
        L83:
            r8.setVideoMute(r2)     // Catch: java.lang.Throwable -> L87
        L86:
            return
        L87:
            r8 = move-exception
            r8.printStackTrace()
        L8b:
            return
    }

    @Override
    public void registerDownloadConfirmListener() {
            r2 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.c
            com.tkay.network.gdt.GDTTYNativeAd$1 r1 = new com.tkay.network.gdt.GDTTYNativeAd$1
            r1.<init>(r2)
            r0.setDownloadConfirmListener(r1)
            return
    }

    @Override
    public void resumeVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.c
            if (r0 == 0) goto L7
            r0.resumeVideo()
        L7:
            return
    }

    @Override
    public void setVideoMute(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 2
        L5:
            r1.g = r0
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.c
            if (r0 == 0) goto Le
            r0.setVideoMute(r2)
        Le:
            return
    }
}
