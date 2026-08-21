package com.ss.android.socialbase.downloader.impls;

public class RetryScheduler implements android.os.Handler.Callback, com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener {
    private static final int MIN_INTERVAL_MS = 3000;
    private static final int MIN_INTERVAL_MS_ACCELERATION = 5000;
    public static final int NET_TYPE_COMMON = 1;
    public static final int NET_TYPE_NONE = 0;
    public static final int NET_TYPE_WIFI = 2;
    public static final int RETRY_SCHEDULE_NORMAL = 1;
    public static final int RETRY_SCHEDULE_WHEN_APP_BACKGROUND = 3;
    public static final int RETRY_SCHEDULE_WHEN_APP_FOREGROUND = 4;
    public static final int RETRY_SCHEDULE_WHEN_OTHER_CONNECTED = 5;
    public static final int RETRY_SCHEDULE_WHEN_OTHER_SUCCEED = 2;
    private static final int SCHEDULE_ALL_TASK_RETRY_DELAY = 2000;
    private static final int SCHEDULE_ALL_TASK_RETRY_MIN_INTERVAL = 10000;
    private static final java.lang.String TAG = "RetryScheduler";
    private static volatile com.ss.android.socialbase.downloader.impls.RetryScheduler sInstance;
    private static com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryScheduleHandler sRetryScheduleHandler;
    private android.net.ConnectivityManager mConnectivityManager;
    private final android.content.Context mContext;
    private final android.os.Handler mHandler;
    private final boolean mIsDownloaderProcess;
    private long mLastHandleAllTaskTime;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo> mRetryInfoList;
    private int mWaitingRetryTasksCount;




    private static class RetryInfo {
        final int[] allowErrorCode;
        final int id;
        final int intervalMs;
        final int intervalMsAcceleration;
        final int level;
        private int mCurrentIntervalMs;
        private boolean mIsWaitingRetry;
        private long mLastRetryTime;
        private boolean mNeedWifi;
        private int mRetryCount;
        final int maxCount;
        final boolean useJobScheduler;

        RetryInfo(int r2, int r3, int r4, int r5, int r6, boolean r7, int[] r8) {
                r1 = this;
                r1.<init>()
                r0 = 3000(0xbb8, float:4.204E-42)
                if (r5 >= r0) goto L8
                r5 = r0
            L8:
                r0 = 5000(0x1388, float:7.006E-42)
                if (r6 >= r0) goto Ld
                r6 = r0
            Ld:
                r1.id = r2
                r1.level = r3
                r1.maxCount = r4
                r1.intervalMs = r5
                r1.intervalMsAcceleration = r6
                r1.useJobScheduler = r7
                r1.allowErrorCode = r8
                r1.mCurrentIntervalMs = r5
                return
        }

        static int access$300(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo r0) {
                int r0 = r0.mRetryCount
                return r0
        }

        static boolean access$402(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo r0, boolean r1) {
                r0.mNeedWifi = r1
                return r1
        }

        static boolean access$500(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo r0) {
                boolean r0 = r0.mIsWaitingRetry
                return r0
        }

        static boolean access$502(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo r0, boolean r1) {
                r0.mIsWaitingRetry = r1
                return r1
        }

        boolean canRetry(long r3, int r5, int r6, boolean r7) {
                r2 = this;
                boolean r0 = r2.mIsWaitingRetry
                r1 = 0
                if (r0 != 0) goto Ld
                java.lang.String r3 = "RetryScheduler"
                java.lang.String r4 = "canRetry: mIsWaitingRetry is false, return false!!!"
                com.ss.android.socialbase.downloader.logger.Logger.i(r3, r4)
                return r1
            Ld:
                int r0 = r2.level
                if (r0 >= r5) goto L12
                return r1
            L12:
                int r5 = r2.mRetryCount
                int r0 = r2.maxCount
                if (r5 < r0) goto L19
                return r1
            L19:
                boolean r5 = r2.mNeedWifi
                if (r5 == 0) goto L21
                r5 = 2
                if (r6 == r5) goto L21
                return r1
            L21:
                if (r7 != 0) goto L2e
                long r5 = r2.mLastRetryTime
                long r3 = r3 - r5
                int r5 = r2.intervalMs
                long r5 = (long) r5
                int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r3 >= 0) goto L2e
                return r1
            L2e:
                r3 = 1
                return r3
        }

