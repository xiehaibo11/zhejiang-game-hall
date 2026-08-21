package com.qihoo360.replugin.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class IPC {
    private static final java.lang.String TAG = "IPC";
    private static int sCurrentPid;
    private static java.lang.String sCurrentProcess;
    private static boolean sIsPersistentProcess;
    private static boolean sIsUIProcess;
    private static java.lang.String sPackageName;
    private static java.lang.String sPersistentProcessName;

    public IPC() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getCurrentProcessId() {
            int r0 = com.qihoo360.replugin.base.IPC.sCurrentPid
            return r0
    }

    public static java.lang.String getCurrentProcessName() {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sCurrentProcess
            return r0
    }

    public static java.lang.String getPackageName() {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sPackageName
            return r0
    }

    public static java.lang.String getPersistentProcessName() {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sPersistentProcessName
            return r0
    }

    public static int getPidByProcessName(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = getCurrentProcessName()
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 == 0) goto L17
            int r2 = getCurrentProcessId()
            return r2
        L17:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L20
            int r2 = r0.getPidByProcessName(r2)     // Catch: android.os.RemoteException -> L20
            return r2
        L20:
            r2 = move-exception
            r2.printStackTrace()
            return r1
    }

    public static java.lang.String getPluginHostProcessName() {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sPersistentProcessName
            return r0
    }

    public static java.lang.String getProcessNameByPid(int r2) {
            r0 = 0
            if (r2 >= 0) goto L4
            return r0
        L4:
            int r1 = getCurrentProcessId()
            if (r2 != r1) goto Lf
            java.lang.String r2 = getCurrentProcessName()
            return r2
        Lf:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L18
            java.lang.String r2 = r1.getProcessNameByPid(r2)     // Catch: android.os.RemoteException -> L18
            return r2
        L18:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static void init(android.content.Context r2) {
            java.lang.String r0 = com.qihoo360.loader.utils.SysUtils.getCurrentProcessName()
            com.qihoo360.replugin.base.IPC.sCurrentProcess = r0
            int r0 = android.os.Process.myPid()
            com.qihoo360.replugin.base.IPC.sCurrentPid = r0
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.packageName
            com.qihoo360.replugin.base.IPC.sPackageName = r2
            boolean r2 = com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_ENABLE
            if (r2 == 0) goto L3f
            java.lang.String r2 = com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_NAME
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L43
            java.lang.String r0 = ":"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.sPackageName
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.qihoo360.replugin.base.IPC.sPersistentProcessName = r2
            goto L43
        L3c:
            com.qihoo360.replugin.base.IPC.sPersistentProcessName = r2
            goto L43
        L3f:
            java.lang.String r2 = com.qihoo360.replugin.base.IPC.sPackageName
            com.qihoo360.replugin.base.IPC.sPersistentProcessName = r2
        L43:
            java.lang.String r2 = com.qihoo360.replugin.base.IPC.sCurrentProcess
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sPackageName
            boolean r2 = r2.equals(r0)
            com.qihoo360.replugin.base.IPC.sIsUIProcess = r2
            java.lang.String r2 = com.qihoo360.replugin.base.IPC.sCurrentProcess
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.sPersistentProcessName
            boolean r2 = r2.equals(r0)
            com.qihoo360.replugin.base.IPC.sIsPersistentProcess = r2
            return
    }

    public static boolean isPersistentEnable() {
            boolean r0 = com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_ENABLE
            return r0
    }

    public static boolean isPersistentProcess() {
            boolean r0 = com.qihoo360.replugin.base.IPC.sIsPersistentProcess
            return r0
    }

    public static boolean isPluginHostProcess() {
            java.lang.String r0 = getCurrentProcessName()
            java.lang.String r1 = getPluginHostProcessName()
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            return r0
    }

    public static boolean isUIProcess() {
            boolean r0 = com.qihoo360.replugin.base.IPC.sIsUIProcess
            return r0
    }

    public static boolean sendLocalBroadcast2All(android.content.Context r1, android.content.Intent r2) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2All: intent="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L1a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L24
            r0 = 0
            r1.sendIntent2Process(r0, r2)     // Catch: android.os.RemoteException -> L24
            r1 = 1
            return r1
        L24:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static boolean sendLocalBroadcast2AllSync(android.content.Context r1, android.content.Intent r2) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2AllSync: intent="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L1a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L24
            r0 = 0
            r1.sendIntent2ProcessSync(r0, r2)     // Catch: android.os.RemoteException -> L24
            r1 = 1
            return r1
        L24:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static boolean sendLocalBroadcast2Plugin(android.content.Context r1, java.lang.String r2, android.content.Intent r3) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2Plugin: target="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = " intent="
            r1.append(r0)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L22:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            r0 = 0
            if (r1 == 0) goto L2a
            return r0
        L2a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L33
            r1.sendIntent2Plugin(r2, r3)     // Catch: android.os.RemoteException -> L33
            r1 = 1
            return r1
        L33:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean sendLocalBroadcast2PluginSync(android.content.Context r1, java.lang.String r2, android.content.Intent r3) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2PluginSync: target="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = " intent="
            r1.append(r0)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L22:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            r0 = 0
            if (r1 == 0) goto L2a
            return r0
        L2a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L33
            r1.sendIntent2PluginSync(r2, r3)     // Catch: android.os.RemoteException -> L33
            r1 = 1
            return r1
        L33:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean sendLocalBroadcast2Process(android.content.Context r1, java.lang.String r2, android.content.Intent r3) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2Process: target="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = " intent="
            r1.append(r0)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L22:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            r0 = 0
            if (r1 == 0) goto L2a
            return r0
        L2a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L33
            r1.sendIntent2Process(r2, r3)     // Catch: android.os.RemoteException -> L33
            r1 = 1
            return r1
        L33:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean sendLocalBroadcast2ProcessSync(android.content.Context r1, java.lang.String r2, android.content.Intent r3) {
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "sendLocalBroadcast2ProcessSync: target="
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = " intent="
            r1.append(r0)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "IPC"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L22:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            r0 = 0
            if (r1 == 0) goto L2a
            return r0
        L2a:
            com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: android.os.RemoteException -> L33
            r1.sendIntent2ProcessSync(r2, r3)     // Catch: android.os.RemoteException -> L33
            r1 = 1
            return r1
        L33:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
