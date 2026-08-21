package com.qq.e.ads.interstitial2;

public class UnifiedInterstitialAD extends com.qq.e.ads.LiteAbstractAD<com.qq.e.comm.pi.UIADI> implements com.qq.e.comm.pi.NFBI, com.qq.e.comm.pi.IReward {
    private java.util.concurrent.atomic.AtomicInteger g;
    private java.util.concurrent.atomic.AtomicInteger h;
    private volatile com.qq.e.ads.cfg.VideoOption i;
    private volatile int j;
    private volatile int k;
    private volatile com.qq.e.comm.constants.LoadAdParams l;
    private com.qq.e.ads.interstitial2.UnifiedInterstitialADListener m;
    private com.qq.e.ads.rewardvideo.ServerSideVerificationOptions n;
    private final com.qq.e.ads.interstitial2.ADListenerAdapter o;

    public UnifiedInterstitialAD(android.app.Activity r2, java.lang.String r3, com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public UnifiedInterstitialAD(android.app.Activity r2, java.lang.String r3, com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4, java.util.Map r5) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicInteger r5 = new java.util.concurrent.atomic.AtomicInteger
            r0 = 0
            r5.<init>(r0)
            r1.g = r5
            java.util.concurrent.atomic.AtomicInteger r5 = new java.util.concurrent.atomic.AtomicInteger
            r5.<init>(r0)
            r1.h = r5
            r1.m = r4
            com.qq.e.ads.interstitial2.ADListenerAdapter r5 = new com.qq.e.ads.interstitial2.ADListenerAdapter
            r5.<init>(r4)
            r1.o = r5
            r1.a(r2, r3)
            return
    }

    public UnifiedInterstitialAD(android.app.Activity r2, java.lang.String r3, com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4, java.util.Map r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicInteger r5 = new java.util.concurrent.atomic.AtomicInteger
            r0 = 0
            r5.<init>(r0)
            r1.g = r5
            java.util.concurrent.atomic.AtomicInteger r5 = new java.util.concurrent.atomic.AtomicInteger
            r5.<init>(r0)
            r1.h = r5
            r1.m = r4
            com.qq.e.ads.interstitial2.ADListenerAdapter r5 = new com.qq.e.ads.interstitial2.ADListenerAdapter
            r5.<init>(r4)
            r1.o = r5
            r1.a(r2, r3, r6)
            return
    }

    @Override
    protected java.lang.Object a(android.content.Context r7, com.qq.e.comm.pi.POFactory r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r6 = this;
            r1 = r7
            android.app.Activity r1 = (android.app.Activity) r1
            com.qq.e.ads.interstitial2.ADListenerAdapter r5 = r6.o
            r0 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            com.qq.e.comm.pi.UIADI r7 = r0.getUnifiedInterstitialADDelegate(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    protected void a(java.lang.Object r1) {
            r0 = this;
            com.qq.e.comm.pi.UIADI r1 = (com.qq.e.comm.pi.UIADI) r1
            r0.c()
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r0 = r1.m
            if (r0 == 0) goto Lb
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onNoAD(r2)
        Lb:
            return
    }

    protected void c() {
            r1 = this;
            com.qq.e.ads.cfg.VideoOption r0 = r1.i
            r1.setVideoOption(r0)
            int r0 = r1.j
            r1.setMinVideoDuration(r0)
            int r0 = r1.k
            r1.setMaxVideoDuration(r0)
            com.qq.e.comm.constants.LoadAdParams r0 = r1.l
            r1.setLoadAdParams(r0)
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r0 = r1.n
            r1.setServerSideVerificationOptions(r0)
        L19:
            java.util.concurrent.atomic.AtomicInteger r0 = r1.g
            int r0 = r0.getAndDecrement()
            if (r0 <= 0) goto L25
            r1.loadAD()
            goto L19
        L25:
            java.util.concurrent.atomic.AtomicInteger r0 = r1.h
            int r0 = r0.getAndDecrement()
            if (r0 <= 0) goto L31
            r1.loadFullScreenAD()
            goto L25
        L31:
            return
    }

    public void close() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto L9
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.close()
        L9:
            return
    }

    public void destroy() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.destroy()
            goto Lf
        La:
            java.lang.String r0 = "destroy"
            r1.a(r0)
        Lf:
            return
    }

