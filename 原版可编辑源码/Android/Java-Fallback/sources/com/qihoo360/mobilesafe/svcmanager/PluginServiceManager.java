package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginServiceManager {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = null;
    private static java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> sRecordMap;

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "PluginServiceManager"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.PluginServiceManager> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.TAG = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap = r0
            return
    }

    PluginServiceManager() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String generateMapKey(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    static android.os.IBinder getPluginService(java.lang.String r4, java.lang.String r5, int r6, android.os.IBinder r7) throws android.os.RemoteException {
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap
            monitor-enter(r0)
            java.lang.String r1 = generateMapKey(r4, r5)     // Catch: java.lang.Throwable -> L2a
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r2 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap     // Catch: java.lang.Throwable -> L2a
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L2a
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r2 = (com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord) r2     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L18
            boolean r3 = r2.isServiceAlive()     // Catch: java.lang.Throwable -> L2a
            if (r3 != 0) goto L18
            r2 = 0
        L18:
            if (r2 != 0) goto L24
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r2 = new com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord     // Catch: java.lang.Throwable -> L2a
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L2a
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r4 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap     // Catch: java.lang.Throwable -> L2a
            r4.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            android.os.IBinder r4 = r2.getService(r6, r7)
            return r4
        L2a:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            throw r4
    }

    static void onRefProcessDied(java.lang.String r3, java.lang.String r4, int r5) {
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = generateMapKey(r3, r4)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L36
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r3 = (com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord) r3     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L34
            int r4 = r3.refProcessDied(r5)     // Catch: java.lang.Throwable -> L36
            boolean r5 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.DEBUG     // Catch: java.lang.Throwable -> L36
            if (r5 == 0) goto L2f
            java.lang.String r5 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.TAG     // Catch: java.lang.Throwable -> L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r1.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "[onRefProcessDied] remaining ref count: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L36
            r1.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L36
            android.util.Log.d(r5, r1)     // Catch: java.lang.Throwable -> L36
        L2f:
            if (r4 > 0) goto L34
            removePluginServiceRecord(r3)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return
        L36:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r3
    }

    static void onRefReleased(java.lang.String r3, java.lang.String r4, int r5) {
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = generateMapKey(r3, r4)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L36
            com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r3 = (com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord) r3     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L34
            int r4 = r3.decrementProcessRef(r5)     // Catch: java.lang.Throwable -> L36
            boolean r5 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.DEBUG     // Catch: java.lang.Throwable -> L36
            if (r5 == 0) goto L2f
            java.lang.String r5 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.TAG     // Catch: java.lang.Throwable -> L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r1.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "[onRefReleased] remaining ref count: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L36
            r1.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L36
            android.util.Log.d(r5, r1)     // Catch: java.lang.Throwable -> L36
        L2f:
            if (r4 > 0) goto L34
            removePluginServiceRecord(r3)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return
        L36:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r3
    }

    private static void removePluginServiceRecord(com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord r3) {
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.DEBUG
            if (r0 == 0) goto L26
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[removePluginServiceRecord]: "
            r1.append(r2)
            java.lang.String r2 = r3.mPluginName
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            java.lang.String r2 = r3.mServiceName
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
        L26:
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap
            monitor-enter(r0)
            java.lang.String r1 = r3.mPluginName     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r3.mServiceName     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = generateMapKey(r1, r2)     // Catch: java.lang.Throwable -> L4a
            com.qihoo360.loader2.MP$PluginBinder r2 = r3.mPluginBinder     // Catch: java.lang.Throwable -> L4a
            if (r2 != 0) goto L3e
            java.lang.String r3 = "ws001"
            java.lang.String r1 = "psm.rpsr: mpb nil"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r1)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            return
        L3e:
            com.qihoo360.loader2.MP$PluginBinder r3 = r3.mPluginBinder     // Catch: java.lang.Throwable -> L4a
            com.qihoo360.loader2.MP.releasePluginBinder(r3)     // Catch: java.lang.Throwable -> L4a
            java.util.Map<java.lang.String, com.qihoo360.mobilesafe.svcmanager.PluginServiceRecord> r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceManager.sRecordMap     // Catch: java.lang.Throwable -> L4a
            r3.remove(r1)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            return
        L4a:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            throw r3
    }
}
