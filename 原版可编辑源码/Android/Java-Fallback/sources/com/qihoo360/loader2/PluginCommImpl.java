package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginCommImpl {
    private static final java.lang.String CONTAINER_PROVIDER_AUTHORITY_PART = ".loader.p.pr";
    static final java.lang.String INTENT_KEY_THEME_ID = "__themeId";
    android.content.Context mContext;
    com.qihoo360.loader2.PmBase mPluginMgr;

    PluginCommImpl(android.content.Context r1, com.qihoo360.loader2.PmBase r2) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mPluginMgr = r2
            return
    }

    public java.lang.String fetchPluginName(java.lang.ClassLoader r2) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            java.lang.ClassLoader r0 = r0.getClassLoader()
            if (r2 != r0) goto Lb
            java.lang.String r2 = "main"
            return r2
        Lb:
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            com.qihoo360.loader2.Plugin r2 = r0.lookupPlugin(r2)
            if (r2 != 0) goto L15
            r2 = 0
            return r2
        L15:
            com.qihoo360.replugin.model.PluginInfo r2 = r2.mInfo
            java.lang.String r2 = r2.getName()
            return r2
    }

    public android.content.pm.ActivityInfo getActivityInfo(java.lang.String r3, java.lang.String r4, android.content.Intent r5) {
            r2 = this;
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadAppPlugin(r3)
            if (r0 != 0) goto L24
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L22
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L22:
            r3 = 0
            return r3
        L24:
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L33
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            com.qihoo360.replugin.component.ComponentList r3 = r3.mComponents
            android.content.pm.ActivityInfo r3 = r3.getActivity(r4)
            goto L39
        L33:
            android.content.Context r4 = r2.mContext
            android.content.pm.ActivityInfo r3 = com.qihoo360.replugin.component.utils.IntentMatcherHelper.getActivityInfo(r4, r3, r5)
        L39:
            return r3
    }

    public boolean isPluginLoaded(java.lang.String r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isPluginLoaded: name="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r3 = r0.getPlugin(r3)
            if (r3 != 0) goto L24
            r3 = 0
            return r3
        L24:
            boolean r3 = r3.isLoaded()
            return r3
    }

    public android.content.ComponentName loadPluginActivity(android.content.Intent r11, java.lang.String r12, java.lang.String r13, int r14) {
            r10 = this;
            java.lang.String r0 = "ws001"
            com.qihoo360.loader2.PluginBinderInfo r1 = new com.qihoo360.loader2.PluginBinderInfo
            r2 = 1
            r1.<init>(r2)
            r3 = 0
            r4 = 0
            android.content.pm.ActivityInfo r5 = r10.getActivityInfo(r12, r13, r11)     // Catch: java.lang.Throwable -> L88
            if (r5 != 0) goto L1a
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L85
            if (r13 == 0) goto L19
            java.lang.String r13 = "PACM: bindActivity: activity not found"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r13)     // Catch: java.lang.Throwable -> L85
        L19:
            return r4
        L1a:
            java.lang.String r6 = "__themeId"
            int r7 = r5.theme     // Catch: java.lang.Throwable -> L85
            r11.putExtra(r6, r7)     // Catch: java.lang.Throwable -> L85
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L3f
            java.lang.String r6 = "theme"
            java.lang.String r7 = "intent.putExtra(%s, %s);"
            r8 = 2
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L85
            java.lang.String r9 = r5.name     // Catch: java.lang.Throwable -> L85
            r8[r3] = r9     // Catch: java.lang.Throwable -> L85
            int r9 = r5.theme     // Catch: java.lang.Throwable -> L85
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L85
            r8[r2] = r9     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = java.lang.String.format(r7, r8)     // Catch: java.lang.Throwable -> L85
            com.qihoo360.replugin.helper.LogDebug.d(r6, r2)     // Catch: java.lang.Throwable -> L85
        L3f:
            java.lang.String r2 = r5.processName     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L4d
            java.lang.String r14 = r5.processName     // Catch: java.lang.Throwable -> L85
            java.lang.Integer r14 = com.qihoo360.replugin.component.utils.PluginClientHelper.getProcessInt(r14)     // Catch: java.lang.Throwable -> L85
            int r14 = r14.intValue()     // Catch: java.lang.Throwable -> L85
        L4d:
            com.qihoo360.loader2.IPluginClient r1 = com.qihoo360.loader2.MP.startPluginProcess(r12, r14, r1)     // Catch: java.lang.Throwable -> L85
            if (r1 != 0) goto L54
            return r4
        L54:
            java.lang.String r2 = r5.name     // Catch: java.lang.Throwable -> L85
            java.lang.String r14 = r1.allocActivityContainer(r12, r14, r2, r11)     // Catch: java.lang.Throwable -> L85
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto La3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r1.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = "alloc success: container="
            r1.append(r2)     // Catch: java.lang.Throwable -> L83
            r1.append(r14)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = " plugin="
            r1.append(r2)     // Catch: java.lang.Throwable -> L83
            r1.append(r12)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = " activity="
            r1.append(r2)     // Catch: java.lang.Throwable -> L83
            r1.append(r13)     // Catch: java.lang.Throwable -> L83
            java.lang.String r13 = r1.toString()     // Catch: java.lang.Throwable -> L83
            com.qihoo360.replugin.helper.LogDebug.i(r0, r13)     // Catch: java.lang.Throwable -> L83
            goto La3
        L83:
            r13 = move-exception
            goto L8b
        L85:
            r13 = move-exception
            r14 = r4
            goto L8b
        L88:
            r13 = move-exception
            r14 = r4
            r5 = r14
        L8b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "l.p.a spp|aac: "
            r1.append(r2)
            java.lang.String r2 = r13.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r1, r13)
        La3:
            boolean r13 = android.text.TextUtils.isEmpty(r14)
            if (r13 == 0) goto Laa
            return r4
        Laa:
            com.qihoo360.loader2.PmBase.cleanIntentPluginParams(r11)
            com.qihoo360.loader2.PluginIntent r13 = new com.qihoo360.loader2.PluginIntent
            r13.<init>(r11)
            r13.setPlugin(r12)
            java.lang.String r11 = r5.name
            r13.setActivity(r11)
            r11 = -2147483648(0xffffffff80000000, float:-0.0)
            r13.setProcess(r11)
            r13.setContainer(r14)
            r13.setCounter(r3)
            android.content.ComponentName r11 = new android.content.ComponentName
            java.lang.String r12 = com.qihoo360.replugin.base.IPC.getPackageName()
            r11.<init>(r12, r14)
            return r11
    }

    public java.lang.ClassLoader loadPluginClassLoader(com.qihoo360.replugin.model.PluginInfo r4) {
            r3 = this;
            com.qihoo360.loader2.PmBase r0 = r3.mPluginMgr
            r1 = 2
            r2 = 0
            com.qihoo360.loader2.Plugin r0 = r0.loadPlugin(r4, r3, r1, r2)
            if (r0 == 0) goto Lf
            com.qihoo360.loader2.Loader r4 = r0.mLoader
            java.lang.ClassLoader r4 = r4.mClassLoader
            return r4
        Lf:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L2d:
            r4 = 0
            return r4
    }

    public android.net.Uri loadPluginProvider(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            com.qihoo360.loader2.PluginBinderInfo r3 = new com.qihoo360.loader2.PluginBinderInfo
            r0 = 3
            r3.<init>(r0)
            r0 = 0
            com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.MP.startPluginProcess(r2, r4, r3)     // Catch: java.lang.Throwable -> L42
            if (r2 != 0) goto Le
            return r0
        Le:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r2.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> L42
            r2.append(r4)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = ".loader.p.pr"
            r2.append(r4)     // Catch: java.lang.Throwable -> L42
            int r3 = r3.index     // Catch: java.lang.Throwable -> L42
            r2.append(r3)     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L42
            android.net.Uri$Builder r3 = new android.net.Uri$Builder     // Catch: java.lang.Throwable -> L42
            r3.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = "content"
            android.net.Uri$Builder r3 = r3.scheme(r4)     // Catch: java.lang.Throwable -> L42
            android.net.Uri$Builder r2 = r3.encodedAuthority(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = "main"
            android.net.Uri$Builder r2 = r2.encodedPath(r3)     // Catch: java.lang.Throwable -> L42
            android.net.Uri r2 = r2.build()     // Catch: java.lang.Throwable -> L42
            return r2
        L42:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "l.p.p spp: "
            r3.append(r4)
            java.lang.String r4 = r2.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3, r2)
            return r0
    }

    public android.content.ComponentName loadPluginService(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            com.qihoo360.loader2.PluginBinderInfo r3 = new com.qihoo360.loader2.PluginBinderInfo
            r0 = 2
            r3.<init>(r0)
            r0 = 0
            com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.MP.startPluginProcess(r2, r4, r3)     // Catch: java.lang.Throwable -> L32
            if (r2 != 0) goto Le
            return r0
        Le:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            r2.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> L32
            r2.append(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = ".loader.s.Service"
            r2.append(r4)     // Catch: java.lang.Throwable -> L32
            int r3 = r3.index     // Catch: java.lang.Throwable -> L32
            r2.append(r3)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L32
            android.content.ComponentName r3 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> L32
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> L32
            return r3
        L32:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "l.p.p spp: "
            r3.append(r4)
            java.lang.String r4 = r2.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3, r2)
            return r0
    }

    public android.os.IBinder query(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = " binder="
            java.lang.String r2 = "ws001"
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "query: name="
            r0.append(r3)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L22:
            com.qihoo360.loader2.PmBase r0 = r4.mPluginMgr
            com.qihoo360.replugin.IHostBinderFetcher r0 = r0.getBuiltinPlugin(r5)
            if (r0 == 0) goto L38
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L33
            java.lang.String r5 = "use buildin plugin"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L33:
            android.os.IBinder r5 = r0.query(r6)
            return r5
        L38:
            com.qihoo360.loader2.PmBase r0 = r4.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadAppPlugin(r5)
            if (r0 != 0) goto L60
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L5e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "query: not found plugin,  name="
            r0.append(r3)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L5e:
            r5 = 0
            return r5
        L60:
            android.os.IBinder r5 = r0.query(r6)
            return r5
    }

    public android.os.IBinder query(java.lang.String r4, java.lang.String r5, int r6) {
            r3 = this;
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            r1 = -2
            if (r0 == 0) goto Le
            if (r6 != r1) goto Le
            android.os.IBinder r4 = r3.query(r4, r5)
            return r4
        Le:
            boolean r0 = com.qihoo360.replugin.base.IPC.isUIProcess()
            if (r0 == 0) goto L1c
            r0 = -1
            if (r6 != r0) goto L1c
            android.os.IBinder r4 = r3.query(r4, r5)
            return r4
        L1c:
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            java.lang.String r0 = com.qihoo360.replugin.component.process.PluginProcessHost.processTail(r0)
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP
            boolean r2 = r2.containsKey(r0)
            if (r2 == 0) goto L3f
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP
            java.lang.Object r0 = r2.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            if (r6 != r0) goto L3f
            android.os.IBinder r4 = r3.query(r4, r5)
            return r4
        L3f:
            if (r6 != r1) goto L67
            com.qihoo360.loader2.IPluginHost r6 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L4a
            android.os.IBinder r4 = r6.queryPluginBinder(r4, r5)     // Catch: java.lang.Throwable -> L4a
            return r4
        L4a:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "q.p.b: "
            r5.append(r6)
            java.lang.String r6 = r4.getMessage()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r6, r5, r4)
            r4 = 0
            return r4
        L67:
            android.content.Context r6 = r3.mContext
            android.os.IBinder r4 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.getPluginService(r6, r4, r5)
            return r4
    }

    public com.qihoo360.i.IModule query(java.lang.String r5, java.lang.Class<? extends com.qihoo360.i.IModule> r6) {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = " class="
            java.lang.String r2 = "ws001"
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "query: name="
            r0.append(r3)
            r0.append(r5)
            r0.append(r1)
            java.lang.String r3 = r6.getName()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L26:
            com.qihoo360.loader2.PmBase r0 = r4.mPluginMgr
            java.util.HashMap r0 = r0.getBuiltinModules(r5)
            if (r0 == 0) goto L39
            java.lang.String r5 = r6.getName()
            java.lang.Object r5 = r0.get(r5)
            com.qihoo360.i.IModule r5 = (com.qihoo360.i.IModule) r5
            return r5
        L39:
            com.qihoo360.loader2.PmBase r0 = r4.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadAppPlugin(r5)
            if (r0 != 0) goto L65
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L63
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "query: not found plugin,  name="
            r0.append(r3)
            r0.append(r5)
            r0.append(r1)
            java.lang.String r5 = r6.getName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L63:
            r5 = 0
            return r5
        L65:
            com.qihoo360.i.IModule r5 = r0.query(r6)
            return r5
    }

    public java.lang.ClassLoader queryPluginClassLoader(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = com.qihoo360.loader2.Plugin.queryCachedFilename(r3)
            java.lang.ClassLoader r0 = com.qihoo360.loader2.Plugin.queryCachedClassLoader(r0)
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadDexPlugin(r3, r2)
            if (r0 == 0) goto L18
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            java.lang.ClassLoader r3 = r3.mClassLoader
            return r3
        L18:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L32:
            r3 = 0
            return r3
    }

    public com.qihoo360.replugin.component.ComponentList queryPluginComponentList(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = com.qihoo360.loader2.Plugin.queryCachedFilename(r3)
            com.qihoo360.replugin.component.ComponentList r0 = com.qihoo360.loader2.Plugin.queryCachedComponentList(r0)
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadPackageInfoPlugin(r3, r2)
            if (r0 == 0) goto L18
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            com.qihoo360.replugin.component.ComponentList r3 = r3.mComponents
            return r3
        L18:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L32:
            r3 = 0
            return r3
    }

    public android.content.Context queryPluginContext(java.lang.String r3) {
            r2 = this;
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadAppPlugin(r3)
            if (r0 == 0) goto Ld
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.Context r3 = r3.mPkgContext
            return r3
        Ld:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L27:
            r3 = 0
            return r3
    }

    public android.content.pm.PackageInfo queryPluginPackageInfo(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = com.qihoo360.loader2.Plugin.queryCachedFilename(r3)
            android.content.pm.PackageInfo r0 = com.qihoo360.loader2.Plugin.queryCachedPackageInfo(r0)
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadPackageInfoPlugin(r3, r2)
            if (r0 == 0) goto L18
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.pm.PackageInfo r3 = r3.mPackageInfo
            return r3
        L18:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L32:
            r3 = 0
            return r3
    }

    public android.content.pm.PackageInfo queryPluginPackageInfo(java.lang.String r1, int r2) {
            r0 = this;
            java.lang.String r1 = com.qihoo360.loader2.Plugin.queryPluginNameByPkgName(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lf
            android.content.pm.PackageInfo r1 = r0.queryPluginPackageInfo(r1)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public android.content.res.Resources queryPluginResouces(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = com.qihoo360.loader2.Plugin.queryCachedFilename(r3)
            android.content.res.Resources r0 = com.qihoo360.loader2.Plugin.queryCachedResources(r0)
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadResourcePlugin(r3, r2)
            if (r0 == 0) goto L18
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            android.content.res.Resources r3 = r3.mPkgResources
            return r3
        L18:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not found plugin="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L32:
            r3 = 0
            return r3
    }

    public java.util.List<android.content.pm.ActivityInfo> queryPluginsReceiverList(android.content.Intent r3) {
            r2 = this;
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()
            if (r0 == 0) goto L2a
            java.util.List r3 = r0.queryPluginsReceiverList(r3)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Query PluginsReceiverList fail:"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
        L2a:
            r3 = 0
            return r3
    }

    public boolean startActivity(android.content.Context r9, android.content.Intent r10, java.lang.String r11, java.lang.String r12, int r13) {
            r8 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start activity: intent="
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = " plugin="
            r0.append(r1)
            r0.append(r11)
            java.lang.String r1 = " activity="
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = " process="
            r0.append(r1)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L32:
            com.qihoo360.loader2.PmBase r0 = r8.mPluginMgr
            com.qihoo360.loader2.PluginLibraryInternalProxy r1 = r0.mInternal
            r7 = 1
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            boolean r9 = r1.startActivity(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public boolean startActivityForResult(android.app.Activity r3, android.content.Intent r4, int r5, android.os.Bundle r6) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "startActivityForResult: intent="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " requestCode="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " options="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L2a:
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = r0.mInternal
            boolean r3 = r0.startActivityForResult(r3, r4, r5, r6)
            return r3
    }
}
