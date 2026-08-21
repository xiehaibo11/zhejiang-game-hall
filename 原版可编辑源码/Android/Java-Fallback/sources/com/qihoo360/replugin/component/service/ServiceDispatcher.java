package com.qihoo360.replugin.component.service;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
final class ServiceDispatcher {
    private final com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher.ConnectionInfo> mActiveConnections;
    private final android.os.Handler mActivityThread;
    private final android.content.ServiceConnection mConnection;
    private final android.content.Context mContext;
    private final int mFlags;
    private boolean mForgotten;
    private final com.qihoo360.replugin.component.service.ServiceDispatcher.InnerConnection mIServiceConnection;
    private final com.qihoo360.replugin.component.service.ServiceConnectionLeaked mLocation;
    private final int mProcess;
    private java.lang.RuntimeException mUnbindLocation;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class ConnectionInfo {
        android.os.IBinder binder;
        android.os.IBinder.DeathRecipient deathMonitor;

        private ConnectionInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        ConnectionInfo(com.qihoo360.replugin.component.service.ServiceDispatcher.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class DeathMonitor implements android.os.IBinder.DeathRecipient {
        final android.content.ComponentName mName;
        final android.os.IBinder mService;
        final com.qihoo360.replugin.component.service.ServiceDispatcher this$0;

        DeathMonitor(com.qihoo360.replugin.component.service.ServiceDispatcher r1, android.content.ComponentName r2, android.os.IBinder r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mName = r2
                r0.mService = r3
                return
        }

        @Override
        public void binderDied() {
                r3 = this;
                com.qihoo360.replugin.component.service.ServiceDispatcher r0 = r3.this$0
                android.content.ComponentName r1 = r3.mName
                android.os.IBinder r2 = r3.mService
                r0.death(r1, r2)
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class InnerConnection extends com.qihoo360.loader2.mgr.IServiceConnection.Stub {
        final java.lang.ref.WeakReference<com.qihoo360.replugin.component.service.ServiceDispatcher> mDispatcher;

        InnerConnection(com.qihoo360.replugin.component.service.ServiceDispatcher r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.mDispatcher = r0
                return
        }

        @Override
        public void connected(android.content.ComponentName r2, android.os.IBinder r3) throws android.os.RemoteException {
                r1 = this;
                java.lang.ref.WeakReference<com.qihoo360.replugin.component.service.ServiceDispatcher> r0 = r1.mDispatcher
                java.lang.Object r0 = r0.get()
                com.qihoo360.replugin.component.service.ServiceDispatcher r0 = (com.qihoo360.replugin.component.service.ServiceDispatcher) r0
                if (r0 == 0) goto Ld
                r0.connected(r2, r3)
            Ld:
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class RunConnection implements java.lang.Runnable {
        final int mCommand;
        final android.content.ComponentName mName;
        final android.os.IBinder mService;
        final com.qihoo360.replugin.component.service.ServiceDispatcher this$0;

        RunConnection(com.qihoo360.replugin.component.service.ServiceDispatcher r1, android.content.ComponentName r2, android.os.IBinder r3, int r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mName = r2
                r0.mService = r3
                r0.mCommand = r4
                return
        }

        @Override
        public void run() {
                r3 = this;
                int r0 = r3.mCommand
                if (r0 != 0) goto Le
                com.qihoo360.replugin.component.service.ServiceDispatcher r0 = r3.this$0
                android.content.ComponentName r1 = r3.mName
                android.os.IBinder r2 = r3.mService
                r0.doConnected(r1, r2)
                goto L1a
            Le:
                r1 = 1
                if (r0 != r1) goto L1a
                com.qihoo360.replugin.component.service.ServiceDispatcher r0 = r3.this$0
                android.content.ComponentName r1 = r3.mName
                android.os.IBinder r2 = r3.mService
                r0.doDeath(r1, r2)
            L1a:
                return
        }
    }

    ServiceDispatcher(android.content.ServiceConnection r2, android.content.Context r3, android.os.Handler r4, int r5, int r6) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.mActiveConnections = r0
            com.qihoo360.replugin.component.service.ServiceDispatcher$InnerConnection r0 = new com.qihoo360.replugin.component.service.ServiceDispatcher$InnerConnection
            r0.<init>(r1)
            r1.mIServiceConnection = r0
            r1.mConnection = r2
            r1.mContext = r3
            r1.mActivityThread = r4
            com.qihoo360.replugin.component.service.ServiceConnectionLeaked r2 = new com.qihoo360.replugin.component.service.ServiceConnectionLeaked
            r3 = 0
            r2.<init>(r3)
            r1.mLocation = r2
            r2.fillInStackTrace()
            r1.mFlags = r5
            r1.mProcess = r6
            return
    }

    public void connected(android.content.ComponentName r4, android.os.IBinder r5) {
            r3 = this;
            android.os.Handler r0 = r3.mActivityThread
            if (r0 == 0) goto Le
            com.qihoo360.replugin.component.service.ServiceDispatcher$RunConnection r1 = new com.qihoo360.replugin.component.service.ServiceDispatcher$RunConnection
            r2 = 0
            r1.<init>(r3, r4, r5, r2)
            r0.post(r1)
            goto L11
        Le:
            r3.doConnected(r4, r5)
        L11:
            return
    }

    public void death(android.content.ComponentName r4, android.os.IBinder r5) {
            r3 = this;
            monitor-enter(r3)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r0 = r3.mActiveConnections     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r0 = r0.remove(r4)     // Catch: java.lang.Throwable -> L2d
            com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo r0 = (com.qihoo360.replugin.component.service.ServiceDispatcher.ConnectionInfo) r0     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L2b
            android.os.IBinder r1 = r0.binder     // Catch: java.lang.Throwable -> L2d
            if (r1 == r5) goto L10
            goto L2b
        L10:
            android.os.IBinder r1 = r0.binder     // Catch: java.lang.Throwable -> L2d
            android.os.IBinder$DeathRecipient r0 = r0.deathMonitor     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            r1.unlinkToDeath(r0, r2)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2d
            android.os.Handler r0 = r3.mActivityThread
            if (r0 == 0) goto L27
            com.qihoo360.replugin.component.service.ServiceDispatcher$RunConnection r1 = new com.qihoo360.replugin.component.service.ServiceDispatcher$RunConnection
            r2 = 1
            r1.<init>(r3, r4, r5, r2)
            r0.post(r1)
            goto L2a
        L27:
            r3.doDeath(r4, r5)
        L2a:
            return
        L2b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2d
            return
        L2d:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2d
            throw r4
    }

    public void doConnected(android.content.ComponentName r5, android.os.IBinder r6) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.mForgotten     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L7
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L59
            return
        L7:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r0 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L59
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L59
            com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo r0 = (com.qihoo360.replugin.component.service.ServiceDispatcher.ConnectionInfo) r0     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L17
            android.os.IBinder r1 = r0.binder     // Catch: java.lang.Throwable -> L59
            if (r1 != r6) goto L17
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L59
            return
        L17:
            r1 = 0
            if (r6 == 0) goto L3b
            com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo r2 = new com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo     // Catch: java.lang.Throwable -> L59
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L59
            r2.binder = r6     // Catch: java.lang.Throwable -> L59
            com.qihoo360.replugin.component.service.ServiceDispatcher$DeathMonitor r3 = new com.qihoo360.replugin.component.service.ServiceDispatcher$DeathMonitor     // Catch: java.lang.Throwable -> L59
            r3.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> L59
            r2.deathMonitor = r3     // Catch: java.lang.Throwable -> L59
            android.os.IBinder$DeathRecipient r3 = r2.deathMonitor     // Catch: android.os.RemoteException -> L34 java.lang.Throwable -> L59
            r6.linkToDeath(r3, r1)     // Catch: android.os.RemoteException -> L34 java.lang.Throwable -> L59
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r3 = r4.mActiveConnections     // Catch: android.os.RemoteException -> L34 java.lang.Throwable -> L59
            r3.put(r5, r2)     // Catch: android.os.RemoteException -> L34 java.lang.Throwable -> L59
            goto L40
        L34:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r6 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L59
            r6.remove(r5)     // Catch: java.lang.Throwable -> L59
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L59
            return
        L3b:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r2 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L59
            r2.remove(r5)     // Catch: java.lang.Throwable -> L59
        L40:
            if (r0 == 0) goto L49
            android.os.IBinder r2 = r0.binder     // Catch: java.lang.Throwable -> L59
            android.os.IBinder$DeathRecipient r3 = r0.deathMonitor     // Catch: java.lang.Throwable -> L59
            r2.unlinkToDeath(r3, r1)     // Catch: java.lang.Throwable -> L59
        L49:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L51
            android.content.ServiceConnection r0 = r4.mConnection
            r0.onServiceDisconnected(r5)
        L51:
            if (r6 == 0) goto L58
            android.content.ServiceConnection r0 = r4.mConnection
            r0.onServiceConnected(r5, r6)
        L58:
            return
        L59:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L59
            throw r5
    }

    public void doDeath(android.content.ComponentName r1, android.os.IBinder r2) {
            r0 = this;
            android.content.ServiceConnection r2 = r0.mConnection
            r2.onServiceDisconnected(r1)
            return
    }

    void doForget() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            r1 = r0
        L3:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r2 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L27
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L27
            if (r1 >= r2) goto L1d
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r2 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L27
            java.lang.Object r2 = r2.valueAt(r1)     // Catch: java.lang.Throwable -> L27
            com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo r2 = (com.qihoo360.replugin.component.service.ServiceDispatcher.ConnectionInfo) r2     // Catch: java.lang.Throwable -> L27
            android.os.IBinder r3 = r2.binder     // Catch: java.lang.Throwable -> L27
            android.os.IBinder$DeathRecipient r2 = r2.deathMonitor     // Catch: java.lang.Throwable -> L27
            r3.unlinkToDeath(r2, r0)     // Catch: java.lang.Throwable -> L27
            int r1 = r1 + 1
            goto L3
        L1d:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ComponentName, com.qihoo360.replugin.component.service.ServiceDispatcher$ConnectionInfo> r0 = r4.mActiveConnections     // Catch: java.lang.Throwable -> L27
            r0.clear()     // Catch: java.lang.Throwable -> L27
            r0 = 1
            r4.mForgotten = r0     // Catch: java.lang.Throwable -> L27
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L27
            throw r0
    }

    int getFlags() {
            r1 = this;
            int r0 = r1.mFlags
            return r0
    }

    com.qihoo360.loader2.mgr.IServiceConnection getIServiceConnection() {
            r1 = this;
            com.qihoo360.replugin.component.service.ServiceDispatcher$InnerConnection r0 = r1.mIServiceConnection
            return r0
    }

    com.qihoo360.replugin.component.service.ServiceConnectionLeaked getLocation() {
            r1 = this;
            com.qihoo360.replugin.component.service.ServiceConnectionLeaked r0 = r1.mLocation
            return r0
    }

    int getProcess() {
            r1 = this;
            int r0 = r1.mProcess
            return r0
    }

    android.content.ServiceConnection getServiceConnection() {
            r1 = this;
            android.content.ServiceConnection r0 = r1.mConnection
            return r0
    }

    java.lang.RuntimeException getUnbindLocation() {
            r1 = this;
            java.lang.RuntimeException r0 = r1.mUnbindLocation
            return r0
    }

    void setUnbindLocation(java.lang.RuntimeException r1) {
            r0 = this;
            r0.mUnbindLocation = r1
            return
    }

    void validate(android.content.Context r5, android.os.Handler r6) {
            r4 = this;
            android.content.Context r0 = r4.mContext
            java.lang.String r1 = ")"
            java.lang.String r2 = " now "
            java.lang.String r3 = "ServiceConnection "
            if (r0 != r5) goto L39
            android.os.Handler r5 = r4.mActivityThread
            if (r5 != r6) goto Lf
            return
        Lf:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            android.content.ServiceConnection r3 = r4.mConnection
            r0.append(r3)
            java.lang.String r3 = " registered with differing handler (was "
            r0.append(r3)
            android.os.Handler r3 = r4.mActivityThread
            r0.append(r3)
            r0.append(r2)
            r0.append(r6)
            r0.append(r1)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
        L39:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            android.content.ServiceConnection r3 = r4.mConnection
            r0.append(r3)
            java.lang.String r3 = " registered with differing Context (was "
            r0.append(r3)
            android.content.Context r3 = r4.mContext
            r0.append(r3)
            r0.append(r2)
            r0.append(r5)
            r0.append(r1)
            java.lang.String r5 = r0.toString()
            r6.<init>(r5)
            throw r6
    }
}
