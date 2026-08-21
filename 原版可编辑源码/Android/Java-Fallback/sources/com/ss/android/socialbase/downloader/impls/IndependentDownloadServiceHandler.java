package com.ss.android.socialbase.downloader.impls;

public class IndependentDownloadServiceHandler extends com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler implements android.content.ServiceConnection {
    private static final java.lang.String TAG = null;
    private com.ss.android.socialbase.downloader.downloader.IDownloadAidlService aidlService;
    private com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener connectionListener;
    private int logLevel;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler> r0 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG = r0
            return
    }

    public IndependentDownloadServiceHandler() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.logLevel = r0
            return
    }

    private void resumePendingTaskForIndependent() {
            r5 = this;
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r0 = r5.pendingTasks     // Catch: java.lang.Throwable -> L55
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L55
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r1 = r5.pendingTasks     // Catch: java.lang.Throwable -> L52
            android.util.SparseArray r1 = r1.clone()     // Catch: java.lang.Throwable -> L52
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r2 = r5.pendingTasks     // Catch: java.lang.Throwable -> L52
            r2.clear()     // Catch: java.lang.Throwable -> L52
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L5d
            int r0 = r1.size()     // Catch: java.lang.Throwable -> L55
            if (r0 <= 0) goto L5d
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L5d
            r0 = 0
        L1e:
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L55
            if (r0 >= r2) goto L5d
            int r2 = r1.keyAt(r0)     // Catch: java.lang.Throwable -> L55
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Throwable -> L55
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L4f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L55
        L34:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r3 == 0) goto L4f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L55
            com.ss.android.socialbase.downloader.model.DownloadTask r3 = (com.ss.android.socialbase.downloader.model.DownloadTask) r3     // Catch: java.lang.Throwable -> L55
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = r5.aidlService     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L55
            com.ss.android.socialbase.downloader.model.DownloadAidlTask r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadTaskToAidl(r3)     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L55
            r4.tryDownload(r3)     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L55
            goto L34
        L4a:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L55
            goto L34
        L4f:
            int r0 = r0 + 1
            goto L1e
        L52:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            throw r1     // Catch: java.lang.Throwable -> L55
        L55:
            r0 = move-exception
            java.lang.String r1 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r2 = "resumePendingTaskForIndependent failed"
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r2, r0)
        L5d:
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r3) {
            r2 = this;
            if (r3 == 0) goto L18
            r0 = 0
            java.lang.String r1 = "fix_downloader_db_sigbus"
            boolean r3 = r3.getBooleanExtra(r1, r0)
            if (r3 == 0) goto L18
            java.lang.String r3 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r0 = "downloader process sync database on main process!"
            android.util.Log.w(r3, r0)
            r3 = 1
            java.lang.String r0 = "fix_sigbus_downloader_db"
            com.ss.android.socialbase.downloader.setting.DownloadSetting.setGlobalBugFix(r0, r3)
        L18:
            java.lang.String r3 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r0 = "onBind IndependentDownloadBinder"
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r0)
            com.ss.android.socialbase.downloader.impls.IndependentDownloadBinder r3 = new com.ss.android.socialbase.downloader.impls.IndependentDownloadBinder
            r3.<init>()
            return r3
    }

    @Override
    public void onBindingDied(android.content.ComponentName r1) {
            r0 = this;
            r1 = 0
            r0.aidlService = r1
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r1 = r0.connectionListener
            if (r1 == 0) goto La
            r1.onServiceDisConnection()
        La:
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r4, android.os.IBinder r5) {
            r3 = this;
            java.lang.String r4 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r0 = "onServiceConnected "
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.asInterface(r5)
            r3.aidlService = r4
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r4 = r3.connectionListener
            if (r4 == 0) goto L14
            r4.onServiceConnection(r5)
        L14:
            java.lang.String r4 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "onServiceConnected aidlService!=null"
            r5.append(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L28
            r0 = r1
            goto L29
        L28:
            r0 = r2
        L29:
            r5.append(r0)
            java.lang.String r0 = " pendingTasks.size:"
            r5.append(r0)
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r0 = r3.pendingTasks
            int r0 = r0.size()
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r5)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = r3.aidlService
            if (r4 == 0) goto L66
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r4 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            r4.dispatchDownloaderProcessConnectedEvent()
            r3.isServiceAlive = r1
            r3.isInvokeStartService = r2
            int r4 = r3.logLevel
            r5 = -1
            if (r4 == r5) goto L5f
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r5 = r3.aidlService     // Catch: android.os.RemoteException -> L5b
            r5.setLogLevel(r4)     // Catch: android.os.RemoteException -> L5b
            goto L5f
        L5b:
            r4 = move-exception
            r4.printStackTrace()
        L5f:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = r3.aidlService
            if (r4 == 0) goto L66
            r3.resumePendingTaskForIndependent()
        L66:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            java.lang.String r2 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r0 = "onServiceDisconnected "
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r0)
            r2 = 0
            r1.aidlService = r2
            r2 = 0
            r1.isServiceAlive = r2
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r2 = r1.connectionListener
            if (r2 == 0) goto L14
            r2.onServiceDisConnection()
        L14:
            return
    }

    @Override
    public void setLogLevel(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L7
            r1.logLevel = r2
            goto Lf
        L7:
            r0.setLogLevel(r2)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void setServiceConnectionListener(com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r1) {
            r0 = this;
            r0.connectionListener = r1
            return
    }

    @Override
    public void startService() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r1.startService(r0, r1)
        Lb:
            return
    }

    @Override
    public void startService(android.content.Context r5, android.content.ServiceConnection r6) {
            r4 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "bindService"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L2d
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L2d
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r1 = com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService.class
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L2d
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L23
            java.lang.String r1 = "fix_downloader_db_sigbus"
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "fix_sigbus_downloader_db"
            boolean r2 = r2.optBugFix(r3)     // Catch: java.lang.Throwable -> L2d
            r0.putExtra(r1, r2)     // Catch: java.lang.Throwable -> L2d
        L23:
            if (r6 == 0) goto L29
            r1 = 1
            r5.bindService(r0, r6, r1)     // Catch: java.lang.Throwable -> L2d
        L29:
            r5.startService(r0)     // Catch: java.lang.Throwable -> L2d
            goto L31
        L2d:
            r5 = move-exception
            r5.printStackTrace()
        L31:
            return
    }

    @Override
    public void stopService(android.content.Context r3, android.content.ServiceConnection r4) {
            r2 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.String r1 = "stopService"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r0 = 0
            r2.isServiceAlive = r0
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r1 = com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService.class
            r0.<init>(r3, r1)
            if (r4 == 0) goto L16
            r3.unbindService(r4)
        L16:
            r3.stopService(r0)
            return
    }

    @Override
    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "tryDownload aidlService == null:"
            r1.append(r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = r3.aidlService
            if (r2 != 0) goto L15
            r2 = 1
            goto L16
        L15:
            r2 = 0
        L16:
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService
            if (r0 != 0) goto L2f
            r3.pendDownloadTask(r4)
            android.content.Context r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r3.startService(r4, r3)
            goto L40
        L2f:
            r3.resumePendingTaskForIndependent()
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService     // Catch: android.os.RemoteException -> L3c
            com.ss.android.socialbase.downloader.model.DownloadAidlTask r4 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadTaskToAidl(r4)     // Catch: android.os.RemoteException -> L3c
            r0.tryDownload(r4)     // Catch: android.os.RemoteException -> L3c
            goto L40
        L3c:
            r4 = move-exception
            r4.printStackTrace()
        L40:
            return
    }

    @Override
    public void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r1 = r4.getDownloadId()
            r2 = 1
            r0.setDownloadWithIndependentProcessStatus(r1, r2)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r0 == 0) goto L18
            r0.tryDownload(r4)
        L18:
            return
    }
}
