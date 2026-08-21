package com.ymnsdk.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class YmnRepluginApplication extends com.qihoo360.replugin.RePluginApplication {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private class HostCallbacks extends com.qihoo360.replugin.RePluginCallbacks {
        private static final java.lang.String TAG = "HostCallbacks";
        final com.ymnsdk.replugin.YmnRepluginApplication this$0;

        private HostCallbacks(com.ymnsdk.replugin.YmnRepluginApplication r1, android.content.Context r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        HostCallbacks(com.ymnsdk.replugin.YmnRepluginApplication r1, android.content.Context r2, com.ymnsdk.replugin.YmnRepluginApplication.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public boolean onPluginNotExistsForActivity(android.content.Context r3, java.lang.String r4, android.content.Intent r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onPluginNotExistsForActivity: Start download... p="
                r0.append(r1)
                r0.append(r4)
                java.lang.String r1 = "; i="
                r0.append(r1)
                r0.append(r5)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "HostCallbacks"
                android.util.Log.d(r1, r0)
                boolean r3 = super.onPluginNotExistsForActivity(r3, r4, r5, r6)
                return r3
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private class HostEventCallbacks extends com.qihoo360.replugin.RePluginEventCallbacks {
        private static final java.lang.String TAG = "HostEventCallbacks";
        final com.ymnsdk.replugin.YmnRepluginApplication this$0;

        public HostEventCallbacks(com.ymnsdk.replugin.YmnRepluginApplication r1, android.content.Context r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void onInstallPluginFailed(java.lang.String r1, com.qihoo360.replugin.RePluginEventCallbacks.InstallResult r2) {
                r0 = this;
                super.onInstallPluginFailed(r1, r2)
                return
        }

        @Override
        public void onInstallPluginStepInfo(java.lang.String r2, boolean r3) {
                r1 = this;
                com.ymnsdk.replugin.trace.PluginTraceManager r0 = com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
                r0.summitInstallPluginLog(r2, r3)
                return
        }

        @Override
        public void onInstallPluginSucceed(com.qihoo360.replugin.model.PluginInfo r1) {
                r0 = this;
                super.onInstallPluginSucceed(r1)
                com.ymnsdk.replugin.trace.PluginTraceManager r1 = com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
                r1.deleteInstallPluginLog()
                return
        }

        @Override
        public void onStartActivityCompleted(java.lang.String r1, java.lang.String r2, boolean r3) {
                r0 = this;
                super.onStartActivityCompleted(r1, r2, r3)
                return
        }
    }

    public YmnRepluginApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    private void closeAndroidPDialog() {
            r5 = this;
            r0 = 0
            r1 = 1
            java.lang.String r2 = "android.content.pm.PackageParser$Package"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L16
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L16
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r0] = r4     // Catch: java.lang.Exception -> L16
            java.lang.reflect.Constructor r2 = r2.getDeclaredConstructor(r3)     // Catch: java.lang.Exception -> L16
            r2.setAccessible(r1)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r3 = "currentActivityThread"
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3f
            java.lang.reflect.Method r3 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L3f
            r3.setAccessible(r1)     // Catch: java.lang.Exception -> L3f
            r4 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3f
            java.lang.Object r0 = r3.invoke(r4, r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r3 = "mHiddenApiWarningShown"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.Exception -> L3f
            r2.setAccessible(r1)     // Catch: java.lang.Exception -> L3f
            r2.setBoolean(r0, r1)     // Catch: java.lang.Exception -> L3f
            goto L43
        L3f:
            r0 = move-exception
            r0.printStackTrace()
        L43:
            return
    }

    private static void createFile(java.io.File r0, boolean r1) {
            if (r1 == 0) goto L10
            boolean r1 = r0.exists()     // Catch: java.lang.Exception -> Lc
            if (r1 != 0) goto L10
            r0.createNewFile()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    private static void handleWebviewDir(android.content.Context r8) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L7
            return
        L7:
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L10b
            r0.<init>()     // Catch: java.lang.Exception -> L10b
            java.io.File r1 = r8.getDataDir()     // Catch: java.lang.Exception -> L10b
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> L10b
            java.lang.String r2 = "/app_webview"
            java.lang.String r3 = "/app_hws_webview"
            java.lang.String r4 = "/webview_data.lock"
            java.lang.String r5 = getProcessName()     // Catch: java.lang.Exception -> L10b
            java.lang.String r6 = r8.getPackageName()     // Catch: java.lang.Exception -> L10b
            boolean r6 = android.text.TextUtils.equals(r6, r5)     // Catch: java.lang.Exception -> L10b
            java.lang.String r7 = "_"
            if (r6 != 0) goto L7d
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L10b
            if (r6 == 0) goto L34
            java.lang.String r5 = r8.getPackageName()     // Catch: java.lang.Exception -> L10b
        L34:
            android.webkit.WebView.setDataDirectorySuffix(r5)     // Catch: java.lang.Exception -> L10b
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r8.<init>()     // Catch: java.lang.Exception -> L10b
            r8.append(r7)     // Catch: java.lang.Exception -> L10b
            r8.append(r5)     // Catch: java.lang.Exception -> L10b
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L10b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r5.<init>()     // Catch: java.lang.Exception -> L10b
            r5.append(r1)     // Catch: java.lang.Exception -> L10b
            r5.append(r2)     // Catch: java.lang.Exception -> L10b
            r5.append(r8)     // Catch: java.lang.Exception -> L10b
            r5.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r2)     // Catch: java.lang.Exception -> L10b
            boolean r2 = com.ymnsdk.replugin.util.RomUtil.isEmui()     // Catch: java.lang.Exception -> L10b
            if (r2 == 0) goto Lec
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r2.<init>()     // Catch: java.lang.Exception -> L10b
            r2.append(r1)     // Catch: java.lang.Exception -> L10b
            r2.append(r3)     // Catch: java.lang.Exception -> L10b
            r2.append(r8)     // Catch: java.lang.Exception -> L10b
            r2.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r8)     // Catch: java.lang.Exception -> L10b
            goto Lec
        L7d:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r8.<init>()     // Catch: java.lang.Exception -> L10b
            r8.append(r7)     // Catch: java.lang.Exception -> L10b
            r8.append(r5)     // Catch: java.lang.Exception -> L10b
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L10b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r5.<init>()     // Catch: java.lang.Exception -> L10b
            r5.append(r1)     // Catch: java.lang.Exception -> L10b
            r5.append(r2)     // Catch: java.lang.Exception -> L10b
            r5.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r5)     // Catch: java.lang.Exception -> L10b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r5.<init>()     // Catch: java.lang.Exception -> L10b
            r5.append(r1)     // Catch: java.lang.Exception -> L10b
            r5.append(r2)     // Catch: java.lang.Exception -> L10b
            r5.append(r8)     // Catch: java.lang.Exception -> L10b
            r5.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r2)     // Catch: java.lang.Exception -> L10b
            boolean r2 = com.ymnsdk.replugin.util.RomUtil.isEmui()     // Catch: java.lang.Exception -> L10b
            if (r2 == 0) goto Lec
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r2.<init>()     // Catch: java.lang.Exception -> L10b
            r2.append(r1)     // Catch: java.lang.Exception -> L10b
            r2.append(r3)     // Catch: java.lang.Exception -> L10b
            r2.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r2)     // Catch: java.lang.Exception -> L10b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10b
            r2.<init>()     // Catch: java.lang.Exception -> L10b
            r2.append(r1)     // Catch: java.lang.Exception -> L10b
            r2.append(r3)     // Catch: java.lang.Exception -> L10b
            r2.append(r8)     // Catch: java.lang.Exception -> L10b
            r2.append(r4)     // Catch: java.lang.Exception -> L10b
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Exception -> L10b
            r0.add(r8)     // Catch: java.lang.Exception -> L10b
        Lec:
            java.util.Iterator r8 = r0.iterator()     // Catch: java.lang.Exception -> L10b
        Lf0:
            boolean r0 = r8.hasNext()     // Catch: java.lang.Exception -> L10b
            if (r0 == 0) goto L10f
            java.lang.Object r0 = r8.next()     // Catch: java.lang.Exception -> L10b
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L10b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L10b
            r1.<init>(r0)     // Catch: java.lang.Exception -> L10b
            boolean r0 = r1.exists()     // Catch: java.lang.Exception -> L10b
            if (r0 == 0) goto Lf0
            tryLockOrRecreateFile(r1)     // Catch: java.lang.Exception -> L10b
            goto L10f
        L10b:
            r8 = move-exception
            r8.printStackTrace()
        L10f:
            return
    }

    private static void tryLockOrRecreateFile(java.io.File r2) {
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = "rw"
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L1d
            java.nio.channels.FileChannel r0 = r0.getChannel()     // Catch: java.lang.Exception -> L1d
            java.nio.channels.FileLock r0 = r0.tryLock()     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L15
            r0.close()     // Catch: java.lang.Exception -> L1d
            goto L2f
        L15:
            boolean r0 = r2.delete()     // Catch: java.lang.Exception -> L1d
            createFile(r2, r0)     // Catch: java.lang.Exception -> L1d
            goto L2f
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            boolean r1 = r2.exists()
            if (r1 == 0) goto L2c
            boolean r0 = r2.delete()
        L2c:
            createFile(r2, r0)
        L2f:
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r3) {
            r2 = this;
            super.attachBaseContext(r3)
            handleWebviewDir(r2)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 != r1) goto Lf
            r2.closeAndroidPDialog()
        Lf:
            r0 = 0
            com.qihoo360.replugin.RePlugin.enableDebugger(r3, r0)
            return
    }

    @Override
    protected com.qihoo360.replugin.RePluginCallbacks createCallbacks() {
            r2 = this;
            com.ymnsdk.replugin.YmnRepluginApplication$HostCallbacks r0 = new com.ymnsdk.replugin.YmnRepluginApplication$HostCallbacks
            r1 = 0
            r0.<init>(r2, r2, r1)
            return r0
    }

    @Override
    protected com.qihoo360.replugin.RePluginConfig createConfig() {
            r3 = this;
            com.qihoo360.replugin.RePluginConfig r0 = new com.qihoo360.replugin.RePluginConfig
            r0.<init>()
            r1 = 1
            r0.setUseHostClassIfNotFound(r1)
            r1 = 0
            r0.setVerifySign(r1)
            com.ymnsdk.replugin.YmnRepluginApplication$HostEventCallbacks r2 = new com.ymnsdk.replugin.YmnRepluginApplication$HostEventCallbacks
            r2.<init>(r3, r3)
            r0.setEventCallbacks(r2)
            r0.setMoveFileWhenInstalling(r1)
            return r0
    }

    @Override
    public android.content.Context getBaseContext() {
            r1 = this;
            android.content.Context r0 = super.getBaseContext()
            return r0
    }

    @Override
    public java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = super.getClassLoader()
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
            android.content.res.Resources r0 = super.getResources()
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    public void onCreate() {
            r2 = this;
            super.onCreate()
            com.ymnsdk.replugin.trace.PluginTraceManager r0 = com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
            android.content.Context r1 = r2.getBaseContext()
            r0.initLogFilePatch(r1)
            return
    }

    @Override
    public void onLowMemory() {
            r0 = this;
            super.onLowMemory()
            return
    }

    @Override
    public void onTerminate() {
            r0 = this;
            super.onTerminate()
            return
    }

    @Override
    public void onTrimMemory(int r1) {
            r0 = this;
            super.onTrimMemory(r1)
            return
    }
}
