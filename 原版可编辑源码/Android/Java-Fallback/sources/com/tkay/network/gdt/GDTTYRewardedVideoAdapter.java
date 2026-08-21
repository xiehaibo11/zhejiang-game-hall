package com.tkay.network.gdt;

public class GDTTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    private static final java.lang.String f = null;
    com.qq.e.ads.rewardvideo.RewardVideoAD a;
    com.qq.e.ads.interstitial2.UnifiedInterstitialAD b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    private int g;
    private java.util.Map<java.lang.String, java.lang.Object> h;
    private boolean i;
    private int j;
    private boolean k;


    final class 2 implements com.qq.e.ads.rewardvideo.RewardVideoADListener {
        final com.tkay.network.gdt.GDTTYRewardedVideoAdapter a;


        2(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onADClick() {
                r1 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.p(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.q(r0)
                r0.onRewardedVideoAdPlayClicked()
            L11:
                return
        }

        @Override
        public final void onADClose() {
                r1 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
                r0.a()
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.t(r0)
                if (r0 == 0) goto L18
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.u(r0)
                r0.onRewardedVideoAdClosed()
            L18:
                return
        }

        @Override
        public final void onADExpose() {
                r4 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r1 = r1.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r1 = r1.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.qq.e.ads.rewardvideo.RewardVideoAD r3 = r3.a     // Catch: java.lang.Throwable -> L1a
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L1a
                r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r4.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.j(r0)
                if (r0 == 0) goto L2b
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r4.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.k(r0)
                r0.onRewardedVideoAdPlayStart()
            L2b:
                return
        }

        @Override
        public final void onADLoad() {
                r3 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a     // Catch: java.lang.Throwable -> L26
                com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r0.a     // Catch: java.lang.Throwable -> L26
                java.util.Map r0 = r0.getExtraInfo()     // Catch: java.lang.Throwable -> L26
                if (r0 == 0) goto L2a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.Map r1 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1)     // Catch: java.lang.Throwable -> L26
                if (r1 != 0) goto L1c
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L26
                r2.<init>()     // Catch: java.lang.Throwable -> L26
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1, r2)     // Catch: java.lang.Throwable -> L26
            L1c:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.Map r1 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1)     // Catch: java.lang.Throwable -> L26
                r1.putAll(r0)     // Catch: java.lang.Throwable -> L26
                goto L2a
            L26:
                r0 = move-exception
                r0.printStackTrace()
            L2a:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r0.a
                if (r0 == 0) goto L44
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                boolean r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.b(r0)
                if (r0 == 0) goto L44
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r0.a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2$1 r1 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2$1
                r1.<init>(r3)
                r0.setDownloadConfirmListener(r1)
            L44:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.e(r0)
                if (r0 == 0) goto L55
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.f(r0)
                r0.onAdDataLoaded()
            L55:
                return
        }

        @Override
        public final void onADShow() {
                r0 = this;
                return
        }

        @Override
        public final void onError(com.qq.e.comm.util.AdError r4) {
                r3 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                int r2 = r4.getErrorCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r4 = r4.getErrorMsg()
                r0.notifyATLoadFail(r1, r4)
                return
        }

        public final void onReward() {
                r1 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.n(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.o(r0)
                r0.onReward()
            L11:
                return
        }

        @Override
        public final void onReward(java.util.Map<java.lang.String, java.lang.Object> r3) {
                r2 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r2.a
                java.util.Map r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r0)
                if (r0 != 0) goto L12
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r2.a
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r0, r1)
            L12:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r2.a
                java.util.Map r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r0)
                java.lang.String r1 = "transId"
                java.lang.Object r3 = r3.get(r1)
                java.lang.String r1 = "gdt_trans_id"
                r0.put(r1, r3)
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r2.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r3 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.l(r3)
                if (r3 == 0) goto L34
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r2.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r3 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.m(r3)
                r3.onReward()
            L34:
                return
        }

        @Override
        public final void onVideoCached() {
                r7 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                boolean r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.g(r0)
                if (r0 == 0) goto L45
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L59
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r0.a
                if (r0 == 0) goto L59
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r0.a
                int r0 = r0.getECPM()
                double r0 = (double) r0
                com.tkay.network.gdt.GDTTYBiddingNotice r2 = new com.tkay.network.gdt.GDTTYBiddingNotice
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r7.a
                com.qq.e.ads.rewardvideo.RewardVideoAD r3 = r3.a
                r2.<init>(r3)
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r2, r5)
                r1 = 0
                r3.onC2SBiddingResultWithCache(r0, r1)
                return
            L45:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.h(r0)
                if (r0 == 0) goto L59
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.i(r0)
                r1 = 0
                com.tkay.core.api.BaseAd[] r1 = new com.tkay.core.api.BaseAd[r1]
                r0.onAdCacheLoaded(r1)
            L59:
                return
        }

        @Override
        public final void onVideoComplete() {
                r1 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.r(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.s(r0)
                r0.onRewardedVideoAdPlayEnd()
            L11:
                return
        }
    }

    final class 3 implements com.qq.e.ads.interstitial2.UnifiedInterstitialADListener {
        final com.tkay.network.gdt.GDTTYRewardedVideoAdapter a;



        3(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onADClicked() {
                r1 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.D(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.E(r0)
                r0.onRewardedVideoAdPlayClicked()
            L11:
                return
        }

        @Override
        public final void onADClosed() {
                r1 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
                r0.b()
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.F(r0)
                if (r0 == 0) goto L18
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.G(r0)
                r0.onRewardedVideoAdClosed()
            L18:
                return
        }

        @Override
        public final void onADExposure() {
                r4 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r1 = r1.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r1 = r1.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r3.b     // Catch: java.lang.Throwable -> L1a
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L1a
                r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r4.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.B(r0)
                if (r0 == 0) goto L2b
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r4.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.C(r0)
                r0.onRewardedVideoAdPlayStart()
            L2b:
                return
        }

        @Override
        public final void onADLeftApplication() {
                r0 = this;
                return
        }

        @Override
        public final void onADOpened() {
                r0 = this;
                return
        }

        @Override
        public final void onADReceive() {
                r3 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a     // Catch: java.lang.Throwable -> L26
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b     // Catch: java.lang.Throwable -> L26
                java.util.Map r0 = r0.getExtraInfo()     // Catch: java.lang.Throwable -> L26
                if (r0 == 0) goto L2a
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.Map r1 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1)     // Catch: java.lang.Throwable -> L26
                if (r1 != 0) goto L1c
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L26
                r2.<init>()     // Catch: java.lang.Throwable -> L26
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1, r2)     // Catch: java.lang.Throwable -> L26
            L1c:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1 = r3.a     // Catch: java.lang.Throwable -> L26
                java.util.Map r1 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.a(r1)     // Catch: java.lang.Throwable -> L26
                r1.putAll(r0)     // Catch: java.lang.Throwable -> L26
                goto L2a
            L26:
                r0 = move-exception
                r0.printStackTrace()
            L2a:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b
                if (r0 == 0) goto L44
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                boolean r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.b(r0)
                if (r0 == 0) goto L44
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3$1 r1 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3$1
                r1.<init>(r3)
                r0.setDownloadConfirmListener(r1)
            L44:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3$2 r1 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3$2
                r1.<init>(r3)
                r0.setRewardListener(r1)
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.z(r0)
                if (r0 == 0) goto L61
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.A(r0)
                r0.onAdDataLoaded()
            L61:
                return
        }

        @Override
        public final void onNoAD(com.qq.e.comm.util.AdError r3) {
                r2 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r2.a
                int r1 = r3.getErrorCode()
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r3 = r3.getErrorMsg()
                r0.notifyATLoadFail(r1, r3)
                return
        }

        @Override
        public final void onRenderFail() {
                r3 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                java.lang.String r1 = ""
                java.lang.String r2 = "GDT: onRenderFail()"
                r0.notifyATLoadFail(r1, r2)
                return
        }

        @Override
        public final void onRenderSuccess() {
                r7 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                boolean r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.g(r0)
                if (r0 == 0) goto L4f
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L63
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b
                if (r0 == 0) goto L45
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.b
                int r0 = r0.getECPM()
                double r0 = (double) r0
                com.tkay.network.gdt.GDTTYBiddingNotice r2 = new com.tkay.network.gdt.GDTTYBiddingNotice
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r3.b
                r2.<init>(r3)
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r2, r5)
                r1 = 0
                r3.onC2SBiddingResultWithCache(r0, r1)
                return
            L45:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                java.lang.String r1 = ""
                java.lang.String r2 = "GDT : UnifiedInterstitialAD had been destroyed."
                r0.notifyATLoadFail(r1, r2)
                return
            L4f:
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.H(r0)
                if (r0 == 0) goto L63
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.I(r0)
                r1 = 0
                com.tkay.core.api.BaseAd[] r1 = new com.tkay.core.api.BaseAd[r1]
                r0.onAdCacheLoaded(r1)
            L63:
                return
        }

        @Override
        public final void onVideoCached() {
                r0 = this;
                return
        }
    }

    final class 4 implements com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener {
        final com.tkay.network.gdt.GDTTYRewardedVideoAdapter a;

        4(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onVideoComplete() {
                r1 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.J(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.K(r0)
                r0.onRewardedVideoAdPlayEnd()
            L11:
                return
        }

        @Override
        public final void onVideoError(com.qq.e.comm.util.AdError r4) {
                r3 = this;
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.L(r0)
                if (r0 == 0) goto L25
                com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0 = r3.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.M(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                int r2 = r4.getErrorCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r4 = r4.getErrorMsg()
                r0.onRewardedVideoAdPlayFailed(r1, r4)
            L25:
                return
        }

        @Override
        public final void onVideoInit() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoLoading() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPageClose() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPageOpen() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPause() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoReady(long r1) {
                r0 = this;
                return
        }

        @Override
        public final void onVideoStart() {
                r0 = this;
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.gdt.GDTTYRewardedVideoAdapter> r0 = com.tkay.network.gdt.GDTTYRewardedVideoAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter.f = r0
            return
    }

    public GDTTYRewardedVideoAdapter() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.g = r0
            r1 = 1
            r2.j = r1
            r2.k = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener A(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener B(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener C(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener D(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener E(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener F(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener G(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener H(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener I(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener J(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener K(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener L(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener M(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static java.util.Map a(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.h
            return r0
    }

    static java.util.Map a(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0, java.util.Map r1) {
            r0.h = r1
            return r1
    }

    private void a(android.content.Context r11, java.util.Map<java.lang.String, java.lang.Object> r12) {
            r10 = this;
            java.lang.String r0 = "{network_placement_id}"
            int r1 = r10.j
            r2 = 0
            r3 = 1
            r4 = 2
            if (r1 != r4) goto Lc9
            boolean r0 = r11 instanceof android.app.Activity
            if (r0 != 0) goto L15
            java.lang.String r11 = ""
            java.lang.String r12 = "GDT UnifiedInterstitial's context must be activity."
            r10.notifyATLoadFail(r11, r12)
            return
        L15:
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3 r7 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3
            r7.<init>(r10)
            java.lang.String r0 = r10.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L38
            boolean r0 = r10.k
            if (r0 == 0) goto L27
            goto L38
        L27:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r5 = r11
            android.app.Activity r5 = (android.app.Activity) r5
            java.lang.String r6 = r10.d
            r8 = 0
            java.lang.String r9 = r10.e
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9)
            r10.b = r0
            goto L4d
        L38:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r11 = (android.app.Activity) r11
            java.lang.String r1 = r10.d
            r0.<init>(r11, r1, r7)
            r10.b = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r11 = com.tkay.network.gdt.GDTTYInitManager.a(r12)
            r0.setLoadAdParams(r11)
        L4d:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r11 = r10.b
            java.lang.String r0 = "video_muted"
            boolean r1 = r12.containsKey(r0)
            if (r1 == 0) goto L64
            java.lang.Object r0 = r12.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L65
        L64:
            r0 = r2
        L65:
            java.lang.String r1 = "video_autoplay"
            boolean r4 = r12.containsKey(r1)
            if (r4 == 0) goto L7a
            java.lang.Object r1 = r12.get(r1)
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L7b
        L7a:
            r1 = r3
        L7b:
            java.lang.String r4 = "video_duration"
            boolean r5 = r12.containsKey(r4)
            r6 = -1
            if (r5 == 0) goto L91
            java.lang.Object r12 = r12.get(r4)
            java.lang.String r12 = r12.toString()
            int r12 = java.lang.Integer.parseInt(r12)
            goto L92
        L91:
            r12 = r6
        L92:
            if (r11 == 0) goto Lb9
            com.qq.e.ads.cfg.VideoOption$Builder r4 = new com.qq.e.ads.cfg.VideoOption$Builder
            r4.<init>()
            if (r0 != r3) goto L9d
            r5 = r3
            goto L9e
        L9d:
            r5 = r2
        L9e:
            com.qq.e.ads.cfg.VideoOption$Builder r4 = r4.setAutoPlayMuted(r5)
            if (r0 != r3) goto La5
            r2 = r3
        La5:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r4.setDetailPageMuted(r2)
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()
            r11.setVideoOption(r0)
            if (r12 == r6) goto Lb9
            r11.setMaxVideoDuration(r12)
        Lb9:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r11 = r10.b
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4 r12 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4
            r12.<init>(r10)
            r11.setMediaListener(r12)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r11 = r10.b
            r11.loadFullScreenAD()
            return
        Lc9:
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2 r4 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2
            r4.<init>(r10)
            java.lang.String r1 = r10.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lf7
            boolean r1 = r10.k
            if (r1 == 0) goto Ldb
            goto Lf7
        Ldb:
            com.qq.e.ads.rewardvideo.RewardVideoAD r12 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r11 = r11.getApplicationContext()
            java.lang.String r5 = r10.d
            int r1 = r10.g
            if (r1 == r3) goto Le9
            r6 = r3
            goto Lea
        Le9:
            r6 = r2
        Lea:
            java.lang.String r7 = r10.e
            r1 = r12
            r2 = r11
            r3 = r5
            r5 = r6
            r6 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r10.a = r12
            goto L113
        Lf7:
            com.qq.e.ads.rewardvideo.RewardVideoAD r1 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r11 = r11.getApplicationContext()
            java.lang.String r5 = r10.d
            int r6 = r10.g
            if (r6 == r3) goto L104
            r2 = r3
        L104:
            r1.<init>(r11, r5, r4, r2)
            r10.a = r1
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r11 = com.tkay.network.gdt.GDTTYInitManager.a(r12)
            r1.setLoadAdParams(r11)
        L113:
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder r11 = new com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder     // Catch: java.lang.Throwable -> L145
            r11.<init>()     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r10.mUserId     // Catch: java.lang.Throwable -> L145
            r11.setUserId(r12)     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L145
            if (r12 != 0) goto L137
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            boolean r12 = r12.contains(r0)     // Catch: java.lang.Throwable -> L145
            if (r12 == 0) goto L137
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            java.lang.String r1 = r10.d     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r12.replace(r0, r1)     // Catch: java.lang.Throwable -> L145
            r10.mUserData = r12     // Catch: java.lang.Throwable -> L145
        L137:
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            r11.setCustomData(r12)     // Catch: java.lang.Throwable -> L145
            com.qq.e.ads.rewardvideo.RewardVideoAD r12 = r10.a     // Catch: java.lang.Throwable -> L145
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r11 = r11.build()     // Catch: java.lang.Throwable -> L145
            r12.setServerSideVerificationOptions(r11)     // Catch: java.lang.Throwable -> L145
        L145:
            com.qq.e.ads.rewardvideo.RewardVideoAD r11 = r10.a
            r11.loadAD()
            return
    }

    private static void a(com.qq.e.ads.interstitial2.UnifiedInterstitialAD r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            java.lang.String r0 = "video_muted"
            boolean r1 = r8.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L16
            java.lang.Object r0 = r8.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L17
        L16:
            r0 = r2
        L17:
            java.lang.String r1 = "video_autoplay"
            boolean r3 = r8.containsKey(r1)
            r4 = 1
            if (r3 == 0) goto L2d
            java.lang.Object r1 = r8.get(r1)
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L2e
        L2d:
            r1 = r4
        L2e:
            java.lang.String r3 = "video_duration"
            boolean r5 = r8.containsKey(r3)
            r6 = -1
            if (r5 == 0) goto L44
            java.lang.Object r8 = r8.get(r3)
            java.lang.String r8 = r8.toString()
            int r8 = java.lang.Integer.parseInt(r8)
            goto L45
        L44:
            r8 = r6
        L45:
            if (r7 == 0) goto L6c
            com.qq.e.ads.cfg.VideoOption$Builder r3 = new com.qq.e.ads.cfg.VideoOption$Builder
            r3.<init>()
            if (r0 != r4) goto L50
            r5 = r4
            goto L51
        L50:
            r5 = r2
        L51:
            com.qq.e.ads.cfg.VideoOption$Builder r3 = r3.setAutoPlayMuted(r5)
            if (r0 != r4) goto L58
            r2 = r4
        L58:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r3.setDetailPageMuted(r2)
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()
            r7.setVideoOption(r0)
            if (r8 == r6) goto L6c
            r7.setMaxVideoDuration(r8)
        L6c:
            return
    }

    static void a(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r10, android.content.Context r11, java.util.Map r12) {
            java.lang.String r0 = "{network_placement_id}"
            int r1 = r10.j
            r2 = 0
            r3 = 1
            r4 = 2
            if (r1 != r4) goto Lc9
            boolean r0 = r11 instanceof android.app.Activity
            if (r0 != 0) goto L15
            java.lang.String r11 = ""
            java.lang.String r12 = "GDT UnifiedInterstitial's context must be activity."
            r10.notifyATLoadFail(r11, r12)
            return
        L15:
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3 r7 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3
            r7.<init>(r10)
            java.lang.String r0 = r10.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L38
            boolean r0 = r10.k
            if (r0 == 0) goto L27
            goto L38
        L27:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r5 = r11
            android.app.Activity r5 = (android.app.Activity) r5
            java.lang.String r6 = r10.d
            r8 = 0
            java.lang.String r9 = r10.e
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9)
            r10.b = r0
            goto L4d
        L38:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r11 = (android.app.Activity) r11
            java.lang.String r1 = r10.d
            r0.<init>(r11, r1, r7)
            r10.b = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r11 = com.tkay.network.gdt.GDTTYInitManager.a(r12)
            r0.setLoadAdParams(r11)
        L4d:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r11 = r10.b
            java.lang.String r0 = "video_muted"
            boolean r1 = r12.containsKey(r0)
            if (r1 == 0) goto L64
            java.lang.Object r0 = r12.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L65
        L64:
            r0 = r2
        L65:
            java.lang.String r1 = "video_autoplay"
            boolean r4 = r12.containsKey(r1)
            if (r4 == 0) goto L7a
            java.lang.Object r1 = r12.get(r1)
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L7b
        L7a:
            r1 = r3
        L7b:
            java.lang.String r4 = "video_duration"
            boolean r5 = r12.containsKey(r4)
            r6 = -1
            if (r5 == 0) goto L91
            java.lang.Object r12 = r12.get(r4)
            java.lang.String r12 = r12.toString()
            int r12 = java.lang.Integer.parseInt(r12)
            goto L92
        L91:
            r12 = r6
        L92:
            if (r11 == 0) goto Lb9
            com.qq.e.ads.cfg.VideoOption$Builder r4 = new com.qq.e.ads.cfg.VideoOption$Builder
            r4.<init>()
            if (r0 != r3) goto L9d
            r5 = r3
            goto L9e
        L9d:
            r5 = r2
        L9e:
            com.qq.e.ads.cfg.VideoOption$Builder r4 = r4.setAutoPlayMuted(r5)
            if (r0 != r3) goto La5
            r2 = r3
        La5:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r4.setDetailPageMuted(r2)
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()
            r11.setVideoOption(r0)
            if (r12 == r6) goto Lb9
            r11.setMaxVideoDuration(r12)
        Lb9:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r11 = r10.b
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4 r12 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4
            r12.<init>(r10)
            r11.setMediaListener(r12)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = r10.b
            r10.loadFullScreenAD()
            return
        Lc9:
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2 r4 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2
            r4.<init>(r10)
            java.lang.String r1 = r10.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lf7
            boolean r1 = r10.k
            if (r1 == 0) goto Ldb
            goto Lf7
        Ldb:
            com.qq.e.ads.rewardvideo.RewardVideoAD r12 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r11 = r11.getApplicationContext()
            java.lang.String r5 = r10.d
            int r1 = r10.g
            if (r1 == r3) goto Le9
            r6 = r3
            goto Lea
        Le9:
            r6 = r2
        Lea:
            java.lang.String r7 = r10.e
            r1 = r12
            r2 = r11
            r3 = r5
            r5 = r6
            r6 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r10.a = r12
            goto L113
        Lf7:
            com.qq.e.ads.rewardvideo.RewardVideoAD r1 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r11 = r11.getApplicationContext()
            java.lang.String r5 = r10.d
            int r6 = r10.g
            if (r6 == r3) goto L104
            r2 = r3
        L104:
            r1.<init>(r11, r5, r4, r2)
            r10.a = r1
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r11 = com.tkay.network.gdt.GDTTYInitManager.a(r12)
            r1.setLoadAdParams(r11)
        L113:
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder r11 = new com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder     // Catch: java.lang.Throwable -> L145
            r11.<init>()     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r10.mUserId     // Catch: java.lang.Throwable -> L145
            r11.setUserId(r12)     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L145
            if (r12 != 0) goto L137
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            boolean r12 = r12.contains(r0)     // Catch: java.lang.Throwable -> L145
            if (r12 == 0) goto L137
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            java.lang.String r1 = r10.d     // Catch: java.lang.Throwable -> L145
            java.lang.String r12 = r12.replace(r0, r1)     // Catch: java.lang.Throwable -> L145
            r10.mUserData = r12     // Catch: java.lang.Throwable -> L145
        L137:
            java.lang.String r12 = r10.mUserData     // Catch: java.lang.Throwable -> L145
            r11.setCustomData(r12)     // Catch: java.lang.Throwable -> L145
            com.qq.e.ads.rewardvideo.RewardVideoAD r12 = r10.a     // Catch: java.lang.Throwable -> L145
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r11 = r11.build()     // Catch: java.lang.Throwable -> L145
            r12.setServerSideVerificationOptions(r11)     // Catch: java.lang.Throwable -> L145
        L145:
            com.qq.e.ads.rewardvideo.RewardVideoAD r10 = r10.a
            r10.loadAD()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r3.c = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r3.d = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r3.e = r0
            r0 = 0
            java.lang.String r1 = "video_muted"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r1, r0)
            r3.g = r1
            java.lang.String r1 = "unit_type"
            r2 = 1
            int r4 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r1, r2)
            r3.j = r4
            java.lang.String r4 = "ad_click_confirm_status"
            boolean r4 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r5, r4, r0)
            r3.i = r4
            return
    }

    private void b(android.content.Context r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r8 = this;
            java.lang.String r0 = "{network_placement_id}"
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2 r4 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$2
            r4.<init>(r8)
            java.lang.String r1 = r8.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L32
            boolean r1 = r8.k
            if (r1 == 0) goto L16
            goto L32
        L16:
            com.qq.e.ads.rewardvideo.RewardVideoAD r10 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r5 = r8.d
            int r1 = r8.g
            if (r1 == r3) goto L24
            r6 = r3
            goto L25
        L24:
            r6 = r2
        L25:
            java.lang.String r7 = r8.e
            r1 = r10
            r2 = r9
            r3 = r5
            r5 = r6
            r6 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            r8.a = r10
            goto L4e
        L32:
            com.qq.e.ads.rewardvideo.RewardVideoAD r1 = new com.qq.e.ads.rewardvideo.RewardVideoAD
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r5 = r8.d
            int r6 = r8.g
            if (r6 == r3) goto L3f
            r2 = r3
        L3f:
            r1.<init>(r9, r5, r4, r2)
            r8.a = r1
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r9 = com.tkay.network.gdt.GDTTYInitManager.a(r10)
            r1.setLoadAdParams(r9)
        L4e:
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder r9 = new com.qq.e.ads.rewardvideo.ServerSideVerificationOptions$Builder     // Catch: java.lang.Throwable -> L80
            r9.<init>()     // Catch: java.lang.Throwable -> L80
            java.lang.String r10 = r8.mUserId     // Catch: java.lang.Throwable -> L80
            r9.setUserId(r10)     // Catch: java.lang.Throwable -> L80
            java.lang.String r10 = r8.mUserData     // Catch: java.lang.Throwable -> L80
            boolean r10 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L80
            if (r10 != 0) goto L72
            java.lang.String r10 = r8.mUserData     // Catch: java.lang.Throwable -> L80
            boolean r10 = r10.contains(r0)     // Catch: java.lang.Throwable -> L80
            if (r10 == 0) goto L72
            java.lang.String r10 = r8.mUserData     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = r8.d     // Catch: java.lang.Throwable -> L80
            java.lang.String r10 = r10.replace(r0, r1)     // Catch: java.lang.Throwable -> L80
            r8.mUserData = r10     // Catch: java.lang.Throwable -> L80
        L72:
            java.lang.String r10 = r8.mUserData     // Catch: java.lang.Throwable -> L80
            r9.setCustomData(r10)     // Catch: java.lang.Throwable -> L80
            com.qq.e.ads.rewardvideo.RewardVideoAD r10 = r8.a     // Catch: java.lang.Throwable -> L80
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r9 = r9.build()     // Catch: java.lang.Throwable -> L80
            r10.setServerSideVerificationOptions(r9)     // Catch: java.lang.Throwable -> L80
        L80:
            com.qq.e.ads.rewardvideo.RewardVideoAD r9 = r8.a
            r9.loadAD()
            return
    }

    static boolean b(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            boolean r0 = r0.i
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener c(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    private void c(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            boolean r0 = r8 instanceof android.app.Activity
            if (r0 != 0) goto Lc
            java.lang.String r8 = ""
            java.lang.String r9 = "GDT UnifiedInterstitial's context must be activity."
            r7.notifyATLoadFail(r8, r9)
            return
        Lc:
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3 r3 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$3
            r3.<init>(r7)
            java.lang.String r0 = r7.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            boolean r0 = r7.k
            if (r0 == 0) goto L1e
            goto L2f
        L1e:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r6 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r1 = r8
            android.app.Activity r1 = (android.app.Activity) r1
            java.lang.String r2 = r7.d
            r4 = 0
            java.lang.String r5 = r7.e
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            r7.b = r6
            goto L44
        L2f:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r8 = (android.app.Activity) r8
            java.lang.String r1 = r7.d
            r0.<init>(r8, r1, r3)
            r7.b = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r0.setLoadAdParams(r8)
        L44:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.b
            java.lang.String r0 = "video_muted"
            boolean r1 = r9.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L5c
            java.lang.Object r0 = r9.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            goto L5d
        L5c:
            r0 = r2
        L5d:
            java.lang.String r1 = "video_autoplay"
            boolean r3 = r9.containsKey(r1)
            r4 = 1
            if (r3 == 0) goto L73
            java.lang.Object r1 = r9.get(r1)
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            goto L74
        L73:
            r1 = r4
        L74:
            java.lang.String r3 = "video_duration"
            boolean r5 = r9.containsKey(r3)
            r6 = -1
            if (r5 == 0) goto L8a
            java.lang.Object r9 = r9.get(r3)
            java.lang.String r9 = r9.toString()
            int r9 = java.lang.Integer.parseInt(r9)
            goto L8b
        L8a:
            r9 = r6
        L8b:
            if (r8 == 0) goto Lb2
            com.qq.e.ads.cfg.VideoOption$Builder r3 = new com.qq.e.ads.cfg.VideoOption$Builder
            r3.<init>()
            if (r0 != r4) goto L96
            r5 = r4
            goto L97
        L96:
            r5 = r2
        L97:
            com.qq.e.ads.cfg.VideoOption$Builder r3 = r3.setAutoPlayMuted(r5)
            if (r0 != r4) goto L9e
            r2 = r4
        L9e:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r3.setDetailPageMuted(r2)
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()
            r8.setVideoOption(r0)
            if (r9 == r6) goto Lb2
            r8.setMaxVideoDuration(r9)
        Lb2:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.b
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4 r9 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$4
            r9.<init>(r7)
            r8.setMediaListener(r9)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.b
            r8.loadFullScreenAD()
            return
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener d(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static boolean g(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            boolean r0 = r0.k
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener o(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener p(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener q(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener s(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener t(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener u(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener v(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener w(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener x(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener y(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener z(com.tkay.network.gdt.GDTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r2.a
            r1 = 0
            if (r0 == 0) goto L7
            r2.a = r1
        L7:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r2.b
            if (r0 == 0) goto Ld
            r2.b = r1
        Ld:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.d = r0
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.h
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r1.a
            if (r0 == 0) goto L9
            boolean r0 = r0.isValid()
            return r0
        L9:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r1.b
            if (r0 == 0) goto L12
            boolean r0 = r0.isValid()
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            r3.c = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            r3.d = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            r3.e = r0
            r0 = 0
            java.lang.String r1 = "video_muted"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r1, r0)
            r3.g = r1
            java.lang.String r1 = "unit_type"
            r2 = 1
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r1, r2)
            r3.j = r1
            java.lang.String r1 = "ad_click_confirm_status"
            boolean r6 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r6, r1, r0)
            r3.i = r6
            java.lang.String r6 = r3.c
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L54
            java.lang.String r6 = r3.d
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L43
            goto L54
        L43:
            android.content.Context r6 = r4.getApplicationContext()
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.tkay.network.gdt.GDTTYRewardedVideoAdapter$1 r1 = new com.tkay.network.gdt.GDTTYRewardedVideoAdapter$1
            r1.<init>(r3, r4, r5)
            r0.initSDK(r6, r5, r1)
            return
        L54:
            java.lang.String r4 = ""
            java.lang.String r5 = "GTD appid or unitId is empty."
            r3.notifyATLoadFail(r4, r5)
            return
    }

    public void setDismissType(int r1) {
            r0 = this;
            r0.mDismissType = r1
            return
    }

    @Override
    public void show(android.app.Activity r4) {
            r3 = this;
            com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r3.a
            if (r0 == 0) goto L28
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> L1d
            com.qq.e.ads.rewardvideo.RewardVideoAD r2 = r3.a     // Catch: java.lang.Throwable -> L1d
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1d
            if (r4 == 0) goto L17
            com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r3.a     // Catch: java.lang.Throwable -> L1d
            r0.showAD(r4)     // Catch: java.lang.Throwable -> L1d
            goto L28
        L17:
            com.qq.e.ads.rewardvideo.RewardVideoAD r0 = r3.a     // Catch: java.lang.Throwable -> L1d
            r0.showAD()     // Catch: java.lang.Throwable -> L1d
            goto L28
        L1d:
            r0 = move-exception
            com.tkay.network.gdt.GDTTYInitManager r1 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r1.a()
            r0.printStackTrace()
        L28:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r3.b
            if (r0 == 0) goto L48
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> L3d
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r2 = r3.b     // Catch: java.lang.Throwable -> L3d
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L3d
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r3.b     // Catch: java.lang.Throwable -> L3d
            r0.showFullScreenAD(r4)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r4 = move-exception
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.b()
            r4.printStackTrace()
        L48:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.k = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
