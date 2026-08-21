package com.bytedance.android.openliveplugin;

public class LivePluginHelper {
    public static final java.lang.String LIVE_PLUGIN_PACKAGE_NAME = "com.byted.live.lite";
    private static boolean hasInitZeus;
    private static com.bytedance.android.live.base.api.IOuterLiveRoomService liveRoomService;
    private static java.util.ArrayList<com.bytedance.android.live.base.api.ILiveInitCallback> mLiveInitListeners;
    private static com.bytedance.android.openliveplugin.material.LiveInitMaterialManager materialManager;
    public static final java.util.concurrent.ScheduledExecutorService sExecutor = null;




    private static class DefaultThreadFactory implements java.util.concurrent.ThreadFactory {
        private final java.lang.ThreadGroup group;
        private final java.lang.String namePrefix;
        private final java.util.concurrent.atomic.AtomicInteger threadNumber;

        DefaultThreadFactory() {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.threadNumber = r0
                java.lang.ThreadGroup r0 = new java.lang.ThreadGroup
                java.lang.String r1 = "tt_live_group_pl_init"
                r0.<init>(r1)
                r2.group = r0
                java.lang.String r0 = "tt_live_thread_pl_init"
                r2.namePrefix = r0
                return
        }

        DefaultThreadFactory(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.threadNumber = r0
                java.lang.ThreadGroup r0 = new java.lang.ThreadGroup
                java.lang.String r1 = "tt_live_group_pl_init"
                r0.<init>(r1)
                r2.group = r0
                r2.namePrefix = r3
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.group
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r7.namePrefix
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.threadNumber
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2c
                r8 = 0
                r6.setDaemon(r8)
            L2c:
                int r8 = r6.getPriority()
                r0 = 10
                if (r8 == r0) goto L37
                r6.setPriority(r0)
            L37:
                return r6
        }
    }

    private static class LiveInitCallbackWrapper implements com.bytedance.android.live.base.api.ILiveInitCallback {
        public static com.bytedance.android.openliveplugin.LivePluginHelper.LiveInitCallbackWrapper INSTANCE;

        static {
                com.bytedance.android.openliveplugin.LivePluginHelper$LiveInitCallbackWrapper r0 = new com.bytedance.android.openliveplugin.LivePluginHelper$LiveInitCallbackWrapper
                r0.<init>()
                com.bytedance.android.openliveplugin.LivePluginHelper.LiveInitCallbackWrapper.INSTANCE = r0
                return
        }

        private LiveInitCallbackWrapper() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onLiveInitFinish() {
                r2 = this;
                com.bytedance.android.openliveplugin.LivePluginHelper.initLiveCommerce()
                java.util.ArrayList r0 = com.bytedance.android.openliveplugin.LivePluginHelper.access$000()
                java.util.Iterator r0 = r0.iterator()
            Lb:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1d
                java.lang.Object r1 = r0.next()
                com.bytedance.android.live.base.api.ILiveInitCallback r1 = (com.bytedance.android.live.base.api.ILiveInitCallback) r1
                if (r1 == 0) goto Lb
                r1.onLiveInitFinish()
                goto Lb
            L1d:
                return
        }
    }

    private static class LiveInitRunnable implements java.lang.Runnable {
        com.bytedance.android.live.base.api.ILiveHostContextParam.Builder builder;
        android.app.Application context;
        com.bytedance.android.live.base.api.ILiveInitCallback liveInitCallback;
        com.bytedance.android.openliveplugin.material.ConfigParams params;

