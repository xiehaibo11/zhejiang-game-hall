package com.tkay.core.api;

public abstract class TYBaseAdAdapter extends com.tkay.core.common.b.n {
    public com.tkay.core.api.TYBiddingListener mBiddingListener;
    protected int mDismissType;
    protected com.tkay.core.api.TYEventInterface mDownloadListener;
    protected com.tkay.core.api.TYCustomLoadListener mLoadListener;
    protected int mMixedFormatAdType;
    protected java.lang.String mScenario;
    protected java.lang.String mUserData;
    protected java.lang.String mUserId;

    public TYBaseAdAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.mUserId = r0
            r1.mUserData = r0
            r1.mScenario = r0
            r0 = -1
            r1.mMixedFormatAdType = r0
            r0 = 0
            r1.mDismissType = r0
            return
    }

    private void cleanLoadListener() {
            r1 = this;
            r0 = 0
            r1.mBiddingListener = r0
            r1.mLoadListener = r0
            return
    }

    private void fillParams(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.tkay.core.common.f.d r0 = r1.getTrackingInfo()
            if (r0 == 0) goto L11
            com.tkay.core.common.f.d r0 = r1.getTrackingInfo()
            com.tkay.core.common.f.d r0 = r0.N()
            com.tkay.core.common.l.g.a(r2, r0)
        L11:
            return
    }

    private void parseGloableParams(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            if (r5 == 0) goto L2a
            java.lang.String r0 = "user_id"
            java.lang.Object r1 = r5.get(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto L15
            java.lang.Object r0 = r5.get(r0)
            java.lang.String r0 = r0.toString()
            goto L16
        L15:
            r0 = r2
        L16:
            r3.mUserId = r0
            java.lang.String r0 = "user_custom_data"
            java.lang.Object r1 = r5.get(r0)
            if (r1 == 0) goto L28
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r2 = r5.toString()
        L28:
            r3.mUserData = r2
        L2a:
            if (r4 == 0) goto L42
            java.lang.String r5 = "ad_type"
            boolean r0 = r4.containsKey(r5)
            if (r0 == 0) goto L42
            java.lang.Object r4 = r4.get(r5)
            java.lang.String r4 = r4.toString()
            int r4 = java.lang.Integer.parseInt(r4)
            r3.mMixedFormatAdType = r4
        L42:
            return
    }

    public abstract void destory();

    public com.tkay.core.api.BaseAd getBaseAdObject(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public com.tkay.core.api.MediationBidManager getBidManager() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void getBidRequestInfo(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBidRequestInfoListener r4) {
            r0 = this;
            if (r4 == 0) goto L7
            java.lang.String r1 = "This network don't support header bidding in current TY's version."
            r4.onFailed(r1)
        L7:
            return
    }

    public final int getDismissType() {
            r1 = this;
            int r0 = r1.mDismissType
            return r0
    }

    public java.lang.String getILRD() {
            r1 = this;
            r0 = 0
            return r0
    }

    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final int getMixedFormatAdType() {
            r1 = this;
            int r0 = r1.mMixedFormatAdType
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract java.lang.String getNetworkName();

    public abstract java.lang.String getNetworkPlacementId();

    public abstract java.lang.String getNetworkSDKVersion();

    public final java.lang.String getUserCustomData() {
            r1 = this;
            java.lang.String r0 = r1.mUserData
            return r0
    }

    public final java.lang.String getUserId() {
            r1 = this;
            java.lang.String r0 = r1.mUserId
            return r0
    }

    public boolean initNetworkObjectByPlacementId(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public final boolean internalInitNetworkObjectByPlacementId(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.fillParams(r2)
            r0.parseGloableParams(r2, r3)
            boolean r1 = r0.initNetworkObjectByPlacementId(r1, r2, r3)
            return r1
    }

    public final void internalLoad(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYCustomLoadListener r4) {
            r0 = this;
            r0.mLoadListener = r4
            r0.fillParams(r2)
            r0.parseGloableParams(r2, r3)
            r0.loadCustomNetworkAd(r1, r2, r3)
            return
    }

    public final boolean internalStartBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r0.fillParams(r2)
            r0.parseGloableParams(r2, r3)
            r0.mBiddingListener = r4
            boolean r1 = r0.startBiddingRequest(r1, r2, r3, r4)
            if (r1 != 0) goto L11
            r2 = 0
            r0.mBiddingListener = r2
        L11:
            return r1
    }

    public abstract boolean isAdReady();

    public abstract void loadCustomNetworkAd(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3);

    public final void notifyATLoadFail(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.tkay.core.api.TYBiddingListener r0 = r3.mBiddingListener
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r1 = "|"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            goto L20
        L1f:
            r0 = r5
        L20:
            com.tkay.core.api.TYBiddingListener r1 = r3.mBiddingListener
            com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.fail(r0)
            r2 = 0
            r1.onC2SBiddingResultWithCache(r0, r2)
        L2a:
            com.tkay.core.api.TYCustomLoadListener r0 = r3.mLoadListener
            if (r0 == 0) goto L31
            r0.onAdLoadError(r4, r5)
        L31:
            return
    }

    public void releaseLoadResource() {
            r0 = this;
            r0.cleanLoadListener()
            return
    }

    public void setAdDownloadListener(com.tkay.core.api.TYEventInterface r1) {
            r0 = this;
            r0.mDownloadListener = r1
            return
    }

    public final void setScenario(java.lang.String r1) {
            r0 = this;
            r0.mScenario = r1
            return
    }

    public boolean setUserDataConsent(android.content.Context r1, boolean r2, boolean r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean supportImpressionCallback() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final void thirdPartyLoad(com.tkay.core.api.TYBaseAdAdapter r3, android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r2 = this;
            com.tkay.core.common.b.o r0 = new com.tkay.core.common.b.o
            com.tkay.core.api.TYCustomLoadListener r1 = r2.mLoadListener
            r0.<init>(r1, r5)
            r3.internalLoad(r4, r5, r6, r0)
            return
    }
}
