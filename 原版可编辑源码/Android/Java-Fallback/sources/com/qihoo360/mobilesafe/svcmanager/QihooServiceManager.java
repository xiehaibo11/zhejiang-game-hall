package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class QihooServiceManager {
    private static final boolean DEBUG = false;
    private static final android.os.IBinder PROCESS_DEATH_AGENT = null;
    private static final java.lang.String TAG = null;
    private static java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.os.IBinder>> sCache;
    private static com.qihoo360.mobilesafe.svcmanager.IServiceChannel sServerChannel;
    private static android.net.Uri sServiceChannelUri;

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "QihooServiceManager"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.QihooServiceManager> r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG = r0
            r0 = 0
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServiceChannelUri = r0
            android.os.Binder r0 = new android.os.Binder
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.PROCESS_DEATH_AGENT = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sCache = r0
            return
    }

    public QihooServiceManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean addService(android.content.Context r0, java.lang.String r1, android.os.IBinder r2) {
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = getServerChannel(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            r0.addService(r1, r2)     // Catch: android.os.RemoteException -> Lc
            goto L18
        Lc:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r1 == 0) goto L18
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r2 = "Add service failed..."
            android.util.Log.e(r1, r2, r0)
        L18:
            r0 = 1
            return r0
    }

    public static boolean addService(android.content.Context r0, java.lang.String r1, com.qihoo360.replugin.IBinderGetter r2) {
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = getServerChannel(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            r0.addServiceDelayed(r1, r2)     // Catch: android.os.RemoteException -> Lc
            goto L18
        Lc:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r1 == 0) goto L18
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r2 = "Add service failed..."
            android.util.Log.e(r1, r2, r0)
        L18:
            r0 = 1
            return r0
    }

    public static android.os.IBinder getPluginService(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            android.os.IBinder r0 = getService(r3, r5)
            if (r0 == 0) goto L7
            return r0
        L7:
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r1 = getServerChannel(r3)
            if (r1 != 0) goto Lf
            r3 = 0
            return r3
        Lf:
            android.os.IBinder r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.PROCESS_DEATH_AGENT     // Catch: android.os.RemoteException -> L19
            android.os.IBinder r0 = r1.getPluginService(r4, r5, r2)     // Catch: android.os.RemoteException -> L19
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.onPluginServiceObtained(r3, r4, r5, r0)     // Catch: android.os.RemoteException -> L19
            goto L25
        L19:
            r3 = move-exception
            boolean r4 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r4 == 0) goto L25
            java.lang.String r4 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r5 = "[getPluginService] Error when getting plugin service from service channel..."
            android.util.Log.e(r4, r5, r3)
        L25:
            return r0
    }

    static com.qihoo360.mobilesafe.svcmanager.IServiceChannel getServerChannel(android.content.Context r9) {
            java.lang.String r0 = "Error closing cursor: "
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r1 == 0) goto L20
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[getServerChannel] begin = "
            r2.append(r3)
            long r3 = android.os.SystemClock.elapsedRealtime()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r1, r2)
        L20:
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServerChannel
            if (r1 == 0) goto L3d
            android.os.IBinder r1 = r1.asBinder()
            boolean r1 = r1.isBinderAlive()
            if (r1 == 0) goto L3d
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServerChannel
            android.os.IBinder r1 = r1.asBinder()
            boolean r1 = r1.pingBinder()
            if (r1 == 0) goto L3d
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r9 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServerChannel
            return r9
        L3d:
            boolean r1 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r1 == 0) goto L46
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel$Stub r9 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServiceChannelImpl
            return r9
        L46:
            r1 = 0
            if (r9 != 0) goto L4a
            return r1
        L4a:
            android.content.ContentResolver r2 = r9.getContentResolver()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
            android.net.Uri r3 = getServiceChannelUri()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r9 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L81
            android.os.IBinder r2 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor.getBinder(r9)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r1 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServerChannel = r1     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r9 == 0) goto L9f
            r9.close()     // Catch: java.lang.Exception -> L6a
            goto L9f
        L6a:
            r9 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r2 == 0) goto L9f
            java.lang.String r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            android.util.Log.e(r2, r0, r9)
            goto L9f
        L75:
            r1 = move-exception
            goto Lbe
        L77:
            r2 = move-exception
            r8 = r1
            r1 = r9
            r9 = r8
            goto L83
        L7c:
            r9 = move-exception
            r8 = r1
            r1 = r9
            r9 = r8
            goto Lbe
        L81:
            r2 = move-exception
            r9 = r1
        L83:
            boolean r3 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG     // Catch: java.lang.Throwable -> L7c
            if (r3 == 0) goto L8e
            java.lang.String r3 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG     // Catch: java.lang.Throwable -> L7c
            java.lang.String r4 = "Error fetching service manager binder object using provider: "
            android.util.Log.e(r3, r4, r2)     // Catch: java.lang.Throwable -> L7c
        L8e:
            if (r1 == 0) goto L9e
            r1.close()     // Catch: java.lang.Exception -> L94
            goto L9e
        L94:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r2 == 0) goto L9e
            java.lang.String r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            android.util.Log.e(r2, r0, r1)
        L9e:
            r1 = r9
        L9f:
            boolean r9 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r9 == 0) goto Lbd
            java.lang.String r9 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "[getServerChannel] end = "
            r0.append(r2)
            long r2 = android.os.SystemClock.elapsedRealtime()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r9, r0)
        Lbd:
            return r1
        Lbe:
            if (r9 == 0) goto Lce
            r9.close()     // Catch: java.lang.Exception -> Lc4
            goto Lce
        Lc4:
            r9 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r2 == 0) goto Lce
            java.lang.String r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            android.util.Log.e(r2, r0, r9)
        Lce:
            throw r1
    }

    public static android.os.IBinder getService(android.content.Context r5, java.lang.String r6) {
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r0 == 0) goto L1e
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[getService] begin = "
            r1.append(r2)
            long r2 = android.os.SystemClock.elapsedRealtime()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
        L1e:
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.os.IBinder>> r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sCache
            java.lang.Object r0 = r0.get(r6)
            java.lang.ref.SoftReference r0 = (java.lang.ref.SoftReference) r0
            java.lang.String r1 = "[getService] end = "
            r2 = 0
            if (r0 == 0) goto L78
            java.lang.Object r0 = r0.get()
            android.os.IBinder r0 = (android.os.IBinder) r0
            if (r0 == 0) goto L79
            boolean r3 = r0.isBinderAlive()
            if (r3 == 0) goto L72
            boolean r3 = r0.pingBinder()
            if (r3 == 0) goto L72
            boolean r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r5 == 0) goto L71
            java.lang.String r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[getService] Found service from cache: "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            android.util.Log.d(r5, r6)
            java.lang.String r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r5, r6)
        L71:
            return r0
        L72:
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.os.IBinder>> r3 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sCache
            r3.remove(r6)
            goto L79
        L78:
            r0 = r2
        L79:
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r3 = getServerChannel(r5)
            if (r3 != 0) goto L80
            return r2
        L80:
            android.os.IBinder r0 = r3.getService(r6)     // Catch: android.os.RemoteException -> Laf
            if (r0 == 0) goto Lbb
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG     // Catch: android.os.RemoteException -> Laf
            if (r2 == 0) goto La0
            java.lang.String r2 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG     // Catch: android.os.RemoteException -> Laf
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: android.os.RemoteException -> Laf
            r3.<init>()     // Catch: android.os.RemoteException -> Laf
            java.lang.String r4 = "[getService] Found service from remote service channel: "
            r3.append(r4)     // Catch: android.os.RemoteException -> Laf
            r3.append(r6)     // Catch: android.os.RemoteException -> Laf
            java.lang.String r3 = r3.toString()     // Catch: android.os.RemoteException -> Laf
            android.util.Log.d(r2, r3)     // Catch: android.os.RemoteException -> Laf
        La0:
            android.os.IBinder r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.factory(r5, r6, r0)     // Catch: android.os.RemoteException -> Laf
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.os.IBinder>> r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sCache     // Catch: android.os.RemoteException -> Laf
            java.lang.ref.SoftReference r2 = new java.lang.ref.SoftReference     // Catch: android.os.RemoteException -> Laf
            r2.<init>(r0)     // Catch: android.os.RemoteException -> Laf
            r5.put(r6, r2)     // Catch: android.os.RemoteException -> Laf
            goto Lbb
        Laf:
            r5 = move-exception
            boolean r6 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r6 == 0) goto Lbb
            java.lang.String r6 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r2 = "[getService] Error when getting service from service channel..."
            android.util.Log.e(r6, r2, r5)
        Lbb:
            boolean r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r5 == 0) goto Ld7
            java.lang.String r5 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r5, r6)
        Ld7:
            return r0
    }

    static android.net.Uri getServiceChannelUri() {
            android.net.Uri r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServiceChannelUri
            if (r0 != 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.ServiceProvider.AUTHORITY
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r1 = "severchannel"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServiceChannelUri = r0
        L27:
            android.net.Uri r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.sServiceChannelUri
            return r0
    }

    static void onPluginServiceReleased(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = getServerChannel(r0)
            if (r0 == 0) goto L16
            r0.onPluginServiceRefReleased(r1, r2)     // Catch: android.os.RemoteException -> La
            goto L16
        La:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r1 == 0) goto L16
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r2 = "Error releaseing plugin service reference: "
            android.util.Log.d(r1, r2, r0)
        L16:
            return
    }

    public static boolean removeService(android.content.Context r0, java.lang.String r1, android.os.IBinder r2) {
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = getServerChannel(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            r0.removeService(r1)     // Catch: android.os.RemoteException -> Lc
            goto L18
        Lc:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.DEBUG
            if (r1 == 0) goto L18
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.TAG
            java.lang.String r2 = "Remove service failed..."
            android.util.Log.e(r1, r2, r0)
        L18:
            r0 = 1
            return r0
    }
}
