package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProcessMain {
    private static final java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord> ALL = null;
    private static final java.lang.Object COOKIE_LOCK = null;
    private static final java.util.concurrent.locks.ReentrantReadWriteLock PROCESS_CLIENT_LOCK = null;
    public static final java.lang.String TAG = null;
    static java.util.HashMap<java.lang.String, android.os.IBinder> sBinders;
    private static long sPersisistCookie;
    private static boolean sPersisistCookieInitialized;
    private static com.qihoo360.loader2.IPluginHost sPluginHostLocal;
    private static com.qihoo360.loader2.IPluginHost sPluginHostRemote;












    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private interface Action<T> {
        T call();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class ProcessClientRecord implements android.os.IBinder.DeathRecipient {
        android.os.IBinder binder;
        com.qihoo360.loader2.IPluginClient client;
        int index;
        java.lang.String name;
        int pid;
        java.lang.String plugin;
        com.qihoo360.replugin.packages.PluginManagerServer pluginManager;

        public ProcessClientRecord(java.lang.String r1, java.lang.String r2, int r3, int r4, android.os.IBinder r5, com.qihoo360.loader2.IPluginClient r6, com.qihoo360.replugin.packages.PluginManagerServer r7) {
                r0 = this;
                r0.<init>()
                r0.name = r1
                r0.plugin = r2
                r0.pid = r3
                r0.index = r4
                r0.binder = r5
                r0.client = r6
                r0.pluginManager = r7
                return
        }

        @Override
        public void binderDied() {
                r0 = this;
                com.qihoo360.loader2.PluginProcessMain.access$000(r0)
                return
        }

        public com.qihoo360.loader2.IPluginClient getClient() {
                r1 = this;
                com.qihoo360.loader2.IPluginClient r0 = r1.client
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L56
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = super.toString()
                r0.append(r1)
                java.lang.String r1 = " {name="
                r0.append(r1)
                java.lang.String r1 = r2.name
                r0.append(r1)
                java.lang.String r1 = " plugin="
                r0.append(r1)
                java.lang.String r1 = r2.plugin
                r0.append(r1)
                java.lang.String r1 = " pid="
                r0.append(r1)
                int r1 = r2.pid
                r0.append(r1)
                java.lang.String r1 = " index="
                r0.append(r1)
                int r1 = r2.index
                r0.append(r1)
                java.lang.String r1 = " binder="
                r0.append(r1)
                android.os.IBinder r1 = r2.binder
                r0.append(r1)
                java.lang.String r1 = " client="
                r0.append(r1)
                com.qihoo360.loader2.IPluginClient r1 = r2.client
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
            L56:
                java.lang.String r0 = super.toString()
                return r0
        }
    }

    static {
            java.lang.Class<com.qihoo360.loader2.PluginProcessMain> r0 = com.qihoo360.loader2.PluginProcessMain.class
            java.lang.String r0 = r0.getSimpleName()
            com.qihoo360.loader2.PluginProcessMain.TAG = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.PluginProcessMain.sBinders = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.PluginProcessMain.ALL = r0
            java.util.concurrent.locks.ReentrantReadWriteLock r0 = new java.util.concurrent.locks.ReentrantReadWriteLock
            r0.<init>()
            com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.qihoo360.loader2.PluginProcessMain.COOKIE_LOCK = r0
            return
    }

    public PluginProcessMain() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$000(com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord r0) {
            handleBinderDied(r0)
            return
    }

    static com.qihoo360.loader2.IPluginHost access$102(com.qihoo360.loader2.IPluginHost r0) {
            com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote = r0
            return r0
    }

    static java.util.Map access$200() {
            java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord> r0 = com.qihoo360.loader2.PluginProcessMain.ALL
            return r0
    }

    static java.lang.String access$300(int r0) {
            java.lang.String r0 = getProcessStringByIndex(r0)
            return r0
    }

    static boolean access$400(com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord r0) {
            boolean r0 = isBinderAlive(r0)
            return r0
    }

    @java.lang.Deprecated
    static final int allocProcess(java.lang.String r2, int r3) {
            java.lang.String r0 = "ui"
            boolean r0 = r0.equals(r2)
            r1 = -1
            if (r0 != 0) goto L3b
            if (r3 != r1) goto Lc
            goto L3b
        Lc:
            boolean r0 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r3)
            if (r0 == 0) goto L13
            return r3
        L13:
            com.qihoo360.replugin.model.PluginInfo r3 = com.qihoo360.loader2.PluginTable.getPluginInfo(r2)
            if (r3 != 0) goto L36
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L33
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "alloc process: plugin not found: name="
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L33:
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            return r2
        L36:
            int r2 = com.qihoo360.loader2.StubProcessManager.allocProcess(r2)
            return r2
        L3b:
            return r1
    }

    static final boolean attachActivity(int r0, int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.qihoo360.loader2.StubProcessManager.attachActivity(r0, r1, r2, r3, r4)
            return r0
    }

    static final void attachBinder(int r0, android.os.IBinder r1) {
            com.qihoo360.loader2.StubProcessManager.attachBinder(r0, r1)
            return
    }

    static final java.lang.String attachProcess(int r9, java.lang.String r10, int r11, android.os.IBinder r12, com.qihoo360.loader2.IPluginClient r13, java.lang.String r14, com.qihoo360.replugin.packages.PluginManagerServer r15) {
            java.lang.String r14 = getDefaultPluginName(r9, r11, r12, r13, r14)
            com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord r8 = new com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord
            r0 = r8
            r1 = r10
            r2 = r14
            r3 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            android.os.IBinder r9 = r8.binder     // Catch: java.lang.Throwable -> L18
            r10 = 0
            r9.linkToDeath(r8, r10)     // Catch: java.lang.Throwable -> L18
            goto L33
        L18:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "ap l2d: "
            r10.append(r11)
            java.lang.String r11 = r9.getMessage()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.String r11 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r11, r10, r9)
        L33:
            com.qihoo360.loader2.PluginProcessMain$8 r9 = new com.qihoo360.loader2.PluginProcessMain$8
            r9.<init>(r8)
            writeProcessClientLock(r9)
            return r14
    }

    static final boolean attachService(int r0, int r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.loader2.StubProcessManager.attachService(r0, r1, r2, r3)
            return r0
    }

    static final void connectToHostSvc() {
            android.content.Context r0 = com.qihoo360.loader2.PMF.getApplicationContext()
            android.os.IBinder r0 = com.qihoo360.loader2.PluginProviderStub.proxyFetchHostBinder(r0)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "ws001"
            if (r1 == 0) goto L22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "host binder = "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L22:
            r1 = 1
            if (r0 != 0) goto L2d
            java.lang.String r3 = "p.p fhb fail"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3)
            java.lang.System.exit(r1)
        L2d:
            com.qihoo360.loader2.PluginProcessMain$1 r3 = new com.qihoo360.loader2.PluginProcessMain$1     // Catch: android.os.RemoteException -> L37
            r3.<init>()     // Catch: android.os.RemoteException -> L37
            r4 = 0
            r0.linkToDeath(r3, r4)     // Catch: android.os.RemoteException -> L37
            goto L53
        L37:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "p.p p.h l2a: "
            r4.append(r5)
            java.lang.String r5 = r3.getMessage()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r2, r4, r3)
            java.lang.System.exit(r1)
        L53:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.IPluginHost.Stub.asInterface(r0)
            com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote = r0
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "host binder.i = "
            r0.append(r3)
            com.qihoo360.loader2.IPluginHost r3 = com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L73:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote     // Catch: android.os.RemoteException -> L7c
            com.qihoo360.replugin.packages.PluginManagerProxy.connectToServer(r0)     // Catch: android.os.RemoteException -> L7c
            com.qihoo360.replugin.packages.PluginManagerProxy.syncRunningPlugins()     // Catch: android.os.RemoteException -> L7c
            goto L98
        L7c:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "p.p p.h l3a: "
            r3.append(r4)
            java.lang.String r4 = r0.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3, r0)
            java.lang.System.exit(r1)
        L98:
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            r0.attach()
            return
    }

    static final boolean detachActivity(int r0, int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.qihoo360.loader2.StubProcessManager.detachActivity(r0, r1, r2, r3, r4)
            return r0
    }

    static final void detachBinder(int r0, android.os.IBinder r1) {
            com.qihoo360.loader2.StubProcessManager.detachBinder(r0, r1)
            return
    }

    static final boolean detachService(int r0, int r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.loader2.StubProcessManager.detachService(r0, r1, r2, r3)
            return r0
    }

    static final java.lang.String dump() {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord> r2 = com.qihoo360.loader2.PluginProcessMain.ALL
            java.util.Collection r2 = r2.values()
            java.util.Iterator r2 = r2.iterator()
        L14:
            boolean r3 = r2.hasNext()
            r4 = 0
            if (r3 == 0) goto L70
            java.lang.Object r3 = r2.next()
            com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord r3 = (com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord) r3
            com.qihoo360.loader2.IPluginClient r3 = r3.getClient()     // Catch: java.lang.Throwable -> L6b
            if (r3 != 0) goto L28
            goto L14
        L28:
            java.lang.String r5 = r3.dumpActivities()     // Catch: java.lang.Throwable -> L6b
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L6b
            if (r6 != 0) goto L4a
            org.json.JSONArray r6 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L6b
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L6b
            int r5 = r6.length()     // Catch: java.lang.Throwable -> L6b
            if (r5 <= 0) goto L4a
            r7 = r4
        L3e:
            if (r7 >= r5) goto L4a
            org.json.JSONObject r8 = r6.getJSONObject(r7)     // Catch: java.lang.Throwable -> L6b
            r0.put(r8)     // Catch: java.lang.Throwable -> L6b
            int r7 = r7 + 1
            goto L3e
        L4a:
            java.lang.String r3 = r3.dumpServices()     // Catch: java.lang.Throwable -> L6b
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L6b
            if (r5 != 0) goto L14
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L6b
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L6b
            int r3 = r5.length()     // Catch: java.lang.Throwable -> L6b
            if (r3 <= 0) goto L14
        L5f:
            if (r4 >= r3) goto L14
            org.json.JSONObject r6 = r5.getJSONObject(r4)     // Catch: java.lang.Throwable -> L6b
            r1.put(r6)     // Catch: java.lang.Throwable -> L6b
            int r4 = r4 + 1
            goto L5f
        L6b:
            r3 = move-exception
            r3.printStackTrace()
            goto L14
        L70:
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.List r3 = com.qihoo360.loader2.MP.getPlugins(r4)
            if (r3 == 0) goto La4
            java.util.Iterator r3 = r3.iterator()
        L7f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto La4
            java.lang.Object r4 = r3.next()
            com.qihoo360.replugin.model.PluginInfo r4 = (com.qihoo360.replugin.model.PluginInfo) r4
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L9f
            r5.<init>()     // Catch: org.json.JSONException -> L9f
            java.lang.String r6 = r4.getName()     // Catch: org.json.JSONException -> L9f
            java.lang.String r4 = r4.toString()     // Catch: org.json.JSONException -> L9f
            r5.put(r6, r4)     // Catch: org.json.JSONException -> L9f
            r2.put(r5)     // Catch: org.json.JSONException -> L9f
            goto L7f
        L9f:
            r4 = move-exception
            r4.printStackTrace()
            goto L7f
        La4:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r4 = "activity"
            r3.put(r4, r0)     // Catch: org.json.JSONException -> Lb9
            java.lang.String r0 = "service"
            r3.put(r0, r1)     // Catch: org.json.JSONException -> Lb9
            java.lang.String r0 = "plugin"
            r3.put(r0, r2)     // Catch: org.json.JSONException -> Lb9
            goto Lbd
        Lb9:
            r0 = move-exception
            r0.printStackTrace()
        Lbd:
            java.lang.String r0 = r3.toString()
            return r0
    }

    static final void dump(java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.DUMP_ENABLED
            if (r0 == 0) goto L4c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--- ALL.length = "
            r0.append(r1)
            java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord> r1 = com.qihoo360.loader2.PluginProcessMain.ALL
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = " ---"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.println(r0)
            java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord> r0 = com.qihoo360.loader2.PluginProcessMain.ALL
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L2d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord r1 = (com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord) r1
            r3.println(r1)
            goto L2d
        L3d:
            r3.println()
            com.qihoo360.loader2.StubProcessManager.dump(r3)
            r3.println()
            r3.println()
            com.qihoo360.loader2.PluginTable.dump(r2, r3, r4)
        L4c:
            return
    }

    private static final java.lang.String getDefaultPluginName(int r1, int r2, android.os.IBinder r3, com.qihoo360.loader2.IPluginClient r4, java.lang.String r5) {
            r0 = -1
            if (r2 != r0) goto L6
            java.lang.String r1 = "ui"
            return r1
        L6:
            boolean r0 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r2)
            if (r0 == 0) goto L11
            java.lang.String r1 = getProcessStringByIndex(r2)
            return r1
        L11:
            boolean r0 = com.qihoo360.loader2.PluginManager.isPluginProcess(r2)
            if (r0 == 0) goto L1c
            java.lang.String r1 = com.qihoo360.loader2.StubProcessManager.attachStubProcess(r1, r2, r3, r4, r5)
            return r1
        L1c:
            r1 = 0
            return r1
    }

    static final long getPersistentCookie() {
            java.lang.Object r0 = com.qihoo360.loader2.PluginProcessMain.COOKIE_LOCK
            monitor-enter(r0)
            boolean r1 = com.qihoo360.loader2.PluginProcessMain.sPersisistCookieInitialized     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L32
            r1 = 1
            com.qihoo360.loader2.PluginProcessMain.sPersisistCookieInitialized = r1     // Catch: java.lang.Throwable -> L36
            boolean r1 = com.qihoo360.replugin.base.IPC.isPersistentProcess()     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L32
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L36
            com.qihoo360.loader2.PluginProcessMain.sPersisistCookie = r1     // Catch: java.lang.Throwable -> L36
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L32
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "generate cookie: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L36
            long r3 = com.qihoo360.loader2.PluginProcessMain.sPersisistCookie     // Catch: java.lang.Throwable -> L36
            r2.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L36
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> L36
        L32:
            long r1 = com.qihoo360.loader2.PluginProcessMain.sPersisistCookie     // Catch: java.lang.Throwable -> L36
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return r1
        L36:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r1
    }

    static final int getPidByProcessName(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = -1
            return r1
        L8:
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L17
            int r1 = com.qihoo360.replugin.base.IPC.getCurrentProcessId()
            return r1
        L17:
            com.qihoo360.loader2.PluginProcessMain$9 r0 = new com.qihoo360.loader2.PluginProcessMain$9
            r0.<init>(r1)
            java.lang.Object r1 = readProcessClientLock(r0)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            return r1
    }

    public static final com.qihoo360.loader2.IPluginHost getPluginHost() {
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.sPluginHostLocal
            if (r0 == 0) goto L5
            return r0
        L5:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote
            if (r0 != 0) goto L24
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L21
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 != 0) goto L14
            goto L21
        L14:
            java.lang.String r0 = "插件框架未正常初始化"
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.e(r1, r0)
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
        L21:
            connectToHostSvc()
        L24:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.sPluginHostRemote
            return r0
    }

    static final java.lang.String getProcessNameByPid(int r1) {
            int r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessId()
            if (r1 != r0) goto Lb
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            return r1
        Lb:
            com.qihoo360.loader2.PluginProcessMain$10 r0 = new com.qihoo360.loader2.PluginProcessMain$10
            r0.<init>(r1)
            java.lang.Object r1 = readProcessClientLock(r0)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    private static java.lang.String getProcessStringByIndex(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ":p"
            r0.append(r1)
            int r2 = r2 + 100
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static final void handleBinderDied(com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord r2) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "plugin process has died: plugin="
            r0.append(r1)
            java.lang.String r1 = r2.plugin
            r0.append(r1)
            java.lang.String r1 = " index="
            r0.append(r1)
            int r1 = r2.index
            r0.append(r1)
            java.lang.String r1 = " pid="
            r0.append(r1)
            int r1 = r2.pid
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L30:
            handleBinderDiedLocked(r2)
            return
    }

    private static final void handleBinderDiedLocked(com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.qihoo360.loader2.PluginProcessMain$11 r0 = new com.qihoo360.loader2.PluginProcessMain$11
            r0.<init>(r1)
            writeProcessClientLock(r0)
            android.os.IBinder r0 = r1.binder
            com.qihoo360.loader2.StubProcessManager.setProcessStop(r0)
            com.qihoo360.replugin.packages.PluginManagerServer r0 = r1.pluginManager
            java.lang.String r1 = r1.name
            r0.onClientProcessKilled(r1)
            return
    }

    static final void installHost(com.qihoo360.loader2.IPluginHost r0) {
            com.qihoo360.loader2.PluginProcessMain.sPluginHostLocal = r0
            com.qihoo360.replugin.packages.PluginManagerProxy.connectToServer(r0)     // Catch: android.os.RemoteException -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }

    private static boolean isBinderAlive(com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord r1) {
            if (r1 == 0) goto L14
            android.os.IBinder r0 = r1.binder
            if (r0 == 0) goto L14
            com.qihoo360.loader2.IPluginClient r0 = r1.client
            if (r0 == 0) goto L14
            android.os.IBinder r1 = r1.binder
            boolean r1 = r1.isBinderAlive()
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    static final boolean isProcessAlive(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            com.qihoo360.loader2.PluginProcessMain$6 r0 = new com.qihoo360.loader2.PluginProcessMain$6
            r0.<init>(r1)
            java.lang.Object r1 = readProcessClientLock(r0)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            return r1
    }

    static final com.qihoo360.loader2.IPluginClient probePluginClient(java.lang.String r1, int r2, com.qihoo360.loader2.PluginBinderInfo r3) {
            com.qihoo360.loader2.PluginProcessMain$2 r0 = new com.qihoo360.loader2.PluginProcessMain$2
            r0.<init>(r2, r1, r3)
            java.lang.Object r1 = readProcessClientLock(r0)
            com.qihoo360.loader2.IPluginClient r1 = (com.qihoo360.loader2.IPluginClient) r1
            return r1
    }

    static final com.qihoo360.loader2.IPluginClient probePluginClientByPid(int r1, com.qihoo360.loader2.PluginBinderInfo r2) {
            com.qihoo360.loader2.PluginProcessMain$3 r0 = new com.qihoo360.loader2.PluginProcessMain$3
            r0.<init>(r1, r2)
            java.lang.Object r1 = readProcessClientLock(r0)
            com.qihoo360.loader2.IPluginClient r1 = (com.qihoo360.loader2.IPluginClient) r1
            return r1
    }

    private static <T> T readProcessClientLock(com.qihoo360.loader2.PluginProcessMain.Action<T> r12) {
            java.lang.String r0 = "%s(%sms@%s) READING DONE"
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 2
            r4 = 1
            r5 = 0
            r6 = 3
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock r7 = r7.readLock()     // Catch: java.lang.Throwable -> L7b
            r7.lock()     // Catch: java.lang.Throwable -> L7b
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L7b
            if (r7 == 0) goto L41
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG     // Catch: java.lang.Throwable -> L7b
            java.lang.String r8 = "%s(%sms@%s) READING"
            java.lang.Object[] r9 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L7b
            java.lang.Thread r10 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L7b
            java.lang.StackTraceElement[] r10 = r10.getStackTrace()     // Catch: java.lang.Throwable -> L7b
            r10 = r10[r6]     // Catch: java.lang.Throwable -> L7b
            r9[r5] = r10     // Catch: java.lang.Throwable -> L7b
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7b
            long r10 = r10 - r1
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Throwable -> L7b
            r9[r4] = r10     // Catch: java.lang.Throwable -> L7b
            java.lang.Thread r10 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L7b
            r9[r3] = r10     // Catch: java.lang.Throwable -> L7b
            java.lang.String r8 = java.lang.String.format(r8, r9)     // Catch: java.lang.Throwable -> L7b
            android.util.Log.d(r7, r8)     // Catch: java.lang.Throwable -> L7b
        L41:
            java.lang.Object r12 = r12.call()     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK
            java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock r7 = r7.readLock()
            r7.unlock()
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L7a
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG
            java.lang.Object[] r8 = new java.lang.Object[r6]
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r9 = r9.getStackTrace()
            r6 = r9[r6]
            r8[r5] = r6
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r1
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            r8[r4] = r1
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r8[r3] = r1
            java.lang.String r0 = java.lang.String.format(r0, r8)
            android.util.Log.d(r7, r0)
        L7a:
            return r12
        L7b:
            r12 = move-exception
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK
            java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock r7 = r7.readLock()
            r7.unlock()
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto Lb1
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG
            java.lang.Object[] r8 = new java.lang.Object[r6]
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r9 = r9.getStackTrace()
            r6 = r9[r6]
            r8[r5] = r6
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r1
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            r8[r4] = r1
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r8[r3] = r1
            java.lang.String r0 = java.lang.String.format(r0, r8)
            android.util.Log.d(r7, r0)
        Lb1:
            throw r12
    }

    private static void sendIntent2Client(java.util.Map<java.lang.String, com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord> r3, android.content.Intent r4, boolean r5) {
            java.util.Collection r3 = r3.values()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L45
            java.lang.Object r0 = r3.next()
            com.qihoo360.loader2.PluginProcessMain$ProcessClientRecord r0 = (com.qihoo360.loader2.PluginProcessMain.ProcessClientRecord) r0
            boolean r1 = isBinderAlive(r0)
            if (r1 != 0) goto L1b
            goto L8
        L1b:
            if (r5 == 0) goto L23
            com.qihoo360.loader2.IPluginClient r0 = r0.client     // Catch: java.lang.Throwable -> L29
            r0.sendIntentSync(r4)     // Catch: java.lang.Throwable -> L29
            goto L8
        L23:
            com.qihoo360.loader2.IPluginClient r0 = r0.client     // Catch: java.lang.Throwable -> L29
            r0.sendIntent(r4)     // Catch: java.lang.Throwable -> L29
            goto L8
        L29:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "p.p sic e: "
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r2, r1, r0)
            goto L8
        L45:
            return
    }

    static final void sendIntent2Plugin(java.lang.String r1, android.content.Intent r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.qihoo360.loader2.PluginProcessMain$5 r0 = new com.qihoo360.loader2.PluginProcessMain$5
            r0.<init>(r1)
            java.lang.Object r1 = readProcessClientLock(r0)
            java.util.Map r1 = (java.util.Map) r1
            sendIntent2Client(r1, r2, r3)
            return
    }

    static final void sendIntent2Process(java.lang.String r1, android.content.Intent r2, boolean r3) {
            com.qihoo360.loader2.PluginProcessMain$4 r0 = new com.qihoo360.loader2.PluginProcessMain$4
            r0.<init>(r1)
            java.lang.Object r1 = readProcessClientLock(r0)
            java.util.Map r1 = (java.util.Map) r1
            sendIntent2Client(r1, r2, r3)
            return
    }

    static final int sumActivities() {
            com.qihoo360.loader2.PluginProcessMain$7 r0 = new com.qihoo360.loader2.PluginProcessMain$7
            r0.<init>()
            java.lang.Object r0 = readProcessClientLock(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    static final int sumBinders(int r0) {
            int r0 = com.qihoo360.loader2.StubProcessManager.sumBinders(r0)
            return r0
    }

    private static <T> T writeProcessClientLock(com.qihoo360.loader2.PluginProcessMain.Action<T> r12) {
            java.lang.String r0 = "%s(%sms@%s) WRITING DONE"
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 2
            r4 = 1
            r5 = 0
            r6 = 3
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock r7 = r7.writeLock()     // Catch: java.lang.Throwable -> L7b
            r7.lock()     // Catch: java.lang.Throwable -> L7b
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L7b
            if (r7 == 0) goto L41
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG     // Catch: java.lang.Throwable -> L7b
            java.lang.String r8 = "%s(%sms@%s) WRITING"
            java.lang.Object[] r9 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L7b
            java.lang.Thread r10 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L7b
            java.lang.StackTraceElement[] r10 = r10.getStackTrace()     // Catch: java.lang.Throwable -> L7b
            r10 = r10[r6]     // Catch: java.lang.Throwable -> L7b
            r9[r5] = r10     // Catch: java.lang.Throwable -> L7b
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7b
            long r10 = r10 - r1
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Throwable -> L7b
            r9[r4] = r10     // Catch: java.lang.Throwable -> L7b
            java.lang.Thread r10 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L7b
            r9[r3] = r10     // Catch: java.lang.Throwable -> L7b
            java.lang.String r8 = java.lang.String.format(r8, r9)     // Catch: java.lang.Throwable -> L7b
            android.util.Log.d(r7, r8)     // Catch: java.lang.Throwable -> L7b
        L41:
            java.lang.Object r12 = r12.call()     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK
            java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock r7 = r7.writeLock()
            r7.unlock()
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L7a
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG
            java.lang.Object[] r8 = new java.lang.Object[r6]
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r9 = r9.getStackTrace()
            r6 = r9[r6]
            r8[r5] = r6
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r1
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            r8[r4] = r1
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r8[r3] = r1
            java.lang.String r0 = java.lang.String.format(r0, r8)
            android.util.Log.d(r7, r0)
        L7a:
            return r12
        L7b:
            r12 = move-exception
            java.util.concurrent.locks.ReentrantReadWriteLock r7 = com.qihoo360.loader2.PluginProcessMain.PROCESS_CLIENT_LOCK
            java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock r7 = r7.writeLock()
            r7.unlock()
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto Lb1
            java.lang.String r7 = com.qihoo360.loader2.PluginProcessMain.TAG
            java.lang.Object[] r8 = new java.lang.Object[r6]
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r9 = r9.getStackTrace()
            r6 = r9[r6]
            r8[r5] = r6
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r1
            java.lang.Long r1 = java.lang.Long.valueOf(r5)
            r8[r4] = r1
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r8[r3] = r1
            java.lang.String r0 = java.lang.String.format(r0, r8)
            android.util.Log.d(r7, r0)
        Lb1:
            throw r12
    }
}