        int getCurrentRetryIntervalMs() {
                r1 = this;
                int r0 = r1.mCurrentIntervalMs
                return r0
        }

        synchronized void increaseRetryCount() {
                r1 = this;
                monitor-enter(r1)
                int r0 = r1.mRetryCount     // Catch: java.lang.Throwable -> L9
                int r0 = r0 + 1
                r1.mRetryCount = r0     // Catch: java.lang.Throwable -> L9
                monitor-exit(r1)
                return
            L9:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        synchronized void increaseRetryInterval() {
                r2 = this;
                monitor-enter(r2)
                int r0 = r2.mCurrentIntervalMs     // Catch: java.lang.Throwable -> La
                int r1 = r2.intervalMsAcceleration     // Catch: java.lang.Throwable -> La
                int r0 = r0 + r1
                r2.mCurrentIntervalMs = r0     // Catch: java.lang.Throwable -> La
                monitor-exit(r2)
                return
            La:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }

        void resetRetryInterval() {
                r1 = this;
                int r0 = r1.intervalMs
                r1.mCurrentIntervalMs = r0
                return
        }

        synchronized void updateRetryTimeStamp(long r1) {
                r0 = this;
                monitor-enter(r0)
                r0.mLastRetryTime = r1     // Catch: java.lang.Throwable -> L5
                monitor-exit(r0)
                return
            L5:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }
    }

    public interface RetryScheduleHandler {
        void cancelRetry(int r1);

