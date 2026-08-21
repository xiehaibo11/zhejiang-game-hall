package com.tkay.rewardvideo.api;

public class TYRewardVideoAd {
    final java.lang.String TAG;
    com.tkay.core.common.b.a adLoadListener;
    java.lang.ref.WeakReference<android.app.Activity> mActivityWef;
    com.tkay.rewardvideo.a.a mAdLoadManager;
    com.tkay.core.common.b.b mAdSourceEventListener;
    android.content.Context mContext;
    com.tkay.core.api.TYAdSourceStatusListener mDeveloperStatusListener;
    com.tkay.core.api.TYEventInterface mDownloadListener;
    private com.tkay.rewardvideo.api.TYRewardVideoExListener mInterListener;
    com.tkay.rewardvideo.api.TYRewardVideoListener mListener;
    java.lang.String mPlacementId;
    java.util.Map<java.lang.String, java.lang.Object> mTKExtraMap;



    public TYRewardVideoAd(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.TAG = r0
            com.tkay.rewardvideo.api.TYRewardVideoAd$1 r0 = new com.tkay.rewardvideo.api.TYRewardVideoAd$1
            r0.<init>(r2)
            r2.mInterListener = r0
            com.tkay.rewardvideo.api.TYRewardVideoAd$2 r0 = new com.tkay.rewardvideo.api.TYRewardVideoAd$2
            r0.<init>(r2)
            r2.adLoadListener = r0
            r2.mPlacementId = r4
            android.content.Context r0 = r3.getApplicationContext()
            r2.mContext = r0
            boolean r0 = r3 instanceof android.app.Activity
            if (r0 == 0) goto L31
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r1 = r3
            android.app.Activity r1 = (android.app.Activity) r1
            r0.<init>(r1)
            r2.mActivityWef = r0
        L31:
            com.tkay.rewardvideo.a.a r3 = com.tkay.rewardvideo.a.a.a(r3, r4)
            r2.mAdLoadManager = r3
            return
    }

    private void controlShow(android.app.Activity r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = r6.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.q
            java.lang.String r2 = com.tkay.core.common.b.f.i.y
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            com.tkay.core.common.l.n.b(r0, r1, r2, r3, r4)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L56
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L56
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L34
            goto L56
        L34:
            if (r7 != 0) goto L3f
            android.content.Context r0 = r6.mContext
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L3f
            r7 = r0
            android.app.Activity r7 = (android.app.Activity) r7
        L3f:
            r1 = r7
            if (r1 != 0) goto L49
            java.lang.String r7 = r6.TAG
            java.lang.String r0 = "RewardedVideo Show Activity is null."
            android.util.Log.e(r7, r0)
        L49:
            com.tkay.rewardvideo.a.a r0 = r6.mAdLoadManager
            com.tkay.rewardvideo.api.TYRewardVideoExListener r3 = r6.mInterListener
            com.tkay.core.api.TYEventInterface r4 = r6.mDownloadListener
            java.util.Map<java.lang.String, java.lang.Object> r5 = r6.mTKExtraMap
            r2 = r8
            r0.a(r1, r2, r3, r4, r5)
            return
        L56:
            java.lang.String r7 = "9999"
            java.lang.String r8 = "sdk init error"
            com.tkay.core.api.AdError r7 = com.tkay.core.api.ErrorCode.getErrorCode(r7, r4, r8)
            com.tkay.rewardvideo.api.TYRewardVideoListener r8 = r6.mListener
            if (r8 == 0) goto L6a
            r0 = 0
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            r8.onRewardedVideoAdPlayFailed(r7, r0)
        L6a:
            java.lang.String r7 = r6.TAG
            java.lang.String r8 = "SDK init error!"
            android.util.Log.e(r7, r8)
            return
    }

    public static void entryAdScenario(java.lang.String r3, java.lang.String r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "1"
            r2 = 0
            r0.a(r3, r4, r1, r2)
            return
    }

    public static void entryAdScenario(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "1"
            r0.a(r2, r3, r1, r4)
            return
    }

    private com.tkay.core.api.TYAdStatusInfo getAdStatus() {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L32
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L27
            goto L32
        L27:
            com.tkay.rewardvideo.a.a r0 = r3.mAdLoadManager
            android.content.Context r1 = r3.mContext
            java.util.Map<java.lang.String, java.lang.Object> r2 = r3.mTKExtraMap
            com.tkay.core.api.TYAdStatusInfo r0 = r0.a(r1, r2)
            return r0
        L32:
            java.lang.String r0 = r3.TAG
            java.lang.String r1 = "SDK init error!"
            android.util.Log.e(r0, r1)
            r0 = 0
            return r0
    }

