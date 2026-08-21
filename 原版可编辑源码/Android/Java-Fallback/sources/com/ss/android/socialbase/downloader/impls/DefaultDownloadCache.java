package com.ss.android.socialbase.downloader.impls;

public class DefaultDownloadCache implements com.ss.android.socialbase.downloader.downloader.IDownloadCache {
    private static final int MSG_RESUME = 1;
    private static final java.lang.String TAG = "DefaultDownloadCache";
    private com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler IHandler;
    private final com.ss.android.socialbase.downloader.impls.DownloadCache downloadCache;
    private volatile boolean hasInitSqlDownloadCache;
    private com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache sqlDownloadCache;
    private volatile boolean unCompleteTaskResumed;
    private com.ss.android.socialbase.downloader.thread.WeakDownloadHandler weakHandler;




    public DefaultDownloadCache() {
            r3 = this;
            r3.<init>()
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$1 r0 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$1
            r0.<init>(r3)
            r3.IHandler = r0
            r0 = 0
            r3.weakHandler = r0
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = new com.ss.android.socialbase.downloader.impls.DownloadCache
            r0.<init>()
            r3.downloadCache = r0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "fix_sigbus_downloader_db"
            boolean r0 = r0.optBugFix(r1)
            if (r0 == 0) goto L45
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            if (r0 != 0) goto L3d
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.supportMultiProc()
            if (r0 != 0) goto L2d
            goto L3d
        L2d:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentHolderCreator()
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$2 r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$2
            r1.<init>(r3)
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r0.createCache(r1)
            r3.sqlDownloadCache = r0
            goto L4c
        L3d:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache
            r0.<init>()
            r3.sqlDownloadCache = r0
            goto L4c
        L45:
            com.ss.android.socialbase.downloader.db.SqlDownloadCache r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCache
            r0.<init>()
            r3.sqlDownloadCache = r0
        L4c:
            r0 = 0
            r3.hasInitSqlDownloadCache = r0
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = new com.ss.android.socialbase.downloader.thread.WeakDownloadHandler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler$IHandler r2 = r3.IHandler
            r0.<init>(r1, r2)
            r3.weakHandler = r0
            r3.init()
            return
    }

    static com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache access$002(com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r0, com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r1) {
            r0.sqlDownloadCache = r1
            return r1
    }

    static com.ss.android.socialbase.downloader.impls.DownloadCache access$100(com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r0) {
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r0.downloadCache
            return r0
    }

    static void access$200(com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r0) {
            r0.onDownloadCacheSyncSuccess()
            return
    }

    private boolean isPauseReserveOnWifi(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.statusInPause()
            if (r1 == 0) goto Lf
            boolean r3 = r3.isPauseReserveOnWifi()
            return r3
        Lf:
            return r0
    }

