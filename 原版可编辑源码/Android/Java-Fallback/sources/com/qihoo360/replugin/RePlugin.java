package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePlugin {
    public static final java.lang.String PLUGIN_NAME_MAIN = "main";
    public static final java.lang.String PROCESS_AUTO = "-2147483648";
    public static final java.lang.String PROCESS_PERSIST = "-2";
    public static final java.lang.String PROCESS_UI = "-1";
    private static final java.lang.String TAG = "RePlugin";
    public static boolean isEnableTraceInstallPlugin;
    private static com.qihoo360.replugin.RePluginConfig sConfig;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class App {
        static boolean sAttached;
        static java.util.concurrent.atomic.AtomicBoolean sCreated;

        static {
                java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
                r1 = 0
                r0.<init>(r1)
                com.qihoo360.replugin.RePlugin.App.sCreated = r0
                return
        }

        public App() {
                r0 = this;
                r0.<init>()
                return
        }

        public static void attachBaseContext(android.app.Application r1) {
                com.qihoo360.replugin.RePluginConfig r0 = new com.qihoo360.replugin.RePluginConfig
                r0.<init>()
                attachBaseContext(r1, r0)
                return
        }

        public static void attachBaseContext(android.app.Application r1, com.qihoo360.replugin.RePluginCallbacks r2) {
                com.qihoo360.replugin.RePluginConfig r0 = new com.qihoo360.replugin.RePluginConfig
                r0.<init>()
                com.qihoo360.replugin.RePluginConfig r2 = r0.setCallbacks(r2)
                attachBaseContext(r1, r2)
                return
        }

        public static void attachBaseContext(android.app.Application r2, com.qihoo360.replugin.RePluginConfig r3) {
                boolean r0 = com.qihoo360.replugin.RePlugin.App.sAttached
                java.lang.String r1 = "RePlugin"
                if (r0 == 0) goto L10
                boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r2 == 0) goto Lf
                java.lang.String r2 = "attachBaseContext: Already called"
                com.qihoo360.replugin.helper.LogDebug.d(r1, r2)
            Lf:
                return
            L10:
                com.qihoo360.replugin.RePluginInternal.init(r2)
                com.qihoo360.replugin.RePlugin.access$002(r3)
                com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.access$000()
                r3.initDefaults(r2)
                com.qihoo360.replugin.base.IPC.init(r2)
                boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r3 == 0) goto L33
                com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()
                boolean r3 = r3.isPrintDetailLog()
                if (r3 == 0) goto L33
                java.lang.String r3 = "act=, init, flag=, Start, pn=, framework, func=, attachBaseContext, lib=, RePlugin"
                com.qihoo360.replugin.helper.LogDebug.printMemoryStatus(r1, r3)
            L33:
                com.qihoo360.replugin.helper.HostConfigHelper.init()
                com.qihoo360.mobilesafe.api.AppVar.sAppContext = r2
                com.qihoo360.loader2.PluginStatusController.setAppContext(r2)
                com.qihoo360.loader2.PMF.init(r2)
                com.qihoo360.loader2.PMF.callAttach()
                r2 = 1
                com.qihoo360.replugin.RePlugin.App.sAttached = r2
                return
        }

        public static void onConfigurationChanged(android.content.res.Configuration r2) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 14
                if (r0 < r1) goto L7
                return
            L7:
                com.qihoo360.replugin.component.app.PluginApplicationClient.notifyOnConfigurationChanged(r2)
                return
        }

        public static void onCreate() {
                boolean r0 = com.qihoo360.replugin.RePlugin.App.sAttached
                if (r0 == 0) goto L38
                java.util.concurrent.atomic.AtomicBoolean r0 = com.qihoo360.replugin.RePlugin.App.sCreated
                r1 = 0
                r2 = 1
                boolean r0 = r0.compareAndSet(r1, r2)
                if (r0 != 0) goto Lf
                return
            Lf:
                com.qihoo360.mobilesafe.api.Tasks.init()
                com.qihoo360.loader2.PMF.callAppCreate()
                boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
                if (r0 != 0) goto L22
                android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
                com.qihoo360.replugin.packages.PluginInfoUpdater.register(r0)
            L22:
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L37
                com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
                boolean r0 = r0.isPrintDetailLog()
                if (r0 == 0) goto L37
                java.lang.String r0 = "RePlugin"
                java.lang.String r1 = "act=, init, flag=, End, pn=, framework, func=, onCreate, lib=, RePlugin"
                com.qihoo360.replugin.helper.LogDebug.printMemoryStatus(r0, r1)
            L37:
                return
            L38:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        public static void onLowMemory() {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 14
                if (r0 < r1) goto L7
                return
            L7:
                com.qihoo360.replugin.component.app.PluginApplicationClient.notifyOnLowMemory()
                return
        }

        public static void onTrimMemory(int r2) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 14
                if (r0 < r1) goto L7
                return
            L7:
                com.qihoo360.replugin.component.app.PluginApplicationClient.notifyOnTrimMemory(r2)
                return
        }
    }

    static {
            return
    }

    public RePlugin() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.qihoo360.replugin.RePluginConfig access$000() {
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.sConfig
            return r0
    }

    static com.qihoo360.replugin.RePluginConfig access$002(com.qihoo360.replugin.RePluginConfig r0) {
            com.qihoo360.replugin.RePlugin.sConfig = r0
            return r0
    }

    public static void addCertSignature(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            java.util.ArrayList<java.lang.String> r0 = com.qihoo360.loader2.CertUtils.SIGNATURES
            java.lang.String r1 = r1.toUpperCase()
            r0.add(r1)
            return
        L10:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "arg is null"
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String convertToPnFile(java.lang.String r1) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.io.File r1 = com.qihoo360.replugin.packages.RePluginInstaller.covertToPnFile(r0, r1)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.getAbsolutePath()
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static android.content.ComponentName createComponentName(java.lang.String r1, java.lang.String r2) {
            android.content.ComponentName r0 = new android.content.ComponentName
            r0.<init>(r1, r2)
            return r0
    }

    public static android.content.Intent createIntent(java.lang.String r1, java.lang.String r2) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = createComponentName(r1, r2)
            r0.setComponent(r1)
            return r0
    }

    public static void dump(java.io.FileDescriptor r0, java.io.PrintWriter r1, java.lang.String[] r2) {
            com.qihoo360.loader2.DumpUtils.dump(r0, r1, r2)
            return
    }

    public static boolean enableDebugger(android.content.Context r0, boolean r1) {
            if (r0 == 0) goto Lc
            if (r1 == 0) goto Lc
            com.qihoo360.replugin.debugger.DebuggerReceivers r1 = new com.qihoo360.replugin.debugger.DebuggerReceivers
            r1.<init>()
            r1.registerReceivers(r0)
        Lc:
            r0 = 1
            return r0
    }

    public static android.os.IBinder fetchBinder(java.lang.String r0, java.lang.String r1) {
            android.os.IBinder r0 = com.qihoo360.i.Factory.query(r0, r1)
            return r0
    }

    public static android.os.IBinder fetchBinder(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            int r2 = java.lang.Integer.parseInt(r2)
            android.os.IBinder r0 = com.qihoo360.i.Factory.query(r0, r1, r2)
            return r0
    }

    public static java.lang.ClassLoader fetchClassLoader(java.lang.String r0) {
            java.lang.ClassLoader r0 = com.qihoo360.i.Factory.queryPluginClassLoader(r0)
            return r0
    }

    public static com.qihoo360.replugin.component.ComponentList fetchComponentList(java.lang.String r0) {
            com.qihoo360.replugin.component.ComponentList r0 = com.qihoo360.i.Factory.queryPluginComponentList(r0)
            return r0
    }

    public static android.content.Context fetchContext(java.lang.String r0) {
            android.content.Context r0 = com.qihoo360.i.Factory.queryPluginContext(r0)
            return r0
    }

    public static android.content.pm.PackageInfo fetchPackageInfo(java.lang.String r0) {
            android.content.pm.PackageInfo r0 = com.qihoo360.i.Factory.queryPluginPackageInfo(r0)
            return r0
    }

    public static java.lang.String fetchPluginNameByClassLoader(java.lang.ClassLoader r0) {
            java.lang.String r0 = com.qihoo360.i.Factory.fetchPluginName(r0)
            return r0
    }

    public static int fetchResourceIdByName(java.lang.String r5, java.lang.String r6) {
            android.content.pm.PackageInfo r0 = fetchPackageInfo(r5)
            java.lang.String r1 = "; resName="
            java.lang.String r2 = "RePlugin"
            r3 = 0
            if (r0 != 0) goto L2a
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "fetchResourceIdByName: Plugin not found. pn="
            r0.append(r4)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r2, r5)
        L29:
            return r3
        L2a:
            android.content.res.Resources r4 = fetchResources(r5)
            if (r4 != 0) goto L4f
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L4e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "fetchResourceIdByName: Plugin not found (fetchResources). pn="
            r0.append(r4)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r2, r5)
        L4e:
            return r3
        L4f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = r0.packageName
            r5.append(r0)
            java.lang.String r0 = ":"
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r6 = 0
            int r5 = r4.getIdentifier(r5, r6, r6)
            return r5
    }

    public static android.content.res.Resources fetchResources(java.lang.String r0) {
            android.content.res.Resources r0 = com.qihoo360.i.Factory.queryPluginResouces(r0)
            return r0
    }

    public static <T extends android.view.View> T fetchViewByLayoutName(java.lang.String r5, java.lang.String r6, android.view.ViewGroup r7) {
            android.content.Context r0 = fetchContext(r5)
            java.lang.String r1 = "; layoutName="
            java.lang.String r2 = "RePlugin"
            if (r0 != 0) goto L28
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L28
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "fetchViewByLayoutName: Plugin not found. pn="
            r3.append(r4)
            r3.append(r5)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r2, r3)
        L28:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "layout/"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            int r3 = fetchResourceIdByName(r5, r3)
            if (r3 > 0) goto L5f
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L5d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "fetchViewByLayoutName: fetch failed! pn="
            r7.append(r0)
            r7.append(r5)
            r7.append(r1)
            r7.append(r6)
            java.lang.String r5 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r2, r5)
        L5d:
            r5 = 0
            return r5
        L5f:
            android.view.LayoutInflater r5 = android.view.LayoutInflater.from(r0)
            android.view.View r5 = r5.inflate(r3, r7)
            return r5
    }

    public static com.qihoo360.replugin.RePluginConfig getConfig() {
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.sConfig
            return r0
    }

    public static android.os.IBinder getGlobalBinder(java.lang.String r1) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            android.os.IBinder r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.getService(r0, r1)
            return r1
    }

    public static com.qihoo360.replugin.model.PluginInfo getPluginInfo(java.lang.String r1) {
            r0 = 1
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r1, r0)
            return r1
    }

    public static java.util.List<com.qihoo360.replugin.model.PluginInfo> getPluginInfoList() {
            r0 = 1
            java.util.List r0 = com.qihoo360.loader2.MP.getPlugins(r0)
            return r0
    }

    public static int getPluginVersion(java.lang.String r1) {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r1, r0)
            if (r1 != 0) goto L9
            r1 = -1
            return r1
        L9:
            int r1 = r1.getVersion()
            return r1
    }

    public static com.qihoo360.replugin.packages.PluginRunningList getRunningPlugins() {
            com.qihoo360.replugin.packages.PluginRunningList r0 = com.qihoo360.replugin.packages.PluginManagerProxy.getRunningPluginsNoThrows()
            return r0
    }

    public static java.lang.String[] getRunningProcessesByPlugin(java.lang.String r0) {
            java.lang.String[] r0 = com.qihoo360.replugin.packages.PluginManagerProxy.getRunningProcessesByPluginNoThrows(r0)
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "2.0"
            return r0
    }

    public static com.qihoo360.replugin.model.PluginInfo install(java.lang.String r4, boolean r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L80
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r1 = r0.exists()
            r2 = 0
            java.lang.String r3 = "RePlugin"
            if (r1 != 0) goto L29
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "install: File not exists. path="
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r4)
            return r2
        L29:
            boolean r0 = r0.isFile()
            if (r0 != 0) goto L44
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "install: Not a valid file. path="
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r4)
            return r2
        L44:
            java.lang.String r0 = "p-n-"
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L7b
            com.qihoo360.replugin.RePluginConfig r0 = getConfig()
            java.io.File r0 = r0.getPnInstallDir()
            java.lang.String r0 = r0.getAbsolutePath()
            boolean r1 = r4.startsWith(r0)
            if (r1 != 0) goto L7b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "install: Must be installed from the specified path. Path="
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = "; Allowed="
            r5.append(r4)
            r5.append(r0)
            java.lang.String r4 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r4)
            return r2
        L7b:
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.loader2.MP.pluginDownloaded(r4, r5)
            return r4
        L80:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    public static boolean isCurrentPersistentProcess() {
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            return r0
    }

    public static boolean isForDev() {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            return r0
    }

    public static boolean isHookingClass(android.content.ComponentName r1) {
            java.lang.String r0 = r1.getPackageName()
            java.lang.String r1 = r1.getClassName()
            boolean r1 = com.qihoo360.i.Factory2.isDynamicClass(r0, r1)
            return r1
    }

    public static boolean isPluginDexExtracted(java.lang.String r1) {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r1, r0)
            if (r1 == 0) goto Le
            boolean r1 = r1.isDexExtracted()
            if (r1 == 0) goto Le
            r0 = 1
        Le:
            return r0
    }

    public static boolean isPluginInstalled(java.lang.String r1) {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r1, r0)
            if (r1 == 0) goto L8
            r0 = 1
        L8:
            return r0
    }

    public static boolean isPluginRunning(java.lang.String r0) {
            boolean r0 = com.qihoo360.replugin.packages.PluginManagerProxy.isPluginRunning(r0)     // Catch: android.os.RemoteException -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static boolean isPluginRunningInProcess(java.lang.String r0, java.lang.String r1) {
            boolean r0 = com.qihoo360.replugin.packages.PluginManagerProxy.isPluginRunningInProcess(r0, r1)     // Catch: android.os.RemoteException -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static boolean isPluginUsed(java.lang.String r1) {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r1, r0)
            if (r1 == 0) goto Le
            boolean r1 = r1.isUsed()
            if (r1 == 0) goto Le
            r0 = 1
        Le:
            return r0
    }

    public static boolean preload(com.qihoo360.replugin.model.PluginInfo r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            boolean r1 = com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.install(r0, r1)
            return r1
    }

    public static boolean preload(java.lang.String r2) {
            com.qihoo360.replugin.model.PluginInfo r0 = getPluginInfo(r2)
            if (r0 != 0) goto L22
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "preload: Plugin not found! pn="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "RePlugin"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r2)
        L20:
            r2 = 0
            return r2
        L22:
            boolean r2 = preload(r0)
            return r2
    }

    public static boolean registerGlobalBinder(java.lang.String r1, android.os.IBinder r2) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.addService(r0, r1, r2)
            return r1
    }

    public static boolean registerGlobalBinderDelayed(java.lang.String r1, com.qihoo360.replugin.IBinderGetter r2) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.addService(r0, r1, r2)
            return r1
    }

    public static void registerHookingClass(java.lang.String r1, android.content.ComponentName r2, java.lang.Class r3) {
            java.lang.String r0 = r2.getPackageName()
            java.lang.String r2 = r2.getClassName()
            com.qihoo360.i.Factory2.registerDynamicClass(r1, r0, r2, r3)
            return
    }

    public static void registerHostBinder(com.qihoo360.replugin.IHostBinderFetcher r1) {
            java.lang.String r0 = "main"
            com.qihoo360.loader2.MP.installBuiltinPlugin(r0, r1)
            return
    }

    public static void registerInstalledReceiver(android.content.Context r2, android.content.BroadcastReceiver r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "com.qihoo360.loader2.ACTION_NEW_PLUGIN"
            r0.<init>(r1)
            com.qihoo360.replugin.compat.LocalBroadcastManager r2 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r2)
            r2.registerReceiver(r3, r0)
            return
    }

    public static void setTraceInstallPlugin(boolean r0) {
            com.qihoo360.replugin.RePlugin.isEnableTraceInstallPlugin = r0
            return
    }

    public static boolean startActivity(android.content.Context r3, android.content.Intent r4) {
            android.content.ComponentName r0 = r4.getComponent()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r1 = r0.getPackageName()
            java.lang.String r0 = r0.getClassName()
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            boolean r3 = com.qihoo360.i.Factory.startActivityWithNoInjectCN(r3, r4, r1, r0, r2)
            return r3
    }

    public static boolean startActivity(android.content.Context r1, android.content.Intent r2, java.lang.String r3, java.lang.String r4) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            boolean r1 = com.qihoo360.i.Factory.startActivity(r1, r2, r3, r4, r0)
            return r1
    }

    public static boolean startActivityForResult(android.app.Activity r1, android.content.Intent r2, int r3) {
            r0 = 0
            boolean r1 = com.qihoo360.i.Factory.startActivityForResult(r1, r2, r3, r0)
            return r1
    }

    public static boolean startActivityForResult(android.app.Activity r0, android.content.Intent r1, int r2, android.os.Bundle r3) {
            boolean r0 = com.qihoo360.i.Factory.startActivityForResult(r0, r1, r2, r3)
            return r0
    }

    public static boolean uninstall(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lb
            boolean r1 = com.qihoo360.loader2.MP.pluginUninstall(r1)
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    public static boolean unregisterGlobalBinder(java.lang.String r2) {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            r1 = 0
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.removeService(r0, r2, r1)
            return r2
    }

    public static void unregisterHookingClass(java.lang.String r0) {
            com.qihoo360.i.Factory2.unregisterDynamicClass(r0)
            return
    }
}
