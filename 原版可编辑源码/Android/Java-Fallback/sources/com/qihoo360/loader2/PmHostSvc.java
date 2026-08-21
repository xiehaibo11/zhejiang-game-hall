package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PmHostSvc extends com.qihoo360.loader2.IPluginHost.Stub {
    private static final int GROUP_COUNT = 0;
    private static java.util.Map<java.lang.String, java.lang.Integer> mPluginGroupMap;
    private final java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> mActionPluginComponents;
    android.content.Context mContext;
    com.qihoo360.replugin.packages.PluginManagerServer mManager;
    private boolean mNeedRestart;
    com.qihoo360.loader2.PmBase mPluginMgr;
    com.qihoo360.replugin.component.receiver.PluginReceiverProxy mReceiverProxy;
    private java.util.HashMap<java.lang.String, android.content.BroadcastReceiver> mReceivers;
    com.qihoo360.replugin.component.service.server.PluginServiceServer mServiceMgr;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class BinderDied implements android.os.IBinder.DeathRecipient {
        android.os.IBinder binder;
        java.lang.String name;

        BinderDied(java.lang.String r1, android.os.IBinder r2) {
                r0 = this;
                r0.<init>()
                r0.name = r1
                r0.binder = r2
                return
        }

        @Override
        public void binderDied() {
                r3 = this;
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L26
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "binder died: n="
                r0.append(r1)
                java.lang.String r1 = r3.name
                r0.append(r1)
                java.lang.String r1 = " b="
                r0.append(r1)
                android.os.IBinder r1 = r3.binder
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "ws001"
                com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            L26:
                java.util.HashMap<java.lang.String, android.os.IBinder> r0 = com.qihoo360.loader2.PluginProcessMain.sBinders
                monitor-enter(r0)
                java.util.HashMap<java.lang.String, android.os.IBinder> r1 = com.qihoo360.loader2.PluginProcessMain.sBinders     // Catch: java.lang.Throwable -> L32
                java.lang.String r2 = r3.name     // Catch: java.lang.Throwable -> L32
                r1.remove(r2)     // Catch: java.lang.Throwable -> L32
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                return
            L32:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                throw r1
        }
    }

    static {
            int r0 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TASK
            com.qihoo360.loader2.PmHostSvc.GROUP_COUNT = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.PmHostSvc.mPluginGroupMap = r0
            return
    }

    PmHostSvc(android.content.Context r2, com.qihoo360.loader2.PmBase r3) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mReceivers = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mActionPluginComponents = r0
            r1.mContext = r2
            r1.mPluginMgr = r3
            com.qihoo360.replugin.component.service.server.PluginServiceServer r3 = new com.qihoo360.replugin.component.service.server.PluginServiceServer
            r3.<init>(r2)
            r1.mServiceMgr = r3
            com.qihoo360.replugin.packages.PluginManagerServer r3 = new com.qihoo360.replugin.packages.PluginManagerServer
            r3.<init>(r2)
            r1.mManager = r3
            return
    }

    private int getValidGroup() {
            r3 = this;
            r0 = 0
        L1:
            int r1 = com.qihoo360.loader2.PmHostSvc.GROUP_COUNT
            if (r0 >= r1) goto L15
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.qihoo360.loader2.PmHostSvc.mPluginGroupMap
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            boolean r1 = r1.containsValue(r2)
            if (r1 != 0) goto L12
            return r0
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r0 = -1
            return r0
    }

    private com.qihoo360.replugin.model.PluginInfo pluginDownloadedForPn(java.lang.String r8) {
            r7 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r8)
            r1 = 1
            com.qihoo360.loader2.V5FileInfo r2 = com.qihoo360.loader2.V5FileInfo.build(r0, r1)
            java.lang.String r3 = "ws001"
            r4 = 0
            if (r2 != 0) goto L3c
            r2 = 3
            com.qihoo360.loader2.V5FileInfo r2 = com.qihoo360.loader2.V5FileInfo.build(r0, r2)
            if (r2 != 0) goto L3c
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pluginDownloaded: unknown v5 plugin file: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)
        L2e:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r0.getEventCallbacks()
            com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_BUILD_FAIL
            r0.onInstallPluginFailed(r8, r1)
            return r4
        L3c:
            android.content.Context r0 = r7.mContext
            r5 = 0
            java.lang.String r6 = "plugins_v3"
            java.io.File r0 = r0.getDir(r6, r5)
            android.content.Context r6 = r7.mContext
            com.qihoo360.replugin.model.PluginInfo r0 = r2.updateV5FileTo(r6, r0, r5, r1)
            if (r0 != 0) goto L73
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L65
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pluginDownloaded: failed to update v5 plugin: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)
        L65:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r0.getEventCallbacks()
            com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_UPDATE_FAIL
            r0.onInstallPluginFailed(r8, r1)
            return r4
        L73:
            return r0
    }

    private void saveAction(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r0 = r2.mActionPluginComponents
            java.lang.Object r0 = r0.get(r3)
            java.util.HashMap r0 = (java.util.HashMap) r0
            if (r0 != 0) goto L14
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r1 = r2.mActionPluginComponents
            r1.put(r3, r0)
        L14:
            java.lang.Object r1 = r0.get(r4)
            java.util.List r1 = (java.util.List) r1
            if (r1 != 0) goto L24
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.put(r4, r1)
        L24:
            boolean r0 = r1.contains(r5)
            if (r0 != 0) goto L48
            r1.add(r5)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L48
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            r3 = 2
            r0[r3] = r5
            java.lang.String r3 = "保存 Receiver (%s, %s, %s)"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.String r4 = "ms-receiver"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L48:
            return
    }

    private void sendIntent2Plugin(java.lang.String r3, android.content.Intent r4, boolean r5) throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendIntent2Plugin target="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " intent="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            java.lang.String r0 = "ui"
            boolean r1 = android.text.TextUtils.equals(r3, r0)
            if (r1 != 0) goto L2d
            com.qihoo360.loader2.PluginProcessMain.sendIntent2Plugin(r3, r4, r5)
        L2d:
            com.qihoo360.loader2.PluginProcessMain.sendIntent2Plugin(r0, r4, r5)
            return
    }

    private void sendIntent2PluginHostProcess(android.content.Intent r2, boolean r3) {
            r1 = this;
            java.lang.Class r0 = r1.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r2.setExtrasClassLoader(r0)
            if (r3 == 0) goto L13
            android.content.Context r3 = r1.mContext
            com.qihoo360.replugin.base.LocalBroadcastHelper.sendBroadcastSyncUi(r3, r2)
            goto L1c
        L13:
            android.content.Context r3 = r1.mContext
            com.qihoo360.replugin.compat.LocalBroadcastManager r3 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r3)
            r3.sendBroadcast(r2)
        L1c:
            return
    }

    private void sendIntent2Process(java.lang.String r3, android.content.Intent r4, boolean r5) throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendIntent2Process target="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " intent="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getPluginHostProcessName()
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L30
            r2.sendIntent2PluginHostProcess(r4, r5)
            return
        L30:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L39
            r2.sendIntent2PluginHostProcess(r4, r5)
        L39:
            com.qihoo360.loader2.PluginProcessMain.sendIntent2Process(r3, r4, r5)
            return
    }

    private void syncInstalledPluginInfo2All(com.qihoo360.replugin.model.PluginInfo r4) {
            r3 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r4.getParentInfo()
            if (r0 == 0) goto L7
            r4 = r0
        L7:
            com.qihoo360.loader2.PmBase r0 = r3.mPluginMgr
            r1 = 0
            r0.newPluginFound(r4, r1)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "ACTION_NEW_PLUGIN"
            r0.<init>(r1)
            boolean r1 = r3.mNeedRestart
            java.lang.String r2 = "persist_need_restart"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "obj"
            r0.putExtra(r1, r4)
            android.content.Context r1 = r3.mContext
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2AllSync(r1, r0)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "syncInstalledPluginInfo2All: Sync complete! syncPi="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "task-affinity"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L3f:
            return
    }

    private void syncUninstalledPluginInfo2All(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            r0.pluginUninstalled(r3)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "ACTION_UNINSTALL_PLUGIN"
            r0.<init>(r1)
            java.lang.String r1 = "obj"
            r0.putExtra(r1, r3)
            android.content.Context r3 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            android.content.Context r3 = r3.getApplicationContext()
            if (r3 == 0) goto L23
            android.content.Context r3 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2AllSync(r3, r0)
            goto L2b
        L23:
            com.qihoo360.loader2.PmHostSvc$1 r3 = new com.qihoo360.loader2.PmHostSvc$1
            r3.<init>(r2, r0)
            com.qihoo360.mobilesafe.api.Tasks.post2UI(r3)
        L2b:
            return
    }

    @Override
    public java.lang.String attachPluginProcess(java.lang.String r8, int r9, android.os.IBinder r10, java.lang.String r11) throws android.os.RemoteException {
            r7 = this;
            int r0 = android.os.Binder.getCallingPid()
            r1 = 0
            com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.asInterface(r10)     // Catch: java.lang.Throwable -> Lb
            r4 = r2
            goto L27
        Lb:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "a.p.p pc.s.ai: "
            r3.append(r4)
            java.lang.String r4 = r2.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3, r2)
            r4 = r1
        L27:
            if (r4 != 0) goto L2a
            return r1
        L2a:
            com.qihoo360.replugin.packages.PluginManagerServer r6 = r7.mManager
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            java.lang.String r8 = com.qihoo360.loader2.PluginProcessMain.attachProcess(r0, r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public java.lang.String dump() {
            r1 = this;
            java.lang.String r0 = com.qihoo360.loader2.PluginProcessMain.dump()
            return r0
    }

    @Override
    public android.os.IBinder fetchBinder(java.lang.String r4) throws android.os.RemoteException {
            r3 = this;
            java.util.HashMap<java.lang.String, android.os.IBinder> r0 = com.qihoo360.loader2.PluginProcessMain.sBinders
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, android.os.IBinder> r1 = com.qihoo360.loader2.PluginProcessMain.sBinders     // Catch: java.lang.Throwable -> L32
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L32
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "fetch binder: n="
            r0.append(r2)
            r0.append(r4)
            r0.append(r4)
            java.lang.String r4 = " b="
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L31:
            return r1
        L32:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r4
    }

    @Override
    public com.qihoo360.replugin.packages.IPluginManagerServer fetchManagerServer() throws android.os.RemoteException {
            r1 = this;
            com.qihoo360.replugin.packages.PluginManagerServer r0 = r1.mManager
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = r0.getService()
            return r0
    }

    @Override
    public long fetchPersistentCookie() throws android.os.RemoteException {
            r2 = this;
            long r0 = com.qihoo360.loader2.PluginProcessMain.getPersistentCookie()
            return r0
    }

    @Override
    public com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException {
            r1 = this;
            com.qihoo360.replugin.component.service.server.PluginServiceServer r0 = r1.mServiceMgr
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r0.getService()
            return r0
    }

    @Override
    public int getPidByProcessName(java.lang.String r1) throws android.os.RemoteException {
            r0 = this;
            int r1 = com.qihoo360.loader2.PluginProcessMain.getPidByProcessName(r1)
            return r1
    }

    @Override
    public java.lang.String getProcessNameByPid(int r1) throws android.os.RemoteException {
            r0 = this;
            java.lang.String r1 = com.qihoo360.loader2.PluginProcessMain.getProcessNameByPid(r1)
            return r1
    }

    @Override
    public int getTaskAffinityGroupIndex(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.qihoo360.loader2.PmHostSvc.mPluginGroupMap
            boolean r0 = r0.containsKey(r4)
            if (r0 != 0) goto L25
            int r0 = r3.getValidGroup()
            r1 = -1
            if (r0 != r1) goto L1b
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L1a
            java.lang.String r4 = "task-affinity"
            java.lang.String r0 = "Get groupID fail, not enough TaskAffinity group"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r0)
        L1a:
            return r1
        L1b:
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.qihoo360.loader2.PmHostSvc.mPluginGroupMap
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            r1.put(r4, r2)
            goto L31
        L25:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.qihoo360.loader2.PmHostSvc.mPluginGroupMap
            java.lang.Object r4 = r0.get(r4)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r0 = r4.intValue()
        L31:
            return r0
    }

    @Override
    public void installBinder(java.lang.String r3, android.os.IBinder r4) throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "install binder: n="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " b="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L22:
            java.util.HashMap<java.lang.String, android.os.IBinder> r0 = com.qihoo360.loader2.PluginProcessMain.sBinders
            monitor-enter(r0)
            if (r4 == 0) goto L36
            java.util.HashMap<java.lang.String, android.os.IBinder> r1 = com.qihoo360.loader2.PluginProcessMain.sBinders     // Catch: java.lang.Throwable -> L3d
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L3d
            com.qihoo360.loader2.PmHostSvc$BinderDied r1 = new com.qihoo360.loader2.PmHostSvc$BinderDied     // Catch: java.lang.Throwable -> L3d
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L3d
            r3 = 0
            r4.linkToDeath(r1, r3)     // Catch: java.lang.Throwable -> L3d
            goto L3b
        L36:
            java.util.HashMap<java.lang.String, android.os.IBinder> r4 = com.qihoo360.loader2.PluginProcessMain.sBinders     // Catch: java.lang.Throwable -> L3d
            r4.remove(r3)     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r3
    }

    @Override
    public boolean isProcessAlive(java.lang.String r1) throws android.os.RemoteException {
            r0 = this;
            boolean r1 = com.qihoo360.loader2.PluginProcessMain.isProcessAlive(r1)
            return r1
    }

    @Override
    public java.util.List<com.qihoo360.replugin.model.PluginInfo> listPlugins() throws android.os.RemoteException {
            r1 = this;
            java.util.List r0 = com.qihoo360.loader2.PluginTable.buildPlugins()
            return r0
    }

    @Override
    public void onReceive(java.lang.String r2, java.lang.String r3, android.content.Intent r4) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.BroadcastReceiver> r0 = r1.mReceivers
            com.qihoo360.replugin.component.receiver.PluginReceiverHelper.onPluginReceiverReceived(r2, r3, r0, r4)
            return
    }

    @Override
    public com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r3, boolean r4) throws android.os.RemoteException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pluginDownloaded： path="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "p-n-"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L4b
            java.lang.String r1 = "v-plugin-"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L4b
            java.lang.String r1 = "plugin-s-"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L4b
            java.lang.String r1 = "p-m-"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L40
            goto L4b
        L40:
            com.qihoo360.replugin.packages.PluginManagerServer r0 = r2.mManager
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = r0.getService()
            com.qihoo360.replugin.model.PluginInfo r3 = r0.install(r3, r4)
            goto L4f
        L4b:
            com.qihoo360.replugin.model.PluginInfo r3 = r2.pluginDownloadedForPn(r3)
        L4f:
            if (r3 == 0) goto L54
            r2.syncInstalledPluginInfo2All(r3)
        L54:
            return r3
    }

    @Override
    public boolean pluginExtracted(java.lang.String r4) throws android.os.RemoteException {
            r3 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pluginExtracted： path="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.replugin.model.PluginInfo.build(r0)
            r0 = 0
            if (r4 != 0) goto L27
            return r0
        L27:
            com.qihoo360.loader2.PmBase r1 = r3.mPluginMgr
            r1.newPluginFound(r4, r0)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "ACTION_NEW_PLUGIN"
            r0.<init>(r1)
            boolean r1 = r3.mNeedRestart
            java.lang.String r2 = "persist_need_restart"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "obj"
            r0.putExtra(r1, r4)
            android.content.Context r4 = r3.mContext
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2AllSync(r4, r0)
            r4 = 1
            return r4
    }

    @Override
    public boolean pluginUninstalled(com.qihoo360.replugin.model.PluginInfo r3) throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pluginUninstalled： pn="
            r0.append(r1)
            java.lang.String r1 = r3.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1e:
            com.qihoo360.replugin.packages.PluginManagerServer r0 = r2.mManager
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = r0.getService()
            boolean r0 = r0.uninstall(r3)
            if (r0 == 0) goto L2d
            r2.syncUninstalledPluginInfo2All(r3)
        L2d:
            return r0
    }

    @Override
    public android.os.IBinder queryPluginBinder(java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            com.qihoo360.loader2.PluginCommImpl r0 = r0.mLocal
            android.os.IBinder r2 = r0.query(r2, r3)
            return r2
    }

    @Override
    public java.util.List<android.content.pm.ActivityInfo> queryPluginsReceiverList(android.content.Intent r4) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r4 = r4.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L13
            return r0
        L13:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r1 = r3.mActionPluginComponents
            java.lang.Object r4 = r1.get(r4)
            java.util.Map r4 = (java.util.Map) r4
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto L22
            return r0
        L22:
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L2a:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L54
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            com.qihoo360.loader2.PmBase r2 = r3.mPluginMgr
            com.qihoo360.loader2.PluginCommImpl r2 = r2.mLocal
            com.qihoo360.replugin.component.ComponentList r1 = r2.queryPluginComponentList(r1)
            if (r1 == 0) goto L2a
            java.util.HashMap r1 = r1.getReceiverMap()
            if (r1 == 0) goto L2a
            java.util.Collection r1 = r1.values()
            r0.addAll(r1)
            goto L2a
        L54:
            return r0
    }

    @Override
    public void regActivity(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) throws android.os.RemoteException {
            r1 = this;
            int r0 = android.os.Binder.getCallingPid()
            com.qihoo360.loader2.PluginProcessMain.attachActivity(r0, r2, r3, r5, r4)
            return
    }

    @Override
    public void regPluginBinder(com.qihoo360.loader2.PluginBinderInfo r1, android.os.IBinder r2) throws android.os.RemoteException {
            r0 = this;
            int r1 = r1.pid
            com.qihoo360.loader2.PluginProcessMain.attachBinder(r1, r2)
            return
    }

    @Override
    public void regReceiver(java.lang.String r6, java.util.Map r7) throws android.os.RemoteException {
            r5 = this;
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.loader2.MP.getPlugin(r6, r0)
            if (r0 == 0) goto L71
            int r0 = r0.getFrameworkVersion()
            r1 = 4
            if (r0 >= r1) goto Lf
            goto L71
        Lf:
            if (r7 != 0) goto L12
            return
        L12:
            java.util.HashMap r7 = (java.util.HashMap) r7
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L1c:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L71
            java.lang.Object r0 = r7.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            com.qihoo360.replugin.component.receiver.PluginReceiverProxy r1 = r5.mReceiverProxy
            if (r1 != 0) goto L38
            com.qihoo360.replugin.component.receiver.PluginReceiverProxy r1 = new com.qihoo360.replugin.component.receiver.PluginReceiverProxy
            r1.<init>()
            r5.mReceiverProxy = r1
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r2 = r5.mActionPluginComponents
            r1.setActionPluginMap(r2)
        L38:
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L1c
            java.util.Iterator r0 = r0.iterator()
        L4a:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1c
            java.lang.Object r2 = r0.next()
            android.content.IntentFilter r2 = (android.content.IntentFilter) r2
            int r3 = r2.countActions()
        L5a:
            r4 = 1
            if (r3 < r4) goto L69
            int r4 = r3 + (-1)
            java.lang.String r4 = r2.getAction(r4)
            r5.saveAction(r4, r6, r1)
            int r3 = r3 + (-1)
            goto L5a
        L69:
            android.content.Context r3 = r5.mContext
            com.qihoo360.replugin.component.receiver.PluginReceiverProxy r4 = r5.mReceiverProxy
            r3.registerReceiver(r4, r2)
            goto L4a
        L71:
            return
    }

    @Override
    public void regService(int r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
            r1 = this;
            int r0 = android.os.Binder.getCallingPid()
            com.qihoo360.loader2.PluginProcessMain.attachService(r0, r2, r3, r4)
            return
    }

    @Override
    public void sendIntent2Plugin(java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException {
            r1 = this;
            r0 = 0
            r1.sendIntent2Plugin(r2, r3, r0)
            return
    }

    @Override
    public void sendIntent2PluginSync(java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException {
            r1 = this;
            r0 = 1
            r1.sendIntent2Plugin(r2, r3, r0)
            return
    }

    @Override
    public void sendIntent2Process(java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException {
            r1 = this;
            r0 = 0
            r1.sendIntent2Process(r2, r3, r0)
            return
    }

    @Override
    public void sendIntent2ProcessSync(java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException {
            r1 = this;
            r0 = 1
            r1.sendIntent2Process(r2, r3, r0)
            return
    }

    @Override
    public com.qihoo360.loader2.IPluginClient startPluginProcess(java.lang.String r2, int r3, com.qihoo360.loader2.PluginBinderInfo r4) throws android.os.RemoteException {
            r1 = this;
            com.qihoo360.loader2.PmBase r0 = r1.mPluginMgr
            com.qihoo360.loader2.IPluginClient r2 = r0.startPluginProcessLocked(r2, r3, r4)
            return r2
    }

    @Override
    public int sumBinders(int r1) throws android.os.RemoteException {
            r0 = this;
            int r1 = com.qihoo360.loader2.PluginProcessMain.sumBinders(r1)
            return r1
    }

    @Override
    public void unregActivity(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) throws android.os.RemoteException {
            r1 = this;
            int r0 = android.os.Binder.getCallingPid()
            com.qihoo360.loader2.PluginProcessMain.detachActivity(r0, r2, r3, r5, r4)
            return
    }

    @Override
    public void unregPluginBinder(com.qihoo360.loader2.PluginBinderInfo r2, android.os.IBinder r3) throws android.os.RemoteException {
            r1 = this;
            int r0 = r2.pid
            com.qihoo360.loader2.PluginProcessMain.detachBinder(r0, r3)
            int r3 = r2.pid
            com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.PluginProcessMain.probePluginClientByPid(r3, r2)
            if (r2 != 0) goto L19
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L18
            java.lang.String r2 = "ws001"
            java.lang.String r3 = "unregPluginBinder ... client is null"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L18:
            return
        L19:
            r2.releaseBinder()
            return
    }

    @Override
    public void unregReceiver() throws android.os.RemoteException {
            r3 = this;
            android.content.Context r0 = r3.mContext     // Catch: java.lang.Throwable -> L8
            com.qihoo360.replugin.component.receiver.PluginReceiverProxy r1 = r3.mReceiverProxy     // Catch: java.lang.Throwable -> L8
            r0.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> L8
            goto L27
        L8:
            r0 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L27
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unregProxyReceiver failed, "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "ms-receiver"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L27:
            return
    }

    @Override
    public void unregService(int r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
            r1 = this;
            int r0 = android.os.Binder.getCallingPid()
            com.qihoo360.loader2.PluginProcessMain.detachService(r0, r2, r3, r4)
            return
    }

    @Override
    public void updatePluginInfo(com.qihoo360.replugin.model.PluginInfo r3) throws android.os.RemoteException {
            r2 = this;
            com.qihoo360.loader2.PmBase r0 = r2.mPluginMgr
            java.lang.String r1 = r3.getName()
            com.qihoo360.loader2.Plugin r0 = r0.getPlugin(r1)
            if (r0 == 0) goto Lf
            r0.replaceInfo(r3)
        Lf:
            com.qihoo360.loader2.PluginTable.replaceInfo(r3)
            return
    }
}
