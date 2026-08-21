package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginContext extends android.view.ContextThemeWrapper {
    private java.io.File mCacheDir;
    private com.qihoo360.replugin.ContextInjector mContextInjector;
    private java.io.File mDatabasesDir;
    android.view.LayoutInflater.Factory mFactory;
    private java.io.File mFilesDir;
    private android.view.LayoutInflater mInflater;
    private final com.qihoo360.loader2.Loader mLoader;
    private final java.lang.ClassLoader mNewClassLoader;
    private final android.content.res.Resources mNewResources;
    private final java.lang.String mPlugin;
    private final java.lang.Object mSync;


    public PluginContext(android.content.Context r1, int r2, java.lang.ClassLoader r3, android.content.res.Resources r4, java.lang.String r5, com.qihoo360.loader2.Loader r6) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r0.mSync = r1
            com.qihoo360.loader2.PluginContext$1 r1 = new com.qihoo360.loader2.PluginContext$1
            r1.<init>(r0)
            r0.mFactory = r1
            r0.mNewClassLoader = r3
            r0.mNewResources = r4
            r0.mPlugin = r5
            r0.mLoader = r6
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r1 = r1.getCallbacks()
            com.qihoo360.replugin.ContextInjector r1 = r1.createContextInjector()
            r0.mContextInjector = r1
            return
    }

    static android.view.View access$000(com.qihoo360.loader2.PluginContext r0, java.lang.String r1, android.content.Context r2, android.util.AttributeSet r3) {
            android.view.View r0 = r0.handleCreateView(r1, r2, r3)
            return r0
    }

    private final java.io.File getDataDirFile() {
            r7 = this;
            android.content.Context r0 = r7.getBaseContext()
            java.io.File r0 = r0.getFilesDir()
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "plugins_v3_data"
            r1.<init>(r0, r2)
            boolean r0 = r1.exists()
            r2 = 0
            java.lang.String r3 = "can't create dir: "
            java.lang.String r4 = "ws001"
            r5 = 505(0x1f9, float:7.08E-43)
            r6 = 0
            if (r0 != 0) goto L41
            boolean r0 = r1.mkdir()
            if (r0 != 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r4, r0)
            return r2
        L3a:
            java.lang.String r0 = r1.getPath()
            r7.setFilePermissionsFromMode(r0, r6, r5)
        L41:
            java.lang.String r0 = r7.mPlugin
            java.io.File r0 = r7.makeFilename(r1, r0)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L71
            boolean r1 = r0.mkdir()
            if (r1 != 0) goto L6a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r0 = r0.getAbsolutePath()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r4, r0)
            return r2
        L6a:
            java.lang.String r1 = r0.getPath()
            r7.setFilePermissionsFromMode(r1, r6, r5)
        L71:
            return r0
    }

    private java.io.File getDatabasesDir() {
            r4 = this;
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mDatabasesDir     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L14
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2f
            java.io.File r2 = r4.getDataDirFile()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = "databases"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2f
            r4.mDatabasesDir = r1     // Catch: java.lang.Throwable -> L2f
        L14:
            java.io.File r1 = r4.mDatabasesDir     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "databases"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "/data/system"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2f
            r4.mDatabasesDir = r1     // Catch: java.lang.Throwable -> L2f
        L2b:
            java.io.File r1 = r4.mDatabasesDir     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return r1
        L2f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r1
    }

    private final android.view.View handleCreateView(java.lang.String r11, android.content.Context r12, android.util.AttributeSet r13) {
            r10 = this;
            com.qihoo360.loader2.Loader r0 = r10.mLoader
            java.util.HashSet<java.lang.String> r0 = r0.mIgnores
            boolean r0 = r0.contains(r11)
            r1 = 0
            java.lang.String r2 = " name="
            java.lang.String r3 = "ws001"
            if (r0 == 0) goto L3a
            boolean r12 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r12 == 0) goto L39
            com.qihoo360.replugin.RePluginConfig r12 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r12 = r12.isPrintDetailLog()
            if (r12 == 0) goto L39
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "layout.cache: ignore plugin="
            r12.append(r13)
            java.lang.String r13 = r10.mPlugin
            r12.append(r13)
            r12.append(r2)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r11)
        L39:
            return r1
        L3a:
            com.qihoo360.loader2.Loader r0 = r10.mLoader
            java.util.HashMap<java.lang.String, java.lang.reflect.Constructor<?>> r0 = r0.mConstructors
            java.lang.Object r0 = r0.get(r11)
            java.lang.reflect.Constructor r0 = (java.lang.reflect.Constructor) r0
            java.lang.String r4 = ": Error inflating mobilesafe class "
            r5 = 2
            r6 = 1
            r7 = 0
            if (r0 != 0) goto Led
            java.lang.ClassLoader r0 = r10.mNewClassLoader     // Catch: java.lang.ClassNotFoundException -> L64
            java.lang.Class r0 = r0.loadClass(r11)     // Catch: java.lang.ClassNotFoundException -> L64
            if (r0 != 0) goto L54
            goto L61
        L54:
            java.lang.Class<android.view.ViewStub> r8 = android.view.ViewStub.class
            if (r0 != r8) goto L59
            goto L61
        L59:
            java.lang.ClassLoader r8 = r0.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L65
            java.lang.ClassLoader r9 = r10.mNewClassLoader     // Catch: java.lang.ClassNotFoundException -> L65
            if (r8 == r9) goto L62
        L61:
            goto L65
        L62:
            r8 = r6
            goto L66
        L64:
            r0 = r1
        L65:
            r8 = r7
        L66:
            if (r8 != 0) goto L9a
            boolean r12 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r12 == 0) goto L92
            com.qihoo360.replugin.RePluginConfig r12 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r12 = r12.isPrintDetailLog()
            if (r12 == 0) goto L92
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "layout.cache: new ignore plugin="
            r12.append(r13)
            java.lang.String r13 = r10.mPlugin
            r12.append(r13)
            r12.append(r2)
            r12.append(r11)
            java.lang.String r12 = r12.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r12)
        L92:
            com.qihoo360.loader2.Loader r12 = r10.mLoader
            java.util.HashSet<java.lang.String> r12 = r12.mIgnores
            r12.add(r11)
            return r1
        L9a:
            java.lang.Class[] r1 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Ld0
            java.lang.Class<android.content.Context> r8 = android.content.Context.class
            r1[r7] = r8     // Catch: java.lang.Exception -> Ld0
            java.lang.Class<android.util.AttributeSet> r8 = android.util.AttributeSet.class
            r1[r6] = r8     // Catch: java.lang.Exception -> Ld0
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> Ld0
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Exception -> Ld0
            if (r1 == 0) goto Lc8
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld0
            r1.<init>()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r8 = "layout.cache: new constructor. plugin="
            r1.append(r8)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r8 = r10.mPlugin     // Catch: java.lang.Exception -> Ld0
            r1.append(r8)     // Catch: java.lang.Exception -> Ld0
            r1.append(r2)     // Catch: java.lang.Exception -> Ld0
            r1.append(r11)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Ld0
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)     // Catch: java.lang.Exception -> Ld0
        Lc8:
            com.qihoo360.loader2.Loader r1 = r10.mLoader     // Catch: java.lang.Exception -> Ld0
            java.util.HashMap<java.lang.String, java.lang.reflect.Constructor<?>> r1 = r1.mConstructors     // Catch: java.lang.Exception -> Ld0
            r1.put(r11, r0)     // Catch: java.lang.Exception -> Ld0
            goto Led
        Ld0:
            r12 = move-exception
            android.view.InflateException r0 = new android.view.InflateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r13 = r13.getPositionDescription()
            r1.append(r13)
            r1.append(r4)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11, r12)
            throw r0
        Led:
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L124
            r1[r7] = r12     // Catch: java.lang.Exception -> L124
            r1[r6] = r13     // Catch: java.lang.Exception -> L124
            java.lang.Object r12 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L124
            android.view.View r12 = (android.view.View) r12     // Catch: java.lang.Exception -> L124
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Exception -> L124
            if (r0 == 0) goto L123
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Exception -> L124
            boolean r0 = r0.isPrintDetailLog()     // Catch: java.lang.Exception -> L124
            if (r0 == 0) goto L123
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L124
            r0.<init>()     // Catch: java.lang.Exception -> L124
            java.lang.String r1 = "layout.cache: create view ok. plugin="
            r0.append(r1)     // Catch: java.lang.Exception -> L124
            java.lang.String r1 = r10.mPlugin     // Catch: java.lang.Exception -> L124
            r0.append(r1)     // Catch: java.lang.Exception -> L124
            r0.append(r2)     // Catch: java.lang.Exception -> L124
            r0.append(r11)     // Catch: java.lang.Exception -> L124
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L124
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)     // Catch: java.lang.Exception -> L124
        L123:
            return r12
        L124:
            r12 = move-exception
            android.view.InflateException r0 = new android.view.InflateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r13 = r13.getPositionDescription()
            r1.append(r13)
            r1.append(r4)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11, r12)
            throw r0
    }

    private final java.io.File makeFilename(java.io.File r3, java.lang.String r4) {
            r2 = this;
            char r0 = java.io.File.separatorChar
            int r0 = r4.indexOf(r0)
            if (r0 >= 0) goto Le
            java.io.File r0 = new java.io.File
            r0.<init>(r3, r4)
            return r0
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "File "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " contains a path separator"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    private final void setFilePermissionsFromMode(java.lang.String r3, int r4, int r5) {
            r2 = this;
            r5 = r5 | 432(0x1b0, float:6.05E-43)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "File "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ": mode=0x"
            r0.append(r1)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r0.append(r4)
            java.lang.String r4 = ", perms=0x"
            r0.append(r4)
            java.lang.String r4 = java.lang.Integer.toHexString(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L34:
            r4 = -1
            com.qihoo360.loader.utils2.FilePermissionUtils.setPermissions(r3, r5, r4, r4)
            return
    }

    private java.io.File validateFilePath(java.lang.String r4, boolean r5) {
            r3 = this;
            r0 = 0
            char r1 = r4.charAt(r0)
            char r2 = java.io.File.separatorChar
            if (r1 != r2) goto L28
            char r1 = java.io.File.separatorChar
            int r1 = r4.lastIndexOf(r1)
            java.lang.String r0 = r4.substring(r0, r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            char r0 = java.io.File.separatorChar
            int r0 = r4.lastIndexOf(r0)
            java.lang.String r4 = r4.substring(r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r1, r4)
            goto L30
        L28:
            java.io.File r1 = r3.getDatabasesDir()
            java.io.File r0 = r3.makeFilename(r1, r4)
        L30:
            if (r5 == 0) goto L48
            boolean r4 = r1.isDirectory()
            if (r4 != 0) goto L48
            boolean r4 = r1.mkdir()
            if (r4 == 0) goto L48
            java.lang.String r4 = r1.getPath()
            r5 = 505(0x1f9, float:7.08E-43)
            r1 = -1
            com.qihoo360.loader.utils2.FilePermissionUtils.setPermissions(r4, r5, r1, r1)
        L48:
            return r0
    }

    @Override
    public boolean bindService(android.content.Intent r3, android.content.ServiceConnection r4, int r5) {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L12
            boolean r3 = super.bindService(r3, r4, r5)
            return r3
        L12:
            r0 = 1
            boolean r3 = com.qihoo360.replugin.component.service.PluginServiceClient.bindService(r2, r3, r4, r5, r0)     // Catch: com.qihoo360.replugin.component.utils.PluginClientHelper.ShouldCallSystem -> L18
            return r3
        L18:
            boolean r3 = super.bindService(r3, r4, r5)
            return r3
    }

    @Override
    public boolean deleteFile(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = r1.getFilesDir()
            java.io.File r2 = r1.makeFilename(r0, r2)
            boolean r2 = r2.delete()
            return r2
    }

    @Override
    public android.content.Context getApplicationContext() {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L12
            android.content.Context r0 = super.getApplicationContext()
            return r0
        L12:
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = r0.mApplicationClient
            if (r0 != 0) goto L1b
            return r2
        L1b:
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = r0.mApplicationClient
            android.app.Application r0 = r0.getObj()
            return r0
    }

    @Override
    public android.content.pm.ApplicationInfo getApplicationInfo() {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L12
            android.content.pm.ApplicationInfo r0 = super.getApplicationInfo()
            return r0
        L12:
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.replugin.component.ComponentList r0 = r0.mComponents
            android.content.pm.ApplicationInfo r0 = r0.getApplication()
            return r0
    }

    @Override
    public android.content.res.AssetManager getAssets() {
            r1 = this;
            android.content.res.Resources r0 = r1.mNewResources
            if (r0 == 0) goto L9
            android.content.res.AssetManager r0 = r0.getAssets()
            return r0
        L9:
            android.content.res.AssetManager r0 = super.getAssets()
            return r0
    }

    @Override
    public java.io.File getCacheDir() {
            r4 = this;
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L14
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L5f
            java.io.File r2 = r4.getDataDirFile()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = "cache"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L5f
            r4.mCacheDir = r1     // Catch: java.lang.Throwable -> L5f
        L14:
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L5b
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.mkdirs()     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L4f
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L5f
            if (r1 == 0) goto L30
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return r1
        L30:
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r2.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = "Unable to create cache directory "
            r2.append(r3)     // Catch: java.lang.Throwable -> L5f
            java.io.File r3 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L5f
            r2.append(r3)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5f
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2)     // Catch: java.lang.Throwable -> L5f
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return r1
        L4f:
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L5f
            r2 = 505(0x1f9, float:7.08E-43)
            r3 = -1
            com.qihoo360.loader.utils2.FilePermissionUtils.setPermissions(r1, r2, r3, r3)     // Catch: java.lang.Throwable -> L5f
        L5b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            java.io.File r0 = r4.mCacheDir
            return r0
        L5f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            throw r1
    }

    @Override
    public java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = r1.mNewClassLoader
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.ClassLoader r0 = super.getClassLoader()
            return r0
    }

    @Override
    public java.io.File getDir(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.File r0 = r2.getDataDirFile()
            java.io.File r3 = r2.makeFilename(r0, r3)
            boolean r0 = r3.exists()
            if (r0 != 0) goto L2b
            r3.mkdir()
            java.lang.String r0 = r3.getPath()
            r1 = 505(0x1f9, float:7.08E-43)
            r2.setFilePermissionsFromMode(r0, r4, r1)
        L2b:
            return r3
    }

    @Override
    public java.io.File getFileStreamPath(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = r1.getFilesDir()
            java.io.File r2 = r1.makeFilename(r0, r2)
            return r2
    }

    @Override
    public java.io.File getFilesDir() {
            r4 = this;
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L14
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L5f
            java.io.File r2 = r4.getDataDirFile()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = "files"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L5f
            r4.mFilesDir = r1     // Catch: java.lang.Throwable -> L5f
        L14:
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L5b
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.mkdirs()     // Catch: java.lang.Throwable -> L5f
            if (r1 != 0) goto L4f
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L5f
            if (r1 == 0) goto L30
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return r1
        L30:
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            r2.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = "Unable to create files directory "
            r2.append(r3)     // Catch: java.lang.Throwable -> L5f
            java.io.File r3 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Throwable -> L5f
            r2.append(r3)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5f
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2)     // Catch: java.lang.Throwable -> L5f
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return r1
        L4f:
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L5f
            r2 = 505(0x1f9, float:7.08E-43)
            r3 = -1
            com.qihoo360.loader.utils2.FilePermissionUtils.setPermissions(r1, r2, r3, r3)     // Catch: java.lang.Throwable -> L5f
        L5b:
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            return r1
        L5f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5f
            throw r1
    }

    @Override
    public java.lang.String getPackageCodePath() {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L12
            java.lang.String r0 = super.getPackageCodePath()
            return r0
        L12:
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            java.lang.String r0 = r0.mPath
            return r0
    }

    @Override
    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = super.getPackageName()
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r1 = this;
            android.content.res.Resources r0 = r1.mNewResources
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.res.Resources r0 = super.getResources()
            return r0
    }

    @Override
    public android.content.SharedPreferences getSharedPreferences(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "plugin_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.SharedPreferences r3 = super.getSharedPreferences(r3, r4)
            return r3
    }

    @Override
    public java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "layout_inflater"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L28
            android.view.LayoutInflater r0 = r1.mInflater
            if (r0 != 0) goto L25
            java.lang.Object r2 = super.getSystemService(r2)
            android.view.LayoutInflater r2 = (android.view.LayoutInflater) r2
            android.view.LayoutInflater r2 = r2.cloneInContext(r1)
            r1.mInflater = r2
            android.view.LayoutInflater$Factory r0 = r1.mFactory
            r2.setFactory(r0)
            android.view.LayoutInflater r2 = r1.mInflater
            android.view.LayoutInflater r2 = r2.cloneInContext(r1)
            r1.mInflater = r2
        L25:
            android.view.LayoutInflater r2 = r1.mInflater
            return r2
        L28:
            java.lang.Object r2 = super.getSystemService(r2)
            return r2
    }

    @Override
    public java.io.FileInputStream openFileInput(java.lang.String r2) throws java.io.FileNotFoundException {
            r1 = this;
            java.io.File r0 = r1.getFilesDir()
            java.io.File r2 = r1.makeFilename(r0, r2)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r2)
            return r0
    }

    @Override
    public java.io.FileOutputStream openFileOutput(java.lang.String r6, int r7) throws java.io.FileNotFoundException {
            r5 = this;
            r0 = 32768(0x8000, float:4.5918E-41)
            r0 = r0 & r7
            r1 = 0
            if (r0 == 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = r1
        La:
            java.io.File r2 = r5.getFilesDir()
            java.io.File r6 = r5.makeFilename(r2, r6)
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L1f
            r2.<init>(r6, r0)     // Catch: java.io.FileNotFoundException -> L1f
            java.lang.String r3 = r6.getPath()     // Catch: java.io.FileNotFoundException -> L1f
            r5.setFilePermissionsFromMode(r3, r7, r1)     // Catch: java.io.FileNotFoundException -> L1f
            return r2
        L1f:
            java.io.File r2 = r6.getParentFile()
            r2.mkdir()
            java.lang.String r2 = r2.getPath()
            r3 = 504(0x1f8, float:7.06E-43)
            r4 = -1
            com.qihoo360.loader.utils2.FilePermissionUtils.setPermissions(r2, r3, r4, r4)
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r6, r0)
            java.lang.String r6 = r6.getPath()
            r5.setFilePermissionsFromMode(r6, r7, r1)
            return r2
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            boolean r0 = com.qihoo360.i.Factory2.startActivity(r1, r2)
            if (r0 != 0) goto L17
            com.qihoo360.replugin.ContextInjector r0 = r1.mContextInjector
            if (r0 == 0) goto Ld
            r0.startActivityBefore(r2)
        Ld:
            super.startActivity(r2)
            com.qihoo360.replugin.ContextInjector r0 = r1.mContextInjector
            if (r0 == 0) goto L17
            r0.startActivityAfter(r2)
        L17:
            return
    }

    @Override
    public void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            boolean r0 = com.qihoo360.i.Factory2.startActivity(r1, r2)
            if (r0 != 0) goto L17
            com.qihoo360.replugin.ContextInjector r0 = r1.mContextInjector
            if (r0 == 0) goto Ld
            r0.startActivityBefore(r2, r3)
        Ld:
            super.startActivity(r2, r3)
            com.qihoo360.replugin.ContextInjector r0 = r1.mContextInjector
            if (r0 == 0) goto L17
            r0.startActivityAfter(r2, r3)
        L17:
            return
    }

    @Override
    public android.content.ComponentName startService(android.content.Intent r3) {
            r2 = this;
            com.qihoo360.replugin.ContextInjector r0 = r2.mContextInjector
            if (r0 == 0) goto L7
            r0.startServiceBefore(r3)
        L7:
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L19
            android.content.ComponentName r3 = super.startService(r3)
            return r3
        L19:
            r0 = 1
            android.content.ComponentName r0 = com.qihoo360.replugin.component.service.PluginServiceClient.startService(r2, r3, r0)     // Catch: java.lang.Throwable -> L26 com.qihoo360.replugin.component.utils.PluginClientHelper.ShouldCallSystem -> L28
            com.qihoo360.replugin.ContextInjector r1 = r2.mContextInjector
            if (r1 == 0) goto L25
            r1.startServiceAfter(r3)
        L25:
            return r0
        L26:
            r0 = move-exception
            goto L34
        L28:
            android.content.ComponentName r0 = super.startService(r3)     // Catch: java.lang.Throwable -> L26
            com.qihoo360.replugin.ContextInjector r1 = r2.mContextInjector
            if (r1 == 0) goto L33
            r1.startServiceAfter(r3)
        L33:
            return r0
        L34:
            com.qihoo360.replugin.ContextInjector r1 = r2.mContextInjector
            if (r1 == 0) goto L3b
            r1.startServiceAfter(r3)
        L3b:
            throw r0
    }

    @Override
    public boolean stopService(android.content.Intent r3) {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L12
            boolean r3 = super.stopService(r3)
            return r3
        L12:
            r0 = 1
            boolean r3 = com.qihoo360.replugin.component.service.PluginServiceClient.stopService(r2, r3, r0)     // Catch: com.qihoo360.replugin.component.utils.PluginClientHelper.ShouldCallSystem -> L18
            return r3
        L18:
            boolean r3 = super.stopService(r3)
            return r3
    }

    @Override
    public void unbindService(android.content.ServiceConnection r3) {
            r2 = this;
            com.qihoo360.loader2.Loader r0 = r2.mLoader
            com.qihoo360.loader2.Plugin r0 = r0.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            int r0 = r0.getFrameworkVersion()
            r1 = 2
            if (r0 > r1) goto L11
            super.unbindService(r3)
            return
        L11:
            super.unbindService(r3)     // Catch: java.lang.Throwable -> L14
        L14:
            r0 = 0
            com.qihoo360.replugin.component.service.PluginServiceClient.unbindService(r2, r3, r0)
            return
    }
}
