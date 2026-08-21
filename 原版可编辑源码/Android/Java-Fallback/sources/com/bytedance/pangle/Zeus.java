package com.bytedance.pangle;

public class Zeus {
    private static volatile boolean onPrivacyAgreed;
    private static android.app.Application sApplication;
    private static final java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> serverManagerHashMap = null;
    static final java.lang.Object wait = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.Zeus.serverManagerHashMap = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.bytedance.pangle.Zeus.wait = r0
            r0 = 0
            com.bytedance.pangle.Zeus.onPrivacyAgreed = r0
            return
    }

    public Zeus() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addExternalAssetsForPlugin(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L26
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L26
        Ld:
            com.bytedance.pangle.plugin.Plugin r2 = getPlugin(r2)
            if (r2 == 0) goto L26
            android.content.res.Resources r0 = r2.mResources
            if (r0 == 0) goto L26
            android.content.res.Resources r2 = r2.mResources
            android.content.res.AssetManager r2 = r2.getAssets()
            com.bytedance.pangle.res.a r0 = new com.bytedance.pangle.res.a
            r0.<init>()
            r1 = 0
            r0.a(r2, r3, r1)
        L26:
            return
    }

    public static void addPluginEventCallback(com.bytedance.pangle.ZeusPluginEventCallback r2) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            if (r2 == 0) goto L13
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r1 = r0.c
            monitor-enter(r1)
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r0 = r0.c     // Catch: java.lang.Throwable -> L10
            r0.add(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            throw r2
        L13:
            return
    }

    public static void fetchPlugin(java.lang.String r5) {
            com.bytedance.pangle.download.a r0 = com.bytedance.pangle.download.a.a()
            android.app.Application r1 = getAppApplication()
            boolean r1 = com.bytedance.pangle.d.d.a(r1)
            if (r1 == 0) goto L51
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.getInstance()
            boolean r1 = r1.autoFetch()
            if (r1 == 0) goto L4e
            com.bytedance.pangle.download.b r1 = com.bytedance.pangle.download.b.a()
            java.util.Map<java.lang.String, java.lang.Runnable> r2 = r1.c
            java.lang.Object r2 = r2.get(r5)
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            if (r2 == 0) goto L2b
            android.os.Handler r3 = r1.b
            r3.removeCallbacks(r2)
        L2b:
            com.bytedance.pangle.download.b$1 r2 = new com.bytedance.pangle.download.b$1
            r2.<init>(r1, r5)
            java.util.Map<java.lang.String, java.lang.Runnable> r3 = r1.c
            r3.put(r5, r2)
            android.os.Handler r1 = r1.b
            r3 = 1800000(0x1b7740, double:8.89318E-318)
            r1.postDelayed(r2, r3)
            com.bytedance.pangle.download.b.a()
            java.util.List<java.lang.String> r1 = r0.a
            boolean r1 = r1.contains(r5)
            if (r1 != 0) goto L51
            java.util.List<java.lang.String> r0 = r0.a
            r0.add(r5)
            return
        L4e:
            com.bytedance.pangle.download.b.a()
        L51:
            return
    }

    public static android.app.Application getAppApplication() {
            android.app.Application r0 = com.bytedance.pangle.Zeus.sApplication
            if (r0 != 0) goto L18
            com.bytedance.pangle.b.a()
            java.lang.Object r0 = com.bytedance.pangle.d.a.a()
            java.lang.String r1 = "getApplication"
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L18
            java.lang.Object r0 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r0, r1, r2)     // Catch: java.lang.Throwable -> L18
            android.app.Application r0 = (android.app.Application) r0     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.Zeus.sApplication = r0     // Catch: java.lang.Throwable -> L18
        L18:
            android.app.Application r0 = com.bytedance.pangle.Zeus.sApplication
            return r0
    }

    public static java.lang.String getHostAbi() {
            java.lang.String r0 = com.bytedance.pangle.d.b.a()
            return r0
    }

    public static int getHostAbiBit() {
            int r0 = com.bytedance.pangle.d.b.b()
            return r0
    }

    public static int getInstalledPluginVersion(java.lang.String r3) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r3)
            if (r0 != 0) goto Lc
            r3 = -1
            return r3
        Lc:
            int r0 = r0.getVersion()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = " getInstalledPluginVersion, "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = " = "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "Zeus/download_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r1, r3)
            return r0
    }

    public static int getMaxInstallVer(java.lang.String r1) {
            android.app.Application r0 = getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 == 0) goto L13
            com.bytedance.pangle.plugin.Plugin r1 = getPlugin(r1)
            int r1 = r1.getInstalledMaxVer()
            return r1
        L13:
            r1 = -1
            return r1
    }

    public static com.bytedance.pangle.plugin.Plugin getPlugin(java.lang.String r1) {
            r0 = 1
            com.bytedance.pangle.plugin.Plugin r1 = getPlugin(r1, r0)
            return r1
    }

    public static com.bytedance.pangle.plugin.Plugin getPlugin(java.lang.String r1, boolean r2) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r1 = r0.getPlugin(r1, r2)
            return r1
    }

    public static java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> getServerManagerHashMap() {
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r0 = com.bytedance.pangle.Zeus.serverManagerHashMap
            return r0
    }

    public static java.lang.String getZeusDid() {
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            java.lang.String r0 = r0.getDid()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lf
            return r0
        Lf:
            com.bytedance.pangle.apm.AbsApm r0 = com.bytedance.pangle.apm.ApmUtils.getApmInstance()
            java.lang.String r0 = r0.getDid()
            return r0
    }

    public static boolean hasInit() {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            boolean r0 = r0.a
            return r0
    }

    public static void init(android.app.Application r1, boolean r2) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            r0.a(r1, r2)
            java.lang.Object r1 = com.bytedance.pangle.Zeus.wait
            monitor-enter(r1)
            java.lang.Object r2 = com.bytedance.pangle.Zeus.wait     // Catch: java.lang.Throwable -> L11
            r2.notifyAll()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L11
            throw r2
    }

    public static void installFromDownloadDir() {
            android.app.Application r0 = getAppApplication()
            boolean r0 = com.bytedance.pangle.d.d.a(r0)
            if (r0 == 0) goto L11
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            r0.installFromDownloadDir()
        L11:
            return
    }

    public static boolean isPluginInstalled(java.lang.String r1) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r1 = r0.getPlugin(r1)
            if (r1 == 0) goto L12
            boolean r1 = r1.isInstalled()
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static boolean isPluginLoaded(java.lang.String r1) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            boolean r1 = r0.isLoaded(r1)
            return r1
    }

    public static boolean loadPlugin(java.lang.String r1) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            boolean r1 = r0.loadPlugin(r1)
            return r1
    }

    public static synchronized void onPrivacyAgreed() {
            java.lang.Class<com.bytedance.pangle.Zeus> r0 = com.bytedance.pangle.Zeus.class
            monitor-enter(r0)
            boolean r1 = com.bytedance.pangle.Zeus.onPrivacyAgreed     // Catch: java.lang.Throwable -> L15
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            com.bytedance.pangle.apm.AbsApm r1 = com.bytedance.pangle.apm.ApmUtils.getApmInstance()     // Catch: java.lang.Throwable -> L15
            r1.init()     // Catch: java.lang.Throwable -> L15
            r1 = 1
            com.bytedance.pangle.Zeus.onPrivacyAgreed = r1     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void registerPluginStateListener(com.bytedance.pangle.ZeusPluginStateListener r1) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            java.util.List<com.bytedance.pangle.ZeusPluginStateListener> r0 = r0.b
            r0.add(r1)
            return
    }

    public static void removePluginEventCallback(com.bytedance.pangle.ZeusPluginEventCallback r2) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            if (r2 == 0) goto L13
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r1 = r0.c
            monitor-enter(r1)
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r0 = r0.c     // Catch: java.lang.Throwable -> L10
            r0.remove(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            throw r2
        L13:
            return
    }

    public static void setAllowDownloadPlugin(java.lang.String r1, int r2, boolean r3) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            r0.setAllowDownloadPlugin(r1, r2, r3)
            return
    }

    public static void setAppContext(android.app.Application r2) {
            if (r2 == 0) goto L1d
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            java.lang.String r1 = "PluginApplicationWrapper"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 == 0) goto L1d
            java.lang.String r0 = "mOriginApplication"
            java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r2, r0)     // Catch: java.lang.Throwable -> L1d
            android.app.Application r0 = (android.app.Application) r0     // Catch: java.lang.Throwable -> L1d
            com.bytedance.pangle.Zeus.sApplication = r0     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            com.bytedance.pangle.Zeus.sApplication = r2
            return
    }

    public static boolean syncInstallPlugin(java.lang.String r1, java.lang.String r2) {
            com.bytedance.pangle.c r0 = com.bytedance.pangle.servermanager.b.a()
            if (r0 == 0) goto L13
            boolean r1 = r0.a(r1, r2)     // Catch: android.os.RemoteException -> Lb
            return r1
        Lb:
            r1 = move-exception
            java.lang.String r2 = "Zeus/install_pangle"
            java.lang.String r0 = "syncInstallPlugin error."
            com.bytedance.pangle.log.ZeusLogger.w(r2, r0, r1)
        L13:
            r1 = 0
            return r1
    }

    public static void triggerBgDexOpt() {
            com.bytedance.pangle.e.f.a()
            return
    }

    public static void unInstallPlugin(java.lang.String r1) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            r0.unInstallPackage(r1)
            return
    }

    public static void unregisterPluginStateListener(com.bytedance.pangle.ZeusPluginStateListener r2) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            java.util.List<com.bytedance.pangle.ZeusPluginStateListener> r1 = r0.b
            if (r1 == 0) goto Ld
            java.util.List<com.bytedance.pangle.ZeusPluginStateListener> r0 = r0.b
            r0.remove(r2)
        Ld:
            return
    }

    public static boolean waitInit(int r4) {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            boolean r0 = r0.a
            if (r0 == 0) goto La
            r4 = 1
            return r4
        La:
            java.lang.Object r0 = com.bytedance.pangle.Zeus.wait
            monitor-enter(r0)
            com.bytedance.pangle.h r1 = com.bytedance.pangle.h.a()     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r1.a     // Catch: java.lang.Throwable -> L2c
            if (r1 != 0) goto L24
            r1 = -1
            if (r4 != r1) goto L1e
            java.lang.Object r4 = com.bytedance.pangle.Zeus.wait     // Catch: java.lang.InterruptedException -> L24 java.lang.Throwable -> L2c
            r4.wait()     // Catch: java.lang.InterruptedException -> L24 java.lang.Throwable -> L2c
            goto L24
        L1e:
            java.lang.Object r1 = com.bytedance.pangle.Zeus.wait     // Catch: java.lang.InterruptedException -> L24 java.lang.Throwable -> L2c
            long r2 = (long) r4     // Catch: java.lang.InterruptedException -> L24 java.lang.Throwable -> L2c
            r1.wait(r2)     // Catch: java.lang.InterruptedException -> L24 java.lang.Throwable -> L2c
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            com.bytedance.pangle.h r4 = com.bytedance.pangle.h.a()
            boolean r4 = r4.a
            return r4
        L2c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r4
    }
}