        public LiveInitRunnable(android.app.Application r1, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r2, com.bytedance.android.openliveplugin.material.ConfigParams r3, com.bytedance.android.live.base.api.ILiveInitCallback r4) {
                r0 = this;
                r0.<init>()
                r0.context = r1
                r0.builder = r2
                r0.params = r3
                r0.liveInitCallback = r4
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                if (r0 == 0) goto L7a
                com.bytedance.android.openliveplugin.material.ConfigParams r1 = r3.params
                if (r1 == 0) goto L7a
                android.app.Application r1 = r3.context
                r0.setContext(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                com.bytedance.android.openliveplugin.material.ConfigParams r1 = r3.params
                long r1 = r1.webcastAppID
                int r1 = (int) r1
                r0.setAid(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                com.bytedance.android.openliveplugin.material.ConfigParams r1 = r3.params
                long r1 = r1.appID
                java.lang.String r1 = java.lang.String.valueOf(r1)
                r0.setGeneralAppId(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                com.bytedance.android.openliveplugin.material.ConfigParams r1 = r3.params
                long r1 = r1.ttsdkAppID
                java.lang.String r1 = java.lang.String.valueOf(r1)
                r0.setTtSDKAppId(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "file://"
                r1.append(r2)
                com.bytedance.android.openliveplugin.material.ConfigParams r2 = r3.params
                java.lang.String r2 = r2.ttSDKLicensePath
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.setTtSDKCertAssetsPath(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                com.bytedance.android.openliveplugin.material.ConfigParams r1 = r3.params
                java.lang.String r1 = r1.clientKey
                r0.setClientKey(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                java.lang.String r1 = "com.byted.live.lite"
                com.bytedance.pangle.plugin.Plugin r1 = com.bytedance.pangle.Zeus.getPlugin(r1)
                java.lang.String r1 = r1.getNativeLibraryDir()
                r0.setNativeLibraryDir(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                java.lang.String r1 = ""
                r0.setCjAppId(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                r0.setCjMerchantId(r1)
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r3.builder
                com.bytedance.android.live.base.api.ILiveHostContextParam r0 = r0.build()
                com.bytedance.android.live.base.api.ILiveInitCallback r1 = r3.liveInitCallback
                com.bytedance.android.openliveplugin.LivePluginHelper.initLivePlugin(r0, r1)
            L7a:
                return
        }
    }

    static {
            com.bytedance.android.openliveplugin.LivePluginHelper$DefaultThreadFactory r0 = new com.bytedance.android.openliveplugin.LivePluginHelper$DefaultThreadFactory
            r0.<init>()
            java.util.concurrent.ScheduledExecutorService r0 = java.util.concurrent.Executors.newSingleThreadScheduledExecutor(r0)
            com.bytedance.android.openliveplugin.LivePluginHelper.sExecutor = r0
            r0 = 0
            com.bytedance.android.openliveplugin.LivePluginHelper.hasInitZeus = r0
            return
    }

    public LivePluginHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.ArrayList access$000() {
            java.util.ArrayList<com.bytedance.android.live.base.api.ILiveInitCallback> r0 = com.bytedance.android.openliveplugin.LivePluginHelper.mLiveInitListeners
            return r0
    }

    static com.bytedance.android.openliveplugin.material.LiveInitMaterialManager access$100() {
            com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0 = com.bytedance.android.openliveplugin.LivePluginHelper.materialManager
            return r0
    }

    static void access$200(android.app.Application r0, java.lang.String r1, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r2, com.bytedance.android.live.base.api.ILiveInitCallback r3) {
            realInitLivePlugin(r0, r1, r2, r3)
            return
    }

    private static void adaptEventBus() {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = "com.bytedance.pangle.activity"
            r1[r2] = r3
            r2 = 1
            java.lang.String r3 = "com.bytedance.pangle.wrapper"
            r1[r2] = r3
            java.lang.String r2 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r3 = "tryAdaptEventBus"
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r2, r3, r0, r1)
            return
    }

    public static void addInitListener(com.bytedance.android.live.base.api.ILiveInitCallback r1) {
            java.util.ArrayList<com.bytedance.android.live.base.api.ILiveInitCallback> r0 = com.bytedance.android.openliveplugin.LivePluginHelper.mLiveInitListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.bytedance.android.openliveplugin.LivePluginHelper.mLiveInitListeners = r0
        Lb:
            com.bytedance.android.openliveplugin.LivePluginHelper$LiveInitCallbackWrapper r0 = com.bytedance.android.openliveplugin.LivePluginHelper.LiveInitCallbackWrapper.INSTANCE
            if (r1 != r0) goto L10
            return
        L10:
            java.util.ArrayList<com.bytedance.android.live.base.api.ILiveInitCallback> r0 = com.bytedance.android.openliveplugin.LivePluginHelper.mLiveInitListeners
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L19
            return
        L19:
            if (r1 == 0) goto L20
            java.util.ArrayList<com.bytedance.android.live.base.api.ILiveInitCallback> r0 = com.bytedance.android.openliveplugin.LivePluginHelper.mLiveInitListeners
            r0.add(r1)
        L20:
            return
    }

    public static java.lang.String getLiveArgsJsonStr() {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r3 = "getLiveArgsJsonStr"
            java.lang.Object r0 = com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r2, r3, r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public static com.bytedance.android.live.base.api.IOuterLiveRoomService getLiveRoomService() {
            com.bytedance.android.live.base.api.IOuterLiveRoomService r0 = com.bytedance.android.openliveplugin.LivePluginHelper.liveRoomService
            if (r0 != 0) goto L1f
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r3 = "getOuterLiveRoomService"
            java.lang.Object r0 = com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r2, r3, r0, r1)
            com.bytedance.android.live.base.api.IOuterLiveRoomService r0 = (com.bytedance.android.live.base.api.IOuterLiveRoomService) r0
            com.bytedance.android.openliveplugin.LivePluginHelper.liveRoomService = r0
        L1f:
            com.bytedance.android.live.base.api.IOuterLiveRoomService r0 = com.bytedance.android.openliveplugin.LivePluginHelper.liveRoomService
            return r0
    }

    public static void init(android.app.Application r1, java.lang.String r2, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r3, com.bytedance.android.live.base.api.ILiveInitCallback r4) {
            boolean r0 = com.bytedance.android.openliveplugin.LivePluginHelper.hasInitZeus
            if (r0 != 0) goto La
            initZeus(r1)
            r0 = 1
            com.bytedance.android.openliveplugin.LivePluginHelper.hasInitZeus = r0
        La:
            initLive(r1, r2, r3, r4)
            return
    }

    public static void initLive(android.app.Application r1, java.lang.String r2, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r3, com.bytedance.android.live.base.api.ILiveInitCallback r4) {
            com.bytedance.android.openliveplugin.LivePluginHelper$2 r0 = new com.bytedance.android.openliveplugin.LivePluginHelper$2
            r0.<init>(r1, r2, r3, r4)
            boolean r0 = prepare(r0)
            if (r0 != 0) goto Lc
            return
        Lc:
            realInitLivePlugin(r1, r2, r3, r4)
            return
    }

    public static void initLiveCommerce() {
            adaptEventBus()     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = "com.bytedance.android.ecom.live.adapter.ECLiveAdapter"
            java.lang.String r1 = "init"
            com.bytedance.pangle.plugin.PluginManager r2 = com.bytedance.pangle.plugin.PluginManager.getInstance()     // Catch: java.lang.Exception -> L1a
            java.lang.String r3 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r2 = r2.getPlugin(r3)     // Catch: java.lang.Exception -> L1a
            com.bytedance.pangle.PluginClassLoader r2 = r2.mClassLoader     // Catch: java.lang.Exception -> L1a
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L1a
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r0 = move-exception
            r0.printStackTrace()
        L1e:
            return
    }

    public static void initLivePlugin(com.bytedance.android.live.base.api.ILiveHostContextParam r7, com.bytedance.android.live.base.api.ILiveInitCallback r8) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            java.lang.String r1 = "com.bytedance.android.openlive.auth.impl.auth.LiveAuthCallStub"
            java.lang.String r2 = "wrap"
            r3 = 2
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L48
            r5 = 0
            r4[r5] = r7     // Catch: java.lang.Throwable -> L48
            r7 = 1
            r4[r7] = r8     // Catch: java.lang.Throwable -> L48
            java.lang.Object r8 = com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r1, r2, r0, r4)     // Catch: java.lang.Throwable -> L48
            android.util.Pair r8 = (android.util.Pair) r8     // Catch: java.lang.Throwable -> L48
            java.lang.Object r2 = r8.second     // Catch: java.lang.Throwable -> L48
            com.bytedance.android.live.base.api.ILiveInitCallback r2 = (com.bytedance.android.live.base.api.ILiveInitCallback) r2     // Catch: java.lang.Throwable -> L48
            addInitListener(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "getTransformer"
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L48
            java.lang.Object r1 = com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r1, r2, r0, r4)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "live init : start call LiveInitWrapper init ..."
            com.bytedance.android.openliveplugin.material.TTLogger.d(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "com.bytedance.android.openlive.LiveInitWrapper"
            java.lang.String r4 = "initWithTransform"
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L48
            java.lang.Object r8 = r8.first     // Catch: java.lang.Throwable -> L48
            r6[r5] = r8     // Catch: java.lang.Throwable -> L48
            com.bytedance.android.openliveplugin.LivePluginHelper$LiveInitCallbackWrapper r8 = com.bytedance.android.openliveplugin.LivePluginHelper.LiveInitCallbackWrapper.INSTANCE     // Catch: java.lang.Throwable -> L48
            r6[r7] = r8     // Catch: java.lang.Throwable -> L48
            r6[r3] = r1     // Catch: java.lang.Throwable -> L48
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r2, r4, r0, r6)     // Catch: java.lang.Throwable -> L48
            goto L51
        L48:
            r7 = move-exception
            java.lang.String r8 = "live init : LiveInitWrapper init error"
            com.bytedance.android.openliveplugin.material.TTLogger.e(r8)
            r7.printStackTrace()
        L51:
            return
    }

    private static void initZeus(android.app.Application r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            r0.init()
            r0 = 1
            com.bytedance.pangle.Zeus.init(r1, r0)
            com.bytedance.pangle.Zeus.installFromDownloadDir()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.Zeus.fetchPlugin(r1)
            return
    }

    public static void logEventV3(java.lang.String r3, org.json.JSONObject r4) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            r3 = 1
            r1[r3] = r4
            java.lang.String r3 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r4 = "onEventV3"
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r3, r4, r0, r1)
            return
    }

    private static boolean prepare(java.lang.Runnable r2) {
            java.lang.String r0 = "com.byted.live.lite"
            boolean r1 = com.bytedance.pangle.Zeus.isPluginInstalled(r0)
            if (r1 != 0) goto L12
            com.bytedance.android.openliveplugin.LivePluginHelper$3 r0 = new com.bytedance.android.openliveplugin.LivePluginHelper$3
            r0.<init>(r2)
            com.bytedance.pangle.Zeus.registerPluginStateListener(r0)
            r2 = 0
            return r2
        L12:
            boolean r2 = com.bytedance.pangle.Zeus.isPluginLoaded(r0)
            if (r2 != 0) goto L1d
            boolean r2 = com.bytedance.pangle.Zeus.loadPlugin(r0)
            return r2
        L1d:
            boolean r2 = com.bytedance.pangle.Zeus.isPluginLoaded(r0)
            return r2
    }

    private static void realInitLivePlugin(android.app.Application r2, java.lang.String r3, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r4, com.bytedance.android.live.base.api.ILiveInitCallback r5) {
            com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0 = com.bytedance.android.openliveplugin.LivePluginHelper.materialManager
            if (r0 != 0) goto Lb
            com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0 = new com.bytedance.android.openliveplugin.material.LiveInitMaterialManager
            r0.<init>()
            com.bytedance.android.openliveplugin.LivePluginHelper.materialManager = r0
        Lb:
            java.lang.String r0 = "live init : material task execute"
            com.bytedance.android.openliveplugin.material.TTLogger.d(r0)
            java.util.concurrent.ScheduledExecutorService r0 = com.bytedance.android.openliveplugin.LivePluginHelper.sExecutor
            com.bytedance.android.openliveplugin.LivePluginHelper$1 r1 = new com.bytedance.android.openliveplugin.LivePluginHelper$1
            r1.<init>(r3, r2, r4, r5)
            r0.execute(r1)
            return
    }

    public static void setBoeValue(java.lang.String r3) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            java.lang.String r3 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r2 = "setBoeValue"
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r3, r2, r0, r1)
            return
    }

    public static void setPpeValue(java.lang.String r3) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r1 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            java.lang.String r3 = "com.bytedance.android.openlive.OpenLiveBackdoor"
            java.lang.String r2 = "setPpeValue"
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r3, r2, r0, r1)
            return
    }
}
