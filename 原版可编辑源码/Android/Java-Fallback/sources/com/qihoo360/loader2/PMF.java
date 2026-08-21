package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PMF {
    private static android.content.Context sContext;
    static com.qihoo360.loader2.PmBase sPluginMgr;

    public PMF() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final void addBuiltinModule(java.lang.String r1, java.lang.Class<? extends com.qihoo360.i.IModule> r2, com.qihoo360.i.IModule r3) {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.addBuiltinModule(r1, r2, r3)
            return
    }

    public static final void callAppCreate() {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.callAppCreate()
            return
    }

    public static final void callAttach() {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.callAttach()
            return
    }

    public static final void dump(java.io.FileDescriptor r1, java.io.PrintWriter r2, java.lang.String[] r3) {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.dump(r1, r2, r3)
            return
    }

    public static final void forward(android.app.Activity r10, android.content.Intent r11) {
            java.lang.String r0 = "ws001"
            r10.finish()
            com.qihoo360.loader2.PluginIntent r1 = new com.qihoo360.loader2.PluginIntent     // Catch: java.lang.Throwable -> Lde
            r1.<init>(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r5 = r1.getOriginal()     // Catch: java.lang.Throwable -> Lde
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L29
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "f.a f: orig=nul i="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        L29:
            java.lang.String r6 = r1.getContainer()     // Catch: java.lang.Throwable -> Lde
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L48
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "f.a f: c=nul i="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        L48:
            java.lang.String r7 = r1.getPlugin()     // Catch: java.lang.Throwable -> Lde
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L67
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "f.a f: n=nul i="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        L67:
            java.lang.String r8 = r1.getActivity()     // Catch: java.lang.Throwable -> Lde
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L86
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "f.a f: t=nul i="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        L86:
            int r9 = r1.getProcess()     // Catch: java.lang.Throwable -> Lde
            boolean r2 = com.qihoo360.loader2.PluginManager.isValidActivityProcess(r9)     // Catch: java.lang.Throwable -> Lde
            if (r2 != 0) goto Lad
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "f.a f: p="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r9)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = " i="
            r10.append(r1)     // Catch: java.lang.Throwable -> Lde
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        Lad:
            int r2 = r1.getCounter()     // Catch: java.lang.Throwable -> Lde
            if (r2 < 0) goto Lc9
            r3 = 10
            if (r2 < r3) goto Lb8
            goto Lc9
        Lb8:
            int r2 = r2 + 1
            r1.setCounter(r2)     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.loader2.PmBase r1 = com.qihoo360.loader2.PMF.sPluginMgr     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.loader2.PluginProcessPer r1 = r1.mClient     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.loader2.PluginContainers r2 = r1.mACM     // Catch: java.lang.Throwable -> Lde
            r3 = r10
            r4 = r11
            r2.forwardIntent(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lde
            goto Lf7
        Lc9:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r10.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r11 = "f.a f: ooc c="
            r10.append(r11)     // Catch: java.lang.Throwable -> Lde
            r10.append(r2)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lde
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)     // Catch: java.lang.Throwable -> Lde
            return
        Lde:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "f.a f: "
            r11.append(r1)
            java.lang.String r1 = r10.getMessage()
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r11, r10)
        Lf7:
            return
    }

    public static final android.content.Context getApplicationContext() {
            android.content.Context r0 = com.qihoo360.loader2.PMF.sContext
            return r0
    }

    public static final com.qihoo360.loader2.PluginLibraryInternalProxy getInternal() {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = r0.mInternal
            return r0
    }

    public static final com.qihoo360.loader2.PluginCommImpl getLocal() {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            com.qihoo360.loader2.PluginCommImpl r0 = r0.mLocal
            return r0
    }

    public static final void init(android.app.Application r1) {
            setApplicationContext(r1)
            com.qihoo360.loader2.PluginManager.init(r1)
            com.qihoo360.loader2.PmBase r0 = new com.qihoo360.loader2.PmBase
            r0.<init>(r1)
            com.qihoo360.loader2.PMF.sPluginMgr = r0
            r0.init()
            com.qihoo360.loader2.PluginCommImpl r0 = getLocal()
            com.qihoo360.i.Factory.sPluginManager = r0
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = getInternal()
            com.qihoo360.i.Factory2.sPLProxy = r0
            com.qihoo360.loader.utils.PatchClassLoaderUtils.patch(r1)
            return
    }

    public static final java.lang.Class<?> loadClass(java.lang.String r1, boolean r2) {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            java.lang.Class r1 = r0.loadClass(r1, r2)
            return r1
    }

    private static final void setApplicationContext(android.content.Context r0) {
            com.qihoo360.loader2.PMF.sContext = r0
            return
    }

    public static void stopService(android.content.Intent r2) throws android.os.RemoteException {
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            com.qihoo360.loader2.PluginProcessPer r0 = r0.mClient
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r0.fetchServiceServer()
            r1 = 0
            r0.stopService(r2, r1)
            return
    }
}
