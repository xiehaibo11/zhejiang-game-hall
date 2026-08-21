package com.ss.android.socialbase.downloader.utils;

public class IPCUtils {
    private static android.os.Handler mMainThreadHandler;
































    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.utils.IPCUtils.mMainThreadHandler = r0
            return
    }

    public IPCUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.os.Handler access$000() {
            android.os.Handler r0 = com.ss.android.socialbase.downloader.utils.IPCUtils.mMainThreadHandler
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator convertCntCalculatorFromAidl(com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$19 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$19
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator convertCntCalculatorToAidl(com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$13 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$13
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend convertDependToAidl(com.ss.android.socialbase.downloader.depend.IDownloadDepend r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$11 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$11
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceCallback convertDiskSpaceCallbackFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$10 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$10
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback convertDiskSpaceCallbackToAidl(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$27 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$27
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler convertDiskSpaceHandlerFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$26 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$26
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler convertDiskSpaceHandlerToAidl(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$9 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$9
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler convertDownloadCompleteHandlerFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$16 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$16
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler convertDownloadCompleteHandlerToAidl(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$17 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$17
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadDepend convertDownloadDependFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$20 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$20
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend convertDownloadMonitorDependFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$21 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$21
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener convertDownloadNotificationEventListenerFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$15 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$15
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener convertDownloadNotificationEventListenerToAidl(com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$3 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$3
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.model.DownloadTask convertDownloadTaskFromAidl(com.ss.android.socialbase.downloader.model.DownloadAidlTask r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = new com.ss.android.socialbase.downloader.model.DownloadTask     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.getDownloadInfo()     // Catch: android.os.RemoteException -> Ldc
            r1.<init>(r2)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator r2 = r4.getChunkStrategy()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r2 = convertCntCalculatorFromAidl(r2)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r1.chunkStategy(r2)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r3 = r4.getDownloadNotificationEventListener()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3 = convertDownloadNotificationEventListenerFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.notificationEventListener(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor r3 = r4.getInterceptor()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r3 = convertInterceptorFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.interceptor(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r3 = r4.getDepend()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r3 = convertDownloadDependFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.depend(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend r3 = r4.getMonitorDepend()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r3 = convertDownloadMonitorDependFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.monitorDepend(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r3 = r4.getForbiddenHandler()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r3 = convertForbiddenHandlerFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.forbiddenHandler(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r3 = r4.getDiskSpaceHandler()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r3 = convertDiskSpaceHandlerFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.diskSpaceHandler(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r3 = r4.getFileProvider()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r3 = convertFileProviderFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.fileUriProvider(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r3 = r4.getNotificationClickCallback()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r3 = convertNotificationClickCallbackFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.model.DownloadTask r2 = r2.notificationClickCallback(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r3 = r4.getRetryDelayTimeCalculator()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r3 = convertRetryDelayTimeCalculatorFromAidl(r3)     // Catch: android.os.RemoteException -> Ldc
            r2.retryDelayTimeCalculator(r3)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: android.os.RemoteException -> Ldc
            int r2 = r2.ordinal()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = r4.getSingleDownloadListener(r2)     // Catch: android.os.RemoteException -> Ldc
            if (r2 == 0) goto L9b
            int r3 = r2.hashCode()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = convertListenerFromAidl(r2)     // Catch: android.os.RemoteException -> Ldc
            r1.mainThreadListenerWithHashCode(r3, r2)     // Catch: android.os.RemoteException -> Ldc
        L9b:
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: android.os.RemoteException -> Ldc
            int r2 = r2.ordinal()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = r4.getSingleDownloadListener(r2)     // Catch: android.os.RemoteException -> Ldc
            if (r2 == 0) goto Lb2
            int r3 = r2.hashCode()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = convertListenerFromAidl(r2)     // Catch: android.os.RemoteException -> Ldc
            r1.subThreadListenerWithHashCode(r3, r2)     // Catch: android.os.RemoteException -> Ldc
        Lb2:
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: android.os.RemoteException -> Ldc
            int r2 = r2.ordinal()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = r4.getSingleDownloadListener(r2)     // Catch: android.os.RemoteException -> Ldc
            if (r2 == 0) goto Lc9
            int r3 = r2.hashCode()     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = convertListenerFromAidl(r2)     // Catch: android.os.RemoteException -> Ldc
            r1.notificationListenerWithHashCode(r3, r2)     // Catch: android.os.RemoteException -> Ldc
        Lc9:
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN     // Catch: android.os.RemoteException -> Ldc
            setDownloadListeners(r1, r4, r2)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: android.os.RemoteException -> Ldc
            setDownloadListeners(r1, r4, r2)     // Catch: android.os.RemoteException -> Ldc
            com.ss.android.socialbase.downloader.constants.ListenerType r2 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION     // Catch: android.os.RemoteException -> Ldc
            setDownloadListeners(r1, r4, r2)     // Catch: android.os.RemoteException -> Ldc
            setCompletedHandlers(r1, r4)     // Catch: android.os.RemoteException -> Ldc
            return r1
        Ldc:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public static com.ss.android.socialbase.downloader.model.DownloadAidlTask convertDownloadTaskToAidl(com.ss.android.socialbase.downloader.model.DownloadTask r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$1 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$1
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider convertFileProviderFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$30 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$30
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider convertFileProviderToAidl(com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$7 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$7
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenCallback convertForbiddenCallbackFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$8 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$8
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback convertForbiddenCallbackToAidl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$23 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$23
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler convertForbiddenHandlerFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$22 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$22
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler convertForbiddenHandlerToAidl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenHandler r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$6 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$6
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadInterceptor convertInterceptorFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$29 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$29
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor convertInterceptorToAidl(com.ss.android.socialbase.downloader.depend.IDownloadInterceptor r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$14 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$14
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadListener convertListenerFromAidl(com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$31 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$31
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadAidlListener convertListenerToAidl(com.ss.android.socialbase.downloader.depend.IDownloadListener r1, boolean r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$2 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$2
            r0.<init>(r1, r2)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend convertMonitorDependToAidl(com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$12 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$12
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.INotificationClickCallback convertNotificationClickCallbackFromAidl(com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$18 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$18
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback convertNotificationClickCallbackToAidl(com.ss.android.socialbase.downloader.depend.INotificationClickCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$4 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$4
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.ProcessCallback convertProcessAidlCallbackFromAidl(com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$25 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$25
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.ProcessAidlCallback convertProcessCallbackToAidl(com.ss.android.socialbase.downloader.depend.ProcessCallback r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$24 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$24
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator convertRetryDelayTimeCalculatorFromAidl(com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$28 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$28
            r0.<init>(r1)
            return r0
    }

    public static com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator convertRetryDelayTimeCalculatorToAidl(com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.ss.android.socialbase.downloader.utils.IPCUtils$5 r0 = new com.ss.android.socialbase.downloader.utils.IPCUtils$5
            r0.<init>(r1)
            return r0
    }

    private static void setCompletedHandlers(com.ss.android.socialbase.downloader.model.DownloadTask r2, com.ss.android.socialbase.downloader.model.DownloadAidlTask r3) throws android.os.RemoteException {
            r0 = 0
        L1:
            int r1 = r3.getDownloadCompleteHandlerSize()
            if (r0 >= r1) goto L17
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r1 = r3.getDownloadCompleteAidlHandlerByIndex(r0)
            if (r1 == 0) goto L14
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r1 = convertDownloadCompleteHandlerFromAidl(r1)
            r2.addDownloadCompleteHandler(r1)
        L14:
            int r0 = r0 + 1
            goto L1
        L17:
            return
    }

    private static void setDownloadListeners(com.ss.android.socialbase.downloader.model.DownloadTask r4, com.ss.android.socialbase.downloader.model.DownloadAidlTask r5, com.ss.android.socialbase.downloader.constants.ListenerType r6) throws android.os.RemoteException {
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r6.ordinal()
            int r2 = r5.getDownloadListenerSize(r2)
            if (r1 >= r2) goto L28
            int r2 = r6.ordinal()
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = r5.getDownloadListenerByIndex(r2, r1)
            if (r2 == 0) goto L25
            int r3 = r2.getOriginHashCode()
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = convertListenerFromAidl(r2)
            r0.put(r3, r2)
        L25:
            int r1 = r1 + 1
            goto L6
        L28:
            r4.setDownloadListeners(r0, r6)
            return
    }
}
