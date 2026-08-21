package com.tkay.network.sigmob;

public class SigmobTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    private static final java.lang.String c = null;
    boolean a;
    java.lang.String b;
    private com.sigmob.windad.interstitial.WindInterstitialAdRequest d;
    private java.lang.String e;
    private com.sigmob.windad.rewardVideo.WindRewardAdRequest f;
    private com.sigmob.windad.interstitial.WindInterstitialAd g;
    private com.sigmob.windad.rewardVideo.WindRewardVideoAd h;
    private volatile boolean i;


    final class 2 implements com.sigmob.windad.interstitial.WindInterstitialAdListener {
        final com.tkay.network.sigmob.SigmobTYInterstitialAdapter a;

        2(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onInterstitialAdClicked(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.l(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.m(r2)
                r2.onInterstitialAdClicked()
            L1d:
                return
        }

        @Override
        public final void onInterstitialAdClosed(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.n(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.o(r2)
                r2.onInterstitialAdClose()
            L1d:
                return
        }

        @Override
        public final void onInterstitialAdLoadError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                if (r3 == 0) goto L1f
                if (r2 == 0) goto L1f
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r3 = r1.a
                int r0 = r2.getErrorCode()
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = r2.toString()
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter.a(r3, r0, r2)
            L1f:
                return
        }

        @Override
        public final void onInterstitialAdLoadSuccess(java.lang.String r5) {
                r4 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r4.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r5 = android.text.TextUtils.equals(r5, r0)
                if (r5 == 0) goto L4f
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r5 = r4.a
                boolean r5 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.c(r5)
                if (r5 == 0) goto L3b
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r5 = r4.a
                com.sigmob.windad.interstitial.WindInterstitialAd r5 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.d(r5)
                if (r5 == 0) goto L3b
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r5 = r4.a
                com.sigmob.windad.interstitial.WindInterstitialAd r5 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.d(r5)
                java.lang.String r5 = r5.getEcpm()
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r4.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r1 = r4.a
                com.tkay.core.api.TYBiddingListener r1 = r1.mBiddingListener
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r4.a
                com.sigmob.windad.interstitial.WindInterstitialAd r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.d(r2)
                r3 = 0
                com.tkay.network.sigmob.SigmobTYInitManager.onC2SBiddingResultWithCache(r5, r0, r1, r2, r3)
                return
            L3b:
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r5 = r4.a
                com.tkay.core.api.TYCustomLoadListener r5 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.e(r5)
                if (r5 == 0) goto L4f
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r5 = r4.a
                com.tkay.core.api.TYCustomLoadListener r5 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.f(r5)
                r0 = 0
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
                r5.onAdCacheLoaded(r0)
            L4f:
                return
        }

        @Override
        public final void onInterstitialAdPlayEnd(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.j(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.k(r2)
                r2.onInterstitialAdVideoEnd()
            L1d:
                return
        }

        @Override
        public final void onInterstitialAdPlayError(com.sigmob.windad.WindAdError r3, java.lang.String r4) {
                r2 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r2.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r4 = android.text.TextUtils.equals(r4, r0)
                if (r4 == 0) goto L31
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r4 = r2.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.p(r4)
                if (r4 == 0) goto L31
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r4 = r2.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.q(r4)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                int r1 = r3.getErrorCode()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = r3.toString()
                r4.onInterstitialAdVideoError(r0, r3)
            L31:
                return
        }

        @Override
        public final void onInterstitialAdPlayStart(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L26
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.g(r2)
                if (r2 == 0) goto L26
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.h(r2)
                r2.onInterstitialAdShow()
                com.tkay.network.sigmob.SigmobTYInterstitialAdapter r2 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r2 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.i(r2)
                r2.onInterstitialAdVideoStart()
            L26:
                return
        }

        @Override
        public final void onInterstitialAdPreLoadFail(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onInterstitialAdPreLoadSuccess(java.lang.String r1) {
                r0 = this;
                return
        }
    }


    static {
            java.lang.Class<com.tkay.network.sigmob.SigmobTYInterstitialAdapter> r0 = com.tkay.network.sigmob.SigmobTYInterstitialAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.sigmob.SigmobTYInterstitialAdapter.c = r0
            return
    }

    public SigmobTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.e = r0
            r0 = 0
            r1.a = r0
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener A(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener B(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener C(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener D(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener E(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    private void a() {
            r4 = this;
            com.sigmob.windad.interstitial.WindInterstitialAdRequest r0 = new com.sigmob.windad.interstitial.WindInterstitialAdRequest
            java.lang.String r1 = r4.e
            java.lang.String r2 = ""
            r3 = 0
            r0.<init>(r1, r2, r3)
            r4.d = r0
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = new com.sigmob.windad.interstitial.WindInterstitialAd
            com.sigmob.windad.interstitial.WindInterstitialAdRequest r1 = r4.d
            r0.<init>(r1)
            r4.g = r0
            com.tkay.network.sigmob.SigmobTYInterstitialAdapter$2 r1 = new com.tkay.network.sigmob.SigmobTYInterstitialAdapter$2
            r1.<init>(r4)
            r0.setWindInterstitialAdListener(r1)
            boolean r0 = r4.i
            if (r0 == 0) goto L30
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            if (r0 == 0) goto L30
            java.lang.String r1 = "USD"
            r0.setCurrency(r1)
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            r0.loadAd()
            return
        L30:
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L40
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            java.lang.String r1 = r4.b
            r0.loadAd(r1)
            return
        L40:
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            r0.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r4) {
            com.sigmob.windad.interstitial.WindInterstitialAdRequest r0 = new com.sigmob.windad.interstitial.WindInterstitialAdRequest
            java.lang.String r1 = r4.e
            java.lang.String r2 = ""
            r3 = 0
            r0.<init>(r1, r2, r3)
            r4.d = r0
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = new com.sigmob.windad.interstitial.WindInterstitialAd
            com.sigmob.windad.interstitial.WindInterstitialAdRequest r1 = r4.d
            r0.<init>(r1)
            r4.g = r0
            com.tkay.network.sigmob.SigmobTYInterstitialAdapter$2 r1 = new com.tkay.network.sigmob.SigmobTYInterstitialAdapter$2
            r1.<init>(r4)
            r0.setWindInterstitialAdListener(r1)
            boolean r0 = r4.i
            if (r0 == 0) goto L30
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            if (r0 == 0) goto L30
            java.lang.String r1 = "USD"
            r0.setCurrency(r1)
            com.sigmob.windad.interstitial.WindInterstitialAd r4 = r4.g
            r4.loadAd()
            return
        L30:
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L40
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r4.g
            java.lang.String r4 = r4.b
            r0.loadAd(r4)
            return
        L40:
            com.sigmob.windad.interstitial.WindInterstitialAd r4 = r4.g
            r4.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.i
            com.tkay.core.api.TYBiddingListener r1 = r3.mBiddingListener
            com.tkay.core.api.TYCustomLoadListener r2 = r3.mLoadListener
            com.tkay.network.sigmob.SigmobTYInitManager.onAdLoadError(r4, r5, r0, r1, r2)
            return
    }

    static java.lang.String b(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            java.lang.String r0 = r0.e
            return r0
    }

    static boolean c(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            boolean r0 = r0.i
            return r0
    }

    static com.sigmob.windad.interstitial.WindInterstitialAd d(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r0.g
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener o(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener p(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener q(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.sigmob.windad.rewardVideo.WindRewardVideoAd r(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r0.h
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener s(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener t(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener u(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener v(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener w(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener x(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener y(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener z(com.tkay.network.sigmob.SigmobTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            r0 = 0
            r2.f = r0
            r2.d = r0
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r1 = r2.h
            if (r1 == 0) goto Le
            r1.destroy()
            r2.h = r0
        Le:
            com.sigmob.windad.interstitial.WindInterstitialAd r1 = r2.g
            if (r1 == 0) goto L17
            r1.destroy()
            r2.g = r0
        L17:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "placement_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.e = r0
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r2 = this;
            boolean r0 = r2.a
            r1 = 0
            if (r0 == 0) goto Lf
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r2.h
            if (r0 == 0) goto Le
            boolean r0 = r0.isReady()
            return r0
        Le:
            return r1
        Lf:
            com.sigmob.windad.interstitial.WindInterstitialAd r0 = r2.g
            if (r0 == 0) goto L18
            boolean r0 = r0.isReady()
            return r0
        L18:
            return r1
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            java.lang.String r1 = "app_key"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            java.lang.String r2 = "placement_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.e = r2
            java.lang.String r2 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.b = r2
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L43
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L43
            java.lang.String r0 = r3.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            goto L43
        L31:
            r0 = 0
            java.lang.String r1 = "is_use_rewarded_video_as_interstitial"
            boolean r6 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r6, r1, r0)
            r3.a = r6
            com.tkay.network.sigmob.SigmobTYInterstitialAdapter$1 r6 = new com.tkay.network.sigmob.SigmobTYInterstitialAdapter$1
            r6.<init>(r3, r4, r5)
            r3.postOnMainThread(r6)
            return
        L43:
            java.lang.String r4 = ""
            java.lang.String r5 = "app_id、app_key、placement_id could not be null."
            r3.a(r4, r5)
            return
    }

    @Override
    public void show(android.app.Activity r3) {
            r2 = this;
            boolean r3 = r2.isAdReady()     // Catch: java.lang.Exception -> L3f
            if (r3 == 0) goto L3e
            boolean r3 = r2.a     // Catch: java.lang.Exception -> L3f
            r0 = 1
            if (r3 == 0) goto L25
            boolean r3 = r2.i     // Catch: java.lang.Exception -> L3f
            if (r3 == 0) goto L1a
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r3 = r2.h     // Catch: java.lang.Exception -> L3f
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r1 = r2.h     // Catch: java.lang.Exception -> L3f
            int r1 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r1)     // Catch: java.lang.Exception -> L3f
            r3.setBidEcpm(r1)     // Catch: java.lang.Exception -> L3f
        L1a:
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r3 = r2.h     // Catch: java.lang.Exception -> L3f
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L3f
            r1.<init>(r0)     // Catch: java.lang.Exception -> L3f
            r3.show(r1)     // Catch: java.lang.Exception -> L3f
            return
        L25:
            boolean r3 = r2.i     // Catch: java.lang.Exception -> L3f
            if (r3 == 0) goto L34
            com.sigmob.windad.interstitial.WindInterstitialAd r3 = r2.g     // Catch: java.lang.Exception -> L3f
            com.sigmob.windad.interstitial.WindInterstitialAd r1 = r2.g     // Catch: java.lang.Exception -> L3f
            int r1 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r1)     // Catch: java.lang.Exception -> L3f
            r3.setBidEcpm(r1)     // Catch: java.lang.Exception -> L3f
        L34:
            com.sigmob.windad.interstitial.WindInterstitialAd r3 = r2.g     // Catch: java.lang.Exception -> L3f
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L3f
            r1.<init>(r0)     // Catch: java.lang.Exception -> L3f
            r3.show(r1)     // Catch: java.lang.Exception -> L3f
        L3e:
            return
        L3f:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.i = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }

    public void startLoadAdForReward() {
            r4 = this;
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r0 = new com.sigmob.windad.rewardVideo.WindRewardAdRequest
            java.lang.String r1 = r4.e
            java.lang.String r2 = ""
            r3 = 0
            r0.<init>(r1, r2, r3)
            r4.f = r0
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = new com.sigmob.windad.rewardVideo.WindRewardVideoAd
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r1 = r4.f
            r0.<init>(r1)
            r4.h = r0
            com.tkay.network.sigmob.SigmobTYInterstitialAdapter$3 r1 = new com.tkay.network.sigmob.SigmobTYInterstitialAdapter$3
            r1.<init>(r4)
            r0.setWindRewardVideoAdListener(r1)
            boolean r0 = r4.i
            if (r0 == 0) goto L30
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.h
            if (r0 == 0) goto L30
            java.lang.String r1 = "USD"
            r0.setCurrency(r1)
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.h
            r0.loadAd()
            return
        L30:
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L40
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.h
            java.lang.String r1 = r4.b
            r0.loadAd(r1)
            return
        L40:
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.h
            r0.loadAd()
            return
    }
}
