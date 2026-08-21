package com.tkay.network.mintegral;

public class MintegralTYInitManager extends com.tkay.core.api.TYInitMediation {
    public static final java.lang.String TAG = null;
    private static volatile com.tkay.network.mintegral.MintegralTYInitManager g;
    int a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private final android.os.Handler f;
    private java.util.Map<java.lang.String, java.lang.ref.WeakReference> h;
    private com.tkay.network.mintegral.MintegralTYCustomController i;


    final class 2 implements android.app.Application.ActivityLifecycleCallbacks {
        final com.tkay.network.mintegral.MintegralTYInitManager a;

        2(com.tkay.network.mintegral.MintegralTYInitManager r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityDestroyed(android.app.Activity r1) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityPaused(android.app.Activity r1) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityResumed(android.app.Activity r3) {
                r2 = this;
                com.mbridge.msdk.system.a r0 = com.mbridge.msdk.out.MBridgeSDKFactory.getMBridgeSDK()
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r3)
                r0.updateDialogWeakActivity(r1)
                return
        }

        @Override
        public final void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityStarted(android.app.Activity r1) {
                r0 = this;
                return
        }

        @Override
        public final void onActivityStopped(android.app.Activity r1) {
                r0 = this;
                return
        }
    }


    public interface InitCallback {
        void onError(java.lang.Throwable r1);

        void onSuccess();
    }

    static {
            java.lang.Class<com.tkay.network.mintegral.MintegralTYInitManager> r0 = com.tkay.network.mintegral.MintegralTYInitManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.mintegral.MintegralTYInitManager.TAG = r0
            return
    }

