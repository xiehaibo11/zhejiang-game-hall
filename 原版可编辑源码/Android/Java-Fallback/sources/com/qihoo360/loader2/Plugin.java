package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class Plugin {
    static final java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> FILENAME_2_COMPONENT_LIST = null;
    static final java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> FILENAME_2_DEX = null;
    static final java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> FILENAME_2_PACKAGE_INFO = null;
    static final java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> FILENAME_2_RESOURCES = null;
    static final int LOAD_APP = 3;
    static final int LOAD_DEX = 2;
    static final int LOAD_INFO = 0;
    static final int LOAD_RESOURCES = 1;
    private static final byte[] LOCK_LOAD_ENTRY = null;
    static final java.util.HashMap<java.lang.String, java.lang.String> PKG_NAME_2_PLUGIN_NAME = null;
    static final java.util.HashMap<java.lang.String, java.lang.String> PLUGIN_NAME_2_FILENAME = null;
    private static final java.lang.String TAG = "Plugin";
    static volatile java.util.ArrayList<java.lang.String> sLoadedReasons;
    com.qihoo360.replugin.component.app.PluginApplicationClient mApplicationClient;
    android.content.Context mContext;
    boolean mDummyPlugin;
    com.qihoo360.replugin.model.PluginInfo mInfo;
    boolean mInitialized;
    com.qihoo360.loader2.Loader mLoader;
    final android.os.Handler mMainH;
    java.lang.ClassLoader mParent;
    com.qihoo360.loader2.PluginCommImpl mPluginManager;



    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class UpdateInfoTask implements java.lang.Runnable {
        com.qihoo360.replugin.model.PluginInfo mInfo;

        UpdateInfoTask(com.qihoo360.replugin.model.PluginInfo r1) {
                r0 = this;
                r0.<init>()
                r0.mInfo = r1
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> La
                com.qihoo360.replugin.model.PluginInfo r1 = r3.mInfo     // Catch: java.lang.Throwable -> La
                r0.updatePluginInfo(r1)     // Catch: java.lang.Throwable -> La
                goto L25
            La:
                r0 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "ph u p i: "
                r1.append(r2)
                java.lang.String r2 = r0.getMessage()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "ws001"
                com.qihoo360.replugin.helper.LogRelease.e(r2, r1, r0)
            L25:
                return
        }
    }

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.loader2.Plugin.LOCK_LOAD_ENTRY = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.PKG_NAME_2_PLUGIN_NAME = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.FILENAME_2_DEX = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST = r0
            return
    }

    private Plugin(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mMainH = r0
            r2.mInfo = r3
            return
    }

    static void access$000(com.qihoo360.loader2.Plugin r0) {
            r0.callAppLocked()
            return
    }

    static final com.qihoo360.loader2.Plugin build(com.qihoo360.replugin.model.PluginInfo r1) {
            com.qihoo360.loader2.Plugin r0 = new com.qihoo360.loader2.Plugin
            r0.<init>(r1)
            return r0
    }

    private void callApp() {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Le
            r2.callAppLocked()
            goto L18
        Le:
            android.os.Handler r0 = r2.mMainH
            com.qihoo360.loader2.Plugin$2 r1 = new com.qihoo360.loader2.Plugin$2
            r1.<init>(r2)
            r0.postAtFrontOfQueue(r1)
        L18:
            return
    }

    private void callAppLocked() {
            r4 = this;
            boolean r0 = r4.mDummyPlugin
            if (r0 != 0) goto L32
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = r4.mApplicationClient
            if (r0 == 0) goto L9
            return
        L9:
            com.qihoo360.replugin.model.PluginInfo r0 = r4.mInfo
            java.lang.String r0 = r0.getName()
            com.qihoo360.loader2.Loader r1 = r4.mLoader
            java.lang.ClassLoader r1 = r1.mClassLoader
            com.qihoo360.loader2.Loader r2 = r4.mLoader
            com.qihoo360.replugin.component.ComponentList r2 = r2.mComponents
            com.qihoo360.loader2.Loader r3 = r4.mLoader
            com.qihoo360.loader2.Plugin r3 = r3.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.getOrCreate(r0, r1, r2, r3)
            r4.mApplicationClient = r0
            if (r0 == 0) goto L4e
            com.qihoo360.loader2.Loader r1 = r4.mLoader
            android.content.Context r1 = r1.mPkgContext
            r0.callAttachBaseContext(r1)
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = r4.mApplicationClient
            r0.callOnCreate()
            goto L4e
        L32:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "p.cal dm "
            r0.append(r1)
            com.qihoo360.replugin.model.PluginInfo r1 = r4.mInfo
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0)
        L4e:
            return
    }

    static final void clearCachedPlugin(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> Lfd
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> Lfd
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1     // Catch: java.lang.Throwable -> Lfd
            if (r1 == 0) goto L41
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> Lfd
            java.lang.ClassLoader r1 = (java.lang.ClassLoader) r1     // Catch: java.lang.Throwable -> Lfd
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> Lfd
            r2.remove(r5)     // Catch: java.lang.Throwable -> Lfd
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lfd
            if (r2 == 0) goto L41
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfd
            r3.<init>()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r4 = "clear Cached Dex "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfd
            r3.append(r5)     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r4 = " -> "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfd
            r3.append(r1)     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lfd
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)     // Catch: java.lang.Throwable -> Lfd
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lfd
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> Lfa
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> Lfa
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0     // Catch: java.lang.Throwable -> Lfa
            if (r0 == 0) goto L7c
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> Lfa
            android.content.res.Resources r0 = (android.content.res.Resources) r0     // Catch: java.lang.Throwable -> Lfa
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> Lfa
            r2.remove(r5)     // Catch: java.lang.Throwable -> Lfa
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lfa
            if (r2 == 0) goto L7c
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r3.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r4 = "clear Cached Resources "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfa
            r3.append(r5)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r4 = " -> "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfa
            r3.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Lfa
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> Lfa
        L7c:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lfa
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> Lf7
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> Lf7
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1     // Catch: java.lang.Throwable -> Lf7
            if (r1 == 0) goto Lb7
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> Lf7
            android.content.pm.PackageInfo r1 = (android.content.pm.PackageInfo) r1     // Catch: java.lang.Throwable -> Lf7
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> Lf7
            r2.remove(r5)     // Catch: java.lang.Throwable -> Lf7
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lf7
            if (r2 == 0) goto Lb7
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7
            r3.<init>()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r4 = "clear Cached packageInfo "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lf7
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r4 = " -> "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lf7
            r3.append(r1)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)     // Catch: java.lang.Throwable -> Lf7
        Lb7:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf7
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> Lf4
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lf2
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> Lf4
            com.qihoo360.replugin.component.ComponentList r0 = (com.qihoo360.replugin.component.ComponentList) r0     // Catch: java.lang.Throwable -> Lf4
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> Lf4
            r2.remove(r5)     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto Lf2
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf4
            r3.<init>()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = "clear Cached componentList "
            r3.append(r4)     // Catch: java.lang.Throwable -> Lf4
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf4
            r3.append(r0)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> Lf4
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> Lf4
        Lf2:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf4
            return
        Lf4:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf4
            throw r5
        Lf7:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf7
            throw r5
        Lfa:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lfa
            throw r5
        Lfd:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lfd
            throw r5
    }

    static final com.qihoo360.loader2.Plugin cloneAndReattach(android.content.Context r0, com.qihoo360.loader2.Plugin r1, java.lang.ClassLoader r2, com.qihoo360.loader2.PluginCommImpl r3) {
            if (r1 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo
            com.qihoo360.loader2.Plugin r1 = build(r1)
            r1.attach(r0, r2, r3)
            return r1
    }

    private final boolean doLoad(java.lang.String r10, android.content.Context r11, java.lang.ClassLoader r12, com.qihoo360.loader2.PluginCommImpl r13, int r14) {
            r9 = this;
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            r0 = 2
            r1 = 1
            if (r10 != 0) goto L18f
            r10 = 0
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            int r2 = r2.getType()
            java.lang.String r3 = "plugins_v3"
            r4 = 3
            java.lang.String r5 = "ws001"
            r6 = 0
            if (r2 != r0) goto L69
            java.io.File r10 = r11.getDir(r3, r6)
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            java.io.File r2 = r2.getDexParentDir()
            com.qihoo360.replugin.model.PluginInfo r3 = r9.mInfo
            java.io.File r3 = r3.getApkFile()
            java.lang.String r3 = r3.getName()
            com.qihoo360.replugin.model.PluginInfo r7 = r9.mInfo
            java.lang.String r8 = r10.getAbsolutePath()
            java.lang.String r2 = r2.getAbsolutePath()
            boolean r2 = com.qihoo360.replugin.utils.AssetsUtils.quickExtractTo(r11, r7, r8, r3, r2)
            if (r2 != 0) goto L50
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "p e b i p f "
            r10.append(r11)
            com.qihoo360.replugin.model.PluginInfo r11 = r9.mInfo
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r5, r10)
            return r6
        L50:
            java.io.File r2 = new java.io.File
            r2.<init>(r10, r3)
            com.qihoo360.replugin.model.PluginInfo r10 = r9.mInfo
            java.lang.Object r10 = r10.clone()
            com.qihoo360.replugin.model.PluginInfo r10 = (com.qihoo360.replugin.model.PluginInfo) r10
            java.lang.String r2 = r2.getPath()
            r10.setPath(r2)
            r10.setType(r1)
            goto L15a
        L69:
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            int r2 = r2.getType()
            if (r2 != r4) goto L15a
            java.io.File r10 = new java.io.File
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            java.lang.String r2 = r2.getPath()
            r10.<init>(r2)
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            int r2 = r2.getV5Type()
            com.qihoo360.loader2.V5FileInfo r10 = com.qihoo360.loader2.V5FileInfo.build(r10, r2)
            if (r10 != 0) goto L9f
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "p e b v i f "
            r10.append(r11)
            com.qihoo360.replugin.model.PluginInfo r11 = r9.mInfo
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r5, r10)
            return r6
        L9f:
            java.io.File r2 = r11.getDir(r3, r6)
            com.qihoo360.replugin.model.PluginInfo r10 = r10.updateV5FileTo(r11, r2, r1, r1)
            if (r10 != 0) goto Lc0
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "p u v f t f "
            r10.append(r11)
            com.qihoo360.replugin.model.PluginInfo r11 = r9.mInfo
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r5, r10)
            return r6
        Lc0:
            int r3 = r10.getLowInterfaceApi()
            com.qihoo360.replugin.model.PluginInfo r7 = r9.mInfo
            int r7 = r7.getLowInterfaceApi()
            if (r3 != r7) goto Ld8
            int r3 = r10.getHighInterfaceApi()
            com.qihoo360.replugin.model.PluginInfo r7 = r9.mInfo
            int r7 = r7.getHighInterfaceApi()
            if (r3 == r7) goto L15a
        Ld8:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto Lfa
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r7 = "v5 plugin has changed: plugin="
            r3.append(r7)
            r3.append(r10)
            java.lang.String r7 = ", original="
            r3.append(r7)
            com.qihoo360.replugin.model.PluginInfo r7 = r9.mInfo
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r5, r3)
        Lfa:
            com.qihoo360.replugin.model.PluginInfo r3 = r9.mInfo
            java.io.File r3 = r3.getApkFile()
            java.lang.String r3 = r3.getName()
            java.io.File r7 = new java.io.File
            r7.<init>(r2, r3)
            boolean r2 = r7.exists()
            if (r2 != 0) goto L153
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "can't load: v5 plugin has changed to "
            r11.append(r12)
            int r12 = r10.getLowInterfaceApi()
            r11.append(r12)
            java.lang.String r12 = "-"
            r11.append(r12)
            int r10 = r10.getHighInterfaceApi()
            r11.append(r10)
            java.lang.String r10 = ", orig "
            r11.append(r10)
            com.qihoo360.replugin.model.PluginInfo r10 = r9.mInfo
            int r10 = r10.getLowInterfaceApi()
            r11.append(r10)
            r11.append(r12)
            com.qihoo360.replugin.model.PluginInfo r10 = r9.mInfo
            int r10 = r10.getHighInterfaceApi()
            r11.append(r10)
            java.lang.String r10 = " bare not exist"
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r5, r10)
            return r6
        L153:
            com.qihoo360.replugin.model.PluginInfo r10 = com.qihoo360.replugin.model.PluginInfo.build(r7)
            if (r10 != 0) goto L15a
            return r6
        L15a:
            if (r10 == 0) goto L15e
            r9.mInfo = r10
        L15e:
            com.qihoo360.loader2.Loader r10 = new com.qihoo360.loader2.Loader
            com.qihoo360.replugin.model.PluginInfo r2 = r9.mInfo
            java.lang.String r2 = r2.getName()
            com.qihoo360.replugin.model.PluginInfo r3 = r9.mInfo
            java.lang.String r3 = r3.getPath()
            r10.<init>(r11, r2, r3, r9)
            r9.mLoader = r10
            boolean r10 = r10.loadDex(r12, r14)
            if (r10 != 0) goto L178
            return r6
        L178:
            com.qihoo360.replugin.model.PluginInfo r10 = r9.mInfo     // Catch: android.os.RemoteException -> L182
            java.lang.String r10 = r10.getName()     // Catch: android.os.RemoteException -> L182
            com.qihoo360.replugin.packages.PluginManagerProxy.updateUsedIfNeeded(r10, r1)     // Catch: android.os.RemoteException -> L182
            goto L186
        L182:
            r10 = move-exception
            r10.printStackTrace()
        L186:
            if (r14 != r4) goto L18f
            boolean r10 = r9.loadEntryLocked(r13)
            if (r10 != 0) goto L18f
            return r6
        L18f:
            if (r14 != 0) goto L198
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            boolean r10 = r10.isPackageInfoLoaded()
            return r10
        L198:
            if (r14 != r1) goto L1a1
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            boolean r10 = r10.isResourcesLoaded()
            return r10
        L1a1:
            if (r14 != r0) goto L1aa
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            boolean r10 = r10.isDexLoaded()
            return r10
        L1aa:
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            boolean r10 = r10.isAppLoaded()
            return r10
    }

    static final void dump(java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.DUMP_ENABLED
            if (r3 == 0) goto Le4
            java.lang.String r3 = "--- cached plugin filename ---"
            r4.println(r3)
            java.util.HashMap<java.lang.String, java.lang.String> r3 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r5 = r3.hasNext()
            java.lang.String r0 = ": "
            if (r5 == 0) goto L3f
            java.lang.Object r5 = r3.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME
            java.lang.Object r5 = r0.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r4.println(r5)
            goto L13
        L3f:
            java.lang.String r3 = "--- cached plugin Resources ---"
            r4.println(r3)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r3 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L4e:
            boolean r5 = r3.hasNext()
            if (r5 == 0) goto L76
            java.lang.Object r5 = r3.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES
            java.lang.Object r5 = r2.get(r5)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r4.println(r5)
            goto L4e
        L76:
            java.lang.String r3 = "--- cached plugin PackageInfo ---"
            r4.println(r3)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r3 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        L85:
            boolean r5 = r3.hasNext()
            if (r5 == 0) goto Lad
            java.lang.Object r5 = r3.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO
            java.lang.Object r5 = r2.get(r5)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r4.println(r5)
            goto L85
        Lad:
            java.lang.String r3 = "--- cached plugin ComponentList ---"
            r4.println(r3)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r3 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        Lbc:
            boolean r5 = r3.hasNext()
            if (r5 == 0) goto Le4
            java.lang.Object r5 = r3.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST
            java.lang.Object r5 = r2.get(r5)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r4.println(r5)
            goto Lbc
        Le4:
            return
    }

    private boolean loadByCache(int r10) {
            r9 = this;
            java.lang.String r0 = "ws000"
            r1 = 0
            r2 = 1
            if (r10 != 0) goto L3b
            com.qihoo360.replugin.model.PluginInfo r3 = r9.mInfo
            java.lang.String r3 = r3.getName()
            java.lang.String r3 = queryCachedFilename(r3)
            android.content.pm.PackageInfo r4 = queryCachedPackageInfo(r3)
            com.qihoo360.replugin.component.ComponentList r3 = queryCachedComponentList(r3)
            if (r4 == 0) goto L3b
            if (r3 == 0) goto L3b
            com.qihoo360.loader2.Loader r10 = new com.qihoo360.loader2.Loader
            android.content.Context r5 = r9.mContext
            com.qihoo360.replugin.model.PluginInfo r6 = r9.mInfo
            java.lang.String r6 = r6.getName()
            r10.<init>(r5, r6, r1, r9)
            r9.mLoader = r10
            r10.mPackageInfo = r4
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            r10.mComponents = r3
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L3a
            java.lang.String r10 = "loadLocked(): Cached, pkgInfo loaded"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r10)
        L3a:
            return r2
        L3b:
            if (r10 != r2) goto L7c
            com.qihoo360.replugin.model.PluginInfo r3 = r9.mInfo
            java.lang.String r3 = r3.getName()
            java.lang.String r3 = queryCachedFilename(r3)
            android.content.res.Resources r4 = queryCachedResources(r3)
            android.content.pm.PackageInfo r5 = queryCachedPackageInfo(r3)
            com.qihoo360.replugin.component.ComponentList r3 = queryCachedComponentList(r3)
            if (r4 == 0) goto L7c
            if (r5 == 0) goto L7c
            if (r3 == 0) goto L7c
            com.qihoo360.loader2.Loader r10 = new com.qihoo360.loader2.Loader
            android.content.Context r6 = r9.mContext
            com.qihoo360.replugin.model.PluginInfo r7 = r9.mInfo
            java.lang.String r7 = r7.getName()
            r10.<init>(r6, r7, r1, r9)
            r9.mLoader = r10
            r10.mPkgResources = r4
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            r10.mPackageInfo = r5
            com.qihoo360.loader2.Loader r10 = r9.mLoader
            r10.mComponents = r3
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L7b
            java.lang.String r10 = "loadLocked(): Cached, resource loaded"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r10)
        L7b:
            return r2
        L7c:
            r3 = 2
            if (r10 != r3) goto Lc8
            com.qihoo360.replugin.model.PluginInfo r10 = r9.mInfo
            java.lang.String r10 = r10.getName()
            java.lang.String r10 = queryCachedFilename(r10)
            android.content.res.Resources r3 = queryCachedResources(r10)
            android.content.pm.PackageInfo r4 = queryCachedPackageInfo(r10)
            com.qihoo360.replugin.component.ComponentList r5 = queryCachedComponentList(r10)
            java.lang.ClassLoader r10 = queryCachedClassLoader(r10)
            if (r3 == 0) goto Lc8
            if (r4 == 0) goto Lc8
            if (r5 == 0) goto Lc8
            if (r10 == 0) goto Lc8
            com.qihoo360.loader2.Loader r6 = new com.qihoo360.loader2.Loader
            android.content.Context r7 = r9.mContext
            com.qihoo360.replugin.model.PluginInfo r8 = r9.mInfo
            java.lang.String r8 = r8.getName()
            r6.<init>(r7, r8, r1, r9)
            r9.mLoader = r6
            r6.mPkgResources = r3
            com.qihoo360.loader2.Loader r1 = r9.mLoader
            r1.mPackageInfo = r4
            com.qihoo360.loader2.Loader r1 = r9.mLoader
            r1.mComponents = r5
            com.qihoo360.loader2.Loader r1 = r9.mLoader
            r1.mClassLoader = r10
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto Lc7
            java.lang.String r10 = "loadLocked(): Cached, dex loaded"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r10)
        Lc7:
            return r2
        Lc8:
            r10 = 0
            return r10
    }

    private boolean loadEntryLocked(com.qihoo360.loader2.PluginCommImpl r4) {
            r3 = this;
            boolean r0 = r3.mDummyPlugin
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "p.lel dm "
            r4.append(r0)
            com.qihoo360.replugin.model.PluginInfo r0 = r3.mInfo
            java.lang.String r0 = r0.getName()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r1, r4)
            com.qihoo360.loader2.Loader r4 = r3.mLoader
            com.qihoo360.loader2.Plugin$1 r0 = new com.qihoo360.loader2.Plugin$1
            r0.<init>(r3)
            r4.mPlugin = r0
            goto L78
        L2a:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Plugin.loadEntryLocked(): Load entry, info="
            r0.append(r2)
            com.qihoo360.replugin.model.PluginInfo r2 = r3.mInfo
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L44:
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r0 = r0.loadEntryMethod2()
            r2 = 0
            if (r0 == 0) goto L56
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r4 = r0.invoke2(r4)
            if (r4 != 0) goto L78
            return r2
        L56:
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r0 = r0.loadEntryMethod(r2)
            if (r0 == 0) goto L67
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r4 = r0.invoke(r4)
            if (r4 != 0) goto L78
            return r2
        L67:
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r0 = r0.loadEntryMethod3()
            if (r0 == 0) goto L7a
            com.qihoo360.loader2.Loader r0 = r3.mLoader
            boolean r4 = r0.invoke2(r4)
            if (r4 != 0) goto L78
            return r2
        L78:
            r4 = 1
            return r4
        L7a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "p.lel f "
            r4.append(r0)
            com.qihoo360.replugin.model.PluginInfo r0 = r3.mInfo
            java.lang.String r0 = r0.getName()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r4)
            return r2
    }

    private boolean loadLocked(int r24, boolean r25) {
            r23 = this;
            r7 = r23
            r8 = r24
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo
            java.lang.String r0 = r0.getName()
            com.qihoo360.replugin.model.PluginInfo r1 = r7.mInfo
            int r1 = r1.getVersion()
            int r0 = com.qihoo360.loader2.PluginStatusController.getStatus(r0, r1)
            java.lang.String r1 = ":"
            r9 = 0
            java.lang.String r10 = "ws001"
            if (r0 >= 0) goto L4e
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L4d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Disable in="
            r2.append(r3)
            com.qihoo360.replugin.model.PluginInfo r3 = r7.mInfo
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            r2.append(r1)
            com.qihoo360.replugin.model.PluginInfo r1 = r7.mInfo
            int r1 = r1.getVersion()
            r2.append(r1)
            java.lang.String r1 = "; st="
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r10, r0)
        L4d:
            return r9
        L4e:
            boolean r0 = r7.mInitialized
            r11 = 2
            r12 = 1
            if (r0 == 0) goto Lde
            com.qihoo360.loader2.Loader r0 = r7.mLoader
            java.lang.String r1 = "ws000"
            if (r0 != 0) goto L64
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L63
            java.lang.String r0 = "loadLocked(): Initialized but mLoader is Null"
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L63:
            return r9
        L64:
            if (r8 != 0) goto L83
            boolean r0 = r0.isPackageInfoLoaded()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L82
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Initialized, pkginfo loaded = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r2)
        L82:
            return r0
        L83:
            if (r8 != r12) goto La2
            boolean r0 = r0.isResourcesLoaded()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto La1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Initialized, resource loaded = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r2)
        La1:
            return r0
        La2:
            if (r8 != r11) goto Lc1
            boolean r0 = r0.isDexLoaded()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto Lc0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Initialized, dex loaded = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r2)
        Lc0:
            return r0
        Lc1:
            boolean r0 = r0.isAppLoaded()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto Ldd
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Initialized, is loaded = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r2)
        Ldd:
            return r0
        Lde:
            r7.mInitialized = r12
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r0 = r0.isPrintDetailLog()
            if (r0 == 0) goto L1b3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r2 = "--- plugin: "
            r0.append(r2)
            com.qihoo360.replugin.model.PluginInfo r2 = r7.mInfo
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = " ---\n"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "load="
            r2.append(r0)
            r2.append(r8)
            java.lang.String r0 = "\n"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r2 = r2.getStackTrace()
            int r3 = r2.length
            r4 = r9
        L12e:
            if (r4 >= r3) goto L1a3
            r5 = r2[r4]
            boolean r6 = r5.isNativeMethod()
            if (r6 == 0) goto L139
            goto L19d
        L139:
            java.lang.String r6 = r5.getClassName()
            java.lang.String r13 = r5.getMethodName()
            java.lang.String r14 = r5.getFileName()
            int r5 = r5.getLineNumber()
            boolean r15 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r11 = "("
            java.lang.String r9 = "."
            if (r15 == 0) goto L177
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            r15.append(r6)
            r15.append(r9)
            r15.append(r13)
            r15.append(r11)
            r15.append(r14)
            r15.append(r1)
            r15.append(r5)
            java.lang.String r12 = ")"
            r15.append(r12)
            java.lang.String r12 = r15.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r10, r12)
        L177:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r0)
            r12.append(r6)
            r12.append(r9)
            r12.append(r13)
            r12.append(r11)
            r12.append(r14)
            r12.append(r1)
            r12.append(r5)
            java.lang.String r0 = ")\n"
            r12.append(r0)
            java.lang.String r0 = r12.toString()
        L19d:
            int r4 = r4 + 1
            r9 = 0
            r11 = 2
            r12 = 1
            goto L12e
        L1a3:
            java.util.ArrayList<java.lang.String> r1 = com.qihoo360.loader2.Plugin.sLoadedReasons
            if (r1 != 0) goto L1ae
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.qihoo360.loader2.Plugin.sLoadedReasons = r1
        L1ae:
            java.util.ArrayList<java.lang.String> r1 = com.qihoo360.loader2.Plugin.sLoadedReasons
            r1.add(r0)
        L1b3:
            if (r25 == 0) goto L1bd
            boolean r0 = r23.loadByCache(r24)
            if (r0 == 0) goto L1bd
            r1 = 1
            return r1
        L1bd:
            r1 = 1
            android.content.Context r9 = r7.mContext
            java.lang.ClassLoader r11 = r7.mParent
            com.qihoo360.loader2.PluginCommImpl r12 = r7.mPluginManager
            java.lang.String r0 = "try1"
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.qihoo360.replugin.model.PluginInfo r1 = r7.mInfo
            java.io.File r1 = r1.getApkFile()
            java.lang.String r1 = r1.getName()
            r3 = 0
            r2[r3] = r1
            java.lang.String r1 = "plugin_v3_%s.lock"
            java.lang.String r13 = java.lang.String.format(r1, r2)
            com.qihoo360.loader.utils.ProcessLocker r14 = new com.qihoo360.loader.utils.ProcessLocker
            r14.<init>(r9, r13)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r15 = "; pn = "
            if (r1 == 0) goto L206
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "loadLocked(): Ready to lock! logtag = "
            r1.append(r2)
            r1.append(r0)
            r1.append(r15)
            com.qihoo360.replugin.model.PluginInfo r2 = r7.mInfo
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r10, r1)
        L206:
            r6 = 10
            r5 = 5000(0x1388, float:7.006E-42)
            boolean r1 = r14.tryLockTimeWait(r5, r6)
            java.lang.String r4 = ": failed to lock: can't wait plugin ready"
            if (r1 != 0) goto L224
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r10, r1)
        L224:
            long r16 = java.lang.System.currentTimeMillis()
            r1 = r23
            r2 = r0
            r3 = r9
            r18 = r4
            r4 = r11
            r25 = r11
            r11 = r5
            r5 = r12
            r11 = r6
            r6 = r24
            boolean r1 = r1.doLoad(r2, r3, r4, r5, r6)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r6 = " delta="
            java.lang.String r5 = " rc="
            java.lang.String r4 = " c="
            java.lang.String r3 = " "
            if (r2 == 0) goto L286
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r11 = "load "
            r2.append(r11)
            com.qihoo360.replugin.model.PluginInfo r11 = r7.mInfo
            java.lang.String r11 = r11.getPath()
            r2.append(r11)
            r2.append(r3)
            int r11 = r23.hashCode()
            r2.append(r11)
            r2.append(r4)
            r2.append(r8)
            r2.append(r5)
            r2.append(r1)
            r2.append(r6)
            long r20 = java.lang.System.currentTimeMillis()
            r22 = r3
            r11 = r4
            long r3 = r20 - r16
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r10, r2)
            goto L289
        L286:
            r22 = r3
            r11 = r4
        L289:
            r14.unlock()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L2b0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadLocked(): Unlock! logtag = "
            r2.append(r3)
            r2.append(r0)
            r2.append(r15)
            com.qihoo360.replugin.model.PluginInfo r3 = r7.mInfo
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r10, r2)
        L2b0:
            if (r1 != 0) goto L2c6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ": loading fail1"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r10, r0)
        L2c6:
            r14 = 3
            java.lang.String r15 = ", type=, "
            java.lang.String r4 = "RePlugin"
            if (r1 == 0) goto L32a
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L305
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r0 = r0.isPrintDetailLog()
            if (r0 == 0) goto L305
            r1 = 2
            if (r8 == r1) goto L2e0
            if (r8 != r14) goto L305
        L2e0:
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo
            com.qihoo360.replugin.helper.LogDebug.printPluginInfo(r0, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "act=, loadLocked, flag=, End-1, pn=, "
            r0.append(r1)
            com.qihoo360.replugin.model.PluginInfo r1 = r7.mInfo
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r0.append(r15)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.printMemoryStatus(r4, r0)
        L305:
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo     // Catch: java.lang.Throwable -> L30f
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L30f
            com.qihoo360.replugin.packages.PluginManagerProxy.addToRunningPluginsNoThrows(r0)     // Catch: java.lang.Throwable -> L30f
            goto L328
        L30f:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "p.u.1: "
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r10, r1, r0)
        L328:
            r1 = 1
            return r1
        L32a:
            java.lang.String r3 = "try2"
            com.qihoo360.loader.utils.ProcessLocker r2 = new com.qihoo360.loader.utils.ProcessLocker
            r2.<init>(r9, r13)
            r0 = 10
            r1 = 5000(0x1388, float:7.006E-42)
            boolean r0 = r2.tryLockTimeWait(r1, r0)
            if (r0 != 0) goto L34f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r1 = r18
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r10, r0)
        L34f:
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo
            java.io.File r0 = r0.getDexFile()
            boolean r1 = r0.exists()
            if (r1 == 0) goto L37d
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L37a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r13 = ": delete exist odex="
            r1.append(r13)
            java.lang.String r13 = r0.getAbsolutePath()
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r10, r1)
        L37a:
            r0.delete()
        L37d:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L396
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo     // Catch: java.lang.IllegalArgumentException -> L38d java.io.IOException -> L392
            java.io.File r0 = r0.getExtraOdexDir()     // Catch: java.lang.IllegalArgumentException -> L38d java.io.IOException -> L392
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L38d java.io.IOException -> L392
            goto L396
        L38d:
            r0 = move-exception
            r0.printStackTrace()
            goto L396
        L392:
            r0 = move-exception
            r0.printStackTrace()
        L396:
            long r16 = java.lang.System.currentTimeMillis()
            r1 = r23
            r13 = r2
            r2 = r3
            r14 = r3
            r19 = r11
            r11 = r22
            r3 = r9
            r9 = r19
            r19 = r4
            r4 = r25
            r25 = r15
            r15 = r5
            r5 = r12
            r12 = r6
            r6 = r24
            boolean r0 = r1.tryLoadAgain(r2, r3, r4, r5, r6)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L3f5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "load2 "
            r1.append(r2)
            com.qihoo360.replugin.model.PluginInfo r2 = r7.mInfo
            java.lang.String r2 = r2.getPath()
            r1.append(r2)
            r1.append(r11)
            int r2 = r23.hashCode()
            r1.append(r2)
            r1.append(r9)
            r1.append(r8)
            r1.append(r15)
            r1.append(r0)
            r1.append(r12)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r16
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r10, r1)
        L3f5:
            r13.unlock()
            if (r0 != 0) goto L410
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r1 = ": loading fail2"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r10, r0)
            r1 = 0
            return r1
        L410:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L44d
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r0 = r0.isPrintDetailLog()
            if (r0 == 0) goto L44d
            r1 = 2
            if (r8 == r1) goto L424
            r1 = 3
            if (r8 != r1) goto L44d
        L424:
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo
            com.qihoo360.replugin.helper.LogDebug.printPluginInfo(r0, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "act=, loadLocked, flag=, End-2, pn=, "
            r0.append(r1)
            com.qihoo360.replugin.model.PluginInfo r1 = r7.mInfo
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r1 = r25
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            r1 = r19
            com.qihoo360.replugin.helper.LogDebug.printMemoryStatus(r1, r0)
        L44d:
            com.qihoo360.replugin.model.PluginInfo r0 = r7.mInfo     // Catch: java.lang.Throwable -> L457
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L457
            com.qihoo360.replugin.packages.PluginManagerProxy.addToRunningPluginsNoThrows(r0)     // Catch: java.lang.Throwable -> L457
            goto L470
        L457:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "p.u.2: "
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r10, r1, r0)
        L470:
            r1 = 1
            return r1
    }

    static final java.lang.ClassLoader queryCachedClassLoader(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L48
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> L45
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.Object r1 = r2.get()     // Catch: java.lang.Throwable -> L45
            java.lang.ClassLoader r1 = (java.lang.ClassLoader) r1     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L21
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> L45
            r2.remove(r5)     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r3.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "cached Dex "
            r3.append(r4)     // Catch: java.lang.Throwable -> L45
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            r3.append(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L45
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            goto L48
        L45:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r5
        L48:
            return r1
    }

    static final com.qihoo360.replugin.component.ComponentList queryCachedComponentList(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L48
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> L45
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.Object r1 = r2.get()     // Catch: java.lang.Throwable -> L45
            com.qihoo360.replugin.component.ComponentList r1 = (com.qihoo360.replugin.component.ComponentList) r1     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L21
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> L45
            r2.remove(r5)     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r3.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "cached componentList "
            r3.append(r4)     // Catch: java.lang.Throwable -> L45
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            r3.append(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L45
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            goto L48
        L45:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r5
        L48:
            return r1
    }

    static final java.lang.String queryCachedFilename(java.lang.String r5) {
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L2f
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L2d
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f
            r3.<init>()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r4 = "cached filename: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L2f
            r3.append(r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L2f
            r3.append(r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L2f
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return r1
        L2f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r5
    }

    static final android.content.pm.PackageInfo queryCachedPackageInfo(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L48
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> L45
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.Object r1 = r2.get()     // Catch: java.lang.Throwable -> L45
            android.content.pm.PackageInfo r1 = (android.content.pm.PackageInfo) r1     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L21
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> L45
            r2.remove(r5)     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r3.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "cached packageInfo "
            r3.append(r4)     // Catch: java.lang.Throwable -> L45
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            r3.append(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L45
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            goto L48
        L45:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r5
        L48:
            return r1
    }

    static final android.content.res.Resources queryCachedResources(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L48
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> L45
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.Object r1 = r2.get()     // Catch: java.lang.Throwable -> L45
            android.content.res.Resources r1 = (android.content.res.Resources) r1     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L21
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> L45
            r2.remove(r5)     // Catch: java.lang.Throwable -> L45
        L21:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r3.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "cached Resources "
            r3.append(r4)     // Catch: java.lang.Throwable -> L45
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L45
            r3.append(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L45
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            goto L48
        L45:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r5
        L48:
            return r1
    }

    static final java.lang.String queryPluginNameByPkgName(java.lang.String r5) {
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.Plugin.PKG_NAME_2_PLUGIN_NAME
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.qihoo360.loader2.Plugin.PKG_NAME_2_PLUGIN_NAME     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L2f
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L2d
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f
            r3.<init>()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r4 = "cached pluginName: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L2f
            r3.append(r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r5 = " -> "
            r3.append(r5)     // Catch: java.lang.Throwable -> L2f
            r3.append(r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L2f
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return r1
        L2f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r5
    }

    private synchronized boolean tryLoadAgain(java.lang.String r2, android.content.Context r3, java.lang.ClassLoader r4, com.qihoo360.loader2.PluginCommImpl r5, int r6) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.mLoader = r0     // Catch: java.lang.Throwable -> La
            boolean r2 = r1.doLoad(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return r2
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    final void attach(android.content.Context r1, java.lang.ClassLoader r2, com.qihoo360.loader2.PluginCommImpl r3) {
            r0 = this;
            r0.mContext = r1
            r0.mParent = r2
            r0.mPluginManager = r3
            return
    }

    final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            com.qihoo360.loader2.Loader r0 = r1.mLoader
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.ClassLoader r0 = r0.mClassLoader
            return r0
    }

    final boolean isInitialized() {
            r1 = this;
            boolean r0 = r1.mInitialized
            return r0
    }

    final boolean isLoaded() {
            r1 = this;
            com.qihoo360.loader2.Loader r0 = r1.mLoader
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isAppLoaded()
            return r0
    }

    final boolean isPackageInfoLoaded() {
            r1 = this;
            com.qihoo360.loader2.Loader r0 = r1.mLoader
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isPackageInfoLoaded()
            return r0
    }

    final boolean load(int r3, boolean r4) {
            r2 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r2.mInfo
            boolean r4 = r2.loadLocked(r3, r4)
            r1 = 3
            if (r3 != r1) goto Le
            if (r4 == 0) goto Le
            r2.callApp()
        Le:
            if (r4 == 0) goto L24
            com.qihoo360.replugin.model.PluginInfo r3 = r2.mInfo
            if (r3 == r0) goto L24
            com.qihoo360.loader2.Plugin$UpdateInfoTask r3 = new com.qihoo360.loader2.Plugin$UpdateInfoTask
            com.qihoo360.replugin.model.PluginInfo r0 = r2.mInfo
            java.lang.Object r0 = r0.clone()
            com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0
            r3.<init>(r0)
            com.qihoo360.mobilesafe.api.Tasks.post2Thread(r3)
        L24:
            return r4
    }

    final android.os.IBinder query(java.lang.String r3) {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader     // Catch: java.lang.Throwable -> Lb
            com.qihoo360.loader2.Loader$ProxyPlugin r0 = r0.mBinderPlugin     // Catch: java.lang.Throwable -> Lb
            com.qihoo360.loader2.IPlugin r0 = r0.mPlugin     // Catch: java.lang.Throwable -> Lb
            android.os.IBinder r3 = r0.query(r3)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "q.b.e.m"
            r0.append(r1)
            java.lang.String r1 = r3.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r3)
            r3 = 0
            return r3
    }

    final com.qihoo360.i.IModule query(java.lang.Class<? extends com.qihoo360.i.IModule> r2) {
            r1 = this;
            com.qihoo360.loader2.Loader r0 = r1.mLoader
            com.qihoo360.i.IPlugin r0 = r0.mPlugin
            com.qihoo360.i.IModule r2 = r0.query(r2)
            return r2
    }

    final void replaceInfo(com.qihoo360.replugin.model.PluginInfo r4) {
            r3 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r3.mInfo
            boolean r0 = r0.canReplaceForPn(r4)
            if (r0 == 0) goto Lc
            r3.mInfo = r4
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "replace plugin info: info="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " rc="
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L2f:
            return
    }

    public java.lang.String toString() {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = " {info="
            r0.append(r1)
            com.qihoo360.replugin.model.PluginInfo r1 = r2.mInfo
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L24:
            java.lang.String r0 = super.toString()
            return r0
    }
}
