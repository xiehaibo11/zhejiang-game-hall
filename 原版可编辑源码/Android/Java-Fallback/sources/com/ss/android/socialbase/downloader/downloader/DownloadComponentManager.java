package com.ss.android.socialbase.downloader.downloader;

public class DownloadComponentManager {
    public static final int NET_LIB_DEFAULT = 0;
    public static final int NET_LIB_HOST = 1;
    private static volatile android.content.Context appContext;
    private static volatile com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator chunkAdjustCalculator;
    private static volatile com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator chunkCntCalculator;
    private static volatile java.util.concurrent.ExecutorService chunkDownloadExecutor;
    private static volatile java.util.concurrent.ExecutorService cpuThreadExecutor;
    private static volatile java.util.concurrent.ExecutorService dbThreadExecutor;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadDns defaultDownloadDns;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService defaultHeadHttpService;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadHttpService defaultHttpService;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadCache downloadCache;
    private static final java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> downloadCacheSyncStatusListeners = null;
    private static final java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> downloadCompleteHandlers = null;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadDns downloadDns;
    private static volatile com.ss.android.socialbase.downloader.impls.AbsDownloadEngine downloadEngine;
    private static com.ss.android.socialbase.downloader.monitor.InnerEventListener downloadEventListener;
    private static int downloadExpSwitchCode;
    private static volatile boolean downloadInMultiProcess;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler downloadLaunchHandler;
    private static volatile com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener downloadMonitorListener;
    private static volatile com.ss.android.socialbase.downloader.downloader.DownloadReceiver downloadReceiver;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler downloadServiceHandler;
    private static volatile com.ss.android.socialbase.downloader.depend.IDownloadSettings downloadSettings;
    private static final java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> downloadTaskExecuteListeners = null;
    private static final int fixedCPUPoolSize = 0;
    private static final int fixedDBPoolSize = 0;
    private static final int fixedIOPoolSize = 0;
    private static final int fixedMIXPoolSize = 0;
    private static volatile boolean hasInit;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService headHttpService;
    private static volatile com.ss.android.socialbase.downloader.network.IDownloadHttpService httpService;
    private static boolean httpServiceInit;
    private static volatile com.ss.android.socialbase.downloader.downloader.ITTNetHandler iTTNetHandler;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator idGenerator;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler independentDownloadServiceHandler;
    private static volatile com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator independentHolderCreator;
    private static volatile java.util.concurrent.ExecutorService ioThreadExecutor;
    private static boolean isReceiverRegistered;
    private static int maxDownloadPoolSize;
    private static volatile java.util.concurrent.ExecutorService mixApkDownloadExecutor;
    private static volatile java.util.concurrent.ExecutorService mixDefaultDownloadExecutor;
    private static volatile java.util.concurrent.ExecutorService mixFrequentDownloadExecutor;
    private static volatile com.ss.android.socialbase.downloader.downloader.IMonitorConfig monitorConfig;
    private static boolean needAutoRefreshUnSuccessTask;
    private static boolean notAutoRebootService;
    private static volatile com.ss.android.socialbase.downloader.depend.INotificationClickCallback notificationClickCallback;
    private static volatile java.util.concurrent.ExecutorService okHttpDispatcherExecutor;
    private static volatile java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> processCallbacks;
    private static com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener reserveWifiStatusListener;
    private static volatile com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator retryDelayTimeCalculator;
    private static volatile okhttp3.OkHttpClient sOkHttpClient;
    private static int writeBufferSize;




    public interface IndependentHolderCreator {

        public interface OnMainProcessRebindErrorListener {
            void onRebindError();
        }

        com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache createCache(com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener r1);

        com.ss.android.socialbase.downloader.downloader.IDownloadProxy createProxy();

        com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler createServiceHandler();
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.processCallbacks = r0
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess = r0
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.sOkHttpClient = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers = r1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isReceiverRegistered = r0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            int r1 = r1.availableProcessors()
            r2 = 1
            int r1 = r1 + r2
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize = r1
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            int r1 = r1.availableProcessors()
            int r1 = r1 * 2
            int r1 = r1 + r2
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedIOPoolSize = r1
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedMIXPoolSize = r1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedDBPoolSize = r1
            r1 = 8192(0x2000, float:1.148E-41)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.writeBufferSize = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners = r1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.needAutoRefreshUnSuccessTask = r2
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notAutoRebootService = r0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.hasInit = r0
            return
    }