    public java.lang.String getAdNetWorkName() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
        Lb:
            java.lang.String r0 = "getAdNetWorkName"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public int getAdPatternType() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            int r0 = r0.getAdPatternType()
            return r0
        Lb:
            java.lang.String r0 = "getAdPatternType"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public int getVideoDuration() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            int r0 = r0.getVideoDuration()
            return r0
        Lb:
            java.lang.String r0 = "getVideoDuration"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public void loadAD() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L13
            java.util.concurrent.atomic.AtomicInteger r0 = r1.g
            r0.incrementAndGet()
            goto L22
        L13:
            T r0 = r1.a
            if (r0 == 0) goto L1d
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.loadAd()
            goto L22
        L1d:
            java.lang.String r0 = "loadAD"
            r1.a(r0)
        L22:
            return
    }

    public void loadFullScreenAD() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L13
            java.util.concurrent.atomic.AtomicInteger r0 = r1.h
            r0.incrementAndGet()
            goto L22
        L13:
            T r0 = r1.a
            if (r0 == 0) goto L1d
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.loadFullScreenAD()
            goto L22
        L1d:
            java.lang.String r0 = "loadFullScreenAD"
            r1.a(r0)
        L22:
            return
    }

    public void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r2) {
            r1 = this;
            r1.l = r2
            T r2 = r1.a
            if (r2 == 0) goto Ld
            com.qq.e.comm.pi.UIADI r2 = (com.qq.e.comm.pi.UIADI) r2
            com.qq.e.comm.constants.LoadAdParams r0 = r1.l
            r2.setLoadAdParams(r0)
        Ld:
            return
    }

    public void setMaxVideoDuration(int r3) {
            r2 = this;
            r2.k = r3
            int r0 = r2.k
            if (r0 <= 0) goto L11
            int r0 = r2.j
            int r1 = r2.k
            if (r0 <= r1) goto L11
            java.lang.String r0 = "maxVideoDuration 设置值非法，不得小于minVideoDuration"
            com.qq.e.comm.util.GDTLogger.e(r0)
        L11:
            T r0 = r2.a
            if (r0 == 0) goto L1a
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.setMaxVideoDuration(r3)
        L1a:
            return
    }

    public void setMediaListener(com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r2) {
            r1 = this;
            com.qq.e.ads.interstitial2.ADListenerAdapter r0 = r1.o
            r0.setMediaListener(r2)
            return
    }

    public void setMinVideoDuration(int r3) {
            r2 = this;
            r2.j = r3
            int r0 = r2.k
            if (r0 <= 0) goto L11
            int r0 = r2.j
            int r1 = r2.k
            if (r0 <= r1) goto L11
            java.lang.String r0 = "minVideoDuration 设置值非法，不得大于maxVideoDuration"
            com.qq.e.comm.util.GDTLogger.e(r0)
        L11:
            T r0 = r2.a
            if (r0 == 0) goto L1a
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.setMinVideoDuration(r3)
        L1a:
            return
    }

    @Override
    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r2) {
            r1 = this;
            com.qq.e.ads.interstitial2.ADListenerAdapter r0 = r1.o
            r0.setNegativeFeedbackListener(r2)
            return
    }

    @Override
    public void setRewardListener(com.qq.e.comm.listeners.ADRewardListener r2) {
            r1 = this;
            com.qq.e.ads.interstitial2.ADListenerAdapter r0 = r1.o
            r0.setAdRewardListener(r2)
            return
    }

    @Override
    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            r1.n = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.setServerSideVerificationOptions(r2)
        Lb:
            return
    }

    public void setVideoOption(com.qq.e.ads.cfg.VideoOption r2) {
            r1 = this;
            r1.i = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.setVideoOption(r2)
        Lb:
            return
    }

    public void show() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.show()
            goto Lf
        La:
            java.lang.String r0 = "show"
            r1.a(r0)
        Lf:
            return
    }

    public void show(android.app.Activity r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.show(r2)
            goto Lf
        La:
            java.lang.String r2 = "show"
            r1.a(r2)
        Lf:
            return
    }

    public void showAsPopupWindow() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.showAsPopupWindow()
            goto Lf
        La:
            java.lang.String r0 = "showAsPopupWindow"
            r1.a(r0)
        Lf:
            return
    }

    public void showAsPopupWindow(android.app.Activity r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.showAsPopupWindow(r2)
            goto Lf
        La:
            java.lang.String r2 = "showAsPopupWindow"
            r1.a(r2)
        Lf:
            return
    }

    public void showFullScreenAD(android.app.Activity r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UIADI r0 = (com.qq.e.comm.pi.UIADI) r0
            r0.showFullScreenAD(r2)
            goto Lf
        La:
            java.lang.String r2 = "showFullScreenAD"
            r1.a(r2)
        Lf:
            return
    }
}
