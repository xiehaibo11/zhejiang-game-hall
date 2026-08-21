package com.tkay.network.sigmob;

public class SigmobTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    private static final java.lang.String a = null;
    private com.sigmob.windad.rewardVideo.WindRewardAdRequest b;
    private java.lang.String c;
    private java.lang.String d;
    private com.sigmob.windad.rewardVideo.WindRewardVideoAd e;
    private volatile boolean f;


    final class 2 implements com.sigmob.windad.rewardVideo.WindRewardVideoAdListener {
        final com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter a;

        2(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onRewardAdClicked(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.k(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.l(r2)
                r2.onRewardedVideoAdPlayClicked()
            L1d:
                return
        }

        @Override
        public final void onRewardAdClosed(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.m(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.n(r2)
                r2.onRewardedVideoAdClosed()
            L1d:
                return
        }

        @Override
        public final void onRewardAdLoadError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                if (r3 == 0) goto L1f
                if (r2 == 0) goto L1f
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r3 = r1.a
                int r0 = r2.getErrorCode()
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = r2.toString()
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.a(r3, r0, r2)
            L1f:
                return
        }

        @Override
        public final void onRewardAdLoadSuccess(java.lang.String r5) {
                r4 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r4.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r5 = android.text.TextUtils.equals(r5, r0)
                if (r5 == 0) goto L4f
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r5 = r4.a
                boolean r5 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.c(r5)
                if (r5 == 0) goto L3b
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r5 = r4.a
                com.sigmob.windad.rewardVideo.WindRewardVideoAd r5 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.d(r5)
                if (r5 == 0) goto L3b
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r5 = r4.a
                com.sigmob.windad.rewardVideo.WindRewardVideoAd r5 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.d(r5)
                java.lang.String r5 = r5.getEcpm()
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r4.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r1 = r4.a
                com.tkay.core.api.TYBiddingListener r1 = r1.mBiddingListener
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r4.a
                com.sigmob.windad.rewardVideo.WindRewardVideoAd r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.d(r2)
                r3 = 0
                com.tkay.network.sigmob.SigmobTYInitManager.onC2SBiddingResultWithCache(r5, r0, r1, r2, r3)
                return
            L3b:
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r5 = r4.a
                com.tkay.core.api.TYCustomLoadListener r5 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.e(r5)
                if (r5 == 0) goto L4f
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r5 = r4.a
                com.tkay.core.api.TYCustomLoadListener r5 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.f(r5)
                r0 = 0
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
                r5.onAdCacheLoaded(r0)
            L4f:
                return
        }

        @Override
        public final void onRewardAdPlayEnd(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.i(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.j(r2)
                r2.onRewardedVideoAdPlayEnd()
            L1d:
                return
        }

        @Override
        public final void onRewardAdPlayError(com.sigmob.windad.WindAdError r3, java.lang.String r4) {
                r2 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r2.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r4 = android.text.TextUtils.equals(r4, r0)
                if (r4 == 0) goto L31
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r4 = r2.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r4 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.q(r4)
                if (r4 == 0) goto L31
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r4 = r2.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r4 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.r(r4)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                int r1 = r3.getErrorCode()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = r3.toString()
                r4.onRewardedVideoAdPlayFailed(r0, r3)
            L31:
                return
        }

        @Override
        public final void onRewardAdPlayStart(java.lang.String r2) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r0)
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.g(r2)
                if (r2 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r2 = r1.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r2 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.h(r2)
                r2.onRewardedVideoAdPlayStart()
            L1d:
                return
        }

        @Override
        public final void onRewardAdPreLoadFail(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onRewardAdPreLoadSuccess(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onRewardAdRewarded(com.sigmob.windad.rewardVideo.WindRewardInfo r1, java.lang.String r2) {
                r0 = this;
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r1 = r0.a
                java.lang.String r1 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.b(r1)
                boolean r1 = android.text.TextUtils.equals(r2, r1)
                if (r1 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r1 = r0.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r1 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.o(r1)
                if (r1 == 0) goto L1d
                com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r1 = r0.a
                com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r1 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.p(r1)
                r1.onReward()
            L1d:
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter> r0 = com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter.a = r0
            return
    }

    public SigmobTYRewardedVideoAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.c = r0
            return
    }

    private void a() {
            r4 = this;
            java.lang.String r0 = r4.mUserData
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 2
            r0.<init>(r1)
            java.lang.String r1 = r4.mUserData
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2a
            java.lang.String r1 = r4.mUserData
            java.lang.String r2 = "{network_placement_id}"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L2a
            java.lang.String r1 = r4.mUserData
            java.lang.String r3 = r4.c
            java.lang.String r1 = r1.replace(r2, r3)
            r4.mUserData = r1
        L2a:
            java.lang.String r1 = r4.mUserData
            java.lang.String r2 = "user_custom_data"
            r0.put(r2, r1)
            goto L33
        L32:
            r0 = 0
        L33:
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r1 = new com.sigmob.windad.rewardVideo.WindRewardAdRequest
            java.lang.String r2 = r4.c
            java.lang.String r3 = r4.mUserId
            r1.<init>(r2, r3, r0)
            r4.b = r1
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = new com.sigmob.windad.rewardVideo.WindRewardVideoAd
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r1 = r4.b
            r0.<init>(r1)
            r4.e = r0
            com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$2 r1 = new com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$2
            r1.<init>(r4)
            r0.setWindRewardVideoAdListener(r1)
            boolean r0 = r4.f
            if (r0 == 0) goto L62
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            if (r0 == 0) goto L62
            java.lang.String r1 = "USD"
            r0.setCurrency(r1)
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            r0.loadAd()
            return
        L62:
            java.lang.String r0 = r4.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L72
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            java.lang.String r1 = r4.d
            r0.loadAd(r1)
            return
        L72:
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            r0.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r4) {
            java.lang.String r0 = r4.mUserData
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 2
            r0.<init>(r1)
            java.lang.String r1 = r4.mUserData
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2a
            java.lang.String r1 = r4.mUserData
            java.lang.String r2 = "{network_placement_id}"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L2a
            java.lang.String r1 = r4.mUserData
            java.lang.String r3 = r4.c
            java.lang.String r1 = r1.replace(r2, r3)
            r4.mUserData = r1
        L2a:
            java.lang.String r1 = r4.mUserData
            java.lang.String r2 = "user_custom_data"
            r0.put(r2, r1)
            goto L33
        L32:
            r0 = 0
        L33:
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r1 = new com.sigmob.windad.rewardVideo.WindRewardAdRequest
            java.lang.String r2 = r4.c
            java.lang.String r3 = r4.mUserId
            r1.<init>(r2, r3, r0)
            r4.b = r1
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = new com.sigmob.windad.rewardVideo.WindRewardVideoAd
            com.sigmob.windad.rewardVideo.WindRewardAdRequest r1 = r4.b
            r0.<init>(r1)
            r4.e = r0
            com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$2 r1 = new com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$2
            r1.<init>(r4)
            r0.setWindRewardVideoAdListener(r1)
            boolean r0 = r4.f
            if (r0 == 0) goto L62
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            if (r0 == 0) goto L62
            java.lang.String r1 = "USD"
            r0.setCurrency(r1)
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r4 = r4.e
            r4.loadAd()
            return
        L62:
            java.lang.String r0 = r4.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L72
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r4.e
            java.lang.String r4 = r4.d
            r0.loadAd(r4)
            return
        L72:
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r4 = r4.e
            r4.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.f
            com.tkay.core.api.TYBiddingListener r1 = r3.mBiddingListener
            com.tkay.core.api.TYCustomLoadListener r2 = r3.mLoadListener
            com.tkay.network.sigmob.SigmobTYInitManager.onAdLoadError(r4, r5, r0, r1, r2)
            return
    }

    static java.lang.String b(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static boolean c(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            boolean r0 = r0.f
            return r0
    }

    static com.sigmob.windad.rewardVideo.WindRewardVideoAd d(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r0.e
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener g(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener h(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener i(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener o(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener p(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener q(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r(com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r2.e
            r1 = 0
            if (r0 == 0) goto La
            r0.destroy()
            r2.e = r1
        La:
            r2.b = r1
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "placement_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.c = r0
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
            java.lang.String r0 = r1.c
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
            r1 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r1.e
            if (r0 == 0) goto L9
            boolean r0 = r0.isReady()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r5 = "app_id"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            java.lang.String r0 = "app_key"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "placement_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r2.c = r1
            java.lang.String r1 = "payload"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r2.d = r1
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L3a
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L3a
            java.lang.String r5 = r2.c
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L31
            goto L3a
        L31:
            com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$1 r5 = new com.tkay.network.sigmob.SigmobTYRewardedVideoAdapter$1
            r5.<init>(r2, r3, r4)
            r2.postOnMainThread(r5)
            return
        L3a:
            java.lang.String r3 = ""
            java.lang.String r4 = "app_id、app_key、placement_id could not be null."
            r2.a(r3, r4)
            return
    }

    @Override
    public void show(android.app.Activity r3) {
            r2 = this;
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r2.e
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 == 0) goto L28
            boolean r3 = r2.isAdReady()     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L28
            boolean r3 = r2.f     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L1c
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r3 = r2.e     // Catch: java.lang.Exception -> L28
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r0 = r2.e     // Catch: java.lang.Exception -> L28
            int r0 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r0)     // Catch: java.lang.Exception -> L28
            r3.setBidEcpm(r0)     // Catch: java.lang.Exception -> L28
        L1c:
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r3 = r2.e     // Catch: java.lang.Exception -> L28
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L28
            r1 = 1
            r0.<init>(r1)     // Catch: java.lang.Exception -> L28
            r3.show(r0)     // Catch: java.lang.Exception -> L28
        L28:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.f = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
