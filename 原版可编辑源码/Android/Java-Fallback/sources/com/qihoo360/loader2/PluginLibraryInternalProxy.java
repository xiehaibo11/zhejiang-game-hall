package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginLibraryInternalProxy {
    com.qihoo360.loader2.PmBase mPluginMgr;

    PluginLibraryInternalProxy(com.qihoo360.loader2.PmBase r1) {
            r0 = this;
            r0.<init>()
            r0.mPluginMgr = r1
            return
    }

    private java.lang.String fetchPluginByPitActivity(android.app.Activity r3) {
            r2 = this;
            android.content.ComponentName r0 = r3.getComponentName()
            r1 = 0
            if (r0 == 0) goto L1a
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.PluginProcessPer r0 = r0.mClient
            com.qihoo360.loader2.PluginContainers r0 = r0.mACM
            android.content.ComponentName r3 = r3.getComponentName()
            java.lang.String r3 = r3.getClassName()
            com.qihoo360.loader2.PluginContainers$ActivityState r3 = r0.lookupByContainer(r3)
            goto L1b
        L1a:
            r3 = r1
        L1b:
            if (r3 == 0) goto L20
            java.lang.String r3 = r3.plugin
            return r3
        L20:
            return r1
    }

    private static int getDefaultThemeId() {
            boolean r0 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_USE_APPCOMPAT
            if (r0 == 0) goto L2c
            boolean r0 = com.qihoo360.replugin.compat.CompatConfig.DEPENDENCY_ANDROIDX     // Catch: java.lang.NoSuchFieldException -> L1e java.lang.IllegalAccessException -> L23 java.lang.ClassNotFoundException -> L28
            if (r0 == 0) goto Lb
            java.lang.String r0 = "androidx.appcompat.R$style"
            goto Ld
        Lb:
            java.lang.String r0 = "android.support.v7.appcompat.R$style"
        Ld:
            java.lang.Class r0 = com.qihoo360.replugin.utils.ReflectUtils.getClass(r0)     // Catch: java.lang.NoSuchFieldException -> L1e java.lang.IllegalAccessException -> L23 java.lang.ClassNotFoundException -> L28
            java.lang.String r1 = "Theme_AppCompat"
            java.lang.Object r0 = com.qihoo360.replugin.utils.ReflectUtils.readStaticField(r0, r1)     // Catch: java.lang.NoSuchFieldException -> L1e java.lang.IllegalAccessException -> L23 java.lang.ClassNotFoundException -> L28
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L1e java.lang.IllegalAccessException -> L23 java.lang.ClassNotFoundException -> L28
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L1e java.lang.IllegalAccessException -> L23 java.lang.ClassNotFoundException -> L28
            return r0
        L1e:
            r0 = move-exception
            r0.printStackTrace()
            goto L2c
        L23:
            r0 = move-exception
            r0.printStackTrace()
            goto L2c
        L28:
            r0 = move-exception
            r0.printStackTrace()
        L2c:
            r0 = 16973830(0x1030006, float:2.4060917E-38)
            return r0
    }

    private int getDynamicThemeId(android.app.Activity r7) {
            r6 = this;
            java.lang.ClassLoader r0 = r7.getClassLoader()     // Catch: java.lang.Exception -> L18
            java.lang.String r1 = "android.view.ContextThemeWrapper"
            java.lang.String r2 = "getThemeResId"
            r4 = 0
            r3 = 0
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L18
            r3 = r7
            java.lang.Object r7 = com.qihoo360.replugin.utils.ReflectUtils.invokeMethod(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L18
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Exception -> L18
            int r7 = r7.intValue()     // Catch: java.lang.Exception -> L18
            goto L1d
        L18:
            r7 = move-exception
            r7.printStackTrace()
            r7 = -1
        L1d:
            return r7
    }

    private static java.lang.String getPluginName(android.app.Activity r1, android.content.Intent r2) {
            android.content.ComponentName r0 = r2.getComponent()
            if (r0 == 0) goto Lf
            android.content.ComponentName r2 = r2.getComponent()
            java.lang.String r2 = r2.getPackageName()
            goto L11
        Lf:
            java.lang.String r2 = ""
        L11:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.lang.String r0 = "."
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L27
        L1f:
            java.lang.ClassLoader r1 = r1.getClassLoader()
            java.lang.String r2 = com.qihoo360.replugin.RePlugin.fetchPluginNameByClassLoader(r1)
        L27:
            return r2
    }

    private int getThemeId(android.app.Activity r5, android.content.Intent r6) {
            r4 = this;
            int r0 = r4.getDynamicThemeId(r5)
            java.lang.String r1 = "__themeId"
            r2 = 0
            int r6 = r6.getIntExtra(r1, r2)
            if (r6 != 0) goto L13
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()
            int r6 = r5.theme
        L13:
            int r5 = getDefaultThemeId()
            boolean r1 = com.qihoo360.loader2.LaunchModeStates.isTranslucentTheme(r6)
            if (r1 == 0) goto L20
            r5 = 16973840(0x1030010, float:2.4060945E-38)
        L20:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "theme"
            if (r1 == 0) goto L62
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "defaultThemeId = "
            r1.append(r3)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "dynamicThemeId = "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "manifestThemeId = "
            r1.append(r3)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L62:
            r1 = -1
            if (r0 == r1) goto L6a
            if (r0 != r5) goto L6f
            if (r6 == 0) goto L6e
            goto L6c
        L6a:
            if (r6 == 0) goto L6e
        L6c:
            r0 = r6
            goto L6f
        L6e:
            r0 = r5
        L6f:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L87
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "themeId = "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L87:
            return r0
    }

    private boolean isNeedToDownload(android.content.Context r5, java.lang.String r6, boolean r7) {
            r4 = this;
            java.lang.String r5 = com.qihoo360.loader2.V5FileInfo.getFileName(r6)
            java.io.File r0 = new java.io.File
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            java.io.File r1 = r1.getPnInstallDir()
            r0.<init>(r1, r5)
            boolean r5 = r0.exists()
            r1 = 1
            java.lang.String r2 = "ws001"
            if (r5 != 0) goto L33
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L32
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "isNeedToDownload(): V5 file not exists. Plugin = "
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L32:
            return r1
        L33:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L4b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r3 = "isNeedToDownload(): V5 file exists. Extracting... Plugin = "
            r5.append(r3)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L4b:
            java.lang.String r5 = r0.getAbsolutePath()
            com.qihoo360.replugin.model.PluginInfo r5 = com.qihoo360.loader2.MP.pluginDownloaded(r5, r7)
            if (r5 != 0) goto L6e
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L6d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "isNeedToDownload(): V5 file is invalid. Plugin = "
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L6d:
            return r1
        L6e:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L86
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "isNeedToDownload(): V5 file is Okay. Loading... Plugin = "
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L86:
            r5 = 0
            return r5
    }

    public android.content.Context createActivityContext(android.app.Activity r3, android.content.Context r4) {
            r2 = this;
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            java.lang.Class r1 = r3.getClass()
            java.lang.ClassLoader r1 = r1.getClassLoader()
            com.qihoo360.loader2.Plugin r0 = r0.lookupPlugin(r1)
            if (r0 != 0) goto L34
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L32
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "PACM: createActivityContext: can't found plugin object for activity="
            r4.append(r0)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L32:
            r3 = 0
            return r3
        L34:
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.Context r3 = r3.createBaseContext(r4)
            return r3
    }

    public org.json.JSONArray fetchPlugins(java.lang.String r6) {
            r5 = this;
            r0 = 0
            java.util.List r0 = com.qihoo360.loader2.MP.getPlugins(r0)
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r2 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r2)
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L37
        L11:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L37
            if (r3 == 0) goto L35
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L37
            com.qihoo360.replugin.model.PluginInfo r3 = (com.qihoo360.replugin.model.PluginInfo) r3     // Catch: java.lang.Throwable -> L37
            boolean r4 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L37
            if (r4 != 0) goto L2d
            java.lang.String r4 = r3.getName()     // Catch: java.lang.Throwable -> L37
            boolean r4 = android.text.TextUtils.equals(r4, r6)     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L11
        L2d:
            org.json.JSONObject r3 = r3.getJSON()     // Catch: java.lang.Throwable -> L37
            r1.put(r3)     // Catch: java.lang.Throwable -> L37
            goto L11
        L35:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L37
            return r1
        L37:
            r6 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L37
            throw r6
    }

    public java.lang.String getPluginByDynamicClass(java.lang.String r2) {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            java.lang.String r2 = r0.getPluginByDynamicClass(r2)
            return r2
    }

    public void handleActivityCreate(android.app.Activity r11, android.os.Bundle r12) {
            r10 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "activity create: "
            r0.append(r2)
            java.lang.Class r2 = r11.getClass()
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = " this="
            r0.append(r2)
            int r2 = r11.hashCode()
            r0.append(r2)
            java.lang.String r2 = " taskid="
            r0.append(r2)
            int r2 = r11.getTaskId()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L3a:
            android.content.Intent r0 = r11.getIntent()
            if (r0 == 0) goto L110
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> Lf7
            android.content.Intent r2 = r11.getIntent()     // Catch: java.lang.Throwable -> Lf7
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.loader2.PluginIntent r2 = new com.qihoo360.loader2.PluginIntent     // Catch: java.lang.Throwable -> Lf7
            r2.<init>(r0)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r3 = r2.getPlugin()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r4 = r2.getActivity()     // Catch: java.lang.Throwable -> Lf7
            int r5 = r2.getProcess()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r6 = r2.getContainer()     // Catch: java.lang.Throwable -> Lf7
            int r2 = r2.getCounter()     // Catch: java.lang.Throwable -> Lf7
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r8 = " activity="
            if (r7 == 0) goto L9a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7
            r7.<init>()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r9 = "activity create: name="
            r7.append(r9)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r3)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r8)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r4)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r9 = " process="
            r7.append(r9)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r5)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r5 = " container="
            r7.append(r5)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r6)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r5 = " counter="
            r7.append(r5)     // Catch: java.lang.Throwable -> Lf7
            r7.append(r2)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> Lf7
        L9a:
            java.lang.Class r2 = r11.getClass()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> Lf7
            boolean r2 = android.text.TextUtils.equals(r4, r2)     // Catch: java.lang.Throwable -> Lf7
            if (r2 != 0) goto Ld0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7
            r2.<init>()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r3 = "a.c.1: a="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf7
            r2.append(r4)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r3 = " l="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf7
            java.lang.Class r3 = r11.getClass()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> Lf7
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.replugin.helper.LogRelease.w(r1, r2)     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.loader2.PMF.forward(r11, r0)     // Catch: java.lang.Throwable -> Lf7
            return
        Ld0:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lf7
            if (r0 == 0) goto L110
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7
            r0.<init>()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = "perfect: container="
            r0.append(r2)     // Catch: java.lang.Throwable -> Lf7
            r0.append(r6)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = " plugin="
            r0.append(r2)     // Catch: java.lang.Throwable -> Lf7
            r0.append(r3)     // Catch: java.lang.Throwable -> Lf7
            r0.append(r8)     // Catch: java.lang.Throwable -> Lf7
            r0.append(r4)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lf7
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)     // Catch: java.lang.Throwable -> Lf7
            goto L110
        Lf7:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "a.c.2: exception: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
        L110:
            r0 = 0
            android.content.ComponentName r2 = r11.getComponentName()
            if (r2 == 0) goto L129
            com.qihoo360.loader2.PmBase r0 = r10.mPluginMgr
            com.qihoo360.loader2.PluginProcessPer r0 = r0.mClient
            com.qihoo360.loader2.PluginContainers r0 = r0.mACM
            android.content.ComponentName r2 = r11.getComponentName()
            java.lang.String r2 = r2.getClassName()
            com.qihoo360.loader2.PluginContainers$ActivityState r0 = r0.lookupByContainer(r2)
        L129:
            if (r0 != 0) goto L148
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "a.c1: l="
            r12.append(r0)
            java.lang.Class r11 = r11.getClass()
            java.lang.String r11 = r11.getName()
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r11)
            return
        L148:
            com.qihoo360.loader2.PmBase r2 = r10.mPluginMgr
            com.qihoo360.loader2.PluginProcessPer r2 = r2.mClient
            com.qihoo360.loader2.PluginContainers r2 = r2.mACM
            java.lang.String r3 = r0.plugin
            java.lang.String r4 = r0.container
            r2.handleCreate(r3, r11, r4)
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L16b
            int r3 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L16b
            java.lang.String r4 = r0.plugin     // Catch: java.lang.Throwable -> L16b
            java.lang.String r5 = r0.container     // Catch: java.lang.Throwable -> L16b
            java.lang.Class r6 = r11.getClass()     // Catch: java.lang.Throwable -> L16b
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> L16b
            r2.regActivity(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L16b
            goto L184
        L16b:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "a.c2: "
            r3.append(r4)
            java.lang.String r4 = r2.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r3, r2)
        L184:
            if (r12 == 0) goto L18d
            java.lang.ClassLoader r2 = r11.getClassLoader()
            r12.setClassLoader(r2)
        L18d:
            android.content.Intent r12 = r11.getIntent()
            if (r12 == 0) goto L1b6
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L1af
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "set activity intent cl="
            r2.append(r3)
            java.lang.ClassLoader r3 = r11.getClassLoader()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)
        L1af:
            java.lang.ClassLoader r1 = r11.getClassLoader()
            r12.setExtrasClassLoader(r1)
        L1b6:
            java.lang.String r12 = r0.plugin
            java.lang.String r0 = r0.activity
            com.qihoo360.replugin.component.activity.ActivityInjector.inject(r11, r12, r0)
            return
    }

    public void handleActivityCreateBefore(android.app.Activity r4, android.os.Bundle r5) {
            r3 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "activity create before: "
            r0.append(r2)
            java.lang.Class r2 = r4.getClass()
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = " this="
            r0.append(r2)
            int r2 = r4.hashCode()
            r0.append(r2)
            java.lang.String r2 = " taskid="
            r0.append(r2)
            int r2 = r4.getTaskId()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L3a:
            if (r5 == 0) goto L62
            java.lang.ClassLoader r0 = r4.getClassLoader()
            r5.setClassLoader(r0)
            java.lang.String r0 = "android:support:fragments"
            r5.remove(r0)     // Catch: java.lang.Throwable -> L49
            goto L62
        L49:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "a.c.b1: "
            r0.append(r2)
            java.lang.String r2 = r5.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r5)
        L62:
            android.content.Intent r5 = r4.getIntent()
            if (r5 == 0) goto L76
            java.lang.ClassLoader r0 = r4.getClassLoader()
            r5.setExtrasClassLoader(r0)
            int r5 = r3.getThemeId(r4, r5)
            r4.setTheme(r5)
        L76:
            return
    }

    public void handleActivityDestroy(android.app.Activity r7) {
            r6 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "activity destroy: "
            r0.append(r2)
            java.lang.Class r2 = r7.getClass()
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = " this="
            r0.append(r2)
            int r2 = r7.hashCode()
            r0.append(r2)
            java.lang.String r2 = " taskid="
            r0.append(r2)
            int r2 = r7.getTaskId()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L3a:
            com.qihoo360.loader2.PmBase r0 = r6.mPluginMgr
            com.qihoo360.loader2.PluginProcessPer r0 = r0.mClient
            com.qihoo360.loader2.PluginContainers r0 = r0.mACM
            r0.handleDestroy(r7)
            r0 = 0
            android.content.ComponentName r2 = r7.getComponentName()
            if (r2 == 0) goto L5c
            com.qihoo360.loader2.PmBase r0 = r6.mPluginMgr
            com.qihoo360.loader2.PluginProcessPer r0 = r0.mClient
            com.qihoo360.loader2.PluginContainers r0 = r0.mACM
            android.content.ComponentName r2 = r7.getComponentName()
            java.lang.String r2 = r2.getClassName()
            com.qihoo360.loader2.PluginContainers$ActivityState r0 = r0.lookupByContainer(r2)
        L5c:
            if (r0 != 0) goto L7b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "p a h a d c f p a "
            r0.append(r2)
            java.lang.Class r7 = r7.getClass()
            java.lang.String r7 = r7.getName()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r7)
            return
        L7b:
            java.lang.String r2 = r0.plugin
            java.lang.String r0 = r0.container
            com.qihoo360.loader2.IPluginHost r3 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L91
            int r4 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L91
            java.lang.Class r5 = r7.getClass()     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L91
            r3.unregActivity(r4, r2, r0, r5)     // Catch: java.lang.Throwable -> L91
            goto Laa
        L91:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ur.a: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
        Laa:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r0.getEventCallbacks()
            r0.onActivityDestroyed(r7)
            return
    }

    public void handleRestoreInstanceState(android.app.Activity r4, android.os.Bundle r5) {
            r3 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "activity restore instance state: "
            r0.append(r1)
            java.lang.Class r1 = r4.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            if (r5 == 0) goto L53
            java.lang.ClassLoader r0 = r4.getClassLoader()
            r5.setClassLoader(r0)
            java.util.Set r0 = r5.keySet()
            if (r0 == 0) goto L53
            java.util.Iterator r0 = r0.iterator()
        L35:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r1 = r5.get(r1)
            boolean r2 = r1 instanceof android.os.Bundle
            if (r2 == 0) goto L35
            android.os.Bundle r1 = (android.os.Bundle) r1
            java.lang.ClassLoader r2 = r4.getClassLoader()
            r1.setClassLoader(r2)
            goto L35
        L53:
            return
    }

    public void handleServiceCreate(android.app.Service r2) {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            r0.handleServiceCreated(r2)
            return
    }

    public void handleServiceDestroy(android.app.Service r2) {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            r0.handleServiceDestroyed(r2)
            return
    }

    public boolean isDynamicClass(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            boolean r2 = r0.isDynamicClass(r2, r3)
            return r2
    }

    public boolean registerDynamicClass(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.Class r10) {
            r6 = this;
            com.qihoo360.loader2.PmBase r0 = r6.mPluginMgr
            java.lang.String r3 = ""
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            boolean r7 = r0.addDynamicClass(r1, r2, r3, r4, r5)
            return r7
    }

    public boolean registerDynamicClass(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            com.qihoo360.loader2.PmBase r0 = r6.mPluginMgr
            r5 = 0
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            boolean r7 = r0.addDynamicClass(r1, r2, r3, r4, r5)
            return r7
    }

    public boolean startActivity(android.content.Context r9, android.content.Intent r10) {
            r8 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "start context: intent="
            r0.append(r2)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            java.lang.String r0 = "compatible"
            r2 = 0
            boolean r3 = r10.getBooleanExtra(r0, r2)
            if (r3 == 0) goto L30
            com.qihoo360.loader2.PmBase.cleanIntentPluginParams(r10)
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L2f
            java.lang.String r9 = "start context: COMPATIBLE is true, direct start"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r9)
        L2f:
            return r2
        L30:
            java.lang.String r3 = "activity"
            java.lang.String r3 = r10.getStringExtra(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L5e
            android.content.ComponentName r4 = r10.getComponent()
            if (r4 == 0) goto L5e
            java.lang.String r3 = r4.getClassName()
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L5e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "start context: custom context="
            r4.append(r5)
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L5e:
            com.qihoo360.loader2.PmBase r4 = r8.mPluginMgr
            boolean r4 = r4.isActivity(r3)
            if (r4 == 0) goto L73
            com.qihoo360.loader2.PmBase.cleanIntentPluginParams(r10)
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L72
            java.lang.String r9 = "start context: context is container, direct start"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r9)
        L72:
            return r2
        L73:
            java.lang.String r4 = "plugin"
            java.lang.String r4 = r10.getStringExtra(r4)
            android.content.ComponentName r5 = r10.getComponent()
            if (r5 == 0) goto Ld7
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto Lb5
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "isHookingClass("
            r6.append(r7)
            r6.append(r4)
            java.lang.String r7 = ","
            r6.append(r7)
            java.lang.String r7 = r5.getClassName()
            r6.append(r7)
            java.lang.String r7 = ") = "
            r6.append(r7)
            java.lang.String r7 = r5.getClassName()
            boolean r7 = r8.isDynamicClass(r4, r7)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "loadClass"
            com.qihoo360.replugin.helper.LogDebug.d(r7, r6)
        Lb5:
            java.lang.String r6 = r5.getClassName()
            boolean r6 = r8.isDynamicClass(r4, r6)
            if (r6 == 0) goto Ld7
            r1 = 1
            r10.putExtra(r0, r1)
            android.content.ComponentName r0 = new android.content.ComponentName
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            java.lang.String r3 = r5.getClassName()
            r0.<init>(r1, r3)
            r10.setComponent(r0)
            r9.startActivity(r10)
            return r2
        Ld7:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L100
            boolean r0 = r9 instanceof android.app.Activity
            if (r0 == 0) goto Le8
            r0 = r9
            android.app.Activity r0 = (android.app.Activity) r0
            java.lang.String r4 = r8.fetchPluginByPitActivity(r0)
        Le8:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L100
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "start context: custom plugin is empty, query plugin="
            r0.append(r5)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L100:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L10e
            java.lang.ClassLoader r0 = r9.getClassLoader()
            java.lang.String r4 = com.qihoo360.replugin.RePlugin.fetchPluginNameByClassLoader(r0)
        L10e:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L121
            com.qihoo360.loader2.PmBase.cleanIntentPluginParams(r10)
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L120
            java.lang.String r9 = "start context: plugin and context is empty, direct start"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r9)
        L120:
            return r2
        L121:
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            java.lang.String r1 = "process"
            int r0 = r10.getIntExtra(r1, r0)
            com.qihoo360.loader2.PmBase.cleanIntentPluginParams(r10)
            boolean r9 = com.qihoo360.i.Factory.startActivityWithNoInjectCN(r9, r10, r4, r3, r0)
            return r9
    }

    public boolean startActivity(android.content.Context r8, android.content.Intent r9, java.lang.String r10, java.lang.String r11, int r12, boolean r13) {
            r7 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = " process="
            java.lang.String r2 = " activity="
            java.lang.String r3 = " plugin="
            java.lang.String r4 = "ws001"
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "start activity: intent="
            r0.append(r5)
            r0.append(r9)
            r0.append(r3)
            r0.append(r10)
            r0.append(r2)
            r0.append(r11)
            r0.append(r1)
            r0.append(r12)
            java.lang.String r5 = " download="
            r0.append(r5)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r0)
        L3a:
            r0 = 0
            if (r13 == 0) goto L73
            com.qihoo360.replugin.model.PluginInfo r13 = com.qihoo360.loader2.PluginTable.getPluginInfo(r10)
            if (r13 != 0) goto L73
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r13 == 0) goto L60
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r5 = "plugin="
            r13.append(r5)
            r13.append(r10)
            java.lang.String r5 = " not found, start download ..."
            r13.append(r5)
            java.lang.String r13 = r13.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r13)
        L60:
            boolean r13 = r7.isNeedToDownload(r8, r10, r0)
            if (r13 == 0) goto L73
            com.qihoo360.replugin.RePluginConfig r11 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r11 = r11.getCallbacks()
            boolean r8 = r11.onPluginNotExistsForActivity(r8, r10, r9, r12)
            return r8
        L73:
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r13 == 0) goto La1
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r5 = "isHookingClass("
            r13.append(r5)
            r13.append(r10)
            java.lang.String r5 = " , "
            r13.append(r5)
            r13.append(r11)
            java.lang.String r5 = ") = "
            r13.append(r5)
            boolean r5 = com.qihoo360.i.Factory2.isDynamicClass(r10, r11)
            r13.append(r5)
            java.lang.String r13 = r13.toString()
            java.lang.String r5 = "loadClass"
            com.qihoo360.replugin.helper.LogDebug.d(r5, r13)
        La1:
            boolean r13 = com.qihoo360.i.Factory2.isDynamicClass(r10, r11)
            r5 = 1
            if (r13 == 0) goto Lbd
            java.lang.String r10 = "compatible"
            r9.putExtra(r10, r5)
            android.content.ComponentName r10 = new android.content.ComponentName
            java.lang.String r12 = com.qihoo360.replugin.base.IPC.getPackageName()
            r10.<init>(r12, r11)
            r9.setComponent(r10)
            r8.startActivity(r9)
            return r5
        Lbd:
            int r13 = com.qihoo360.loader2.PluginStatusController.getStatus(r10)
            if (r13 >= 0) goto Le8
            boolean r11 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r11 == 0) goto Ldb
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r13 = "PluginLibraryInternalProxy.startActivity(): Plugin Disabled. pn="
            r11.append(r13)
            r11.append(r10)
            java.lang.String r11 = r11.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r11)
        Ldb:
            com.qihoo360.replugin.RePluginConfig r11 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r11 = r11.getCallbacks()
            boolean r8 = r11.onPluginNotExistsForActivity(r8, r10, r9, r12)
            return r8
        Le8:
            boolean r13 = com.qihoo360.replugin.RePlugin.isPluginDexExtracted(r10)
            if (r13 != 0) goto L11f
            com.qihoo360.loader2.PluginDesc r13 = com.qihoo360.loader2.PluginDesc.get(r10)
            if (r13 == 0) goto L11f
            boolean r13 = r13.isLarge()
            if (r13 == 0) goto L11f
            boolean r11 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r11 == 0) goto L112
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r13 = "PM.startActivity(): Large Plugin! p="
            r11.append(r13)
            r11.append(r10)
            java.lang.String r11 = r11.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r11)
        L112:
            com.qihoo360.replugin.RePluginConfig r11 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r11 = r11.getCallbacks()
            boolean r8 = r11.onLoadLargePluginForActivity(r8, r10, r9, r12)
            return r8
        L11f:
            android.content.Intent r13 = new android.content.Intent
            r13.<init>(r9)
            boolean r6 = android.text.TextUtils.isEmpty(r10)
            if (r6 != 0) goto L138
            boolean r6 = android.text.TextUtils.isEmpty(r11)
            if (r6 != 0) goto L138
            android.content.ComponentName r6 = new android.content.ComponentName
            r6.<init>(r10, r11)
            r13.setComponent(r6)
        L138:
            com.qihoo360.loader2.PmBase r6 = r7.mPluginMgr
            com.qihoo360.loader2.PluginCommImpl r6 = r6.mLocal
            android.content.ComponentName r6 = r6.loadPluginActivity(r9, r10, r11, r12)
            if (r6 != 0) goto L16d
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L16c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r13 = "plugin cn not found: intent="
            r8.append(r13)
            r8.append(r9)
            r8.append(r3)
            r8.append(r10)
            r8.append(r2)
            r8.append(r11)
            r8.append(r1)
            r8.append(r12)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r8)
        L16c:
            return r0
        L16d:
            r9.setComponent(r6)
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L188
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "start activity: real intent="
            r10.append(r11)
            r10.append(r9)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r10)
        L188:
            r8.startActivity(r9)
            com.qihoo360.replugin.RePluginConfig r10 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r10 = r10.getEventCallbacks()
            r10.onPrepareStartPitActivity(r8, r13, r9)
            return r5
    }

    public boolean startActivityForResult(android.app.Activity r5, android.content.Intent r6, int r7, android.os.Bundle r8) {
            r4 = this;
            java.lang.String r0 = getPluginName(r5, r6)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L1e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "start activity with startActivityForResult: intent="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L1e:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto L26
            return r2
        L26:
            android.content.ComponentName r1 = r6.getComponent()
            if (r1 != 0) goto L2d
            return r2
        L2d:
            java.lang.String r1 = r1.getClassName()
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            android.content.ComponentName r0 = com.qihoo360.i.Factory.loadPluginActivity(r6, r0, r1, r3)
            if (r0 != 0) goto L3a
            return r2
        L3a:
            r6.setComponent(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L47
            r5.startActivityForResult(r6, r7, r8)
            goto L4a
        L47:
            r5.startActivityForResult(r6, r7)
        L4a:
            r5 = 1
            return r5
    }

    public void unregisterDynamicClass(java.lang.String r2) {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            r0.removeDynamicClass(r2)
            return
    }
}
