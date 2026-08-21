package com.ss.android.socialbase.downloader.db;

public class SqlDownloadCacheAidlWrapper implements android.content.ServiceConnection, com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache {
    private static final int BIND_MAIN_PROCESS_MAX_TIME = 5;
    private static final int BIND_MAIN_PROCESS_MIN_INTERVAL = 15000;
    private static final int MAIN_PROCESS_BIND_DELAY = 1000;
    private static final java.lang.String TAG = "SqlDownloadCacheAidlWra";
    private static int sBindMainProcessTimes;
    private static boolean sIsMainProcessAlive;
    private static long sLastBindMainProcessTimeMills;
    private java.lang.Runnable mCheckAliveRunnable;
    private android.os.Handler mHandler;
    private com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl mISqlDownloadCache;
    private java.util.concurrent.CountDownLatch mInitLock;
    private com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl mPengingCallback;
    private com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener mRebindErrorListener;
    private java.util.concurrent.Future<?> mSetInitCallbackFuture;





    public interface OnMainProcessRebindErrorListener {
        void onRebindError();
    }

    static {
            return
    }

    public SqlDownloadCacheAidlWrapper() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = 0
            r2.mPengingCallback = r0
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$1 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$1
            r0.<init>(r2)
            r2.mCheckAliveRunnable = r0
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r1 = 1
            r0.<init>(r1)
            r2.mInitLock = r0
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.SqlDownloadCacheService.startServiceAndBind(r0, r2)
            return
    }

    static boolean access$000() {
            boolean r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sIsMainProcessAlive
            return r0
    }

    static boolean access$002(boolean r0) {
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sIsMainProcessAlive = r0
            return r0
    }

    static com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener access$100(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener r0 = r0.mRebindErrorListener
            return r0
    }

    static com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl access$200(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = r0.mPengingCallback
            return r0
    }

    static com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl access$300(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r0.mISqlDownloadCache
            return r0
    }

    static java.util.concurrent.CountDownLatch access$400(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            java.util.concurrent.CountDownLatch r0 = r0.mInitLock
            return r0
    }

    static boolean access$500(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            boolean r0 = r0.bindMainProcessDelayed()
            return r0
    }

    static java.lang.Runnable access$600(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            java.lang.Runnable r0 = r0.mCheckAliveRunnable
            return r0
    }

    static android.os.Handler access$700(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static java.util.concurrent.Future access$800(com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0) {
            java.util.concurrent.Future<?> r0 = r0.mSetInitCallbackFuture
            return r0
    }

    private boolean bindMainProcessDelayed() {
            r10 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 26
            if (r0 < r2) goto L8
            return r1
        L8:
            boolean r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sIsMainProcessAlive
            if (r0 == 0) goto Ld
            return r1
        Ld:
            int r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sBindMainProcessTimes
            r2 = 5
            java.lang.String r3 = "SqlDownloadCacheAidlWra"
            if (r0 <= r2) goto L1a
            java.lang.String r0 = "bindMainProcess: bind too many times!!! "
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            return r1
        L1a:
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sLastBindMainProcessTimeMills
            long r6 = r4 - r6
            r8 = 15000(0x3a98, double:7.411E-320)
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 >= 0) goto L2e
            java.lang.String r0 = "bindMainProcess: time too short since last bind!!! "
            com.ss.android.socialbase.downloader.logger.Logger.w(r3, r0)
            return r1
        L2e:
            int r0 = com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sBindMainProcessTimes
            r1 = 1
            int r0 = r0 + r1
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sBindMainProcessTimes = r0
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sLastBindMainProcessTimeMills = r4
            android.os.Handler r0 = r10.mHandler
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$3 r2 = new com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$3
            r2.<init>(r10)
            r3 = 1000(0x3e8, double:4.94E-321)
            r0.postDelayed(r2, r3)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskCancel(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskCompleted(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r8, long r9, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r7.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lf
            if (r0 == 0) goto L13
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r1 = r7.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lf
            r2 = r8
            r3 = r9
            r5 = r11
            r6 = r12
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r1.OnDownloadTaskConnected(r2, r3, r5, r6)     // Catch: android.os.RemoteException -> Lf
            return r8
        Lf:
            r8 = move-exception
            r8.printStackTrace()
        L13:
            r8 = 0
            return r8
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskError(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskIntercept(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskPause(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskPrepare(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskProgress(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.OnDownloadTaskRetry(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.addDownloadChunk(r2)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.addSubDownloadChunk(r2)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public boolean cacheExist(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r2 = r0.cacheExist(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void clearData() {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.clearData()     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r0 = r0.ensureDownloadCacheSyncSuccess()     // Catch: android.os.RemoteException -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r0 = r0.getAllDownloadInfo()     // Catch: android.os.RemoteException -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getDownloadChunk(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getDownloadInfoList(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> getSegmentMap(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.util.ArrayList<com.ss.android.socialbase.downloader.segment.Segment> getSegments(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.util.List getSegments(int r1) {
            r0 = this;
            java.util.ArrayList r1 = r0.getSegments(r1)
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void init() {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.init()     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    @Override
    public void init(android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r3, android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r4, com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback r5) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$4 r1 = new com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$4
            r1.<init>(r2, r3, r4, r5)
            r0.submit(r1)
            return
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r0 = r0.isDownloadCacheSyncSuccess()     // Catch: android.os.RemoteException -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.onDownloadTaskStart(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            r2 = 1
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sIsMainProcessAlive = r2
            android.os.Handler r2 = r1.mHandler
            java.lang.Runnable r0 = r1.mCheckAliveRunnable
            r2.removeCallbacks(r0)
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.asInterface(r3)     // Catch: java.lang.Throwable -> L11
            r1.mISqlDownloadCache = r2     // Catch: java.lang.Throwable -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$2 r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper$2
            r0.<init>(r1, r3)
            java.util.concurrent.Future r2 = r2.submit(r0)
            r1.mSetInitCallbackFuture = r2
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            r1 = 0
            r0.mISqlDownloadCache = r1
            r1 = 0
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper.sIsMainProcessAlive = r1
            return
    }

    @Override
    public void removeAllDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.removeAllDownloadChunk(r2)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public boolean removeDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r2 = r0.removeDownloadInfo(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public boolean removeDownloadTaskData(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r2 = r0.removeDownloadTaskData(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void removeSegments(int r1) {
            r0 = this;
            return
    }

    @Override
    public void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r2) {
            r1 = this;
            monitor-enter(r1)
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L10
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb java.lang.Throwable -> L14
            r0.setInitCallback(r2)     // Catch: android.os.RemoteException -> Lb java.lang.Throwable -> L14
            goto L12
        Lb:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L14
            goto L12
        L10:
            r1.mPengingCallback = r2     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
    }

    public void setOnMainProcessRebindErrorCallback(com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener r1) {
            r0 = this;
            r0.mRebindErrorListener = r1
            return
    }

    @Override
    public void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.syncDownloadChunks(r2, r3)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.syncDownloadInfo(r2)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.syncDownloadInfoFromOtherCache(r2, r3)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r2, int r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.updateChunkCount(r2, r3)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void updateDownloadChunk(int r2, int r3, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.updateDownloadChunk(r2, r3, r4)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> Lb
            boolean r2 = r0.updateDownloadInfo(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public boolean updateSegments(int r1, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void updateSubDownloadChunk(int r8, int r9, int r10, long r11) {
            r7 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r7.mISqlDownloadCache     // Catch: android.os.RemoteException -> Le
            if (r0 == 0) goto L12
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r1 = r7.mISqlDownloadCache     // Catch: android.os.RemoteException -> Le
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.updateSubDownloadChunk(r2, r3, r4, r5)     // Catch: android.os.RemoteException -> Le
            goto L12
        Le:
            r8 = move-exception
            r8.printStackTrace()
        L12:
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = r1.mISqlDownloadCache     // Catch: android.os.RemoteException -> La
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }
}
