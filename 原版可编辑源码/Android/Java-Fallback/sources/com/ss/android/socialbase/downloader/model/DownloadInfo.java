package com.ss.android.socialbase.downloader.model;

public class DownloadInfo implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> CREATOR = null;
    private static final int DEFAULT_MAX_PROCESS_POST_COUNT = 100;
    private static final long DEFAULT_MIN_BYTES_INTERVAL = 1048576;
    private static final int RESERVE_STATUS_NEVER = 0;
    private static final int RESERVE_STATUS_NOW = 2;
    private static final int RESERVE_STATUS_ONCE = 1;
    private static final java.lang.String TAG = "DownloadInfo";
    private boolean addListenerToSameTask;
    private java.util.concurrent.atomic.AtomicLong allConnectTime;
    private int appVersionCode;
    private com.ss.android.socialbase.downloader.constants.AsyncHandleStatus asyncHandleStatus;
    private boolean autoResumed;
    private int backUpUrlRetryCount;
    private boolean backUpUrlUsed;
    private java.util.List<java.lang.String> backUpUrls;
    private java.lang.String backUpUrlsStr;
    private int bindValueCount;
    private com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus byteInvalidRetryStatus;
    private int chunkCount;
    private boolean chunkDowngradeRetryUsed;
    private int curBackUpUrlIndex;
    private java.util.concurrent.atomic.AtomicLong curBytes;
    private int curRetryTime;
    private org.json.JSONObject dbJsonData;
    private java.lang.String dbJsonDataString;
    private boolean deleteCacheIfCheckFailed;
    private boolean distinctDirectory;
    private long downloadTime;
    private java.lang.String eTag;
    private com.ss.android.socialbase.downloader.constants.EnqueueType enqueueType;
    private java.lang.StringBuffer errorBytesLog;
    private boolean expiredRedownload;
    private java.lang.String extra;
    private java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> extraHeaders;
    private int[] extraMonitorStatus;
    private com.ss.android.socialbase.downloader.exception.BaseException failedException;
    private java.lang.String filePackageName;
    private java.util.List<java.lang.String> forbiddenBackupUrls;
    private boolean force;
    private boolean forceIgnoreRecommendSize;
    private boolean headConnectionAvailable;
    private java.lang.String headConnectionException;
    private int httpStatusCode;
    private java.lang.String httpStatusMessage;
    private boolean httpsToHttpRetryUsed;
    private java.lang.String iconUrl;
    private int id;
    private boolean ignoreDataVerify;
    private java.lang.Boolean isAutoInstallWithoutNotification;
    private boolean isFirstDownload;
    private boolean isFirstSuccess;
    private boolean isForbiddenRetryed;
    private volatile boolean isSaveTempFile;
    private java.util.concurrent.atomic.AtomicLong lastNotifyProgressTime;
    private boolean mDownloadFromReserveWifi;
    private int maxBytes;
    private int maxProgressCount;
    private java.lang.String md5;
    private java.lang.String mimeType;
    private int minProgressTimeMsInterval;
    private java.lang.String monitorScene;
    private java.lang.String name;
    private boolean needChunkDowngradeRetry;
    private boolean needDefaultHttpServiceBackUp;
    private boolean needHttpsToHttpRetry;
    private boolean needIndependentProcess;
    private boolean needPostProgress;
    private boolean needRetryDelay;
    private boolean needReuseChunkRunnable;
    private boolean needReuseFirstConnection;
    private boolean needSDKMonitor;
    private java.lang.String networkQuality;
    private int notificationVisibility;
    private boolean onlyWifi;
    private boolean openLimitSpeed;
    private java.lang.String[] outIp;
    private int[] outSize;
    private java.lang.ref.SoftReference<android.content.pm.PackageInfo> packageInfoRef;
    private java.lang.String packageName;
    private long realDownloadTime;
    private long realStartDownloadTime;
    private int retryCount;
    private com.ss.android.socialbase.downloader.constants.RetryDelayStatus retryDelayStatus;
    private java.lang.String retryDelayTimeArray;

    @java.lang.Deprecated
    private int retryScheduleMinutes;
    private java.lang.String savePath;
    private boolean showNotification;
    private boolean showNotificationForAutoResumed;
    private boolean showNotificationForNetworkResumed;
    private org.json.JSONObject spData;
    private long startDownloadTime;
    private java.util.concurrent.atomic.AtomicInteger status;
    private int statusAtDbInit;
    private boolean successByCache;
    private boolean supportPartial;
    private java.lang.String taskId;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> tempCacheData;
    private volatile java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> tempFileSaveCompleteCallbacks;
    private java.lang.String tempPath;
    private long throttleNetSpeed;
    private java.lang.String title;
    private long totalBytes;
    private long ttnetProtectTimeout;
    private java.lang.String url;


    public static class Builder {
        private boolean addListenerToSameTask;
        private int appVersionCode;
        private boolean autoInstall;
        private boolean autoResumed;
        private int backUpUrlRetryCount;
        private java.util.List<java.lang.String> backUpUrls;
        private boolean deleteCacheIfCheckFailed;
        private boolean distinctDirectory;
        private org.json.JSONObject downloadSetting;
        private com.ss.android.socialbase.downloader.constants.EnqueueType enqueueType;
        private int executorGroup;
        private long expectFileLength;
        private boolean expiredRedownload;
        private java.lang.String extra;
        private java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> extraHeaders;
        private int[] extraMonitorStatus;
        private boolean force;
        private boolean headConnectionAvailable;
        private java.lang.String iconUrl;
        private boolean ignoreDataVerify;
        private int maxBytes;
        private int maxProgressCount;
        private java.lang.String md5;
        private java.lang.String mimeType;
        private int minProgressTimeMsInterval;
        private java.lang.String monitorScene;
        private java.lang.String name;
        private boolean needChunkDowngradeRetry;
        private boolean needDefaultHttpServiceBackUp;
        private boolean needHttpsToHttpRetry;
        private boolean needIndependentProcess;
        private boolean needPostProgress;
        private boolean needRetryDelay;
        private boolean needReuseChunkRunnable;
        private boolean needReuseFirstConnection;
        private boolean needSDKMonitor;
        private boolean onlyWifi;
        private boolean openLimitSpeed;
        private java.lang.String[] outIp;
        private int[] outSize;
        private java.lang.String packageName;
        private int retryCount;
        private java.lang.String retryDelayTimeArray;
        private java.lang.String savePath;
        private boolean showNotification;
        private boolean showNotificationForAutoResumed;
        private java.lang.String tempPath;
        private long throttleNetSpeed;
        private java.lang.String title;
        private long ttnetProtectTimeout;
        private java.lang.String url;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.needPostProgress = r0
                r2.autoInstall = r0
                r2.needDefaultHttpServiceBackUp = r0
                com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
                r2.enqueueType = r1
                r2.needSDKMonitor = r0
                return
        }

        public Builder(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.needPostProgress = r0
                r2.autoInstall = r0
                r2.needDefaultHttpServiceBackUp = r0
                com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
                r2.enqueueType = r1
                r2.needSDKMonitor = r0
                r2.url = r3
                return
        }

        static java.lang.String access$000(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.name
                return r0
        }

        static java.lang.String access$100(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.title
                return r0
        }

        static int access$1000(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.retryCount
                return r0
        }

        static int access$1100(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.backUpUrlRetryCount
                return r0
        }

        static boolean access$1200(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.force
                return r0
        }

        static java.lang.String[] access$1300(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String[] r0 = r0.outIp
                return r0
        }

        static int[] access$1400(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int[] r0 = r0.outSize
                return r0
        }

        static boolean access$1500(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needPostProgress
                return r0
        }

        static int access$1600(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.maxProgressCount
                return r0
        }

        static int access$1700(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.minProgressTimeMsInterval
                return r0
        }

        static java.util.List access$1800(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.util.List<java.lang.String> r0 = r0.backUpUrls
                return r0
        }

        static boolean access$1900(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.showNotification
                return r0
        }

        static java.lang.String access$200(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.url
                return r0
        }

        static java.lang.String access$2000(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.mimeType
                return r0
        }

        static boolean access$2100(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needHttpsToHttpRetry
                return r0
        }

        static boolean access$2200(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needRetryDelay
                return r0
        }

        static java.lang.String access$2300(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.retryDelayTimeArray
                return r0
        }

        static boolean access$2400(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.autoResumed
                return r0
        }

        static boolean access$2500(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.showNotificationForAutoResumed
                return r0
        }

        static boolean access$2600(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needDefaultHttpServiceBackUp
                return r0
        }

        static boolean access$2700(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needReuseChunkRunnable
                return r0
        }

        static java.lang.String access$2800(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.packageName
                return r0
        }

        static java.lang.String access$2900(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.md5
                return r0
        }

        static java.lang.String access$300(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.savePath
                return r0
        }

        static boolean access$3000(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needReuseFirstConnection
                return r0
        }

        static boolean access$3100(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needIndependentProcess
                return r0
        }

        static com.ss.android.socialbase.downloader.constants.EnqueueType access$3200(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r0.enqueueType
                return r0
        }

        static boolean access$3300(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.headConnectionAvailable
                return r0
        }

        static boolean access$3400(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.ignoreDataVerify
                return r0
        }

        static boolean access$3500(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.addListenerToSameTask
                return r0
        }

        static boolean access$3600(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needChunkDowngradeRetry
                return r0
        }

        static java.lang.String access$3700(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.iconUrl
                return r0
        }

        static long access$3800(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r2) {
                long r0 = r2.throttleNetSpeed
                return r0
        }

        static boolean access$3900(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.openLimitSpeed
                return r0
        }

        static java.lang.String access$400(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.tempPath
                return r0
        }

        static org.json.JSONObject access$4000(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                org.json.JSONObject r0 = r0.downloadSetting
                return r0
        }

        static long access$4100(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r2) {
                long r0 = r2.expectFileLength
                return r0
        }

        static int access$4200(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.executorGroup
                return r0
        }

        static boolean access$4300(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.autoInstall
                return r0
        }

        static boolean access$4400(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.needSDKMonitor
                return r0
        }

        static java.lang.String access$4500(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.monitorScene
                return r0
        }

        static int[] access$4600(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int[] r0 = r0.extraMonitorStatus
                return r0
        }

        static boolean access$4700(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.expiredRedownload
                return r0
        }

        static boolean access$4800(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.deleteCacheIfCheckFailed
                return r0
        }

        static long access$4900(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r2) {
                long r0 = r2.ttnetProtectTimeout
                return r0
        }

        static boolean access$500(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.distinctDirectory
                return r0
        }

        static java.lang.String access$600(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.lang.String r0 = r0.extra
                return r0
        }

        static boolean access$700(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                boolean r0 = r0.onlyWifi
                return r0
        }

        static java.util.List access$800(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r0.extraHeaders
                return r0
        }

        static int access$900(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r0) {
                int r0 = r0.maxBytes
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder addListenerToSameTask(boolean r1) {
                r0 = this;
                r0.addListenerToSameTask = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder autoResumed(boolean r1) {
                r0 = this;
                r0.autoResumed = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder backUpUrlRetryCount(int r1) {
                r0 = this;
                r0.backUpUrlRetryCount = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder backUpUrls(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.backUpUrls = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo build() {
                r2 = this;
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = new com.ss.android.socialbase.downloader.model.DownloadInfo
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder deleteCacheIfCheckFailed(boolean r1) {
                r0 = this;
                r0.deleteCacheIfCheckFailed = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder distinctDirectory(boolean r1) {
                r0 = this;
                r0.distinctDirectory = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder downloadSetting(org.json.JSONObject r1) {
                r0 = this;
                r0.downloadSetting = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder enqueueType(com.ss.android.socialbase.downloader.constants.EnqueueType r1) {
                r0 = this;
                r0.enqueueType = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder executorGroup(int r1) {
                r0 = this;
                r0.executorGroup = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder expectFileLength(long r1) {
                r0 = this;
                r0.expectFileLength = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder expiredRedownload(boolean r1) {
                r0 = this;
                r0.expiredRedownload = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder extra(java.lang.String r1) {
                r0 = this;
                r0.extra = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder extraHeaders(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r1) {
                r0 = this;
                r0.extraHeaders = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder extraMonitorStatus(int[] r1) {
                r0 = this;
                r0.extraMonitorStatus = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder force(boolean r1) {
                r0 = this;
                r0.force = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder headConnectionAvailable(boolean r1) {
                r0 = this;
                r0.headConnectionAvailable = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder iconUrl(java.lang.String r1) {
                r0 = this;
                r0.iconUrl = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder ignoreDataVerify(boolean r1) {
                r0 = this;
                r0.ignoreDataVerify = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder isOpenLimitSpeed(boolean r1) {
                r0 = this;
                r0.openLimitSpeed = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder maxBytes(int r1) {
                r0 = this;
                r0.maxBytes = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder maxProgressCount(int r1) {
                r0 = this;
                r0.maxProgressCount = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder md5(java.lang.String r1) {
                r0 = this;
                r0.md5 = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder mimeType(java.lang.String r1) {
                r0 = this;
                r0.mimeType = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder minProgressTimeMsInterval(int r1) {
                r0 = this;
                r0.minProgressTimeMsInterval = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder monitorScene(java.lang.String r1) {
                r0 = this;
                r0.monitorScene = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needChunkDowngradeRetry(boolean r1) {
                r0 = this;
                r0.needChunkDowngradeRetry = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needDefaultHttpServiceBackUp(boolean r1) {
                r0 = this;
                r0.needDefaultHttpServiceBackUp = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needHttpsToHttpRetry(boolean r1) {
                r0 = this;
                r0.needHttpsToHttpRetry = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needIndependentProcess(boolean r1) {
                r0 = this;
                r0.needIndependentProcess = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needPostProgress(boolean r1) {
                r0 = this;
                r0.needPostProgress = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needRetryDelay(boolean r1) {
                r0 = this;
                r0.needRetryDelay = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needReuseChunkRunnable(boolean r1) {
                r0 = this;
                r0.needReuseChunkRunnable = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needReuseFirstConnection(boolean r1) {
                r0 = this;
                r0.needReuseFirstConnection = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder needSDKMonitor(boolean r1) {
                r0 = this;
                r0.needSDKMonitor = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder onlyWifi(boolean r1) {
                r0 = this;
                r0.onlyWifi = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder outIp(java.lang.String[] r1) {
                r0 = this;
                r0.outIp = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder outSize(int[] r1) {
                r0 = this;
                r0.outSize = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder packageName(java.lang.String r1) {
                r0 = this;
                r0.packageName = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder retryCount(int r1) {
                r0 = this;
                r0.retryCount = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder retryDelayTimeArray(java.lang.String r1) {
                r0 = this;
                r0.retryDelayTimeArray = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder savePath(java.lang.String r1) {
                r0 = this;
                r0.savePath = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder setAutoInstall(boolean r1) {
                r0 = this;
                r0.autoInstall = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder showNotification(boolean r1) {
                r0 = this;
                r0.showNotification = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder showNotificationForAutoResumed(boolean r1) {
                r0 = this;
                r0.showNotificationForAutoResumed = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder tempPath(java.lang.String r1) {
                r0 = this;
                r0.tempPath = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder throttleNetSpeed(long r1) {
                r0 = this;
                r0.throttleNetSpeed = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder title(java.lang.String r1) {
                r0 = this;
                r0.title = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder ttnetProtectTimeout(long r1) {
                r0 = this;
                r0.ttnetProtectTimeout = r1
                return r0
        }

        public com.ss.android.socialbase.downloader.model.DownloadInfo.Builder url(java.lang.String r1) {
                r0 = this;
                r0.url = r1
                return r0
        }
    }

    static {
            com.ss.android.socialbase.downloader.model.DownloadInfo$1 r0 = new com.ss.android.socialbase.downloader.model.DownloadInfo$1
            r0.<init>()
            com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR = r0
            return
    }

    public DownloadInfo() {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.needDefaultHttpServiceBackUp = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r3.retryDelayStatus = r1
            r1 = 0
            r3.needReuseFirstConnection = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r2 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE
            r3.asyncHandleStatus = r2
            r3.supportPartial = r0
            r3.needSDKMonitor = r0
            r3.expiredRedownload = r1
            r3.deleteCacheIfCheckFailed = r1
            r3.successByCache = r1
            r3.chunkCount = r0
            r3.isFirstDownload = r0
            r3.isFirstSuccess = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE
            r3.byteInvalidRetryStatus = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r3.enqueueType = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = 0
            r0.<init>(r1)
            r3.lastNotifyProgressTime = r0
            r0 = 0
            r3.isAutoInstallWithoutNotification = r0
            return
    }

    public DownloadInfo(android.database.Cursor r9) {
            r8 = this;
            r8.<init>()
            r0 = 1
            r8.needDefaultHttpServiceBackUp = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r8.retryDelayStatus = r1
            r1 = 0
            r8.needReuseFirstConnection = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r2 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE
            r8.asyncHandleStatus = r2
            r8.supportPartial = r0
            r8.needSDKMonitor = r0
            r8.expiredRedownload = r1
            r8.deleteCacheIfCheckFailed = r1
            r8.successByCache = r1
            r8.chunkCount = r0
            r8.isFirstDownload = r0
            r8.isFirstSuccess = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r2 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE
            r8.byteInvalidRetryStatus = r2
            com.ss.android.socialbase.downloader.constants.EnqueueType r2 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r8.enqueueType = r2
            java.util.concurrent.atomic.AtomicLong r2 = new java.util.concurrent.atomic.AtomicLong
            r3 = 0
            r2.<init>(r3)
            r8.lastNotifyProgressTime = r2
            r2 = 0
            r8.isAutoInstallWithoutNotification = r2
            if (r9 != 0) goto L38
            return
        L38:
            java.lang.String r2 = "_id"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            r5 = -1
            if (r2 == r5) goto L47
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.id = r2     // Catch: java.lang.Exception -> L2e7
        L47:
            java.lang.String r2 = "name"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L55
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.name = r2     // Catch: java.lang.Exception -> L2e7
        L55:
            java.lang.String r2 = "title"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L63
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.title = r2     // Catch: java.lang.Exception -> L2e7
        L63:
            java.lang.String r2 = "url"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L71
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.url = r2     // Catch: java.lang.Exception -> L2e7
        L71:
            java.lang.String r2 = "savePath"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L7f
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.savePath = r2     // Catch: java.lang.Exception -> L2e7
        L7f:
            java.lang.String r2 = "tempPath"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L8d
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.tempPath = r2     // Catch: java.lang.Exception -> L2e7
        L8d:
            java.lang.String r2 = "chunkCount"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L9b
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.chunkCount = r2     // Catch: java.lang.Exception -> L2e7
        L9b:
            java.lang.String r2 = "status"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto Laf
            java.util.concurrent.atomic.AtomicInteger r6 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Exception -> L2e7
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r6.<init>(r2)     // Catch: java.lang.Exception -> L2e7
            r8.status = r6     // Catch: java.lang.Exception -> L2e7
            goto Lb6
        Laf:
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Exception -> L2e7
            r2.<init>(r1)     // Catch: java.lang.Exception -> L2e7
            r8.status = r2     // Catch: java.lang.Exception -> L2e7
        Lb6:
            java.lang.String r2 = "curBytes"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto Lca
            java.util.concurrent.atomic.AtomicLong r3 = new java.util.concurrent.atomic.AtomicLong     // Catch: java.lang.Exception -> L2e7
            long r6 = r9.getLong(r2)     // Catch: java.lang.Exception -> L2e7
            r3.<init>(r6)     // Catch: java.lang.Exception -> L2e7
            r8.curBytes = r3     // Catch: java.lang.Exception -> L2e7
            goto Ld1
        Lca:
            java.util.concurrent.atomic.AtomicLong r2 = new java.util.concurrent.atomic.AtomicLong     // Catch: java.lang.Exception -> L2e7
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2e7
            r8.curBytes = r2     // Catch: java.lang.Exception -> L2e7
        Ld1:
            java.lang.String r2 = "totalBytes"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto Ldf
            long r2 = r9.getLong(r2)     // Catch: java.lang.Exception -> L2e7
            r8.totalBytes = r2     // Catch: java.lang.Exception -> L2e7
        Ldf:
            java.lang.String r2 = "eTag"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto Led
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.eTag = r2     // Catch: java.lang.Exception -> L2e7
        Led:
            java.lang.String r2 = "onlyWifi"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L100
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == 0) goto Lfd
            r2 = r0
            goto Lfe
        Lfd:
            r2 = r1
        Lfe:
            r8.onlyWifi = r2     // Catch: java.lang.Exception -> L2e7
        L100:
            java.lang.String r2 = "force"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L113
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == 0) goto L110
            r2 = r0
            goto L111
        L110:
            r2 = r1
        L111:
            r8.force = r2     // Catch: java.lang.Exception -> L2e7
        L113:
            java.lang.String r2 = "retryCount"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L121
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.retryCount = r2     // Catch: java.lang.Exception -> L2e7
        L121:
            java.lang.String r2 = "extra"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L12f
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.extra = r2     // Catch: java.lang.Exception -> L2e7
        L12f:
            java.lang.String r2 = "mimeType"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L13d
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.mimeType = r2     // Catch: java.lang.Exception -> L2e7
        L13d:
            java.lang.String r2 = "notificationEnable"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L150
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == 0) goto L14d
            r2 = r0
            goto L14e
        L14d:
            r2 = r1
        L14e:
            r8.showNotification = r2     // Catch: java.lang.Exception -> L2e7
        L150:
            java.lang.String r2 = "notificationVisibility"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L15e
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.notificationVisibility = r2     // Catch: java.lang.Exception -> L2e7
        L15e:
            java.lang.String r2 = "isFirstDownload"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L171
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L16e
            r2 = r0
            goto L16f
        L16e:
            r2 = r1
        L16f:
            r8.isFirstDownload = r2     // Catch: java.lang.Exception -> L2e7
        L171:
            java.lang.String r2 = "isFirstSuccess"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L184
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L181
            r2 = r0
            goto L182
        L181:
            r2 = r1
        L182:
            r8.isFirstSuccess = r2     // Catch: java.lang.Exception -> L2e7
        L184:
            java.lang.String r2 = "needHttpsToHttpRetry"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L197
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L194
            r2 = r0
            goto L195
        L194:
            r2 = r1
        L195:
            r8.needHttpsToHttpRetry = r2     // Catch: java.lang.Exception -> L2e7
        L197:
            java.lang.String r2 = "downloadTime"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L1a5
            long r2 = r9.getLong(r2)     // Catch: java.lang.Exception -> L2e7
            r8.downloadTime = r2     // Catch: java.lang.Exception -> L2e7
        L1a5:
            java.lang.String r2 = "packageName"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L1b3
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.packageName = r2     // Catch: java.lang.Exception -> L2e7
        L1b3:
            java.lang.String r2 = "md5"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L1c1
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.md5 = r2     // Catch: java.lang.Exception -> L2e7
        L1c1:
            java.lang.String r2 = "retryDelay"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L1d4
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L1d1
            r2 = r0
            goto L1d2
        L1d1:
            r2 = r1
        L1d2:
            r8.needRetryDelay = r2     // Catch: java.lang.Exception -> L2e7
        L1d4:
            java.lang.String r2 = "curRetryTime"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L1e2
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.curRetryTime = r2     // Catch: java.lang.Exception -> L2e7
        L1e2:
            java.lang.String r2 = "retryDelayStatus"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L219
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r3 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING     // Catch: java.lang.Exception -> L2e7
            int r3 = r3.ordinal()     // Catch: java.lang.Exception -> L2e7
            if (r2 != r3) goto L1fb
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING     // Catch: java.lang.Exception -> L2e7
            r8.retryDelayStatus = r2     // Catch: java.lang.Exception -> L2e7
            goto L219
        L1fb:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r3 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING     // Catch: java.lang.Exception -> L2e7
            int r3 = r3.ordinal()     // Catch: java.lang.Exception -> L2e7
            if (r2 != r3) goto L208
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING     // Catch: java.lang.Exception -> L2e7
            r8.retryDelayStatus = r2     // Catch: java.lang.Exception -> L2e7
            goto L219
        L208:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r3 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED     // Catch: java.lang.Exception -> L2e7
            int r3 = r3.ordinal()     // Catch: java.lang.Exception -> L2e7
            if (r2 != r3) goto L215
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED     // Catch: java.lang.Exception -> L2e7
            r8.retryDelayStatus = r2     // Catch: java.lang.Exception -> L2e7
            goto L219
        L215:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE     // Catch: java.lang.Exception -> L2e7
            r8.retryDelayStatus = r2     // Catch: java.lang.Exception -> L2e7
        L219:
            java.lang.String r2 = "defaultHttpServiceBackUp"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L22c
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L229
            r2 = r0
            goto L22a
        L229:
            r2 = r1
        L22a:
            r8.needDefaultHttpServiceBackUp = r2     // Catch: java.lang.Exception -> L2e7
        L22c:
            java.lang.String r2 = "chunkRunnableReuse"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L23f
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L23c
            r2 = r0
            goto L23d
        L23c:
            r2 = r1
        L23d:
            r8.needReuseChunkRunnable = r2     // Catch: java.lang.Exception -> L2e7
        L23f:
            java.lang.String r2 = "retryDelayTimeArray"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L24d
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.retryDelayTimeArray = r2     // Catch: java.lang.Exception -> L2e7
        L24d:
            java.lang.String r2 = "chunkDowngradeRetry"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L260
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L25d
            r2 = r0
            goto L25e
        L25d:
            r2 = r1
        L25e:
            r8.needChunkDowngradeRetry = r2     // Catch: java.lang.Exception -> L2e7
        L260:
            java.lang.String r2 = "backUpUrlsStr"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L26f
            java.lang.String r2 = r9.getString(r2)     // Catch: java.lang.Exception -> L2e7
            r8.setBackUpUrlsStr(r2)     // Catch: java.lang.Exception -> L2e7
        L26f:
            java.lang.String r2 = "backUpUrlRetryCount"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L27d
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.backUpUrlRetryCount = r2     // Catch: java.lang.Exception -> L2e7
        L27d:
            java.lang.String r2 = "realDownloadTime"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L28b
            long r2 = r9.getLong(r2)     // Catch: java.lang.Exception -> L2e7
            r8.realDownloadTime = r2     // Catch: java.lang.Exception -> L2e7
        L28b:
            java.lang.String r2 = "retryScheduleMinutes"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L299
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            r8.retryScheduleMinutes = r2     // Catch: java.lang.Exception -> L2e7
        L299:
            java.lang.String r2 = "independentProcess"
            int r2 = r9.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 == r5) goto L2ab
            int r2 = r9.getInt(r2)     // Catch: java.lang.Exception -> L2e7
            if (r2 != r0) goto L2a8
            goto L2a9
        L2a8:
            r0 = r1
        L2a9:
            r8.needIndependentProcess = r0     // Catch: java.lang.Exception -> L2e7
        L2ab:
            java.lang.String r0 = "auxiliaryJsonobjectString"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L2e7
            if (r0 == r5) goto L2b9
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L2e7
            r8.dbJsonDataString = r0     // Catch: java.lang.Exception -> L2e7
        L2b9:
            java.lang.String r0 = "iconUrl"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L2e7
            if (r0 == r5) goto L2c7
            java.lang.String r0 = r9.getString(r0)     // Catch: java.lang.Exception -> L2e7
            r8.iconUrl = r0     // Catch: java.lang.Exception -> L2e7
        L2c7:
            java.lang.String r0 = "appVersionCode"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L2e7
            if (r0 == r5) goto L2d5
            int r0 = r9.getInt(r0)     // Catch: java.lang.Exception -> L2e7
            r8.appVersionCode = r0     // Catch: java.lang.Exception -> L2e7
        L2d5:
            java.lang.String r0 = "taskId"
            int r0 = r9.getColumnIndex(r0)     // Catch: java.lang.Exception -> L2e7
            if (r0 == r5) goto L2e3
            java.lang.String r9 = r9.getString(r0)     // Catch: java.lang.Exception -> L2e7
            r8.taskId = r9     // Catch: java.lang.Exception -> L2e7
        L2e3:
            r8.parseMonitorSetting()     // Catch: java.lang.Exception -> L2e7
            goto L2eb
        L2e7:
            r9 = move-exception
            r9.printStackTrace()
        L2eb:
            return
    }

    protected DownloadInfo(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.needDefaultHttpServiceBackUp = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r3.retryDelayStatus = r1
            r1 = 0
            r3.needReuseFirstConnection = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r2 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE
            r3.asyncHandleStatus = r2
            r3.supportPartial = r0
            r3.needSDKMonitor = r0
            r3.expiredRedownload = r1
            r3.deleteCacheIfCheckFailed = r1
            r3.successByCache = r1
            r3.chunkCount = r0
            r3.isFirstDownload = r0
            r3.isFirstSuccess = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE
            r3.byteInvalidRetryStatus = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r3.enqueueType = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = 0
            r0.<init>(r1)
            r3.lastNotifyProgressTime = r0
            r0 = 0
            r3.isAutoInstallWithoutNotification = r0
            r3.readFromParcel(r4)
            return
    }

    private DownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r7) {
            r6 = this;
            r6.<init>()
            r0 = 1
            r6.needDefaultHttpServiceBackUp = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r6.retryDelayStatus = r1
            r1 = 0
            r6.needReuseFirstConnection = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r2 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE
            r6.asyncHandleStatus = r2
            r6.supportPartial = r0
            r6.needSDKMonitor = r0
            r6.expiredRedownload = r1
            r6.deleteCacheIfCheckFailed = r1
            r6.successByCache = r1
            r6.chunkCount = r0
            r6.isFirstDownload = r0
            r6.isFirstSuccess = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r2 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE
            r6.byteInvalidRetryStatus = r2
            com.ss.android.socialbase.downloader.constants.EnqueueType r2 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r6.enqueueType = r2
            java.util.concurrent.atomic.AtomicLong r2 = new java.util.concurrent.atomic.AtomicLong
            r3 = 0
            r2.<init>(r3)
            r6.lastNotifyProgressTime = r2
            r2 = 0
            r6.isAutoInstallWithoutNotification = r2
            if (r7 != 0) goto L38
            return
        L38:
            java.lang.String r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$000(r7)
            r6.name = r2
            java.lang.String r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$100(r7)
            r6.title = r2
            java.lang.String r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$200(r7)
            r6.url = r2
            java.lang.String r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$300(r7)
            boolean r5 = android.text.TextUtils.isEmpty(r2)
            if (r5 == 0) goto L5d
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getDownloadPath()     // Catch: java.lang.Throwable -> L59
            goto L5d
        L59:
            r5 = move-exception
            r5.printStackTrace()
        L5d:
            r6.savePath = r2
            java.lang.String r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$400(r7)
            r6.tempPath = r5
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L77
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isSavePathSecurity(r2)
            if (r2 != 0) goto L77
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getDownloadTempPath()
            r6.tempPath = r2
        L77:
            boolean r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$500(r7)
            if (r2 == 0) goto La0
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            int r5 = r6.getId()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo(r5)
            if (r2 != 0) goto La7
            java.lang.String r2 = r6.savePath
            java.lang.String r5 = r6.url
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.generateDistinctDirectory(r2, r5)
            r6.savePath = r2
            java.lang.String r2 = r6.tempPath
            java.lang.String r5 = r6.url
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.generateDistinctDirectory(r2, r5)
            r6.tempPath = r2
            goto La7
        La0:
            java.lang.String r2 = "DownloadInfo"
            java.lang.String r5 = "The distinct directory option is not set, which may cause 1005 problems and file downloads being covered"
            com.ss.android.socialbase.downloader.logger.Logger.e(r2, r5)
        La7:
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r2.<init>(r1)
            r6.status = r2
            java.util.concurrent.atomic.AtomicLong r1 = new java.util.concurrent.atomic.AtomicLong
            r1.<init>(r3)
            r6.curBytes = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$600(r7)
            r6.extra = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$700(r7)
            r6.onlyWifi = r1
            java.util.List r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$800(r7)
            r6.extraHeaders = r1
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$900(r7)
            r6.maxBytes = r1
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1000(r7)
            r6.retryCount = r1
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1100(r7)
            r6.backUpUrlRetryCount = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1200(r7)
            r6.force = r1
            java.lang.String[] r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1300(r7)
            r6.outIp = r1
            int[] r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1400(r7)
            r6.outSize = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1500(r7)
            r6.needPostProgress = r1
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1600(r7)
            r6.maxProgressCount = r1
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1700(r7)
            r6.minProgressTimeMsInterval = r1
            java.util.List r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1800(r7)
            r6.backUpUrls = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$1900(r7)
            r6.showNotification = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2000(r7)
            r6.mimeType = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2100(r7)
            r6.needHttpsToHttpRetry = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2200(r7)
            r6.needRetryDelay = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2300(r7)
            r6.retryDelayTimeArray = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2400(r7)
            r6.autoResumed = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2500(r7)
            r6.showNotificationForAutoResumed = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2600(r7)
            r6.needDefaultHttpServiceBackUp = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2700(r7)
            r6.needReuseChunkRunnable = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2800(r7)
            r6.packageName = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$2900(r7)
            r6.md5 = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3000(r7)
            r6.needReuseFirstConnection = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3100(r7)
            r6.needIndependentProcess = r1
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3200(r7)
            r6.enqueueType = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3300(r7)
            r6.headConnectionAvailable = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3400(r7)
            r6.ignoreDataVerify = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3500(r7)
            r6.addListenerToSameTask = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3600(r7)
            r6.needChunkDowngradeRetry = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3700(r7)
            r6.iconUrl = r1
            long r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3800(r7)
            r6.throttleNetSpeed = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$3900(r7)
            r6.openLimitSpeed = r1
            org.json.JSONObject r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4000(r7)
            if (r1 == 0) goto L190
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "download_setting"
            r6.safePutToDBJsonData(r2, r1)
        L190:
            long r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4100(r7)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "dbjson_key_expect_file_length"
            r6.safePutToDBJsonData(r2, r1)
            int r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4200(r7)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "executor_group"
            r6.safePutToDBJsonData(r2, r1)
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4300(r7)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "auto_install"
            r6.safePutToDBJsonData(r2, r1)
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4400(r7)
            r6.needSDKMonitor = r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4500(r7)
            r6.monitorScene = r1
            int[] r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4600(r7)
            r6.extraMonitorStatus = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4700(r7)
            r6.expiredRedownload = r1
            boolean r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4800(r7)
            r6.deleteCacheIfCheckFailed = r1
            long r1 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$4900(r7)
            r6.ttnetProtectTimeout = r1
            boolean r7 = com.ss.android.socialbase.downloader.model.DownloadInfo.Builder.access$500(r7)
            r6.distinctDirectory = r7
            boolean r7 = r6.expiredRedownload
            if (r7 == 0) goto L1eb
            int r7 = r6.retryCount
            if (r7 > 0) goto L1eb
            r6.retryCount = r0
        L1eb:
            r6.putMonitorSetting()
            return
    }

    DownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo.Builder r1, com.ss.android.socialbase.downloader.model.DownloadInfo.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void convertEnqueueType(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_HEAD
            int r0 = r0.ordinal()
            if (r2 != r0) goto Ld
            com.ss.android.socialbase.downloader.constants.EnqueueType r2 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_HEAD
            r1.enqueueType = r2
            goto L1e
        Ld:
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_TAIL
            int r0 = r0.ordinal()
            if (r2 != r0) goto L1a
            com.ss.android.socialbase.downloader.constants.EnqueueType r2 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_TAIL
            r1.enqueueType = r2
            goto L1e
        L1a:
            com.ss.android.socialbase.downloader.constants.EnqueueType r2 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r1.enqueueType = r2
        L1e:
            return
    }

    private void convertRetryDelayStatus(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            int r0 = r0.ordinal()
            if (r2 != r0) goto Ld
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            r1.retryDelayStatus = r2
            goto L2b
        Ld:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING
            int r0 = r0.ordinal()
            if (r2 != r0) goto L1a
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING
            r1.retryDelayStatus = r2
            goto L2b
        L1a:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED
            int r0 = r0.ordinal()
            if (r2 != r0) goto L27
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED
            r1.retryDelayStatus = r2
            goto L2b
        L27:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r1.retryDelayStatus = r2
        L2b:
            return
    }

    private org.json.JSONObject convertStrToJson(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc
            if (r0 != 0) goto L10
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r2 = move-exception
            r2.printStackTrace()
        L10:
            r2 = 0
            return r2
    }

    private void ensureDBJsonData() {
            r2 = this;
            org.json.JSONObject r0 = r2.dbJsonData
            if (r0 != 0) goto L32
            monitor-enter(r2)
            org.json.JSONObject r0 = r2.dbJsonData     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L2d
            java.lang.String r0 = r2.dbJsonDataString     // Catch: java.lang.Throwable -> L26
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L1e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = r2.dbJsonDataString     // Catch: java.lang.Throwable -> L26
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L26
            r2.dbJsonData = r0     // Catch: java.lang.Throwable -> L26
            r0 = 0
            r2.dbJsonDataString = r0     // Catch: java.lang.Throwable -> L26
            goto L2d
        L1e:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            r2.dbJsonData = r0     // Catch: java.lang.Throwable -> L26
            goto L2d
        L26:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L2f
            r2.dbJsonData = r0     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            goto L32
        L2f:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            throw r0
        L32:
            return
    }

    private void ensureSpData() {
            r3 = this;
            org.json.JSONObject r0 = r3.spData
            if (r0 != 0) goto L3d
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L32
            r1 = 0
            java.lang.String r2 = "sp_download_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            int r1 = r3.getId()
            long r1 = (long) r1
            java.lang.String r1 = java.lang.Long.toString(r1)
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L32
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2e
            r1.<init>(r0)     // Catch: org.json.JSONException -> L2e
            r3.spData = r1     // Catch: org.json.JSONException -> L2e
            goto L32
        L2e:
            r0 = move-exception
            r0.printStackTrace()
        L32:
            org.json.JSONObject r0 = r3.spData
            if (r0 != 0) goto L3d
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r3.spData = r0
        L3d:
            return
    }

    private void ensureTempCacheData() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.tempCacheData
            if (r0 != 0) goto L15
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.tempCacheData     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L10
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L12
            r0.<init>()     // Catch: java.lang.Throwable -> L12
            r1.tempCacheData = r0     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L12
            goto L15
        L12:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L12
            throw r0
        L15:
            return
    }

    private java.lang.String getBackUpUrlsStr() {
            r4 = this;
            java.lang.String r0 = r4.backUpUrlsStr
            if (r0 != 0) goto L3a
            java.util.List<java.lang.String> r0 = r4.backUpUrls
            if (r0 == 0) goto L3a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L3a
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L36
            r0.<init>()     // Catch: java.lang.Exception -> L36
            java.util.List<java.lang.String> r1 = r4.backUpUrls     // Catch: java.lang.Exception -> L36
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L36
        L19:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L36
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L36
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L36
            if (r3 != 0) goto L19
            r0.put(r2)     // Catch: java.lang.Exception -> L36
            goto L19
        L2f:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L36
            r4.backUpUrlsStr = r0     // Catch: java.lang.Exception -> L36
            goto L3a
        L36:
            r0 = move-exception
            r0.printStackTrace()
        L3a:
            java.lang.String r0 = r4.backUpUrlsStr
            if (r0 != 0) goto L42
            java.lang.String r0 = ""
            r4.backUpUrlsStr = r0
        L42:
            java.lang.String r0 = r4.backUpUrlsStr
            return r0
    }

    private java.lang.String getDBJsonDataString() {
            r2 = this;
            java.lang.String r0 = r2.dbJsonDataString
            if (r0 == 0) goto L5
            return r0
        L5:
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            monitor-enter(r0)
            org.json.JSONObject r1 = r2.dbJsonData     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L15
            r2.dbJsonDataString = r1     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return r1
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1
    }

    private int getReserveWifiStatus() {
            r3 = this;
            r3.ensureSpData()
            r0 = 0
            org.json.JSONObject r1 = r3.spData     // Catch: java.lang.Exception -> Lc
            java.lang.String r2 = "pause_reserve_on_wifi"
            int r0 = r1.optInt(r2, r0)     // Catch: java.lang.Exception -> Lc
        Lc:
            return r0
    }

    private void mergeAuxiliaryJSONObject(org.json.JSONObject r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            r5.ensureDBJsonData()
            org.json.JSONObject r0 = r5.dbJsonData
            monitor-enter(r0)
            java.util.Iterator r1 = r6.keys()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            if (r2 == 0) goto L30
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            java.lang.Object r3 = r6.opt(r2)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            org.json.JSONObject r4 = r5.dbJsonData     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            boolean r4 = r4.has(r2)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            if (r4 != 0) goto Ld
            if (r3 != 0) goto L28
            goto Ld
        L28:
            org.json.JSONObject r4 = r5.dbJsonData     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            goto Ld
        L2e:
            r6 = move-exception
            goto L38
        L30:
            r6 = 0
            r5.dbJsonDataString = r6     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            r5.parseMonitorSetting()
            return
        L38:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r6
    }

    private void parseMonitorSetting() {
            r4 = this;
            r4.ensureDBJsonData()
            org.json.JSONObject r0 = r4.dbJsonData
            r1 = 0
            java.lang.String r2 = "need_sdk_monitor"
            boolean r0 = r0.optBoolean(r2, r1)
            r4.needSDKMonitor = r0
            org.json.JSONObject r0 = r4.dbJsonData
            java.lang.String r2 = "monitor_scene"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.optString(r2, r3)
            r4.monitorScene = r0
            org.json.JSONObject r0 = r4.dbJsonData
            java.lang.String r2 = "extra_monitor_status"
            org.json.JSONArray r0 = r0.optJSONArray(r2)
            if (r0 == 0) goto L43
            int r2 = r0.length()
            if (r2 <= 0) goto L43
            int r2 = r0.length()
            int[] r2 = new int[r2]
            r4.extraMonitorStatus = r2
        L32:
            int r2 = r0.length()
            if (r1 >= r2) goto L43
            int[] r2 = r4.extraMonitorStatus
            int r3 = r0.optInt(r1)
            r2[r1] = r3
            int r1 = r1 + 1
            goto L32
        L43:
            return
    }

    private void putMonitorSetting() {
            r3 = this;
            boolean r0 = r3.needSDKMonitor
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.String r1 = "need_sdk_monitor"
            r3.safePutToDBJsonData(r1, r0)
            java.lang.String r0 = r3.monitorScene
            java.lang.String r1 = "monitor_scene"
            r3.safePutToDBJsonData(r1, r0)
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L36
            r0.<init>()     // Catch: java.lang.Throwable -> L36
            int[] r1 = r3.extraMonitorStatus     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L30
            int[] r1 = r3.extraMonitorStatus     // Catch: java.lang.Throwable -> L36
            int r1 = r1.length     // Catch: java.lang.Throwable -> L36
            if (r1 <= 0) goto L30
            r1 = 0
        L21:
            int[] r2 = r3.extraMonitorStatus     // Catch: java.lang.Throwable -> L36
            int r2 = r2.length     // Catch: java.lang.Throwable -> L36
            if (r1 >= r2) goto L30
            int[] r2 = r3.extraMonitorStatus     // Catch: java.lang.Throwable -> L36
            r2 = r2[r1]     // Catch: java.lang.Throwable -> L36
            r0.put(r2)     // Catch: java.lang.Throwable -> L36
            int r1 = r1 + 1
            goto L21
        L30:
            java.lang.String r1 = "extra_monitor_status"
            r3.safePutToDBJsonData(r1, r0)     // Catch: java.lang.Throwable -> L36
            goto L3a
        L36:
            r0 = move-exception
            r0.printStackTrace()
        L3a:
            return
    }

    private void refreshBackupUrls(boolean r3) {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.forbiddenBackupUrls
            if (r0 == 0) goto L34
            int r0 = r0.size()
            if (r0 <= r3) goto L34
            java.util.List<java.lang.String> r0 = r2.backUpUrls
            if (r0 != 0) goto L16
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.backUpUrls = r0
            goto L19
        L16:
            r0.clear()
        L19:
            r0 = 0
            r2.backUpUrlUsed = r0
            r2.curBackUpUrlIndex = r0
        L1e:
            java.util.List<java.lang.String> r0 = r2.forbiddenBackupUrls
            int r0 = r0.size()
            if (r3 >= r0) goto L34
            java.util.List<java.lang.String> r0 = r2.backUpUrls
            java.util.List<java.lang.String> r1 = r2.forbiddenBackupUrls
            java.lang.Object r1 = r1.get(r3)
            r0.add(r1)
            int r3 = r3 + 1
            goto L1e
        L34:
            return
    }

    private void setBackUpUrlsStr(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L3e
            int r0 = r4.getStatus()
            r1 = -3
            if (r0 != r1) goto Le
            goto L3e
        Le:
            r4.backUpUrlsStr = r5
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3a
            r0.<init>(r5)     // Catch: java.lang.Exception -> L3a
            int r5 = r0.length()     // Catch: java.lang.Exception -> L3a
            if (r5 <= 0) goto L3e
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L3a
            r5.<init>()     // Catch: java.lang.Exception -> L3a
            r1 = 0
        L21:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L3a
            if (r1 >= r2) goto L37
            java.lang.String r2 = r0.optString(r1)     // Catch: java.lang.Exception -> L3a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L3a
            if (r3 != 0) goto L34
            r5.add(r2)     // Catch: java.lang.Exception -> L3a
        L34:
            int r1 = r1 + 1
            goto L21
        L37:
            r4.backUpUrls = r5     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r5 = move-exception
            r5.printStackTrace()
        L3e:
            return
    }

    public void addErrorBytesLog(long r3, int r5, java.lang.String r6) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Exception -> L40
            if (r0 == 0) goto L44
            java.lang.StringBuffer r0 = r2.errorBytesLog     // Catch: java.lang.Exception -> L40
            if (r0 != 0) goto L11
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L40
            r0.<init>()     // Catch: java.lang.Exception -> L40
            r2.errorBytesLog = r0     // Catch: java.lang.Exception -> L40
        L11:
            java.lang.StringBuffer r0 = r2.errorBytesLog     // Catch: java.lang.Exception -> L40
            int r0 = r0.length()     // Catch: java.lang.Exception -> L40
            if (r0 == 0) goto L20
            java.lang.StringBuffer r0 = r2.errorBytesLog     // Catch: java.lang.Exception -> L40
            java.lang.String r1 = ","
            r0.append(r1)     // Catch: java.lang.Exception -> L40
        L20:
            java.lang.StringBuffer r0 = r2.errorBytesLog     // Catch: java.lang.Exception -> L40
            java.lang.String r1 = "[type:"
            r0.append(r1)     // Catch: java.lang.Exception -> L40
            r0.append(r5)     // Catch: java.lang.Exception -> L40
            java.lang.String r5 = ",bytes:"
            r0.append(r5)     // Catch: java.lang.Exception -> L40
            r0.append(r3)     // Catch: java.lang.Exception -> L40
            java.lang.String r3 = ",method:"
            r0.append(r3)     // Catch: java.lang.Exception -> L40
            r0.append(r6)     // Catch: java.lang.Exception -> L40
            java.lang.String r3 = "]"
            r0.append(r3)     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r3 = move-exception
            r3.printStackTrace()
        L44:
            return
    }

    public void bindValue(android.database.sqlite.SQLiteStatement r10) {
            r9 = this;
            if (r10 != 0) goto L3
            return
        L3:
            r0 = 0
            r9.bindValueCount = r0
            r10.clearBindings()
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.id
            long r1 = (long) r1
            r10.bindLong(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.url
            java.lang.String r2 = ""
            if (r1 != 0) goto L22
            r1 = r2
        L22:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.savePath
            if (r1 != 0) goto L30
            r1 = r2
        L30:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.tempPath
            if (r1 != 0) goto L3e
            r1 = r2
        L3e:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.name
            if (r1 != 0) goto L4c
            r1 = r2
        L4c:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.chunkCount
            long r3 = (long) r1
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.getStatus()
            long r3 = (long) r1
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            long r3 = r9.getCurBytes()
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            long r3 = r9.totalBytes
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.eTag
            if (r1 != 0) goto L8c
            r1 = r2
        L8c:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.onlyWifi
            r3 = 1
            r5 = 0
            if (r1 == 0) goto L9f
            r7 = r3
            goto La0
        L9f:
            r7 = r5
        La0:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.force
            if (r1 == 0) goto Laf
            r7 = r3
            goto Lb0
        Laf:
            r7 = r5
        Lb0:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.retryCount
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.extra
            if (r1 != 0) goto Lca
            r1 = r2
        Lca:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.mimeType
            if (r1 != 0) goto Ld8
            r1 = r2
        Ld8:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.title
            if (r1 != 0) goto Le6
            r1 = r2
        Le6:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.showNotification
            if (r1 == 0) goto Lf5
            r7 = r3
            goto Lf6
        Lf5:
            r7 = r5
        Lf6:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.notificationVisibility
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.isFirstDownload
            if (r1 == 0) goto L111
            r7 = r3
            goto L112
        L111:
            r7 = r5
        L112:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.isFirstSuccess
            if (r1 == 0) goto L121
            r7 = r3
            goto L122
        L121:
            r7 = r5
        L122:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needHttpsToHttpRetry
            if (r1 == 0) goto L131
            r7 = r3
            goto L132
        L131:
            r7 = r5
        L132:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            long r7 = r9.downloadTime
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.packageName
            if (r1 != 0) goto L14b
            r1 = r2
        L14b:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.md5
            if (r1 != 0) goto L159
            r1 = r2
        L159:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needRetryDelay
            if (r1 == 0) goto L168
            r7 = r3
            goto L169
        L168:
            r7 = r5
        L169:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.curRetryTime
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = r9.retryDelayStatus
            int r1 = r1.ordinal()
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needDefaultHttpServiceBackUp
            if (r1 == 0) goto L194
            r7 = r3
            goto L195
        L194:
            r7 = r5
        L195:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needReuseChunkRunnable
            if (r1 == 0) goto L1a4
            r7 = r3
            goto L1a5
        L1a4:
            r7 = r5
        L1a5:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.retryDelayTimeArray
            if (r1 != 0) goto L1b3
            r1 = r2
        L1b3:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needChunkDowngradeRetry
            if (r1 == 0) goto L1c2
            r7 = r3
            goto L1c3
        L1c2:
            r7 = r5
        L1c3:
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.getBackUpUrlsStr()
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.backUpUrlRetryCount
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            long r7 = r9.realDownloadTime
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.retryScheduleMinutes
            long r7 = (long) r1
            r10.bindLong(r0, r7)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            boolean r1 = r9.needIndependentProcess
            if (r1 == 0) goto L201
            goto L202
        L201:
            r3 = r5
        L202:
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.getDBJsonDataString()
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.iconUrl
            if (r1 != 0) goto L21d
            r1 = r2
        L21d:
            r10.bindString(r0, r1)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            int r1 = r9.appVersionCode
            long r3 = (long) r1
            r10.bindLong(r0, r3)
            int r0 = r9.bindValueCount
            int r0 = r0 + 1
            r9.bindValueCount = r0
            java.lang.String r1 = r9.taskId
            if (r1 != 0) goto L237
            goto L238
        L237:
            r2 = r1
        L238:
            r10.bindString(r0, r2)
            return
    }

    public boolean cacheExpierd() {
            r1 = this;
            boolean r0 = r1.isDownloaded()
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.cacheExpired(r1)
            return r0
    }

    public boolean canNotifyProgress() {
            r4 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r4.lastNotifyProgressTime
            long r0 = r0.get()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1a
            long r2 = android.os.SystemClock.uptimeMillis()
            long r2 = r2 - r0
            r0 = 20
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            goto L1a
        L18:
            r0 = 0
            goto L1b
        L1a:
            r0 = 1
        L1b:
            return r0
    }

    public boolean canReStartAsyncTask() {
            r2 = this;
            int r0 = r2.getStatus()
            r1 = -3
            if (r0 == r1) goto Lf
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r2.asyncHandleStatus
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING
            if (r0 != r1) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public boolean canReplaceHttpForRetry() {
            r2 = this;
            java.lang.String r0 = r2.url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.url
            java.lang.String r1 = "https"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L1c
            boolean r0 = r2.needHttpsToHttpRetry
            if (r0 == 0) goto L1c
            boolean r0 = r2.httpsToHttpRetryUsed
            if (r0 != 0) goto L1c
            r0 = 1
            goto L1d
        L1c:
            r0 = 0
        L1d:
            return r0
    }

    public boolean canShowNotification() {
            r1 = this;
            boolean r0 = r1.autoResumed
            if (r0 != 0) goto L8
            boolean r0 = r1.showNotification
            if (r0 != 0) goto L14
        L8:
            boolean r0 = r1.autoResumed
            if (r0 == 0) goto L16
            boolean r0 = r1.showNotificationForAutoResumed
            if (r0 != 0) goto L14
            boolean r0 = r1.showNotificationForNetworkResumed
            if (r0 == 0) goto L16
        L14:
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public boolean canSkipStatusHandler() {
            r3 = this;
            int r0 = r3.getStatus()
            r1 = 7
            if (r0 == r1) goto L26
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = r3.retryDelayStatus
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            if (r1 == r2) goto L26
            r1 = 8
            if (r0 == r1) goto L26
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r3.asyncHandleStatus
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING
            if (r0 == r1) goto L26
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r3.asyncHandleStatus
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_RESTART
            if (r0 == r1) goto L26
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = r3.byteInvalidRetryStatus
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_RESTART
            if (r0 != r1) goto L24
            goto L26
        L24:
            r0 = 0
            goto L27
        L26:
            r0 = 1
        L27:
            return r0
    }

    public boolean canStartRetryDelayTask() {
            r2 = this;
            boolean r0 = r2.isNeedRetryDelay()
            if (r0 == 0) goto L15
            int r0 = r2.getStatus()
            r1 = -3
            if (r0 == r1) goto L15
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = r2.retryDelayStatus
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            if (r0 != r1) goto L15
            r0 = 1
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    public void changeSkipStatus() {
            r3 = this;
            int r0 = r3.getStatus()
            r1 = 7
            if (r0 == r1) goto Ld
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = r3.retryDelayStatus
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r2 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            if (r1 != r2) goto L12
        Ld:
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING
            r3.setRetryDelayStatus(r1)
        L12:
            r1 = 8
            if (r0 == r1) goto L22
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r3.asyncHandleStatus
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING
            if (r0 == r1) goto L22
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r3.asyncHandleStatus
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_RESTART
            if (r0 != r1) goto L27
        L22:
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADING
            r3.setAsyncHandleStatus(r0)
        L27:
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = r3.byteInvalidRetryStatus
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_RESTART
            if (r0 != r1) goto L32
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADING
            r3.setByteInvalidRetryStatus(r0)
        L32:
            return
    }

    public int checkMd5Status() {
            r3 = this;
            java.lang.String r0 = r3.getSavePath()
            java.lang.String r1 = r3.getName()
            java.lang.String r2 = r3.md5
            int r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.checkMd5Status(r0, r1, r2)
            return r0
    }

    public boolean checkMd5Valid() {
            r3 = this;
            java.lang.String r0 = r3.getSavePath()
            java.lang.String r1 = r3.getName()
            java.lang.String r2 = r3.md5
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.checkMd5Valid(r0, r1, r2)
            return r0
    }

    public void clearSpData() {
            r3 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L25
            java.lang.String r1 = "sp_download_info"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L21
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L21
            int r1 = r3.getId()     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> L21
            android.content.SharedPreferences$Editor r0 = r0.remove(r1)     // Catch: java.lang.Throwable -> L21
            r0.apply()     // Catch: java.lang.Throwable -> L21
            goto L25
        L21:
            r0 = move-exception
            r0.printStackTrace()
        L25:
            return
    }

    public void copyFromCacheData(com.ss.android.socialbase.downloader.model.DownloadInfo r4, boolean r5) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.getChunkCount()
            r3.setChunkCount(r0)
            long r0 = r4.getTotalBytes()
            r3.setTotalBytes(r0)
            long r0 = r4.getCurBytes()
            r2 = 1
            r3.setCurBytes(r0, r2)
            long r0 = r4.realDownloadTime
            r3.realDownloadTime = r0
            boolean r0 = r4.canSkipStatusHandler()
            if (r0 != 0) goto L35
            boolean r0 = r3.canSkipStatusHandler()
            if (r0 != 0) goto L35
            r0 = 0
            r3.curRetryTime = r0
            r3.isForbiddenRetryed = r0
            r3.backUpUrlUsed = r0
            r3.curBackUpUrlIndex = r0
            r3.httpsToHttpRetryUsed = r0
            goto L3b
        L35:
            int r0 = r4.getCurRetryTime()
            r3.curRetryTime = r0
        L3b:
            java.lang.String r0 = r4.geteTag()
            r3.seteTag(r0)
            if (r5 == 0) goto L4b
            int r5 = r4.getStatus()
            r3.setStatus(r5)
        L4b:
            boolean r5 = r4.getIsFirstDownload()
            r3.isFirstDownload = r5
            boolean r5 = r4.isFirstSuccess()
            r3.isFirstSuccess = r5
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r5 = r4.getRetryDelayStatus()
            r3.retryDelayStatus = r5
            org.json.JSONObject r4 = r4.dbJsonData
            r3.mergeAuxiliaryJSONObject(r4)
            return
    }

    public void copyTaskIdFromCacheData(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r1 = r1.getTaskId()
            r0.taskId = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equalsTask(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r3.url
            if (r1 == 0) goto L21
            java.lang.String r2 = r4.getUrl()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L21
            java.lang.String r1 = r3.savePath
            if (r1 == 0) goto L21
            java.lang.String r4 = r4.getSavePath()
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L21
            r0 = 1
        L21:
            return r0
    }

    public void erase() {
            r3 = this;
            r0 = 1
            r1 = 0
            r3.setCurBytes(r1, r0)
            r3.totalBytes = r1
            r3.chunkCount = r0
            r3.downloadTime = r1
            r3.realStartDownloadTime = r1
            r3.realDownloadTime = r1
            r1 = 0
            r3.curRetryTime = r1
            r3.isFirstDownload = r0
            r3.isFirstSuccess = r0
            r3.backUpUrlUsed = r1
            r3.httpsToHttpRetryUsed = r1
            r0 = 0
            r3.eTag = r0
            r3.failedException = r0
            r3.tempCacheData = r0
            r3.packageInfoRef = r0
            return
    }

    public void generateTaskId() {
            r1 = this;
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r1.taskId = r0
            return
    }

    public long getAllConnectTime() {
            r3 = this;
            r3.ensureDBJsonData()
            java.util.concurrent.atomic.AtomicLong r0 = r3.allConnectTime
            if (r0 != 0) goto L16
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "dbjson_key_all_connect_time"
            long r0 = r0.optLong(r1)
            java.util.concurrent.atomic.AtomicLong r2 = new java.util.concurrent.atomic.AtomicLong
            r2.<init>(r0)
            r3.allConnectTime = r2
        L16:
            java.util.concurrent.atomic.AtomicLong r0 = r3.allConnectTime
            long r0 = r0.get()
            return r0
    }

    public int getAntiHijackErrorCode(int r3) {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "anti_hijack_error_code"
            int r3 = r0.optInt(r1, r3)
            return r3
    }

    public int getAppVersionCode() {
            r1 = this;
            int r0 = r1.appVersionCode
            return r0
    }

    public com.ss.android.socialbase.downloader.constants.AsyncHandleStatus getAsyncHandleStatus() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = r1.asyncHandleStatus
            return r0
    }

    public java.lang.String getBackUpUrl() {
            r2 = this;
            boolean r0 = r2.backUpUrlUsed
            if (r0 == 0) goto L2b
            java.util.List<java.lang.String> r0 = r2.backUpUrls
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            int r0 = r2.curBackUpUrlIndex
            if (r0 < 0) goto L2b
            java.util.List<java.lang.String> r1 = r2.backUpUrls
            int r1 = r1.size()
            if (r0 >= r1) goto L2b
            java.util.List<java.lang.String> r0 = r2.backUpUrls
            int r1 = r2.curBackUpUrlIndex
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2b
            goto L2d
        L2b:
            java.lang.String r0 = ""
        L2d:
            return r0
    }

    public int getBackUpUrlRetryCount() {
            r1 = this;
            int r0 = r1.backUpUrlRetryCount
            return r0
    }

    public java.util.List<java.lang.String> getBackUpUrls() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.backUpUrls
            return r0
    }

    public int getBindValueCount() {
            r1 = this;
            int r0 = r1.bindValueCount
            return r0
    }

    public com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus getByteInvalidRetryStatus() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = r1.byteInvalidRetryStatus
            return r0
    }

    public java.lang.String getCacheControl() {
            r3 = this;
            r3.ensureSpData()
            r0 = 0
            org.json.JSONObject r1 = r3.spData     // Catch: java.lang.Exception -> Lc
            java.lang.String r2 = "cache-control"
            java.lang.String r0 = r1.optString(r2, r0)     // Catch: java.lang.Exception -> Lc
        Lc:
            return r0
    }

    public long getCacheExpiredTime() {
            r4 = this;
            r4.ensureSpData()
            r0 = -1
            org.json.JSONObject r2 = r4.spData     // Catch: java.lang.Exception -> Ld
            java.lang.String r3 = "cache-control/expired_time"
            long r0 = r2.optLong(r3, r0)     // Catch: java.lang.Exception -> Ld
        Ld:
            return r0
    }

    public int getChunkCount() {
            r1 = this;
            int r0 = r1.chunkCount
            return r0
    }

    public java.lang.String getConnectionUrl() {
            r3 = this;
            java.lang.String r0 = r3.url
            int r1 = r3.getStatus()
            r2 = 8
            if (r1 != r2) goto L22
            java.util.List<java.lang.String> r1 = r3.forbiddenBackupUrls
            if (r1 == 0) goto L22
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L22
            boolean r1 = r3.backUpUrlUsed
            if (r1 != 0) goto L22
            java.util.List<java.lang.String> r0 = r3.forbiddenBackupUrls
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            goto L70
        L22:
            boolean r1 = r3.backUpUrlUsed
            if (r1 == 0) goto L4e
            java.util.List<java.lang.String> r1 = r3.backUpUrls
            if (r1 == 0) goto L4e
            int r1 = r1.size()
            if (r1 <= 0) goto L4e
            int r1 = r3.curBackUpUrlIndex
            if (r1 < 0) goto L4e
            java.util.List<java.lang.String> r2 = r3.backUpUrls
            int r2 = r2.size()
            if (r1 >= r2) goto L4e
            java.util.List<java.lang.String> r1 = r3.backUpUrls
            int r2 = r3.curBackUpUrlIndex
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L70
            r0 = r1
            goto L70
        L4e:
            java.lang.String r1 = r3.url
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L70
            java.lang.String r1 = r3.url
            java.lang.String r2 = "https"
            boolean r1 = r1.startsWith(r2)
            if (r1 == 0) goto L70
            boolean r1 = r3.needHttpsToHttpRetry
            if (r1 == 0) goto L70
            boolean r1 = r3.httpsToHttpRetryUsed
            if (r1 == 0) goto L70
            java.lang.String r0 = r3.url
            java.lang.String r1 = "http"
            java.lang.String r0 = r0.replaceFirst(r2, r1)
        L70:
            return r0
    }

    public int getCurBackUpUrlIndex() {
            r1 = this;
            int r0 = r1.curBackUpUrlIndex
            return r0
    }

    public long getCurBytes() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.curBytes
            if (r0 == 0) goto L9
            long r0 = r0.get()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getCurRetryTime() {
            r1 = this;
            int r0 = r1.curRetryTime
            return r0
    }

    public int getCurRetryTimeInTotal() {
            r3 = this;
            int r0 = r3.curRetryTime
            boolean r1 = r3.backUpUrlUsed
            if (r1 == 0) goto L11
            int r1 = r3.retryCount
            int r0 = r0 + r1
            int r1 = r3.curBackUpUrlIndex
            if (r1 <= 0) goto L11
            int r2 = r3.backUpUrlRetryCount
            int r1 = r1 * r2
            int r0 = r0 + r1
        L11:
            return r0
    }

    public int getDBJsonInt(java.lang.String r2) {
            r1 = this;
            r1.ensureDBJsonData()
            org.json.JSONObject r0 = r1.dbJsonData
            int r2 = r0.optInt(r2)
            return r2
    }

    public java.lang.String getDBJsonString(java.lang.String r2) {
            r1 = this;
            r1.ensureDBJsonData()
            org.json.JSONObject r0 = r1.dbJsonData
            java.lang.String r2 = r0.optString(r2)
            return r2
    }

    public long getDownloadPrepareTime() {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "dbjson_key_download_prepare_time"
            long r0 = r0.optLong(r1)
            return r0
    }

    public int getDownloadProcess() {
            r4 = this;
            long r0 = r4.totalBytes
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto La
            r0 = 0
            return r0
        La:
            long r0 = r4.getCurBytes()
            long r2 = r4.totalBytes
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            r0 = 100
            return r0
        L17:
            long r0 = r4.getCurBytes()
            r2 = 100
            long r0 = r0 * r2
            long r2 = r4.totalBytes
            long r0 = r0 / r2
            int r0 = (int) r0
            return r0
    }

    public java.lang.String getDownloadSettingString() {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "download_setting"
            java.lang.String r0 = r0.optString(r1)
            return r0
    }

    public double getDownloadSpeed() {
            r7 = this;
            long r0 = r7.getCurBytes()
            double r0 = (double) r0
            r2 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r0 = r0 / r2
            long r2 = r7.getRealDownloadTime()
            double r2 = (double) r2
            r4 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r2 = r2 / r4
            r4 = 0
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1f
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L1f
            double r0 = r0 / r2
            goto L21
        L1f:
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
        L21:
            return r0
    }

    public long getDownloadTime() {
            r2 = this;
            long r0 = r2.downloadTime
            return r0
    }

    public com.ss.android.socialbase.downloader.constants.EnqueueType getEnqueueType() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r1.enqueueType
            return r0
    }

    public java.lang.String getErrorBytesLog() {
            r1 = this;
            java.lang.StringBuffer r0 = r1.errorBytesLog
            if (r0 == 0) goto L12
            int r0 = r0.length()
            if (r0 != 0) goto Lb
            goto L12
        Lb:
            java.lang.StringBuffer r0 = r1.errorBytesLog
            java.lang.String r0 = r0.toString()
            return r0
        L12:
            java.lang.String r0 = ""
            return r0
    }

    public int getExecutorGroup() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "executor_group"
            r2 = 2
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public long getExpectFileLength() {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "dbjson_key_expect_file_length"
            long r0 = r0.optLong(r1)
            return r0
    }

    public java.lang.String getExtra() {
            r1 = this;
            java.lang.String r0 = r1.extra
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> getExtraHeaders() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r1.extraHeaders
            return r0
    }

    public int[] getExtraMonitorStatus() {
            r1 = this;
            int[] r0 = r1.extraMonitorStatus
            return r0
    }

    public com.ss.android.socialbase.downloader.exception.BaseException getFailedException() {
            r1 = this;
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r1.failedException
            return r0
    }

    public int getFailedResumeCount() {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData
            java.lang.String r1 = "failed_resume_count"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public java.lang.String getFilePackageName() {
            r1 = this;
            java.lang.String r0 = r1.filePackageName
            return r0
    }

    public long getFirstSpeedTime() {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "dbjson_key_first_speed_time"
            long r0 = r0.optLong(r1)
            return r0
    }

    public java.util.List<java.lang.String> getForbiddenBackupUrls() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.forbiddenBackupUrls
            return r0
    }

    public java.lang.String getHeadConnectionException() {
            r1 = this;
            java.lang.String r0 = r1.headConnectionException
            return r0
    }

    public int getHttpStatusCode() {
            r1 = this;
            int r0 = r1.httpStatusCode
            return r0
    }

    public java.lang.String getHttpStatusMessage() {
            r1 = this;
            java.lang.String r0 = r1.httpStatusMessage
            return r0
    }

    public java.lang.String getIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.iconUrl
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            if (r0 != 0) goto La
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1)
            r1.id = r0
        La:
            int r0 = r1.id
            return r0
    }

    public boolean getIsFirstDownload() {
            r1 = this;
            boolean r0 = r1.isFirstDownload
            return r0
    }

    public long getLastDownloadTime() {
            r4 = this;
            r4.ensureDBJsonData()
            org.json.JSONObject r0 = r4.dbJsonData
            java.lang.String r1 = "dbjson_last_start_download_time"
            r2 = 0
            long r0 = r0.optLong(r1, r2)
            return r0
    }

    public long getLastFailedResumeTime() {
            r4 = this;
            r4.ensureSpData()
            org.json.JSONObject r0 = r4.spData
            java.lang.String r1 = "last_failed_resume_time"
            r2 = 0
            long r0 = r0.optLong(r1, r2)
            return r0
    }

    public java.lang.String getLastModified() {
            r3 = this;
            r3.ensureSpData()
            r0 = 0
            org.json.JSONObject r1 = r3.spData     // Catch: java.lang.Exception -> Lc
            java.lang.String r2 = "last-modified"
            java.lang.String r0 = r1.optString(r2, r0)     // Catch: java.lang.Exception -> Lc
        Lc:
            return r0
    }

    public long getLastUninstallResumeTime() {
            r4 = this;
            r4.ensureSpData()
            org.json.JSONObject r0 = r4.spData
            java.lang.String r1 = "last_unins_resume_time"
            r2 = 0
            long r0 = r0.optLong(r1, r2)
            return r0
    }

    public int getLinkMode() {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            java.lang.String r1 = "link_mode"
            int r0 = r0.optInt(r1)
            return r0
    }

    public int getMaxBytes() {
            r1 = this;
            int r0 = r1.maxBytes
            return r0
    }

    public int getMaxProgressCount() {
            r1 = this;
            int r0 = r1.maxProgressCount
            return r0
    }

    public java.lang.String getMd5() {
            r1 = this;
            java.lang.String r0 = r1.md5
            return r0
    }

    public java.lang.String getMimeType() {
            r1 = this;
            java.lang.String r0 = r1.mimeType
            return r0
    }

    public long getMinByteIntervalForPostToMainThread(long r3) {
            r2 = this;
            int r0 = r2.maxProgressCount
            if (r0 > 0) goto L6
            r0 = 100
        L6:
            int r0 = r0 + 1
            long r0 = (long) r0
            long r3 = r3 / r0
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L13
            r3 = 1048576(0x100000, double:5.180654E-318)
        L13:
            return r3
    }

    public int getMinProgressTimeMsInterval() {
            r2 = this;
            int r0 = r2.minProgressTimeMsInterval
            r1 = 1000(0x3e8, float:1.401E-42)
            if (r0 >= r1) goto L7
            r0 = r1
        L7:
            return r0
    }

    public java.lang.String getMonitorScene() {
            r1 = this;
            java.lang.String r0 = r1.monitorScene
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getNetworkQuality() {
            r1 = this;
            java.lang.String r0 = r1.networkQuality
            return r0
    }

    public int getNotificationVisibility() {
            r1 = this;
            int r0 = r1.notificationVisibility
            return r0
    }

    public boolean getOpenLimitSpeed() {
            r1 = this;
            boolean r0 = r1.openLimitSpeed
            return r0
    }

    public java.lang.String[] getOutIp() {
            r1 = this;
            java.lang.String[] r0 = r1.outIp
            return r0
    }

    public int[] getOutSize() {
            r1 = this;
            int[] r0 = r1.outSize
            return r0
    }

    public android.content.pm.PackageInfo getPackageInfo() {
            r1 = this;
            java.lang.ref.SoftReference<android.content.pm.PackageInfo> r0 = r1.packageInfoRef
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            java.lang.Object r0 = r0.get()
            android.content.pm.PackageInfo r0 = (android.content.pm.PackageInfo) r0
        Lc:
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public int getPausedResumeCount() {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData
            java.lang.String r1 = "paused_resume_count"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public int getPreconnectLevel() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "dbjson_key_preconnect_level"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public long getRealDownloadTime() {
            r3 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.NANOSECONDS
            long r1 = r3.realDownloadTime
            long r0 = r0.toMillis(r1)
            return r0
    }

    public int getRealStatus() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.status
            if (r0 == 0) goto L9
            int r0 = r0.get()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int getRetryCount() {
            r1 = this;
            int r0 = r1.retryCount
            return r0
    }

    public com.ss.android.socialbase.downloader.constants.RetryDelayStatus getRetryDelayStatus() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = r1.retryDelayStatus
            return r0
    }

    public java.lang.String getRetryDelayTimeArray() {
            r1 = this;
            java.lang.String r0 = r1.retryDelayTimeArray
            return r0
    }

    public int getRetryScheduleCount() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "retry_schedule_count"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public java.lang.String getSavePath() {
            r1 = this;
            java.lang.String r0 = r1.savePath
            return r0
    }

    public int getSpIntVal(java.lang.String r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData
            r1 = 0
            int r3 = r0.optInt(r3, r1)
            return r3
    }

    public long getSpLongVal(java.lang.String r4) {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData
            r1 = 0
            long r0 = r0.optLong(r4, r1)
            return r0
    }

    public java.lang.String getSpStringVal(java.lang.String r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData
            r1 = 0
            java.lang.String r3 = r0.optString(r3, r1)
            return r3
    }

    public int getStatus() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.status
            if (r0 == 0) goto Ld
            int r0 = r0.get()
            r1 = -5
            if (r0 != r1) goto Lc
            r0 = -2
        Lc:
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int getStatusAtDbInit() {
            r1 = this;
            int r0 = r1.statusAtDbInit
            return r0
    }

    public int getTTMd5CheckStatus() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "ttmd5_check_status"
            r2 = -1
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public java.lang.String getTargetFilePath() {
            r2 = this;
            java.lang.String r0 = r2.savePath
            java.lang.String r1 = r2.name
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getTargetFilePath(r0, r1)
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.taskId
            return r0
    }

    public java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> getTempCacheData() {
            r1 = this;
            r1.ensureTempCacheData()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.tempCacheData
            return r0
    }

    public java.lang.String getTempFilePath() {
            r3 = this;
            java.lang.String r0 = r3.savePath
            java.lang.String r1 = r3.tempPath
            java.lang.String r2 = r3.name
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getTempFilePath(r0, r1, r2)
            return r0
    }

    public java.lang.String getTempName() {
            r1 = this;
            java.lang.String r0 = r1.name
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getTempFileName(r0)
            return r0
    }

    public java.lang.String getTempPath() {
            r2 = this;
            java.lang.String r0 = r2.savePath
            java.lang.String r1 = r2.tempPath
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getTempFileSavePath(r0, r1)
            return r0
    }

    public long getThrottleNetSpeed() {
            r2 = this;
            long r0 = r2.throttleNetSpeed
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r1.name
            return r0
        Lb:
            java.lang.String r0 = r1.title
            return r0
    }

    public long getTotalBytes() {
            r2 = this;
            long r0 = r2.totalBytes
            return r0
    }

    public int getTotalRetryCount() {
            r3 = this;
            int r0 = r3.retryCount
            java.util.List<java.lang.String> r1 = r3.backUpUrls
            if (r1 == 0) goto L16
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L16
            int r1 = r3.backUpUrlRetryCount
            java.util.List<java.lang.String> r2 = r3.backUpUrls
            int r2 = r2.size()
            int r1 = r1 * r2
            int r0 = r0 + r1
        L16:
            return r0
    }

    public long getTtnetProtectTimeout() {
            r2 = this;
            long r0 = r2.ttnetProtectTimeout
            return r0
    }

    public int getUninstallResumeCount() {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData
            java.lang.String r1 = "unins_resume_count"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.url
            return r0
    }

    public java.lang.String geteTag() {
            r1 = this;
            java.lang.String r0 = r1.eTag
            return r0
    }

    public synchronized void handleTempSaveCallback(boolean r4, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            r3.isSaveTempFile = r0     // Catch: java.lang.Throwable -> L4e
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r0 = r3.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto La
            monitor-exit(r3)
            return
        La:
            java.lang.String r0 = "DownloadInfo"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e
            r1.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "handleTempSaveCallback isSuccess "
            r1.append(r2)     // Catch: java.lang.Throwable -> L4e
            r1.append(r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = " callback size:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L4e
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r2 = r3.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L4e
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L4e
            r1.append(r2)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4e
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L4e
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r0 = r3.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L4e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4e
        L34:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4e
            com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback r1 = (com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback) r1     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L34
            if (r4 == 0) goto L48
            r1.onSuccess()     // Catch: java.lang.Throwable -> L4e
            goto L34
        L48:
            r1.onFailed(r5)     // Catch: java.lang.Throwable -> L4e
            goto L34
        L4c:
            monitor-exit(r3)
            return
        L4e:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public boolean hasNextBackupUrl() {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.backUpUrls
            r1 = 1
            if (r0 == 0) goto L1d
            int r0 = r0.size()
            if (r0 <= 0) goto L1d
            boolean r0 = r3.backUpUrlUsed
            if (r0 == 0) goto L1e
            int r0 = r3.curBackUpUrlIndex
            if (r0 < 0) goto L1d
            java.util.List<java.lang.String> r2 = r3.backUpUrls
            int r2 = r2.size()
            int r2 = r2 - r1
            if (r0 >= r2) goto L1d
            goto L1e
        L1d:
            r1 = 0
        L1e:
            return r1
    }

    public boolean hasPauseReservedOnWifi() {
            r2 = this;
            int r0 = r2.getReserveWifiStatus()
            r1 = 1
            r0 = r0 & r1
            if (r0 <= 0) goto L9
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    public void increaseAllConnectTime(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            r2.getAllConnectTime()
            java.util.concurrent.atomic.AtomicLong r0 = r2.allConnectTime
            long r3 = r0.addAndGet(r3)
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            java.lang.String r4 = "dbjson_key_all_connect_time"
            r2.safePutToDBJsonData(r4, r3)
        L18:
            return
    }

    public void increaseCurBytes(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.curBytes
            r0.addAndGet(r2)
            return
    }

    public void increaseDownloadPrepareTime(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L14
            long r0 = r2.getDownloadPrepareTime()
            long r0 = r0 + r3
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            java.lang.String r4 = "dbjson_key_download_prepare_time"
            r2.safePutToDBJsonData(r4, r3)
        L14:
            return
    }

    public boolean isAddListenerToSameTask() {
            r1 = this;
            boolean r0 = r1.addListenerToSameTask
            return r0
    }

    public boolean isAutoInstall() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            r1 = 1
            java.lang.String r2 = "auto_install"
            int r0 = r0.optInt(r2, r1)
            if (r0 != r1) goto Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public boolean isAutoInstallWithoutNotification() {
            r3 = this;
            java.lang.Boolean r0 = r3.isAutoInstallWithoutNotification
            if (r0 != 0) goto L2e
            java.lang.String r0 = r3.extra
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L28
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L21
            java.lang.String r2 = r3.extra     // Catch: org.json.JSONException -> L21
            r0.<init>(r2)     // Catch: org.json.JSONException -> L21
            java.lang.String r2 = "auto_install_without_notification"
            boolean r0 = r0.optBoolean(r2, r1)     // Catch: org.json.JSONException -> L21
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: org.json.JSONException -> L21
            r3.isAutoInstallWithoutNotification = r0     // Catch: org.json.JSONException -> L21
            goto L2e
        L21:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            r3.isAutoInstallWithoutNotification = r0
            goto L2e
        L28:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            r3.isAutoInstallWithoutNotification = r0
        L2e:
            java.lang.Boolean r0 = r3.isAutoInstallWithoutNotification
            boolean r0 = r0.booleanValue()
            return r0
    }

    public boolean isAutoResumed() {
            r1 = this;
            boolean r0 = r1.autoResumed
            return r0
    }

    public boolean isBackUpUrlUsed() {
            r1 = this;
            boolean r0 = r1.backUpUrlUsed
            return r0
    }

    public boolean isBreakpointAvailable() {
            r1 = this;
            boolean r0 = r1.isFileDataValid()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean r0 = r1.isChunkBreakpointAvailable()
            return r0
    }

    public boolean isCanResumeFromBreakPointStatus() {
            r6 = this;
            int r0 = r6.getStatus()
            r1 = 1
            r2 = 4
            if (r0 == r2) goto L26
            r2 = 3
            if (r0 == r2) goto L26
            r2 = -1
            if (r0 == r2) goto L26
            r2 = 5
            if (r0 == r2) goto L26
            r2 = 8
            if (r0 == r2) goto L26
            if (r0 == r1) goto L1a
            r2 = 2
            if (r0 != r2) goto L25
        L1a:
            long r2 = r6.getCurBytes()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L25
            goto L26
        L25:
            r1 = 0
        L26:
            return r1
    }

    public boolean isChunkBreakpointAvailable() {
            r6 = this;
            int r0 = r6.chunkCount
            r1 = 1
            if (r0 <= r1) goto L46
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            if (r0 == 0) goto L46
            int r2 = r6.getId()
            java.util.List r0 = r0.getDownloadChunk(r2)
            if (r0 == 0) goto L44
            int r2 = r0.size()
            int r3 = r6.chunkCount
            if (r2 == r3) goto L1e
            goto L44
        L1e:
            r2 = 0
            java.util.Iterator r0 = r0.iterator()
        L24:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L38
            java.lang.Object r4 = r0.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r4 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r4
            if (r4 == 0) goto L24
            long r4 = r4.getDownloadChunkBytes()
            long r2 = r2 + r4
            goto L24
        L38:
            long r4 = r6.getCurBytes()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L46
            r6.setCurBytes(r2)
            goto L46
        L44:
            r0 = 0
            return r0
        L46:
            return r1
    }

    public boolean isChunkDowngradeRetryUsed() {
            r1 = this;
            boolean r0 = r1.chunkDowngradeRetryUsed
            return r0
    }

    public boolean isChunked() {
            r2 = this;
            long r0 = r2.totalBytes
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isChunkedTask(r0)
            return r0
    }

    public boolean isDeleteCacheIfCheckFailed() {
            r1 = this;
            boolean r0 = r1.deleteCacheIfCheckFailed
            return r0
    }

    public boolean isDownloadFromReserveWifi() {
            r1 = this;
            boolean r0 = r1.mDownloadFromReserveWifi
            return r0
    }

    public boolean isDownloadOverStatus() {
            r1 = this;
            int r0 = r1.getStatus()
            boolean r0 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloadOver(r0)
            return r0
    }

    public boolean isDownloadWithWifiValid() {
            r1 = this;
            boolean r0 = r1.isOnlyWifi()
            if (r0 == 0) goto L13
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    public boolean isDownloaded() {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isFileDownloaded(r1)
            return r0
    }

    public boolean isDownloadingStatus() {
            r1 = this;
            int r0 = r1.getStatus()
            boolean r0 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r0)
            return r0
    }

    public boolean isEntityInvalid() {
            r1 = this;
            java.lang.String r0 = r1.url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r1.name
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r1.savePath
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L19
            goto L1b
        L19:
            r0 = 0
            goto L1c
        L1b:
            r0 = 1
        L1c:
            return r0
    }

    public boolean isExpiredRedownload() {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 0
            java.lang.String r2 = "force_close_download_cache_check"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "isExpiredRedownload force to false, reason(global setting) id="
            r0.append(r2)
            int r2 = r3.getId()
            r0.append(r2)
            java.lang.String r2 = " name="
            r0.append(r2)
            java.lang.String r2 = r3.getName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r0)
            return r1
        L33:
            boolean r0 = r3.expiredRedownload
            return r0
    }

    public boolean isFileDataExists() {
            r4 = this;
            boolean r0 = r4.isEntityInvalid()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r4.getTempPath()
            java.lang.String r3 = r4.getTempName()
            r0.<init>(r2, r3)
            boolean r2 = r0.exists()
            boolean r0 = r0.isDirectory()
            if (r2 == 0) goto L24
            if (r0 == 0) goto L22
            goto L24
        L22:
            r0 = 1
            return r0
        L24:
            return r1
    }

    public boolean isFileDataValid() {
            r14 = this;
            boolean r0 = r14.isEntityInvalid()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r14.getTempPath()
            java.lang.String r3 = r14.getTempName()
            r0.<init>(r2, r3)
            boolean r2 = r0.exists()
            boolean r3 = r0.isDirectory()
            if (r2 == 0) goto Lb9
            if (r3 == 0) goto L23
            goto Lb9
        L23:
            long r2 = r0.length()
            long r4 = r14.getCurBytes()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r6 = "fix_file_data_valid"
            boolean r0 = r0.optBugFix(r6)
            java.lang.String r6 = ",fileLength="
            java.lang.String r7 = ",totalBytes ="
            java.lang.String r8 = "isFileDataValid: cur = "
            java.lang.String r9 = "DownloadInfo"
            r10 = 0
            if (r0 == 0) goto L78
            int r0 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r0 <= 0) goto L57
            long r12 = r14.totalBytes
            int r0 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r0 <= 0) goto L57
            int r0 = r14.chunkCount
            if (r0 <= 0) goto L57
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L57
            int r0 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r0 <= 0) goto L97
        L57:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r4)
            r0.append(r7)
            long r4 = r14.totalBytes
            r0.append(r4)
            r0.append(r6)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r9, r0)
            return r1
        L78:
            int r0 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r0 <= 0) goto L99
            int r0 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r0 <= 0) goto L99
            long r12 = r14.totalBytes
            int r0 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r0 <= 0) goto L99
            int r0 = r14.chunkCount
            if (r0 <= 0) goto L99
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L99
            int r0 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r0 > 0) goto L99
            int r0 = (r4 > r12 ? 1 : (r4 == r12 ? 0 : -1))
            if (r0 < 0) goto L97
            goto L99
        L97:
            r0 = 1
            return r0
        L99:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r4)
            r0.append(r7)
            long r4 = r14.totalBytes
            r0.append(r4)
            r0.append(r6)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r9, r0)
        Lb9:
            return r1
    }

    public boolean isFirstDownload() {
            r3 = this;
            boolean r0 = r3.isFirstDownload
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r0 = r3.getTempPath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.getTempName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            goto L2f
        L1b:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r3.getTempPath()
            java.lang.String r2 = r3.getTempName()
            r0.<init>(r1, r2)
            boolean r0 = r0.exists()
            r0 = r0 ^ 1
            return r0
        L2f:
            return r1
    }

    public boolean isFirstSuccess() {
            r1 = this;
            boolean r0 = r1.isFirstSuccess
            return r0
    }

    public boolean isForbiddenRetryed() {
            r1 = this;
            boolean r0 = r1.isForbiddenRetryed
            return r0
    }

    public boolean isForce() {
            r1 = this;
            boolean r0 = r1.force
            return r0
    }

    public boolean isForceIgnoreRecommendSize() {
            r1 = this;
            boolean r0 = r1.forceIgnoreRecommendSize
            return r0
    }

    public boolean isHeadConnectionAvailable() {
            r1 = this;
            boolean r0 = r1.headConnectionAvailable
            return r0
    }

    public boolean isHttpsToHttpRetryUsed() {
            r1 = this;
            boolean r0 = r1.httpsToHttpRetryUsed
            return r0
    }

    public boolean isIgnoreDataVerify() {
            r1 = this;
            boolean r0 = r1.ignoreDataVerify
            return r0
    }

    public boolean isNeedChunkDowngradeRetry() {
            r1 = this;
            boolean r0 = r1.needChunkDowngradeRetry
            return r0
    }

    public boolean isNeedDefaultHttpServiceBackUp() {
            r1 = this;
            boolean r0 = r1.needDefaultHttpServiceBackUp
            return r0
    }

    public boolean isNeedHttpsToHttpRetry() {
            r1 = this;
            boolean r0 = r1.needHttpsToHttpRetry
            return r0
    }

    public boolean isNeedIndependentProcess() {
            r1 = this;
            boolean r0 = r1.needIndependentProcess
            return r0
    }

    public boolean isNeedPostProgress() {
            r1 = this;
            boolean r0 = r1.needPostProgress
            return r0
    }

    public boolean isNeedRetryDelay() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isNeedReuseChunkRunnable() {
            r1 = this;
            boolean r0 = r1.needReuseChunkRunnable
            return r0
    }

    public boolean isNeedReuseFirstConnection() {
            r1 = this;
            boolean r0 = r1.needReuseFirstConnection
            return r0
    }

    public boolean isNeedSDKMonitor() {
            r1 = this;
            boolean r0 = r1.needSDKMonitor
            return r0
    }

    public boolean isNewTask() {
            r1 = this;
            int r0 = r1.getStatus()
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean isOnlyWifi() {
            r1 = this;
            boolean r0 = r1.onlyWifi
            return r0
    }

    public boolean isPauseReserveOnWifi() {
            r1 = this;
            int r0 = r1.getReserveWifiStatus()
            r0 = r0 & 2
            if (r0 <= 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public boolean isPauseReserveWithWifiValid() {
            r2 = this;
            boolean r0 = r2.mDownloadFromReserveWifi
            r1 = 1
            if (r0 == 0) goto L17
            boolean r0 = r2.isPauseReserveOnWifi()
            if (r0 == 0) goto L16
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)
            if (r0 == 0) goto L16
            goto L17
        L16:
            r1 = 0
        L17:
            return r1
    }

    public boolean isRwConcurrent() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            r1 = 0
            java.lang.String r2 = "rw_concurrent"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L10
            r1 = r2
        L10:
            return r1
    }

    public boolean isSavePathRedirected() {
            r3 = this;
            r3.ensureDBJsonData()
            org.json.JSONObject r0 = r3.dbJsonData
            java.lang.String r1 = "is_save_path_redirected"
            r2 = 0
            boolean r0 = r0.optBoolean(r1, r2)
            return r0
    }

    public synchronized boolean isSaveTempFile() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isSaveTempFile     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean isShowNotification() {
            r1 = this;
            boolean r0 = r1.showNotification
            return r0
    }

    public boolean isShowNotificationForAutoResumed() {
            r1 = this;
            boolean r0 = r1.showNotificationForAutoResumed
            return r0
    }

    public boolean isShowNotificationForNetworkResumed() {
            r1 = this;
            boolean r0 = r1.showNotificationForNetworkResumed
            return r0
    }

    public boolean isSuccessByCache() {
            r1 = this;
            boolean r0 = r1.successByCache
            return r0
    }

    public boolean isSupportPartial() {
            r1 = this;
            boolean r0 = r1.supportPartial
            return r0
    }

    public boolean isWaitingWifiStatus() {
            r2 = this;
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r2.failedException
            if (r0 == 0) goto Le
            int r0 = r0.getErrorCode()
            r1 = 1013(0x3f5, float:1.42E-42)
            if (r0 != r1) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public void readFromParcel(android.os.Parcel r6) {
            r5 = this;
            int r0 = r6.readInt()
            r5.id = r0
            java.lang.String r0 = r6.readString()
            r5.name = r0
            java.lang.String r0 = r6.readString()
            r5.title = r0
            java.lang.String r0 = r6.readString()
            r5.url = r0
            java.lang.String r0 = r6.readString()
            r5.savePath = r0
            java.lang.String r0 = r6.readString()
            r5.tempPath = r0
            byte r0 = r6.readByte()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L2e
            r0 = r1
            goto L2f
        L2e:
            r0 = r2
        L2f:
            r5.onlyWifi = r0
            java.lang.String r0 = r6.readString()
            r5.extra = r0
            android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = com.ss.android.socialbase.downloader.model.HttpHeader.CREATOR
            java.util.ArrayList r0 = r6.createTypedArrayList(r0)
            r5.extraHeaders = r0
            int r0 = r6.readInt()
            r5.maxBytes = r0
            java.lang.String[] r0 = r6.createStringArray()
            r5.outIp = r0
            int[] r0 = r6.createIntArray()
            r5.outSize = r0
            int r0 = r6.readInt()
            r5.retryCount = r0
            int r0 = r6.readInt()
            r5.backUpUrlRetryCount = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L65
            r0 = r1
            goto L66
        L65:
            r0 = r2
        L66:
            r5.force = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L70
            r0 = r1
            goto L71
        L70:
            r0 = r2
        L71:
            r5.needPostProgress = r0
            int r0 = r6.readInt()
            r5.maxProgressCount = r0
            int r0 = r6.readInt()
            r5.minProgressTimeMsInterval = r0
            java.util.ArrayList r0 = r6.createStringArrayList()
            r5.backUpUrls = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L8d
            r0 = r1
            goto L8e
        L8d:
            r0 = r2
        L8e:
            r5.showNotification = r0
            java.lang.String r0 = r6.readString()
            r5.mimeType = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L9e
            r0 = r1
            goto L9f
        L9e:
            r0 = r2
        L9f:
            r5.needHttpsToHttpRetry = r0
            java.lang.String r0 = r6.readString()
            r5.packageName = r0
            java.lang.String r0 = r6.readString()
            r5.md5 = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto Lb5
            r0 = r1
            goto Lb6
        Lb5:
            r0 = r2
        Lb6:
            r5.needRetryDelay = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto Lc0
            r0 = r1
            goto Lc1
        Lc0:
            r0 = r2
        Lc1:
            r5.needDefaultHttpServiceBackUp = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto Lcb
            r0 = r1
            goto Lcc
        Lcb:
            r0 = r2
        Lcc:
            r5.needReuseChunkRunnable = r0
            java.lang.String r0 = r6.readString()
            r5.retryDelayTimeArray = r0
            java.lang.String r0 = r6.readString()
            r5.eTag = r0
            int r0 = r6.readInt()
            r5.curRetryTime = r0
            int r0 = r6.readInt()
            r5.convertRetryDelayStatus(r0)
            byte r0 = r6.readByte()
            if (r0 == 0) goto Lef
            r0 = r1
            goto Lf0
        Lef:
            r0 = r2
        Lf0:
            r5.needReuseFirstConnection = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto Lfa
            r0 = r1
            goto Lfb
        Lfa:
            r0 = r2
        Lfb:
            r5.forceIgnoreRecommendSize = r0
            java.lang.String r0 = r6.readString()
            r5.networkQuality = r0
            int r0 = r6.readInt()
            r5.curBackUpUrlIndex = r0
            int r0 = r6.readInt()
            r5.notificationVisibility = r0
            int r0 = r6.readInt()
            r5.chunkCount = r0
            long r3 = r6.readLong()
            r5.setCurBytes(r3)
            long r3 = r6.readLong()
            r5.totalBytes = r3
            int r0 = r6.readInt()
            r5.setStatus(r0)
            long r3 = r6.readLong()
            r5.downloadTime = r3
            long r3 = r6.readLong()
            r5.realDownloadTime = r3
            byte r0 = r6.readByte()
            if (r0 == 0) goto L13d
            r0 = r1
            goto L13e
        L13d:
            r0 = r2
        L13e:
            r5.backUpUrlUsed = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L148
            r0 = r1
            goto L149
        L148:
            r0 = r2
        L149:
            r5.httpsToHttpRetryUsed = r0
            java.lang.StringBuffer r0 = r5.errorBytesLog     // Catch: java.lang.Exception -> L16f
            if (r0 != 0) goto L15b
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L16f
            java.lang.String r3 = r6.readString()     // Catch: java.lang.Exception -> L16f
            r0.<init>(r3)     // Catch: java.lang.Exception -> L16f
            r5.errorBytesLog = r0     // Catch: java.lang.Exception -> L16f
            goto L173
        L15b:
            java.lang.StringBuffer r0 = r5.errorBytesLog     // Catch: java.lang.Exception -> L16f
            java.lang.StringBuffer r3 = r5.errorBytesLog     // Catch: java.lang.Exception -> L16f
            int r3 = r3.length()     // Catch: java.lang.Exception -> L16f
            java.lang.StringBuffer r0 = r0.delete(r2, r3)     // Catch: java.lang.Exception -> L16f
            java.lang.String r3 = r6.readString()     // Catch: java.lang.Exception -> L16f
            r0.append(r3)     // Catch: java.lang.Exception -> L16f
            goto L173
        L16f:
            r0 = move-exception
            r0.printStackTrace()
        L173:
            byte r0 = r6.readByte()
            if (r0 == 0) goto L17b
            r0 = r1
            goto L17c
        L17b:
            r0 = r2
        L17c:
            r5.autoResumed = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L186
            r0 = r1
            goto L187
        L186:
            r0 = r2
        L187:
            r5.showNotificationForAutoResumed = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L191
            r0 = r1
            goto L192
        L191:
            r0 = r2
        L192:
            r5.showNotificationForNetworkResumed = r0
            java.util.ArrayList r0 = r6.createStringArrayList()
            r5.forbiddenBackupUrls = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1a2
            r0 = r1
            goto L1a3
        L1a2:
            r0 = r2
        L1a3:
            r5.needIndependentProcess = r0
            int r0 = r6.readInt()
            r5.convertEnqueueType(r0)
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1b4
            r0 = r1
            goto L1b5
        L1b4:
            r0 = r2
        L1b5:
            r5.headConnectionAvailable = r0
            int r0 = r6.readInt()
            r5.httpStatusCode = r0
            java.lang.String r0 = r6.readString()
            r5.httpStatusMessage = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1cb
            r0 = r1
            goto L1cc
        L1cb:
            r0 = r2
        L1cc:
            r5.isSaveTempFile = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1d6
            r0 = r1
            goto L1d7
        L1d6:
            r0 = r2
        L1d7:
            r5.isForbiddenRetryed = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1e1
            r0 = r1
            goto L1e2
        L1e1:
            r0 = r2
        L1e2:
            r5.addListenerToSameTask = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1ec
            r0 = r1
            goto L1ed
        L1ec:
            r0 = r2
        L1ed:
            r5.needChunkDowngradeRetry = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L1f7
            r0 = r1
            goto L1f8
        L1f7:
            r0 = r2
        L1f8:
            r5.chunkDowngradeRetryUsed = r0
            java.lang.Class<com.ss.android.socialbase.downloader.exception.BaseException> r0 = com.ss.android.socialbase.downloader.exception.BaseException.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r6.readParcelable(r0)
            com.ss.android.socialbase.downloader.exception.BaseException r0 = (com.ss.android.socialbase.downloader.exception.BaseException) r0
            r5.failedException = r0
            int r0 = r6.readInt()
            r5.retryScheduleMinutes = r0
            java.lang.String r0 = r6.readString()
            r5.dbJsonDataString = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L21c
            r0 = r1
            goto L21d
        L21c:
            r0 = r2
        L21d:
            r5.supportPartial = r0
            java.lang.String r0 = r6.readString()
            r5.iconUrl = r0
            int r0 = r6.readInt()
            r5.appVersionCode = r0
            java.lang.String r0 = r6.readString()
            r5.taskId = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L239
            r0 = r1
            goto L23a
        L239:
            r0 = r2
        L23a:
            r5.expiredRedownload = r0
            byte r0 = r6.readByte()
            if (r0 == 0) goto L244
            r0 = r1
            goto L245
        L244:
            r0 = r2
        L245:
            r5.deleteCacheIfCheckFailed = r0
            byte r6 = r6.readByte()
            if (r6 == 0) goto L24e
            goto L24f
        L24e:
            r1 = r2
        L24f:
            r5.successByCache = r1
            r5.parseMonitorSetting()
            return
    }

    public synchronized void registerTempFileSaveCallback(com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 != 0) goto L5
            monitor-exit(r4)
            return
        L5:
            java.lang.String r0 = "DownloadInfo"
            java.lang.String r1 = "registerTempFileSaveCallback"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L25
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r0 = r4.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L17
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            r4.tempFileSaveCompleteCallbacks = r0     // Catch: java.lang.Throwable -> L25
        L17:
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r0 = r4.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L25
            boolean r0 = r0.contains(r5)     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L39
            java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback> r0 = r4.tempFileSaveCompleteCallbacks     // Catch: java.lang.Throwable -> L25
            r0.add(r5)     // Catch: java.lang.Throwable -> L25
            goto L39
        L25:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3b
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L3b
            r2 = 1038(0x40e, float:1.455E-42)
            java.lang.String r3 = "registerTempFileSaveCallback"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r0, r3)     // Catch: java.lang.Throwable -> L3b
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L3b
            r5.onFailed(r1)     // Catch: java.lang.Throwable -> L3b
        L39:
            monitor-exit(r4)
            return
        L3b:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public void reset() {
            r3 = this;
            r0 = 1
            r1 = 0
            r3.setCurBytes(r1, r0)
            r3.totalBytes = r1
            r3.chunkCount = r0
            r3.downloadTime = r1
            r3.realStartDownloadTime = r1
            r3.realDownloadTime = r1
            return
    }

    public void resetDataForEtagEndure(java.lang.String r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            r3.setCurBytes(r1, r0)
            r3.setTotalBytes(r1)
            r3.seteTag(r4)
            r3.setChunkCount(r0)
            r3.downloadTime = r1
            r3.realStartDownloadTime = r1
            r3.realDownloadTime = r1
            return
    }

    public void resetRealStartDownloadTime() {
            r2 = this;
            r0 = 0
            r2.realStartDownloadTime = r0
            return
    }

    public void safePutToDBJsonData(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            r2.ensureDBJsonData()
            org.json.JSONObject r0 = r2.dbJsonData
            monitor-enter(r0)
            org.json.JSONObject r1 = r2.dbJsonData     // Catch: java.lang.Throwable -> Lc java.lang.Exception -> Le
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lc java.lang.Exception -> Le
            goto Le
        Lc:
            r3 = move-exception
            goto L13
        Le:
            r3 = 0
            r2.dbJsonDataString = r3     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3
    }

    public void setAddListenerToSameTask(boolean r1) {
            r0 = this;
            r0.addListenerToSameTask = r1
            return
    }

    public void setAntiHijackErrorCode(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "anti_hijack_error_code"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setAppVersionCode(int r1) {
            r0 = this;
            r0.appVersionCode = r1
            return
    }

    public void setAsyncHandleStatus(com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1) {
            r0 = this;
            r0.asyncHandleStatus = r1
            return
    }

    public void setAutoResumed(boolean r1) {
            r0 = this;
            r0.autoResumed = r1
            return
    }

    public void setByteInvalidRetryStatus(com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1) {
            r0 = this;
            r0.byteInvalidRetryStatus = r1
            return
    }

    public void setCacheControl(java.lang.String r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "cache-control"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Ld
            r2.updateSpData()     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    public void setCacheExpiredTime(long r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "cache-control/expired_time"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Ld
            r2.updateSpData()     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    public void setChunkCount(int r1) {
            r0 = this;
            r0.chunkCount = r1
            return
    }

    public void setChunkDowngradeRetryUsed(boolean r1) {
            r0 = this;
            r0.chunkDowngradeRetryUsed = r1
            return
    }

    public void setCurBytes(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.curBytes
            if (r0 == 0) goto L8
            r0.set(r2)
            goto Lf
        L8:
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>(r2)
            r1.curBytes = r0
        Lf:
            return
    }

    public void setCurBytes(long r3, boolean r5) {
            r2 = this;
            if (r5 == 0) goto L6
            r2.setCurBytes(r3)
            goto L11
        L6:
            long r0 = r2.getCurBytes()
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 <= 0) goto L11
            r2.setCurBytes(r3)
        L11:
            return
    }

    public void setDeleteCacheIfCheckFailed() {
            r1 = this;
            r0 = 1
            r1.deleteCacheIfCheckFailed = r0
            return
    }

    public void setDownloadFromReserveWifi(boolean r1) {
            r0 = this;
            r0.mDownloadFromReserveWifi = r1
            return
    }

    public void setDownloadTime(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L8
            r2.downloadTime = r3
        L8:
            return
    }

    public void setExtra(java.lang.String r1) {
            r0 = this;
            r0.extra = r1
            return
    }

    public void setFailedException(com.ss.android.socialbase.downloader.exception.BaseException r1) {
            r0 = this;
            r0.failedException = r1
            return
    }

    public void setFailedResumeCount(int r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "failed_resume_count"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void setFilePackageName(java.lang.String r1) {
            r0 = this;
            r0.filePackageName = r1
            return
    }

    public void setFirstDownload(boolean r1) {
            r0 = this;
            r0.isFirstDownload = r1
            return
    }

    public void setFirstSpeedTime(long r1) {
            r0 = this;
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "dbjson_key_first_speed_time"
            r0.safePutToDBJsonData(r2, r1)
            return
    }

    public void setFirstSuccess(boolean r1) {
            r0 = this;
            r0.isFirstSuccess = r1
            return
    }

    public void setForbiddenBackupUrls(java.util.List<java.lang.String> r1, boolean r2) {
            r0 = this;
            r0.forbiddenBackupUrls = r1
            r0.refreshBackupUrls(r2)
            return
    }

    public void setForbiddenRetryed() {
            r1 = this;
            r0 = 1
            r1.isForbiddenRetryed = r0
            return
    }

    public void setForceIgnoreRecommendSize(boolean r1) {
            r0 = this;
            r0.forceIgnoreRecommendSize = r1
            return
    }

    public void setHeadConnectionException(java.lang.String r1) {
            r0 = this;
            r0.headConnectionException = r1
            return
    }

    public void setHttpStatusCode(int r1) {
            r0 = this;
            r0.httpStatusCode = r1
            return
    }

    public void setHttpStatusMessage(java.lang.String r1) {
            r0 = this;
            r0.httpStatusMessage = r1
            return
    }

    public void setHttpsToHttpRetryUsed(boolean r1) {
            r0 = this;
            r0.httpsToHttpRetryUsed = r1
            return
    }

    public void setIconUrl(java.lang.String r1) {
            r0 = this;
            r0.iconUrl = r1
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setIsRwConcurrent(boolean r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "rw_concurrent"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public synchronized void setIsSaveTempFile(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.isSaveTempFile = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setLastFailedResumeTime(long r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "last_failed_resume_time"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void setLastModified(java.lang.String r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "last-modified"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Ld
            r2.updateSpData()     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    public void setLastNotifyProgressTime() {
            r3 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r3.lastNotifyProgressTime
            long r1 = android.os.SystemClock.uptimeMillis()
            r0.set(r1)
            return
    }

    public void setLastUninstallResumeTime(long r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "last_unins_resume_time"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void setLinkMode(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "link_mode"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.md5 = r1
            return
    }

    public void setMimeType(java.lang.String r1) {
            r0 = this;
            r0.mimeType = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return
    }

    public void setNetworkQuality(java.lang.String r1) {
            r0 = this;
            r0.networkQuality = r1
            return
    }

    public void setNotificationVisibility(int r1) {
            r0 = this;
            r0.notificationVisibility = r1
            return
    }

    public void setOnlyWifi(boolean r1) {
            r0 = this;
            r0.onlyWifi = r1
            return
    }

    public void setOpenLimitSpeed(boolean r1) {
            r0 = this;
            r0.openLimitSpeed = r1
            return
    }

    public void setPackageInfo(android.content.pm.PackageInfo r2) {
            r1 = this;
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r2)
            r1.packageInfoRef = r0
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setPausedResumeCount(int r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "paused_resume_count"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void setPreconnectLevel(int r2) {
            r1 = this;
            r1.ensureDBJsonData()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "dbjson_key_preconnect_level"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setRetryDelayStatus(com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1) {
            r0 = this;
            r0.retryDelayStatus = r1
            return
    }

    public void setRetryScheduleCount(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "retry_schedule_count"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setSavePath(java.lang.String r1) {
            r0 = this;
            r0.savePath = r1
            return
    }

    public void setSavePathRedirected(boolean r2) {
            r1 = this;
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r0 = "is_save_path_redirected"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setShowNotification(boolean r1) {
            r0 = this;
            r0.showNotification = r1
            return
    }

    public void setShowNotificationForAutoResumed(boolean r1) {
            r0 = this;
            r0.showNotificationForAutoResumed = r1
            return
    }

    public void setShowNotificationForNetworkResumed(boolean r1) {
            r0 = this;
            r0.showNotificationForNetworkResumed = r1
            return
    }

    public void setSpValue(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.ensureSpData()
            org.json.JSONObject r0 = r1.spData     // Catch: java.lang.Exception -> Lc
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Lc
            r1.updateSpData()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r2 = move-exception
            r2.printStackTrace()
        L10:
            return
    }

    public void setStatus(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.status
            if (r0 == 0) goto L8
            r0.set(r2)
            goto Lf
        L8:
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r2)
            r1.status = r0
        Lf:
            return
    }

    public void setStatusAtDbInit(int r1) {
            r0 = this;
            r0.statusAtDbInit = r1
            return
    }

    public void setSuccessByCache(boolean r1) {
            r0 = this;
            r0.successByCache = r1
            return
    }

    public void setSupportPartial(boolean r1) {
            r0 = this;
            r0.supportPartial = r1
            return
    }

    public void setTTMd5CheckStatus(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "ttmd5_check_status"
            r1.safePutToDBJsonData(r0, r2)
            return
    }

    public void setThrottleNetSpeed(long r1) {
            r0 = this;
            r0.throttleNetSpeed = r1
            return
    }

    public void setTotalBytes(long r1) {
            r0 = this;
            r0.totalBytes = r1
            return
    }

    public void setUninstallResumeCount(int r3) {
            r2 = this;
            r2.ensureSpData()
            org.json.JSONObject r0 = r2.spData     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "unins_resume_count"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r3.printStackTrace()
        Lf:
            return
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return
    }

    public void seteTag(java.lang.String r1) {
            r0 = this;
            r0.eTag = r1
            return
    }

    public void startPauseReserveOnWifi() {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "pause_reserve_on_wifi"
            r2 = 3
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le
            r3.updateSpData()     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    public boolean statusInPause() {
            r2 = this;
            int r0 = r2.getRealStatus()
            r1 = -2
            if (r0 == r1) goto L11
            int r0 = r2.getRealStatus()
            r1 = -5
            if (r0 != r1) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    public void stopPauseReserveOnWifi() {
            r3 = this;
            r3.ensureSpData()
            org.json.JSONObject r0 = r3.spData     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "pause_reserve_on_wifi"
            r2 = 1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le
            r3.updateSpData()     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    public android.content.ContentValues toContentValues() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            int r1 = r3.id
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "_id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.url
            java.lang.String r2 = "url"
            r0.put(r2, r1)
            java.lang.String r1 = r3.savePath
            java.lang.String r2 = "savePath"
            r0.put(r2, r1)
            java.lang.String r1 = r3.tempPath
            java.lang.String r2 = "tempPath"
            r0.put(r2, r1)
            java.lang.String r1 = r3.name
            java.lang.String r2 = "name"
            r0.put(r2, r1)
            int r1 = r3.chunkCount
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "chunkCount"
            r0.put(r2, r1)
            int r1 = r3.getStatus()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            long r1 = r3.getCurBytes()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "curBytes"
            r0.put(r2, r1)
            long r1 = r3.totalBytes
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "totalBytes"
            r0.put(r2, r1)
            java.lang.String r1 = r3.eTag
            java.lang.String r2 = "eTag"
            r0.put(r2, r1)
            boolean r1 = r3.onlyWifi
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "onlyWifi"
            r0.put(r2, r1)
            boolean r1 = r3.force
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "force"
            r0.put(r2, r1)
            int r1 = r3.retryCount
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "retryCount"
            r0.put(r2, r1)
            java.lang.String r1 = r3.extra
            java.lang.String r2 = "extra"
            r0.put(r2, r1)
            java.lang.String r1 = r3.mimeType
            java.lang.String r2 = "mimeType"
            r0.put(r2, r1)
            java.lang.String r1 = r3.title
            java.lang.String r2 = "title"
            r0.put(r2, r1)
            boolean r1 = r3.showNotification
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "notificationEnable"
            r0.put(r2, r1)
            int r1 = r3.notificationVisibility
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "notificationVisibility"
            r0.put(r2, r1)
            boolean r1 = r3.isFirstDownload
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "isFirstDownload"
            r0.put(r2, r1)
            boolean r1 = r3.isFirstSuccess
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "isFirstSuccess"
            r0.put(r2, r1)
            boolean r1 = r3.needHttpsToHttpRetry
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "needHttpsToHttpRetry"
            r0.put(r2, r1)
            long r1 = r3.downloadTime
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "downloadTime"
            r0.put(r2, r1)
            java.lang.String r1 = r3.packageName
            java.lang.String r2 = "packageName"
            r0.put(r2, r1)
            java.lang.String r1 = r3.md5
            java.lang.String r2 = "md5"
            r0.put(r2, r1)
            boolean r1 = r3.needRetryDelay
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "retryDelay"
            r0.put(r2, r1)
            int r1 = r3.curRetryTime
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "curRetryTime"
            r0.put(r2, r1)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = r3.retryDelayStatus
            int r1 = r1.ordinal()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "retryDelayStatus"
            r0.put(r2, r1)
            boolean r1 = r3.needDefaultHttpServiceBackUp
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "defaultHttpServiceBackUp"
            r0.put(r2, r1)
            boolean r1 = r3.needReuseChunkRunnable
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "chunkRunnableReuse"
            r0.put(r2, r1)
            java.lang.String r1 = r3.retryDelayTimeArray
            java.lang.String r2 = "retryDelayTimeArray"
            r0.put(r2, r1)
            boolean r1 = r3.needChunkDowngradeRetry
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "chunkDowngradeRetry"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getBackUpUrlsStr()
            java.lang.String r2 = "backUpUrlsStr"
            r0.put(r2, r1)
            int r1 = r3.backUpUrlRetryCount
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "backUpUrlRetryCount"
            r0.put(r2, r1)
            long r1 = r3.realDownloadTime
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "realDownloadTime"
            r0.put(r2, r1)
            int r1 = r3.retryScheduleMinutes
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "retryScheduleMinutes"
            r0.put(r2, r1)
            boolean r1 = r3.needIndependentProcess
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "independentProcess"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getDBJsonDataString()
            java.lang.String r2 = "auxiliaryJsonobjectString"
            r0.put(r2, r1)
            java.lang.String r1 = r3.iconUrl
            java.lang.String r2 = "iconUrl"
            r0.put(r2, r1)
            int r1 = r3.appVersionCode
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "appVersionCode"
            r0.put(r2, r1)
            java.lang.String r1 = r3.taskId
            java.lang.String r2 = "taskId"
            r0.put(r2, r1)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DownloadInfo{id="
            r0.append(r1)
            int r1 = r3.id
            r0.append(r1)
            java.lang.String r1 = ", name='"
            r0.append(r1)
            java.lang.String r1 = r3.name
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", title='"
            r0.append(r2)
            java.lang.String r2 = r3.title
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", url='"
            r0.append(r2)
            java.lang.String r2 = r3.url
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", savePath='"
            r0.append(r2)
            java.lang.String r2 = r3.savePath
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public boolean trySwitchToNextBackupUrl() {
            r4 = this;
            boolean r0 = r4.backUpUrlUsed
            r1 = 1
            if (r0 == 0) goto La
            int r0 = r4.curBackUpUrlIndex
            int r0 = r0 + r1
            r4.curBackUpUrlIndex = r0
        La:
            java.util.List<java.lang.String> r0 = r4.backUpUrls
            r2 = 0
            if (r0 == 0) goto L3d
            int r0 = r0.size()
            if (r0 == 0) goto L3d
            int r0 = r4.curBackUpUrlIndex
            if (r0 >= 0) goto L1a
            goto L3d
        L1a:
            int r0 = r4.curBackUpUrlIndex
            java.util.List<java.lang.String> r3 = r4.backUpUrls
            int r3 = r3.size()
            if (r0 >= r3) goto L3d
            java.util.List<java.lang.String> r0 = r4.backUpUrls
            int r3 = r4.curBackUpUrlIndex
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L37
            r4.backUpUrlUsed = r1
            return r1
        L37:
            int r0 = r4.curBackUpUrlIndex
            int r0 = r0 + r1
            r4.curBackUpUrlIndex = r0
            goto L1a
        L3d:
            return r2
    }

    public void updateCurRetryTime(int r2) {
            r1 = this;
            boolean r0 = r1.backUpUrlUsed
            if (r0 == 0) goto L7
            int r0 = r1.backUpUrlRetryCount
            goto L9
        L7:
            int r0 = r1.retryCount
        L9:
            int r0 = r0 - r2
            r1.curRetryTime = r0
            if (r0 >= 0) goto L11
            r2 = 0
            r1.curRetryTime = r2
        L11:
            return
    }

    public void updateDownloadTime() {
            r6 = this;
            long r0 = r6.startDownloadTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9
            return
        L9:
            long r0 = android.os.SystemClock.uptimeMillis()
            long r4 = r6.startDownloadTime
            long r0 = r0 - r4
            long r4 = r6.downloadTime
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 >= 0) goto L18
            r6.downloadTime = r2
        L18:
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1e
            r6.downloadTime = r0
        L1e:
            return
    }

    public void updateRealDownloadTime(boolean r8) {
            r7 = this;
            long r0 = java.lang.System.nanoTime()
            long r2 = r7.realStartDownloadTime
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 > 0) goto L11
            if (r8 == 0) goto L10
            r7.realStartDownloadTime = r0
        L10:
            return
        L11:
            long r2 = r0 - r2
            if (r8 == 0) goto L18
            r7.realStartDownloadTime = r0
            goto L1a
        L18:
            r7.realStartDownloadTime = r4
        L1a:
            int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r8 <= 0) goto L23
            long r0 = r7.realDownloadTime
            long r0 = r0 + r2
            r7.realDownloadTime = r0
        L23:
            return
    }

    public void updateRealStartDownloadTime() {
            r4 = this;
            long r0 = r4.realStartDownloadTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = java.lang.System.nanoTime()
            r4.realStartDownloadTime = r0
        Le:
            return
    }

    public void updateSpData() {
            r3 = this;
            org.json.JSONObject r0 = r3.spData
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L2b
            r1 = 0
            java.lang.String r2 = "sp_download_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            int r1 = r3.getId()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            org.json.JSONObject r2 = r3.spData
            java.lang.String r2 = r2.toString()
            android.content.SharedPreferences$Editor r0 = r0.putString(r1, r2)
            r0.apply()
        L2b:
            return
    }

    public void updateStartDownloadTime() {
            r2 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            r2.startDownloadTime = r0
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.String r1 = "dbjson_last_start_download_time"
            r2.safePutToDBJsonData(r1, r0)
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r0 = r2.id
            r3.writeInt(r0)
            java.lang.String r0 = r2.name
            r3.writeString(r0)
            java.lang.String r0 = r2.title
            r3.writeString(r0)
            java.lang.String r0 = r2.url
            r3.writeString(r0)
            java.lang.String r0 = r2.savePath
            r3.writeString(r0)
            java.lang.String r0 = r2.tempPath
            r3.writeString(r0)
            boolean r0 = r2.onlyWifi
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.String r0 = r2.extra
            r3.writeString(r0)
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r2.extraHeaders
            r3.writeTypedList(r0)
            int r0 = r2.maxBytes
            r3.writeInt(r0)
            java.lang.String[] r0 = r2.outIp
            r3.writeStringArray(r0)
            int[] r0 = r2.outSize
            r3.writeIntArray(r0)
            int r0 = r2.retryCount
            r3.writeInt(r0)
            int r0 = r2.backUpUrlRetryCount
            r3.writeInt(r0)
            boolean r0 = r2.force
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.needPostProgress
            byte r0 = (byte) r0
            r3.writeByte(r0)
            int r0 = r2.maxProgressCount
            r3.writeInt(r0)
            int r0 = r2.minProgressTimeMsInterval
            r3.writeInt(r0)
            java.util.List<java.lang.String> r0 = r2.backUpUrls
            r3.writeStringList(r0)
            boolean r0 = r2.showNotification
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.String r0 = r2.mimeType
            r3.writeString(r0)
            boolean r0 = r2.needHttpsToHttpRetry
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.String r0 = r2.packageName
            r3.writeString(r0)
            java.lang.String r0 = r2.md5
            r3.writeString(r0)
            boolean r0 = r2.needRetryDelay
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.needDefaultHttpServiceBackUp
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.needReuseChunkRunnable
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.String r0 = r2.retryDelayTimeArray
            r3.writeString(r0)
            java.lang.String r0 = r2.eTag
            r3.writeString(r0)
            int r0 = r2.curRetryTime
            r3.writeInt(r0)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = r2.retryDelayStatus
            int r0 = r0.ordinal()
            r3.writeInt(r0)
            boolean r0 = r2.needReuseFirstConnection
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.forceIgnoreRecommendSize
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.String r0 = r2.networkQuality
            r3.writeString(r0)
            int r0 = r2.curBackUpUrlIndex
            r3.writeInt(r0)
            int r0 = r2.notificationVisibility
            r3.writeInt(r0)
            int r0 = r2.chunkCount
            r3.writeInt(r0)
            long r0 = r2.getCurBytes()
            r3.writeLong(r0)
            long r0 = r2.totalBytes
            r3.writeLong(r0)
            int r0 = r2.getRealStatus()
            r3.writeInt(r0)
            long r0 = r2.downloadTime
            r3.writeLong(r0)
            long r0 = r2.realDownloadTime
            r3.writeLong(r0)
            boolean r0 = r2.backUpUrlUsed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.httpsToHttpRetryUsed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.lang.StringBuffer r0 = r2.errorBytesLog
            if (r0 == 0) goto Lf9
            java.lang.String r0 = r0.toString()
            goto Lfb
        Lf9:
            java.lang.String r0 = ""
        Lfb:
            r3.writeString(r0)
            boolean r0 = r2.autoResumed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.showNotificationForAutoResumed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.showNotificationForNetworkResumed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            java.util.List<java.lang.String> r0 = r2.forbiddenBackupUrls
            r3.writeStringList(r0)
            boolean r0 = r2.needIndependentProcess
            byte r0 = (byte) r0
            r3.writeByte(r0)
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r2.enqueueType
            int r0 = r0.ordinal()
            r3.writeInt(r0)
            boolean r0 = r2.headConnectionAvailable
            byte r0 = (byte) r0
            r3.writeByte(r0)
            int r0 = r2.httpStatusCode
            r3.writeInt(r0)
            java.lang.String r0 = r2.httpStatusMessage
            r3.writeString(r0)
            boolean r0 = r2.isSaveTempFile
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.isForbiddenRetryed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.addListenerToSameTask
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.needChunkDowngradeRetry
            byte r0 = (byte) r0
            r3.writeByte(r0)
            boolean r0 = r2.chunkDowngradeRetryUsed
            byte r0 = (byte) r0
            r3.writeByte(r0)
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r2.failedException
            r3.writeParcelable(r0, r4)
            int r4 = r2.retryScheduleMinutes
            r3.writeInt(r4)
            java.lang.String r4 = r2.getDBJsonDataString()
            r3.writeString(r4)
            boolean r4 = r2.supportPartial
            byte r4 = (byte) r4
            r3.writeByte(r4)
            java.lang.String r4 = r2.iconUrl
            r3.writeString(r4)
            int r4 = r2.appVersionCode
            r3.writeInt(r4)
            java.lang.String r4 = r2.taskId
            r3.writeString(r4)
            boolean r4 = r2.expiredRedownload
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.deleteCacheIfCheckFailed
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.successByCache
            byte r4 = (byte) r4
            r3.writeByte(r4)
            return
    }
}
