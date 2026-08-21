package com.tkay.network.sigmob;

public class SigmobTYInitManager extends com.tkay.core.api.TYInitMediation {
    public static final java.lang.String SIGMOB_CURRENCY = "USD";
    public static final java.lang.String TAG = null;
    private static volatile com.tkay.network.sigmob.SigmobTYInitManager j;
    private static final java.util.Map<java.lang.Object, java.lang.String> k = null;
    final int a;
    final int b;
    final int c;
    int d;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> e;
    private boolean f;
    private final java.lang.Object g;
    private java.util.List<com.tkay.core.api.MediationInitCallback> h;
    private int i;


    interface a {
        void onError(java.lang.String r1);

        void onSuccess();
    }

    static {
            java.lang.Class<com.tkay.network.sigmob.SigmobTYInitManager> r0 = com.tkay.network.sigmob.SigmobTYInitManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.sigmob.SigmobTYInitManager.TAG = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 2
            r0.<init>(r1)
            com.tkay.network.sigmob.SigmobTYInitManager.k = r0
            return
    }

    private SigmobTYInitManager() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r1 = 1
            r2.b = r1
            r1 = 2
            r2.c = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r2.e = r1
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r2.g = r1
            r2.i = r0
            return
    }

    private void a() {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> r0 = r3.e     // Catch: java.lang.Throwable -> L2c
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Throwable -> L2c
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2c
            if (r2 != 0) goto La
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> r2 = r3.e     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            return
    }

    private void a(com.sigmob.windad.WindAds r3) {
            r2 = this;
            int r0 = r2.d
            r1 = 2
            if (r0 == r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            r3.setPersonalizedAdvertisingOn(r0)
            boolean r3 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r3 == 0) goto L20
            java.lang.String r3 = com.tkay.network.sigmob.SigmobTYInitManager.TAG
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "setPersonalizedAdvertisingOn:"
            java.lang.String r0 = r1.concat(r0)
            android.util.Log.i(r3, r0)
        L20:
            return
    }

    static void a(com.tkay.network.sigmob.SigmobTYInitManager r0, java.lang.Runnable r1) {
            r0.runOnThreadPool(r1)
            return
    }

    private void a(java.lang.String r2, java.lang.ref.WeakReference r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> r0 = r1.e     // Catch: java.lang.Throwable -> L5
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    private void a(boolean r6, java.lang.String r7) {
            r5 = this;
            java.lang.Object r0 = r5.g
            monitor-enter(r0)
            java.util.List<com.tkay.core.api.MediationInitCallback> r1 = r5.h     // Catch: java.lang.Throwable -> L2c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2c
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L23
            java.util.List<com.tkay.core.api.MediationInitCallback> r4 = r5.h     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L2c
            com.tkay.core.api.MediationInitCallback r4 = (com.tkay.core.api.MediationInitCallback) r4     // Catch: java.lang.Throwable -> L2c
            if (r4 == 0) goto L20
            if (r6 == 0) goto L1d
            r4.onSuccess()     // Catch: java.lang.Throwable -> L2c
            goto L20
        L1d:
            r4.onFail(r7)     // Catch: java.lang.Throwable -> L2c
        L20:
            int r3 = r3 + 1
            goto Lb
        L23:
            java.util.List<com.tkay.core.api.MediationInitCallback> r6 = r5.h     // Catch: java.lang.Throwable -> L2c
            r6.clear()     // Catch: java.lang.Throwable -> L2c
            r5.f = r2     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return
        L2c:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    private void b(com.sigmob.windad.WindAds r5) {
            r4 = this;
            int r0 = r4.i
            if (r0 == 0) goto L2c
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            r5.setAdult(r0)
            boolean r5 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r5 == 0) goto L2c
            java.lang.String r5 = com.tkay.network.sigmob.SigmobTYInitManager.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "setIsAdult:"
            r0.<init>(r3)
            int r3 = r4.i
            if (r3 != r2) goto L22
            r1 = r2
        L22:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r5, r0)
        L2c:
            return
    }

    public static int getEcpmInt(java.lang.Object r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.util.Map<java.lang.Object, java.lang.String> r1 = com.tkay.network.sigmob.SigmobTYInitManager.k
            java.lang.Object r2 = r1.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L13
            return r0
        L13:
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L18
            return r2
        L18:
            return r0
    }

    public static com.tkay.network.sigmob.SigmobTYInitManager getInstance() {
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.j
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.sigmob.SigmobTYInitManager> r0 = com.tkay.network.sigmob.SigmobTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.sigmob.SigmobTYInitManager r1 = com.tkay.network.sigmob.SigmobTYInitManager.j     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.sigmob.SigmobTYInitManager r1 = new com.tkay.network.sigmob.SigmobTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.sigmob.SigmobTYInitManager.j = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.sigmob.SigmobTYInitManager r0 = com.tkay.network.sigmob.SigmobTYInitManager.j
            return r0
    }

    public static void onAdLoadError(java.lang.String r0, java.lang.String r1, boolean r2, com.tkay.core.api.TYBiddingListener r3, com.tkay.core.api.TYCustomLoadListener r4) {
            if (r2 == 0) goto Ld
            if (r3 == 0) goto Lc
            com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.fail(r1)
            r1 = 0
            r3.onC2SBiddingResultWithCache(r0, r1)
        Lc:
            return
        Ld:
            if (r4 == 0) goto L12
            r4.onAdLoadError(r0, r1)
        L12:
            return
    }

    public static void onC2SBiddingResultWithCache(java.lang.String r6, java.lang.String r7, com.tkay.core.api.TYBiddingListener r8, java.lang.Object r9, com.tkay.core.api.BaseAd r10) {
            java.lang.String r7 = "ecpm is null"
            java.lang.String r0 = ""
            if (r9 == 0) goto L11
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L11
            java.util.Map<java.lang.Object, java.lang.String> r1 = com.tkay.network.sigmob.SigmobTYInitManager.k
            r1.put(r9, r6)
        L11:
            r1 = 0
            r3 = 0
            r4 = 1
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L28
            if (r5 != 0) goto L24
            double r6 = java.lang.Double.parseDouble(r6)     // Catch: java.lang.Exception -> L28
            r0 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r1 = r6 / r0
            goto L2b
        L24:
            onAdLoadError(r0, r7, r4, r8, r3)     // Catch: java.lang.Exception -> L28
            goto L2b
        L28:
            onAdLoadError(r0, r7, r4, r8, r3)
        L2b:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            long r3 = java.lang.System.currentTimeMillis()
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.tkay.network.sigmob.SigmobTYBiddingNotice r7 = new com.tkay.network.sigmob.SigmobTYBiddingNotice
            r7.<init>(r9)
            com.tkay.core.api.TYAdConst$CURRENCY r9 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            com.tkay.core.api.TYBiddingResult r6 = com.tkay.core.api.TYBiddingResult.success(r1, r6, r7, r9)
            r8.onC2SBiddingResultWithCache(r6, r10)
            return
    }

    final void a(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.TYBidRequestInfoListener r6) {
            r2 = this;
            com.tkay.network.sigmob.SigmobTYInitManager r0 = getInstance()
            com.tkay.network.sigmob.SigmobTYInitManager$1 r1 = new com.tkay.network.sigmob.SigmobTYInitManager$1
            r1.<init>(r2, r4, r5, r6)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public java.util.List getActivityStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.sigmob.sdk.base.common.AdActivity"
            r0.add(r1)
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Sigmob"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.sigmob.windad.WindAds"
            return r0
    }

    @Override
    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.network.sigmob.SigmobTYConst.getNetworkVersion()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Boolean> getPluginClassStatus() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            java.lang.String r2 = "implementation 'com.android.support:localbroadcastmanager:+'"
            r0.put(r2, r1)
            java.lang.Class<android.support.v4.content.LocalBroadcastManager> r1 = android.support.v4.content.LocalBroadcastManager.class
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L14
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L14
            goto L18
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            return r0
    }

    @Override
    public java.util.List getProviderStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.sigmob.sdk.SigmobFileProvider"
            r0.add(r1)
            return r0
    }

    public void initSDK(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r1 = this;
            r0 = 0
            r1.initSDK(r2, r3, r0)
            return
    }

    @Override
    public void initSDK(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.MediationInitCallback r6) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> r0 = r3.e     // Catch: java.lang.Throwable -> L2c
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Throwable -> L2c
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2c
            if (r2 != 0) goto La
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference> r2 = r3.e     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            int r0 = com.tkay.core.api.TYSDK.getPersionalizedAdStatus()     // Catch: java.lang.Throwable -> L32
            r3.d = r0     // Catch: java.lang.Throwable -> L32
        L32:
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            if (r0 == 0) goto L4a
            boolean r1 = r0.isInit()
            if (r1 == 0) goto L4a
            r3.a(r0)
            r3.b(r0)
            if (r6 == 0) goto L49
            r6.onSuccess()
        L49:
            return
        L4a:
            java.lang.Object r1 = r3.g
            monitor-enter(r1)
            boolean r2 = r3.f     // Catch: java.lang.Throwable -> La0
            if (r2 == 0) goto L5a
            if (r6 == 0) goto L58
            java.util.List<com.tkay.core.api.MediationInitCallback> r4 = r3.h     // Catch: java.lang.Throwable -> La0
            r4.add(r6)     // Catch: java.lang.Throwable -> La0
        L58:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La0
            return
        L5a:
            java.util.List<com.tkay.core.api.MediationInitCallback> r2 = r3.h     // Catch: java.lang.Throwable -> La0
            if (r2 != 0) goto L65
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La0
            r2.<init>()     // Catch: java.lang.Throwable -> La0
            r3.h = r2     // Catch: java.lang.Throwable -> La0
        L65:
            r2 = 1
            r3.f = r2     // Catch: java.lang.Throwable -> La0
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La0
            java.util.List<com.tkay.core.api.MediationInitCallback> r1 = r3.h
            if (r1 == 0) goto L70
            r1.add(r6)
        L70:
            java.lang.String r6 = "app_id"
            java.lang.String r6 = getStringFromMap(r5, r6)
            java.lang.String r1 = "app_key"
            java.lang.String r5 = getStringFromMap(r5, r1)
            boolean r1 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            r0.setDebugEnable(r1)
            com.sigmob.windad.WindAdOptions r1 = new com.sigmob.windad.WindAdOptions
            r1.<init>(r6, r5)
            boolean r4 = r0.startWithOptions(r4, r1)
            if (r4 == 0) goto L99
            r3.a(r0)
            r3.b(r0)
            r4 = 0
            r3.a(r2, r4)
            return
        L99:
            r4 = 0
            java.lang.String r5 = "Sigmob init failed"
            r3.a(r4, r5)
            return
        La0:
            r4 = move-exception
            monitor-exit(r1)
            throw r4
    }

    public void setIsAdult(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r1 = 1
            goto L5
        L4:
            r1 = 2
        L5:
            r0.i = r1
            return
    }
}