    private android.content.Context getRequestContext() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mActivityWef
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto Lf
            return r0
        Lf:
            android.content.Context r0 = r1.mContext
            return r0
    }

    private boolean isPlaceStrategyNeedAutoLoad() {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            java.lang.String r1 = r3.mPlacementId
            com.tkay.core.c.d r0 = r0.a(r1)
            r1 = 0
            if (r0 == 0) goto L1d
            int r0 = r0.W()
            r2 = 1
            if (r0 != r2) goto L1d
            return r2
        L1d:
            return r1
    }

    private void load(android.content.Context r13, int r14) {
            r12 = this;
            java.lang.String r0 = r12.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.q
            java.lang.String r2 = com.tkay.core.common.b.f.i.w
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            r5 = 1
            com.tkay.core.common.l.n.a(r0, r1, r2, r3, r4, r5)
            com.tkay.rewardvideo.a.a r6 = r12.mAdLoadManager
            com.tkay.core.common.b.a r9 = r12.adLoadListener
            com.tkay.core.common.b.b r10 = r12.mAdSourceEventListener
            java.util.Map<java.lang.String, java.lang.Object> r11 = r12.mTKExtraMap
            r7 = r13
            r8 = r14
            r6.a(r7, r8, r9, r10, r11)
            return
    }

    public com.tkay.core.api.TYAdStatusInfo checkAdStatus() {
            r6 = this;
            com.tkay.core.api.TYAdStatusInfo r0 = r6.getAdStatus()
            if (r0 != 0) goto Le
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r1 = 0
            r2 = 0
            r0.<init>(r2, r2, r1)
            return r0
        Le:
            java.lang.String r1 = r6.mPlacementId
            java.lang.String r2 = com.tkay.core.common.b.f.i.q
            java.lang.String r3 = com.tkay.core.common.b.f.i.A
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
    }

    public java.util.List<com.tkay.core.api.TYAdInfo> checkValidAdCaches() {
            r2 = this;
            com.tkay.rewardvideo.a.a r0 = r2.mAdLoadManager
            if (r0 == 0) goto Lb
            android.content.Context r1 = r2.mContext
            java.util.List r0 = r0.a(r1)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public boolean isAdReady() {
            r6 = this;
            com.tkay.core.api.TYAdStatusInfo r0 = r6.getAdStatus()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.isReady()
            java.lang.String r1 = r6.mPlacementId
            java.lang.String r2 = com.tkay.core.common.b.f.i.q
            java.lang.String r3 = com.tkay.core.common.b.f.i.z
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
    }

    public void load() {
            r2 = this;
            android.content.Context r0 = r2.getRequestContext()
            r1 = 0
            r2.load(r0, r1)
            return
    }

    public void load(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L3
            goto L7
        L3:
            android.content.Context r2 = r1.getRequestContext()
        L7:
            r0 = 0
            r1.load(r2, r0)
            return
    }

    public void setAdDownloadListener(com.tkay.core.api.TYEventInterface r1) {
            r0 = this;
            r0.mDownloadListener = r1
            return
    }

    public void setAdListener(com.tkay.rewardvideo.api.TYRewardVideoListener r1) {
            r0 = this;
            r0.mListener = r1
            return
    }

    public void setAdSourceStatusListener(com.tkay.core.api.TYAdSourceStatusListener r2) {
            r1 = this;
            com.tkay.core.common.b.b r0 = r1.mAdSourceEventListener
            if (r0 != 0) goto Lb
            com.tkay.core.common.b.b r0 = new com.tkay.core.common.b.b
            r0.<init>()
            r1.mAdSourceEventListener = r0
        Lb:
            r1.mDeveloperStatusListener = r2
            com.tkay.core.common.b.b r0 = r1.mAdSourceEventListener
            r0.a(r2)
            return
    }

    public void setLocalExtra(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r2.mPlacementId
            r0.a(r1, r3)
            return
    }

    public void setTKExtra(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mTKExtraMap = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            r0.clear()
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            r0.putAll(r2)
            return
    }

    public void show(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = ""
            r1.controlShow(r2, r0)
            return
    }

    public void show(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.tkay.core.common.l.g.c(r3)
            if (r0 == 0) goto L7
            goto L9
        L7:
            java.lang.String r3 = ""
        L9:
            r1.controlShow(r2, r3)
            return
    }
}
