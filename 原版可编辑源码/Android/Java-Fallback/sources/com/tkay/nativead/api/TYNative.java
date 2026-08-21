package com.tkay.nativead.api;

public class TYNative {
    private final java.lang.String TAG;
    com.tkay.core.common.b.a adLoadListener;
    java.lang.ref.WeakReference<android.app.Activity> mActivityRef;
    com.tkay.nativead.a.a mAdLoadManager;
    com.tkay.core.common.b.b mAdSourceEventListener;
    android.content.Context mContext;
    com.tkay.core.api.TYAdSourceStatusListener mDeveloperStatusListener;
    com.tkay.nativead.api.TYNativeNetworkListener mListener;
    java.lang.String mPlacementId;
    java.util.Map<java.lang.String, java.lang.Object> mTKExtraMap;


    public TYNative(android.content.Context r3, java.lang.String r4, com.tkay.nativead.api.TYNativeNetworkListener r5) {
            r2 = this;
            r2.<init>()
            java.lang.Class<com.tkay.nativead.api.TYNative> r0 = com.tkay.nativead.api.TYNative.class
            java.lang.String r0 = r0.getSimpleName()
            r2.TAG = r0
            com.tkay.nativead.api.TYNative$1 r0 = new com.tkay.nativead.api.TYNative$1
            r0.<init>(r2)
            r2.adLoadListener = r0
            android.content.Context r0 = r3.getApplicationContext()
            r2.mContext = r0
            if (r3 == 0) goto L28
            boolean r0 = r3 instanceof android.app.Activity
            if (r0 == 0) goto L28
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r1 = r3
            android.app.Activity r1 = (android.app.Activity) r1
            r0.<init>(r1)
            r2.mActivityRef = r0
        L28:
            r2.mPlacementId = r4
            r2.mListener = r5
            com.tkay.nativead.a.a r3 = com.tkay.nativead.a.a.a(r3, r4)
            r2.mAdLoadManager = r3
            return
    }

    public static void entryAdScenario(java.lang.String r3, java.lang.String r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "0"
            r2 = 0
            r0.a(r3, r4, r1, r2)
            return
    }

    public static void entryAdScenario(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "0"
            r0.a(r2, r3, r1, r4)
            return
    }

    private android.content.Context getContext() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.mActivityRef
            if (r0 == 0) goto Ld
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            android.content.Context r0 = r1.mContext
            return r0
    }

    public com.tkay.core.api.TYAdStatusInfo checkAdStatus() {
            r6 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L43
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L43
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L27
            goto L43
        L27:
            com.tkay.nativead.a.a r0 = r6.mAdLoadManager
            android.content.Context r1 = r6.getContext()
            java.util.Map<java.lang.String, java.lang.Object> r2 = r6.mTKExtraMap
            com.tkay.core.api.TYAdStatusInfo r0 = r0.a(r1, r2)
            java.lang.String r1 = r6.mPlacementId
            java.lang.String r2 = com.tkay.core.common.b.f.i.r
            java.lang.String r3 = com.tkay.core.common.b.f.i.A
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
        L43:
            java.lang.String r0 = r6.TAG
            java.lang.String r1 = "SDK init error!"
            android.util.Log.e(r0, r1)
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r1 = 0
            r2 = 0
            r0.<init>(r2, r2, r1)
            return r0
    }

    public java.util.List<com.tkay.core.api.TYAdInfo> checkValidAdCaches() {
            r2 = this;
            com.tkay.nativead.a.a r0 = r2.mAdLoadManager
            if (r0 == 0) goto Ld
            android.content.Context r1 = r2.getContext()
            java.util.List r0 = r0.a(r1)
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public com.tkay.nativead.api.NativeAd getNativeAd() {
            r4 = this;
            com.tkay.nativead.a.a r0 = r4.mAdLoadManager
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.mTKExtraMap
            java.lang.String r2 = ""
            com.tkay.core.common.f.a r0 = r0.a(r2, r1)
            if (r0 == 0) goto L18
            com.tkay.nativead.api.NativeAd r1 = new com.tkay.nativead.api.NativeAd
            android.content.Context r2 = r4.getContext()
            java.lang.String r3 = r4.mPlacementId
            r1.<init>(r2, r3, r0)
            return r1
        L18:
            r0 = 0
            return r0
    }

    public com.tkay.nativead.api.NativeAd getNativeAd(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.tkay.core.common.l.g.c(r4)
            if (r0 == 0) goto L7
            goto L9
        L7:
            java.lang.String r4 = ""
        L9:
            com.tkay.nativead.a.a r0 = r3.mAdLoadManager
            java.util.Map<java.lang.String, java.lang.Object> r1 = r3.mTKExtraMap
            com.tkay.core.common.f.a r4 = r0.a(r4, r1)
            if (r4 == 0) goto L1f
            com.tkay.nativead.api.NativeAd r0 = new com.tkay.nativead.api.NativeAd
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = r3.mPlacementId
            r0.<init>(r1, r2, r4)
            return r0
        L1f:
            r4 = 0
            return r4
    }

    public void makeAdRequest() {
            r6 = this;
            java.lang.String r0 = r6.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.r
            java.lang.String r2 = com.tkay.core.common.b.f.i.w
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            r5 = 1
            com.tkay.core.common.l.n.a(r0, r1, r2, r3, r4, r5)
            com.tkay.nativead.a.a r0 = r6.mAdLoadManager
            android.content.Context r1 = r6.getContext()
            com.tkay.core.common.b.a r2 = r6.adLoadListener
            com.tkay.core.common.b.b r3 = r6.mAdSourceEventListener
            java.util.Map<java.lang.String, java.lang.Object> r4 = r6.mTKExtraMap
            r0.a(r1, r2, r3, r4)
            return
    }

    public void setAdListener(com.tkay.nativead.api.TYNativeNetworkListener r1) {
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
}
