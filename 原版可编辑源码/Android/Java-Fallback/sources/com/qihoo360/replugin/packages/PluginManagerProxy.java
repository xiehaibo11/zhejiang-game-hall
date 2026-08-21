package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginManagerProxy {
    private static final java.lang.String TAG = "PluginManagerClient";
    private static com.qihoo360.replugin.packages.IPluginManagerServer sRemote;
    private static com.qihoo360.replugin.packages.PluginRunningList sRunningList;
    private static boolean sRunningSynced;

    static {
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            r0.<init>()
            com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList = r0
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            int r2 = com.qihoo360.replugin.base.IPC.getCurrentProcessId()
            r0.setProcessInfo(r1, r2)
            return
    }

    public PluginManagerProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addToRunningPluginsNoThrows(java.lang.String r3) {
            com.qihoo360.replugin.packages.PluginRunningList r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            r0.add(r3)
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 == 0) goto L19
            com.qihoo360.replugin.packages.PluginRunningList r1 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList     // Catch: android.os.RemoteException -> L15
            java.lang.String r1 = r1.mProcessName     // Catch: android.os.RemoteException -> L15
            com.qihoo360.replugin.packages.PluginRunningList r2 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList     // Catch: android.os.RemoteException -> L15
            int r2 = r2.mPid     // Catch: android.os.RemoteException -> L15
            r0.addToRunningPlugins(r1, r2, r3)     // Catch: android.os.RemoteException -> L15
            goto L19
        L15:
            r3 = move-exception
            r3.printStackTrace()
        L19:
            return
    }

    public static void connectToServer(com.qihoo360.loader2.IPluginHost r1) throws android.os.RemoteException {
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 == 0) goto L21
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "connectToServer: Already connected! host="
            r1.append(r0)
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "PluginManagerClient"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r1)
        L20:
            return
        L21:
            com.qihoo360.replugin.packages.IPluginManagerServer r1 = r1.fetchManagerServer()
            com.qihoo360.replugin.packages.PluginManagerProxy.sRemote = r1
            return
    }

    public static void disconnect() {
            r0 = 0
            com.qihoo360.replugin.packages.PluginManagerProxy.sRemote = r0
            r0 = 0
            com.qihoo360.replugin.packages.PluginManagerProxy.sRunningSynced = r0
            return
    }

    public static com.qihoo360.replugin.packages.PluginRunningList getRunningPluginsNoThrows() {
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 == 0) goto L14
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList     // Catch: android.os.RemoteException -> L10
            com.qihoo360.replugin.packages.IPluginManagerServer r1 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote     // Catch: android.os.RemoteException -> L10
            com.qihoo360.replugin.packages.PluginRunningList r1 = r1.getRunningPlugins()     // Catch: android.os.RemoteException -> L10
            r0.<init>(r1)     // Catch: android.os.RemoteException -> L10
            goto L15
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            r0 = 0
        L15:
            if (r0 != 0) goto L1e
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            com.qihoo360.replugin.packages.PluginRunningList r1 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            r0.<init>(r1)
        L1e:
            return r0
    }

    public static java.lang.String[] getRunningProcessesByPluginNoThrows(java.lang.String r2) {
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 == 0) goto Ld
            java.lang.String[] r2 = r0.getRunningProcessesByPlugin(r2)     // Catch: android.os.RemoteException -> L9
            return r2
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            com.qihoo360.replugin.packages.PluginRunningList r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            boolean r2 = r0.isRunning(r2)
            r0 = 0
            if (r2 == 0) goto L20
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            com.qihoo360.replugin.packages.PluginRunningList r1 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            java.lang.String r1 = r1.mProcessName
            r2[r0] = r1
            goto L22
        L20:
            java.lang.String[] r2 = new java.lang.String[r0]
        L22:
            return r2
    }

    public static boolean isPluginRunning(java.lang.String r2) throws android.os.RemoteException {
            com.qihoo360.replugin.packages.PluginRunningList r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            boolean r0 = r0.isRunning(r2)
            if (r0 == 0) goto La
            r2 = 1
            return r2
        La:
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 != 0) goto L17
            java.lang.String r2 = "ws001"
            java.lang.String r0 = "pmp.ipr: s=null"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r0)
            r2 = 0
            return r2
        L17:
            r1 = 0
            boolean r2 = r0.isPluginRunning(r2, r1)
            return r2
    }

    public static boolean isPluginRunningInProcess(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 == 0) goto L11
            com.qihoo360.replugin.packages.PluginRunningList r2 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            boolean r1 = r2.isRunning(r1)
            return r1
        L11:
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r0 != 0) goto L1e
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "pmp.iprip: s=null"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2)
            r1 = 0
            return r1
        L1e:
            boolean r1 = r0.isPluginRunning(r1, r2)
            return r1
    }

    public static java.util.List<com.qihoo360.replugin.model.PluginInfo> load() throws android.os.RemoteException {
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            java.util.List r0 = r0.load()
            return r0
    }

    public static void syncRunningPlugins() throws android.os.RemoteException {
            boolean r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningSynced
            if (r0 == 0) goto L5
            return
        L5:
            com.qihoo360.replugin.packages.PluginRunningList r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            boolean r0 = r0.hasRunning()
            if (r0 != 0) goto Le
            return
        Le:
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            com.qihoo360.replugin.packages.PluginRunningList r1 = com.qihoo360.replugin.packages.PluginManagerProxy.sRunningList
            r0.syncRunningPlugins(r1)
            r0 = 1
            com.qihoo360.replugin.packages.PluginManagerProxy.sRunningSynced = r0
            return
    }

    public static java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAllPlugins() throws android.os.RemoteException {
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            java.util.List r0 = r0.load()
            return r0
    }

    public static void updateUsedIfNeeded(java.lang.String r2, boolean r3) throws android.os.RemoteException {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.loader2.MP.getPlugin(r2, r0)
            if (r0 != 0) goto L8
            return
        L8:
            boolean r1 = r0.isUsed()
            if (r1 != r3) goto L31
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updateUsedIfNeeded: pi.isUsed == used, ignore. used="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "; pn="
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "PluginManagerClient"
            com.qihoo360.replugin.helper.LogDebug.i(r3, r2)
        L30:
            return
        L31:
            boolean r2 = r0.isPnPlugin()
            if (r2 == 0) goto L38
            return
        L38:
            com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.PluginManagerProxy.sRemote
            if (r2 != 0) goto L44
            java.lang.String r2 = "ws001"
            java.lang.String r3 = "pmc.uuin: s=null"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3)
            return
        L44:
            java.lang.String r0 = r0.getName()
            r2.updateUsed(r0, r3)
            return
    }
}
