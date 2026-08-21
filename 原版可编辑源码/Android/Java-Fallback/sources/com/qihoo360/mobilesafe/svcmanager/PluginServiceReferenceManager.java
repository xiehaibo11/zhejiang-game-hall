package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginServiceReferenceManager {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = null;
    private static android.content.Context sAppContext;
    private static java.lang.Thread sMonitorThread;
    private static java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.ServicePhantomRef> sRefList;
    private static java.lang.ref.ReferenceQueue<android.os.IBinder> sRefQueue;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class ServicePhantomRef extends java.lang.ref.PhantomReference<android.os.IBinder> {
        final java.lang.String pluginName;
        final java.lang.String serviceName;

        public ServicePhantomRef(java.lang.String r1, java.lang.String r2, android.os.IBinder r3, java.lang.ref.ReferenceQueue<? super android.os.IBinder> r4) {
                r0 = this;
                r0.<init>(r3, r4)
                r0.pluginName = r1
                r0.serviceName = r2
                return
        }
    }

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "PluginServiceReferenceManager"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.TAG = r0
            r0 = 0
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sAppContext = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefList = r1
            java.lang.ref.ReferenceQueue r1 = new java.lang.ref.ReferenceQueue
            r1.<init>()
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefQueue = r1
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread = r0
            return
    }

    PluginServiceReferenceManager() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.ArrayList access$000() {
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$ServicePhantomRef> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefList
            return r0
    }

    static java.lang.ref.ReferenceQueue access$100() {
            java.lang.ref.ReferenceQueue<android.os.IBinder> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefQueue
            return r0
    }

    static boolean access$200() {
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.DEBUG
            return r0
    }

    static java.lang.String access$300() {
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.TAG
            return r0
    }

    static android.content.Context access$400() {
            android.content.Context r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sAppContext
            return r0
    }

    static java.lang.Thread access$502(java.lang.Thread r0) {
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread = r0
            return r0
    }

    static synchronized void onPluginServiceObtained(android.content.Context r4, java.lang.String r5, java.lang.String r6, android.os.IBinder r7) {
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.class
            monitor-enter(r0)
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L25
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sAppContext = r4     // Catch: java.lang.Throwable -> L25
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$ServicePhantomRef> r4 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefList     // Catch: java.lang.Throwable -> L25
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L25
            java.util.ArrayList<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$ServicePhantomRef> r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefList     // Catch: java.lang.Throwable -> L22
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$ServicePhantomRef r2 = new com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$ServicePhantomRef     // Catch: java.lang.Throwable -> L22
            java.lang.ref.ReferenceQueue<android.os.IBinder> r3 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sRefQueue     // Catch: java.lang.Throwable -> L22
            r2.<init>(r5, r6, r7, r3)     // Catch: java.lang.Throwable -> L22
            r1.add(r2)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L22
            java.lang.Thread r4 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread     // Catch: java.lang.Throwable -> L25
            if (r4 != 0) goto L20
            startMonitoring()     // Catch: java.lang.Throwable -> L25
        L20:
            monitor-exit(r0)
            return
        L22:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L22
            throw r5     // Catch: java.lang.Throwable -> L25
        L25:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static synchronized void startMonitoring() {
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager> r0 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.class
            monitor-enter(r0)
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$1 r1 = new com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager$1     // Catch: java.lang.Throwable -> L22
            r1.<init>()     // Catch: java.lang.Throwable -> L22
            com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread = r1     // Catch: java.lang.Throwable -> L22
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.DEBUG     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L15
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.TAG     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "Start monitoring..."
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L22
        L15:
            java.lang.Thread r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread     // Catch: java.lang.Throwable -> L22
            r2 = 5
            r1.setPriority(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.Thread r1 = com.qihoo360.mobilesafe.svcmanager.PluginServiceReferenceManager.sMonitorThread     // Catch: java.lang.Throwable -> L22
            r1.start()     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)
            return
        L22:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
