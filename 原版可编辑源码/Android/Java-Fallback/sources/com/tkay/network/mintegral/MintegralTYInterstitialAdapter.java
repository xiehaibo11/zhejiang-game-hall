package com.tkay.network.mintegral;

public class MintegralTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    com.mbridge.msdk.out.MBInterstitialHandler a;
    com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler b;
    com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler c;
    java.lang.String d;
    java.lang.String e;
    boolean f;
    boolean g;
    java.lang.String h;
    java.lang.String i;
    com.mbridge.msdk.newinterstitial.out.NewInterstitialListener j;
    private final java.lang.String k;



    final class 3 implements com.mbridge.msdk.out.InterstitialListener {
        final com.tkay.network.mintegral.MintegralTYInterstitialAdapter a;

        3(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onInterstitialAdClick(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1 = r0.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r1 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.C(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1 = r0.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r1 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.D(r1)
                r1.onInterstitialAdClicked()
            L11:
                return
        }

        @Override
        public final void onInterstitialClosed(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1 = r0.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r1 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.A(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1 = r0.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r1 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.B(r1)
                r1.onInterstitialAdClose()
            L11:
                return
        }

        @Override
        public final void onInterstitialLoadFail(com.mbridge.msdk.out.MBridgeIds r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.u(r2)
                if (r2 == 0) goto L13
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.v(r2)
                java.lang.String r0 = ""
                r2.onAdLoadError(r0, r3)
            L13:
                return
        }

        @Override
        public final void onInterstitialLoadSuccess(com.mbridge.msdk.out.MBridgeIds r2) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                r0 = 1
                r2.g = r0
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.s(r2)
                if (r2 == 0) goto L19
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.t(r2)
                r0 = 0
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
                r2.onAdCacheLoaded(r0)
            L19:
                return
        }

        @Override
        public final void onInterstitialShowFail(com.mbridge.msdk.out.MBridgeIds r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                java.lang.String r2 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.y(r2)
                java.lang.String r3 = java.lang.String.valueOf(r3)
                java.lang.String r0 = "onInterstitialShowFail:"
                java.lang.String r3 = r0.concat(r3)
                android.util.Log.e(r2, r3)
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r1.a
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter.z(r2)
                return
        }

        @Override
        public final void onInterstitialShowSuccess(com.mbridge.msdk.out.MBridgeIds r4) {
                r3 = this;
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r4 = r3.a     // Catch: java.lang.Throwable -> L20
                com.mbridge.msdk.out.MBInterstitialHandler r4 = r4.a     // Catch: java.lang.Throwable -> L20
                if (r4 == 0) goto L20
                com.tkay.network.mintegral.MintegralTYInitManager r4 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L20
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0 = r3.a     // Catch: java.lang.Throwable -> L20
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()     // Catch: java.lang.Throwable -> L20
                java.lang.String r0 = r0.l()     // Catch: java.lang.Throwable -> L20
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L20
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r2 = r3.a     // Catch: java.lang.Throwable -> L20
                com.mbridge.msdk.out.MBInterstitialHandler r2 = r2.a     // Catch: java.lang.Throwable -> L20
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L20
                r4.a(r0, r1)     // Catch: java.lang.Throwable -> L20
            L20:
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r4 = r3.a
                r0 = 0
                r4.g = r0
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r4 = r3.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.w(r4)
                if (r4 == 0) goto L36
                com.tkay.network.mintegral.MintegralTYInterstitialAdapter r4 = r3.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.x(r4)
                r4.onInterstitialAdShow()
            L36:
                return
        }
    }

    public MintegralTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.network.mintegral.MintegralTYInterstitialAdapter> r0 = com.tkay.network.mintegral.MintegralTYInterstitialAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            r1.k = r0
            java.lang.String r0 = ""
            r1.d = r0
            r1.e = r0
            com.tkay.network.mintegral.MintegralTYInterstitialAdapter$1 r0 = new com.tkay.network.mintegral.MintegralTYInterstitialAdapter$1
            r0.<init>(r1)
            r1.j = r0
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener A(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener B(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener C(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener D(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.f
            if (r0 == 0) goto L2e
            java.lang.String r0 = r3.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = new com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r4, r1, r2)
            r3.b = r0
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r4 = r3.j
            r0.setInterstitialVideoListener(r4)
            return
        L1d:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = new com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r4, r1, r2)
            r3.c = r0
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r4 = r3.j
            r0.setInterstitialVideoListener(r4)
            return
        L2e:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.e
            java.lang.String r2 = "unit_id"
            r0.put(r2, r1)
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r2 = r3.d
            r0.put(r1, r2)
            com.mbridge.msdk.out.MBInterstitialHandler r1 = new com.mbridge.msdk.out.MBInterstitialHandler
            android.content.Context r4 = r4.getApplicationContext()
            r1.<init>(r4, r0)
            r3.a = r1
            com.tkay.network.mintegral.MintegralTYInterstitialAdapter$3 r4 = new com.tkay.network.mintegral.MintegralTYInterstitialAdapter$3
            r4.<init>(r3)
            r1.setInterstitialListener(r4)
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r3, android.content.Context r4) {
            boolean r0 = r3.f
            if (r0 == 0) goto L2e
            java.lang.String r0 = r3.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = new com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r4, r1, r2)
            r3.b = r0
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r3 = r3.j
            r0.setInterstitialVideoListener(r3)
            return
        L1d:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = new com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.e
            r0.<init>(r4, r1, r2)
            r3.c = r0
            com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r3 = r3.j
            r0.setInterstitialVideoListener(r3)
            return
        L2e:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.e
            java.lang.String r2 = "unit_id"
            r0.put(r2, r1)
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r2 = r3.d
            r0.put(r1, r2)
            com.mbridge.msdk.out.MBInterstitialHandler r1 = new com.mbridge.msdk.out.MBInterstitialHandler
            android.content.Context r4 = r4.getApplicationContext()
            r1.<init>(r4, r0)
            r3.a = r1
            com.tkay.network.mintegral.MintegralTYInterstitialAdapter$3 r4 = new com.tkay.network.mintegral.MintegralTYInterstitialAdapter$3
            r4.<init>(r3)
            r1.setInterstitialListener(r4)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener k(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener l(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener m(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener n(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener o(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener p(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener q(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener r(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener s(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener t(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener u(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener v(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener w(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener x(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static java.lang.String y(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static int z(com.tkay.network.mintegral.MintegralTYInterstitialAdapter r1) {
            r0 = 99
            r1.mDismissType = r0
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r2.a
            r1 = 0
            if (r0 == 0) goto La
            r0.setInterstitialListener(r1)
            r2.a = r1
        La:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r2.b
            if (r0 == 0) goto L13
            r0.setInterstitialVideoListener(r1)
            r2.b = r1
        L13:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = r2.c
            if (r0 == 0) goto L1c
            r0.setInterstitialVideoListener(r1)
            r2.c = r1
        L1c:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10, com.tkay.core.api.TYBidRequestInfoListener r11) {
            r7 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0)
            r7.e = r0
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r5 = 3
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
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
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r1.b
            if (r0 == 0) goto L9
            boolean r0 = r0.isReady()
            return r0
        L9:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = r1.c
            if (r0 == 0) goto L12
            boolean r0 = r0.isBidReady()
            return r0
        L12:
            boolean r0 = r1.g
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            r5 = 0
            r2.g = r5
            r2.f = r5
            java.lang.String r5 = "appid"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            java.lang.String r0 = "appkey"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "unitid"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            r2.e = r1
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L69
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L69
            java.lang.String r5 = r2.e
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L2e
            goto L69
        L2e:
            java.lang.String r5 = "is_video"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L44
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            java.lang.String r0 = "0"
            boolean r5 = r5.equals(r0)
            r5 = r5 ^ 1
            r2.f = r5
        L44:
            java.lang.String r5 = "payload"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.h = r5
            java.lang.String r5 = "placement_id"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.d = r5
            java.lang.String r5 = "video_muted"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r5)
            r2.i = r5
            com.tkay.network.mintegral.MintegralTYInitManager r5 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            com.tkay.network.mintegral.MintegralTYInterstitialAdapter$2 r0 = new com.tkay.network.mintegral.MintegralTYInterstitialAdapter$2
            r0.<init>(r2, r3, r4)
            r5.initSDK(r3, r4, r0)
            return
        L69:
            com.tkay.core.api.TYCustomLoadListener r3 = r2.mLoadListener
            if (r3 == 0) goto L76
            com.tkay.core.api.TYCustomLoadListener r3 = r2.mLoadListener
            java.lang.String r4 = ""
            java.lang.String r5 = "mintegral appid, appkey or unitid is empty!"
            r3.onAdLoadError(r4, r5)
        L76:
            return
    }

    @Override
    public void show(android.app.Activity r3) {
            r2 = this;
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r2.a
            if (r0 == 0) goto L7
            r0.show()
        L7:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r2.b
            if (r0 == 0) goto L1c
            com.mbridge.msdk.system.a r0 = com.mbridge.msdk.out.MBridgeSDKFactory.getMBridgeSDK()
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.updateDialogWeakActivity(r1)
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r2.b
            r0.show()
        L1c:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = r2.c
            if (r0 == 0) goto L31
            com.mbridge.msdk.system.a r0 = com.mbridge.msdk.out.MBridgeSDKFactory.getMBridgeSDK()
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.updateDialogWeakActivity(r1)
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r3 = r2.c
            r3.showFromBid()
        L31:
            return
    }

    public void startLoad(java.util.Map<java.lang.String, java.lang.Object> r11) {
            r10 = this;
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r10.a
            r1 = 8
            if (r0 == 0) goto L12
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r1, r11)
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r10.a
            r0.preload()
        L12:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r2 = 0
            r3 = 2
            java.lang.String r4 = "1"
            java.lang.String r5 = "0"
            r6 = 49
            r7 = 48
            r8 = -1
            r9 = 1
            if (r0 == 0) goto L62
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r1, r11)
            java.lang.String r0 = r10.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5d
            java.lang.String r0 = r10.i
            int r1 = r0.hashCode()
            if (r1 == r7) goto L44
            if (r1 == r6) goto L3c
            goto L4c
        L3c:
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L4c
            r0 = r9
            goto L4d
        L44:
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L4c
            r0 = r2
            goto L4d
        L4c:
            r0 = r8
        L4d:
            if (r0 == 0) goto L58
            if (r0 == r9) goto L52
            goto L5d
        L52:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.playVideoMute(r3)
            goto L5d
        L58:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.playVideoMute(r9)
        L5d:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.load()
        L62:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = r10.c
            if (r0 == 0) goto La8
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r0.setCustomInfo(r1, r11)
            java.lang.String r11 = r10.i
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto La1
            java.lang.String r11 = r10.i
            int r0 = r11.hashCode()
            if (r0 == r7) goto L89
            if (r0 == r6) goto L81
            goto L90
        L81:
            boolean r11 = r11.equals(r4)
            if (r11 == 0) goto L90
            r2 = r9
            goto L91
        L89:
            boolean r11 = r11.equals(r5)
            if (r11 == 0) goto L90
            goto L91
        L90:
            r2 = r8
        L91:
            if (r2 == 0) goto L9c
            if (r2 == r9) goto L96
            goto La1
        L96:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            r11.playVideoMute(r3)
            goto La1
        L9c:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            r11.playVideoMute(r9)
        La1:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            java.lang.String r0 = r10.h
            r11.loadFromBid(r0)
        La8:
            return
    }
}
