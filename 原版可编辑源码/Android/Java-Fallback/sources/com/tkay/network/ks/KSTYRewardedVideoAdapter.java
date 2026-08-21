package com.tkay.network.ks;

public class KSTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    long a;
    int b;
    boolean c;
    boolean d;
    java.lang.String e;
    double f;
    com.kwad.sdk.api.KsRewardVideoAd g;
    boolean h;
    boolean i;




    final class 4 implements com.kwad.sdk.api.KsLoadManager.RewardVideoAdListener {
        final com.tkay.network.ks.KSTYRewardedVideoAdapter a;

        4(com.tkay.network.ks.KSTYRewardedVideoAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYRewardedVideoAdapter r0 = r1.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onRewardVideoAdLoad(java.util.List<com.kwad.sdk.api.KsRewardVideoAd> r8) {
                r7 = this;
                com.tkay.network.ks.KSTYRewardedVideoAdapter r0 = r7.a
                r1 = 0
                r2 = 0
                if (r8 == 0) goto L13
                int r3 = r8.size()
                if (r3 <= 0) goto L13
                java.lang.Object r8 = r8.get(r1)
                com.kwad.sdk.api.KsRewardVideoAd r8 = (com.kwad.sdk.api.KsRewardVideoAd) r8
                goto L14
            L13:
                r8 = r2
            L14:
                r0.g = r8
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                com.kwad.sdk.api.KsRewardVideoAd r8 = r8.g
                if (r8 != 0) goto L26
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                java.lang.String r0 = ""
                java.lang.String r1 = "KuaiShou: List<KsRewardVideoAd> is empty"
                r8.notifyATLoadFail(r0, r1)
                return
            L26:
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                boolean r8 = r8.h
                if (r8 == 0) goto L69
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                com.tkay.core.api.TYBiddingListener r8 = r8.mBiddingListener
                if (r8 == 0) goto L7c
                r0 = 0
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a     // Catch: java.lang.Throwable -> L3e
                com.kwad.sdk.api.KsRewardVideoAd r8 = r8.g     // Catch: java.lang.Throwable -> L3e
                int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L3e
                double r0 = (double) r8
                goto L42
            L3e:
                r8 = move-exception
                r8.printStackTrace()
            L42:
                com.tkay.network.ks.KSTYBiddingNotice r8 = new com.tkay.network.ks.KSTYBiddingNotice
                com.tkay.network.ks.KSTYRewardedVideoAdapter r3 = r7.a
                com.kwad.sdk.api.KsRewardVideoAd r3 = r3.g
                r8.<init>(r3)
                com.tkay.network.ks.KSTYRewardedVideoAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r8 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r8, r5)
                r3.onC2SBiddingResultWithCache(r8, r2)
                return
            L69:
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYRewardedVideoAdapter.D(r8)
                if (r8 == 0) goto L7c
                com.tkay.network.ks.KSTYRewardedVideoAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYRewardedVideoAdapter.E(r8)
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r1]
                r8.onAdCacheLoaded(r0)
            L7c:
                return
        }

        @Override
        public final void onRewardVideoResult(java.util.List<com.kwad.sdk.api.KsRewardVideoAd> r1) {
                r0 = this;
                com.tkay.network.ks.KSTYRewardedVideoAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYRewardedVideoAdapter.B(r1)
                if (r1 == 0) goto L11
                com.tkay.network.ks.KSTYRewardedVideoAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYRewardedVideoAdapter.C(r1)
                r1.onAdDataLoaded()
            L11:
                return
        }
    }

    public KSTYRewardedVideoAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.h = r0
            r1.i = r0
            return
    }

    static void A(com.tkay.network.ks.KSTYRewardedVideoAdapter r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r6.mUserId
            java.lang.String r2 = "thirdUserId"
            r0.put(r2, r1)
            java.lang.String r1 = r6.mUserData
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L34
            java.lang.String r1 = r6.mUserData
            java.lang.String r2 = "{network_placement_id}"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L34
            java.lang.String r1 = r6.mUserData
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r6.a
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = r1.replace(r2, r3)
            r6.mUserData = r1
        L34:
            java.lang.String r1 = r6.mUserData
            java.lang.String r2 = "extraData"
            r0.put(r2, r1)
            com.kwad.sdk.api.KsScene$Builder r1 = new com.kwad.sdk.api.KsScene$Builder
            long r2 = r6.a
            r1.<init>(r2)
            r2 = 1
            com.kwad.sdk.api.KsScene$Builder r1 = r1.adNum(r2)
            int r3 = r6.b
            r4 = 2
            if (r3 != r4) goto L4d
            r2 = r4
        L4d:
            com.kwad.sdk.api.KsScene$Builder r1 = r1.screenOrientation(r2)
            com.kwad.sdk.api.KsScene$Builder r0 = r1.rewardCallbackExtraData(r0)
            java.lang.String r1 = r6.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L62
            java.lang.String r1 = r6.e
            r0.setBidResponseV2(r1)
        L62:
            com.kwad.sdk.api.KsScene r0 = r0.build()
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYRewardedVideoAdapter$4 r2 = new com.tkay.network.ks.KSTYRewardedVideoAdapter$4
            r2.<init>(r6)
            r1.loadRewardVideoAd(r0, r2)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener B(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener C(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener D(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener E(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener a(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    private void a() {
            r6 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r6.mUserId
            java.lang.String r2 = "thirdUserId"
            r0.put(r2, r1)
            java.lang.String r1 = r6.mUserData
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L34
            java.lang.String r1 = r6.mUserData
            java.lang.String r2 = "{network_placement_id}"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L34
            java.lang.String r1 = r6.mUserData
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r4 = r6.a
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = r1.replace(r2, r3)
            r6.mUserData = r1
        L34:
            java.lang.String r1 = r6.mUserData
            java.lang.String r2 = "extraData"
            r0.put(r2, r1)
            com.kwad.sdk.api.KsScene$Builder r1 = new com.kwad.sdk.api.KsScene$Builder
            long r2 = r6.a
            r1.<init>(r2)
            r2 = 1
            com.kwad.sdk.api.KsScene$Builder r1 = r1.adNum(r2)
            int r3 = r6.b
            r4 = 2
            if (r3 != r4) goto L4d
            r2 = r4
        L4d:
            com.kwad.sdk.api.KsScene$Builder r1 = r1.screenOrientation(r2)
            com.kwad.sdk.api.KsScene$Builder r0 = r1.rewardCallbackExtraData(r0)
            java.lang.String r1 = r6.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L62
            java.lang.String r1 = r6.e
            r0.setBidResponseV2(r1)
        L62:
            com.kwad.sdk.api.KsScene r0 = r0.build()
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYRewardedVideoAdapter$4 r2 = new com.tkay.network.ks.KSTYRewardedVideoAdapter$4
            r2.<init>(r6)
            r1.loadRewardVideoAd(r0, r2)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "position_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L79
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L19
            goto L79
        L19:
            long r0 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L1f
            r3.a = r0     // Catch: java.lang.NumberFormatException -> L1f
        L1f:
            java.lang.String r0 = "orientation"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L2d
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r0)
            r3.b = r0
        L2d:
            r0 = 1
            r3.d = r0
            java.lang.String r1 = "video_muted"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L44
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            java.lang.String r2 = "0"
            boolean r1 = android.text.TextUtils.equals(r2, r1)
            r3.d = r1
        L44:
            java.lang.String r1 = "KS_RV_SKIP_AFTER_THIRTY_SECOND"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L52
            boolean r5 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r5, r1)
            r3.c = r5
        L52:
            java.lang.String r5 = "tkay_gsp"
            boolean r1 = r4.containsKey(r5)
            if (r1 == 0) goto L60
            double r1 = com.tkay.core.api.TYInitMediation.getDoubleFromMap(r4, r5)
            r3.f = r1
        L60:
            java.lang.String r5 = "payload"
            boolean r1 = r4.containsKey(r5)
            if (r1 == 0) goto L78
            java.lang.String r4 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            com.tkay.network.ks.KSTYInitManager r5 = com.tkay.network.ks.KSTYInitManager.getInstance()
            double r1 = r3.f
            java.lang.String r4 = r5.getPayloadInfo(r4, r1)
            r3.e = r4
        L78:
            return r0
        L79:
            r4 = 0
            return r4
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener b(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener c(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener d(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener e(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener f(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener g(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener h(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int i(com.tkay.network.ks.KSTYRewardedVideoAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener o(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener p(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener q(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener s(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener t(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener u(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int v(com.tkay.network.ks.KSTYRewardedVideoAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener w(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener x(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener y(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener z(com.tkay.network.ks.KSTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.kwad.sdk.api.KsRewardVideoAd r0 = r2.g
            if (r0 == 0) goto Lf
            r1 = 0
            r0.setRewardAdInteractionListener(r1)
            com.kwad.sdk.api.KsRewardVideoAd r0 = r2.g
            r0.setRewardPlayAgainInteractionListener(r1)
            r2.g = r1
        Lf:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.TYBidRequestInfoListener r6) {
            r2 = this;
            java.lang.String r0 = "position_id"
            long r0 = com.tkay.core.api.TYInitMediation.getLongFromMap(r4, r0)
            r2.a = r0
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            r0.a(r3, r4, r5, r6)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r2 = this;
            long r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.kwad.sdk.api.KsRewardVideoAd r0 = r1.g
            if (r0 == 0) goto Lc
            boolean r0 = r0.isAdEnable()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            boolean r4 = r1.a(r3, r4)
            if (r4 != 0) goto Le
            java.lang.String r2 = ""
            java.lang.String r3 = "kuaishou app_id or position_id is empty."
            r1.notifyATLoadFail(r2, r3)
            return
        Le:
            com.tkay.network.ks.KSTYInitManager r4 = com.tkay.network.ks.KSTYInitManager.getInstance()
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.ks.KSTYRewardedVideoAdapter$3 r0 = new com.tkay.network.ks.KSTYRewardedVideoAdapter$3
            r0.<init>(r1)
            r4.initSDK(r2, r3, r0)
            return
    }

    @Override
    public void show(android.app.Activity r5) {
            r4 = this;
            com.kwad.sdk.api.KsRewardVideoAd r0 = r4.g
            if (r0 == 0) goto L47
            if (r5 == 0) goto L47
            com.tkay.network.ks.KSTYRewardedVideoAdapter$1 r1 = new com.tkay.network.ks.KSTYRewardedVideoAdapter$1     // Catch: java.lang.Exception -> L42
            r1.<init>(r4)     // Catch: java.lang.Exception -> L42
            r0.setRewardAdInteractionListener(r1)     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsRewardVideoAd r0 = r4.g     // Catch: java.lang.Exception -> L42
            com.tkay.network.ks.KSTYRewardedVideoAdapter$2 r1 = new com.tkay.network.ks.KSTYRewardedVideoAdapter$2     // Catch: java.lang.Exception -> L42
            r1.<init>(r4)     // Catch: java.lang.Exception -> L42
            r0.setRewardPlayAgainInteractionListener(r1)     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder     // Catch: java.lang.Exception -> L42
            r0.<init>()     // Catch: java.lang.Exception -> L42
            int r1 = r4.b     // Catch: java.lang.Exception -> L42
            r2 = 2
            r3 = 0
            if (r1 != r2) goto L25
            r1 = 1
            goto L26
        L25:
            r1 = r3
        L26:
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.showLandscape(r1)     // Catch: java.lang.Exception -> L42
            boolean r1 = r4.c     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.skipThirtySecond(r1)     // Catch: java.lang.Exception -> L42
            boolean r1 = r4.d     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.videoSoundEnable(r1)     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.build()     // Catch: java.lang.Exception -> L42
            r4.i = r3     // Catch: java.lang.Exception -> L42
            com.kwad.sdk.api.KsRewardVideoAd r1 = r4.g     // Catch: java.lang.Exception -> L42
            r1.showRewardVideoAd(r5, r0)     // Catch: java.lang.Exception -> L42
            goto L47
        L42:
            r5 = move-exception
            r5.printStackTrace()
        L47:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.h = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
