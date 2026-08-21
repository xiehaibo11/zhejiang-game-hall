package com.qihoo360.replugin.component.service;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceClient {
    static final int PROCESS_UNKNOWN = Integer.MAX_VALUE;
    private static final java.lang.String TAG = "PluginServiceClient";
    private static android.os.Handler sClientHandler;
    private static android.os.Messenger sClientMessenger;
    private static com.qihoo360.replugin.component.service.PluginServiceDispatcherManager sDispatcherManager;
    private static com.qihoo360.replugin.component.service.PluginServiceServerFetcher sServerFetcher;

    static {
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher r0 = new com.qihoo360.replugin.component.service.PluginServiceServerFetcher
            r0.<init>()
            com.qihoo360.replugin.component.service.PluginServiceClient.sServerFetcher = r0
            com.qihoo360.replugin.component.service.PluginServiceDispatcherManager r0 = new com.qihoo360.replugin.component.service.PluginServiceDispatcherManager
            r0.<init>()
            com.qihoo360.replugin.component.service.PluginServiceClient.sDispatcherManager = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.qihoo360.replugin.component.service.PluginServiceClient.sClientHandler = r0
            android.os.Messenger r0 = new android.os.Messenger
            android.os.Handler r1 = com.qihoo360.replugin.component.service.PluginServiceClient.sClientHandler
            r0.<init>(r1)
            com.qihoo360.replugin.component.service.PluginServiceClient.sClientMessenger = r0
            return
    }

    public PluginServiceClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean bindService(android.content.Context r1, android.content.Intent r2, android.content.ServiceConnection r3, int r4) {
            r0 = 0
            boolean r1 = bindService(r1, r2, r3, r4, r0)
            return r1
    }

    public static boolean bindService(android.content.Context r8, android.content.Intent r9, android.content.ServiceConnection r10, int r11, boolean r12) {
            android.content.ComponentName r0 = r9.getComponent()
            android.content.ComponentName r0 = com.qihoo360.replugin.component.utils.PluginClientHelper.getComponentNameByContext(r8, r0)
            int r6 = getProcessByComponentName(r0)
            java.lang.String r7 = "ws001"
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r6 != r1) goto L38
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PSS.bindService(): Call SystemAPI: in="
            r0.append(r1)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r7, r0)
        L2b:
            if (r12 != 0) goto L32
            boolean r8 = r8.bindService(r9, r10, r11)
            return r8
        L32:
            com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem r8 = new com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem
            r8.<init>()
            throw r8
        L38:
            r9.setComponent(r0)
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher r12 = com.qihoo360.replugin.component.service.PluginServiceClient.sServerFetcher
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r12 = r12.fetchByProcess(r6)
            r0 = 0
            if (r12 != 0) goto L4a
            java.lang.String r8 = "psc.bs: pss n"
            com.qihoo360.replugin.helper.LogRelease.e(r7, r8)
            return r0
        L4a:
            com.qihoo360.replugin.component.service.PluginServiceDispatcherManager r1 = com.qihoo360.replugin.component.service.PluginServiceClient.sDispatcherManager     // Catch: java.lang.Throwable -> L63
            android.os.Handler r4 = com.qihoo360.replugin.component.service.PluginServiceClient.sClientHandler     // Catch: java.lang.Throwable -> L63
            r2 = r10
            r3 = r8
            r5 = r11
            com.qihoo360.replugin.component.service.ServiceDispatcher r8 = r1.get(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L63
            com.qihoo360.loader2.mgr.IServiceConnection r8 = r8.getIServiceConnection()     // Catch: java.lang.Throwable -> L63
            android.os.Messenger r10 = com.qihoo360.replugin.component.service.PluginServiceClient.sClientMessenger     // Catch: java.lang.Throwable -> L63
            int r8 = r12.bindService(r9, r8, r11, r10)     // Catch: java.lang.Throwable -> L63
            if (r8 == 0) goto L62
            r0 = 1
        L62:
            return r0
        L63:
            r8 = move-exception
            java.lang.String r9 = "psc.bs: pss e"
            com.qihoo360.replugin.helper.LogRelease.e(r7, r9, r8)
            return r0
    }

    private static int getProcessByComponentName(android.content.ComponentName r4) {
            r0 = 2147483647(0x7fffffff, float:NaN)
            if (r4 != 0) goto L6
            return r0
        L6:
            java.lang.String r1 = r4.getPackageName()
            com.qihoo360.replugin.component.ComponentList r2 = com.qihoo360.i.Factory.queryPluginComponentList(r1)
            java.lang.String r3 = "PluginServiceClient"
            if (r2 != 0) goto L2b
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L2a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "getProcessByComponentName(): Fetch Component List Error! pn="
            r4.append(r2)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r3, r4)
        L2a:
            return r0
        L2b:
            java.lang.String r4 = r4.getClassName()
            android.content.pm.ServiceInfo r4 = r2.getService(r4)
            if (r4 != 0) goto L4e
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "getProcessByComponentName(): Not register! pn="
            r4.append(r2)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r3, r4)
        L4d:
            return r0
        L4e:
            java.lang.String r4 = r4.processName
            java.lang.Integer r4 = com.qihoo360.replugin.component.utils.PluginClientHelper.getProcessInt(r4)
            int r4 = r4.intValue()
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L78
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getProcessByComponentName(): Okay! Process="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "; pn="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r3, r0)
        L78:
            return r4
    }

    private static android.content.ComponentName getServiceComponentFromIntent(android.content.Context r2, android.content.Intent r3) {
            java.lang.ClassLoader r0 = r2.getClassLoader()
            java.lang.String r0 = com.qihoo360.i.Factory.fetchPluginName(r0)
            android.content.ComponentName r1 = r3.getComponent()
            if (r1 == 0) goto L17
            android.content.ComponentName r3 = r3.getComponent()
            android.content.ComponentName r2 = com.qihoo360.replugin.component.utils.PluginClientHelper.getComponentNameByContext(r2, r3)
            return r2
        L17:
            java.lang.String r1 = r3.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3d
            com.qihoo360.replugin.component.ComponentList r0 = com.qihoo360.i.Factory.queryPluginComponentList(r0)
            if (r0 == 0) goto L48
            android.util.Pair r2 = r0.getServiceAndPluginByIntent(r2, r3)
            if (r2 == 0) goto L48
            android.content.ComponentName r3 = new android.content.ComponentName
            java.lang.Object r0 = r2.second
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r2 = r2.first
            android.content.pm.ServiceInfo r2 = (android.content.pm.ServiceInfo) r2
            java.lang.String r2 = r2.name
            r3.<init>(r0, r2)
            return r3
        L3d:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L48
            java.lang.String r2 = "ws001"
            java.lang.String r3 = "PSS.startService(): No Component and no Action"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L48:
            r2 = 0
            return r2
    }

    public static android.content.ComponentName startService(android.content.Context r1, android.content.Intent r2) {
            r0 = 0
            android.content.ComponentName r1 = startService(r1, r2, r0)
            return r1
    }

    public static android.content.ComponentName startService(android.content.Context r4, android.content.Intent r5, boolean r6) {
            android.content.ComponentName r0 = getServiceComponentFromIntent(r4, r5)
            int r1 = getProcessByComponentName(r0)
            java.lang.String r2 = "ws001"
            r3 = 2147483647(0x7fffffff, float:NaN)
            if (r1 != r3) goto L34
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PSS.startService(): Call SystemAPI: in="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L27:
            if (r6 != 0) goto L2e
            android.content.ComponentName r4 = r4.startService(r5)
            return r4
        L2e:
            com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem r4 = new com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem
            r4.<init>()
            throw r4
        L34:
            r5.setComponent(r0)
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher r4 = com.qihoo360.replugin.component.service.PluginServiceClient.sServerFetcher
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r4 = r4.fetchByProcess(r1)
            r6 = 0
            if (r4 != 0) goto L46
            java.lang.String r4 = "psc.ss: pss n"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r4)
            return r6
        L46:
            android.os.Messenger r0 = com.qihoo360.replugin.component.service.PluginServiceClient.sClientMessenger     // Catch: java.lang.Throwable -> L4d
            android.content.ComponentName r4 = r4.startService(r5, r0)     // Catch: java.lang.Throwable -> L4d
            return r4
        L4d:
            r4 = move-exception
            java.lang.String r5 = "psc.ss: pss e"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r5, r4)
            return r6
    }

    public static void stopSelf(android.app.Service r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r2, r1)
            com.qihoo360.loader2.PMF.stopService(r0)     // Catch: java.lang.Throwable -> Ld
            goto L15
        Ld:
            r2 = move-exception
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "pss.ss: pf f"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r1, r2)
        L15:
            return
    }

    public static boolean stopService(android.content.Context r1, android.content.Intent r2) {
            r0 = 0
            boolean r1 = stopService(r1, r2, r0)
            return r1
    }

    public static boolean stopService(android.content.Context r4, android.content.Intent r5, boolean r6) {
            android.content.ComponentName r0 = r5.getComponent()
            android.content.ComponentName r0 = com.qihoo360.replugin.component.utils.PluginClientHelper.getComponentNameByContext(r4, r0)
            int r1 = getProcessByComponentName(r0)
            java.lang.String r2 = "ws001"
            r3 = 2147483647(0x7fffffff, float:NaN)
            if (r1 != r3) goto L38
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PSS.stopService(): Call SystemAPI: in="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L2b:
            if (r6 != 0) goto L32
            boolean r4 = r4.stopService(r5)
            return r4
        L32:
            com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem r4 = new com.qihoo360.replugin.component.utils.PluginClientHelper$ShouldCallSystem
            r4.<init>()
            throw r4
        L38:
            r5.setComponent(r0)
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher r4 = com.qihoo360.replugin.component.service.PluginServiceClient.sServerFetcher
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r4 = r4.fetchByProcess(r1)
            r6 = 0
            if (r4 != 0) goto L4a
            java.lang.String r4 = "psc.sts: pss n"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r4)
            return r6
        L4a:
            android.os.Messenger r0 = com.qihoo360.replugin.component.service.PluginServiceClient.sClientMessenger     // Catch: java.lang.Throwable -> L54
            int r4 = r4.stopService(r5, r0)     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L53
            r6 = 1
        L53:
            return r6
        L54:
            r4 = move-exception
            java.lang.String r5 = "psc.sts: pss e"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r5, r4)
            return r6
    }

    public static boolean unbindService(android.content.Context r1, android.content.ServiceConnection r2) {
            r0 = 1
            boolean r1 = unbindService(r1, r2, r0)
            return r1
    }

    public static boolean unbindService(android.content.Context r2, android.content.ServiceConnection r3, boolean r4) {
            java.lang.String r0 = "ws001"
            if (r4 == 0) goto L1f
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L1f
            if (r4 == 0) goto L1c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f
            r4.<init>()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "PSS.unbindService(): First, We call SystemAPI: sc="
            r4.append(r1)     // Catch: java.lang.Throwable -> L1f
            r4.append(r3)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)     // Catch: java.lang.Throwable -> L1f
        L1c:
            r2.unbindService(r3)     // Catch: java.lang.Throwable -> L1f
        L1f:
            com.qihoo360.replugin.component.service.PluginServiceDispatcherManager r4 = com.qihoo360.replugin.component.service.PluginServiceClient.sDispatcherManager
            com.qihoo360.replugin.component.service.ServiceDispatcher r2 = r4.forget(r2, r3)
            r3 = 0
            if (r2 != 0) goto L2e
            java.lang.String r2 = "psc.us: sd n"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r2)
            return r3
        L2e:
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher r4 = com.qihoo360.replugin.component.service.PluginServiceClient.sServerFetcher
            int r1 = r2.getProcess()
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r4 = r4.fetchByProcess(r1)
            if (r4 != 0) goto L40
            java.lang.String r2 = "psc.us: pss n"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r2)
            return r3
        L40:
            com.qihoo360.loader2.mgr.IServiceConnection r2 = r2.getIServiceConnection()     // Catch: java.lang.Throwable -> L49
            boolean r2 = r4.unbindService(r2)     // Catch: java.lang.Throwable -> L49
            return r2
        L49:
            r2 = move-exception
            java.lang.String r4 = "psc.us: pss e"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r4, r2)
            return r3
    }
}
