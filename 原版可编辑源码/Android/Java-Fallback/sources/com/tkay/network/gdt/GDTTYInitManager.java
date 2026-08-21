package com.tkay.network.gdt;

public class GDTTYInitManager extends com.tkay.core.api.TYInitMediation {
    public static final java.lang.String TAG = null;
    private static volatile com.tkay.network.gdt.GDTTYInitManager b;
    int a;
    private java.util.Map<java.lang.String, java.lang.ref.WeakReference> c;
    private java.util.Map<java.lang.String, com.qq.e.ads.rewardvideo.RewardVideoAD> d;
    private java.util.Map<java.lang.String, com.qq.e.ads.interstitial2.UnifiedInterstitialAD> e;
    private boolean f;
    private java.lang.String g;
    private final java.lang.Object h;


    static {
            java.lang.Class<com.tkay.network.gdt.GDTTYInitManager> r0 = com.tkay.network.gdt.GDTTYInitManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.gdt.GDTTYInitManager.TAG = r0
            return
    }

    private GDTTYInitManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.e = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.h = r0
            r0 = 0
            r1.a = r0
            return
    }

    protected static int a(android.content.Context r1, float r2) {
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            r0 = 0
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1065353216(0x3f800000, float:1.0)
        L11:
            float r2 = r2 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    protected static com.qq.e.comm.constants.LoadAdParams a(java.util.Map<java.lang.String, java.lang.Object> r2) {
            com.qq.e.comm.constants.LoadAdParams r0 = new com.qq.e.comm.constants.LoadAdParams
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            a(r1, r2)
            r0.setDevExtra(r1)
            return r0
    }

    static java.lang.Object a(com.tkay.network.gdt.GDTTYInitManager r0) {
            java.lang.Object r0 = r0.h
            return r0
    }

    static void a(com.tkay.network.gdt.GDTTYInitManager r0, java.lang.Runnable r1) {
            r0.runOnThreadPool(r1)
            return
    }

    protected static void a(java.util.Map r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            java.lang.String r0 = "tkay_stk_info"
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "staIn"
            java.lang.String r2 = ""
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2d
            goto L12
        L11:
            r0 = r2
        L12:
            r3.put(r1, r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "meSrc"
            java.lang.String r1 = "299"
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "tkay_mediation_wf_id"
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = "thrmei"
            if (r4 == 0) goto L2a
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L2d
        L2a:
            r3.put(r0, r2)     // Catch: java.lang.Exception -> L2d
        L2d:
            return
    }

    private void c() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r3.c     // Catch: java.lang.Throwable -> L2c
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
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r3.c     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            return
    }

    public static com.tkay.network.gdt.GDTTYInitManager getInstance() {
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.gdt.GDTTYInitManager> r0 = com.tkay.network.gdt.GDTTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.gdt.GDTTYInitManager r1 = com.tkay.network.gdt.GDTTYInitManager.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.gdt.GDTTYInitManager r1 = new com.tkay.network.gdt.GDTTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.gdt.GDTTYInitManager.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.b
            return r0
    }

    protected final void a() {
            r1 = this;
            java.util.Map<java.lang.String, com.qq.e.ads.rewardvideo.RewardVideoAD> r0 = r1.d
            r0.clear()
            return
    }

    final void a(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.TYBidRequestInfoListener r6) {
            r2 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = getInstance()
            com.tkay.network.gdt.GDTTYInitManager$1 r1 = new com.tkay.network.gdt.GDTTYInitManager$1
            r1.<init>(r2, r4, r5, r6)
            r0.initSDK(r3, r4, r1)
            return
    }

    protected final void a(java.lang.String r2, com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.qq.e.ads.interstitial2.UnifiedInterstitialAD> r0 = r1.e
            r0.clear()
            java.util.Map<java.lang.String, com.qq.e.ads.interstitial2.UnifiedInterstitialAD> r0 = r1.e
            r0.put(r2, r3)
            return
    }

    protected final void a(java.lang.String r2, com.qq.e.ads.rewardvideo.RewardVideoAD r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.qq.e.ads.rewardvideo.RewardVideoAD> r0 = r1.d
            r0.clear()
            java.util.Map<java.lang.String, com.qq.e.ads.rewardvideo.RewardVideoAD> r0 = r1.d
            r0.put(r2, r3)
            return
    }

    protected final void a(java.lang.String r2, java.lang.ref.WeakReference r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r1.c     // Catch: java.lang.Throwable -> L5
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    protected final void b() {
            r1 = this;
            java.util.Map<java.lang.String, com.qq.e.ads.interstitial2.UnifiedInterstitialAD> r0 = r1.e
            r0.clear()
            return
    }

    @Override
    public java.util.List getActivityStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.qq.e.ads.ADActivity"
            r0.add(r1)
            java.lang.String r1 = "com.qq.e.ads.PortraitADActivity"
            r0.add(r1)
            java.lang.String r1 = "com.qq.e.ads.LandscapeADActivity"
            r0.add(r1)
            java.lang.String r1 = "com.qq.e.ads.RewardvideoPortraitADActivity"
            r0.add(r1)
            java.lang.String r1 = "com.qq.e.ads.RewardvideoLandscapeADActivity"
            r0.add(r1)
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Tencent"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.qq.e.ads.ADActivity"
            return r0
    }

    @Override
    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.network.gdt.GDTTYConst.getNetworkVersion()
            return r0
    }

    @Override
    public java.util.List getServiceStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.qq.e.comm.DownloadService"
            r0.add(r1)
            return r0
    }

    public synchronized void initSDK(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.initSDK(r2, r3, r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void initSDK(android.content.Context r7, java.util.Map<java.lang.String, java.lang.Object> r8, com.tkay.core.api.MediationInitCallback r9) {
            r6 = this;
            monitor-enter(r6)
            int r0 = com.tkay.core.api.TYSDK.getPersionalizedAdStatus()     // Catch: java.lang.Throwable -> L7
            r6.a = r0     // Catch: java.lang.Throwable -> L7
        L7:
            int r0 = r6.a     // Catch: java.lang.Throwable -> L76
            r1 = 2
            r2 = 0
            r3 = 1
            if (r0 != r1) goto L12
            com.qq.e.comm.managers.setting.GlobalSetting.setPersonalizedState(r3)     // Catch: java.lang.Throwable -> L76
            goto L15
        L12:
            com.qq.e.comm.managers.setting.GlobalSetting.setPersonalizedState(r2)     // Catch: java.lang.Throwable -> L76
        L15:
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L76
            if (r0 == 0) goto L32
            java.lang.String r0 = com.tkay.network.gdt.GDTTYInitManager.TAG     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "GlobalSetting.getPersonalizedState():"
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.Integer r4 = com.qq.e.comm.managers.setting.GlobalSetting.getPersonalizedState()     // Catch: java.lang.Throwable -> L76
            r1.append(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L76
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L76
        L32:
            r6.c()     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "app_id"
            java.lang.String r0 = getStringFromMap(r8, r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = "tkay_local"
            boolean r1 = r8.containsKey(r1)     // Catch: java.lang.Throwable -> L76
            if (r1 == 0) goto L46
            r6.g = r0     // Catch: java.lang.Throwable -> L76
            goto L62
        L46:
            java.lang.String r1 = r6.g     // Catch: java.lang.Throwable -> L76
            if (r1 == 0) goto L62
            java.lang.String r1 = r6.g     // Catch: java.lang.Throwable -> L76
            boolean r1 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Throwable -> L76
            if (r1 != 0) goto L62
            java.lang.String r1 = r6.getNetworkName()     // Catch: java.lang.Throwable -> L76
            java.lang.String[] r4 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r6.g     // Catch: java.lang.Throwable -> L76
            r4[r2] = r5     // Catch: java.lang.Throwable -> L76
            r6.checkToSaveInitData(r1, r8, r4)     // Catch: java.lang.Throwable -> L76
            r8 = 0
            r6.g = r8     // Catch: java.lang.Throwable -> L76
        L62:
            boolean r8 = r6.f     // Catch: java.lang.Throwable -> L76
            if (r8 != 0) goto L6f
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Throwable -> L76
            com.qq.e.comm.managers.GDTAdSdk.init(r7, r0)     // Catch: java.lang.Throwable -> L76
            r6.f = r3     // Catch: java.lang.Throwable -> L76
        L6f:
            if (r9 == 0) goto L74
            r9.onSuccess()     // Catch: java.lang.Throwable -> L76
        L74:
            monitor-exit(r6)
            return
        L76:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public void setGDTTYCustomController(com.tkay.network.gdt.GDTTYCustomController r1) {
            r0 = this;
            if (r1 == 0) goto L9
            boolean r1 = r1.getAgreePrivacyStrategy()
            com.qq.e.comm.managers.setting.GlobalSetting.setAgreePrivacyStrategy(r1)
        L9:
            return
    }
}