        void scheduleRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r1, long r2, boolean r4, int r5);
    }

    private RetryScheduler() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.mHandler = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.mRetryInfoList = r0
            r0 = 0
            r2.mWaitingRetryTasksCount = r0
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            r2.mContext = r0
            r2.registerNetworkCallback()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            r2.mIsDownloaderProcess = r0
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            r0.registerAppSwitchListener(r2)
            return
    }

    static android.content.Context access$000(com.ss.android.socialbase.downloader.impls.RetryScheduler r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static android.net.ConnectivityManager access$100(com.ss.android.socialbase.downloader.impls.RetryScheduler r0) {
            android.net.ConnectivityManager r0 = r0.mConnectivityManager
            return r0
    }

    static android.net.ConnectivityManager access$102(com.ss.android.socialbase.downloader.impls.RetryScheduler r0, android.net.ConnectivityManager r1) {
            r0.mConnectivityManager = r1
            return r1
    }

    static void access$200(com.ss.android.socialbase.downloader.impls.RetryScheduler r0, int r1, boolean r2) {
            r0.scheduleAllTaskRetry(r1, r2)
            return
    }

    static int access$600(com.ss.android.socialbase.downloader.impls.RetryScheduler r0) {
            int r0 = r0.mWaitingRetryTasksCount
            return r0
    }

    static int access$700(com.ss.android.socialbase.downloader.impls.RetryScheduler r0) {
            int r0 = r0.getNetWorkType()
            return r0
    }

    static android.util.SparseArray access$800(com.ss.android.socialbase.downloader.impls.RetryScheduler r0) {
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r0.mRetryInfoList
            return r0
    }

    static void access$900(com.ss.android.socialbase.downloader.impls.RetryScheduler r0, int r1, int r2, boolean r3) {
            r0.doSchedulerRetryInSubThread(r1, r2, r3)
            return
    }

    private boolean canRetryForAllowErrorCode(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo r5, int r6) {
            r4 = this;
            int[] r5 = r5.allowErrorCode
            r0 = 0
            if (r5 == 0) goto L16
            int r1 = r5.length
            if (r1 != 0) goto L9
            goto L16
        L9:
            int r1 = r5.length
            r2 = r0
        Lb:
            if (r2 >= r1) goto L16
            r3 = r5[r2]
            if (r3 != r6) goto L13
            r5 = 1
            return r5
        L13:
            int r2 = r2 + 1
            goto Lb
        L16:
            return r0
    }

    private boolean canRetryWhenInsufficientSpace(com.ss.android.socialbase.downloader.model.DownloadInfo r10, com.ss.android.socialbase.downloader.exception.BaseException r11) {
            r9 = this;
            r0 = 0
            java.lang.String r2 = r10.getTempPath()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> Lb
            long r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getAvailableSpaceBytes(r2)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> Lb
            goto L10
        Lb:
            r2 = move-exception
            r2.printStackTrace()
            r2 = r0
        L10:
            boolean r4 = r11 instanceof com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException
            if (r4 == 0) goto L1b
            com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException r11 = (com.ss.android.socialbase.downloader.exception.DownloadOutOfSpaceException) r11
            long r4 = r11.getRequiredSpaceBytes()
            goto L24
        L1b:
            long r4 = r10.getTotalBytes()
            long r6 = r10.getCurBytes()
            long r4 = r4 - r6
        L24:
            int r11 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r4 = 1
            if (r11 >= 0) goto L95
            int r10 = r10.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r10)
            r11 = 0
            java.lang.String r5 = "space_fill_part_download"
            int r5 = r10.optInt(r5, r11)
            if (r5 != r4) goto L94
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 <= 0) goto L8c
            r5 = 100
            java.lang.String r6 = "space_fill_min_keep_mb"
            int r10 = r10.optInt(r6, r5)
            if (r10 <= 0) goto L95
            long r5 = (long) r10
            r7 = 1048576(0x100000, double:5.180654E-318)
            long r5 = r5 * r7
            long r5 = r2 - r5
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "retry schedule: available = "
            r7.append(r8)
            double r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r2)
            r7.append(r2)
            java.lang.String r2 = "MB, minKeep = "
            r7.append(r2)
            r7.append(r10)
            java.lang.String r10 = "MB, canDownload = "
            r7.append(r10)
            double r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.byteToMb(r5)
            r7.append(r2)
            java.lang.String r10 = "MB"
            r7.append(r10)
            java.lang.String r10 = r7.toString()
            java.lang.String r2 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r10)
            int r10 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r10 > 0) goto L95
            java.lang.String r10 = "doSchedulerRetryInSubThread: canDownload <= 0 , canRetry = false !!!!"
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r10)
            return r11
        L8c:
            java.lang.String r0 = "download_when_space_negative"
            int r10 = r10.optInt(r0, r11)
            if (r10 == r4) goto L95
        L94:
            return r11
        L95:
            return r4
    }

    private com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo createRetryInfo(int r12) {
            r11 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r12)
            r1 = 0
            java.lang.String r2 = "retry_schedule"
            int r5 = r0.optInt(r2, r1)
            java.lang.String r2 = "retry_schedule_config"
            org.json.JSONObject r0 = r0.optJSONObject(r2)
            r2 = 60
            if (r0 == 0) goto L4b
            java.lang.String r3 = "max_count"
            int r3 = r0.optInt(r3, r2)
            java.lang.String r4 = "interval_sec"
            int r4 = r0.optInt(r4, r2)
            java.lang.String r6 = "interval_sec_acceleration"
            int r2 = r0.optInt(r6, r2)
            int r6 = android.os.Build.VERSION.SDK_INT
            r7 = 21
            r8 = 1
            if (r6 < r7) goto L3b
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryScheduleHandler r6 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sRetryScheduleHandler
            if (r6 == 0) goto L3b
            java.lang.String r6 = "use_job_scheduler"
            int r6 = r0.optInt(r6, r1)
            if (r6 != r8) goto L3b
            r1 = r8
        L3b:
            java.lang.String r6 = "allow_error_code"
            java.lang.String r0 = r0.optString(r6)
            int[] r0 = r11.parserAllowErrorCode(r0)
            r10 = r0
            r9 = r1
            r0 = r2
            r6 = r3
            r2 = r4
            goto L50
        L4b:
            r0 = 0
            r10 = r0
            r9 = r1
            r0 = r2
            r6 = r0
        L50:
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r1 = new com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo
            int r7 = r2 * 1000
            int r8 = r0 * 1000
            r3 = r1
            r4 = r12
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            return r1
    }

    private void doScheduleAllTaskRetry(int r3, boolean r4) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.impls.RetryScheduler$2 r1 = new com.ss.android.socialbase.downloader.impls.RetryScheduler$2
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            return
    }

    private void doSchedulerRetryInSubThread(int r9, int r10, boolean r11) {
            r8 = this;
            android.content.Context r0 = r8.mContext
            if (r0 != 0) goto L5
            return
        L5:
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r1 = r8.mRetryInfoList
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r2 = r8.mRetryInfoList     // Catch: java.lang.Throwable -> L134
            java.lang.Object r2 = r2.get(r9)     // Catch: java.lang.Throwable -> L134
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r2 = (com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo) r2     // Catch: java.lang.Throwable -> L134
            if (r2 != 0) goto L14
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L134
            return
        L14:
            boolean r3 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$500(r2)     // Catch: java.lang.Throwable -> L134
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L28
            com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$502(r2, r5)     // Catch: java.lang.Throwable -> L134
            int r3 = r8.mWaitingRetryTasksCount     // Catch: java.lang.Throwable -> L134
            int r3 = r3 - r4
            r8.mWaitingRetryTasksCount = r3     // Catch: java.lang.Throwable -> L134
            if (r3 >= 0) goto L28
            r8.mWaitingRetryTasksCount = r5     // Catch: java.lang.Throwable -> L134
        L28:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L134
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "doSchedulerRetryInSubThread: downloadId = "
            r1.append(r3)
            r1.append(r9)
            java.lang.String r3 = ", retryCount = "
            r1.append(r3)
            int r3 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$300(r2)
            r1.append(r3)
            java.lang.String r3 = ", mWaitingRetryTasksCount = "
            r1.append(r3)
            int r3 = r8.mWaitingRetryTasksCount
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r3, r1)
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo(r9)
            if (r1 != 0) goto L63
            r8.removeRetryInfo(r9)
            return
        L63:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "doSchedulerRetryInSubThread，id:"
            r3.append(r6)
            r3.append(r9)
            java.lang.String r3 = r3.toString()
            java.lang.String r6 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.e(r6, r3)
            int r3 = r1.getRealStatus()
            r6 = -3
            if (r3 == r6) goto L130
            r6 = -4
            if (r3 != r6) goto L85
            goto L130
        L85:
            r6 = -5
            r7 = -2
            if (r3 == r6) goto L10a
            if (r3 != r7) goto L93
            boolean r6 = r1.isPauseReserveOnWifi()
            if (r6 == 0) goto L93
            goto L10a
        L93:
            r9 = -1
            if (r3 == r9) goto L97
            return
        L97:
            if (r10 != 0) goto La0
            boolean r3 = r2.useJobScheduler
            if (r3 == 0) goto L9f
            r3 = r5
            goto La1
        L9f:
            return
        La0:
            r3 = r4
        La1:
            com.ss.android.socialbase.downloader.exception.BaseException r6 = r1.getFailedException()
            if (r3 == 0) goto Lb1
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r6)
            if (r7 == 0) goto Lb1
            boolean r3 = r8.canRetryWhenInsufficientSpace(r1, r6)
        Lb1:
            r2.increaseRetryCount()
            if (r3 == 0) goto Lf3
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r3 = "doSchedulerRetry: restart task, ****** id = "
            r10.append(r3)
            int r3 = r2.id
            r10.append(r3)
            java.lang.String r10 = r10.toString()
            java.lang.String r3 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r3, r10)
            long r3 = java.lang.System.currentTimeMillis()
            r2.updateRetryTimeStamp(r3)
            if (r11 == 0) goto Lda
            r2.increaseRetryInterval()
        Lda:
            int r10 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$300(r2)
            r1.setRetryScheduleCount(r10)
            int r10 = r1.getStatus()
            if (r10 != r9) goto L109
            com.ss.android.socialbase.downloader.downloader.Downloader r9 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            int r10 = r1.getId()
            r9.restart(r10)
            goto L109
        Lf3:
            if (r11 == 0) goto Lf8
            r2.increaseRetryInterval()
        Lf8:
            boolean r9 = r1.isOnlyWifi()
            if (r9 != 0) goto L106
            boolean r9 = r1.isPauseReserveOnWifi()
            if (r9 == 0) goto L105
            goto L106
        L105:
            r4 = r5
        L106:
            r8.tryStartScheduleRetry(r1, r4, r10)
        L109:
            return
        L10a:
            r10 = 3
            if (r3 != r7) goto L11f
            android.content.Context r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r11 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r11)
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r11 = r11.getReserveWifiStatusListener()
            if (r11 == 0) goto L11f
            r0 = 4
            r11.onStatusChanged(r1, r0, r10)
        L11f:
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadLaunchHandler()
            if (r11 == 0) goto L12c
            java.util.List r0 = java.util.Collections.singletonList(r1)
            r11.onLaunchResume(r0, r10)
        L12c:
            r8.removeRetryInfo(r9)
            return
        L130:
            r8.removeRetryInfo(r9)
            return
        L134:
            r9 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L134
            throw r9
    }

    public static com.ss.android.socialbase.downloader.impls.RetryScheduler getInstance() {
            com.ss.android.socialbase.downloader.impls.RetryScheduler r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.impls.RetryScheduler> r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.impls.RetryScheduler r1 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.RetryScheduler r1 = new com.ss.android.socialbase.downloader.impls.RetryScheduler     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.impls.RetryScheduler.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.impls.RetryScheduler r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sInstance
            return r0
    }

    private int getNetWorkType() {
            r3 = this;
            r0 = 0
            android.net.ConnectivityManager r1 = r3.mConnectivityManager     // Catch: java.lang.Exception -> L2e
            if (r1 != 0) goto L15
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L2e
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L2e
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L2e
            r3.mConnectivityManager = r1     // Catch: java.lang.Exception -> L2e
        L15:
            android.net.ConnectivityManager r1 = r3.mConnectivityManager     // Catch: java.lang.Exception -> L2e
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L2e
            boolean r2 = r1.isConnected()     // Catch: java.lang.Exception -> L2e
            if (r2 != 0) goto L24
            goto L2e
        L24:
            int r0 = r1.getType()     // Catch: java.lang.Exception -> L2e
            r1 = 1
            if (r0 != r1) goto L2d
            r0 = 2
            return r0
        L2d:
            return r1
        L2e:
            return r0
    }

    private com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo obtainRetryInfo(int r4) {
            r3 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r3.mRetryInfoList
            java.lang.Object r0 = r0.get(r4)
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r0 = (com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo) r0
            if (r0 != 0) goto L25
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r1 = r3.mRetryInfoList
            monitor-enter(r1)
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r3.mRetryInfoList     // Catch: java.lang.Throwable -> L22
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r0 = (com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo) r0     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L1b
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r0 = r3.createRetryInfo(r4)     // Catch: java.lang.Throwable -> L22
        L1b:
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r2 = r3.mRetryInfoList     // Catch: java.lang.Throwable -> L22
            r2.put(r4, r0)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            goto L25
        L22:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            throw r4
        L25:
            return r0
    }

    private int[] parserAllowErrorCode(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = ","
            java.lang.String[] r5 = r5.split(r0)     // Catch: java.lang.Throwable -> L25
            int r0 = r5.length     // Catch: java.lang.Throwable -> L25
            if (r0 > 0) goto L12
            return r1
        L12:
            int r0 = r5.length     // Catch: java.lang.Throwable -> L25
            int[] r0 = new int[r0]     // Catch: java.lang.Throwable -> L25
            r2 = 0
        L16:
            int r3 = r5.length     // Catch: java.lang.Throwable -> L25
            if (r2 >= r3) goto L24
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L25
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L25
            r0[r2] = r3     // Catch: java.lang.Throwable -> L25
            int r2 = r2 + 1
            goto L16
        L24:
            return r0
        L25:
            return r1
    }

    private void registerNetworkCallback() {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "use_network_callback"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            r1 = 1
            if (r0 == r1) goto Lf
            return
        Lf:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.impls.RetryScheduler$1 r1 = new com.ss.android.socialbase.downloader.impls.RetryScheduler$1
            r1.<init>(r3)
            r0.execute(r1)
            return
    }

    private void removeRetryInfo(int r3) {
            r2 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r2.mRetryInfoList
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r1 = r2.mRetryInfoList     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    private void scheduleAllTaskRetry(int r7, boolean r8) {
            r6 = this;
            int r0 = r6.mWaitingRetryTasksCount
            if (r0 > 0) goto L5
            return
        L5:
            long r0 = java.lang.System.currentTimeMillis()
            monitor-enter(r6)
            if (r8 != 0) goto L18
            long r2 = r6.mLastHandleAllTaskTime     // Catch: java.lang.Throwable -> L58
            long r2 = r0 - r2
            r4 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L18
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L58
            return
        L18:
            r6.mLastHandleAllTaskTime = r0     // Catch: java.lang.Throwable -> L58
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "scheduleAllTaskRetry, level = ["
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = "], force = ["
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            r0 = 0
            if (r8 == 0) goto L46
            android.os.Handler r1 = r6.mHandler
            r1.removeMessages(r0)
        L46:
            android.os.Message r1 = android.os.Message.obtain()
            r1.what = r0
            r1.arg1 = r7
            r1.arg2 = r8
            android.os.Handler r7 = r6.mHandler
            r2 = 2000(0x7d0, double:9.88E-321)
            r7.sendMessageDelayed(r1, r2)
            return
        L58:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L58
            throw r7
    }

    public static void setRetryScheduleHandler(com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryScheduleHandler r0) {
            com.ss.android.socialbase.downloader.impls.RetryScheduler.sRetryScheduleHandler = r0
            return
    }

    private void tryStartScheduleRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r10, boolean r11, int r12) {
            r9 = this;
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r10.getFailedException()
            if (r0 != 0) goto L7
            return
        L7:
            int r1 = r10.getId()
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r1 = r9.obtainRetryInfo(r1)
            int r2 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$300(r1)
            int r3 = r1.maxCount
            if (r2 <= r3) goto L46
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "tryStartScheduleRetry, id = "
            r10.append(r11)
            int r11 = r1.id
            r10.append(r11)
            java.lang.String r11 = ", mRetryCount = "
            r10.append(r11)
            int r11 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$300(r1)
            r10.append(r11)
            java.lang.String r11 = ", maxCount = "
            r10.append(r11)
            int r11 = r1.maxCount
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.String r11 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.w(r11, r10)
            return
        L46:
            int r2 = r0.getErrorCode()
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r0)
            if (r3 != 0) goto L89
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r0)
            if (r0 != 0) goto L89
            boolean r0 = r10.statusInPause()
            if (r0 == 0) goto L62
            boolean r0 = r10.isPauseReserveOnWifi()
            if (r0 != 0) goto L89
        L62:
            boolean r0 = r9.canRetryForAllowErrorCode(r1, r2)
            if (r0 != 0) goto L69
            return
        L69:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "allow error code, id = "
            r0.append(r3)
            int r3 = r1.id
            r0.append(r3)
            java.lang.String r3 = ", error code = "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r0)
        L89:
            com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$402(r1, r11)
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r9.mRetryInfoList
            monitor-enter(r0)
            boolean r2 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$500(r1)     // Catch: java.lang.Throwable -> L10a
            if (r2 != 0) goto L9e
            r2 = 1
            com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$502(r1, r2)     // Catch: java.lang.Throwable -> L10a
            int r3 = r9.mWaitingRetryTasksCount     // Catch: java.lang.Throwable -> L10a
            int r3 = r3 + r2
            r9.mWaitingRetryTasksCount = r3     // Catch: java.lang.Throwable -> L10a
        L9e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10a
            int r0 = r1.getCurrentRetryIntervalMs()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "tryStartScheduleRetry: id = "
            r2.append(r3)
            int r3 = r1.id
            r2.append(r3)
            java.lang.String r3 = ", delayTimeMills = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", mWaitingRetryTasks = "
            r2.append(r3)
            int r3 = r9.mWaitingRetryTasksCount
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r3, r2)
            boolean r2 = r1.useJobScheduler
            if (r2 == 0) goto Lf3
            if (r12 != 0) goto Ld6
            r1.resetRetryInterval()
        Ld6:
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryScheduleHandler r3 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sRetryScheduleHandler
            if (r3 == 0) goto Le1
            long r5 = (long) r0
            r4 = r10
            r7 = r11
            r8 = r12
            r3.scheduleRetry(r4, r5, r7, r8)
        Le1:
            boolean r10 = r9.mIsDownloaderProcess
            if (r10 == 0) goto L109
            long r10 = java.lang.System.currentTimeMillis()
            r1.updateRetryTimeStamp(r10)
            r1.increaseRetryCount()
            r1.increaseRetryInterval()
            goto L109
        Lf3:
            if (r11 == 0) goto Lf6
            return
        Lf6:
            android.os.Handler r11 = r9.mHandler
            int r12 = r10.getId()
            r11.removeMessages(r12)
            android.os.Handler r11 = r9.mHandler
            int r10 = r10.getId()
            long r0 = (long) r0
            r11.sendEmptyMessageDelayed(r10, r0)
        L109:
            return
        L10a:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10a
            throw r10
    }

    public void doSchedulerRetry(int r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.downloader.impls.RetryScheduler$3 r1 = new com.ss.android.socialbase.downloader.impls.RetryScheduler$3
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r4) {
            r3 = this;
            int r0 = r4.what
            r1 = 1
            if (r0 != 0) goto L12
            int r0 = r4.arg1
            int r4 = r4.arg2
            if (r4 != r1) goto Ld
            r4 = r1
            goto Le
        Ld:
            r4 = 0
        Le:
            r3.doScheduleAllTaskRetry(r0, r4)
            goto L2f
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "handleMessage, doSchedulerRetry, id = "
            r0.append(r2)
            int r2 = r4.what
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "RetryScheduler"
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r0)
            int r4 = r4.what
            r3.doSchedulerRetry(r4)
        L2f:
            return r1
    }

    @Override
    public void onAppBackground() {
            r2 = this;
            r0 = 3
            r1 = 0
            r2.scheduleAllTaskRetry(r0, r1)
            return
    }

    @Override
    public void onAppForeground() {
            r2 = this;
            r0 = 4
            r1 = 0
            r2.scheduleAllTaskRetry(r0, r1)
            return
    }

    public void scheduleRetryWhenHasTaskConnected() {
            r2 = this;
            r0 = 5
            r1 = 0
            r2.scheduleAllTaskRetry(r0, r1)
            return
    }

    public void scheduleRetryWhenHasTaskSucceed() {
            r2 = this;
            r0 = 2
            r1 = 1
            r2.scheduleAllTaskRetry(r0, r1)
            return
    }

    public void tryCancelScheduleRetry(int r5) {
            r4 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r0 = r4.mRetryInfoList
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo> r1 = r4.mRetryInfoList     // Catch: java.lang.Throwable -> L36
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L36
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryInfo r1 = (com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo) r1     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return
        Lf:
            boolean r2 = com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$500(r1)     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L23
            r2 = 0
            com.ss.android.socialbase.downloader.impls.RetryScheduler.RetryInfo.access$502(r1, r2)     // Catch: java.lang.Throwable -> L36
            int r3 = r4.mWaitingRetryTasksCount     // Catch: java.lang.Throwable -> L36
            int r3 = r3 + (-1)
            r4.mWaitingRetryTasksCount = r3     // Catch: java.lang.Throwable -> L36
            if (r3 >= 0) goto L23
            r4.mWaitingRetryTasksCount = r2     // Catch: java.lang.Throwable -> L36
        L23:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            boolean r0 = r1.useJobScheduler
            if (r0 == 0) goto L30
            com.ss.android.socialbase.downloader.impls.RetryScheduler$RetryScheduleHandler r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.sRetryScheduleHandler
            if (r0 == 0) goto L35
            r0.cancelRetry(r5)
            goto L35
        L30:
            android.os.Handler r0 = r4.mHandler
            r0.removeMessages(r5)
        L35:
            return
        L36:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r5
    }

    public void tryStartScheduleRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            if (r3 == 0) goto L2e
            java.lang.String r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.MIME_APK
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.MIME_APK
            java.lang.String r1 = r3.getMimeType()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L17
            goto L2e
        L17:
            boolean r0 = r3.isOnlyWifi()
            if (r0 != 0) goto L26
            boolean r0 = r3.isPauseReserveOnWifi()
            if (r0 == 0) goto L24
            goto L26
        L24:
            r0 = 0
            goto L27
        L26:
            r0 = 1
        L27:
            int r1 = r2.getNetWorkType()
            r2.tryStartScheduleRetry(r3, r0, r1)
        L2e:
            return
    }
}
