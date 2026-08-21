package com.tkay.network.sigmob;

public class SigmobTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    private com.sigmob.windad.natives.WindNativeUnifiedAd a;
    private java.lang.String b;
    private java.lang.String c;
    private volatile boolean d;
    private double e;

    final class 1 implements com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener {
        final android.content.Context a;
        final com.tkay.network.sigmob.SigmobTYAdapter b;

        1(com.tkay.network.sigmob.SigmobTYAdapter r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAdError(com.sigmob.windad.WindAdError r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.sigmob.SigmobTYAdapter r0 = r1.b
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYAdapter.a(r0)
                boolean r3 = android.text.TextUtils.equals(r0, r3)
                if (r3 == 0) goto L1f
                if (r2 == 0) goto L1f
                com.tkay.network.sigmob.SigmobTYAdapter r3 = r1.b
                int r0 = r2.getErrorCode()
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = r2.getMessage()
                com.tkay.network.sigmob.SigmobTYAdapter.a(r3, r0, r2)
            L1f:
                return
        }

        @Override
        public final void onAdLoad(java.util.List<com.sigmob.windad.natives.WindNativeAdData> r5, java.lang.String r6) {
                r4 = this;
                com.tkay.network.sigmob.SigmobTYAdapter r0 = r4.b
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYAdapter.a(r0)
                boolean r6 = android.text.TextUtils.equals(r0, r6)
                if (r6 == 0) goto L92
                if (r5 == 0) goto L89
                int r6 = r5.size()
                if (r6 <= 0) goto L89
                java.util.ArrayList r6 = new java.util.ArrayList
                r6.<init>()
                java.util.Iterator r5 = r5.iterator()
            L1d:
                boolean r0 = r5.hasNext()
                if (r0 == 0) goto L3a
                java.lang.Object r0 = r5.next()
                com.sigmob.windad.natives.WindNativeAdData r0 = (com.sigmob.windad.natives.WindNativeAdData) r0
                com.tkay.network.sigmob.SigmobTYNativeAd r1 = new com.tkay.network.sigmob.SigmobTYNativeAd
                android.content.Context r2 = r4.a
                com.tkay.network.sigmob.SigmobTYAdapter r3 = r4.b
                com.sigmob.windad.natives.WindNativeUnifiedAd r3 = com.tkay.network.sigmob.SigmobTYAdapter.b(r3)
                r1.<init>(r2, r0, r3)
                r6.add(r1)
                goto L1d
            L3a:
                int r5 = r6.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r5 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r5]
                java.lang.Object[] r5 = r6.toArray(r5)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r5 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r5
                com.tkay.network.sigmob.SigmobTYAdapter r6 = r4.b
                boolean r6 = com.tkay.network.sigmob.SigmobTYAdapter.c(r6)
                if (r6 == 0) goto L77
                com.tkay.network.sigmob.SigmobTYAdapter r6 = r4.b
                com.sigmob.windad.natives.WindNativeUnifiedAd r6 = com.tkay.network.sigmob.SigmobTYAdapter.b(r6)
                if (r6 == 0) goto L77
                com.tkay.network.sigmob.SigmobTYAdapter r6 = r4.b
                com.sigmob.windad.natives.WindNativeUnifiedAd r6 = com.tkay.network.sigmob.SigmobTYAdapter.b(r6)
                java.lang.String r6 = r6.getEcpm()
                com.tkay.network.sigmob.SigmobTYAdapter r0 = r4.b
                java.lang.String r0 = com.tkay.network.sigmob.SigmobTYAdapter.a(r0)
                com.tkay.network.sigmob.SigmobTYAdapter r1 = r4.b
                com.tkay.core.api.TYBiddingListener r1 = r1.mBiddingListener
                com.tkay.network.sigmob.SigmobTYAdapter r2 = r4.b
                com.sigmob.windad.natives.WindNativeUnifiedAd r2 = com.tkay.network.sigmob.SigmobTYAdapter.b(r2)
                r3 = 0
                r5 = r5[r3]
                com.tkay.network.sigmob.SigmobTYInitManager.onC2SBiddingResultWithCache(r6, r0, r1, r2, r5)
                return
            L77:
                com.tkay.network.sigmob.SigmobTYAdapter r6 = r4.b
                com.tkay.core.api.TYCustomLoadListener r6 = com.tkay.network.sigmob.SigmobTYAdapter.d(r6)
                if (r6 == 0) goto L88
                com.tkay.network.sigmob.SigmobTYAdapter r6 = r4.b
                com.tkay.core.api.TYCustomLoadListener r6 = com.tkay.network.sigmob.SigmobTYAdapter.e(r6)
                r6.onAdCacheLoaded(r5)
            L88:
                return
            L89:
                com.tkay.network.sigmob.SigmobTYAdapter r5 = r4.b
                java.lang.String r6 = ""
                java.lang.String r0 = "no ad return"
                com.tkay.network.sigmob.SigmobTYAdapter.a(r5, r6, r0)
            L92:
                return
        }
    }


    public SigmobTYAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            return
    }

    static java.lang.String a(com.tkay.network.sigmob.SigmobTYAdapter r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    private void a(android.content.Context r5, int r6) {
            r4 = this;
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = r4.a
            if (r0 != 0) goto L13
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = new com.sigmob.windad.natives.WindNativeUnifiedAd
            com.sigmob.windad.natives.WindNativeAdRequest r1 = new com.sigmob.windad.natives.WindNativeAdRequest
            java.lang.String r2 = r4.b
            r3 = 0
            r1.<init>(r2, r3, r6, r3)
            r0.<init>(r1)
            r4.a = r0
        L13:
            com.sigmob.windad.natives.WindNativeUnifiedAd r6 = r4.a
            com.tkay.network.sigmob.SigmobTYAdapter$1 r0 = new com.tkay.network.sigmob.SigmobTYAdapter$1
            r0.<init>(r4, r5)
            r6.setNativeAdLoadListener(r0)
            boolean r5 = r4.d
            if (r5 == 0) goto L3e
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            if (r5 == 0) goto L3e
            double r0 = r4.e
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L31
            int r6 = (int) r0
            r5.setBidFloor(r6)
        L31:
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            java.lang.String r6 = "USD"
            r5.setCurrency(r6)
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            r5.loadAd()
            return
        L3e:
            java.lang.String r5 = r4.c
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L4e
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            java.lang.String r6 = r4.c
            r5.loadAd(r6)
            return
        L4e:
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            r5.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYAdapter r4, android.content.Context r5, int r6) {
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = r4.a
            if (r0 != 0) goto L13
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = new com.sigmob.windad.natives.WindNativeUnifiedAd
            com.sigmob.windad.natives.WindNativeAdRequest r1 = new com.sigmob.windad.natives.WindNativeAdRequest
            java.lang.String r2 = r4.b
            r3 = 0
            r1.<init>(r2, r3, r6, r3)
            r0.<init>(r1)
            r4.a = r0
        L13:
            com.sigmob.windad.natives.WindNativeUnifiedAd r6 = r4.a
            com.tkay.network.sigmob.SigmobTYAdapter$1 r0 = new com.tkay.network.sigmob.SigmobTYAdapter$1
            r0.<init>(r4, r5)
            r6.setNativeAdLoadListener(r0)
            boolean r5 = r4.d
            if (r5 == 0) goto L3e
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            if (r5 == 0) goto L3e
            double r0 = r4.e
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L31
            int r6 = (int) r0
            r5.setBidFloor(r6)
        L31:
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            java.lang.String r6 = "USD"
            r5.setCurrency(r6)
            com.sigmob.windad.natives.WindNativeUnifiedAd r4 = r4.a
            r4.loadAd()
            return
        L3e:
            java.lang.String r5 = r4.c
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L4e
            com.sigmob.windad.natives.WindNativeUnifiedAd r5 = r4.a
            java.lang.String r4 = r4.c
            r5.loadAd(r4)
            return
        L4e:
            com.sigmob.windad.natives.WindNativeUnifiedAd r4 = r4.a
            r4.loadAd()
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYAdapter r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r3.d
            com.tkay.core.api.TYBiddingListener r1 = r3.mBiddingListener
            com.tkay.core.api.TYCustomLoadListener r2 = r3.mLoadListener
            com.tkay.network.sigmob.SigmobTYInitManager.onAdLoadError(r4, r5, r0, r1, r2)
            return
    }

    static com.sigmob.windad.natives.WindNativeUnifiedAd b(com.tkay.network.sigmob.SigmobTYAdapter r0) {
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = r0.a
            return r0
    }

    static boolean c(com.tkay.network.sigmob.SigmobTYAdapter r0) {
            boolean r0 = r0.d
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.sigmob.SigmobTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.sigmob.SigmobTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = r1.a
            if (r0 == 0) goto L7
            r0.destroy()
        L7:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "placement_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.b = r0
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
            java.lang.String r0 = r1.b
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
    public void loadCustomNetworkAd(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            java.lang.String r6 = "app_id"
            java.lang.String r6 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r6)
            java.lang.String r0 = "app_key"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r0)
            java.lang.String r1 = "placement_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            r3.b = r1
            java.lang.String r1 = "payload"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)
            r3.c = r1
            java.lang.String r1 = "bid_floor"
            double r1 = com.tkay.core.api.TYInitMediation.getDoubleFromMap(r5, r1)
            r3.e = r1
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L4b
            boolean r6 = android.text.TextUtils.isEmpty(r0)
            if (r6 != 0) goto L4b
            java.lang.String r6 = r3.b
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L39
            goto L4b
        L39:
            int r6 = r3.mRequestNum
            r0 = 3
            if (r6 <= r0) goto L40
            r3.mRequestNum = r0
        L40:
            int r6 = r3.mRequestNum
            com.tkay.network.sigmob.SigmobTYAdapter$2 r0 = new com.tkay.network.sigmob.SigmobTYAdapter$2
            r0.<init>(r3, r4, r5, r6)
            r3.postOnMainThread(r0)
            return
        L4b:
            java.lang.String r4 = ""
            java.lang.String r5 = "app_id、app_key、placement_id could not be null."
            r3.a(r4, r5)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.d = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
