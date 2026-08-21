package com.tkay.network.ks;

public class KSTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    long a;
    int b;
    boolean c;
    int d;
    java.lang.String e;
    com.kwad.sdk.api.KsFullScreenVideoAd f;
    com.kwad.sdk.api.KsInterstitialAd g;
    boolean h;
    double i;


    final class 2 implements com.kwad.sdk.api.KsLoadManager.InterstitialAdListener {
        final com.tkay.network.ks.KSTYInterstitialAdapter a;

        2(com.tkay.network.ks.KSTYInterstitialAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r0 = r1.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onInterstitialAdLoad(java.util.List<com.kwad.sdk.api.KsInterstitialAd> r8) {
                r7 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r0 = r7.a
                r1 = 0
                r2 = 0
                if (r8 == 0) goto L13
                int r3 = r8.size()
                if (r3 <= 0) goto L13
                java.lang.Object r8 = r8.get(r1)
                com.kwad.sdk.api.KsInterstitialAd r8 = (com.kwad.sdk.api.KsInterstitialAd) r8
                goto L14
            L13:
                r8 = r2
            L14:
                r0.g = r8
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.kwad.sdk.api.KsInterstitialAd r8 = r8.g
                java.lang.String r0 = ""
                if (r8 != 0) goto L26
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                java.lang.String r1 = "KuaiShou: List<KsInterstitialAd> is empty."
                r8.notifyATLoadFail(r0, r1)
                return
            L26:
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                boolean r8 = r8.h
                if (r8 == 0) goto L71
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYBiddingListener r8 = r8.mBiddingListener
                if (r8 == 0) goto L69
                r0 = 0
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a     // Catch: java.lang.Throwable -> L3e
                com.kwad.sdk.api.KsInterstitialAd r8 = r8.g     // Catch: java.lang.Throwable -> L3e
                int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L3e
                double r0 = (double) r8
                goto L42
            L3e:
                r8 = move-exception
                r8.printStackTrace()
            L42:
                com.tkay.network.ks.KSTYBiddingNotice r8 = new com.tkay.network.ks.KSTYBiddingNotice
                com.tkay.network.ks.KSTYInterstitialAdapter r3 = r7.a
                com.kwad.sdk.api.KsInterstitialAd r3 = r3.g
                r8.<init>(r3)
                com.tkay.network.ks.KSTYInterstitialAdapter r3 = r7.a
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
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                java.lang.String r1 = "KuaiShou: KsInterstitialAd had been destroyed."
                r8.notifyATLoadFail(r0, r1)
                return
            L71:
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYInterstitialAdapter.d(r8)
                if (r8 == 0) goto L84
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYInterstitialAdapter.e(r8)
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r1]
                r8.onAdCacheLoaded(r0)
            L84:
                return
        }

        @Override
        public final void onRequestResult(int r1) {
                r0 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYInterstitialAdapter.b(r1)
                if (r1 == 0) goto L11
                com.tkay.network.ks.KSTYInterstitialAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYInterstitialAdapter.c(r1)
                r1.onAdDataLoaded()
            L11:
                return
        }
    }

    final class 3 implements com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener {
        final com.tkay.network.ks.KSTYInterstitialAdapter a;

        3(com.tkay.network.ks.KSTYInterstitialAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r0 = r1.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onFullScreenVideoAdLoad(java.util.List<com.kwad.sdk.api.KsFullScreenVideoAd> r8) {
                r7 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r0 = r7.a
                r1 = 0
                r2 = 0
                if (r8 == 0) goto L13
                int r3 = r8.size()
                if (r3 <= 0) goto L13
                java.lang.Object r8 = r8.get(r1)
                com.kwad.sdk.api.KsFullScreenVideoAd r8 = (com.kwad.sdk.api.KsFullScreenVideoAd) r8
                goto L14
            L13:
                r8 = r2
            L14:
                r0.f = r8
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.kwad.sdk.api.KsFullScreenVideoAd r8 = r8.f
                java.lang.String r0 = ""
                if (r8 != 0) goto L26
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                java.lang.String r1 = "KuaiShou: List<KsFullScreenVideoAd> is empty."
                r8.notifyATLoadFail(r0, r1)
                return
            L26:
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                boolean r8 = r8.h
                if (r8 == 0) goto L71
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYBiddingListener r8 = r8.mBiddingListener
                if (r8 == 0) goto L69
                r0 = 0
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a     // Catch: java.lang.Throwable -> L3e
                com.kwad.sdk.api.KsFullScreenVideoAd r8 = r8.f     // Catch: java.lang.Throwable -> L3e
                int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L3e
                double r0 = (double) r8
                goto L42
            L3e:
                r8 = move-exception
                r8.printStackTrace()
            L42:
                com.tkay.network.ks.KSTYBiddingNotice r8 = new com.tkay.network.ks.KSTYBiddingNotice
                com.tkay.network.ks.KSTYInterstitialAdapter r3 = r7.a
                com.kwad.sdk.api.KsFullScreenVideoAd r3 = r3.f
                r8.<init>(r3)
                com.tkay.network.ks.KSTYInterstitialAdapter r3 = r7.a
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
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                java.lang.String r1 = "KuaiShou: KsFullScreenVideoAd had been destroyed."
                r8.notifyATLoadFail(r0, r1)
                return
            L71:
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYInterstitialAdapter.h(r8)
                if (r8 == 0) goto L84
                com.tkay.network.ks.KSTYInterstitialAdapter r8 = r7.a
                com.tkay.core.api.TYCustomLoadListener r8 = com.tkay.network.ks.KSTYInterstitialAdapter.i(r8)
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r1]
                r8.onAdCacheLoaded(r0)
            L84:
                return
        }

        @Override
        public final void onFullScreenVideoResult(java.util.List<com.kwad.sdk.api.KsFullScreenVideoAd> r1) {
                r0 = this;
                com.tkay.network.ks.KSTYInterstitialAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYInterstitialAdapter.f(r1)
                if (r1 == 0) goto L11
                com.tkay.network.ks.KSTYInterstitialAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.ks.KSTYInterstitialAdapter.g(r1)
                r1.onAdDataLoaded()
            L11:
                return
        }
    }



    public KSTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.d = r0
            r0 = 0
            r1.h = r0
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener A(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener B(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener C(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener D(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener E(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener F(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener G(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static int H(com.tkay.network.ks.KSTYInterstitialAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    private void a() {
            r4 = this;
            com.kwad.sdk.api.KsScene$Builder r0 = new com.kwad.sdk.api.KsScene$Builder
            long r1 = r4.a
            r0.<init>(r1)
            r1 = 1
            com.kwad.sdk.api.KsScene$Builder r0 = r0.adNum(r1)
            int r2 = r4.b
            r3 = 2
            if (r2 != r3) goto L12
            r1 = r3
        L12:
            com.kwad.sdk.api.KsScene$Builder r0 = r0.screenOrientation(r1)
            java.lang.String r1 = r4.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L23
            java.lang.String r1 = r4.e
            r0.setBidResponseV2(r1)
        L23:
            com.kwad.sdk.api.KsScene r0 = r0.build()
            int r1 = r4.d
            if (r1 != 0) goto L38
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYInterstitialAdapter$2 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$2
            r2.<init>(r4)
            r1.loadInterstitialAd(r0, r2)
            return
        L38:
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYInterstitialAdapter$3 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$3
            r2.<init>(r4)
            r1.loadFullScreenVideoAd(r0, r2)
            return
    }

    static void a(com.tkay.network.ks.KSTYInterstitialAdapter r4) {
            com.kwad.sdk.api.KsScene$Builder r0 = new com.kwad.sdk.api.KsScene$Builder
            long r1 = r4.a
            r0.<init>(r1)
            r1 = 1
            com.kwad.sdk.api.KsScene$Builder r0 = r0.adNum(r1)
            int r2 = r4.b
            r3 = 2
            if (r2 != r3) goto L12
            r1 = r3
        L12:
            com.kwad.sdk.api.KsScene$Builder r0 = r0.screenOrientation(r1)
            java.lang.String r1 = r4.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L23
            java.lang.String r1 = r4.e
            r0.setBidResponseV2(r1)
        L23:
            com.kwad.sdk.api.KsScene r0 = r0.build()
            int r1 = r4.d
            if (r1 != 0) goto L38
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYInterstitialAdapter$2 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$2
            r2.<init>(r4)
            r1.loadInterstitialAd(r0, r2)
            return
        L38:
            com.kwad.sdk.api.KsLoadManager r1 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYInterstitialAdapter$3 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$3
            r2.<init>(r4)
            r1.loadFullScreenVideoAd(r0, r2)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r5) {
            r4 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            java.lang.String r1 = "position_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L79
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L19
            goto L79
        L19:
            long r0 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L1f
            r4.a = r0     // Catch: java.lang.NumberFormatException -> L1f
        L1f:
            r0 = 1
            r4.c = r0
            java.lang.String r1 = "video_muted"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L36
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            java.lang.String r2 = "0"
            boolean r1 = android.text.TextUtils.equals(r2, r1)
            r4.c = r1
        L36:
            java.lang.String r1 = "orientation"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L44
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r1)
            r4.b = r1
        L44:
            java.lang.String r1 = "is_video"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L52
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r1, r0)
            r4.d = r1
        L52:
            java.lang.String r1 = "tkay_gsp"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L60
            double r1 = com.tkay.core.api.TYInitMediation.getDoubleFromMap(r5, r1)
            r4.i = r1
        L60:
            java.lang.String r1 = "payload"
            boolean r2 = r5.containsKey(r1)
            if (r2 == 0) goto L78
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            com.tkay.network.ks.KSTYInitManager r1 = com.tkay.network.ks.KSTYInitManager.getInstance()
            double r2 = r4.i
            java.lang.String r5 = r1.getPayloadInfo(r5, r2)
            r4.e = r5
        L78:
            return r0
        L79:
            r5 = 0
            return r5
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener o(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener p(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener q(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener s(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener t(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static int u(com.tkay.network.ks.KSTYInterstitialAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener v(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener w(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener x(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener y(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener z(com.tkay.network.ks.KSTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd r0 = r2.f
            if (r0 == 0) goto La
            r1 = 0
            r0.setFullScreenVideoAdInteractionListener(r1)
            r2.f = r1
        La:
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
            r3 = this;
            int r0 = r3.d
            r1 = 1
            r2 = 0
            if (r0 != 0) goto Lc
            com.kwad.sdk.api.KsInterstitialAd r0 = r3.g
            if (r0 == 0) goto Lb
            return r1
        Lb:
            return r2
        Lc:
            com.kwad.sdk.api.KsFullScreenVideoAd r0 = r3.f
            if (r0 == 0) goto L17
            boolean r0 = r0.isAdEnable()
            if (r0 == 0) goto L17
            return r1
        L17:
            return r2
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            boolean r4 = r1.a(r3)
            if (r4 != 0) goto Le
            java.lang.String r2 = ""
            java.lang.String r3 = "kuaishou app_id or position_id is empty."
            r1.notifyATLoadFail(r2, r3)
            return
        Le:
            com.tkay.network.ks.KSTYInitManager r4 = com.tkay.network.ks.KSTYInitManager.getInstance()
            com.tkay.network.ks.KSTYInterstitialAdapter$1 r0 = new com.tkay.network.ks.KSTYInterstitialAdapter$1
            r0.<init>(r1)
            r4.initSDK(r2, r3, r0)
            return
    }

    @Override
    public void show(android.app.Activity r5) {
            r4 = this;
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r0.<init>()
            int r1 = r4.b
            r2 = 0
            r3 = 2
            if (r1 != r3) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = r2
        Le:
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.showLandscape(r1)
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.skipThirtySecond(r2)
            boolean r1 = r4.c
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.videoSoundEnable(r1)
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.build()
            com.kwad.sdk.api.KsFullScreenVideoAd r1 = r4.f
            if (r1 == 0) goto L33
            if (r5 == 0) goto L33
            com.tkay.network.ks.KSTYInterstitialAdapter$4 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$4
            r2.<init>(r4)
            r1.setFullScreenVideoAdInteractionListener(r2)
            com.kwad.sdk.api.KsFullScreenVideoAd r1 = r4.f
            r1.showFullScreenVideoAd(r5, r0)
        L33:
            com.kwad.sdk.api.KsInterstitialAd r1 = r4.g
            if (r1 == 0) goto L46
            if (r5 == 0) goto L46
            com.tkay.network.ks.KSTYInterstitialAdapter$5 r2 = new com.tkay.network.ks.KSTYInterstitialAdapter$5
            r2.<init>(r4)
            r1.setAdInteractionListener(r2)
            com.kwad.sdk.api.KsInterstitialAd r1 = r4.g
            r1.showInterstitialAd(r5, r0)
        L46:
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
