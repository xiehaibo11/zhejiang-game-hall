package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PmBase {
    static final java.lang.String ACTION_NEW_PLUGIN = "ACTION_NEW_PLUGIN";
    private static final java.lang.String CONTAINER_PROVIDER_PART = ".loader.p.Provider";
    static final java.lang.String CONTAINER_SERVICE_PART = ".loader.s.Service";
    private static final byte[] LOCKER = null;
    private static final java.lang.String TAG = "PmBase";
    com.qihoo360.loader2.Builder.PxAll mAll;
    private android.content.BroadcastReceiver mBroadcastReceiver;
    private final java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.i.IModule>> mBuiltinModules;
    private final java.util.HashMap<java.lang.String, com.qihoo360.replugin.IHostBinderFetcher> mBuiltinPlugins;
    private java.lang.ClassLoader mClassLoader;
    com.qihoo360.loader2.PluginProcessPer mClient;
    private final java.util.HashSet<java.lang.String> mContainerActivities;
    private final java.util.HashSet<java.lang.String> mContainerProviders;
    private final java.util.HashSet<java.lang.String> mContainerServices;
    private final android.content.Context mContext;
    private com.qihoo360.loader2.Plugin mDefaultPlugin;
    private java.lang.String mDefaultPluginName;
    private final java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase.DynamicClass> mDynamicClasses;
    private com.qihoo360.loader2.PmHostSvc mHostSvc;
    com.qihoo360.loader2.PluginLibraryInternalProxy mInternal;
    com.qihoo360.loader2.PluginCommImpl mLocal;
    long mLocalCookie;
    private boolean mNeedRestart;
    private final java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> mPlugins;




    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class DynamicClass {
        java.lang.String className;
        java.lang.String classType;
        java.lang.Class defClass;
        java.lang.String plugin;

        private DynamicClass() {
                r0 = this;
                r0.<init>()
                return
        }

        DynamicClass(com.qihoo360.loader2.PmBase.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.loader2.PmBase.LOCKER = r0
            return
    }

    PmBase(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r4.mContainerActivities = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r4.mContainerProviders = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r4.mContainerServices = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.mBuiltinModules = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.mPlugins = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.mBuiltinPlugins = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.mDynamicClasses = r0
            com.qihoo360.loader2.PmBase$1 r0 = new com.qihoo360.loader2.PmBase$1
            r0.<init>(r4)
            r4.mBroadcastReceiver = r0
            r4.mContext = r5
            int r0 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            r1 = -1
            if (r0 == r1) goto L48
            boolean r0 = com.qihoo360.loader2.PluginManager.isPluginProcess()
            if (r0 == 0) goto L9c
        L48:
            int r0 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            if (r0 != r1) goto L4f
            java.lang.String r0 = "N1"
            goto L62
        L4f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            int r1 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L62:
            java.util.HashSet<java.lang.String> r1 = r4.mContainerProviders
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getPackageName()
            r2.append(r3)
            java.lang.String r3 = ".loader.p.Provider"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.add(r2)
            java.util.HashSet<java.lang.String> r1 = r4.mContainerServices
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getPackageName()
            r2.append(r3)
            java.lang.String r3 = ".loader.s.Service"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.add(r0)
        L9c:
            com.qihoo360.loader2.PluginProcessPer r0 = new com.qihoo360.loader2.PluginProcessPer
            int r1 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            java.util.HashSet<java.lang.String> r2 = r4.mContainerActivities
            r0.<init>(r5, r4, r1, r2)
            r4.mClient = r0
            com.qihoo360.loader2.PluginCommImpl r0 = new com.qihoo360.loader2.PluginCommImpl
            r0.<init>(r5, r4)
            r4.mLocal = r0
            com.qihoo360.loader2.PluginLibraryInternalProxy r5 = new com.qihoo360.loader2.PluginLibraryInternalProxy
            r5.<init>(r4)
            r4.mInternal = r5
            return
    }

    static final void cleanIntentPluginParams(android.content.Intent r1) {
            java.lang.String r0 = "compatible"
            r1.removeExtra(r0)     // Catch: java.lang.Exception -> Lf
            java.lang.String r0 = "plugin"
            r1.removeExtra(r0)     // Catch: java.lang.Exception -> Lf
            java.lang.String r0 = "activity"
            r1.removeExtra(r0)     // Catch: java.lang.Exception -> Lf
        Lf:
            return
    }

    private final void initForClient() {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "list plugins from persistent process"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        Lb:
            com.qihoo360.loader2.PluginProcessMain.connectToHostSvc()
            r2.refreshPluginsFromHostSvc()
            return
    }

    private final void initForServer() {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto Lb
            java.lang.String r0 = "search plugins from file system"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        Lb:
            com.qihoo360.loader2.PmHostSvc r0 = new com.qihoo360.loader2.PmHostSvc
            android.content.Context r2 = r4.mContext
            r0.<init>(r2, r4)
            r4.mHostSvc = r0
            com.qihoo360.loader2.PluginProcessMain.installHost(r0)
            r2 = 17000(0x4268, double:8.399E-320)
            com.qihoo360.loader2.StubProcessManager.schedulePluginProcessLoop(r2)
            com.qihoo360.loader2.Builder$PxAll r0 = new com.qihoo360.loader2.Builder$PxAll
            r0.<init>()
            r4.mAll = r0
            android.content.Context r2 = r4.mContext
            com.qihoo360.loader2.Builder.builder(r2, r0)
            com.qihoo360.loader2.Builder$PxAll r0 = r4.mAll
            java.util.ArrayList r0 = r0.getPlugins()
            r4.refreshPluginMap(r0)
            java.util.List r0 = com.qihoo360.replugin.packages.PluginManagerProxy.load()     // Catch: android.os.RemoteException -> L3b
            if (r0 == 0) goto L54
            r4.refreshPluginMap(r0)     // Catch: android.os.RemoteException -> L3b
            goto L54
        L3b:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "lst.p: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
        L54:
            return
    }

    private final boolean isNeedToUpdate(java.util.List<com.qihoo360.replugin.model.PluginInfo> r3) {
            r2 = this;
            if (r3 == 0) goto L20
            java.util.Iterator r3 = r3.iterator()
        L6:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L20
            java.lang.Object r0 = r3.next()
            com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0
            org.json.JSONObject r0 = r0.getJSON()
            java.lang.String r1 = "upinfo"
            org.json.JSONObject r0 = r0.optJSONObject(r1)
            if (r0 == 0) goto L6
            r3 = 1
            return r3
        L20:
            r3 = 0
            return r3
    }

    private final java.lang.Class<?> loadDefaultClass(java.lang.String r6) {
            r5 = this;
            com.qihoo360.loader2.Plugin r0 = r5.mDefaultPlugin
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 != 0) goto L26
            boolean r0 = com.qihoo360.loader2.PluginManager.isPluginProcess()
            if (r0 == 0) goto L25
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "plugin class loader: not found default plugin,  in="
            r0.append(r3)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L25:
            return r1
        L26:
            java.lang.ClassLoader r0 = r0.getClassLoader()
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L42
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "plugin class loader: in="
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L42:
            java.lang.Class r1 = r0.loadClass(r6)     // Catch: java.lang.Throwable -> L47
            goto L78
        L47:
            r3 = move-exception
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L78
            java.lang.Throwable r4 = r3.getCause()
            boolean r4 = r4 instanceof java.lang.ClassNotFoundException
            if (r4 == 0) goto L6d
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L78
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "plugin classloader not found className="
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
            goto L78
        L6d:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L78
            java.lang.String r6 = r3.getMessage()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6, r3)
        L78:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L98
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r3 = "plugin class loader: c="
            r6.append(r3)
            r6.append(r1)
            java.lang.String r3 = ", loader="
            r6.append(r3)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L98:
            return r1
    }

    private final java.lang.Class<?> loadProviderClass(java.lang.String r7) {
            r6 = this;
            com.qihoo360.loader2.Plugin r0 = r6.mDefaultPlugin
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 != 0) goto L20
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "plugin provider loader: not found default plugin,  in="
            r0.append(r3)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L1f:
            return r1
        L20:
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.pm.PackageInfo r3 = r3.mPackageInfo
            android.content.pm.ProviderInfo[] r3 = r3.providers
            if (r3 == 0) goto L87
            int r4 = r3.length
            if (r4 > 0) goto L2c
            goto L87
        L2c:
            r4 = 0
            r3 = r3[r4]
            java.lang.String r3 = r3.name
            java.lang.ClassLoader r0 = r0.getClassLoader()
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L55
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "plugin provider loader: in="
            r4.append(r5)
            r4.append(r7)
            java.lang.String r7 = " target="
            r4.append(r7)
            r4.append(r3)
            java.lang.String r7 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L55:
            java.lang.Class r1 = r0.loadClass(r3)     // Catch: java.lang.Throwable -> L5a
            goto L66
        L5a:
            r7 = move-exception
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L66
            java.lang.String r3 = r7.getMessage()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3, r7)
        L66:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L86
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r3 = "plugin provider loader: c="
            r7.append(r3)
            r7.append(r1)
            java.lang.String r3 = ", loader="
            r7.append(r3)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L86:
            return r1
        L87:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L90
            java.lang.String r7 = "plugin provider loader: manifest not item found"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L90:
            return r1
    }

    private final java.lang.Class<?> loadServiceClass(java.lang.String r7) {
            r6 = this;
            com.qihoo360.loader2.Plugin r0 = r6.mDefaultPlugin
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 != 0) goto L20
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "plugin service loader: not found default plugin,  in="
            r0.append(r3)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L1f:
            return r1
        L20:
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.pm.PackageInfo r3 = r3.mPackageInfo
            android.content.pm.ServiceInfo[] r3 = r3.services
            if (r3 == 0) goto L87
            int r4 = r3.length
            if (r4 > 0) goto L2c
            goto L87
        L2c:
            r4 = 0
            r3 = r3[r4]
            java.lang.String r3 = r3.name
            java.lang.ClassLoader r0 = r0.getClassLoader()
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L55
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "plugin service loader: in="
            r4.append(r5)
            r4.append(r7)
            java.lang.String r7 = " target="
            r4.append(r7)
            r4.append(r3)
            java.lang.String r7 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L55:
            java.lang.Class r1 = r0.loadClass(r3)     // Catch: java.lang.Throwable -> L5a
            goto L66
        L5a:
            r7 = move-exception
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L66
            java.lang.String r3 = r7.getMessage()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3, r7)
        L66:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L86
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r3 = "plugin service loader: c="
            r7.append(r3)
            r7.append(r1)
            java.lang.String r3 = ", loader="
            r7.append(r3)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L86:
            return r1
        L87:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L90
            java.lang.String r7 = "plugin service loader: manifest not item found"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)
        L90:
            return r1
    }

    private void putPluginObject(com.qihoo360.replugin.model.PluginInfo r4, com.qihoo360.loader2.Plugin r5) {
            r3 = this;
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r1 = r4.getAlias()
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L37
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r1 = r4.getPackageName()
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L19
            goto L37
        L19:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r1 = r4.getPackageName()
            r0.put(r1, r5)
            java.lang.String r0 = r4.getAlias()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Leb
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r4 = r4.getAlias()
            r0.put(r4, r5)
            goto Leb
        L37:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L5a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "当前内置插件列表中已经有"
            r0.append(r2)
            java.lang.String r2 = r4.getName()
            r0.append(r2)
            java.lang.String r2 = "，需要看看谁的版本号大。"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L5a:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r2 = r4.getPackageName()
            java.lang.Object r0 = r0.get(r2)
            com.qihoo360.loader2.Plugin r0 = (com.qihoo360.loader2.Plugin) r0
            if (r0 != 0) goto L74
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r2 = r4.getAlias()
            java.lang.Object r0 = r0.get(r2)
            com.qihoo360.loader2.Plugin r0 = (com.qihoo360.loader2.Plugin) r0
        L74:
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getVersion()
            int r2 = r4.getVersion()
            if (r0 == r2) goto Lca
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lad
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "新传入的纯APK插件, name="
            r0.append(r2)
            java.lang.String r2 = r4.getName()
            r0.append(r2)
            java.lang.String r2 = ", 版本号比较大,ver="
            r0.append(r2)
            int r2 = r4.getVersion()
            r0.append(r2)
            java.lang.String r2 = ",以TA为准。"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        Lad:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r1 = r4.getPackageName()
            r0.put(r1, r5)
            java.lang.String r0 = r4.getAlias()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Leb
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.lang.String r4 = r4.getAlias()
            r0.put(r4, r5)
            goto Leb
        Lca:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto Leb
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "新传入的纯APK插件"
            r5.append(r0)
            java.lang.String r4 = r4.getName()
            r5.append(r4)
            java.lang.String r4 = "版本号还没有内置的大，什么都不做。"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        Leb:
            return
    }

    private final void refreshPluginMap(java.util.List<com.qihoo360.replugin.model.PluginInfo> r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r3 = r3.iterator()
        L7:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1b
            java.lang.Object r0 = r3.next()
            com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0
            com.qihoo360.loader2.Plugin r1 = com.qihoo360.loader2.Plugin.build(r0)
            r2.putPluginObject(r0, r1)
            goto L7
        L1b:
            return
    }

    private void refreshPluginsFromHostSvc() {
            r5 = this;
            java.lang.String r0 = "ws001"
            r1 = 0
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> Lc
            java.util.List r2 = r2.listPlugins()     // Catch: java.lang.Throwable -> Lc
            goto L26
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "lst.p: "
            r3.append(r4)
            java.lang.String r4 = r2.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r3, r2)
            r2 = r1
        L26:
            r5.refreshPluginMap(r2)
            boolean r2 = r5.isNeedToUpdate(r2)
            if (r2 == 0) goto L41
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L38
            java.lang.String r2 = "plugins need to perform update operations"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2)
        L38:
            java.util.List r1 = com.qihoo360.replugin.packages.PluginManagerProxy.updateAllPlugins()     // Catch: android.os.RemoteException -> L3d
            goto L41
        L3d:
            r0 = move-exception
            r0.printStackTrace()
        L41:
            if (r1 == 0) goto L46
            r5.refreshPluginMap(r1)
        L46:
            return
    }

    final void addBuiltinModule(java.lang.String r3, java.lang.Class<? extends com.qihoo360.i.IModule> r4, com.qihoo360.i.IModule r5) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.i.IModule>> r0 = r2.mBuiltinModules
            java.lang.Object r0 = r0.get(r3)
            java.util.HashMap r0 = (java.util.HashMap) r0
            if (r0 != 0) goto L14
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.i.IModule>> r1 = r2.mBuiltinModules
            r1.put(r3, r0)
        L14:
            java.lang.String r3 = r4.getName()
            r0.put(r3, r5)
            return
    }

    final boolean addDynamicClass(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.Class r7) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "addDynamicClass: class="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " plugin="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " type="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " target="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = " def="
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L3a:
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r0 = r2.mDynamicClasses
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L44
            r3 = 0
            return r3
        L44:
            com.qihoo360.loader2.PmBase$DynamicClass r0 = new com.qihoo360.loader2.PmBase$DynamicClass
            r1 = 0
            r0.<init>(r1)
            r0.plugin = r4
            r0.classType = r5
            r0.className = r6
            r0.defClass = r7
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r4 = r2.mDynamicClasses
            r4.put(r3, r0)
            r3 = 1
            return r3
    }

    final void attach() {
            r5 = this;
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()     // Catch: java.lang.Throwable -> L15
            int r2 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L15
            com.qihoo360.loader2.PluginProcessPer r3 = r5.mClient     // Catch: java.lang.Throwable -> L15
            java.lang.String r4 = r5.mDefaultPluginName     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = r0.attachPluginProcess(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L15
            r5.mDefaultPluginName = r0     // Catch: java.lang.Throwable -> L15
            goto L30
        L15:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "c.n.a: "
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r1, r0)
        L30:
            return
    }

    final void callAppCreate() {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 == 0) goto Lc
            long r0 = com.qihoo360.loader2.PluginProcessMain.getPersistentCookie()
            r4.mLocalCookie = r0
        Lc:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L28
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "initial local cookie="
            r0.append(r2)
            long r2 = r4.mLocalCookie
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L28:
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 != 0) goto L62
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r2 = "ACTION_NEW_PLUGIN"
            r0.addAction(r2)
            java.lang.String r2 = "ACTION_UNINSTALL_PLUGIN"
            r0.addAction(r2)
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Exception -> L49
            com.qihoo360.replugin.compat.LocalBroadcastManager r2 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r2)     // Catch: java.lang.Exception -> L49
            android.content.BroadcastReceiver r3 = r4.mBroadcastReceiver     // Catch: java.lang.Exception -> L49
            r2.registerReceiver(r3, r0)     // Catch: java.lang.Exception -> L49
            goto L62
        L49:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "p m hlc a r e: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
        L62:
            return
    }

    final void callAttach() {
            r5 = this;
            java.lang.Class<com.qihoo360.loader2.PmBase> r0 = com.qihoo360.loader2.PmBase.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r5.mClassLoader = r0
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r5.mPlugins
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1
            android.content.Context r2 = r5.mContext
            java.lang.ClassLoader r3 = r5.mClassLoader
            com.qihoo360.loader2.PluginCommImpl r4 = r5.mLocal
            r1.attach(r2, r3, r4)
            goto L12
        L28:
            boolean r0 = com.qihoo360.loader2.PluginManager.isPluginProcess()
            if (r0 == 0) goto L6f
            java.lang.String r0 = r5.mDefaultPluginName
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6f
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r5.mPlugins
            java.lang.String r1 = r5.mDefaultPluginName
            java.lang.Object r0 = r0.get(r1)
            com.qihoo360.loader2.Plugin r0 = (com.qihoo360.loader2.Plugin) r0
            if (r0 == 0) goto L6f
            r1 = 3
            r2 = 1
            boolean r1 = r0.load(r1, r2)
            if (r1 != 0) goto L66
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L66
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "failed to load default plugin="
            r2.append(r3)
            java.lang.String r3 = r5.mDefaultPluginName
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L66:
            if (r1 == 0) goto L6f
            r5.mDefaultPlugin = r0
            com.qihoo360.loader2.PluginProcessPer r1 = r5.mClient
            r1.init(r0)
        L6f:
            return
    }

    void dump(java.io.FileDescriptor r10, java.io.PrintWriter r11, java.lang.String[] r12) {
            r9 = this;
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L185
            int r0 = r12.length
            r1 = 0
            r2 = r1
            r3 = r2
        L8:
            r4 = 1
            if (r2 >= r0) goto L34
            r5 = r12[r2]
            if (r3 == 0) goto L28
            android.content.Context r10 = com.qihoo360.i.Factory.queryPluginContext(r5)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "plugin.c="
            r12.append(r0)
            r12.append(r10)
            java.lang.String r10 = r12.toString()
            r11.println(r10)
            return
        L28:
            java.lang.String r6 = "--load"
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L31
            r3 = r4
        L31:
            int r2 = r2 + 1
            goto L8
        L34:
            int r0 = r12.length
            r2 = r1
            r3 = r2
        L37:
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 >= r0) goto L5a
            r6 = r12[r2]
            if (r3 == 0) goto L4e
            com.qihoo360.loader2.PluginBinderInfo r10 = new com.qihoo360.loader2.PluginBinderInfo     // Catch: java.lang.Throwable -> L49
            r11 = 4
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L49
            com.qihoo360.loader2.MP.startPluginProcess(r6, r5, r10)     // Catch: java.lang.Throwable -> L49
            goto L4d
        L49:
            r10 = move-exception
            r10.printStackTrace()
        L4d:
            return
        L4e:
            java.lang.String r5 = "--start-plugin-process"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L57
            r3 = r4
        L57:
            int r2 = r2 + 1
            goto L37
        L5a:
            int r0 = r12.length
            r2 = r1
        L5c:
            if (r2 >= r0) goto L8b
            r3 = r12[r2]
            java.lang.String r6 = "--reason"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L88
            java.lang.String r10 = "--- Reason ---"
            r11.println(r10)
            java.util.ArrayList<java.lang.String> r10 = com.qihoo360.loader2.Plugin.sLoadedReasons
            if (r10 == 0) goto L87
            java.util.ArrayList<java.lang.String> r10 = com.qihoo360.loader2.Plugin.sLoadedReasons
            java.util.Iterator r10 = r10.iterator()
        L77:
            boolean r12 = r10.hasNext()
            if (r12 == 0) goto L87
            java.lang.Object r12 = r10.next()
            java.lang.String r12 = (java.lang.String) r12
            r11.println(r12)
            goto L77
        L87:
            return
        L88:
            int r2 = r2 + 1
            goto L5c
        L8b:
            int r0 = r12.length
            r2 = r1
        L8d:
            if (r2 >= r0) goto Ldc
            r3 = r12[r2]
            java.lang.String r6 = "--binder-reason"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Ld9
            java.lang.String r10 = "--- Binder Reason ---"
            r11.println(r10)
            java.util.HashMap<java.lang.String, java.lang.String> r10 = com.qihoo360.loader2.MP.sBinderReasons
            if (r10 == 0) goto Ld8
            java.util.HashMap<java.lang.String, java.lang.String> r10 = com.qihoo360.loader2.MP.sBinderReasons
            java.util.Set r10 = r10.keySet()
            java.util.Iterator r10 = r10.iterator()
        Lac:
            boolean r12 = r10.hasNext()
            if (r12 == 0) goto Ld8
            java.lang.Object r12 = r10.next()
            java.lang.String r12 = (java.lang.String) r12
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "binder: "
            r0.append(r1)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            r11.println(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.MP.sBinderReasons
            java.lang.Object r12 = r0.get(r12)
            java.lang.String r12 = (java.lang.String) r12
            r11.println(r12)
            goto Lac
        Ld8:
            return
        Ld9:
            int r2 = r2 + 1
            goto L8d
        Ldc:
            int r0 = r12.length
            java.lang.String r2 = ""
            r3 = r2
            r6 = r3
            r2 = r1
        Le2:
            if (r1 >= r0) goto L104
            r7 = r12[r1]
            if (r2 == 0) goto Lf8
            boolean r8 = android.text.TextUtils.isEmpty(r3)
            if (r8 == 0) goto Lf0
            r3 = r7
            goto L101
        Lf0:
            boolean r8 = android.text.TextUtils.isEmpty(r6)
            if (r8 == 0) goto Lf8
            r6 = r7
            goto L101
        Lf8:
            java.lang.String r8 = "--start"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L101
            r2 = r4
        L101:
            int r1 = r1 + 1
            goto Le2
        L104:
            if (r2 == 0) goto L12e
            boolean r10 = android.text.TextUtils.isEmpty(r3)
            if (r10 != 0) goto L122
            boolean r10 = android.text.TextUtils.isEmpty(r6)
            if (r10 != 0) goto L122
            android.content.Intent r10 = new android.content.Intent
            r10.<init>()
            r11 = 268435456(0x10000000, float:2.524355E-29)
            r10.setFlags(r11)
            android.content.Context r11 = r9.mContext
            com.qihoo360.i.Factory.startActivity(r11, r10, r3, r6, r5)
            goto L12d
        L122:
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L12d
            java.lang.String r10 = "ws001"
            java.lang.String r11 = "need {plugin} and {activity}"
            com.qihoo360.replugin.helper.LogDebug.d(r10, r11)
        L12d:
            return
        L12e:
            com.qihoo360.replugin.utils.ReflectUtils.dumpObject(r9, r10, r11, r12)
            r11.println()
            java.lang.String r0 = "--- plugins V2 ---"
            r11.println(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--- plugins.size = "
            r0.append(r1)
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r1 = r9.mPlugins
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = " ---"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r11.println(r0)
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r9.mPlugins
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L162:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L174
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo
            r11.println(r1)
            goto L162
        L174:
            r11.println()
            com.qihoo360.loader2.PluginProcessMain.dump(r10, r11, r12)
            java.lang.String r0 = "--- plugins.cached objects ---"
            r11.println(r0)
            com.qihoo360.loader2.Plugin.dump(r10, r11, r12)
            r11.println()
        L185:
            return
    }

    final java.util.HashMap<java.lang.String, com.qihoo360.i.IModule> getBuiltinModules(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.i.IModule>> r0 = r1.mBuiltinModules
            java.lang.Object r2 = r0.get(r2)
            java.util.HashMap r2 = (java.util.HashMap) r2
            return r2
    }

    final com.qihoo360.replugin.IHostBinderFetcher getBuiltinPlugin(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.IHostBinderFetcher> r0 = r2.mBuiltinPlugins
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.IHostBinderFetcher> r1 = r2.mBuiltinPlugins     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld
            com.qihoo360.replugin.IHostBinderFetcher r3 = (com.qihoo360.replugin.IHostBinderFetcher) r3     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return r3
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    final android.os.IBinder getHostBinder() {
            r1 = this;
            com.qihoo360.loader2.PmHostSvc r0 = r1.mHostSvc
            return r0
    }

    final com.qihoo360.loader2.Plugin getPlugin(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r1.mPlugins
            java.lang.Object r2 = r0.get(r2)
            com.qihoo360.loader2.Plugin r2 = (com.qihoo360.loader2.Plugin) r2
            return r2
    }

    final java.lang.String getPluginByDynamicClass(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r0 = r1.mDynamicClasses
            java.lang.Object r2 = r0.get(r2)
            com.qihoo360.loader2.PmBase$DynamicClass r2 = (com.qihoo360.loader2.PmBase.DynamicClass) r2
            if (r2 == 0) goto Ld
            java.lang.String r2 = r2.plugin
            return r2
        Ld:
            java.lang.String r2 = ""
            return r2
    }

    final void handleServiceCreated(android.app.Service r4) {
            r3 = this;
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L1a
            int r1 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L1a
            com.qihoo360.loader2.Plugin r2 = r3.mDefaultPlugin     // Catch: java.lang.Throwable -> L1a
            com.qihoo360.replugin.model.PluginInfo r2 = r2.mInfo     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L1a
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L1a
            r0.regService(r1, r2, r4)     // Catch: java.lang.Throwable -> L1a
            goto L35
        L1a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "r.s: "
            r0.append(r1)
            java.lang.String r1 = r4.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r4)
        L35:
            return
    }

    final void handleServiceDestroyed(android.app.Service r4) {
            r3 = this;
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L1a
            int r1 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L1a
            com.qihoo360.loader2.Plugin r2 = r3.mDefaultPlugin     // Catch: java.lang.Throwable -> L1a
            com.qihoo360.replugin.model.PluginInfo r2 = r2.mInfo     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L1a
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L1a
            r0.unregService(r1, r2, r4)     // Catch: java.lang.Throwable -> L1a
            goto L35
        L1a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ur.s: "
            r0.append(r1)
            java.lang.String r1 = r4.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r4)
        L35:
            return
    }

    void init() {
            r4 = this;
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r0 = r0.getCallbacks()
            r0.initPnPluginOverride()
            boolean r0 = com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_ENABLE
            if (r0 == 0) goto L1d
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 == 0) goto L19
            r4.initForServer()
            goto L2f
        L19:
            r4.initForClient()
            goto L2f
        L1d:
            boolean r0 = com.qihoo360.replugin.base.IPC.isUIProcess()
            if (r0 == 0) goto L2c
            r4.initForServer()
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.attach()
            goto L2f
        L2c:
            r4.initForClient()
        L2f:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r4.mPlugins
            com.qihoo360.loader2.PluginTable.initPlugins(r0)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L67
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r4.mPlugins
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L42:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L67
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "plugin: p="
            r2.append(r3)
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
            goto L42
        L67:
            return
    }

    final void insertNewPlugin(com.qihoo360.replugin.model.PluginInfo r6) {
            r5 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "insert new plugin: info="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            byte[] r0 = com.qihoo360.loader2.PmBase.LOCKER
            monitor-enter(r0)
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.replugin.RePluginCallbacks r1 = r1.getCallbacks()     // Catch: java.lang.Throwable -> Lb8
            boolean r1 = r1.isPluginBlocked(r6)     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto L47
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto L45
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r2.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r3 = "insert new plugin: plugin is blocked, in="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb8
            r2.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.replugin.helper.LogDebug.d(r1, r6)     // Catch: java.lang.Throwable -> Lb8
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb8
            return
        L47:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r1 = r5.mPlugins     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r2 = r6.getName()     // Catch: java.lang.Throwable -> Lb8
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1     // Catch: java.lang.Throwable -> Lb8
            r2 = 1
            if (r1 == 0) goto L66
            com.qihoo360.replugin.model.PluginInfo r3 = r1.mInfo     // Catch: java.lang.Throwable -> Lb8
            int r3 = r3.getType()     // Catch: java.lang.Throwable -> Lb8
            r4 = 2
            if (r3 != r4) goto L66
            int r3 = r6.getType()     // Catch: java.lang.Throwable -> Lb8
            if (r3 != r2) goto L66
            goto L8c
        L66:
            if (r1 == 0) goto L8c
            boolean r1 = r1.isInitialized()     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto L8c
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto L88
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r3.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r4 = "insert new plugin: failed cause plugin has loaded, plugin="
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb8
            r3.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.replugin.helper.LogDebug.d(r1, r6)     // Catch: java.lang.Throwable -> Lb8
        L88:
            r5.mNeedRestart = r2     // Catch: java.lang.Throwable -> Lb8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb8
            return
        L8c:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto La6
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r2.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r3 = "insert new plugin: ok: plugin="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb8
            r2.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> Lb8
        La6:
            com.qihoo360.loader2.Plugin r1 = com.qihoo360.loader2.Plugin.build(r6)     // Catch: java.lang.Throwable -> Lb8
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Throwable -> Lb8
            java.lang.ClassLoader r3 = r5.mClassLoader     // Catch: java.lang.Throwable -> Lb8
            com.qihoo360.loader2.PluginCommImpl r4 = r5.mLocal     // Catch: java.lang.Throwable -> Lb8
            r1.attach(r2, r3, r4)     // Catch: java.lang.Throwable -> Lb8
            r5.putPluginObject(r6, r1)     // Catch: java.lang.Throwable -> Lb8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb8
            return
        Lb8:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb8
            throw r6
    }

    final void installBuiltinPlugin(java.lang.String r3, com.qihoo360.replugin.IHostBinderFetcher r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.IHostBinderFetcher> r0 = r2.mBuiltinPlugins
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.IHostBinderFetcher> r1 = r2.mBuiltinPlugins     // Catch: java.lang.Throwable -> La
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    final boolean isActivity(java.lang.String r2) {
            r1 = this;
            java.util.HashSet<java.lang.String> r0 = r1.mContainerActivities
            boolean r2 = r0.contains(r2)
            return r2
    }

    final boolean isDynamicClass(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1d
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r0 = r1.mDynamicClasses
            java.lang.Object r3 = r0.get(r3)
            com.qihoo360.loader2.PmBase$DynamicClass r3 = (com.qihoo360.loader2.PmBase.DynamicClass) r3
            if (r3 == 0) goto L1d
            java.lang.String r3 = r3.plugin
            boolean r2 = r2.equals(r3)
            return r2
        L1d:
            r2 = 0
            return r2
    }

    final com.qihoo360.loader2.Plugin loadAppPlugin(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r2.mPlugins
            java.lang.Object r3 = r0.get(r3)
            com.qihoo360.loader2.Plugin r3 = (com.qihoo360.loader2.Plugin) r3
            r0 = 3
            r1 = 1
            com.qihoo360.loader2.Plugin r3 = r2.loadPlugin(r3, r0, r1)
            return r3
    }

    final java.lang.Class<?> loadClass(java.lang.String r9, boolean r10) {
            r8 = this;
            java.lang.Class<com.qihoo360.replugin.component.service.server.PluginPitService> r10 = com.qihoo360.replugin.component.service.server.PluginPitService.class
            java.lang.String r10 = r10.getName()
            boolean r10 = r9.startsWith(r10)
            if (r10 == 0) goto L29
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L26
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "loadClass: Loading PitService Class... clz="
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            java.lang.String r10 = "PmBase"
            com.qihoo360.replugin.helper.LogDebug.i(r10, r9)
        L26:
            java.lang.Class<com.qihoo360.replugin.component.service.server.PluginPitService> r9 = com.qihoo360.replugin.component.service.server.PluginPitService.class
            return r9
        L29:
            java.util.HashSet<java.lang.String> r10 = r8.mContainerActivities
            boolean r10 = r10.contains(r9)
            java.lang.String r0 = "ws001"
            if (r10 == 0) goto L53
            com.qihoo360.loader2.PluginProcessPer r10 = r8.mClient
            java.lang.Class r10 = r10.resolveActivityClass(r9)
            if (r10 == 0) goto L3c
            return r10
        L3c:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "p m hlc u d a o "
            r10.append(r1)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r0, r9)
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyActivity> r9 = com.qihoo360.replugin.component.dummy.DummyActivity.class
            return r9
        L53:
            java.util.HashSet<java.lang.String> r10 = r8.mContainerServices
            boolean r10 = r10.contains(r9)
            if (r10 == 0) goto L79
            java.lang.Class r10 = r8.loadServiceClass(r9)
            if (r10 == 0) goto L62
            return r10
        L62:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "p m hlc u d s o "
            r10.append(r1)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r0, r9)
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyService> r9 = com.qihoo360.replugin.component.dummy.DummyService.class
            return r9
        L79:
            java.util.HashSet<java.lang.String> r10 = r8.mContainerProviders
            boolean r10 = r10.contains(r9)
            if (r10 == 0) goto L9f
            java.lang.Class r10 = r8.loadProviderClass(r9)
            if (r10 == 0) goto L88
            return r10
        L88:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "p m hlc u d p o "
            r10.append(r1)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r0, r9)
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyProvider> r9 = com.qihoo360.replugin.component.dummy.DummyProvider.class
            return r9
        L9f:
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r10 = r8.mDynamicClasses
            java.lang.Object r10 = r10.get(r9)
            com.qihoo360.loader2.PmBase$DynamicClass r10 = (com.qihoo360.loader2.PmBase.DynamicClass) r10
            if (r10 == 0) goto L24f
            android.content.Context r1 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.lang.String r2 = r10.plugin
            com.qihoo360.loader2.PluginDesc r2 = com.qihoo360.loader2.PluginDesc.get(r2)
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r4 = "loadClass"
            if (r3 == 0) goto L10b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "desc="
            r3.append(r5)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
            if (r2 == 0) goto Le7
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "desc.isLarge()="
            r3.append(r5)
            boolean r5 = r2.isLarge()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        Le7:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "RePlugin.isPluginDexExtracted("
            r3.append(r5)
            java.lang.String r5 = r10.plugin
            r3.append(r5)
            java.lang.String r5 = ") = "
            r3.append(r5)
            java.lang.String r5 = r10.plugin
            boolean r5 = com.qihoo360.replugin.RePlugin.isPluginDexExtracted(r5)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L10b:
            if (r2 == 0) goto L137
            java.lang.String r3 = r2.getPluginName()
            com.qihoo360.replugin.model.PluginInfo r5 = com.qihoo360.loader2.PluginTable.getPluginInfo(r3)
            if (r5 != 0) goto L137
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L134
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "plugin="
            r9.append(r10)
            r9.append(r3)
            java.lang.String r10 = " not found, return DynamicClassProxyActivity.class"
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r9)
        L134:
            java.lang.Class<com.qihoo360.replugin.component.activity.DynamicClassProxyActivity> r9 = com.qihoo360.replugin.component.activity.DynamicClassProxyActivity.class
            return r9
        L137:
            if (r2 == 0) goto L149
            boolean r2 = r2.isLarge()
            if (r2 == 0) goto L149
            java.lang.String r2 = r10.plugin
            boolean r2 = com.qihoo360.replugin.RePlugin.isPluginDexExtracted(r2)
            if (r2 != 0) goto L149
            r2 = 1
            goto L14a
        L149:
            r2 = 0
        L14a:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L162
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "needStartLoadingActivity = "
            r3.append(r5)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L162:
            if (r2 == 0) goto L17f
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r3.setFlags(r5)
            android.content.ComponentName r5 = new android.content.ComponentName
            java.lang.String r6 = com.qihoo360.replugin.base.IPC.getPackageName()
            java.lang.String r7 = "com.qihoo360.loader2.updater.PluginLoadingActivity2"
            r5.<init>(r6, r7)
            r3.setComponent(r5)
            r1.startActivity(r3)
        L17f:
            java.lang.String r3 = r10.plugin
            com.qihoo360.loader2.Plugin r3 = r8.loadAppPlugin(r3)
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L19d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "p="
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r5)
        L19d:
            r5 = 300(0x12c, double:1.48E-321)
            if (r3 == 0) goto L1cc
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L1b6
            java.lang.String r4 = r10.className     // Catch: java.lang.Throwable -> L1b6
            java.lang.Class r3 = r3.loadClass(r4)     // Catch: java.lang.Throwable -> L1b6
            if (r2 == 0) goto L1b5
            com.qihoo360.loader2.PmBase$2 r2 = new com.qihoo360.loader2.PmBase$2     // Catch: java.lang.Throwable -> L1b6
            r2.<init>(r8, r1)     // Catch: java.lang.Throwable -> L1b6
            com.qihoo360.mobilesafe.api.Tasks.postDelayed2Thread(r2, r5)     // Catch: java.lang.Throwable -> L1b6
        L1b5:
            return r3
        L1b6:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "p m hlc dc "
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r0, r2, r1)
            goto L1f3
        L1cc:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L1eb
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "加载 "
            r2.append(r3)
            java.lang.String r3 = r10.plugin
            r2.append(r3)
            java.lang.String r3 = " 失败"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2)
        L1eb:
            com.qihoo360.loader2.PmBase$3 r2 = new com.qihoo360.loader2.PmBase$3
            r2.<init>(r8, r1)
            com.qihoo360.mobilesafe.api.Tasks.postDelayed2Thread(r2, r5)
        L1f3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "p m hlc dc failed: "
            r1.append(r2)
            r1.append(r9)
            java.lang.String r9 = " t="
            r1.append(r9)
            java.lang.String r9 = r10.className
            r1.append(r9)
            java.lang.String r9 = " tp="
            r1.append(r9)
            java.lang.String r9 = r10.classType
            r1.append(r9)
            java.lang.String r9 = " df="
            r1.append(r9)
            java.lang.Class r9 = r10.defClass
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r0, r9)
            java.lang.String r9 = r10.classType
            java.lang.String r0 = "activity"
            boolean r9 = r0.equals(r9)
            if (r9 == 0) goto L232
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyActivity> r9 = com.qihoo360.replugin.component.dummy.DummyActivity.class
            return r9
        L232:
            java.lang.String r9 = r10.classType
            java.lang.String r0 = "service"
            boolean r9 = r0.equals(r9)
            if (r9 == 0) goto L23f
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyService> r9 = com.qihoo360.replugin.component.dummy.DummyService.class
            return r9
        L23f:
            java.lang.String r9 = r10.classType
            java.lang.String r0 = "provider"
            boolean r9 = r0.equals(r9)
            if (r9 == 0) goto L24c
            java.lang.Class<com.qihoo360.replugin.component.dummy.DummyProvider> r9 = com.qihoo360.replugin.component.dummy.DummyProvider.class
            return r9
        L24c:
            java.lang.Class r9 = r10.defClass
            return r9
        L24f:
            java.lang.Class r9 = r8.loadDefaultClass(r9)
            return r9
    }

    final com.qihoo360.loader2.Plugin loadDexPlugin(java.lang.String r3, com.qihoo360.loader2.PluginCommImpl r4) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r1 = r2.mPlugins
            java.lang.Object r3 = r1.get(r3)
            com.qihoo360.loader2.Plugin r3 = (com.qihoo360.loader2.Plugin) r3
            java.lang.ClassLoader r1 = r2.mClassLoader
            com.qihoo360.loader2.Plugin r3 = com.qihoo360.loader2.Plugin.cloneAndReattach(r0, r3, r1, r4)
            r4 = 2
            r0 = 1
            com.qihoo360.loader2.Plugin r3 = r2.loadPlugin(r3, r4, r0)
            return r3
    }

    final com.qihoo360.loader2.Plugin loadPackageInfoPlugin(java.lang.String r3, com.qihoo360.loader2.PluginCommImpl r4) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r1 = r2.mPlugins
            java.lang.Object r3 = r1.get(r3)
            com.qihoo360.loader2.Plugin r3 = (com.qihoo360.loader2.Plugin) r3
            java.lang.ClassLoader r1 = r2.mClassLoader
            com.qihoo360.loader2.Plugin r3 = com.qihoo360.loader2.Plugin.cloneAndReattach(r0, r3, r1, r4)
            r4 = 0
            r0 = 1
            com.qihoo360.loader2.Plugin r3 = r2.loadPlugin(r3, r4, r0)
            return r3
    }

    final com.qihoo360.loader2.Plugin loadPlugin(com.qihoo360.loader2.Plugin r3, int r4, boolean r5) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r5 = r3.load(r4, r5)
            if (r5 != 0) goto L2b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "pmb.lp: f to l. lt="
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = "; i="
            r5.append(r4)
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3)
            return r0
        L2b:
            return r3
    }

    final com.qihoo360.loader2.Plugin loadPlugin(com.qihoo360.replugin.model.PluginInfo r3, com.qihoo360.loader2.PluginCommImpl r4, int r5, boolean r6) {
            r2 = this;
            com.qihoo360.loader2.Plugin r3 = com.qihoo360.loader2.Plugin.build(r3)
            android.content.Context r0 = r2.mContext
            java.lang.ClassLoader r1 = r2.mClassLoader
            r3.attach(r0, r1, r4)
            com.qihoo360.loader2.Plugin r3 = r2.loadPlugin(r3, r5, r6)
            return r3
    }

    final com.qihoo360.loader2.Plugin loadResourcePlugin(java.lang.String r3, com.qihoo360.loader2.PluginCommImpl r4) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r1 = r2.mPlugins
            java.lang.Object r3 = r1.get(r3)
            com.qihoo360.loader2.Plugin r3 = (com.qihoo360.loader2.Plugin) r3
            java.lang.ClassLoader r1 = r2.mClassLoader
            com.qihoo360.loader2.Plugin r3 = com.qihoo360.loader2.Plugin.cloneAndReattach(r0, r3, r1, r4)
            r4 = 1
            com.qihoo360.loader2.Plugin r3 = r2.loadPlugin(r3, r4, r4)
            return r3
    }

    final com.qihoo360.loader2.Plugin lookupPlugin(java.lang.ClassLoader r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r3.mPlugins
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1
            if (r1 == 0) goto La
            java.lang.ClassLoader r2 = r1.getClassLoader()
            if (r2 != r4) goto La
            return r1
        L1f:
            r4 = 0
            return r4
    }

    final void newPluginFound(com.qihoo360.replugin.model.PluginInfo r4, boolean r5) {
            r3 = this;
            com.qihoo360.loader2.PluginTable.updatePlugin(r4)
            r3.insertNewPlugin(r4)
            java.lang.String r0 = r4.getName()
            int r1 = r4.getVersion()
            r2 = 0
            com.qihoo360.loader2.PluginStatusController.setStatus(r0, r1, r2)
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 == 0) goto L1a
            boolean r5 = r3.mNeedRestart
        L1a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "p.m. n p f n="
            r0.append(r1)
            java.lang.String r1 = r4.getName()
            r0.append(r1)
            java.lang.String r1 = " b1="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " b2="
            r0.append(r1)
            boolean r1 = r3.mNeedRestart
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.i(r1, r0)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.qihoo360.loader2.ACTION_NEW_PLUGIN"
            r0.<init>(r1)
            java.lang.String r1 = "plugin_info"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "persist_need_restart"
            r0.putExtra(r4, r5)
            boolean r4 = r3.mNeedRestart
            java.lang.String r5 = "self_need_restart"
            r0.putExtra(r5, r4)
            android.content.Context r4 = r3.mContext
            com.qihoo360.replugin.compat.LocalBroadcastManager r4 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r4)
            r4.sendBroadcast(r0)
            return
    }

    final void pluginUninstalled(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Clear plugin cache. pn="
            r0.append(r1)
            java.lang.String r1 = r3.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1e:
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r2.mPlugins
            java.lang.String r1 = r3.getName()
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L33
            java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r0 = r2.mPlugins
            java.lang.String r1 = r3.getName()
            r0.remove(r1)
        L33:
            com.qihoo360.loader2.PluginTable.removeInfo(r3)
            java.lang.String r3 = r3.getName()
            java.lang.String r3 = com.qihoo360.loader2.Plugin.queryCachedFilename(r3)
            com.qihoo360.loader2.Plugin.clearCachedPlugin(r3)
            return
    }

    final void removeDynamicClass(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PmBase$DynamicClass> r0 = r1.mDynamicClasses
            r0.remove(r2)
            return
    }

    final com.qihoo360.loader2.IPluginClient startPluginProcessLocked(java.lang.String r9, int r10, com.qihoo360.loader2.PluginBinderInfo r11) {
            r8 = this;
            java.lang.String r0 = " index="
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "ws001"
            if (r1 == 0) goto L24
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "start plugin process: plugin="
            r1.append(r3)
            r1.append(r9)
            java.lang.String r3 = " info="
            r1.append(r3)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L24:
            int r1 = r11.request
            r3 = 1
            r4 = -1
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r3) goto L2f
            if (r10 != r5) goto L2f
            r10 = r4
        L2f:
            int r1 = r11.request
            r3 = 4
            if (r1 != r3) goto L37
            if (r10 != r5) goto L37
            r10 = r4
        L37:
            r6 = 17000(0x4268, double:8.399E-320)
            com.qihoo360.loader2.StubProcessManager.schedulePluginProcessLoop(r6)
            com.qihoo360.loader2.IPluginClient r1 = com.qihoo360.loader2.PluginProcessMain.probePluginClient(r9, r10, r11)
            if (r1 == 0) goto L63
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L62
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "start plugin process: probe client ok, already running, plugin="
            r10.append(r11)
            r10.append(r9)
            java.lang.String r9 = " client="
            r10.append(r9)
            r10.append(r1)
            java.lang.String r9 = r10.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r9)
        L62:
            return r1
        L63:
            int r5 = com.qihoo360.loader2.PluginProcessMain.allocProcess(r9, r10)     // Catch: java.lang.Throwable -> L86
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L86
            if (r1 == 0) goto L9f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            r1.<init>()     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "start plugin process: alloc process ok, plugin="
            r1.append(r3)     // Catch: java.lang.Throwable -> L86
            r1.append(r9)     // Catch: java.lang.Throwable -> L86
            r1.append(r0)     // Catch: java.lang.Throwable -> L86
            r1.append(r5)     // Catch: java.lang.Throwable -> L86
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L86
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)     // Catch: java.lang.Throwable -> L86
            goto L9f
        L86:
            r1 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "a.p.p: "
            r3.append(r6)
            java.lang.String r6 = r1.getMessage()
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3, r1)
        L9f:
            r1 = 0
            if (r5 == r4) goto Laf
            boolean r3 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r5)
            if (r3 != 0) goto Laf
            boolean r3 = com.qihoo360.loader2.PluginManager.isPluginProcess(r5)
            if (r3 != 0) goto Laf
            return r1
        Laf:
            android.content.Context r3 = r8.mContext
            boolean r3 = com.qihoo360.loader2.PluginProviderStub.proxyStartPluginProcess(r3, r5)
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto Ld3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "start plugin process: start process ok, plugin="
            r4.append(r6)
            r4.append(r9)
            r4.append(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)
        Ld3:
            if (r3 != 0) goto Ld6
            return r1
        Ld6:
            com.qihoo360.loader2.IPluginClient r10 = com.qihoo360.loader2.PluginProcessMain.probePluginClient(r9, r10, r11)
            if (r10 != 0) goto Le2
            java.lang.String r9 = "spp pc n"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r9)
            return r1
        Le2:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L102
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "start plugin process: probe client ok, plugin="
            r1.append(r3)
            r1.append(r9)
            r1.append(r0)
            int r9 = r11.index
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r9)
        L102:
            return r10
    }
}
