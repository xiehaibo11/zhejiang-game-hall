package com.tkay.network.mintegral;

public class MintegralTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    com.mbridge.msdk.out.MBBannerView a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    int f;

    final class 1 implements com.mbridge.msdk.out.BannerAdListener {
        final com.tkay.network.mintegral.MintegralTYBannerAdapter a;

        1(com.tkay.network.mintegral.MintegralTYBannerAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void closeFullScreen(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onClick(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.mintegral.MintegralTYBannerAdapter.g(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.mintegral.MintegralTYBannerAdapter.h(r1)
                r1.onBannerAdClicked()
            L11:
                return
        }

        @Override
        public final void onCloseBanner(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.mintegral.MintegralTYBannerAdapter.i(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.mintegral.MintegralTYBannerAdapter.j(r1)
                r1.onBannerAdClose()
            L11:
                return
        }

        @Override
        public final void onLeaveApp(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadFailed(com.mbridge.msdk.out.MBridgeIds r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYBannerAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYBannerAdapter.a(r2)
                if (r2 == 0) goto L13
                com.tkay.network.mintegral.MintegralTYBannerAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYBannerAdapter.b(r2)
                java.lang.String r0 = ""
                r2.onAdLoadError(r0, r3)
            L13:
                return
        }

        @Override
        public final void onLoadSuccessed(com.mbridge.msdk.out.MBridgeIds r2) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYBannerAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYBannerAdapter.c(r2)
                if (r2 == 0) goto L14
                com.tkay.network.mintegral.MintegralTYBannerAdapter r2 = r1.a
                com.tkay.core.api.TYCustomLoadListener r2 = com.tkay.network.mintegral.MintegralTYBannerAdapter.d(r2)
                r0 = 0
                com.tkay.core.api.BaseAd[] r0 = new com.tkay.core.api.BaseAd[r0]
                r2.onAdCacheLoaded(r0)
            L14:
                return
        }

        @Override
        public final void onLogImpression(com.mbridge.msdk.out.MBridgeIds r4) {
                r3 = this;
                com.tkay.network.mintegral.MintegralTYInitManager r4 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.mintegral.MintegralTYBannerAdapter r0 = r3.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r0 = r0.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r0 = r0.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.mintegral.MintegralTYBannerAdapter r2 = r3.a     // Catch: java.lang.Throwable -> L1a
                com.mbridge.msdk.out.MBBannerView r2 = r2.a     // Catch: java.lang.Throwable -> L1a
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
                r4.a(r0, r1)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.mintegral.MintegralTYBannerAdapter r4 = r3.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r4 = com.tkay.network.mintegral.MintegralTYBannerAdapter.e(r4)
                if (r4 == 0) goto L2b
                com.tkay.network.mintegral.MintegralTYBannerAdapter r4 = r3.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r4 = com.tkay.network.mintegral.MintegralTYBannerAdapter.f(r4)
                r4.onBannerAdShow()
            L2b:
                return
        }

        @Override
        public final void showFullScreen(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }
    }


    public MintegralTYBannerAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            com.mbridge.msdk.out.MBBannerView r0 = new com.mbridge.msdk.out.MBBannerView
            r0.<init>(r8)
            r7.a = r0
            java.lang.String r0 = r7.d
            int r1 = r0.hashCode()
            r2 = 3
            r3 = 2
            r4 = 1
            r5 = -1
            r6 = 0
            switch(r1) {
                case -559799608: goto L34;
                case 109549001: goto L2a;
                case 1507809730: goto L20;
                case 1507809854: goto L16;
                default: goto L15;
            }
        L15:
            goto L3e
        L16:
            java.lang.String r1 = "320x90"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r6
            goto L3f
        L20:
            java.lang.String r1 = "320x50"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r2
            goto L3f
        L2a:
            java.lang.String r1 = "smart"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r3
            goto L3f
        L34:
            java.lang.String r1 = "300x250"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r4
            goto L3f
        L3e:
            r0 = r5
        L3f:
            if (r0 == 0) goto L4f
            if (r0 == r4) goto L4b
            if (r0 == r3) goto L49
            r2 = 4
            r0 = 50
            goto L52
        L49:
            r0 = r5
            goto L52
        L4b:
            r0 = 250(0xfa, float:3.5E-43)
            r2 = r3
            goto L52
        L4f:
            r0 = 90
            r2 = r4
        L52:
            com.mbridge.msdk.out.MBBannerView r1 = r7.a
            com.mbridge.msdk.out.BannerSize r3 = new com.mbridge.msdk.out.BannerSize
            r3.<init>(r2, r6, r6)
            java.lang.String r2 = r7.c
            java.lang.String r4 = r7.b
            r1.init(r3, r2, r4)
            com.mbridge.msdk.out.MBBannerView r1 = r7.a
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            if (r0 <= 0) goto L6b
            float r0 = (float) r0
            int r0 = dip2px(r8, r0)
        L6b:
            r2.<init>(r5, r0)
            r1.setLayoutParams(r2)
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            com.tkay.network.mintegral.MintegralTYBannerAdapter$1 r0 = new com.tkay.network.mintegral.MintegralTYBannerAdapter$1
            r0.<init>(r7)
            r8.setBannerAdListener(r0)
            int r8 = r7.f
            if (r8 <= 0) goto L85
            com.mbridge.msdk.out.MBBannerView r0 = r7.a
            r0.setRefreshTime(r8)
            goto L8a
        L85:
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            r8.setRefreshTime(r6)
        L8a:
            java.lang.String r8 = r7.e
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto La2
            com.tkay.network.mintegral.MintegralTYInitManager r8 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0 = 7
            r8.setCustomInfo(r0, r9)
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            java.lang.String r9 = r7.e
            r8.loadFromBid(r9)
            return
        La2:
            com.tkay.network.mintegral.MintegralTYInitManager r8 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0 = 8
            r8.setCustomInfo(r0, r9)
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            r8.load()
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYBannerAdapter r7, android.content.Context r8, java.util.Map r9) {
            com.mbridge.msdk.out.MBBannerView r0 = new com.mbridge.msdk.out.MBBannerView
            r0.<init>(r8)
            r7.a = r0
            java.lang.String r0 = r7.d
            int r1 = r0.hashCode()
            r2 = 3
            r3 = 2
            r4 = 1
            r5 = -1
            r6 = 0
            switch(r1) {
                case -559799608: goto L34;
                case 109549001: goto L2a;
                case 1507809730: goto L20;
                case 1507809854: goto L16;
                default: goto L15;
            }
        L15:
            goto L3e
        L16:
            java.lang.String r1 = "320x90"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r6
            goto L3f
        L20:
            java.lang.String r1 = "320x50"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r2
            goto L3f
        L2a:
            java.lang.String r1 = "smart"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r3
            goto L3f
        L34:
            java.lang.String r1 = "300x250"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3e
            r0 = r4
            goto L3f
        L3e:
            r0 = r5
        L3f:
            if (r0 == 0) goto L4f
            if (r0 == r4) goto L4b
            if (r0 == r3) goto L49
            r2 = 4
            r0 = 50
            goto L52
        L49:
            r0 = r5
            goto L52
        L4b:
            r0 = 250(0xfa, float:3.5E-43)
            r2 = r3
            goto L52
        L4f:
            r0 = 90
            r2 = r4
        L52:
            com.mbridge.msdk.out.MBBannerView r1 = r7.a
            com.mbridge.msdk.out.BannerSize r3 = new com.mbridge.msdk.out.BannerSize
            r3.<init>(r2, r6, r6)
            java.lang.String r2 = r7.c
            java.lang.String r4 = r7.b
            r1.init(r3, r2, r4)
            com.mbridge.msdk.out.MBBannerView r1 = r7.a
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            if (r0 <= 0) goto L6b
            float r0 = (float) r0
            int r0 = dip2px(r8, r0)
        L6b:
            r2.<init>(r5, r0)
            r1.setLayoutParams(r2)
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            com.tkay.network.mintegral.MintegralTYBannerAdapter$1 r0 = new com.tkay.network.mintegral.MintegralTYBannerAdapter$1
            r0.<init>(r7)
            r8.setBannerAdListener(r0)
            int r8 = r7.f
            if (r8 <= 0) goto L85
            com.mbridge.msdk.out.MBBannerView r0 = r7.a
            r0.setRefreshTime(r8)
            goto L8a
        L85:
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            r8.setRefreshTime(r6)
        L8a:
            java.lang.String r8 = r7.e
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto La2
            com.tkay.network.mintegral.MintegralTYInitManager r8 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0 = 7
            r8.setCustomInfo(r0, r9)
            com.mbridge.msdk.out.MBBannerView r8 = r7.a
            java.lang.String r7 = r7.e
            r8.loadFromBid(r7)
            return
        La2:
            com.tkay.network.mintegral.MintegralTYInitManager r8 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0 = 8
            r8.setCustomInfo(r0, r9)
            com.mbridge.msdk.out.MBBannerView r7 = r7.a
            r7.load()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    public static int dip2px(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener e(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener f(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener g(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener h(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener i(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener k(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener l(com.tkay.network.mintegral.MintegralTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.mbridge.msdk.out.MBBannerView r0 = r2.a
            if (r0 == 0) goto Lf
            r1 = 0
            r0.setBannerAdListener(r1)
            com.mbridge.msdk.out.MBBannerView r0 = r2.a
            r0.release()
            r2.a = r1
        Lf:
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            com.mbridge.msdk.out.MBBannerView r0 = r1.a
            return r0
    }

    @Override
    public void getBidRequestInfo(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10, com.tkay.core.api.TYBidRequestInfoListener r11) {
            r7 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0)
            r7.b = r0
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r5 = 2
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
            java.lang.String r0 = r1.b
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
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r6 = "nw_rft"
            java.lang.String r0 = "appid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            java.lang.String r1 = "appkey"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            java.lang.String r2 = "unitid"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.b = r2
            java.lang.String r2 = "size"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.d = r2
            java.lang.String r2 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.e = r2
            java.lang.String r2 = "placement_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r2)
            r3.c = r2
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6f
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L43
            goto L6f
        L43:
            r0 = 0
            r3.f = r0
            boolean r0 = r5.containsKey(r6)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L5e
            int r6 = com.tkay.core.api.TYInitMediation.getIntFromMap(r5, r6)     // Catch: java.lang.Throwable -> L5a
            r3.f = r6     // Catch: java.lang.Throwable -> L5a
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L5a
            r0 = 1148846080(0x447a0000, float:1000.0)
            float r6 = r6 / r0
            int r6 = (int) r6     // Catch: java.lang.Throwable -> L5a
            r3.f = r6     // Catch: java.lang.Throwable -> L5a
            goto L5e
        L5a:
            r6 = move-exception
            r6.printStackTrace()
        L5e:
            android.content.Context r4 = r4.getApplicationContext()
            com.tkay.network.mintegral.MintegralTYInitManager r6 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            com.tkay.network.mintegral.MintegralTYBannerAdapter$2 r0 = new com.tkay.network.mintegral.MintegralTYBannerAdapter$2
            r0.<init>(r3, r4, r5)
            r6.initSDK(r4, r5, r0)
            return
        L6f:
            com.tkay.core.api.TYCustomLoadListener r4 = r3.mLoadListener
            if (r4 == 0) goto L7c
            com.tkay.core.api.TYCustomLoadListener r4 = r3.mLoadListener
            java.lang.String r5 = ""
            java.lang.String r6 = "appid、appkey or unitid is empty."
            r4.onAdLoadError(r5, r6)
        L7c:
            return
    }
}