    private MintegralTYInitManager() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.h = r0
            r0 = 0
            r2.a = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.f = r0
            return
    }

    static java.lang.String a(com.tkay.network.mintegral.MintegralTYInitManager r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    static java.lang.String a(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.String r1) {
            r0.d = r1
            return r1
    }

    private void a() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r3.h     // Catch: java.lang.Throwable -> L2c
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
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r3.h     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            return
    }

    private void a(android.content.Context r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto Le
            android.app.Application r2 = (android.app.Application) r2
            com.tkay.network.mintegral.MintegralTYInitManager$2 r0 = new com.tkay.network.mintegral.MintegralTYInitManager$2
            r0.<init>(r1)
            r2.registerActivityLifecycleCallbacks(r0)
        Le:
            return
    }

    private void a(com.mbridge.msdk.MBridgeSDK r3) {
            r2 = this;
            int r0 = r2.a
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            r3.setDoNotTrackStatus(r0)
            boolean r3 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r3 == 0) goto L20
            java.lang.String r3 = com.tkay.network.mintegral.MintegralTYInitManager.TAG
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "setDoNotTrackStatus:"
            java.lang.String r0 = r1.concat(r0)
            android.util.Log.i(r3, r0)
        L20:
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYInitManager r1, android.content.Context r2) {
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto Le
            android.app.Application r2 = (android.app.Application) r2
            com.tkay.network.mintegral.MintegralTYInitManager$2 r0 = new com.tkay.network.mintegral.MintegralTYInitManager$2
            r0.<init>(r1)
            r2.registerActivityLifecycleCallbacks(r0)
        Le:
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYInitManager r1, com.mbridge.msdk.MBridgeSDK r2) {
            int r1 = r1.a
            r0 = 2
            if (r1 != r0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            r2.setDoNotTrackStatus(r1)
            boolean r2 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r2 == 0) goto L20
            java.lang.String r2 = com.tkay.network.mintegral.MintegralTYInitManager.TAG
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "setDoNotTrackStatus:"
            java.lang.String r1 = r0.concat(r1)
            android.util.Log.i(r2, r1)
        L20:
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.Runnable r1) {
            r0.runOnThreadPool(r1)
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.String r1, java.util.Map r2, java.lang.String[] r3) {
            r0.checkToSaveInitData(r1, r2, r3)
            return
    }

    static java.lang.String b(com.tkay.network.mintegral.MintegralTYInitManager r0) {
            java.lang.String r0 = r0.e
            return r0
    }

    static java.lang.String b(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.String r1) {
            r0.e = r1
            return r1
    }

    static java.lang.String c(com.tkay.network.mintegral.MintegralTYInitManager r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static java.lang.String c(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.String r1) {
            r0.b = r1
            return r1
    }

    static java.lang.String d(com.tkay.network.mintegral.MintegralTYInitManager r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static java.lang.String d(com.tkay.network.mintegral.MintegralTYInitManager r0, java.lang.String r1) {
            r0.c = r1
            return r1
    }

    static com.tkay.network.mintegral.MintegralTYCustomController e(com.tkay.network.mintegral.MintegralTYInitManager r0) {
            com.tkay.network.mintegral.MintegralTYCustomController r0 = r0.i
            return r0
    }

    public static com.tkay.network.mintegral.MintegralTYInitManager getInstance() {
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.g
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.mintegral.MintegralTYInitManager> r0 = com.tkay.network.mintegral.MintegralTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.mintegral.MintegralTYInitManager r1 = new com.tkay.network.mintegral.MintegralTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.mintegral.MintegralTYInitManager.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.g
            return r0
    }

    public static java.lang.String getStringByMap(java.util.Map<java.lang.String, java.lang.Object> r2, java.lang.String r3) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L1d
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto Lb
            goto L1d
        Lb:
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L1d
            boolean r3 = r2 instanceof java.lang.String     // Catch: java.lang.Exception -> L1d
            if (r3 == 0) goto L16
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L1d
            return r2
        L16:
            if (r2 == 0) goto L1d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L1d
            return r2
        L1d:
            return r0
    }

    public static void printLog(java.lang.String r1) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto Lb
            java.lang.String r0 = "MintegralTYInitManager"
            android.util.Log.d(r0, r1)
        Lb:
            return
    }

    final void a(android.content.Context r10, java.util.Map<java.lang.String, java.lang.Object> r11, java.util.Map<java.lang.String, java.lang.Object> r12, int r13, com.tkay.core.api.TYBidRequestInfoListener r14) {
            r9 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = getInstance()
            com.tkay.network.mintegral.MintegralTYInitManager$3 r8 = new com.tkay.network.mintegral.MintegralTYInitManager$3
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r13
            r6 = r12
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.initSDK(r10, r11, r8)
            return
    }

    protected final void a(java.lang.String r2, java.lang.ref.WeakReference r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r1.h     // Catch: java.lang.Throwable -> L5
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Mintegral"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.mbridge.msdk.MBridgeSDK"
            return r0
    }

    @Override
    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.network.mintegral.MintegralTYConst.getNetworkVersion()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Boolean> getPluginClassStatus() {
            r16 = this;
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r2 = "mbridge_newinterstitial.aar"
            r1.put(r2, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r3 = "mbridge_mbbanner.aar"
            r1.put(r3, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r4 = "mbridge_mbbid.aar"
            r1.put(r4, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r5 = "mbridge_mbjscommon.aar"
            r1.put(r5, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r6 = "mbridge_mbnative.aar"
            r1.put(r6, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r7 = "mbridge_nativeex.aar"
            r1.put(r7, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r8 = "mbridge_playercommon.aar"
            r1.put(r8, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r9 = "mbridge_reward.aar"
            r1.put(r9, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r10 = "mbridge_videocommon.aar"
            r1.put(r10, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r11 = "mbridge_videojs.aar"
            r1.put(r11, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r12 = "mbridge_mbnativeadvanced.aar"
            r1.put(r12, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r13 = "mbridge_mbsplash.aar"
            r1.put(r13, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r14 = "mbridge_chinasame.aar"
            r1.put(r14, r0)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r15 = "recyclerview-*.aar"
            r1.put(r15, r0)
            java.lang.Class<com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler> r0 = com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L6f
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L6f
            goto L73
        L6f:
            r0 = move-exception
            r0.printStackTrace()
        L73:
            java.lang.Class<com.mbridge.msdk.mbbanner.view.MBBannerWebView> r0 = com.mbridge.msdk.mbbanner.view.MBBannerWebView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L7b
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L7b
            goto L7f
        L7b:
            r0 = move-exception
            r0.printStackTrace()
        L7f:
            java.lang.Class<com.mbridge.msdk.mbbid.out.BidManager> r0 = com.mbridge.msdk.mbbid.out.BidManager.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L87
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L87
            goto L8b
        L87:
            r0 = move-exception
            r0.printStackTrace()
        L8b:
            java.lang.Class<com.mbridge.msdk.mbjscommon.base.BaseWebView> r0 = com.mbridge.msdk.mbjscommon.base.BaseWebView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L93
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> L93
            goto L97
        L93:
            r0 = move-exception
            r0.printStackTrace()
        L97:
            java.lang.Class<com.mbridge.msdk.mbnative.controller.NativeController> r0 = com.mbridge.msdk.mbnative.controller.NativeController.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L9f
            r1.put(r6, r0)     // Catch: java.lang.Throwable -> L9f
            goto La3
        L9f:
            r0 = move-exception
            r0.printStackTrace()
        La3:
            java.lang.Class<com.mbridge.msdk.nativex.view.MBMediaView> r0 = com.mbridge.msdk.nativex.view.MBMediaView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lab
            r1.put(r7, r0)     // Catch: java.lang.Throwable -> Lab
            goto Laf
        Lab:
            r0 = move-exception
            r0.printStackTrace()
        Laf:
            java.lang.Class<com.mbridge.msdk.playercommon.PlayerView> r0 = com.mbridge.msdk.playercommon.PlayerView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lb7
            r1.put(r8, r0)     // Catch: java.lang.Throwable -> Lb7
            goto Lbb
        Lb7:
            r0 = move-exception
            r0.printStackTrace()
        Lbb:
            java.lang.Class<com.mbridge.msdk.reward.player.MBRewardVideoActivity> r0 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lc3
            r1.put(r9, r0)     // Catch: java.lang.Throwable -> Lc3
            goto Lc7
        Lc3:
            r0 = move-exception
            r0.printStackTrace()
        Lc7:
            java.lang.Class<com.mbridge.msdk.video.js.bridge.BaseRewardJs> r0 = com.mbridge.msdk.video.js.bridge.BaseRewardJs.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lcf
            r1.put(r10, r0)     // Catch: java.lang.Throwable -> Lcf
            goto Ld3
        Lcf:
            r0 = move-exception
            r0.printStackTrace()
        Ld3:
            java.lang.Class<com.mbridge.msdk.video.module.MBridgeBaseView> r0 = com.mbridge.msdk.video.module.MBridgeBaseView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Ldb
            r1.put(r11, r0)     // Catch: java.lang.Throwable -> Ldb
            goto Ldf
        Ldb:
            r0 = move-exception
            r0.printStackTrace()
        Ldf:
            java.lang.Class<com.mbridge.msdk.advanced.view.MBNativeAdvancedView> r0 = com.mbridge.msdk.advanced.view.MBNativeAdvancedView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Le7
            r1.put(r12, r0)     // Catch: java.lang.Throwable -> Le7
            goto Leb
        Le7:
            r0 = move-exception
            r0.printStackTrace()
        Leb:
            java.lang.Class<com.mbridge.msdk.splash.view.MBSplashView> r0 = com.mbridge.msdk.splash.view.MBSplashView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lf3
            r1.put(r13, r0)     // Catch: java.lang.Throwable -> Lf3
            goto Lf7
        Lf3:
            r0 = move-exception
            r0.printStackTrace()
        Lf7:
            java.lang.Class<com.mbridge.msdk.mbdownload.manager.ADownloadManager> r0 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lff
            r1.put(r14, r0)     // Catch: java.lang.Throwable -> Lff
            goto L103
        Lff:
            r0 = move-exception
            r0.printStackTrace()
        L103:
            java.lang.Class<android.support.v7.widget.RecyclerView> r0 = android.support.v7.widget.RecyclerView.class
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L10b
            r1.put(r15, r0)     // Catch: java.lang.Throwable -> L10b
            goto L10f
        L10b:
            r0 = move-exception
            r0.printStackTrace()
        L10f:
            return r1
    }

    @Override
    public java.util.List getResourceStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "mbridge_reward_activity_video_templete"
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
    public synchronized void initSDK(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.MediationInitCallback r5) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L17
            int r0 = com.tkay.core.api.TYSDK.getPersionalizedAdStatus()     // Catch: java.lang.Throwable -> Lb
            r2.a = r0     // Catch: java.lang.Throwable -> Lb
        Lb:
            android.os.Handler r0 = r2.f     // Catch: java.lang.Throwable -> L17
            com.tkay.network.mintegral.MintegralTYInitManager$1 r1 = new com.tkay.network.mintegral.MintegralTYInitManager$1     // Catch: java.lang.Throwable -> L17
            r1.<init>(r2, r4, r3, r5)     // Catch: java.lang.Throwable -> L17
            r0.post(r1)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r2)
            return
        L17:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public void setCustomInfo(int r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = getStringByMap(r5, r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = "tp_info"
            java.lang.String r5 = getStringByMap(r5, r1)     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "setCustomInfo() >>> customData = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L33
            r1.append(r5)     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = " unitId = "
            r1.append(r2)     // Catch: java.lang.Exception -> L33
            r1.append(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L33
            printLog(r1)     // Catch: java.lang.Exception -> L33
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L2c
            return
        L2c:
            com.mbridge.msdk.out.CustomInfoManager r1 = com.mbridge.msdk.out.CustomInfoManager.getInstance()     // Catch: java.lang.Exception -> L33
            r1.setCustomInfo(r0, r4, r5)     // Catch: java.lang.Exception -> L33
        L33:
            return
    }

    public void setMintegralTYCustomerController(com.tkay.network.mintegral.MintegralTYCustomController r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.i = r1
        L4:
            return
    }
}
