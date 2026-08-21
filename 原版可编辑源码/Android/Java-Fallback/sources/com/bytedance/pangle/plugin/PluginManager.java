package com.bytedance.pangle.plugin;

public class PluginManager {
    private static final java.lang.String TAG = "PluginManager";
    private static volatile com.bytedance.pangle.plugin.PluginManager sInstance;
    private volatile boolean hasInstallFromDownloadDir;
    private java.util.concurrent.ExecutorService mInstallThreadPool;
    private volatile boolean mIsParsePluginConfig;
    private volatile java.util.Map<java.lang.String, com.bytedance.pangle.plugin.Plugin> mPlugins;
    private final com.bytedance.pangle.plugin.c pluginLoader;

    private PluginManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mPlugins = r0
            com.bytedance.pangle.plugin.c r0 = new com.bytedance.pangle.plugin.c
            r0.<init>()
            r1.pluginLoader = r0
            return
    }

    private void ensurePluginFileExist(com.bytedance.pangle.plugin.Plugin r3) {
            r2 = this;
            if (r3 == 0) goto L22
            boolean r0 = r3.isInstalled()
            if (r0 == 0) goto L22
            java.lang.String r0 = r3.mPkgName
            int r1 = r3.getVersion()
            java.lang.String r0 = com.bytedance.pangle.d.c.b(r0, r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 != 0) goto L22
            java.lang.String r3 = r3.mPkgName
            r2.unInstallPackage(r3)
        L22:
            return
    }

    public static com.bytedance.pangle.plugin.PluginManager getInstance() {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.plugin.PluginManager> r0 = com.bytedance.pangle.plugin.PluginManager.class
            monitor-enter(r0)
            com.bytedance.pangle.plugin.PluginManager r1 = com.bytedance.pangle.plugin.PluginManager.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.plugin.PluginManager r1 = new com.bytedance.pangle.plugin.PluginManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.plugin.PluginManager.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.sInstance
            return r0
    }

    private synchronized void parsePluginConfig() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.mIsParsePluginConfig     // Catch: java.lang.Throwable -> Le7
            if (r0 == 0) goto L7
            monitor-exit(r7)
            return
        L7:
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r1 = "PluginManager parsePluginsJson"
            com.bytedance.pangle.log.ZeusLogger.v(r0, r1)     // Catch: java.lang.Throwable -> Le7
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Le7
            r0.<init>()     // Catch: java.lang.Throwable -> Le7
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            android.os.Bundle r1 = r1.metaData     // Catch: java.lang.Exception -> Ldd java.lang.Throwable -> Le7
            java.util.Set r2 = r1.keySet()     // Catch: java.lang.Throwable -> Le7
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Le7
        L35:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> Le7
            if (r3 == 0) goto L73
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> Le7
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Le7
            java.lang.String r4 = com.bytedance.pangle.g.e     // Catch: java.lang.Throwable -> Le7
            java.lang.String r5 = "PANGLE_"
            boolean r4 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> Le7
            if (r4 == 0) goto L63
            java.lang.String r4 = com.bytedance.pangle.g.e     // Catch: java.lang.Throwable -> Le7
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> Le7
            if (r4 != 0) goto L5b
            java.lang.String r4 = "ZEUS_PLUGIN_"
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> Le7
            if (r4 == 0) goto L35
        L5b:
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> Le7
            r0.add(r3)     // Catch: java.lang.Throwable -> Le7
            goto L35
        L63:
            java.lang.String r4 = com.bytedance.pangle.g.e     // Catch: java.lang.Throwable -> Le7
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> Le7
            if (r4 == 0) goto L35
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> Le7
            r0.add(r3)     // Catch: java.lang.Throwable -> Le7
            goto L35
        L73:
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r1.<init>()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
        L7c:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            if (r2 == 0) goto Lc6
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r3.<init>(r2)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            com.bytedance.pangle.plugin.Plugin r4 = new com.bytedance.pangle.plugin.Plugin     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r4.<init>(r3)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r3 = r4.mPkgName     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r1.put(r3, r4)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r3 = "Zeus/init_pangle"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r6 = "PluginManagerparsePluginsJson. find "
            r5.<init>(r6)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r4 = r4.mPkgName     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r5.append(r4)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r4 = r5.toString()     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            com.bytedance.pangle.log.ZeusLogger.i(r3, r4)     // Catch: org.json.JSONException -> Lad java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            goto L7c
        Lad:
            r3 = move-exception
            java.lang.String r4 = "Zeus/init_pangle"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r6 = "PluginManager parsePluginsJson failed. "
            r5.<init>(r6)     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            r5.append(r2)     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            com.bytedance.pangle.log.ZeusLogger.errReport(r4, r2, r3)     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            goto L7c
        Lc6:
            r7.mPlugins = r1     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r1 = "PluginManager parsePluginsJson success"
            com.bytedance.pangle.log.ZeusLogger.i(r0, r1)     // Catch: java.lang.Exception -> Ld0 java.lang.Throwable -> Le7
            goto Ld8
        Ld0:
            r0 = move-exception
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.String r2 = "PluginManager parsePluginsJson failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)     // Catch: java.lang.Throwable -> Le7
        Ld8:
            r0 = 1
            r7.mIsParsePluginConfig = r0     // Catch: java.lang.Throwable -> Le7
            monitor-exit(r7)
            return
        Ldd:
            r0 = move-exception
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.String r2 = "PluginManager parsePluginsJson failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)     // Catch: java.lang.Throwable -> Le7
            monitor-exit(r7)
            return
        Le7:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public void asyncInstall(java.lang.String r5, java.io.File r6) {
            r4 = this;
            java.lang.String r0 = "Zeus/install_pangle"
            if (r6 == 0) goto L1e
            java.util.concurrent.ExecutorService r1 = r4.getInstallThreadPool()
            com.bytedance.pangle.plugin.a r2 = new com.bytedance.pangle.plugin.a
            r2.<init>(r5, r6)
            r1.execute(r2)
            java.lang.String r5 = java.lang.String.valueOf(r6)
            java.lang.String r6 = "PluginManager asyncInstall, file="
            java.lang.String r5 = r6.concat(r5)
            com.bytedance.pangle.log.ZeusLogger.i(r0, r5)
            return
        L1e:
            r6 = 7
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = "asyncInstall apk is null !"
            r1[r2] = r3
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r5, r6, r1)
            java.lang.String r5 = "PluginManager asyncInstall apk is null !"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r5)
            return
    }

    public boolean checkPluginInstalled(java.lang.String r4) {
            r3 = this;
            com.bytedance.pangle.plugin.Plugin r0 = r3.getPlugin(r4)
            r3.ensurePluginFileExist(r0)
            if (r0 == 0) goto L11
            boolean r0 = r0.isInstalled()
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "PluginManager checkPluginInstalled, "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " = "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "Zeus/ppm_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r1, r4)
            return r0
    }

    public java.util.concurrent.ExecutorService getInstallThreadPool() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.mInstallThreadPool
            if (r0 != 0) goto L12
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            int r0 = r0.getInstallThreads()
            java.util.concurrent.ExecutorService r0 = com.bytedance.pangle.d.e.a(r0)
            r1.mInstallThreadPool = r0
        L12:
            java.util.concurrent.ExecutorService r0 = r1.mInstallThreadPool
            return r0
    }

    public com.bytedance.pangle.plugin.Plugin getPlugin(java.lang.String r2) {
            r1 = this;
            r0 = 1
            com.bytedance.pangle.plugin.Plugin r2 = r1.getPlugin(r2, r0)
            return r2
    }

    public com.bytedance.pangle.plugin.Plugin getPlugin(java.lang.String r2, boolean r3) {
            r1 = this;
            boolean r0 = com.bytedance.pangle.Zeus.hasInit()
            if (r0 != 0) goto L15
            boolean r0 = com.bytedance.pangle.util.b.a()
            if (r0 != 0) goto Ld
            goto L15
        Ld:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Please init Zeus first!"
            r2.<init>(r3)
            throw r2
        L15:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L1d
            r2 = 0
            return r2
        L1d:
            boolean r0 = r1.mIsParsePluginConfig
            if (r0 != 0) goto L24
            r1.parsePluginConfig()
        L24:
            java.util.Map<java.lang.String, com.bytedance.pangle.plugin.Plugin> r0 = r1.mPlugins
            java.lang.Object r2 = r0.get(r2)
            com.bytedance.pangle.plugin.Plugin r2 = (com.bytedance.pangle.plugin.Plugin) r2
            if (r3 == 0) goto L33
            if (r2 == 0) goto L33
            r2.init()
        L33:
            return r2
    }

    public synchronized void installFromDownloadDir() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.hasInstallFromDownloadDir     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto Le
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r1 = "PluginManager zeus has been installFromDownloadDir!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r1)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r2)
            return
        Le:
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L25
            boolean r0 = com.bytedance.pangle.d.d.a(r0)     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L20
            com.bytedance.pangle.plugin.d r0 = new com.bytedance.pangle.plugin.d     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            com.bytedance.pangle.d.e.a(r0)     // Catch: java.lang.Throwable -> L25
        L20:
            r0 = 1
            r2.hasInstallFromDownloadDir = r0     // Catch: java.lang.Throwable -> L25
            monitor-exit(r2)
            return
        L25:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public boolean isLoaded(java.lang.String r1) {
            r0 = this;
            com.bytedance.pangle.plugin.Plugin r1 = r0.getPlugin(r1)
            if (r1 == 0) goto Le
            boolean r1 = r1.isLoaded()
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public boolean loadPlugin(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.plugin.c r0 = r1.pluginLoader
            boolean r2 = r0.a(r2)
            return r2
    }

    public void setAllowDownloadPlugin(java.lang.String r4, int r5, boolean r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PluginManager setAllowDownloadPlugin, "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = " "
            r0.append(r1)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Zeus/ppm_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r1, r0)
            com.bytedance.pangle.plugin.Plugin r0 = r3.getPlugin(r4)
            if (r0 == 0) goto L79
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            r6 = r6 ^ 1
            android.content.SharedPreferences r0 = r0.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "DISABLE_DOWNLOAD_"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r2 = "_"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            if (r6 == 0) goto L50
            r2 = 0
            r0.putInt(r1, r2)
            goto L53
        L50:
            r0.remove(r1)
        L53:
            r0.apply()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ZeusSpUtils markAllowDownloadFlag packageName="
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r4 = " version="
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = " disable="
            r0.append(r4)
            r0.append(r6)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r5, r4)
        L79:
            return
    }

    public boolean syncInstall(java.lang.String r3, java.io.File r4) {
            r2 = this;
            java.lang.String r0 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "PluginManager syncInstall, file="
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "Zeus/install_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r0)
            com.bytedance.pangle.plugin.a r0 = new com.bytedance.pangle.plugin.a
            r0.<init>(r3, r4)
            boolean r3 = r0.a()
            return r3
    }

    public void tryOfflineInternalPlugin(java.lang.String r4, int r5) {
            r3 = this;
            com.bytedance.pangle.plugin.Plugin r0 = r3.getPlugin(r4)
            if (r0 == 0) goto L51
            int r1 = r0.getInternalVersionCode()
            if (r1 != r5) goto L51
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "PluginManager offlineInternalPlugin, pkgName:"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r2 = " pluginVer:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " apiVer:"
            r1.append(r5)
            int r5 = r0.getApiVersionCode()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "Zeus/ppm_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r1, r5)
            com.bytedance.pangle.util.l r5 = com.bytedance.pangle.util.l.a()
            int r0 = r0.getApiVersionCode()
            android.content.SharedPreferences r5 = r5.a
            android.content.SharedPreferences$Editor r5 = r5.edit()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "OFFLINE_INTERNAL_"
            java.lang.String r4 = r1.concat(r4)
            r5.putInt(r4, r0)
            r5.apply()
        L51:
            return
    }

    public void unInstallPackage(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "PluginManager unInstallPackage, "
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "Zeus/ppm_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r1, r0)
            com.bytedance.pangle.plugin.Plugin r0 = r3.getPlugin(r4)
            if (r0 == 0) goto L3f
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.a()
            android.content.SharedPreferences r0 = r0.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "UNINSTALL__"
            java.lang.String r1 = r2.concat(r1)
            r2 = 1
            r0.putBoolean(r1, r2)
            r0.apply()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r0 = "ZeusSpUtils markUnInstallFlag packageName="
            java.lang.String r4 = r0.concat(r4)
            java.lang.String r0 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r0, r4)
        L3f:
            return
    }
}