    private DownloadComponentManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addDownloadCompleteHandler(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            r1.add(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    public static void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessCallback r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.processCallbacks
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.processCallbacks     // Catch: java.lang.Throwable -> Ld
            r1.add(r2)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r2
    }

    static synchronized void coverComponent(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            setDownloadBuilder(r1)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static okhttp3.OkHttpClient.Builder createDownloadClientBuilder() {
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 30000(0x7530, double:1.4822E-319)
            okhttp3.OkHttpClient$Builder r1 = r0.connectTimeout(r2, r1)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r1 = r1.readTimeout(r2, r4)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r1 = r1.writeTimeout(r2, r4)
            r2 = 1
            okhttp3.OkHttpClient$Builder r1 = r1.retryOnConnectionFailure(r2)
            okhttp3.OkHttpClient$Builder r1 = r1.followRedirects(r2)
            okhttp3.Protocol r2 = okhttp3.Protocol.HTTP_1_1
            java.util.List r2 = java.util.Collections.singletonList(r2)
            r1.protocols(r2)
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.okHttpDispatcherExecutor
            if (r1 == 0) goto L39
            okhttp3.Dispatcher r1 = new okhttp3.Dispatcher
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.okHttpDispatcherExecutor
            r1.<init>(r2)
            r0.dispatcher(r1)
        L39:
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHttpConnection downloadWithConnection(boolean r15, int r16, java.lang.String r17, java.lang.String r18, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r19, int r20, boolean r21, com.ss.android.socialbase.downloader.model.DownloadInfo r22) throws java.lang.Exception {
            boolean r0 = android.text.TextUtils.isEmpty(r18)
            if (r0 != 0) goto L21
            if (r19 != 0) goto Le
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            goto L10
        Le:
            r0 = r19
        L10:
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r2 = "ss_d_request_host_ip_114"
            r10 = r18
            r1.<init>(r2, r10)
            r0.add(r1)
            r1 = 1
            r14 = r1
            r1 = r0
            r0 = r14
            goto L2d
        L21:
            r10 = r18
            if (r15 != 0) goto L29
            r0 = 2
            r1 = r19
            goto L2d
        L29:
            r1 = r19
            r0 = r20
        L2d:
            int[] r2 = getDownloadNetLibs(r0)
            int r11 = r2.length
            r0 = 0
            r12 = 0
            r13 = r0
            r0 = r12
        L36:
            if (r13 >= r11) goto L7a
            r7 = r2[r13]
            r3 = r16
            r4 = r17
            r5 = r18
            r6 = r1
            r8 = r21
            r9 = r22
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r3 = downloadWithConnection2(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L4c
            if (r3 == 0) goto L77
            return r3
        L4c:
            r0 = move-exception
            r3 = r0
            boolean r0 = r22.isExpiredRedownload()
            if (r0 == 0) goto L76
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseCode304Error(r3)
            if (r0 == 0) goto L76
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.hasDownloadCacheHeader(r1)
            if (r0 != 0) goto L61
            goto L76
        L61:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "dcach::http exception 304, throw excepiton, not retry "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0)
            throw r3
        L76:
            r0 = r3
        L77:
            int r13 = r13 + 1
            goto L36
        L7a:
            if (r0 != 0) goto L7d
            return r12
        L7d:
            throw r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHttpConnection downloadWithConnection(boolean r8, int r9, java.lang.String r10, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r11) throws java.lang.Exception {
            r3 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r11
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r8 = downloadWithConnection(r0, r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    private static com.ss.android.socialbase.downloader.network.IDownloadHttpConnection downloadWithConnection2(int r11, java.lang.String r12, java.lang.String r13, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r14, int r15, boolean r16, com.ss.android.socialbase.downloader.model.DownloadInfo r17) throws com.ss.android.socialbase.downloader.exception.BaseException, java.io.IOException {
            r7 = r15
            r0 = 1
            if (r7 != r0) goto L9
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = getHttpService()
            goto Ld
        L9:
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = getDefaultHttpService()
        Ld:
            if (r0 == 0) goto L55
            r1 = 0
            r8 = 0
            r2 = 0
            if (r16 == 0) goto L20
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1d
            goto L20
        L1a:
            r0 = move-exception
            r5 = r12
            goto L42
        L1d:
            r0 = move-exception
            r5 = r12
            goto L3e
        L20:
            r4 = r11
            r5 = r12
            r6 = r14
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r0.downloadWithConnection(r11, r12, r14)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            if (r16 == 0) goto L3a
            long r9 = java.lang.System.currentTimeMillis()
            long r9 = r9 - r2
            java.lang.String r6 = "get"
            r1 = r0
            r2 = r12
            r3 = r13
            r4 = r9
            r7 = r15
            r9 = r17
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadConnect(r1, r2, r3, r4, r6, r7, r8, r9)
        L3a:
            return r0
        L3b:
            r0 = move-exception
            goto L42
        L3d:
            r0 = move-exception
        L3e:
            r4 = r0
            throw r4     // Catch: java.lang.Throwable -> L40
        L40:
            r0 = move-exception
            r8 = r4
        L42:
            if (r16 == 0) goto L54
            long r9 = java.lang.System.currentTimeMillis()
            long r9 = r9 - r2
            java.lang.String r6 = "get"
            r2 = r12
            r3 = r13
            r4 = r9
            r7 = r15
            r9 = r17
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadConnect(r1, r2, r3, r4, r6, r7, r8, r9)
        L54:
            throw r0
        L55:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1022(0x3fe, float:1.432E-42)
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "httpService not exist, netLib = "
            r3.append(r4)
            r3.append(r15)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            r0.<init>(r1, r2)
            throw r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection downloadWithHeadConnection(java.lang.String r2, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3) throws java.lang.Exception {
            r0 = 0
            r1 = 0
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2 = downloadWithHeadConnection(r2, r3, r0, r0, r1)
            return r2
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection downloadWithHeadConnection(java.lang.String r5, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r6, int r7, boolean r8, com.ss.android.socialbase.downloader.model.DownloadInfo r9) throws java.lang.Exception {
            int[] r7 = getDownloadNetLibs(r7)
            int r0 = r7.length
            r1 = 0
            r2 = 0
            r3 = r1
        L8:
            if (r2 >= r0) goto L17
            r4 = r7[r2]
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4 = downloadWithHeadConnection2(r5, r6, r4, r8, r9)     // Catch: java.lang.Exception -> L13
            if (r4 == 0) goto L14
            return r4
        L13:
            r3 = move-exception
        L14:
            int r2 = r2 + 1
            goto L8
        L17:
            if (r3 != 0) goto L1a
            return r1
        L1a:
            throw r3
    }

    private static com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection downloadWithHeadConnection2(java.lang.String r11, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r12, int r13, boolean r14, com.ss.android.socialbase.downloader.model.DownloadInfo r15) throws com.ss.android.socialbase.downloader.exception.BaseException, java.io.IOException {
            r0 = 1
            if (r13 != r0) goto L8
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = getHeadHttpService()
            goto Lc
        L8:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = getDefaultHeadHttpService()
        Lc:
            if (r0 == 0) goto L49
            r1 = 0
            r9 = 0
            r2 = 0
            if (r14 == 0) goto L18
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32
        L18:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r12 = r0.downloadWithConnection(r11, r12)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32
            if (r14 == 0) goto L2e
            r4 = 0
            long r0 = java.lang.System.currentTimeMillis()
            long r5 = r0 - r2
            java.lang.String r7 = "head"
            r2 = r12
            r3 = r11
            r8 = r13
            r10 = r15
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadConnect(r2, r3, r4, r5, r7, r8, r9, r10)
        L2e:
            return r12
        L2f:
            r12 = move-exception
            r8 = r9
            goto L37
        L32:
            r12 = move-exception
            throw r12     // Catch: java.lang.Throwable -> L34
        L34:
            r0 = move-exception
            r8 = r12
            r12 = r0
        L37:
            if (r14 == 0) goto L48
            r14 = 0
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            java.lang.String r6 = "head"
            r2 = r11
            r3 = r14
            r7 = r13
            r9 = r15
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorDownloadConnect(r1, r2, r3, r4, r6, r7, r8, r9)
        L48:
            throw r12
        L49:
            com.ss.android.socialbase.downloader.exception.BaseException r11 = new com.ss.android.socialbase.downloader.exception.BaseException
            r12 = 1022(0x3fe, float:1.432E-42)
            java.io.IOException r14 = new java.io.IOException
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "httpService not exist, netLib = "
            r15.append(r0)
            r15.append(r13)
            java.lang.String r13 = r15.toString()
            r14.<init>(r13)
            r11.<init>(r12, r14)
            throw r11
    }

    public static void ensureOPPO() {
            java.lang.String r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            java.lang.String r0 = "oppo"
            com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO = r0
            java.lang.String r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            java.lang.String r0 = r0.toUpperCase()
            com.ss.android.socialbase.downloader.constants.DownloadConstants.UPPER_OPPO = r0
        L14:
            return
    }

    public static android.app.AlarmManager getAlarmManager() {
            r0 = 0
            return r0
    }

    public static synchronized android.content.Context getAppContext() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.util.concurrent.ExecutorService getCPUThreadExecutor() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.cpuThreadExecutor
            if (r0 != 0) goto L35
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.cpuThreadExecutor     // Catch: java.lang.Throwable -> L32
            if (r1 != 0) goto L30
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L32
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize     // Catch: java.lang.Throwable -> L32
            int r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize     // Catch: java.lang.Throwable -> L32
            r5 = 15
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L32
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L32
            r8.<init>()     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "DownloadThreadPool-cpu-fixed"
            r10 = 1
            r9.<init>(r2, r10)     // Catch: java.lang.Throwable -> L32
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L32
            r1.allowCoreThreadTimeOut(r10)     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L32
        L2e:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.cpuThreadExecutor = r1     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            goto L35
        L32:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r1
        L35:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.cpuThreadExecutor
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator getChunkAdjustCalculator() {
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultChunkAdjustCalculator r1 = new com.ss.android.socialbase.downloader.impls.DefaultChunkAdjustCalculator     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator getChunkCntCalculator() {
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultChunkCntCalculator r1 = new com.ss.android.socialbase.downloader.impls.DefaultChunkCntCalculator     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator
            return r0
    }

    public static java.util.concurrent.ExecutorService getChunkDownloadThreadExecutorService() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkDownloadExecutor
            if (r0 != 0) goto L35
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkDownloadExecutor     // Catch: java.lang.Throwable -> L32
            if (r1 != 0) goto L30
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L32
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedIOPoolSize     // Catch: java.lang.Throwable -> L32
            int r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedIOPoolSize     // Catch: java.lang.Throwable -> L32
            r5 = 15
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L32
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L32
            r8.<init>()     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "DownloadThreadPool-chunk-fixed"
            r10 = 1
            r9.<init>(r2, r10)     // Catch: java.lang.Throwable -> L32
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L32
            r1.allowCoreThreadTimeOut(r10)     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L32
        L2e:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkDownloadExecutor = r1     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            goto L35
        L32:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r1
        L35:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkDownloadExecutor
            return r0
    }

    public static java.util.concurrent.ExecutorService getDBThreadExecutorService() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.dbThreadExecutor
            if (r0 != 0) goto L35
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.dbThreadExecutor     // Catch: java.lang.Throwable -> L32
            if (r1 != 0) goto L30
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L32
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedDBPoolSize     // Catch: java.lang.Throwable -> L32
            int r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedDBPoolSize     // Catch: java.lang.Throwable -> L32
            r5 = 15
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L32
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L32
            r8.<init>()     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "DownloadThreadPool-db-fixed"
            r10 = 1
            r9.<init>(r2, r10)     // Catch: java.lang.Throwable -> L32
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L32
            r1.allowCoreThreadTimeOut(r10)     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L32
        L2e:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.dbThreadExecutor = r1     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            goto L35
        L32:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r1
        L35:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.dbThreadExecutor
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadDns getDefaultDownloadDns() {
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultDownloadDns
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.network.IDownloadDns r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultDownloadDns     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$2 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$2     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultDownloadDns = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultDownloadDns
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService getDefaultHeadHttpService() {
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHeadHttpService
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHeadHttpService     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultDownloadHeadHttpService r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadHeadHttpService     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHeadHttpService = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHeadHttpService
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHttpService getDefaultHttpService() {
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHttpService
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHttpService     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHttpService = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.defaultHttpService
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IDownloadCache getDownloadCache() {
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadCache     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache
            return r0
    }

    public static okhttp3.OkHttpClient getDownloadClient() {
            okhttp3.OkHttpClient r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.sOkHttpClient
            if (r0 != 0) goto L1a
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            okhttp3.OkHttpClient r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.sOkHttpClient     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            okhttp3.OkHttpClient$Builder r1 = createDownloadClientBuilder()     // Catch: java.lang.Throwable -> L17
            okhttp3.OkHttpClient r1 = r1.build()     // Catch: java.lang.Throwable -> L17
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.sOkHttpClient = r1     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r1
        L1a:
            okhttp3.OkHttpClient r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.sOkHttpClient
            return r0
    }

    public static java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> getDownloadCompleteHandlers() {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadDns getDownloadDns() {
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadDns
            return r0
    }

    public static com.ss.android.socialbase.downloader.impls.AbsDownloadEngine getDownloadEngine() {
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine
            return r0
    }

    public static int getDownloadExpSwitchCode() {
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadExpSwitchCode
            return r0
    }

    public static int getDownloadId(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = r1.getUrl()
            java.lang.String r1 = r1.getSavePath()
            int r1 = getDownloadId(r0, r1)
            return r1
    }

    public static int getDownloadId(java.lang.String r1, java.lang.String r2) {
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = getIdGenerator()
            if (r0 != 0) goto L8
            r1 = 0
            return r1
        L8:
            int r1 = r0.generate(r1, r2)
            return r1
    }

    public static synchronized com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler getDownloadLaunchHandler() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadLaunchHandler     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener getDownloadMonitorListener() {
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadMonitorListener
            return r0
    }

    private static int[] getDownloadNetLibs(int r3) {
            r0 = 0
            r1 = 1
            if (r3 == r1) goto L1b
            r2 = 2
            if (r3 == r2) goto L16
            r0 = 3
            if (r3 == r0) goto L10
            int[] r3 = new int[r2]
            r3 = {x0020: FILL_ARRAY_DATA , data: [1, 0} // fill-array
            return r3
        L10:
            int[] r3 = new int[r2]
            r3 = {x0028: FILL_ARRAY_DATA , data: [0, 1} // fill-array
            return r3
        L16:
            int[] r3 = new int[r1]
            r3[r0] = r1
            return r3
        L1b:
            int[] r3 = new int[r1]
            r3[r0] = r0
            return r3
    }

    public static com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler getDownloadServiceHandler() {
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler r1 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler
            return r0
    }

    public static org.json.JSONObject getDownloadSetting() {
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadSettings
            if (r0 == 0) goto L14
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadSettings
            org.json.JSONObject r0 = r0.get()
            if (r0 != 0) goto Ld
            goto L14
        Ld:
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadSettings
            org.json.JSONObject r0 = r0.get()
            return r0
        L14:
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.EMPTY_JSON
            return r0
    }

    public static com.ss.android.socialbase.downloader.monitor.InnerEventListener getEventListener() {
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEventListener
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$3 r0 = new com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$3
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEventListener = r0
        Lb:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEventListener
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService getHeadHttpService() {
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.headHttpService
            return r0
    }

    public static com.ss.android.socialbase.downloader.network.IDownloadHttpService getHttpService() {
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.httpService
            return r0
    }

    public static java.util.concurrent.ExecutorService getIOThreadExecutor() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.ioThreadExecutor
            if (r0 == 0) goto L7
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.ioThreadExecutor
            goto Lb
        L7:
            java.util.concurrent.ExecutorService r0 = getCPUThreadExecutor()
        Lb:
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator getIdGenerator() {
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultIdGenerator r1 = new com.ss.android.socialbase.downloader.impls.DefaultIdGenerator     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler getIndependentDownloadServiceHandler() {
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler
            if (r0 != 0) goto L18
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r1 = r1.createServiceHandler()     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1
        L18:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator getIndependentHolderCreator() {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator
            return r0
    }

    private static int getMaxDownloadPoolSize() {
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize
            if (r0 <= 0) goto L8
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize
            if (r0 <= r1) goto Lc
        L8:
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize = r0
        Lc:
            int r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize
            return r0
    }

    public static java.util.concurrent.ExecutorService getMixApkThreadExecutor() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixApkDownloadExecutor
            if (r0 == 0) goto L7
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixApkDownloadExecutor
            goto Lb
        L7:
            java.util.concurrent.ExecutorService r0 = getMixDefaultThreadExecutor()
        Lb:
            return r0
    }

    public static java.util.concurrent.ExecutorService getMixDefaultThreadExecutor() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixDefaultDownloadExecutor
            if (r0 != 0) goto L35
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixDefaultDownloadExecutor     // Catch: java.lang.Throwable -> L32
            if (r1 != 0) goto L30
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L32
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedMIXPoolSize     // Catch: java.lang.Throwable -> L32
            int r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedMIXPoolSize     // Catch: java.lang.Throwable -> L32
            r5 = 15
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L32
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L32
            r8.<init>()     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "DownloadThreadPool-mix-fixed"
            r10 = 1
            r9.<init>(r2, r10)     // Catch: java.lang.Throwable -> L32
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L32
            r1.allowCoreThreadTimeOut(r10)     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L32
        L2e:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixDefaultDownloadExecutor = r1     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            goto L35
        L32:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r1
        L35:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixDefaultDownloadExecutor
            return r0
    }

    public static java.util.concurrent.ExecutorService getMixFrequentThreadExecutor() {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixFrequentDownloadExecutor
            if (r0 == 0) goto L7
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixFrequentDownloadExecutor
            goto Lb
        L7:
            java.util.concurrent.ExecutorService r0 = getMixDefaultThreadExecutor()
        Lb:
            return r0
    }

    public static synchronized com.ss.android.socialbase.downloader.downloader.IMonitorConfig getMonitorConfig() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IMonitorConfig r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.monitorConfig     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback() {
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notificationClickCallback
            return r0
    }

    public static java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> getProcessCallbacks() {
            java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.processCallbacks
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.ProcessCallback> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.processCallbacks     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public static com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener getReserveWifiStatusListener() {
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.reserveWifiStatusListener
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator getRetryDelayTimeCalculator() {
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.impls.DefaultRetryDelayTimeCalculator r1 = new com.ss.android.socialbase.downloader.impls.DefaultRetryDelayTimeCalculator     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.ITTNetHandler getTTNetHandler() {
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler$DefaultTTNetHandler r1 = new com.ss.android.socialbase.downloader.downloader.ITTNetHandler$DefaultTTNetHandler     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler
            return r0
    }

    public static synchronized int getWriteBufferSize() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.writeBufferSize     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static synchronized void initComponent(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r3) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.hasInit     // Catch: java.lang.Throwable -> Lbd
            if (r1 == 0) goto L10
            java.lang.String r3 = "DownloadComponentManager"
            java.lang.String r1 = "component has init"
            com.ss.android.socialbase.downloader.logger.Logger.e(r3, r1)     // Catch: java.lang.Throwable -> Lbd
            monitor-exit(r0)
            return
        L10:
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess     // Catch: java.lang.Throwable -> Lbd
            setDownloadBuilder(r3)     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L20
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r3 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadCache     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache = r3     // Catch: java.lang.Throwable -> Lbd
        L20:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L2b
            com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler r3 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadServiceHandler     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadServiceHandler = r3     // Catch: java.lang.Throwable -> Lbd
        L2b:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L3b
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator     // Catch: java.lang.Throwable -> Lbd
            if (r3 == 0) goto L3b
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r3 = r3.createServiceHandler()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentDownloadServiceHandler = r3     // Catch: java.lang.Throwable -> Lbd
        L3b:
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L46
            com.ss.android.socialbase.downloader.impls.DefaultIdGenerator r3 = new com.ss.android.socialbase.downloader.impls.DefaultIdGenerator     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator = r3     // Catch: java.lang.Throwable -> Lbd
        L46:
            com.ss.android.socialbase.downloader.impls.AbsDownloadEngine r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L51
            com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine r3 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEngine = r3     // Catch: java.lang.Throwable -> Lbd
        L51:
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L5c
            com.ss.android.socialbase.downloader.impls.DefaultChunkCntCalculator r3 = new com.ss.android.socialbase.downloader.impls.DefaultChunkCntCalculator     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator = r3     // Catch: java.lang.Throwable -> Lbd
        L5c:
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L67
            com.ss.android.socialbase.downloader.impls.DefaultChunkAdjustCalculator r3 = new com.ss.android.socialbase.downloader.impls.DefaultChunkAdjustCalculator     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator = r3     // Catch: java.lang.Throwable -> Lbd
        L67:
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L72
            com.ss.android.socialbase.downloader.impls.DefaultRetryDelayTimeCalculator r3 = new com.ss.android.socialbase.downloader.impls.DefaultRetryDelayTimeCalculator     // Catch: java.lang.Throwable -> Lbd
            r3.<init>()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.retryDelayTimeCalculator = r3     // Catch: java.lang.Throwable -> Lbd
        L72:
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize     // Catch: java.lang.Throwable -> Lbd
            if (r3 <= 0) goto L7c
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize     // Catch: java.lang.Throwable -> Lbd
            int r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize     // Catch: java.lang.Throwable -> Lbd
            if (r3 <= r2) goto L80
        L7c:
            int r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.fixedCPUPoolSize     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize = r3     // Catch: java.lang.Throwable -> Lbd
        L80:
            registerDownloadReceiver()     // Catch: java.lang.Throwable -> Lbd
            boolean r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess     // Catch: java.lang.Throwable -> Lbd
            r2 = 1
            if (r3 == 0) goto L98
            if (r1 != 0) goto L98
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()     // Catch: java.lang.Throwable -> Lbd
            if (r3 != 0) goto L98
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r2)     // Catch: java.lang.Throwable -> Lbd
            r3.startService()     // Catch: java.lang.Throwable -> Lbd
            goto Lb6
        L98:
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainThread()     // Catch: java.lang.Throwable -> Lbd
            if (r3 == 0) goto Lad
            java.util.concurrent.ExecutorService r3 = getIOThreadExecutor()     // Catch: java.lang.Throwable -> Lbd
            if (r3 == 0) goto Lb6
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$1 r1 = new com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$1     // Catch: java.lang.Throwable -> Lbd
            r1.<init>()     // Catch: java.lang.Throwable -> Lbd
            r3.execute(r1)     // Catch: java.lang.Throwable -> Lbd
            goto Lb6
        Lad:
            android.content.Context r3 = getAppContext()     // Catch: java.lang.Throwable -> Lbd
            if (r3 == 0) goto Lb6
            com.ss.android.socialbase.downloader.utils.DownloadUtils.getCurProcessName(r3)     // Catch: java.lang.Throwable -> Lbd
        Lb6:
            ensureOPPO()     // Catch: java.lang.Throwable -> Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.hasInit = r2     // Catch: java.lang.Throwable -> Lbd
            monitor-exit(r0)
            return
        Lbd:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized boolean isDownloadInMultiProcess() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized boolean isHttpServiceInit() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.httpServiceInit     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static boolean isInit() {
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.hasInit
            return r0
    }

    private static void needAutoRefreshUnSuccessTask(boolean r0) {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.needAutoRefreshUnSuccessTask = r0
            return
    }

    public static boolean needAutoRefreshUnSuccessTask() {
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.needAutoRefreshUnSuccessTask
            return r0
    }

    public static boolean notAutoRebootService() {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notAutoRebootService
            java.lang.String r2 = "switch_not_auto_boot_service"
            int r0 = r0.optInt(r2, r1)
            if (r0 <= 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public static void onDownloadCacheSyncCallback(com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r4) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L32
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener) r2     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L9
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r3 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_START     // Catch: java.lang.Throwable -> L32
            if (r4 != r3) goto L1f
            r2.onStart()     // Catch: java.lang.Throwable -> L32
            goto L9
        L1f:
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r3 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_SUCCESS     // Catch: java.lang.Throwable -> L32
            if (r4 != r3) goto L9
            r2.onSuccess()     // Catch: java.lang.Throwable -> L32
            goto L9
        L27:
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r1 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_SUCCESS     // Catch: java.lang.Throwable -> L32
            if (r4 != r1) goto L30
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L32
            r4.clear()     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return
        L32:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r4
    }

    public static void onDownloadTaskFinish(com.ss.android.socialbase.downloader.model.DownloadTask r3, int r4) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener) r2     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L9
            r2.onFinish(r3, r4)     // Catch: java.lang.Throwable -> L1d
            goto L9
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }

    public static void onDownloadTaskStart(com.ss.android.socialbase.downloader.model.DownloadTask r3, int r4) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener) r2     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L9
            r2.onStart(r3, r4)     // Catch: java.lang.Throwable -> L1d
            goto L9
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }

    public static void registerDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L17
            r1.add(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    private static void registerDownloadReceiver() {
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadReceiver
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver r0 = new com.ss.android.socialbase.downloader.downloader.DownloadReceiver
            r0.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadReceiver = r0
        Lb:
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isReceiverRegistered
            if (r0 == 0) goto L10
            return
        L10:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L25
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L25
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadReceiver     // Catch: java.lang.Throwable -> L25
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L25
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isReceiverRegistered = r0     // Catch: java.lang.Throwable -> L25
            goto L29
        L25:
            r0 = move-exception
            r0.printStackTrace()
        L29:
            return
    }

    public static void registerDownloadTaskExecuteListener(com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L17
            r1.add(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    public static void removeDownloadCompleteHandler(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L17
            r1.remove(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    public static synchronized void setAppContext(android.content.Context r2) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            if (r2 == 0) goto L1c
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L1c
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L19
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext = r2     // Catch: java.lang.Throwable -> L19
            com.ss.android.socialbase.downloader.common.AppStatusManager r2 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()     // Catch: java.lang.Throwable -> L19
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L19
            r2.init(r1)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1c:
            monitor-exit(r0)
            return
    }

    private static void setCPUThreadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.cpuThreadExecutor = r0
        L4:
            return
    }

    private static void setChunkAdjustCalculator(com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkAdjustCalculator = r0
        L4:
            return
    }

    private static void setChunkCntCalculator(com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkCntCalculator = r0
        L4:
            return
    }

    public static void setChunkDownloadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.chunkDownloadExecutor = r0
        L4:
            return
    }

    private static void setDBThreadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.dbThreadExecutor = r0
        L4:
            return
    }

    private static void setDownloadBuilder(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2) {
            if (r2 == 0) goto L18e
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto Lf
            android.content.Context r0 = r2.getContext()
            setAppContext(r0)
        Lf:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.getDownloadCache()
            if (r0 == 0) goto L1c
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = r2.getDownloadCache()
            setDownloadCache(r0)
        L1c:
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = r2.getIdGenerator()
            if (r0 == 0) goto L29
            com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0 = r2.getIdGenerator()
            setIdGenerator(r0)
        L29:
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r2.getChunkCntCalculator()
            if (r0 == 0) goto L36
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r2.getChunkCntCalculator()
            setChunkCntCalculator(r0)
        L36:
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r2.getNotificationClickCallback()
            if (r0 == 0) goto L43
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r2.getNotificationClickCallback()
            setNotificationClickCallback(r0)
        L43:
            int r0 = r2.getMaxDownloadPoolSize()
            if (r0 == 0) goto L50
            int r0 = r2.getMaxDownloadPoolSize()
            setMaxDownloadPoolSize(r0)
        L50:
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = r2.getHttpService()
            if (r0 == 0) goto L5d
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = r2.getHttpService()
            setHttpService(r0)
        L5d:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = r2.getHeadHttpService()
            if (r0 == 0) goto L6a
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = r2.getHeadHttpService()
            setHeadHttpService(r0)
        L6a:
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r0 = r2.getDownloadLaunchHandler()
            if (r0 == 0) goto L77
            com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r0 = r2.getDownloadLaunchHandler()
            setDownloadLaunchHandler(r0)
        L77:
            java.util.concurrent.ExecutorService r0 = r2.getCPUThreadExecutor()
            if (r0 == 0) goto L84
            java.util.concurrent.ExecutorService r0 = r2.getCPUThreadExecutor()
            setCPUThreadExecutor(r0)
        L84:
            java.util.concurrent.ExecutorService r0 = r2.getIOThreadExecutor()
            if (r0 == 0) goto L91
            java.util.concurrent.ExecutorService r0 = r2.getIOThreadExecutor()
            setIOThreadExecutor(r0)
        L91:
            java.util.concurrent.ExecutorService r0 = r2.getMixDefaultDownloadExecutor()
            if (r0 == 0) goto L9e
            java.util.concurrent.ExecutorService r0 = r2.getMixDefaultDownloadExecutor()
            setMixDefaultDownloadExecutor(r0)
        L9e:
            java.util.concurrent.ExecutorService r0 = r2.getMixFrequentDownloadExecutor()
            if (r0 == 0) goto Lab
            java.util.concurrent.ExecutorService r0 = r2.getMixFrequentDownloadExecutor()
            setMixFrequentDownloadExecutor(r0)
        Lab:
            java.util.concurrent.ExecutorService r0 = r2.getMixApkDownloadExecutor()
            if (r0 == 0) goto Lb8
            java.util.concurrent.ExecutorService r0 = r2.getMixApkDownloadExecutor()
            setMixApkDownloadExecutor(r0)
        Lb8:
            java.util.concurrent.ExecutorService r0 = r2.getDBThreadExecutor()
            if (r0 == 0) goto Lc5
            java.util.concurrent.ExecutorService r0 = r2.getDBThreadExecutor()
            setDBThreadExecutor(r0)
        Lc5:
            java.util.concurrent.ExecutorService r0 = r2.getChunkThreadExecutor()
            if (r0 == 0) goto Ld2
            java.util.concurrent.ExecutorService r0 = r2.getChunkThreadExecutor()
            setChunkDownloadExecutor(r0)
        Ld2:
            java.util.concurrent.ExecutorService r0 = r2.getOkHttpDispatcherExecutor()
            if (r0 == 0) goto Ldf
            java.util.concurrent.ExecutorService r0 = r2.getOkHttpDispatcherExecutor()
            setOkHttpDispatcherExecutor(r0)
        Ldf:
            java.util.List r0 = r2.getDownloadCompleteHandlers()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lf0
            java.util.List r0 = r2.getDownloadCompleteHandlers()
            setDownloadCompleteHandlers(r0)
        Lf0:
            com.ss.android.socialbase.downloader.downloader.IMonitorConfig r0 = r2.getMonitorConfig()
            if (r0 == 0) goto Lfc
            com.ss.android.socialbase.downloader.downloader.IMonitorConfig r0 = r2.getMonitorConfig()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.monitorConfig = r0
        Lfc:
            int r0 = r2.getWriteBufferSize()
            r1 = 1024(0x400, float:1.435E-42)
            if (r0 <= r1) goto L10a
            int r0 = r2.getWriteBufferSize()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.writeBufferSize = r0
        L10a:
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r2.getChunkAdjustCalculator()
            if (r0 == 0) goto L117
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r2.getChunkAdjustCalculator()
            setChunkAdjustCalculator(r0)
        L117:
            boolean r0 = r2.isDownloadInMultiProcess()
            if (r0 == 0) goto L120
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess = r0
        L120:
            int r0 = r2.getDownloadExpSwitch()
            if (r0 == 0) goto L12c
            int r0 = r2.getDownloadExpSwitch()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadExpSwitchCode = r0
        L12c:
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = r2.getDownloadSetting()
            if (r0 == 0) goto L139
            com.ss.android.socialbase.downloader.depend.IDownloadSettings r0 = r2.getDownloadSetting()
            setDownloadSetting(r0)
        L139:
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = r2.getDownloadDns()
            if (r0 == 0) goto L145
            com.ss.android.socialbase.downloader.network.IDownloadDns r0 = r2.getDownloadDns()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadDns = r0
        L145:
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = r2.getTTNetHandler()
            if (r0 == 0) goto L17a
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = r2.getTTNetHandler()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler = r0
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler
            boolean r0 = r0.isTTNetEnable()
            if (r0 == 0) goto L16c
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = r0.getTTNetDownloadHttpService()
            setHttpService(r0)
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.iTTNetHandler
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = r0.getTTNetDownloadHeadHttpService()
            setHeadHttpService(r0)
            goto L17a
        L16c:
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = getDefaultHttpService()
            setHttpService(r0)
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0 = getDefaultHeadHttpService()
            setHeadHttpService(r0)
        L17a:
            boolean r0 = r2.needAutoRefreshUnSuccessTask()
            needAutoRefreshUnSuccessTask(r0)
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0 = r2.getDownloadMonitorListener()
            if (r0 == 0) goto L18e
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r2 = r2.getDownloadMonitorListener()
            setDownloadMonitorListener(r2)
        L18e:
            return
    }

    private static void setDownloadCache(com.ss.android.socialbase.downloader.downloader.IDownloadCache r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache = r0
        L4:
            return
    }

    private static void setDownloadCompleteHandlers(java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCompleteHandlers     // Catch: java.lang.Throwable -> L12
            r1.addAll(r2)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            goto L15
        L12:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r2
        L15:
            return
    }

    public static void setDownloadEventListener(com.ss.android.socialbase.downloader.monitor.InnerEventListener r0) {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadEventListener = r0
            return
    }

    public static synchronized void setDownloadInMultiProcess() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            r1 = 1
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess = r1     // Catch: java.lang.Throwable -> L3a
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L31
            android.content.Context r3 = getAppContext()     // Catch: java.lang.Throwable -> L31
            java.lang.Class<com.ss.android.socialbase.downloader.impls.DownloadHandleService> r4 = com.ss.android.socialbase.downloader.impls.DownloadHandleService.class
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = "com.ss.android.downloader.action.MULTI_PROCESS_NOTIFY"
            r2.setAction(r3)     // Catch: java.lang.Throwable -> L31
            android.content.Context r3 = getAppContext()     // Catch: java.lang.Throwable -> L31
            r3.startService(r2)     // Catch: java.lang.Throwable -> L31
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()     // Catch: java.lang.Throwable -> L31
            if (r2 != 0) goto L38
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)     // Catch: java.lang.Throwable -> L31
            r1.startService()     // Catch: java.lang.Throwable -> L31
            goto L38
        L31:
            r1 = move-exception
            r2 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadInMultiProcess = r2     // Catch: java.lang.Throwable -> L3a
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L3a
        L38:
            monitor-exit(r0)
            return
        L3a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void setDownloadLaunchHandler(com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            if (r1 == 0) goto L18
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadLaunchHandler = r1     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache     // Catch: java.lang.Throwable -> L15
            boolean r1 = r1 instanceof com.ss.android.socialbase.downloader.impls.DefaultDownloadCache     // Catch: java.lang.Throwable -> L15
            if (r1 == 0) goto L18
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCache     // Catch: java.lang.Throwable -> L15
            com.ss.android.socialbase.downloader.impls.DefaultDownloadCache r1 = (com.ss.android.socialbase.downloader.impls.DefaultDownloadCache) r1     // Catch: java.lang.Throwable -> L15
            r1.resumeUnCompleteTaskMayDelayed()     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L18:
            monitor-exit(r0)
            return
    }

    private static void setDownloadMonitorListener(com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadMonitorListener = r0
        L4:
            return
    }

    public static void setDownloadSetting(com.ss.android.socialbase.downloader.depend.IDownloadSettings r0) {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadSettings = r0
            com.ss.android.socialbase.downloader.setting.DownloadSetting.init()
            return
    }

    public static void setHeadHttpService(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.headHttpService = r0
        L4:
            return
    }

    public static void setHttpService(com.ss.android.socialbase.downloader.network.IDownloadHttpService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.httpService = r0
        L4:
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.httpService
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.httpServiceInit = r0
            return
    }

    private static void setIOThreadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.ioThreadExecutor = r0
        L4:
            return
    }

    private static void setIdGenerator(com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.idGenerator = r0
        L4:
            return
    }

    public static void setIndependentServiceCreator(com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setIndependentServiceCreator::creator="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "wjd"
            com.ss.android.socialbase.downloader.logger.Logger.v(r1, r0)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator = r2
            return
    }

    private static void setMaxDownloadPoolSize(int r0) {
            if (r0 <= 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.maxDownloadPoolSize = r0
        L4:
            return
    }

    private static void setMixApkDownloadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixApkDownloadExecutor = r0
        L4:
            return
    }

    private static void setMixDefaultDownloadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixDefaultDownloadExecutor = r0
        L4:
            return
    }

    private static void setMixFrequentDownloadExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.mixFrequentDownloadExecutor = r0
        L4:
            return
    }

    public static void setNotAutoRebootService(boolean r0) {
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notAutoRebootService = r0
            return
    }

    public static void setNotificationClickCallback(com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notificationClickCallback = r0
        L4:
            return
    }

    public static void setOkHttpDispatcherExecutor(java.util.concurrent.ExecutorService r0) {
            if (r0 == 0) goto L4
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.okHttpDispatcherExecutor = r0
        L4:
            return
    }

    public static void setReserveWifiStatusListener(com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r0) {
            return
    }

    public static void submitCPUTask(java.lang.Runnable r1) {
            r0 = 0
            submitCPUTask(r1, r0)
            return
    }

    public static void submitCPUTask(java.lang.Runnable r0, boolean r1) {
            if (r0 != 0) goto L3
            return
        L3:
            if (r1 == 0) goto Lf
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainThread()
            if (r1 != 0) goto Lf
            r0.run()
            goto L16
        Lf:
            java.util.concurrent.ExecutorService r1 = getCPUThreadExecutor()
            r1.execute(r0)
        L16:
            return
    }

    public static void submitDBTask(java.lang.Runnable r1) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainThread()
            if (r0 != 0) goto Ld
            r1.run()
            goto L14
        Ld:
            java.util.concurrent.ExecutorService r0 = getDBThreadExecutorService()
            r0.execute(r1)
        L14:
            return
    }

    public static void submitIOTask(java.lang.Runnable r1) {
            r0 = 0
            submitIOTask(r1, r0)
            return
    }

    public static void submitIOTask(java.lang.Runnable r0, boolean r1) {
            if (r0 != 0) goto L3
            return
        L3:
            if (r1 == 0) goto Lf
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainThread()
            if (r1 != 0) goto Lf
            r0.run()
            goto L16
        Lf:
            java.util.concurrent.ExecutorService r1 = getIOThreadExecutor()
            r1.execute(r0)
        L16:
            return
    }

    public static boolean supportMultiProc() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "supportMultiProc::="
            r0.append(r1)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L12
            r1 = r2
            goto L13
        L12:
            r1 = r3
        L13:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "wjd"
            com.ss.android.socialbase.downloader.logger.Logger.v(r1, r0)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.independentHolderCreator
            if (r0 == 0) goto L24
            goto L25
        L24:
            r2 = r3
        L25:
            return r2
    }

    public static void unRegisterDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadCacheSyncStatusListeners     // Catch: java.lang.Throwable -> L17
            r1.remove(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }

    static synchronized void unRegisterDownloadReceiver() {
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadComponentManager> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.class
            monitor-enter(r0)
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isReceiverRegistered     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            if (r1 == 0) goto L20
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadReceiver     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            if (r1 == 0) goto L20
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            if (r1 == 0) goto L20
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.appContext     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            com.ss.android.socialbase.downloader.downloader.DownloadReceiver r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadReceiver     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            r1.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isReceiverRegistered = r1     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1c
            goto L20
        L1a:
            r1 = move-exception
            goto L22
        L1c:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L1a
        L20:
            monitor-exit(r0)
            return
        L22:
            monitor-exit(r0)
            throw r1
    }

    public static void unRegisterDownloadTaskExecuteListener(com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener r2) {
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadTaskExecuteListener> r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadTaskExecuteListeners     // Catch: java.lang.Throwable -> L17
            r1.remove(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
    }
}
