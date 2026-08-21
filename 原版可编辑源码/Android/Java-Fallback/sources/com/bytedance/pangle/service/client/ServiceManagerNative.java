package com.bytedance.pangle.service.client;

public class ServiceManagerNative {
    private static volatile com.bytedance.pangle.service.client.ServiceManagerNative sInstance;
    private java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.pm.ServiceInfo>> conn2Service;
    public java.util.HashMap<android.os.IBinder, java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.ComponentName>>> process2ConnAndService;
    private final java.util.HashMap<android.content.ServiceConnection, com.bytedance.pangle.f> serviceConn2ServiceConn;


    private ServiceManagerNative() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.serviceConn2ServiceConn = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.process2ConnAndService = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.conn2Service = r0
            return
    }

    public static com.bytedance.pangle.service.client.ServiceManagerNative getInstance() {
            com.bytedance.pangle.service.client.ServiceManagerNative r0 = com.bytedance.pangle.service.client.ServiceManagerNative.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.service.client.ServiceManagerNative> r0 = com.bytedance.pangle.service.client.ServiceManagerNative.class
            monitor-enter(r0)
            com.bytedance.pangle.service.client.ServiceManagerNative r1 = com.bytedance.pangle.service.client.ServiceManagerNative.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.service.client.ServiceManagerNative r1 = new com.bytedance.pangle.service.client.ServiceManagerNative     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.service.client.ServiceManagerNative.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.service.client.ServiceManagerNative r0 = com.bytedance.pangle.service.client.ServiceManagerNative.sInstance
            return r0
    }

    public boolean bindServiceNative(android.content.Context r4, android.content.Intent r5, android.content.ServiceConnection r6, int r7, java.lang.String r8) {
            r3 = this;
            android.content.pm.ServiceInfo r0 = r3.queryServiceFromPlugin(r5, r8)
            if (r0 != 0) goto Lb
            boolean r4 = r4.bindService(r5, r6, r7)
            return r4
        Lb:
            java.util.HashMap<android.content.ServiceConnection, com.bytedance.pangle.f> r4 = r3.serviceConn2ServiceConn
            boolean r4 = r4.containsKey(r6)
            if (r4 != 0) goto L1d
            java.util.HashMap<android.content.ServiceConnection, com.bytedance.pangle.f> r4 = r3.serviceConn2ServiceConn
            com.bytedance.pangle.service.client.ServiceManagerNative$1 r1 = new com.bytedance.pangle.service.client.ServiceManagerNative$1
            r1.<init>(r3, r6)
            r4.put(r6, r1)
        L1d:
            java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.pm.ServiceInfo>> r4 = r3.conn2Service
            java.lang.Object r4 = r4.get(r6)
            if (r4 != 0) goto L2f
            java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.pm.ServiceInfo>> r4 = r3.conn2Service
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r4.put(r6, r1)
        L2f:
            java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.pm.ServiceInfo>> r4 = r3.conn2Service
            java.lang.Object r4 = r4.get(r6)
            java.util.HashSet r4 = (java.util.HashSet) r4
            r4.add(r0)
            java.lang.String r4 = r0.processName
            com.bytedance.pangle.d r4 = com.bytedance.pangle.servermanager.b.a(r4)
            android.os.IBinder r0 = r4.asBinder()
            java.util.HashMap<android.os.IBinder, java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.ComponentName>>> r1 = r3.process2ConnAndService
            java.lang.Object r1 = r1.get(r0)
            java.util.HashMap r1 = (java.util.HashMap) r1
            if (r1 != 0) goto L58
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.HashMap<android.os.IBinder, java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.ComponentName>>> r2 = r3.process2ConnAndService
            r2.put(r0, r1)
        L58:
            java.lang.Object r0 = r1.get(r6)
            java.util.HashSet r0 = (java.util.HashSet) r0
            if (r0 != 0) goto L68
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.put(r6, r0)
        L68:
            android.content.ComponentName r1 = r5.getComponent()
            r0.add(r1)
            java.util.HashMap<android.content.ServiceConnection, com.bytedance.pangle.f> r0 = r3.serviceConn2ServiceConn     // Catch: android.os.RemoteException -> L7c
            java.lang.Object r6 = r0.get(r6)     // Catch: android.os.RemoteException -> L7c
            com.bytedance.pangle.f r6 = (com.bytedance.pangle.f) r6     // Catch: android.os.RemoteException -> L7c
            boolean r4 = r4.a(r5, r6, r7, r8)     // Catch: android.os.RemoteException -> L7c
            return r4
        L7c:
            r4 = move-exception
            java.lang.String r5 = "Zeus/service_pangle"
            java.lang.String r6 = "bindService failed!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r5, r6, r4)
            r4 = 0
            return r4
    }

    public android.content.pm.ServiceInfo queryServiceFromPlugin(android.content.Intent r2, java.lang.String r3) {
            r1 = this;
            com.bytedance.pangle.Zeus.loadPlugin(r3)
            android.content.ComponentName r2 = r2.getComponent()
            if (r2 != 0) goto Lb
            r2 = 0
            return r2
        Lb:
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r3 = r0.getPlugin(r3)
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r3 = r3.pluginServices
            java.lang.String r2 = r2.getClassName()
            java.lang.Object r2 = r3.get(r2)
            android.content.pm.ServiceInfo r2 = (android.content.pm.ServiceInfo) r2
            return r2
    }

    public android.content.ComponentName startServiceNative(android.content.Context r2, android.content.Intent r3, java.lang.String r4) {
            r1 = this;
            android.content.pm.ServiceInfo r0 = r1.queryServiceFromPlugin(r3, r4)
            if (r0 != 0) goto Lb
            android.content.ComponentName r2 = r2.startService(r3)
            return r2
        Lb:
            java.lang.String r2 = r0.processName     // Catch: android.os.RemoteException -> L16
            com.bytedance.pangle.d r2 = com.bytedance.pangle.servermanager.b.a(r2)     // Catch: android.os.RemoteException -> L16
            android.content.ComponentName r2 = r2.a(r3, r4)     // Catch: android.os.RemoteException -> L16
            return r2
        L16:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public boolean stopServiceNative(android.content.Context r2, android.content.Intent r3, java.lang.String r4) {
            r1 = this;
            android.content.pm.ServiceInfo r0 = r1.queryServiceFromPlugin(r3, r4)
            if (r0 != 0) goto Lb
            boolean r2 = r2.stopService(r3)
            return r2
        Lb:
            java.lang.String r2 = r0.processName     // Catch: android.os.RemoteException -> L16
            com.bytedance.pangle.d r2 = com.bytedance.pangle.servermanager.b.a(r2)     // Catch: android.os.RemoteException -> L16
            boolean r2 = r2.b(r3, r4)     // Catch: android.os.RemoteException -> L16
            return r2
        L16:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public void unbindServiceNative(android.content.ServiceConnection r4) {
            r3 = this;
            java.util.HashMap<android.content.ServiceConnection, java.util.HashSet<android.content.pm.ServiceInfo>> r0 = r3.conn2Service
            java.lang.Object r0 = r0.get(r4)
            java.util.HashSet r0 = (java.util.HashSet) r0
            if (r0 == 0) goto L31
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()
            android.content.pm.ServiceInfo r1 = (android.content.pm.ServiceInfo) r1
            java.lang.String r1 = r1.processName     // Catch: android.os.RemoteException -> L2c
            com.bytedance.pangle.d r1 = com.bytedance.pangle.servermanager.b.a(r1)     // Catch: android.os.RemoteException -> L2c
            java.util.HashMap<android.content.ServiceConnection, com.bytedance.pangle.f> r2 = r3.serviceConn2ServiceConn     // Catch: android.os.RemoteException -> L2c
            java.lang.Object r2 = r2.get(r4)     // Catch: android.os.RemoteException -> L2c
            com.bytedance.pangle.f r2 = (com.bytedance.pangle.f) r2     // Catch: android.os.RemoteException -> L2c
            r1.a(r2)     // Catch: android.os.RemoteException -> L2c
            goto Le
        L2c:
            r1 = move-exception
            r1.printStackTrace()
            goto Le
        L31:
            return
    }
}
