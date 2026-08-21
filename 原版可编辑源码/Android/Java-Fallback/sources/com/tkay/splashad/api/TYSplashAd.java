package com.tkay.splashad.api;

public class TYSplashAd {
    public final int DEFAULT_SPLASH_TIMEOUT_TIME;
    final java.lang.String TAG;
    java.lang.ref.WeakReference<android.app.Activity> mActivityWeakRef;
    com.tkay.splashad.a.c mAdLoadManager;
    com.tkay.core.common.b.b mAdSourceEventListener;
    android.content.Context mContext;
    java.lang.String mDefaultAdSourceConfig;
    com.tkay.core.api.TYMediationRequestInfo mDefaultRequestInfo;
    com.tkay.core.api.TYAdSourceStatusListener mDeveloperStatusListener;
    com.tkay.core.api.TYEventInterface mDownloadListener;
    int mFetchAdTimeout;
    com.tkay.splashad.api.TYSplashAdListener mListener;
    java.lang.String mPlacementId;
    java.util.Map<java.lang.String, java.lang.Object> mTKExtraMap;

    class 1 implements java.lang.Runnable {
        final com.tkay.splashad.api.TYSplashAd this$0;
        final int val$loadType;

        class 1 extends com.tkay.splashad.a.b {
            boolean hasCacheWhenTimeout;
            final com.tkay.splashad.api.TYSplashAd.1 this$1;




            1(com.tkay.splashad.api.TYSplashAd.1 r1) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>()
                    r1 = 0
                    r0.hasCacheWhenTimeout = r1
                    return
            }

            @Override
            public void onAdLoaded(java.lang.String r2, boolean r3) {
                    r1 = this;
                    com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                    com.tkay.splashad.api.TYSplashAd$1$1$1 r0 = new com.tkay.splashad.api.TYSplashAd$1$1$1
                    r0.<init>(r1, r3)
                    r2.a(r0)
                    return
            }

            @Override
            public void onNoAdError(java.lang.String r2, com.tkay.core.api.AdError r3) {
                    r1 = this;
                    com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                    com.tkay.splashad.api.TYSplashAd$1$1$2 r0 = new com.tkay.splashad.api.TYSplashAd$1$1$2
                    r0.<init>(r1, r3)
                    r2.a(r0)
                    return
            }

            @Override
            public void onTimeout(java.lang.String r5) {
                    r4 = this;
                    com.tkay.splashad.api.TYSplashAd$1 r0 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r0 = r0.this$0
                    com.tkay.splashad.a.c r0 = r0.mAdLoadManager
                    com.tkay.splashad.api.TYSplashAd$1 r1 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r1 = r1.this$0
                    android.content.Context r1 = r1.mContext
                    com.tkay.splashad.api.TYSplashAd$1 r2 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r2 = r2.this$0
                    java.util.Map<java.lang.String, java.lang.Object> r2 = r2.mTKExtraMap
                    r3 = 0
                    com.tkay.core.common.f.a r0 = r0.a(r1, r3, r3, r2)
                    if (r0 == 0) goto L4b
                    r0 = 1
                    r4.hasCacheWhenTimeout = r0
                    com.tkay.splashad.api.TYSplashAd$1 r0 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r0 = r0.this$0
                    com.tkay.splashad.a.c r0 = r0.mAdLoadManager
                    com.tkay.core.common.h r5 = r0.c(r5)
                    if (r5 == 0) goto L4b
                    com.tkay.splashad.api.TYSplashAd$1 r0 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r0 = r0.this$0
                    java.lang.String r0 = r0.TAG
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder
                    java.lang.String r2 = "has cache when timeout: "
                    r1.<init>(r2)
                    com.tkay.splashad.api.TYSplashAd$1 r2 = r4.this$1
                    com.tkay.splashad.api.TYSplashAd r2 = r2.this$0
                    java.lang.String r2 = r2.mPlacementId
                    r1.append(r2)
                    java.lang.String r1 = r1.toString()
                    android.util.Log.i(r0, r1)
                    r0 = 9
                    r5.b(r0)
                    return
                L4b:
                    com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
                    com.tkay.splashad.api.TYSplashAd$1$1$3 r0 = new com.tkay.splashad.api.TYSplashAd$1$1$3
                    r0.<init>(r4)
                    r5.a(r0)
                    return
            }
        }

