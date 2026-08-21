package com.tkay.network.mintegral;

public class MintegralTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter {
    private static final java.lang.String j = null;
    java.lang.String a;
    int b;
    int c;
    boolean d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    java.lang.String h;
    com.mbridge.msdk.out.MBSplashHandler i;


    final class 2 implements com.mbridge.msdk.out.MBSplashLoadListener {
        final com.tkay.network.mintegral.MintegralTYSplashAdapter a;


        2(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void isSupportZoomOut(com.mbridge.msdk.out.MBridgeIds r1, boolean r2) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadFailed(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2, int r3) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.i(r1)
                if (r1 == 0) goto L15
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.j(r1)
                java.lang.String r3 = java.lang.String.valueOf(r3)
                r1.onAdLoadError(r3, r2)
            L15:
                return
        }

        @Override
        public final void onLoadSuccessed(com.mbridge.msdk.out.MBridgeIds r3, int r4) {
                r2 = this;
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                boolean r3 = r3.isAdReady()
                if (r3 == 0) goto L1d
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.core.api.TYCustomLoadListener r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.c(r3)
                if (r3 == 0) goto L29
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.core.api.TYCustomLoadListener r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.d(r3)
                r4 = 0
                com.tkay.core.api.BaseAd[] r4 = new com.tkay.core.api.BaseAd[r4]
                r3.onAdCacheLoaded(r4)
                return
            L1d:
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.network.mintegral.MintegralTYSplashAdapter$2$1 r4 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$2$1
                r4.<init>(r2)
                r0 = 10
                r3.postOnMainThreadDelayed(r4, r0)
            L29:
                return
        }
    }

    final class 3 implements com.mbridge.msdk.out.MBSplashShowListener {
        final com.tkay.network.mintegral.MintegralTYSplashAdapter a;

        3(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAdClicked(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.q(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.r(r1)
                r1.onSplashAdClicked()
            L11:
                return
        }

        @Override
        public final void onAdTick(com.mbridge.msdk.out.MBridgeIds r1, long r2) {
                r0 = this;
                return
        }

        @Override
        public final void onDismiss(com.mbridge.msdk.out.MBridgeIds r1, int r2) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.s(r1)
                if (r1 == 0) goto L47
                r1 = 1
                if (r2 == r1) goto L39
                r1 = 2
                if (r2 == r1) goto L2a
                r1 = 3
                if (r2 == r1) goto L1b
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.z(r1)
                r1.onSplashAdDismiss()
                goto L47
            L1b:
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.network.mintegral.MintegralTYSplashAdapter.x(r1)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.y(r1)
                r1.onSplashAdDismiss()
                return
            L2a:
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.network.mintegral.MintegralTYSplashAdapter.v(r1)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.w(r1)
                r1.onSplashAdDismiss()
                return
            L39:
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.network.mintegral.MintegralTYSplashAdapter.t(r1)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r1 = r0.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = com.tkay.network.mintegral.MintegralTYSplashAdapter.u(r1)
                r1.onSplashAdDismiss()
            L47:
                return
        }

        @Override
        public final void onShowFailed(com.mbridge.msdk.out.MBridgeIds r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.a()
                java.lang.String r0 = java.lang.String.valueOf(r4)
                java.lang.String r1 = "onShowFailed: "
                java.lang.String r0 = r1.concat(r0)
                android.util.Log.e(r3, r0)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.network.mintegral.MintegralTYSplashAdapter.m(r3)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.n(r3)
                if (r3 == 0) goto L38
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.o(r3)
                java.lang.String r0 = "4006"
                java.lang.String r1 = ""
                com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r4)
                r3.onSplashAdShowFail(r4)
                com.tkay.network.mintegral.MintegralTYSplashAdapter r3 = r2.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3 = com.tkay.network.mintegral.MintegralTYSplashAdapter.p(r3)
                r3.onSplashAdDismiss()
            L38:
                return
        }

        @Override
        public final void onShowSuccessed(com.mbridge.msdk.out.MBridgeIds r4) {
                r3 = this;
                com.tkay.network.mintegral.MintegralTYInitManager r4 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.mintegral.MintegralTYSplashAdapter r0 = r3.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r0 = r0.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.mintegral.MintegralTYSplashAdapter r2 = r3.a     // Catch: java.lang.Throwable -> L1a
                com.mbridge.msdk.out.MBSplashHandler r2 = r2.i     // Catch: java.lang.Throwable -> L1a
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
                r4.a(r0, r1)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.mintegral.MintegralTYSplashAdapter r4 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r4 = com.tkay.network.mintegral.MintegralTYSplashAdapter.k(r4)
                if (r4 == 0) goto L2b
                com.tkay.network.mintegral.MintegralTYSplashAdapter r4 = r3.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r4 = com.tkay.network.mintegral.MintegralTYSplashAdapter.l(r4)
                r4.onSplashAdShow()
            L2b:
                return
        }

