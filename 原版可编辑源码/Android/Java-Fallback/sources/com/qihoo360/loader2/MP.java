package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class MP {
    public static final java.lang.String ACTION_QUICK_RESTART = "com.qihoo360.loader2.ACTION_QUICK_RESTART";
    public static final java.lang.String ACTION_REQUEST_RESTART = "com.qihoo360.loader2.ACTION_REQUEST_RESTART";
    static volatile java.util.HashMap<java.lang.String, java.lang.String> sBinderReasons;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static final class PluginBinder {
        public final android.os.IBinder binder;
        public final java.lang.String name;
        public final int pid;
        public final java.lang.String plugin;

        PluginBinder(java.lang.String r1, java.lang.String r2, int r3, android.os.IBinder r4) {
                r0 = this;
                r0.<init>()
                r0.plugin = r1
                r0.name = r2
                r0.binder = r4
                r0.pid = r3
                return
        }
    }

    public MP() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final android.os.IBinder fetchBinder(java.lang.String r4) {
            java.lang.String r0 = "ws001"
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L2b
            android.os.IBinder r1 = r1.fetchBinder(r4)     // Catch: java.lang.Throwable -> L2b
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L2a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2b
            r2.<init>()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "fetchBinder n="
            r2.append(r3)     // Catch: java.lang.Throwable -> L2b
            r2.append(r4)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r4 = " b="
            r2.append(r4)     // Catch: java.lang.Throwable -> L2b
            r2.append(r1)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L2b
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)     // Catch: java.lang.Throwable -> L2b
        L2a:
            return r1
        L2b:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "mp f.b: "
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r1, r4)
            r4 = 0
            return r4
    }

    public static final com.qihoo360.loader2.MP.PluginBinder fetchPluginBinder(java.lang.String r12, int r13, java.lang.String r14) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.fetchPluginBinder ... plugin="
            r0.append(r2)
            r0.append(r12)
            java.lang.String r2 = " binder.name="
            r0.append(r2)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r0 = r0.isPrintDetailLog()
            if (r0 == 0) goto La4
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            int r2 = r0.length
            r3 = 0
            java.lang.String r4 = ""
        L38:
            java.lang.String r5 = ":"
            if (r3 >= r2) goto L82
            r6 = r0[r3]
            boolean r7 = r6.isNativeMethod()
            if (r7 == 0) goto L45
            goto L7f
        L45:
            java.lang.String r7 = r6.getClassName()
            java.lang.String r8 = r6.getMethodName()
            java.lang.String r9 = r6.getFileName()
            int r6 = r6.getLineNumber()
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r4)
            r10.append(r7)
            java.lang.String r4 = "."
            r10.append(r4)
            r10.append(r8)
            java.lang.String r4 = "("
            r10.append(r4)
            r10.append(r9)
            r10.append(r5)
            r10.append(r6)
            java.lang.String r4 = ")\n"
            r10.append(r4)
            java.lang.String r4 = r10.toString()
        L7f:
            int r3 = r3 + 1
            goto L38
        L82:
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.MP.sBinderReasons
            if (r0 != 0) goto L8d
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.MP.sBinderReasons = r0
        L8d:
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.MP.sBinderReasons
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r12)
            r2.append(r5)
            r2.append(r14)
            java.lang.String r2 = r2.toString()
            r0.put(r2, r4)
        La4:
            com.qihoo360.loader2.PluginBinderInfo r0 = new com.qihoo360.loader2.PluginBinderInfo
            r2 = 4
            r0.<init>(r2)
            r2 = 0
            com.qihoo360.loader2.IPluginClient r13 = startPluginProcess(r12, r13, r0)     // Catch: java.lang.Throwable -> Lec
            if (r13 != 0) goto Lb7
            java.lang.String r13 = "mp.f.p.b: s c fail"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r13)     // Catch: java.lang.Throwable -> Lec
            return r2
        Lb7:
            android.os.IBinder r13 = r13.queryBinder(r12, r14)     // Catch: java.lang.Throwable -> Lec
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Le7
            if (r3 == 0) goto Ldd
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7
            r3.<init>()     // Catch: java.lang.Throwable -> Le7
            java.lang.String r4 = "MP.fetchPluginBinder binder.object="
            r3.append(r4)     // Catch: java.lang.Throwable -> Le7
            r3.append(r13)     // Catch: java.lang.Throwable -> Le7
            java.lang.String r4 = " pid="
            r3.append(r4)     // Catch: java.lang.Throwable -> Le7
            int r4 = r0.pid     // Catch: java.lang.Throwable -> Le7
            r3.append(r4)     // Catch: java.lang.Throwable -> Le7
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Le7
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)     // Catch: java.lang.Throwable -> Le7
        Ldd:
            if (r13 == 0) goto L105
            com.qihoo360.loader2.IPluginHost r3 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> Le7
            r3.regPluginBinder(r0, r13)     // Catch: java.lang.Throwable -> Le7
            goto L105
        Le7:
            r3 = move-exception
            r11 = r3
            r3 = r13
            r13 = r11
            goto Lee
        Lec:
            r13 = move-exception
            r3 = r2
        Lee:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mp.f.p.b: p="
            r4.append(r5)
            int r5 = r0.pid
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r4, r13)
            r13 = r3
        L105:
            if (r13 != 0) goto L108
            return r2
        L108:
            com.qihoo360.loader2.MP$PluginBinder r1 = new com.qihoo360.loader2.MP$PluginBinder
            int r0 = r0.pid
            r1.<init>(r12, r14, r0, r13)
            return r1
    }

    public static final com.qihoo360.replugin.model.PluginInfo getPlugin(java.lang.String r2, boolean r3) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r1 = com.qihoo360.loader2.PluginTable.PLUGINS     // Catch: java.lang.Throwable -> L19
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Throwable -> L19
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L17
            if (r2 == 0) goto L17
            java.lang.Object r2 = r2.clone()     // Catch: java.lang.Throwable -> L19
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r2
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r2
        L19:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r2
    }

    public static final java.util.List<com.qihoo360.replugin.model.PluginInfo> getPlugins(boolean r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r2 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r2)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r3 = com.qihoo360.loader2.PluginTable.PLUGINS     // Catch: java.lang.Throwable -> L3e
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> L3e
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L3e
        L17:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L3e
            if (r4 == 0) goto L3c
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L3e
            com.qihoo360.replugin.model.PluginInfo r4 = (com.qihoo360.replugin.model.PluginInfo) r4     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = r4.getPath()     // Catch: java.lang.Throwable -> L3e
            boolean r6 = r1.contains(r5)     // Catch: java.lang.Throwable -> L3e
            if (r6 != 0) goto L17
            r1.add(r5)     // Catch: java.lang.Throwable -> L3e
            if (r7 == 0) goto L38
            java.lang.Object r4 = r4.clone()     // Catch: java.lang.Throwable -> L3e
            com.qihoo360.replugin.model.PluginInfo r4 = (com.qihoo360.replugin.model.PluginInfo) r4     // Catch: java.lang.Throwable -> L3e
        L38:
            r0.add(r4)     // Catch: java.lang.Throwable -> L3e
            goto L17
        L3c:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
            return r0
        L3e:
            r7 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3e
            throw r7
    }

    public static int getTaskAffinityGroupIndex(java.lang.String r1) throws android.os.RemoteException {
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()
            int r1 = r0.getTaskAffinityGroupIndex(r1)
            return r1
    }

    public static final void installBinder(java.lang.String r3, android.os.IBinder r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "installBinder n="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " b="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L2a
            r0.installBinder(r3, r4)     // Catch: java.lang.Throwable -> L2a
            goto L43
        L2a:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "mp i.b: "
            r4.append(r0)
            java.lang.String r0 = r3.getMessage()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r4, r3)
        L43:
            return
    }

    public static final void installBuiltinPlugin(java.lang.String r1, com.qihoo360.replugin.IHostBinderFetcher r2) {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.installBuiltinPlugin(r1, r2)
            return
    }

    public static final boolean isMsProcessAlive(java.lang.String r2) {
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L9
            boolean r2 = r0.isProcessAlive(r2)     // Catch: java.lang.Throwable -> L9
            return r2
        L9:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mp.i.p.a: "
            r0.append(r1)
            java.lang.String r1 = r2.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r2)
            r2 = 0
            return r2
    }

    public static final com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r7, boolean r8) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.pluginDownloaded ... path="
            r0.append(r2)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            r0 = 0
            if (r7 == 0) goto L50
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r2.getParent()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "p-n-"
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L50
            com.qihoo360.loader.utils.ProcessLocker r4 = new com.qihoo360.loader.utils.ProcessLocker     // Catch: java.lang.Throwable -> L4d
            android.content.Context r5 = com.qihoo360.replugin.RePluginInternal.getAppContext()     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r6.<init>()     // Catch: java.lang.Throwable -> L4d
            r6.append(r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = ".lock"
            r6.append(r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L4d
            r4.<init>(r5, r2, r3)     // Catch: java.lang.Throwable -> L4d
            goto L51
        L4d:
            r7 = move-exception
            r4 = r0
            goto L8e
        L50:
            r4 = r0
        L51:
            if (r4 == 0) goto L72
            boolean r2 = r4.tryLock()     // Catch: java.lang.Throwable -> L8d
            if (r2 != 0) goto L72
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r2.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = "MP.pluginDownloaded ... lock file + "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            r2.append(r7)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = " failed! "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> L8d
        L72:
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.model.PluginInfo r7 = r2.pluginDownloaded(r7, r8)     // Catch: java.lang.Throwable -> L8d
            if (r7 == 0) goto L87
            com.qihoo360.replugin.RePluginConfig r8 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L8d
            com.qihoo360.replugin.RePluginEventCallbacks r8 = r8.getEventCallbacks()     // Catch: java.lang.Throwable -> L8d
            r8.onInstallPluginSucceed(r7)     // Catch: java.lang.Throwable -> L8d
        L87:
            if (r4 == 0) goto L8c
            r4.unlock()
        L8c:
            return r7
        L8d:
            r7 = move-exception
        L8e:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r8.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "mp.pded: "
            r8.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r7.getMessage()     // Catch: java.lang.Throwable -> Lac
            r8.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lac
            com.qihoo360.replugin.helper.LogRelease.e(r1, r8, r7)     // Catch: java.lang.Throwable -> Lac
            if (r4 == 0) goto Lab
            r4.unlock()
        Lab:
            return r0
        Lac:
            r7 = move-exception
            if (r4 == 0) goto Lb2
            r4.unlock()
        Lb2:
            throw r7
    }

    public static final boolean pluginExtracted(java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.pluginExtracted ... path="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L23
            boolean r3 = r0.pluginExtracted(r3)     // Catch: java.lang.Throwable -> L23
            return r3
        L23:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mp.peed: "
            r0.append(r2)
            java.lang.String r2 = r3.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r3)
            r3 = 0
            return r3
    }

    public static final boolean pluginUninstall(java.lang.String r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.pluginUninstall ... pluginName="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            r0 = 1
            com.qihoo360.replugin.model.PluginInfo r2 = getPlugin(r4, r0)
            if (r2 != 0) goto L3a
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L39
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Not installed. pluginName="
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L39:
            return r0
        L3a:
            com.qihoo360.loader2.IPluginHost r4 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L43
            boolean r4 = r4.pluginUninstalled(r2)     // Catch: java.lang.Throwable -> L43
            return r4
        L43:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "uninstall. error: "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r4)
            r4 = 0
            return r4
    }

    public static final void releasePluginBinder(com.qihoo360.loader2.MP.PluginBinder r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.releasePluginBinder ... pid="
            r0.append(r2)
            int r2 = r4.pid
            r0.append(r2)
            java.lang.String r2 = " binder="
            r0.append(r2)
            android.os.IBinder r2 = r4.binder
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L26:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L4b
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.MP.sBinderReasons
            if (r0 == 0) goto L4b
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.qihoo360.loader2.MP.sBinderReasons
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.plugin
            r2.append(r3)
            java.lang.String r3 = ":"
            r2.append(r3)
            java.lang.String r3 = r4.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.remove(r2)
        L4b:
            com.qihoo360.loader2.PluginBinderInfo r0 = new com.qihoo360.loader2.PluginBinderInfo
            r2 = 4
            r0.<init>(r2)
            int r2 = r4.pid
            r0.pid = r2
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L5f
            android.os.IBinder r4 = r4.binder     // Catch: java.lang.Throwable -> L5f
            r2.unregPluginBinder(r0, r4)     // Catch: java.lang.Throwable -> L5f
            goto L78
        L5f:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mp.r.p.b: "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r4)
        L78:
            return
    }

    public static final java.lang.String[] resolvePluginActivity(java.lang.String r0) {
            java.lang.String[] r0 = com.qihoo360.loader2.PluginContainers.resolvePluginActivity(r0)
            return r0
    }

    public static final com.qihoo360.loader2.IPluginClient startPluginProcess(java.lang.String r1, int r2, com.qihoo360.loader2.PluginBinderInfo r3) throws android.os.RemoteException {
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()
            com.qihoo360.loader2.IPluginClient r1 = r0.startPluginProcess(r1, r2, r3)
            return r1
    }

    public static final int sumActivities() {
            int r0 = com.qihoo360.loader2.PluginProcessMain.sumActivities()
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L1e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MP.sumActivities = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws000"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L1e:
            return r0
    }

    public static final int sumBinders() {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MP.sumBinders ... index="
            r0.append(r2)
            int r2 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1c:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L27
            int r2 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex     // Catch: java.lang.Throwable -> L27
            int r0 = r0.sumBinders(r2)     // Catch: java.lang.Throwable -> L27
            return r0
        L27:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "mp.s.b: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
            r0 = -2
            return r0
    }
}