    private void onDownloadCacheSyncSuccess() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.hasInitSqlDownloadCache = r0     // Catch: java.lang.Throwable -> L9
            r1.notifyAll()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9
            throw r0
    }

    private void updateDownloadInfoInDB(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            r0 = 1
            r1.updateDownloadInfoInDB(r2, r0)
            return
    }

    private void updateDownloadInfoInDB(com.ss.android.socialbase.downloader.model.DownloadInfo r2, boolean r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L1c
            if (r3 == 0) goto L21
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L16
            r3.updateDownloadInfo(r2)
            goto L21
        L16:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r3 = r1.sqlDownloadCache
            r3.updateDownloadInfo(r2)
            goto L21
        L1c:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r3 = r1.sqlDownloadCache
            r3.updateDownloadInfo(r2)
        L21:
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.OnDownloadTaskCancel(r2, r3)
            r4 = 0
            r1.syncDownloadInfoFromOtherCache(r2, r4)
            return r3
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.OnDownloadTaskCompleted(r2, r3)
            r4 = 0
            r1.syncDownloadInfoFromOtherCache(r2, r4)
            return r3
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r7, long r8, java.lang.String r10, java.lang.String r11) {
            r6 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r6.downloadCache
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r11
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r0.OnDownloadTaskConnected(r1, r2, r4, r5)
            r6.updateDownloadInfoInDB(r7)
            return r7
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.OnDownloadTaskError(r2, r3)
            r4 = 0
            r1.syncDownloadInfoFromOtherCache(r2, r4)
            return r3
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskIntercept(r2)
            r1.updateDownloadInfoInDB(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.OnDownloadTaskPause(r2, r3)
            r4 = 0
            r1.syncDownloadInfoFromOtherCache(r2, r4)
            return r3
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskPrepare(r2)
            r1.updateDownloadInfoInDB(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskProgress(r2, r3)
            r3 = 0
            r1.updateDownloadInfoInDB(r2, r3)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskRetry(r2)
            r1.updateDownloadInfoInDB(r2)
            return r2
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r2.downloadCache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.impls.DownloadCache r1 = r2.downloadCache     // Catch: java.lang.Throwable -> L26
            r1.addDownloadChunk(r3)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L20
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L1a
            r0.addDownloadChunk(r3)
            goto L25
        L1a:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r2.sqlDownloadCache
            r0.addDownloadChunk(r3)
            goto L25
        L20:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r2.sqlDownloadCache
            r0.addDownloadChunk(r3)
        L25:
            return
        L26:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r3
    }

    @Override
    public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L17
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L11
            r0.addDownloadChunk(r2)
            goto L1c
        L11:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.addDownloadChunk(r2)
            goto L1c
        L17:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.addDownloadChunk(r2)
        L1c:
            return
    }

    @Override
    public boolean cacheExist(int r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public void clearData() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: android.database.sqlite.SQLiteException -> L6
            r0.clearData()     // Catch: android.database.sqlite.SQLiteException -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L21
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L1b
            r0.clearData()
            goto L26
        L1b:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.clearData()
            goto L26
        L21:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.clearData()
        L26:
            return
    }

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
            r2 = this;
            boolean r0 = r2.hasInitSqlDownloadCache
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            monitor-enter(r2)
            boolean r0 = r2.hasInitSqlDownloadCache     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L23
            java.lang.String r0 = "DefaultDownloadCache"
            java.lang.String r1 = "ensureDownloadCacheSyncSuccess: waiting start!!!!"
            com.ss.android.socialbase.downloader.logger.Logger.w(r0, r1)     // Catch: java.lang.Throwable -> L27
            r0 = 5000(0x1388, double:2.4703E-320)
            r2.wait(r0)     // Catch: java.lang.InterruptedException -> L18 java.lang.Throwable -> L27
            goto L1c
        L18:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L27
        L1c:
            java.lang.String r0 = "DefaultDownloadCache"
            java.lang.String r1 = "ensureDownloadCacheSyncSuccess: waiting end!!!!"
            com.ss.android.socialbase.downloader.logger.Logger.w(r0, r1)     // Catch: java.lang.Throwable -> L27
        L23:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L27
            boolean r0 = r2.hasInitSqlDownloadCache
            return r0
        L27:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L27
            throw r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r0 = r0.getAllDownloadInfo()
            return r0
    }

    public com.ss.android.socialbase.downloader.impls.DownloadCache getDownloadCache() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getDownloadChunk(r2)
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getDownloadInfoList(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> getSegmentMap(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r2.downloadCache
            java.util.Map r0 = r0.getSegmentMap(r3)
            if (r0 == 0) goto Le
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L19
        Le:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r2.sqlDownloadCache
            java.util.Map r0 = r0.getSegmentMap(r3)
            com.ss.android.socialbase.downloader.impls.DownloadCache r1 = r2.downloadCache
            r1.updateSegments(r3, r0)
        L19:
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.segment.Segment> getSegments(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r2.downloadCache
            java.util.List r0 = r0.getSegments(r3)
            if (r0 == 0) goto Le
            int r1 = r0.size()
            if (r1 != 0) goto L14
        Le:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r2.sqlDownloadCache
            java.util.List r0 = r0.getSegments(r3)
        L14:
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache getSqlDownloadCache() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)
            return r2
    }

    @Override
    public void init() {
            r8 = this;
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r0 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_START
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.onDownloadCacheSyncCallback(r0)
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            com.ss.android.socialbase.downloader.impls.DownloadCache r2 = r8.downloadCache
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r8.downloadCache     // Catch: java.lang.Throwable -> L65
            android.util.SparseArray r3 = r3.getDownloadInfoMap()     // Catch: java.lang.Throwable -> L65
            r4 = 0
            r5 = r4
        L1a:
            int r6 = r3.size()     // Catch: java.lang.Throwable -> L65
            if (r5 >= r6) goto L34
            int r6 = r3.keyAt(r5)     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L31
            java.lang.Object r7 = r3.get(r6)     // Catch: java.lang.Throwable -> L65
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r7     // Catch: java.lang.Throwable -> L65
            if (r7 == 0) goto L31
            r0.put(r6, r7)     // Catch: java.lang.Throwable -> L65
        L31:
            int r5 = r5 + 1
            goto L1a
        L34:
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r8.downloadCache     // Catch: java.lang.Throwable -> L65
            android.util.SparseArray r3 = r3.getChunkListMap()     // Catch: java.lang.Throwable -> L65
        L3a:
            int r5 = r3.size()     // Catch: java.lang.Throwable -> L65
            if (r4 >= r5) goto L59
            int r5 = r3.keyAt(r4)     // Catch: java.lang.Throwable -> L65
            if (r5 == 0) goto L56
            java.lang.Object r6 = r3.get(r5)     // Catch: java.lang.Throwable -> L65
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L56
            java.util.concurrent.CopyOnWriteArrayList r7 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L65
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L65
            r1.put(r5, r7)     // Catch: java.lang.Throwable -> L65
        L56:
            int r4 = r4 + 1
            goto L3a
        L59:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L65
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r2 = r8.sqlDownloadCache
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$3 r3 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadCache$3
            r3.<init>(r8, r0, r1)
            r2.init(r0, r1, r3)
            return
        L65:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L65
            throw r0
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            boolean r0 = r1.hasInitSqlDownloadCache
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.onDownloadTaskStart(r2)
            r1.updateDownloadInfoInDB(r2)
            return r2
    }

    @Override
    public void removeAllDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.removeAllDownloadChunk(r2)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L1c
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L16
            r0.removeAllDownloadChunk(r2)
            goto L21
        L16:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.removeAllDownloadChunk(r2)
            goto L21
        L1c:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.removeAllDownloadChunk(r2)
        L21:
            return
    }

    @Override
    public boolean removeDownloadInfo(int r2) {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()     // Catch: android.database.sqlite.SQLiteException -> L1d
            if (r0 == 0) goto L17
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)     // Catch: android.database.sqlite.SQLiteException -> L1d
            if (r0 == 0) goto L11
            r0.removeDownloadInfo(r2)     // Catch: android.database.sqlite.SQLiteException -> L1d
            goto L21
        L11:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache     // Catch: android.database.sqlite.SQLiteException -> L1d
            r0.removeDownloadInfo(r2)     // Catch: android.database.sqlite.SQLiteException -> L1d
            goto L21
        L17:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache     // Catch: android.database.sqlite.SQLiteException -> L1d
            r0.removeDownloadInfo(r2)     // Catch: android.database.sqlite.SQLiteException -> L1d
            goto L21
        L1d:
            r0 = move-exception
            r0.printStackTrace()
        L21:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            boolean r2 = r0.removeDownloadInfo(r2)
            return r2
    }

    @Override
    public boolean removeDownloadTaskData(int r2) {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L17
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L11
            r0.removeDownloadTaskData(r2)
            goto L1c
        L11:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.removeDownloadTaskData(r2)
            goto L1c
        L17:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.removeDownloadTaskData(r2)
        L1c:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            boolean r2 = r0.removeDownloadTaskData(r2)
            return r2
    }

    @Override
    public void removeSegments(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.removeSegments(r2)
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.removeSegments(r2)
            return
    }

    public void resumeUnCompleteTask() {
            r12 = this;
            boolean r0 = r12.hasInitSqlDownloadCache
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r12.unCompleteTaskResumed
            if (r0 == 0) goto L11
            java.lang.String r0 = "DefaultDownloadCache"
            java.lang.String r1 = "resumeUnCompleteTask: has resumed, return!!!"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            return
        L11:
            r0 = 1
            r12.unCompleteTaskResumed = r0
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            if (r1 != 0) goto L1b
            return
        L1b:
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadLaunchHandler()
            r2 = 0
            if (r1 == 0) goto L36
            java.util.List r3 = r1.getResumeMimeTypes()
            if (r3 == 0) goto L34
            boolean r4 = r3.isEmpty()
            if (r4 != 0) goto L34
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            goto L38
        L34:
            r4 = r2
            goto L38
        L36:
            r3 = r2
            r4 = r3
        L38:
            android.util.SparseArray r5 = new android.util.SparseArray
            r5.<init>()
            monitor-enter(r12)
            com.ss.android.socialbase.downloader.impls.DownloadCache r6 = r12.downloadCache     // Catch: java.lang.Throwable -> Ldd
            android.util.SparseArray r6 = r6.getDownloadInfoMap()     // Catch: java.lang.Throwable -> Ldd
            r7 = 0
            r8 = r7
        L46:
            int r9 = r6.size()     // Catch: java.lang.Throwable -> Ldd
            if (r8 >= r9) goto L60
            int r9 = r6.keyAt(r8)     // Catch: java.lang.Throwable -> Ldd
            if (r9 == 0) goto L5d
            java.lang.Object r10 = r6.get(r9)     // Catch: java.lang.Throwable -> Ldd
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r10     // Catch: java.lang.Throwable -> Ldd
            if (r10 == 0) goto L5d
            r5.put(r9, r10)     // Catch: java.lang.Throwable -> Ldd
        L5d:
            int r8 = r8 + 1
            goto L46
        L60:
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Ldd
            int r6 = r5.size()
            if (r6 != 0) goto L68
            return
        L68:
            r6 = r7
        L69:
            int r8 = r5.size()
            if (r6 >= r8) goto Lcf
            int r8 = r5.keyAt(r6)
            if (r8 != 0) goto L76
            goto Lcc
        L76:
            java.lang.Object r8 = r5.get(r8)
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r8
            if (r8 != 0) goto L7f
            goto Lcc
        L7f:
            int r9 = r8.getRealStatus()
            int r10 = r8.getStatusAtDbInit()
            if (r10 < r0) goto L95
            r11 = 11
            if (r10 > r11) goto L95
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r10 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadMonitorListener()
            r11 = -5
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithGlobalSdkMonitor(r10, r8, r2, r11)
        L95:
            if (r3 == 0) goto Lcc
            if (r4 != 0) goto L9a
            goto Lcc
        L9a:
            java.lang.String r10 = r8.getMimeType()
            if (r10 == 0) goto Lcc
            java.lang.String r10 = r8.getMimeType()
            boolean r10 = r3.contains(r10)
            if (r10 != 0) goto Lab
            goto Lcc
        Lab:
            int r10 = r8.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r10)
            java.lang.String r11 = "enable_notification_ui"
            int r10 = r10.optInt(r11)
            r11 = 2
            if (r10 >= r11) goto Lc6
            r10 = -2
            if (r9 != r10) goto Lc6
            boolean r9 = r8.isPauseReserveOnWifi()
            if (r9 != 0) goto Lc6
            goto Lcc
        Lc6:
            r8.setDownloadFromReserveWifi(r7)
            r4.add(r8)
        Lcc:
            int r6 = r6 + 1
            goto L69
        Lcf:
            if (r1 == 0) goto Ldc
            if (r4 == 0) goto Ldc
            boolean r2 = r4.isEmpty()
            if (r2 != 0) goto Ldc
            r1.onLaunchResume(r4, r0)
        Ldc:
            return
        Ldd:
            r0 = move-exception
            monitor-exit(r12)     // Catch: java.lang.Throwable -> Ldd
            throw r0
    }

    public void resumeUnCompleteTaskMayDelayed() {
            r4 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "task_resume_delay"
            boolean r0 = r0.optBugFix(r1)
            if (r0 == 0) goto Lf
            r0 = 4000(0xfa0, double:1.9763E-320)
            goto L1a
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L18
            r0 = 1000(0x3e8, double:4.94E-321)
            goto L1a
        L18:
            r0 = 5000(0x1388, double:2.4703E-320)
        L1a:
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r2 = r4.weakHandler
            r3 = 1
            android.os.Message r2 = r2.obtainMessage(r3)
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r3 = r4.weakHandler
            r3.sendMessageDelayed(r2, r0)
            return
    }

    @Override
    public void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            if (r3 == 0) goto L19
            int r0 = r3.size()
            if (r0 != 0) goto L9
            goto L19
        L9:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.syncDownloadChunks(r2, r3)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r0 == 0) goto L19
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.syncDownloadInfoFromOtherCache(r2, r3)
        L19:
            return
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.updateDownloadInfo(r2)
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache     // Catch: java.lang.Exception -> L2e
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r2)     // Catch: java.lang.Exception -> L2e
            r1.updateDownloadInfo(r0)     // Catch: java.lang.Exception -> L2e
            if (r3 != 0) goto L11
            com.ss.android.socialbase.downloader.impls.DownloadCache r3 = r1.downloadCache     // Catch: java.lang.Exception -> L2e
            java.util.List r3 = r3.getDownloadChunk(r2)     // Catch: java.lang.Exception -> L2e
        L11:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L28
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L22
            r0.syncDownloadInfoFromOtherCache(r2, r3)     // Catch: java.lang.Exception -> L2e
            goto L32
        L22:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache     // Catch: java.lang.Exception -> L2e
            r0.syncDownloadInfoFromOtherCache(r2, r3)     // Catch: java.lang.Exception -> L2e
            goto L32
        L28:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache     // Catch: java.lang.Exception -> L2e
            r0.syncDownloadInfoFromOtherCache(r2, r3)     // Catch: java.lang.Exception -> L2e
            goto L32
        L2e:
            r2 = move-exception
            r2.printStackTrace()
        L32:
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r2, int r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.updateChunkCount(r2, r3)
            r1.updateDownloadInfoInDB(r2)
            return r2
    }

    @Override
    public void updateDownloadChunk(int r2, int r3, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.updateDownloadChunk(r2, r3, r4)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L1c
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L16
            r0.updateDownloadChunk(r2, r3, r4)
            goto L21
        L16:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.updateDownloadChunk(r2, r3, r4)
            goto L21
        L1c:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.updateDownloadChunk(r2, r3, r4)
        L21:
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            boolean r0 = r0.updateDownloadInfo(r2)
            r1.updateDownloadInfoInDB(r2)
            return r0
    }

    @Override
    public boolean updateSegments(int r2, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.DownloadCache r0 = r1.downloadCache
            r0.updateSegments(r2, r3)
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.updateSegments(r2, r3)
            r2 = 0
            return r2
    }

    @Override
    public void updateSubDownloadChunk(int r10, int r11, int r12, long r13) {
            r9 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L1f
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r1 == 0) goto L15
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r1.updateSubDownloadChunk(r2, r3, r4, r5)
            goto L28
        L15:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r2 = r9.sqlDownloadCache
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r2.updateSubDownloadChunk(r3, r4, r5, r6)
            goto L28
        L1f:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r3 = r9.sqlDownloadCache
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r3.updateSubDownloadChunk(r4, r5, r6, r7)
        L28:
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r2, int r3, int r4, int r5) {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.needNotifyDownloaderProcess()
            if (r0 == 0) goto L17
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L11
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
            goto L1c
        L11:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
            goto L1c
        L17:
            com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache r0 = r1.sqlDownloadCache
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
        L1c:
            return
    }
}