        @Override
        public final void onZoomOutPlayFinish(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onZoomOutPlayStart(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.mintegral.MintegralTYSplashAdapter> r0 = com.tkay.network.mintegral.MintegralTYSplashAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.mintegral.MintegralTYSplashAdapter.j = r0
            return
    }

    public MintegralTYSplashAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 5
            r1.b = r0
            r0 = 1
            r1.c = r0
            r1.d = r0
            java.lang.String r0 = ""
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            r0 = 0
            r1.i = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.network.mintegral.MintegralTYSplashAdapter.j
            return r0
    }

    static void a(com.tkay.network.mintegral.MintegralTYSplashAdapter r9, java.util.Map r10) {
            com.mbridge.msdk.out.MBSplashHandler r8 = new com.mbridge.msdk.out.MBSplashHandler
            java.lang.String r1 = r9.h
            java.lang.String r2 = r9.f
            boolean r3 = r9.d
            int r4 = r9.b
            int r5 = r9.c
            r6 = 0
            r7 = 0
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r9.i = r8
            int r0 = r9.mFetchAdTimeout
            int r0 = r0 / 1000
            long r0 = (long) r0
            r8.setLoadTimeOut(r0)
            com.mbridge.msdk.out.MBSplashHandler r0 = r9.i
            com.tkay.network.mintegral.MintegralTYSplashAdapter$2 r1 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$2
            r1.<init>(r9)
            r0.setSplashLoadListener(r1)
            com.mbridge.msdk.out.MBSplashHandler r0 = r9.i
            com.tkay.network.mintegral.MintegralTYSplashAdapter$3 r1 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$3
            r1.<init>(r9)
            r0.setSplashShowListener(r1)
            boolean r0 = r9.b()
            if (r0 == 0) goto L46
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r0.setCustomInfo(r1, r10)
            com.mbridge.msdk.out.MBSplashHandler r10 = r9.i
            java.lang.String r0 = r9.a
            r10.preLoadByToken(r0)
            goto L54
        L46:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 8
            r0.setCustomInfo(r1, r10)
            com.mbridge.msdk.out.MBSplashHandler r10 = r9.i
            r10.preLoad()
        L54:
            com.mbridge.msdk.out.MBSplashHandler r9 = r9.i
            r9.onResume()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r10) {
            r9 = this;
            com.mbridge.msdk.out.MBSplashHandler r8 = new com.mbridge.msdk.out.MBSplashHandler
            java.lang.String r1 = r9.h
            java.lang.String r2 = r9.f
            boolean r3 = r9.d
            int r4 = r9.b
            int r5 = r9.c
            r6 = 0
            r7 = 0
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r9.i = r8
            int r0 = r9.mFetchAdTimeout
            int r0 = r0 / 1000
            long r0 = (long) r0
            r8.setLoadTimeOut(r0)
            com.mbridge.msdk.out.MBSplashHandler r0 = r9.i
            com.tkay.network.mintegral.MintegralTYSplashAdapter$2 r1 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$2
            r1.<init>(r9)
            r0.setSplashLoadListener(r1)
            com.mbridge.msdk.out.MBSplashHandler r0 = r9.i
            com.tkay.network.mintegral.MintegralTYSplashAdapter$3 r1 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$3
            r1.<init>(r9)
            r0.setSplashShowListener(r1)
            boolean r0 = r9.b()
            if (r0 == 0) goto L46
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r0.setCustomInfo(r1, r10)
            com.mbridge.msdk.out.MBSplashHandler r10 = r9.i
            java.lang.String r0 = r9.a
            r10.preLoadByToken(r0)
            goto L54
        L46:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 8
            r0.setCustomInfo(r1, r10)
            com.mbridge.msdk.out.MBSplashHandler r10 = r9.i
            r10.preLoad()
        L54:
            com.mbridge.msdk.out.MBSplashHandler r10 = r9.i
            r10.onResume()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private boolean b() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener j(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener k(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener l(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int m(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
            r0 = 99
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener n(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener o(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener p(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener q(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener r(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener s(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int t(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener u(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int v(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
            r0 = 3
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener w(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int x(com.tkay.network.mintegral.MintegralTYSplashAdapter r1) {
            r0 = 4
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener y(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener z(com.tkay.network.mintegral.MintegralTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            com.mbridge.msdk.out.MBSplashHandler r0 = r1.i
            if (r0 == 0) goto Lc
            r0.onPause()
            com.mbridge.msdk.out.MBSplashHandler r0 = r1.i
            r0.onDestroy()
        Lc:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10, com.tkay.core.api.TYBidRequestInfoListener r11) {
            r7 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0)
            r7.f = r0
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r5 = 5
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
            java.lang.String r0 = r1.f
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
            r2 = this;
            com.mbridge.msdk.out.MBSplashHandler r0 = r2.i
            if (r0 == 0) goto L1f
            boolean r0 = r2.b()
            if (r0 == 0) goto L15
            com.mbridge.msdk.out.MBSplashHandler r0 = r2.i
            java.lang.String r1 = r2.a
            boolean r0 = r0.isReady(r1)
            if (r0 == 0) goto L1f
            goto L1d
        L15:
            com.mbridge.msdk.out.MBSplashHandler r0 = r2.i
            boolean r0 = r0.isReady()
            if (r0 == 0) goto L1f
        L1d:
            r0 = 1
            return r0
        L1f:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r5 = this;
            java.lang.String r0 = "orientation"
            java.lang.String r1 = "allows_skip"
            java.lang.String r2 = ""
            java.lang.String r3 = "appid"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r3)     // Catch: java.lang.Exception -> L94
            r5.e = r3     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "appkey"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r3)     // Catch: java.lang.Exception -> L94
            r5.g = r3     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "unitid"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r3)     // Catch: java.lang.Exception -> L94
            r5.f = r3     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "payload"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r3)     // Catch: java.lang.Exception -> L94
            r5.a = r3     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "placement_id"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r3)     // Catch: java.lang.Exception -> L94
            r5.h = r3     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = r5.e     // Catch: java.lang.Exception -> L94
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L94
            if (r3 != 0) goto L88
            java.lang.String r3 = r5.f     // Catch: java.lang.Exception -> L94
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L94
            if (r3 != 0) goto L88
            java.lang.String r3 = r5.g     // Catch: java.lang.Exception -> L94
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L94
            if (r3 == 0) goto L47
            goto L88
        L47:
            java.lang.String r3 = "countdown"
            r4 = 5
            int r3 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r3, r4)     // Catch: java.lang.Exception -> L94
            r5.b = r3     // Catch: java.lang.Exception -> L94
            boolean r3 = r7.containsKey(r1)     // Catch: java.lang.Exception -> L94
            r4 = 1
            if (r3 == 0) goto L62
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r1)     // Catch: java.lang.Exception -> L94
            if (r1 != r4) goto L5f
            r1 = r4
            goto L60
        L5f:
            r1 = 0
        L60:
            r5.d = r1     // Catch: java.lang.Exception -> L94
        L62:
            boolean r1 = r7.containsKey(r0)     // Catch: java.lang.Exception -> L94
            if (r1 == 0) goto L77
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = "2"
            boolean r0 = android.text.TextUtils.equals(r0, r1)     // Catch: java.lang.Exception -> L94
            if (r0 == 0) goto L75
            r4 = 2
        L75:
            r5.c = r4     // Catch: java.lang.Exception -> L94
        L77:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()     // Catch: java.lang.Exception -> L94
            android.content.Context r1 = r6.getApplicationContext()     // Catch: java.lang.Exception -> L94
            com.tkay.network.mintegral.MintegralTYSplashAdapter$1 r3 = new com.tkay.network.mintegral.MintegralTYSplashAdapter$1     // Catch: java.lang.Exception -> L94
            r3.<init>(r5, r7, r6, r8)     // Catch: java.lang.Exception -> L94
            r0.initSDK(r1, r7, r3)     // Catch: java.lang.Exception -> L94
            return
        L88:
            com.tkay.core.api.TYCustomLoadListener r6 = r5.mLoadListener     // Catch: java.lang.Exception -> L94
            if (r6 == 0) goto L93
            com.tkay.core.api.TYCustomLoadListener r6 = r5.mLoadListener     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "mintegral appid ,unitid or sdkkey is empty."
            r6.onAdLoadError(r2, r7)     // Catch: java.lang.Exception -> L94
        L93:
            return
        L94:
            r6 = move-exception
            r6.printStackTrace()
            com.tkay.core.api.TYCustomLoadListener r7 = r5.mLoadListener
            if (r7 == 0) goto La5
            com.tkay.core.api.TYCustomLoadListener r7 = r5.mLoadListener
            java.lang.String r6 = r6.getMessage()
            r7.onAdLoadError(r2, r6)
        La5:
            return
    }

    @Override
    public void show(android.app.Activity r2, android.view.ViewGroup r3) {
            r1 = this;
            com.mbridge.msdk.out.MBSplashHandler r2 = r1.i
            if (r2 == 0) goto L17
            boolean r2 = r1.b()
            if (r2 == 0) goto L12
            com.mbridge.msdk.out.MBSplashHandler r2 = r1.i
            java.lang.String r0 = r1.a
            r2.show(r3, r0)
            return
        L12:
            com.mbridge.msdk.out.MBSplashHandler r2 = r1.i
            r2.show(r3)
        L17:
            return
    }
}
