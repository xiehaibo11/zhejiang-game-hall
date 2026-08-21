package com.tkay.network.toutiao;

public class TTTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.bykv.vk.openvk.TTNtObject a;
    android.content.Context b;
    java.lang.String c;
    boolean d;
    com.tkay.network.toutiao.TTTYCustomVideo e;
    double f;
    android.view.View g;




    final class 4 implements android.view.View.OnClickListener {
        final android.app.Activity a;
        final com.tkay.network.toutiao.TTTYNativeAd b;


        4(com.tkay.network.toutiao.TTTYNativeAd r1, android.app.Activity r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.network.toutiao.TTTYNativeAd r2 = r1.b
                com.bykv.vk.openvk.TTNtObject r2 = r2.a
                if (r2 != 0) goto L7
                return
            L7:
                com.tkay.network.toutiao.TTTYNativeAd r2 = r1.b
                com.bykv.vk.openvk.TTNtObject r2 = r2.a
                android.app.Activity r0 = r1.a
                com.bykv.vk.openvk.TTVfDislike r2 = r2.getDislikeDialog(r0)
                com.tkay.network.toutiao.TTTYNativeAd$4$1 r0 = new com.tkay.network.toutiao.TTTYNativeAd$4$1
                r0.<init>(r1)
                r2.setDislikeInteractionCallback(r0)
                boolean r0 = r2.isShow()
                if (r0 != 0) goto L22
                r2.showDislikeDialog()
            L22:
                return
        }
    }

    public TTTYNativeAd(android.content.Context r2, java.lang.String r3, com.bykv.vk.openvk.TTNtObject r4, boolean r5, android.graphics.Bitmap r6, int r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            r1.c = r3
            r1.a = r4
            java.util.Map r2 = r4.getMediaExtraInfo()
            r1.setNetworkInfoMap(r2)
            r1.setAdData(r5, r6, r7)
            return
    }

    static com.tkay.core.api.TYEventInterface a(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    private void a(android.app.Activity r2) {
            r1 = this;
            com.tkay.network.toutiao.TTTYNativeAd$4 r0 = new com.tkay.network.toutiao.TTTYNativeAd$4
            r0.<init>(r1, r2)
            r1.bindDislikeListener(r0)
            return
    }

    private void a(android.view.View r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = r3 instanceof android.view.ViewGroup
            if (r0 == 0) goto L26
            com.bykv.vk.openvk.TTNtObject r0 = r2.a
            if (r0 == 0) goto L12
            android.view.View r0 = r0.getAdView()
            if (r3 != r0) goto L12
            return
        L12:
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r0 = 0
        L15:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L25
            android.view.View r1 = r3.getChildAt(r0)
            r2.a(r1)
            int r0 = r0 + 1
            goto L15
        L25:
            return
        L26:
            r0 = 0
            r3.setOnClickListener(r0)
            return
    }

    private void a(java.util.List<android.view.View> r3, android.view.View r4) {
            r2 = this;
            boolean r0 = r4 instanceof android.view.ViewGroup
            if (r0 == 0) goto L20
            com.bykv.vk.openvk.TTNtObject r0 = r2.a
            android.view.View r0 = r0.getAdView()
            if (r4 == r0) goto L20
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            r0 = 0
        Lf:
            int r1 = r4.getChildCount()
            if (r0 >= r1) goto L1f
            android.view.View r1 = r4.getChildAt(r0)
            r2.a(r3, r1)
            int r0 = r0 + 1
            goto Lf
        L1f:
            return
        L20:
            com.bykv.vk.openvk.TTNtObject r0 = r2.a
            android.view.View r0 = r0.getAdView()
            if (r4 == r0) goto L2b
            r3.add(r4)
        L2b:
            return
    }

    static com.tkay.core.api.TYEventInterface b(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface c(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface d(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface e(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface f(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface g(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface h(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface i(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface j(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface k(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface l(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface m(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface n(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface o(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface p(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface q(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface r(com.tkay.network.toutiao.TTTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
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
            r0 = 0
            com.bykv.vk.openvk.TTNtObject r1 = r2.a     // Catch: java.lang.Exception -> La
            if (r1 == 0) goto La
            com.bykv.vk.openvk.TTNtObject r1 = r2.a     // Catch: java.lang.Exception -> La
            r1.setActivityForDownloadApp(r0)     // Catch: java.lang.Exception -> La
        La:
            r2.b = r0
            r2.a = r0
            return
    }

    @Override
    public android.graphics.Bitmap getAdLogo() {
            r1 = this;
            com.bykv.vk.openvk.TTNtObject r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.TTNtObject r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            android.graphics.Bitmap r0 = r0.getAdLogo()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            android.view.View r1 = r0.g
            if (r1 != 0) goto Lc
            com.bykv.vk.openvk.TTNtObject r1 = r0.a
            android.view.View r1 = r1.getAdView()
            r0.g = r1
        Lc:
            android.view.View r1 = r0.g
            return r1
    }

    @Override
    public com.tkay.core.api.TYCustomVideo getNativeCustomVideo() {
            r1 = this;
            com.tkay.network.toutiao.TTTYCustomVideo r0 = r1.e
            return r0
    }

    @Override
    public double getVideoProgress() {
            r2 = this;
            double r0 = r2.f
            return r0
    }

    @Override
    public void prepare(android.view.View r4, com.tkay.nativead.api.TYNativePrepareInfo r5) {
            r3 = this;
            java.util.List r5 = r5.getClickViewList()
            if (r5 == 0) goto Lc
            int r0 = r5.size()
            if (r0 != 0) goto L14
        Lc:
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.a(r5, r4)
        L14:
            com.bykv.vk.openvk.TTNtObject r0 = r3.a
            r1 = r4
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            com.tkay.network.toutiao.TTTYNativeAd$3 r2 = new com.tkay.network.toutiao.TTTYNativeAd$3
            r2.<init>(r3)
            r0.registerViewForInteraction(r1, r5, r5, r2)
            android.content.Context r5 = r4.getContext()
            boolean r5 = r5 instanceof android.app.Activity
            if (r5 == 0) goto L42
            com.bykv.vk.openvk.TTNtObject r5 = r3.a
            android.content.Context r0 = r4.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            r5.setActivityForDownloadApp(r0)
            android.content.Context r4 = r4.getContext()
            android.app.Activity r4 = (android.app.Activity) r4
            com.tkay.network.toutiao.TTTYNativeAd$4 r5 = new com.tkay.network.toutiao.TTTYNativeAd$4
            r5.<init>(r3, r4)
            r3.bindDislikeListener(r5)
        L42:
            return
    }

    public void setAdData(boolean r7, android.graphics.Bitmap r8, int r9) {
            r6 = this;
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            java.lang.String r0 = r0.getTitle()
            r6.setTitle(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            java.lang.String r0 = r0.getDescription()
            r6.setDescriptionText(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            java.lang.String r0 = r0.getSource()
            r6.setAdFrom(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            int r0 = r0.getAppScore()
            double r0 = (double) r0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r6.setStarRating(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            int r0 = r0.getAppCommentNum()
            r6.setAppCommentNum(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            com.bykv.vk.openvk.TTImage r0 = r0.getIcon()
            if (r0 == 0) goto L41
            java.lang.String r0 = r0.getImageUrl()
            r6.setIconImageUrl(r0)
        L41:
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            java.util.List r0 = r0.getImageList()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            if (r0 == 0) goto L85
            int r3 = r0.size()
            if (r3 <= 0) goto L85
            r3 = r2
        L56:
            int r4 = r0.size()
            if (r3 >= r4) goto L85
            java.lang.Object r4 = r0.get(r3)
            com.bykv.vk.openvk.TTImage r4 = (com.bykv.vk.openvk.TTImage) r4
            if (r4 == 0) goto L82
            java.lang.String r5 = r4.getImageUrl()
            r1.add(r5)
            if (r3 != 0) goto L82
            java.lang.String r5 = r4.getImageUrl()
            r6.setMainImageUrl(r5)
            int r5 = r4.getWidth()
            r6.setMainImageWidth(r5)
            int r4 = r4.getHeight()
            r6.setMainImageHeight(r4)
        L82:
            int r3 = r3 + 1
            goto L56
        L85:
            r6.setImageUrlList(r1)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            java.lang.String r0 = r0.getButtonText()
            r6.setCallToActionText(r0)
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            boolean r1 = r0 instanceof com.bykv.vk.openvk.TTDrawVfObject
            if (r1 == 0) goto Lbf
            com.bykv.vk.openvk.TTDrawVfObject r0 = (com.bykv.vk.openvk.TTDrawVfObject) r0
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r0.getCustomVideo()
            if (r0 == 0) goto Lad
            java.lang.String r1 = r0.getVideoUrl()
            r6.setVideoUrl(r1)
            com.tkay.network.toutiao.TTTYCustomVideo r1 = new com.tkay.network.toutiao.TTTYCustomVideo
            r1.<init>(r0)
            r6.e = r1
        Lad:
            com.bykv.vk.openvk.TTNtObject r0 = r6.a
            com.bykv.vk.openvk.TTDrawVfObject r0 = (com.bykv.vk.openvk.TTDrawVfObject) r0
            r0.setCanInterruptVideoPlay(r7)
            if (r8 == 0) goto Lbf
            if (r9 <= 0) goto Lbf
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            com.bykv.vk.openvk.TTDrawVfObject r7 = (com.bykv.vk.openvk.TTDrawVfObject) r7
            r7.setPauseIcon(r8, r9)
        Lbf:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            com.bykv.vk.openvk.ComplianceInfo r7 = r7.getComplianceInfo()
            if (r7 == 0) goto Ld6
            com.tkay.network.toutiao.TTATDownloadAppInfo r8 = new com.tkay.network.toutiao.TTATDownloadAppInfo
            com.bykv.vk.openvk.TTNtObject r9 = r6.a
            int r9 = r9.getAppSize()
            long r0 = (long) r9
            r8.<init>(r7, r0)
            r6.setAdAppInfo(r8)
        Ld6:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            int r7 = r7.getInteractionType()
            r8 = 4
            if (r7 != r8) goto Le0
            r2 = 1
        Le0:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            int r7 = r7.getInteractionType()
            r9 = 3
            if (r7 != r9) goto Lea
            r2 = r9
        Lea:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            int r7 = r7.getInteractionType()
            r0 = 2
            if (r7 != r0) goto Lf4
            r2 = r0
        Lf4:
            r6.setNativeInteractionType(r2)
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            boolean r1 = r7 instanceof com.bykv.vk.openvk.TTVfObject
            if (r1 == 0) goto L12a
            com.bykv.vk.openvk.TTVfObject r7 = (com.bykv.vk.openvk.TTVfObject) r7
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r7 = r7.getCustomVideo()
            if (r7 == 0) goto L113
            java.lang.String r1 = r7.getVideoUrl()
            r6.setVideoUrl(r1)
            com.tkay.network.toutiao.TTTYCustomVideo r1 = new com.tkay.network.toutiao.TTTYCustomVideo
            r1.<init>(r7)
            r6.e = r1
        L113:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            com.bykv.vk.openvk.TTVfObject r7 = (com.bykv.vk.openvk.TTVfObject) r7
            double r1 = r7.getVideoDuration()
            r6.setVideoDuration(r1)
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            com.bykv.vk.openvk.TTVfObject r7 = (com.bykv.vk.openvk.TTVfObject) r7
            com.tkay.network.toutiao.TTTYNativeAd$1 r1 = new com.tkay.network.toutiao.TTTYNativeAd$1
            r1.<init>(r6)
            r7.setVideoListener(r1)
        L12a:
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            com.tkay.network.toutiao.TTTYNativeAd$2 r1 = new com.tkay.network.toutiao.TTTYNativeAd$2
            r1.<init>(r6)
            r7.setDownloadListener(r1)
            com.bykv.vk.openvk.TTNtObject r7 = r6.a
            int r7 = r7.getImageMode()
            if (r7 == r0) goto L151
            if (r7 == r9) goto L151
            if (r7 == r8) goto L151
            r8 = 5
            if (r7 == r8) goto L14c
            r8 = 15
            if (r7 == r8) goto L14c
            r8 = 16
            if (r7 == r8) goto L151
            goto L155
        L14c:
            java.lang.String r7 = "1"
            r6.mAdSourceType = r7
            return
        L151:
            java.lang.String r7 = "2"
            r6.mAdSourceType = r7
        L155:
            return
    }
}
