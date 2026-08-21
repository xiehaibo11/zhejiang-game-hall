package com.ss.android.socialbase.downloader.downloader;

public abstract class AbsDownloadServiceHandler implements com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler {
    private static final java.lang.String TAG = null;
    private java.lang.Runnable debounceStartServiceRunnable;
    private java.lang.ref.WeakReference<android.app.Service> downloadService;
    private android.os.Handler handler;
    protected volatile boolean isInvokeStartService;
    protected volatile boolean isServiceAlive;
    protected volatile boolean isServiceForeground;
    protected final android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> pendingTasks;


    static {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler> r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG = r0
            return
    }

    public AbsDownloadServiceHandler() {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.pendingTasks = r0
            r0 = 0
            r2.isServiceAlive = r0
            r2.isInvokeStartService = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.handler = r0
            com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler$1 r0 = new com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler$1
            r0.<init>(r2)
            r2.debounceStartServiceRunnable = r0
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            return r0
    }

    @Override
    public boolean isServiceAlive() {
            r1 = this;
            boolean r0 = r1.isServiceAlive
            return r0
    }

    @Override
    public boolean isServiceForeground() {
            r3 = this;
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isServiceForeground = "
            r1.append(r2)
            boolean r2 = r3.isServiceForeground
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            boolean r0 = r3.isServiceForeground
            return r0
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            java.lang.String r2 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r0 = "onBind Abs"
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r0)
            android.os.Binder r2 = new android.os.Binder
            r2.<init>()
            return r2
    }

    @Override
    public void onDestroy() {
            r1 = this;
            r0 = 0
            r1.isServiceAlive = r0
            return
    }

    @Override
    public void onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void onStartCommandOnMainThread() {
            r0 = this;
            return
    }

    @Override
    public void pendDownloadTask(com.ss.android.socialbase.downloader.model.DownloadTask r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            int r0 = r6.getDownloadId()
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r1 = r5.pendingTasks
            monitor-enter(r1)
            java.lang.String r2 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r3.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = "pendDownloadTask pendingTasks.size:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r4 = r5.pendingTasks     // Catch: java.lang.Throwable -> L7d
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L7d
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = " downloadId:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            r3.append(r0)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L7d
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r3)     // Catch: java.lang.Throwable -> L7d
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r2 = r5.pendingTasks     // Catch: java.lang.Throwable -> L7d
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L7d
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L7d
            if (r2 != 0) goto L42
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L7d
            r2.<init>()     // Catch: java.lang.Throwable -> L7d
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r3 = r5.pendingTasks     // Catch: java.lang.Throwable -> L7d
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> L7d
        L42:
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r3.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = "before pendDownloadTask taskArray.size:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L7d
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L7d
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r3)     // Catch: java.lang.Throwable -> L7d
            r2.add(r6)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r6 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r0.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r2 = "after pendDownloadTask pendingTasks.size:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L7d
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r2 = r5.pendingTasks     // Catch: java.lang.Throwable -> L7d
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L7d
            r0.append(r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7d
            com.ss.android.socialbase.downloader.logger.Logger.d(r6, r0)     // Catch: java.lang.Throwable -> L7d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7d
            return
        L7d:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7d
            throw r6
    }

    protected void resumePendingTask() {
            r8 = this;
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r0 = r8.pendingTasks
            monitor-enter(r0)
            java.lang.String r1 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r2.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "resumePendingTask pendingTasks.size:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r3 = r8.pendingTasks     // Catch: java.lang.Throwable -> L76
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L76
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L76
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r2)     // Catch: java.lang.Throwable -> L76
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r1 = r8.pendingTasks     // Catch: java.lang.Throwable -> L76
            android.util.SparseArray r1 = r1.clone()     // Catch: java.lang.Throwable -> L76
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadTask>> r2 = r8.pendingTasks     // Catch: java.lang.Throwable -> L76
            r2.clear()     // Catch: java.lang.Throwable -> L76
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r0 == 0) goto L75
            r2 = 0
        L32:
            int r3 = r1.size()
            if (r2 >= r3) goto L75
            int r3 = r1.keyAt(r2)
            java.lang.Object r3 = r1.get(r3)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto L72
            java.util.Iterator r3 = r3.iterator()
        L48:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L72
            java.lang.Object r4 = r3.next()
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = (com.ss.android.socialbase.downloader.model.DownloadTask) r4
            java.lang.String r5 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "resumePendingTask key:"
            r6.append(r7)
            int r7 = r4.getDownloadId()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r6)
            r0.tryDownload(r4)
            goto L48
        L72:
            int r2 = r2 + 1
            goto L32
        L75:
            return
        L76:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            throw r1
    }

    @Override
    public void setDownloadService(java.lang.ref.WeakReference r1) {
            r0 = this;
            r0.downloadService = r1
            return
    }

    @Override
    public void setLogLevel(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.logger.Logger.setLogLevel(r1)
            return
    }

    @Override
    public void setServiceConnectionListener(com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener r1) {
            r0 = this;
            return
    }

    @Override
    public void startForeground(int r4, android.app.Notification r5) {
            r3 = this;
            java.lang.ref.WeakReference<android.app.Service> r0 = r3.downloadService
            if (r0 == 0) goto L4c
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L4c
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "startForeground  id = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = ", service = "
            r1.append(r2)
            java.lang.ref.WeakReference<android.app.Service> r2 = r3.downloadService
            java.lang.Object r2 = r2.get()
            r1.append(r2)
            java.lang.String r2 = ",  isServiceAlive = "
            r1.append(r2)
            boolean r2 = r3.isServiceAlive
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            java.lang.ref.WeakReference<android.app.Service> r0 = r3.downloadService     // Catch: java.lang.Exception -> L47
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L47
            android.app.Service r0 = (android.app.Service) r0     // Catch: java.lang.Exception -> L47
            r0.startForeground(r4, r5)     // Catch: java.lang.Exception -> L47
            r4 = 1
            r3.isServiceForeground = r4     // Catch: java.lang.Exception -> L47
            goto L53
        L47:
            r4 = move-exception
            r4.printStackTrace()
            goto L53
        L4c:
            java.lang.String r4 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r5 = "startForeground: downloadService is null, do nothing!"
            com.ss.android.socialbase.downloader.logger.Logger.w(r4, r5)
        L53:
            return
    }

    @Override
    public void startService() {
            r2 = this;
            boolean r0 = r2.isServiceAlive
            if (r0 != 0) goto L19
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L11
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r1 = "startService"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        L11:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r1 = 0
            r2.startService(r0, r1)
        L19:
            return
    }

    protected void startService(android.content.Context r1, android.content.ServiceConnection r2) {
            r0 = this;
            return
    }

    @Override
    public void stopForeground(boolean r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.app.Service> r0 = r3.downloadService
            if (r0 == 0) goto L43
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L43
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "stopForeground  service = "
            r1.append(r2)
            java.lang.ref.WeakReference<android.app.Service> r2 = r3.downloadService
            java.lang.Object r2 = r2.get()
            r1.append(r2)
            java.lang.String r2 = ",  isServiceAlive = "
            r1.append(r2)
            boolean r2 = r3.isServiceAlive
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            r0 = 0
            r3.isServiceForeground = r0     // Catch: java.lang.Exception -> L3f
            java.lang.ref.WeakReference<android.app.Service> r0 = r3.downloadService     // Catch: java.lang.Exception -> L3f
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L3f
            android.app.Service r0 = (android.app.Service) r0     // Catch: java.lang.Exception -> L3f
            r0.stopForeground(r4)     // Catch: java.lang.Exception -> L3f
            goto L43
        L3f:
            r4 = move-exception
            r4.printStackTrace()
        L43:
            return
    }

    protected void stopService(android.content.Context r1, android.content.ServiceConnection r2) {
            r0 = this;
            return
    }

    @Override
    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            boolean r0 = r4.isServiceAlive
            if (r0 != 0) goto L58
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L14
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r1 = "tryDownload but service is not alive"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
        L14:
            r0 = 262144(0x40000, float:3.67342E-40)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            r1 = 0
            if (r0 == 0) goto L4d
            r4.pendDownloadTask(r5)
            boolean r5 = r4.isInvokeStartService
            if (r5 != 0) goto L3c
            boolean r5 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r5 == 0) goto L31
            java.lang.String r5 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r0 = "tryDownload: 1"
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r0)
        L31:
            android.content.Context r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r4.startService(r5, r1)
            r5 = 1
            r4.isInvokeStartService = r5
            goto L85
        L3c:
            android.os.Handler r5 = r4.handler
            java.lang.Runnable r0 = r4.debounceStartServiceRunnable
            r5.removeCallbacks(r0)
            android.os.Handler r5 = r4.handler
            java.lang.Runnable r0 = r4.debounceStartServiceRunnable
            r1 = 10
            r5.postDelayed(r0, r1)
            goto L85
        L4d:
            r4.pendDownloadTask(r5)
            android.content.Context r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r4.startService(r5, r1)
            goto L85
        L58:
            java.lang.String r0 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.String r1 = "tryDownload when isServiceAlive"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r4.resumePendingTask()
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadEngine()
            if (r0 == 0) goto L85
            java.lang.String r1 = com.ss.android.socialbase.downloader.downloader.AbsDownloadServiceHandler.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "tryDownload current task: "
            r2.append(r3)
            int r3 = r5.getDownloadId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r2)
            r0.tryDownload(r5)
        L85:
            return
    }

    @Override
    public void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r1) {
            r0 = this;
            return
    }
}