        1(com.tkay.splashad.api.TYSplashAd r1, int r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$loadType = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r10 = this;
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                int r0 = r0.mFetchAdTimeout
                if (r0 > 0) goto L2c
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                android.content.Context r0 = r0.mContext
                com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                java.lang.String r1 = r1.o()
                com.tkay.core.c.a r0 = r0.b(r1)
                long r1 = r0.V()
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 != 0) goto L27
                r0 = 5000(0x1388, float:7.006E-42)
                goto L2c
            L27:
                long r0 = r0.V()
                int r0 = (int) r0
            L2c:
                r6 = r0
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                java.lang.ref.WeakReference<android.app.Activity> r0 = r0.mActivityWeakRef
                r1 = 0
                if (r0 == 0) goto L3f
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                java.lang.ref.WeakReference<android.app.Activity> r0 = r0.mActivityWeakRef
                java.lang.Object r0 = r0.get()
                android.app.Activity r0 = (android.app.Activity) r0
                goto L40
            L3f:
                r0 = r1
            L40:
                int r2 = r10.val$loadType
                if (r2 != 0) goto L4c
                com.tkay.splashad.api.TYSplashAd$1$1 r1 = new com.tkay.splashad.api.TYSplashAd$1$1
                r1.<init>(r10)
                r1.startCountDown(r6)
            L4c:
                r5 = r1
                com.tkay.splashad.api.TYSplashAd r1 = r10.this$0
                com.tkay.splashad.a.c r1 = r1.mAdLoadManager
                if (r0 == 0) goto L54
                goto L58
            L54:
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                android.content.Context r0 = r0.mContext
            L58:
                r2 = r0
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                com.tkay.core.api.TYMediationRequestInfo r3 = r0.mDefaultRequestInfo
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                java.lang.String r4 = r0.mDefaultAdSourceConfig
                int r7 = r10.val$loadType
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                com.tkay.core.common.b.b r8 = r0.mAdSourceEventListener
                com.tkay.splashad.api.TYSplashAd r0 = r10.this$0
                java.util.Map<java.lang.String, java.lang.Object> r9 = r0.mTKExtraMap
                r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
                return
        }
    }


    @java.lang.Deprecated
    public TYSplashAd(android.content.Context r7, java.lang.String r8, com.tkay.core.api.TYMediationRequestInfo r9, com.tkay.splashad.api.TYSplashAdListener r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public TYSplashAd(android.content.Context r2, java.lang.String r3, com.tkay.core.api.TYMediationRequestInfo r4, com.tkay.splashad.api.TYSplashAdListener r5, int r6) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.TAG = r0
            r0 = 5000(0x1388, float:7.006E-42)
            r1.DEFAULT_SPLASH_TIMEOUT_TIME = r0
            android.content.Context r0 = r2.getApplicationContext()
            r1.mContext = r0
            r1.mPlacementId = r3
            r1.mListener = r5
            r1.mDefaultRequestInfo = r4
            r1.mFetchAdTimeout = r6
            boolean r4 = r2 instanceof android.app.Activity
            if (r4 == 0) goto L2d
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference
            r5 = r2
            android.app.Activity r5 = (android.app.Activity) r5
            r4.<init>(r5)
            r1.mActivityWeakRef = r4
        L2d:
            com.tkay.core.api.TYMediationRequestInfo r4 = r1.mDefaultRequestInfo
            if (r4 == 0) goto L36
            java.lang.String r5 = "4"
            r4.setFormat(r5)
        L36:
            com.tkay.splashad.a.c r2 = com.tkay.splashad.a.c.a(r2, r3)
            r1.mAdLoadManager = r2
            return
    }

    public TYSplashAd(android.content.Context r7, java.lang.String r8, com.tkay.splashad.api.TYSplashAdListener r9) {
            r6 = this;
            r4 = 0
            java.lang.String r5 = ""
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public TYSplashAd(android.content.Context r2, java.lang.String r3, com.tkay.splashad.api.TYSplashAdListener r4, int r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.TAG = r0
            r0 = 5000(0x1388, float:7.006E-42)
            r1.DEFAULT_SPLASH_TIMEOUT_TIME = r0
            android.content.Context r0 = r2.getApplicationContext()
            r1.mContext = r0
            r1.mPlacementId = r3
            r1.mListener = r4
            r1.mDefaultAdSourceConfig = r6
            r1.mFetchAdTimeout = r5
            boolean r4 = r2 instanceof android.app.Activity
            if (r4 == 0) goto L2d
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference
            r5 = r2
            android.app.Activity r5 = (android.app.Activity) r5
            r4.<init>(r5)
            r1.mActivityWeakRef = r4
        L2d:
            com.tkay.core.api.TYMediationRequestInfo r4 = r1.mDefaultRequestInfo
            if (r4 == 0) goto L36
            java.lang.String r5 = "4"
            r4.setFormat(r5)
        L36:
            com.tkay.splashad.a.c r2 = com.tkay.splashad.a.c.a(r2, r3)
            r1.mAdLoadManager = r2
            return
    }

    public TYSplashAd(android.content.Context r7, java.lang.String r8, com.tkay.splashad.api.TYSplashAdListener r9, java.lang.String r10) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    static void access$000(com.tkay.splashad.api.TYSplashAd r0, int r1) {
            r0.loadAd(r1)
            return
    }

    @java.lang.Deprecated
    public static void checkSplashDefaultConfigList(android.content.Context r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2, r3)
            return
    }

    public static void entryAdScenario(java.lang.String r3, java.lang.String r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "4"
            r2 = 0
            r0.a(r3, r4, r1, r2)
            return
    }

    public static void entryAdScenario(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "4"
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
            com.tkay.splashad.a.c r0 = r3.mAdLoadManager
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

    private void loadAd(int r7) {
            r6 = this;
            java.lang.String r0 = r6.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.s
            java.lang.String r2 = com.tkay.core.common.b.f.i.w
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            r5 = 1
            com.tkay.core.common.l.n.a(r0, r1, r2, r3, r4, r5)
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.splashad.api.TYSplashAd$1 r1 = new com.tkay.splashad.api.TYSplashAd$1
            r1.<init>(r6, r7)
            r0.a(r1)
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
            java.lang.String r2 = com.tkay.core.common.b.f.i.s
            java.lang.String r3 = com.tkay.core.common.b.f.i.A
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
    }

    public java.util.List<com.tkay.core.api.TYAdInfo> checkValidAdCaches() {
            r2 = this;
            com.tkay.splashad.a.c r0 = r2.mAdLoadManager
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
            java.lang.String r2 = com.tkay.core.common.b.f.i.s
            java.lang.String r3 = com.tkay.core.common.b.f.i.z
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
    }

    public void loadAd() {
            r1 = this;
            r0 = 0
            r1.loadAd(r0)
            return
    }

    @java.lang.Deprecated
    public void onDestory() {
            r0 = this;
            return
    }

    public void setAdDownloadListener(com.tkay.core.api.TYEventInterface r1) {
            r0 = this;
            r0.mDownloadListener = r1
            return
    }

    public void setAdListener(com.tkay.splashad.api.TYSplashAdListener r1) {
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

    public void show(android.app.Activity r3, android.view.ViewGroup r4) {
            r2 = this;
            r0 = 0
            java.lang.String r1 = ""
            r2.show(r3, r4, r0, r1)
            return
    }

    public void show(android.app.Activity r2, android.view.ViewGroup r3, com.tkay.splashad.api.TYSplashSkipInfo r4) {
            r1 = this;
            java.lang.String r0 = ""
            r1.show(r2, r3, r4, r0)
            return
    }

    public void show(android.app.Activity r9, android.view.ViewGroup r10, com.tkay.splashad.api.TYSplashSkipInfo r11, java.lang.String r12) {
            r8 = this;
            java.lang.String r0 = r8.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.s
            java.lang.String r2 = com.tkay.core.common.b.f.i.y
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            com.tkay.core.common.l.n.b(r0, r1, r2, r3, r4)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L5a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L34
            goto L5a
        L34:
            if (r9 != 0) goto L3d
            java.lang.String r0 = r8.TAG
            java.lang.String r1 = "Splash Activity is null."
            android.util.Log.e(r0, r1)
        L3d:
            if (r10 != 0) goto L47
            java.lang.String r9 = r8.TAG
            java.lang.String r10 = "Splash Container is null."
            android.util.Log.e(r9, r10)
            return
        L47:
            com.tkay.splashad.api.TYSplashAd$2 r3 = new com.tkay.splashad.api.TYSplashAd$2
            r3.<init>(r8)
            com.tkay.splashad.a.c r0 = r8.mAdLoadManager
            com.tkay.core.api.TYEventInterface r4 = r8.mDownloadListener
            java.util.Map<java.lang.String, java.lang.Object> r7 = r8.mTKExtraMap
            r1 = r9
            r2 = r10
            r5 = r11
            r6 = r12
            r0.a(r1, r2, r3, r4, r5, r6, r7)
            return
        L5a:
            java.lang.String r9 = r8.TAG
            java.lang.String r10 = "SDK init error!"
            android.util.Log.e(r9, r10)
            return
    }

    public void show(android.app.Activity r2, android.view.ViewGroup r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = com.tkay.core.common.l.g.c(r4)
            if (r0 == 0) goto L7
            goto L9
        L7:
            java.lang.String r4 = ""
        L9:
            r0 = 0
            r1.show(r2, r3, r0, r4)
            return
    }
}
