package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginProcessPer extends com.qihoo360.loader2.IPluginClient.Stub {
    final com.qihoo360.loader2.PluginContainers mACM;
    private final android.content.Context mContext;
    private com.qihoo360.loader2.Plugin mDefaultPlugin;
    private final com.qihoo360.loader2.PmBase mPluginMgr;
    private java.util.HashMap<java.lang.String, android.content.BroadcastReceiver> mReceivers;
    final com.qihoo360.replugin.component.service.server.PluginServiceServer mServiceMgr;

    PluginProcessPer(android.content.Context r2, com.qihoo360.loader2.PmBase r3, int r4, java.util.HashSet<java.lang.String> r5) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mReceivers = r0
            r1.mContext = r2
            r1.mPluginMgr = r3
            com.qihoo360.replugin.component.service.server.PluginServiceServer r3 = new com.qihoo360.replugin.component.service.server.PluginServiceServer
            r3.<init>(r2)
            r1.mServiceMgr = r3
            com.qihoo360.loader2.PluginContainers r2 = new com.qihoo360.loader2.PluginContainers
            r2.<init>()
            r1.mACM = r2
            r2.init(r4, r5)
            return
    }

    private void sendIntent(android.content.Intent r3, boolean r4) throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendIntent pr="
            r0.append(r1)
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            r0.append(r1)
            java.lang.String r1 = " intent="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L26:
            java.lang.Class r0 = r2.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r3.setExtrasClassLoader(r0)
            if (r4 == 0) goto L39
            android.content.Context r4 = r2.mContext
            com.qihoo360.replugin.base.LocalBroadcastHelper.sendBroadcastSyncUi(r4, r3)
            goto L42
        L39:
            android.content.Context r4 = r2.mContext
            com.qihoo360.replugin.compat.LocalBroadcastManager r4 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r4)
            r4.sendBroadcast(r3)
        L42:
            return
    }

    @Override
    public java.lang.String allocActivityContainer(java.lang.String r3, int r4, java.lang.String r5, android.content.Intent r6) throws android.os.RemoteException {
            r2 = this;
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r0.getEventCallbacks()
            r0.onPrepareAllocPitActivity(r6)
            boolean r0 = com.qihoo360.replugin.base.IPC.isUIProcess()
            if (r0 == 0) goto L12
            r4 = -1
        L12:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L2b
            com.qihoo360.loader2.Plugin r3 = r2.mDefaultPlugin
            if (r3 != 0) goto L25
            java.lang.String r3 = "a.a.c p i n"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r3)
            r3 = 0
            return r3
        L25:
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo
            java.lang.String r3 = r3.getName()
        L2b:
            java.lang.String r4 = r2.bindActivity(r3, r4, r5, r6)
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L57
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "PACM: eval plugin "
            r6.append(r0)
            r6.append(r3)
            java.lang.String r3 = ", target="
            r6.append(r3)
            r6.append(r5)
            java.lang.String r3 = ", container="
            r6.append(r3)
            r6.append(r4)
            java.lang.String r3 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)
        L57:
            return r4
    }

    final java.lang.String bindActivity(java.lang.String r12, int r13, java.lang.String r14, android.content.Intent r15) {
            r11 = this;
            com.qihoo360.loader2.PmBase r0 = r11.mPluginMgr
            com.qihoo360.loader2.Plugin r0 = r0.loadAppPlugin(r12)
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 != 0) goto L24
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r13 == 0) goto L23
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin="
            r13.append(r14)
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r2, r12)
        L23:
            return r1
        L24:
            com.qihoo360.loader2.Loader r3 = r0.mLoader
            com.qihoo360.replugin.component.ComponentList r3 = r3.mComponents
            android.content.pm.ActivityInfo r5 = r3.getActivity(r14)
            if (r5 != 0) goto L47
            boolean r12 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r12 == 0) goto L46
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "PACM: bindActivity: activity not found: activity="
            r12.append(r13)
            r12.append(r14)
            java.lang.String r12 = r12.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r12)
        L46:
            return r1
        L47:
            java.lang.String r3 = r5.processName
            if (r3 != 0) goto L51
            android.content.pm.ApplicationInfo r3 = r5.applicationInfo
            java.lang.String r3 = r3.processName
            r5.processName = r3
        L51:
            java.lang.String r3 = r5.processName
            if (r3 != 0) goto L59
            java.lang.String r3 = r5.packageName
            r5.processName = r3
        L59:
            java.lang.String r3 = r5.processName
            java.lang.String r4 = ":p"
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto L74
            java.lang.String r3 = r5.processName
            java.lang.String r10 = com.qihoo360.replugin.component.process.PluginProcessHost.processTail(r3)
            com.qihoo360.loader2.PluginContainers r4 = r11.mACM
            r6 = r12
            r7 = r14
            r8 = r13
            r9 = r15
            java.lang.String r12 = r4.alloc2(r5, r6, r7, r8, r9, r10)
            goto L7e
        L74:
            com.qihoo360.loader2.PluginContainers r4 = r11.mACM
            r6 = r12
            r7 = r14
            r8 = r13
            r9 = r15
            java.lang.String r12 = r4.alloc(r5, r6, r7, r8, r9)
        L7e:
            boolean r13 = android.text.TextUtils.isEmpty(r12)
            if (r13 == 0) goto L8e
            boolean r12 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r12 == 0) goto L8d
            java.lang.String r12 = "PACM: bindActivity: activity container is empty"
            com.qihoo360.replugin.helper.LogDebug.w(r2, r12)
        L8d:
            return r1
        L8e:
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r13 == 0) goto La6
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r15 = "PACM: bindActivity: lookup activity container: container="
            r13.append(r15)
            r13.append(r12)
            java.lang.String r13 = r13.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r13)
        La6:
            com.qihoo360.loader2.Loader r13 = r0.mLoader     // Catch: java.lang.Throwable -> Laf
            java.lang.ClassLoader r13 = r13.mClassLoader     // Catch: java.lang.Throwable -> Laf
            java.lang.Class r13 = r13.loadClass(r14)     // Catch: java.lang.Throwable -> Laf
            goto Lb8
        Laf:
            r13 = move-exception
            java.lang.String r15 = r13.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r2, r15, r13)
            r13 = r1
        Lb8:
            if (r13 != 0) goto Ld3
            boolean r12 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r12 == 0) goto Ld2
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "PACM: bindActivity: plugin activity class not found: c="
            r12.append(r13)
            r12.append(r14)
            java.lang.String r12 = r12.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r2, r12)
        Ld2:
            return r1
        Ld3:
            return r12
    }

    @Override
    public java.lang.String dumpActivities() {
            r1 = this;
            com.qihoo360.loader2.PluginContainers r0 = r1.mACM
            java.lang.String r0 = r0.dump()
            return r0
    }

    @Override
    public java.lang.String dumpServices() {
            r3 = this;
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r3.fetchServiceServer()     // Catch: android.os.RemoteException -> L14
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.dump()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "psc.sts: pss e"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)     // Catch: android.os.RemoteException -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            r0 = 0
            return r0
    }

    @Override
    public com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException {
            r1 = this;
            com.qihoo360.replugin.component.service.server.PluginServiceServer r0 = r1.mServiceMgr
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r0.getService()
            return r0
    }

    final void init(com.qihoo360.loader2.Plugin r1) {
            r0 = this;
            r0.mDefaultPlugin = r1
            return
    }

    @Override
    public void onReceive(java.lang.String r2, java.lang.String r3, android.content.Intent r4) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.BroadcastReceiver> r0 = r1.mReceivers
            com.qihoo360.replugin.component.receiver.PluginReceiverHelper.onPluginReceiverReceived(r2, r3, r0, r4)
            return
    }

    @Override
    public android.os.IBinder queryBinder(java.lang.String r5, java.lang.String r6) throws android.os.RemoteException {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L9
            com.qihoo360.loader2.Plugin r5 = r4.mDefaultPlugin
            goto Lf
        L9:
            com.qihoo360.loader2.PmBase r0 = r4.mPluginMgr
            com.qihoo360.loader2.Plugin r5 = r0.loadAppPlugin(r5)
        Lf:
            r0 = 0
            java.lang.String r1 = "ws001"
            if (r5 != 0) goto L1a
            java.lang.String r5 = "q.b p i n"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r5)
            return r0
        L1a:
            com.qihoo360.loader2.Loader r2 = r5.mLoader
            if (r2 != 0) goto L24
            java.lang.String r5 = "q.b p l i n"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r5)
            return r0
        L24:
            com.qihoo360.loader2.Loader r2 = r5.mLoader
            com.qihoo360.loader2.Loader$ProxyPlugin r2 = r2.mBinderPlugin
            if (r2 != 0) goto L30
            java.lang.String r5 = "q.b p l b i n"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r5)
            return r0
        L30:
            com.qihoo360.loader2.Loader r2 = r5.mLoader
            com.qihoo360.loader2.Loader$ProxyPlugin r2 = r2.mBinderPlugin
            com.qihoo360.loader2.IPlugin r2 = r2.mPlugin
            if (r2 != 0) goto L3e
            java.lang.String r5 = "q.b p l b p i n"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r5)
            return r0
        L3e:
            com.qihoo360.loader2.Loader r0 = r5.mLoader
            com.qihoo360.loader2.Loader$ProxyPlugin r0 = r0.mBinderPlugin
            com.qihoo360.loader2.IPlugin r0 = r0.mPlugin
            android.os.IBinder r0 = r0.query(r6)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L76
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PluginImpl.query: call plugin aidl: plugin="
            r2.append(r3)
            com.qihoo360.replugin.model.PluginInfo r5 = r5.mInfo
            java.lang.String r5 = r5.getName()
            r2.append(r5)
            java.lang.String r5 = " binder.name="
            r2.append(r5)
            r2.append(r6)
            java.lang.String r5 = " binder.object="
            r2.append(r5)
            r2.append(r0)
            java.lang.String r5 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r5)
        L76:
            return r0
    }

    @Override
    public void releaseBinder() throws android.os.RemoteException {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "PluginImpl.releaseBinder"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        Lb:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r0.getEventCallbacks()
            r0.onBinderReleased()
            return
    }

    final java.lang.Class<?> resolveActivityClass(java.lang.String r7) {
            r6 = this;
            com.qihoo360.loader2.PluginContainers r0 = r6.mACM
            com.qihoo360.loader2.PluginContainers$ActivityState r0 = r0.lookupByContainer(r7)
            java.lang.String r1 = "ws001"
            if (r0 != 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "use f.a, c="
            r0.append(r2)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r1, r7)
            java.lang.Class<com.qihoo360.replugin.component.dummy.ForwardActivity> r7 = com.qihoo360.replugin.component.dummy.ForwardActivity.class
            return r7
        L21:
            java.lang.String r2 = r0.plugin
            java.lang.String r0 = r0.activity
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L4d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "PACM: loadActivityClass in="
            r3.append(r4)
            r3.append(r7)
            java.lang.String r4 = " target="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = " plugin="
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)
        L4d:
            com.qihoo360.loader2.PmBase r3 = r6.mPluginMgr
            com.qihoo360.loader2.Plugin r3 = r3.loadAppPlugin(r2)
            r4 = 0
            if (r3 != 0) goto L7b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "load fail: c="
            r3.append(r5)
            r3.append(r7)
            java.lang.String r7 = " p="
            r3.append(r7)
            r3.append(r2)
            java.lang.String r7 = " t="
            r3.append(r7)
            r3.append(r0)
            java.lang.String r7 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r7)
            return r4
        L7b:
            java.lang.ClassLoader r2 = r3.getClassLoader()
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L9f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "PACM: loadActivityClass, plugin activity loader: in="
            r3.append(r5)
            r3.append(r7)
            java.lang.String r7 = " activity="
            r3.append(r7)
            r3.append(r0)
            java.lang.String r7 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r7)
        L9f:
            java.lang.Class r4 = r2.loadClass(r0)     // Catch: java.lang.Throwable -> La4
            goto Lac
        La4:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r7)
        Lac:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto Lcc
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "PACM: loadActivityClass, plugin activity loader: c="
            r7.append(r0)
            r7.append(r4)
            java.lang.String r0 = ", loader="
            r7.append(r0)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r7)
        Lcc:
            return r4
    }

    @Override
    public void sendIntent(android.content.Intent r2) throws android.os.RemoteException {
            r1 = this;
            r0 = 0
            r1.sendIntent(r2, r0)
            return
    }

    @Override
    public void sendIntentSync(android.content.Intent r2) throws android.os.RemoteException {
            r1 = this;
            r0 = 1
            r1.sendIntent(r2, r0)
            return
    }

    @Override
    public int sumActivities() throws android.os.RemoteException {
            r1 = this;
            int r0 = com.qihoo360.loader2.alc.ActivityController.sumActivities()
            return r0
    }
}
