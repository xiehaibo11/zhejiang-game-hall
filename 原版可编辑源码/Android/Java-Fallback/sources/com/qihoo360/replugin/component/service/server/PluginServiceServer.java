package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceServer {
    private static final byte[] LOCKER = null;
    private static final java.lang.String TAG = "PluginServiceServer";
    private static final int WHAT_ON_START_COMMAND = 1;
    private java.lang.reflect.Method mAttachBaseContextMethod;
    private final android.content.Context mContext;
    private android.os.Handler mHandler;
    final com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.ProcessRecord> mProcesses;
    final com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> mServiceConnections;
    private final com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent.FilterComparison, com.qihoo360.replugin.component.service.server.ServiceRecord> mServicesByIntent;
    private final com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> mServicesByName;
    private final com.qihoo360.replugin.component.service.server.PluginServiceServer.Stub mStub;



    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class Stub extends com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub {
        final com.qihoo360.replugin.component.service.server.PluginServiceServer this$0;

        Stub(com.qihoo360.replugin.component.service.server.PluginServiceServer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public int bindService(android.content.Intent r3, com.qihoo360.loader2.mgr.IServiceConnection r4, int r5, android.os.Messenger r6) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$100()
                monitor-enter(r0)
                com.qihoo360.replugin.component.service.server.PluginServiceServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                int r3 = r1.bindServiceLocked(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }

        @Override
        public java.lang.String dump() throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$100()
                monitor-enter(r0)
                com.qihoo360.replugin.component.service.server.PluginServiceServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                java.lang.String r1 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$200(r1)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r1
            Ld:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r1
        }

        @Override
        public android.content.ComponentName startService(android.content.Intent r3, android.os.Messenger r4) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$100()
                monitor-enter(r0)
                com.qihoo360.replugin.component.service.server.PluginServiceServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                android.content.ComponentName r3 = r1.startServiceLocked(r3, r4)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }

        @Override
        public int stopService(android.content.Intent r2, android.os.Messenger r3) throws android.os.RemoteException {
                r1 = this;
                byte[] r3 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$100()
                monitor-enter(r3)
                com.qihoo360.replugin.component.service.server.PluginServiceServer r0 = r1.this$0     // Catch: java.lang.Throwable -> Ld
                int r2 = r0.stopServiceLocked(r2)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Ld
                return r2
            Ld:
                r2 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Ld
                throw r2
        }

        @Override
        public boolean unbindService(com.qihoo360.loader2.mgr.IServiceConnection r3) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.component.service.server.PluginServiceServer.access$100()
                monitor-enter(r0)
                com.qihoo360.replugin.component.service.server.PluginServiceServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                boolean r3 = r1.unbindServiceLocked(r3)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }
    }

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.component.service.server.PluginServiceServer.LOCKER = r0
            return
    }

    public PluginServiceServer(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r2.mProcesses = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r2.mServiceConnections = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r2.mServicesByName = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r2.mServicesByIntent = r0
            com.qihoo360.replugin.component.service.server.PluginServiceServer$1 r0 = new com.qihoo360.replugin.component.service.server.PluginServiceServer$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.mHandler = r0
            r2.mContext = r3
            com.qihoo360.replugin.component.service.server.PluginServiceServer$Stub r3 = new com.qihoo360.replugin.component.service.server.PluginServiceServer$Stub
            r3.<init>(r2)
            r2.mStub = r3
            return
    }

    static boolean access$000(com.qihoo360.replugin.component.service.server.PluginServiceServer r0, com.qihoo360.replugin.component.service.server.ServiceRecord r1) {
            boolean r0 = r0.installServiceLocked(r1)
            return r0
    }

    static byte[] access$100() {
            byte[] r0 = com.qihoo360.replugin.component.service.server.PluginServiceServer.LOCKER
            return r0
    }

    static java.lang.String access$200(com.qihoo360.replugin.component.service.server.PluginServiceServer r0) {
            java.lang.String r0 = r0.dump()
            return r0
    }

    private void attachBaseContextLocked(android.content.ContextWrapper r6, android.content.Context r7) throws java.lang.NoSuchMethodException, java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException {
            r5 = this;
            java.lang.reflect.Method r0 = r5.mAttachBaseContextMethod
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L19
            java.lang.Class<android.content.ContextWrapper> r0 = android.content.ContextWrapper.class
            java.lang.Class[] r3 = new java.lang.Class[r2]
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r1] = r4
            java.lang.String r4 = "attachBaseContext"
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r4, r3)
            r5.mAttachBaseContextMethod = r0
            r0.setAccessible(r2)
        L19:
            java.lang.reflect.Method r0 = r5.mAttachBaseContextMethod
            java.lang.Object[] r3 = new java.lang.Object[r2]
            r3[r1] = r7
            r0.invoke(r6, r3)
            java.lang.Class<android.app.Service> r0 = android.app.Service.class
            java.lang.String r1 = "mApplication"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)
            if (r0 == 0) goto L36
            r0.setAccessible(r2)
            android.content.Context r7 = r7.getApplicationContext()
            r0.set(r6, r7)
        L36:
            return
    }

    private void callConnectedMethodLocked(com.qihoo360.loader2.mgr.IServiceConnection r1, android.content.ComponentName r2, android.os.IBinder r3) {
            r0 = this;
            r1.connected(r2, r3)     // Catch: android.os.RemoteException -> L4
            goto Lc
        L4:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto Lc
            r1.printStackTrace()
        Lc:
            return
    }

    private android.content.Intent cloneIntentLocked(android.content.Intent r2) {
            r1 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2)
            return r0
    }

    private java.lang.String dump() {
            r6 = this;
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r0 = r6.mServicesByName
            if (r0 == 0) goto L6a
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            goto L6a
        Lb:
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r1 = r6.mServicesByName
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L1a:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L65
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            android.content.ComponentName r3 = (android.content.ComponentName) r3
            java.lang.Object r2 = r2.getValue()
            com.qihoo360.replugin.component.service.server.ServiceRecord r2 = (com.qihoo360.replugin.component.service.server.ServiceRecord) r2
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r3 = r3.getClassName()
            java.lang.String r5 = "className"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            android.content.pm.ServiceInfo r3 = r2.getServiceInfo()
            java.lang.String r3 = r3.processName
            java.lang.String r5 = "process"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            java.lang.String r3 = r2.getPlugin()
            java.lang.String r5 = "plugin"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            android.content.ComponentName r2 = r2.getPitComponentName()
            java.lang.String r2 = r2.getClassName()
            java.lang.String r3 = "pitClassName"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r3, r2)
            r0.put(r4)
            goto L1a
        L65:
            java.lang.String r0 = r0.toString()
            return r0
        L6a:
            r0 = 0
            return r0
    }

    private android.content.ComponentName getPitComponentName() {
            r2 = this;
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            java.lang.Integer r0 = com.qihoo360.replugin.component.utils.PluginClientHelper.getProcessInt(r0)
            int r0 = r0.intValue()
            android.content.Context r1 = r2.mContext
            android.content.ComponentName r0 = com.qihoo360.replugin.component.service.server.PluginPitService.makeComponentName(r1, r0)
            return r0
    }

    private com.qihoo360.replugin.component.service.server.ServiceRecord getServiceLocked(android.content.Intent r2) {
            r1 = this;
            android.content.ComponentName r2 = r2.getComponent()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r0 = r1.mServicesByName
            java.lang.Object r2 = r0.get(r2)
            com.qihoo360.replugin.component.service.server.ServiceRecord r2 = (com.qihoo360.replugin.component.service.server.ServiceRecord) r2
            return r2
    }

    private void insertConnectionToRecords(com.qihoo360.replugin.component.service.server.ServiceRecord r2, com.qihoo360.replugin.component.service.server.ProcessBindRecord r3, com.qihoo360.loader2.mgr.IServiceConnection r4, int r5) {
            r1 = this;
            com.qihoo360.replugin.component.service.server.ConnectionBindRecord r0 = new com.qihoo360.replugin.component.service.server.ConnectionBindRecord
            r0.<init>(r3, r4, r5)
            android.os.IBinder r4 = r4.asBinder()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r5 = r2.connections
            java.lang.Object r5 = r5.get(r4)
            java.util.ArrayList r5 = (java.util.ArrayList) r5
            if (r5 != 0) goto L1d
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r2 = r2.connections
            r2.put(r4, r5)
        L1d:
            r5.add(r0)
            com.qihoo360.replugin.utils.basic.ArraySet<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r2 = r3.connections
            r2.add(r0)
            com.qihoo360.replugin.component.service.server.ProcessRecord r2 = r3.client
            java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r2 = r2.connections
            r2.add(r0)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r2 = r1.mServiceConnections
            java.lang.Object r2 = r2.get(r4)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 != 0) goto L40
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r1.mServiceConnections
            r3.put(r4, r2)
        L40:
            r2.add(r0)
            return
    }

    private boolean installServiceIfNeededLocked(com.qihoo360.replugin.component.service.server.ServiceRecord r4) {
            r3 = this;
            android.app.Service r0 = r4.service
            if (r0 == 0) goto L6
            r4 = 1
            return r4
        L6:
            r0 = 0
            com.qihoo360.replugin.component.service.server.PluginServiceServer$2 r1 = new com.qihoo360.replugin.component.service.server.PluginServiceServer$2     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L1c
            r4 = 6000(0x1770, float:8.408E-42)
            java.lang.Object r4 = com.qihoo360.replugin.base.ThreadUtils.syncToMainThread(r1, r4)     // Catch: java.lang.Throwable -> L1c
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Throwable -> L1c
            if (r4 != 0) goto L17
            return r0
        L17:
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Throwable -> L1c
            return r4
        L1c:
            r4 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L28
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "pss.isinl e:"
            com.qihoo360.replugin.helper.LogDebug.e(r1, r2, r4)
        L28:
            return r0
    }

    private boolean installServiceLocked(com.qihoo360.replugin.component.service.server.ServiceRecord r7) {
            r6 = this;
            java.lang.String r0 = r7.plugin
            android.content.Context r0 = com.qihoo360.i.Factory.queryPluginContext(r0)
            java.lang.String r1 = "PluginServiceServer"
            r2 = 0
            if (r0 != 0) goto L26
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "installServiceLocked(): Fetch Context Error! pn="
            r0.append(r3)
            java.lang.String r7 = r7.plugin
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            android.util.Log.e(r1, r7)
        L25:
            return r2
        L26:
            java.lang.ClassLoader r3 = r0.getClassLoader()
            java.lang.String r4 = "ws001"
            if (r3 != 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "psm.is: cl n "
            r0.append(r1)
            java.lang.String r7 = r7.className
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r4, r7)
            return r2
        L45:
            android.content.pm.ServiceInfo r5 = r7.serviceInfo     // Catch: java.lang.Throwable -> L6d
            java.lang.String r5 = r5.name     // Catch: java.lang.Throwable -> L6d
            java.lang.Class r3 = r3.loadClass(r5)     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.Throwable -> L6d
            android.app.Service r3 = (android.app.Service) r3     // Catch: java.lang.Throwable -> L6d
            r6.attachBaseContextLocked(r3, r0)     // Catch: java.lang.Throwable -> L66
            r3.onCreate()
            r7.service = r3
            android.content.ComponentName r0 = r6.getPitComponentName()
            r7.pitComponentName = r0
            r6.startPitService(r0)
            r7 = 1
            return r7
        L66:
            r7 = move-exception
            java.lang.String r0 = "psm.is: abc e"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r0, r7)
            return r2
        L6d:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "isl: ni f "
            r3.append(r4)
            java.lang.String r7 = r7.plugin
            r3.append(r7)
            java.lang.String r7 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r7, r0)
            return r2
    }

    private void recycleServiceIfNeededLocked(com.qihoo360.replugin.component.service.server.ServiceRecord r4) {
            r3 = this;
            boolean r0 = r4.startRequested
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L1f
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "PSM.recycleServiceIfNeededLocked(): Not Recycle because startRequested is true! sr="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r4)
        L1e:
            return
        L1f:
            boolean r0 = r4.hasAutoCreateConnections()
            if (r0 == 0) goto L3e
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "PSM.recycleServiceIfNeededLocked(): Not Recycle because bindingCount > 0! sr="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r4)
        L3d:
            return
        L3e:
            r3.recycleServiceLocked(r4)
            return
    }

    private void recycleServiceLocked(com.qihoo360.replugin.component.service.server.ServiceRecord r8) {
            r7 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "PSM.recycleServiceLocked(): Recycle Now!"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r1)
        Lb:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r0 = r8.connections
            int r0 = r0.size()
            r1 = 1
            int r0 = r0 - r1
        L13:
            if (r0 < 0) goto L3a
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r2 = r8.connections
            java.lang.Object r2 = r2.valueAt(r0)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            r3 = 0
        L1e:
            int r4 = r2.size()
            if (r3 >= r4) goto L37
            java.lang.Object r4 = r2.get(r3)
            com.qihoo360.replugin.component.service.server.ConnectionBindRecord r4 = (com.qihoo360.replugin.component.service.server.ConnectionBindRecord) r4
            r4.serviceDead = r1
            com.qihoo360.loader2.mgr.IServiceConnection r4 = r4.conn
            android.content.ComponentName r5 = r8.name
            r6 = 0
            r7.callConnectedMethodLocked(r4, r5, r6)
            int r3 = r3 + 1
            goto L1e
        L37:
            int r0 = r0 + (-1)
            goto L13
        L3a:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r0 = r7.mServicesByName
            android.content.ComponentName r1 = r8.name
            r0.remove(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.ServiceRecord> r0 = r7.mServicesByIntent
            android.content.Intent$FilterComparison r1 = r8.intent
            r0.remove(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r0 = r8.bindings
            int r0 = r0.size()
            if (r0 <= 0) goto L55
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.IntentBindRecord> r0 = r8.bindings
            r0.clear()
        L55:
            android.app.Service r0 = r8.service
            r0.onDestroy()
            android.content.ComponentName r0 = r7.getPitComponentName()
            r8.pitComponentName = r0
            r7.stopPitService(r0)
            return
    }

    private void removeConnectionLocked(com.qihoo360.replugin.component.service.server.ConnectionBindRecord r6) {
            r5 = this;
            com.qihoo360.loader2.mgr.IServiceConnection r0 = r6.conn
            android.os.IBinder r0 = r0.asBinder()
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r1 = r6.binding
            com.qihoo360.replugin.component.service.server.ServiceRecord r2 = r1.service
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r2.connections
            java.lang.Object r3 = r3.get(r0)
            java.util.ArrayList r3 = (java.util.ArrayList) r3
            if (r3 == 0) goto L22
            r3.remove(r6)
            int r3 = r3.size()
            if (r3 != 0) goto L22
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r2.connections
            r3.remove(r0)
        L22:
            com.qihoo360.replugin.utils.basic.ArraySet<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r3 = r1.connections
            r3.remove(r6)
            com.qihoo360.replugin.component.service.server.ProcessRecord r3 = r1.client
            java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r3 = r3.connections
            r3.remove(r6)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r5.mServiceConnections
            java.lang.Object r3 = r3.get(r0)
            java.util.ArrayList r3 = (java.util.ArrayList) r3
            if (r3 == 0) goto L46
            r3.remove(r6)
            int r3 = r3.size()
            if (r3 != 0) goto L46
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r3 = r5.mServiceConnections
            r3.remove(r0)
        L46:
            com.qihoo360.replugin.utils.basic.ArraySet<com.qihoo360.replugin.component.service.server.ConnectionBindRecord> r0 = r1.connections
            int r0 = r0.size()
            if (r0 != 0) goto L57
            com.qihoo360.replugin.component.service.server.IntentBindRecord r0 = r1.intent
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r0 = r0.apps
            com.qihoo360.replugin.component.service.server.ProcessRecord r3 = r1.client
            r0.remove(r3)
        L57:
            boolean r0 = r6.serviceDead
            if (r0 == 0) goto L5c
            return
        L5c:
            com.qihoo360.replugin.component.service.server.IntentBindRecord r0 = r1.intent
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r0 = r0.apps
            int r0 = r0.size()
            java.lang.String r3 = "ws001"
            if (r0 != 0) goto La2
            com.qihoo360.replugin.component.service.server.IntentBindRecord r0 = r1.intent
            boolean r0 = r0.hasBound
            if (r0 == 0) goto La2
            com.qihoo360.replugin.component.service.server.IntentBindRecord r0 = r1.intent
            r4 = 0
            r0.hasBound = r4
            android.app.Service r0 = r2.service
            com.qihoo360.replugin.component.service.server.IntentBindRecord r1 = r1.intent
            android.content.Intent$FilterComparison r1 = r1.intent
            android.content.Intent r1 = r1.getIntent()
            r0.onUnbind(r1)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L98
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PSM.removeConnectionLocked(): boundRef is 0, call onUnbind(), sr="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r3, r0)
        L98:
            int r6 = r6.flags
            r6 = r6 & 1
            if (r6 == 0) goto Lba
            r5.recycleServiceIfNeededLocked(r2)
            goto Lba
        La2:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto Lba
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "PSM.removeConnectionLocked(): Not unbind, sr="
            r6.append(r0)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r3, r6)
        Lba:
            return
    }

    private com.qihoo360.replugin.component.service.server.ProcessRecord retrieveProcessRecordLocked(android.os.Messenger r4) {
            r3 = this;
            int r0 = android.os.Binder.getCallingPid()
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.ProcessRecord> r1 = r3.mProcesses
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            java.lang.Object r1 = r1.get(r2)
            com.qihoo360.replugin.component.service.server.ProcessRecord r1 = (com.qihoo360.replugin.component.service.server.ProcessRecord) r1
            if (r1 != 0) goto L20
            com.qihoo360.replugin.component.service.server.ProcessRecord r1 = new com.qihoo360.replugin.component.service.server.ProcessRecord
            r1.<init>(r0, r4)
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.ProcessRecord> r4 = r3.mProcesses
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r4.put(r0, r1)
        L20:
            return r1
    }

    private com.qihoo360.replugin.component.service.server.ServiceRecord retrieveServiceLocked(android.content.Intent r7) {
            r6 = this;
            android.content.ComponentName r0 = r7.getComponent()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r1 = r6.mServicesByName
            java.lang.Object r1 = r1.get(r0)
            com.qihoo360.replugin.component.service.server.ServiceRecord r1 = (com.qihoo360.replugin.component.service.server.ServiceRecord) r1
            if (r1 == 0) goto Lf
            return r1
        Lf:
            android.content.Intent$FilterComparison r1 = new android.content.Intent$FilterComparison
            r1.<init>(r7)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.ServiceRecord> r7 = r6.mServicesByIntent
            java.lang.Object r7 = r7.get(r1)
            com.qihoo360.replugin.component.service.server.ServiceRecord r7 = (com.qihoo360.replugin.component.service.server.ServiceRecord) r7
            if (r7 == 0) goto L1f
            return r7
        L1f:
            java.lang.String r7 = r0.getPackageName()
            java.lang.String r2 = r0.getClassName()
            boolean r3 = com.qihoo360.replugin.RePlugin.isPluginInstalled(r7)
            r4 = 0
            if (r3 != 0) goto L45
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "psm.is: p n ex "
            r7.append(r0)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r7)
            return r4
        L45:
            com.qihoo360.replugin.component.ComponentList r2 = com.qihoo360.i.Factory.queryPluginComponentList(r7)
            java.lang.String r3 = "PluginServiceServer"
            if (r2 != 0) goto L66
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L65
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "installServiceLocked(): Fetch Component List Error! pn="
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            android.util.Log.e(r3, r7)
        L65:
            return r4
        L66:
            java.lang.String r5 = r0.getClassName()
            android.content.pm.ServiceInfo r2 = r2.getService(r5)
            if (r2 != 0) goto L89
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L88
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "installServiceLocked(): Not register! pn="
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            android.util.Log.e(r3, r7)
        L88:
            return r4
        L89:
            com.qihoo360.replugin.component.service.server.ServiceRecord r7 = new com.qihoo360.replugin.component.service.server.ServiceRecord
            r7.<init>(r0, r1, r2)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r2 = r6.mServicesByName
            r2.put(r0, r7)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Intent$FilterComparison, com.qihoo360.replugin.component.service.server.ServiceRecord> r0 = r6.mServicesByIntent
            r0.put(r1, r7)
            return r7
    }

    private void startPitService(android.content.ComponentName r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "startPitService: Start "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginServiceServer"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.setComponent(r3)
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Exception -> L28
            r3.startService(r0)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()
        L2c:
            return
    }

    private void stopPitService(android.content.ComponentName r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "stopPitService: Stop "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginServiceServer"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.setComponent(r3)
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Exception -> L28
            r3.stopService(r0)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()
        L2c:
            return
    }

    int bindServiceLocked(android.content.Intent r5, com.qihoo360.loader2.mgr.IServiceConnection r6, int r7, android.os.Messenger r8) {
            r4 = this;
            android.content.Intent r5 = r4.cloneIntentLocked(r5)
            android.content.ComponentName r0 = r5.getComponent()
            com.qihoo360.replugin.component.service.server.ProcessRecord r8 = r4.retrieveProcessRecordLocked(r8)
            com.qihoo360.replugin.component.service.server.ServiceRecord r1 = r4.retrieveServiceLocked(r5)
            r2 = 0
            if (r1 != 0) goto L14
            return r2
        L14:
            boolean r3 = r4.installServiceIfNeededLocked(r1)
            if (r3 != 0) goto L1b
            return r2
        L1b:
            com.qihoo360.replugin.component.service.server.ProcessBindRecord r8 = r1.retrieveAppBindingLocked(r5, r8)
            r4.insertConnectionToRecords(r1, r8, r6, r7)
            com.qihoo360.replugin.component.service.server.IntentBindRecord r2 = r8.intent
            boolean r2 = r2.hasBound
            r3 = 1
            if (r2 == 0) goto L31
            com.qihoo360.replugin.component.service.server.IntentBindRecord r5 = r8.intent
            android.os.IBinder r5 = r5.binder
            r4.callConnectedMethodLocked(r6, r0, r5)
            goto L4e
        L31:
            com.qihoo360.replugin.component.service.server.IntentBindRecord r2 = r8.intent
            com.qihoo360.replugin.utils.basic.ArrayMap<com.qihoo360.replugin.component.service.server.ProcessRecord, com.qihoo360.replugin.component.service.server.ProcessBindRecord> r2 = r2.apps
            int r2 = r2.size()
            if (r2 <= 0) goto L4e
            android.app.Service r2 = r1.service
            android.os.IBinder r5 = r2.onBind(r5)
            com.qihoo360.replugin.component.service.server.IntentBindRecord r2 = r8.intent
            r2.hasBound = r3
            com.qihoo360.replugin.component.service.server.IntentBindRecord r2 = r8.intent
            r2.binder = r5
            if (r5 == 0) goto L4e
            r4.callConnectedMethodLocked(r6, r0, r5)
        L4e:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L78
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "PSM.bindService(): Bind! inb="
            r5.append(r6)
            r5.append(r8)
            java.lang.String r6 = "; fl="
            r5.append(r6)
            r5.append(r7)
            java.lang.String r6 = "; sr="
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r6, r5)
        L78:
            return r3
    }

    public com.qihoo360.replugin.component.service.server.IPluginServiceServer getService() {
            r1 = this;
            com.qihoo360.replugin.component.service.server.PluginServiceServer$Stub r0 = r1.mStub
            return r0
    }

    android.content.ComponentName startServiceLocked(android.content.Intent r5, android.os.Messenger r6) {
            r4 = this;
            android.content.Intent r5 = r4.cloneIntentLocked(r5)
            android.content.ComponentName r6 = r5.getComponent()
            com.qihoo360.replugin.component.service.server.ServiceRecord r0 = r4.retrieveServiceLocked(r5)
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            boolean r2 = r4.installServiceIfNeededLocked(r0)
            if (r2 != 0) goto L17
            return r1
        L17:
            r1 = 1
            r0.startRequested = r1
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.server.ServiceRecord> r2 = r4.mServicesByName
            r2.put(r6, r0)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L41
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PSM.startService(): Start! in="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = "; sr="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r3, r2)
        L41:
            android.os.Handler r2 = r4.mHandler
            android.os.Message r1 = r2.obtainMessage(r1)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            java.lang.String r3 = "intent"
            r2.putParcelable(r3, r5)
            r1.setData(r2)
            r1.obj = r0
            android.os.Handler r5 = r4.mHandler
            r5.sendMessage(r1)
            return r6
    }

    int stopServiceLocked(android.content.Intent r4) {
            r3 = this;
            android.content.Intent r4 = r3.cloneIntentLocked(r4)
            com.qihoo360.replugin.component.service.server.ServiceRecord r0 = r3.getServiceLocked(r4)
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            r0.startRequested = r1
            r3.recycleServiceIfNeededLocked(r0)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PSM.stopService(): Stop! in="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "; sr="
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r4)
        L33:
            r4 = 1
            return r4
    }

    boolean unbindServiceLocked(com.qihoo360.loader2.mgr.IServiceConnection r4) {
            r3 = this;
            android.os.IBinder r4 = r4.asBinder()
            com.qihoo360.replugin.utils.basic.ArrayMap<android.os.IBinder, java.util.ArrayList<com.qihoo360.replugin.component.service.server.ConnectionBindRecord>> r0 = r3.mServiceConnections
            java.lang.Object r4 = r0.get(r4)
            java.util.ArrayList r4 = (java.util.ArrayList) r4
            r0 = 0
            if (r4 != 0) goto L1b
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L1a
            java.lang.String r4 = "ws001"
            java.lang.String r1 = "PSM.unbindService(): clist is null!"
            com.qihoo360.replugin.helper.LogDebug.i(r4, r1)
        L1a:
            return r0
        L1b:
            int r1 = r4.size()
            if (r1 <= 0) goto L3a
            java.lang.Object r1 = r4.get(r0)
            com.qihoo360.replugin.component.service.server.ConnectionBindRecord r1 = (com.qihoo360.replugin.component.service.server.ConnectionBindRecord) r1
            r3.removeConnectionLocked(r1)
            int r2 = r4.size()
            if (r2 <= 0) goto L1b
            java.lang.Object r2 = r4.get(r0)
            if (r2 != r1) goto L1b
            r4.remove(r0)
            goto L1b
        L3a:
            r4 = 1
            return r4
    }
}
