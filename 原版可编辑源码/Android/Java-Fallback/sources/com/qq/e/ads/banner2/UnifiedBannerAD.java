package com.qq.e.ads.banner2;

class UnifiedBannerAD extends com.qq.e.ads.LiteAbstractAD<com.qq.e.comm.pi.UBVI> implements com.qq.e.comm.pi.NFBI, com.qq.e.comm.pi.IReward {
    private com.qq.e.ads.banner2.UnifiedBannerADListener g;
    private com.qq.e.ads.cfg.DownAPPConfirmPolicy h;
    private java.util.concurrent.atomic.AtomicInteger i;
    private int j;
    private com.qq.e.comm.constants.LoadAdParams k;
    private com.qq.e.ads.banner2.UnifiedBannerView l;
    private final com.qq.e.ads.banner2.ADListenerAdapter m;
    private volatile com.qq.e.ads.rewardvideo.ServerSideVerificationOptions n;

    UnifiedBannerAD(android.app.Activity r1, com.qq.e.ads.banner2.UnifiedBannerView r2, java.lang.String r3, com.qq.e.ads.banner2.UnifiedBannerADListener r4) {
            r0 = this;
            r0.<init>(r2, r4)
            r0.a(r1, r3)
            return
    }

    UnifiedBannerAD(android.app.Activity r1, com.qq.e.ads.banner2.UnifiedBannerView r2, java.lang.String r3, java.lang.String r4, com.qq.e.ads.banner2.UnifiedBannerADListener r5) {
            r0 = this;
            r0.<init>(r2, r5)
            r0.a(r1, r3, r4)
            return
    }

    private UnifiedBannerAD(com.qq.e.ads.banner2.UnifiedBannerView r3, com.qq.e.ads.banner2.UnifiedBannerADListener r4) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.i = r0
            r0 = 30
            r2.j = r0
            r0 = 0
            r2.k = r0
            r2.g = r4
            r2.l = r3
            com.qq.e.ads.banner2.ADListenerAdapter r3 = new com.qq.e.ads.banner2.ADListenerAdapter
            r3.<init>(r4)
            r2.m = r3
            return
    }

    @Override
    protected java.lang.Object a(android.content.Context r8, com.qq.e.comm.pi.POFactory r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.qq.e.ads.banner2.UnifiedBannerView r1 = r7.l
            r2 = r8
            android.app.Activity r2 = (android.app.Activity) r2
            com.qq.e.ads.banner2.ADListenerAdapter r6 = r7.m
            r0 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            com.qq.e.comm.pi.UBVI r8 = r0.getUnifiedBannerViewDelegate(r1, r2, r3, r4, r5, r6)
            return r8
    }

    void a(com.qq.e.ads.cfg.DownAPPConfirmPolicy r2) {
            r1 = this;
            r1.h = r2
            if (r2 == 0) goto Ld
            T r0 = r1.a
            if (r0 == 0) goto Ld
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.setDownAPPConfirmPolicy(r2)
        Ld:
            return
    }

    @Override
    protected void a(java.lang.Object r3) {
            r2 = this;
            com.qq.e.comm.pi.UBVI r3 = (com.qq.e.comm.pi.UBVI) r3
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r0 = r2.h
            if (r0 == 0) goto L11
            r2.h = r0
            T r1 = r2.a
            if (r1 == 0) goto L11
            com.qq.e.comm.pi.UBVI r1 = (com.qq.e.comm.pi.UBVI) r1
            r1.setDownAPPConfirmPolicy(r0)
        L11:
            int r0 = r2.j
            r2.j = r0
            T r1 = r2.a
            if (r1 == 0) goto L1e
            com.qq.e.comm.pi.UBVI r1 = (com.qq.e.comm.pi.UBVI) r1
            r1.setRefresh(r0)
        L1e:
            com.qq.e.comm.constants.LoadAdParams r0 = r2.k
            r2.k = r0
            T r1 = r2.a
            if (r1 == 0) goto L2b
            com.qq.e.comm.pi.UBVI r1 = (com.qq.e.comm.pi.UBVI) r1
            r1.setLoadAdParams(r0)
        L2b:
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r0 = r2.n
            r3.setServerSideVerificationOptions(r0)
        L30:
            java.util.concurrent.atomic.AtomicInteger r3 = r2.i
            int r3 = r3.getAndDecrement()
            if (r3 <= 0) goto L3c
            r2.loadAD()
            goto L30
        L3c:
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerADListener r0 = r1.g
            if (r0 == 0) goto Lb
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onNoAD(r2)
        Lb:
            return
    }

    void c(int r2) {
            r1 = this;
            r1.j = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.setRefresh(r2)
        Lb:
            return
    }

    void destroy() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
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
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
        Lb:
            java.lang.String r0 = "getAdNetWorkName"
            r1.a(r0)
            r0 = 0
            return r0
    }

    void loadAD() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L13
            java.util.concurrent.atomic.AtomicInteger r0 = r1.i
            r0.incrementAndGet()
            goto L22
        L13:
            T r0 = r1.a
            if (r0 == 0) goto L1d
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.fetchAd()
            goto L22
        L1d:
            java.lang.String r0 = "loadAD"
            r1.a(r0)
        L22:
            return
    }

    void onWindowFocusChanged(boolean r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto L9
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.onWindowFocusChanged(r2)
        L9:
            return
    }

    void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r2) {
            r1 = this;
            r1.k = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.setLoadAdParams(r2)
        Lb:
            return
    }

    @Override
    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r2) {
            r1 = this;
            com.qq.e.ads.banner2.ADListenerAdapter r0 = r1.m
            r0.setNegativeFeedbackListener(r2)
            return
    }

    @Override
    public void setRewardListener(com.qq.e.comm.listeners.ADRewardListener r2) {
            r1 = this;
            com.qq.e.ads.banner2.ADListenerAdapter r0 = r1.m
            r0.setAdRewardListener(r2)
            return
    }

    @Override
    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            r1.n = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.UBVI r0 = (com.qq.e.comm.pi.UBVI) r0
            r0.setServerSideVerificationOptions(r2)
        Lb:
            return
    }
}
