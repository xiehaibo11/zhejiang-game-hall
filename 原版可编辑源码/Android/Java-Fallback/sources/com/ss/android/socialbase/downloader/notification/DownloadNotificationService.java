package com.ss.android.socialbase.downloader.notification;

public class DownloadNotificationService extends android.app.Service {
    private static final long NOTIFY_TIME_WINDOW = 900;
    private static final java.lang.String TAG = null;
    private static boolean sAllowStartForeground;
    private static boolean sBugFixNonOngoing;
    private static boolean sBugfixNotifyTooFast;
    private static int sForegroundId;
    private static int sIndependentProcessForegroundId;
    private static volatile long sLastImportantNotifyTimestamp;
    private static volatile long sLastNotifyTimestamp;
    private static long sNotifyTimeWindow;
    private com.ss.android.socialbase.downloader.thread.ThreadWithHandler mNotifyThreadHandler;
    private final android.util.SparseArray<android.app.Notification> pendingImportantNotify;



    static {
            java.lang.Class<com.ss.android.socialbase.downloader.notification.DownloadNotificationService> r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG = r0
            r0 = -1
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId = r0
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId = r0
            r0 = 1
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sAllowStartForeground = r0
            r0 = 0
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugFixNonOngoing = r0
            r0 = 900(0x384, double:4.447E-321)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sNotifyTimeWindow = r0
            return
    }

    public DownloadNotificationService() {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r1 = 2
            r0.<init>(r1)
            r2.pendingImportantNotify = r0
            return
    }

    static boolean access$000() {
            boolean r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugfixNotifyTooFast
            return r0
    }

    static long access$100() {
            long r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastImportantNotifyTimestamp
            return r0
    }

    static long access$200() {
            long r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sNotifyTimeWindow
            return r0
    }

    static void access$300(com.ss.android.socialbase.downloader.notification.DownloadNotificationService r0, android.app.NotificationManager r1, int r2, android.app.Notification r3) {
            r0.doNotify(r1, r2, r3)
            return
    }

    static void access$400(com.ss.android.socialbase.downloader.notification.DownloadNotificationService r0, android.app.NotificationManager r1, int r2, android.app.Notification r3) {
            r0.doImportantNotify(r1, r2, r3)
            return
    }

    static com.ss.android.socialbase.downloader.thread.ThreadWithHandler access$500(com.ss.android.socialbase.downloader.notification.DownloadNotificationService r0) {
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = r0.mNotifyThreadHandler
            return r0
    }

    static void access$600(com.ss.android.socialbase.downloader.notification.DownloadNotificationService r0, android.app.NotificationManager r1, int r2) {
            r0.doCancel(r1, r2)
            return
    }

    static void access$700(com.ss.android.socialbase.downloader.notification.DownloadNotificationService r0, android.app.NotificationManager r1, int r2) {
            r0.performImportantNotify(r1, r2)
            return
    }

    private void createNotifyHandlerThread() {
            r2 = this;
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = r2.mNotifyThreadHandler
            if (r0 != 0) goto L10
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = new com.ss.android.socialbase.downloader.thread.ThreadWithHandler
            java.lang.String r1 = "DownloaderNotifyThread"
            r0.<init>(r1)
            r2.mNotifyThreadHandler = r0
            r0.start()
        L10:
            return
    }

    private void doCancel(android.app.NotificationManager r10, int r11) {
            r9 = this;
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId
            if (r0 == r11) goto Le
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId
            if (r0 != r11) goto L9
            goto Le
        L9:
            r10.cancel(r11)     // Catch: java.lang.Throwable -> Lf9
            goto Lf9
        Le:
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId
            r1 = 1
            r2 = 0
            if (r0 != r11) goto L18
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId = r2
            r0 = r2
            goto L1b
        L18:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId = r2
            r0 = r1
        L1b:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r3 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> L69
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = r3.getDownloadHandler(r11)     // Catch: java.lang.Throwable -> L69
            boolean r4 = r3.isServiceForeground()     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = ", isIndependentProcess = "
            if (r4 != 0) goto L49
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sAllowStartForeground = r2     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG     // Catch: java.lang.Throwable -> L69
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r6.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.String r7 = "try to stopForeground when is not Foreground, id = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L69
            r6.append(r11)     // Catch: java.lang.Throwable -> L69
            r6.append(r5)     // Catch: java.lang.Throwable -> L69
            r6.append(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L69
            com.ss.android.socialbase.downloader.logger.Logger.w(r4, r6)     // Catch: java.lang.Throwable -> L69
        L49:
            java.lang.String r4 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG     // Catch: java.lang.Throwable -> L69
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r6.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.String r7 = "doCancel, ========== stopForeground id = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L69
            r6.append(r11)     // Catch: java.lang.Throwable -> L69
            r6.append(r5)     // Catch: java.lang.Throwable -> L69
            r6.append(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L69
            com.ss.android.socialbase.downloader.logger.Logger.i(r4, r5)     // Catch: java.lang.Throwable -> L69
            r3.stopForeground(r2, r1)     // Catch: java.lang.Throwable -> L69
            goto L6d
        L69:
            r3 = move-exception
            r3.printStackTrace()
        L6d:
            r10.cancel(r11)     // Catch: java.lang.Throwable -> L70
        L70:
            boolean r3 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sAllowStartForeground
            if (r3 != 0) goto L75
            return
        L75:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r3 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()     // Catch: java.lang.Throwable -> Lf5
            android.util.SparseArray r3 = r3.getAllNotificationItems()     // Catch: java.lang.Throwable -> Lf5
            r4 = 0
            if (r3 == 0) goto Lc0
            int r5 = r3.size()     // Catch: java.lang.Throwable -> Lf5
            int r5 = r5 - r1
        L85:
            if (r5 < 0) goto Lc0
            java.lang.Object r6 = r3.valueAt(r5)     // Catch: java.lang.Throwable -> Lf5
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r6 = (com.ss.android.socialbase.downloader.notification.AbsNotificationItem) r6     // Catch: java.lang.Throwable -> Lf5
            if (r6 == 0) goto Lbd
            int r7 = r6.getId()     // Catch: java.lang.Throwable -> Lf5
            if (r7 == r11) goto Lbd
            int r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId     // Catch: java.lang.Throwable -> Lf5
            if (r7 == r8) goto Lbd
            int r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId     // Catch: java.lang.Throwable -> Lf5
            if (r7 == r8) goto Lbd
            boolean r7 = r6.isOngoing()     // Catch: java.lang.Throwable -> Lf5
            if (r7 == 0) goto Lbd
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r7 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> Lf5
            int r8 = r6.getId()     // Catch: java.lang.Throwable -> Lf5
            int r7 = r7.getDownloadWithIndependentProcessStatus(r8)     // Catch: java.lang.Throwable -> Lf5
            if (r7 != r1) goto Lb9
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()     // Catch: java.lang.Throwable -> Lf5
            if (r7 != 0) goto Lb9
            r7 = r1
            goto Lba
        Lb9:
            r7 = r2
        Lba:
            if (r7 != r0) goto Lbd
            goto Lc1
        Lbd:
            int r5 = r5 + (-1)
            goto L85
        Lc0:
            r6 = r4
        Lc1:
            if (r6 == 0) goto Lf9
            int r11 = r6.getId()     // Catch: java.lang.Throwable -> Lf5
            r10.cancel(r11)     // Catch: java.lang.Throwable -> Lcb
            goto Lcf
        Lcb:
            r10 = move-exception
            r10.printStackTrace()     // Catch: java.lang.Throwable -> Lf5
        Lcf:
            com.ss.android.socialbase.downloader.downloader.Downloader r10 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r9)     // Catch: java.lang.Throwable -> Lf5
            int r10 = r10.getStatus(r11)     // Catch: java.lang.Throwable -> Lf5
            if (r10 != r1) goto Lda
            goto Ldb
        Lda:
            r1 = r2
        Ldb:
            java.lang.String r10 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG     // Catch: java.lang.Throwable -> Lf5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r0.<init>()     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r2 = "doCancel, updateNotification id = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lf5
            r0.append(r11)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r11 = r0.toString()     // Catch: java.lang.Throwable -> Lf5
            com.ss.android.socialbase.downloader.logger.Logger.i(r10, r11)     // Catch: java.lang.Throwable -> Lf5
            r6.updateNotification(r4, r1)     // Catch: java.lang.Throwable -> Lf5
            goto Lf9
        Lf5:
            r10 = move-exception
            r10.printStackTrace()
        Lf9:
            return
    }

    private void doImportantNotify(android.app.NotificationManager r8, int r9, android.app.Notification r10) {
            r7 = this;
            android.util.SparseArray<android.app.Notification> r0 = r7.pendingImportantNotify
            monitor-enter(r0)
            android.util.SparseArray<android.app.Notification> r1 = r7.pendingImportantNotify     // Catch: java.lang.Throwable -> L60
            int r1 = r1.indexOfKey(r9)     // Catch: java.lang.Throwable -> L60
            if (r1 < 0) goto L1a
            android.util.SparseArray<android.app.Notification> r2 = r7.pendingImportantNotify     // Catch: java.lang.Throwable -> L60
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L60
            if (r1 >= r2) goto L1a
            android.util.SparseArray<android.app.Notification> r8 = r7.pendingImportantNotify     // Catch: java.lang.Throwable -> L60
            r8.setValueAt(r1, r10)     // Catch: java.lang.Throwable -> L60
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            return
        L1a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            long r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sNotifyTimeWindow
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastNotifyTimestamp
            long r2 = r2 - r4
            long r0 = r0 - r2
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L2c
            r0 = r2
        L2c:
            r4 = 20000(0x4e20, double:9.8813E-320)
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 <= 0) goto L33
            r0 = r4
        L33:
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 + r0
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastImportantNotifyTimestamp = r4
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastNotifyTimestamp = r4
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L44
            r7.doNotify(r8, r9, r10)
            goto L5f
        L44:
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r2 = r7.mNotifyThreadHandler
            if (r2 == 0) goto L5f
            android.util.SparseArray<android.app.Notification> r2 = r7.pendingImportantNotify
            monitor-enter(r2)
            android.util.SparseArray<android.app.Notification> r3 = r7.pendingImportantNotify     // Catch: java.lang.Throwable -> L5c
            r3.put(r9, r10)     // Catch: java.lang.Throwable -> L5c
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L5c
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r10 = r7.mNotifyThreadHandler
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService$2 r2 = new com.ss.android.socialbase.downloader.notification.DownloadNotificationService$2
            r2.<init>(r7, r8, r9)
            r10.postDelayed(r2, r0)
            goto L5f
        L5c:
            r8 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L5c
            throw r8
        L5f:
            return
        L60:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            throw r8
    }

    private void doNotify(android.app.NotificationManager r6, int r7, android.app.Notification r8) {
            r5 = this;
            boolean r0 = r5.needStartForeground(r7, r8)
            if (r0 == 0) goto L85
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> L80
            int r0 = r0.getDownloadWithIndependentProcessStatus(r7)     // Catch: java.lang.Throwable -> L80
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L1a
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L1a
            r0 = r2
            goto L1b
        L1a:
            r0 = r1
        L1b:
            if (r0 != 0) goto L23
            int r3 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId     // Catch: java.lang.Throwable -> L80
            if (r3 != 0) goto L23
        L21:
            r1 = r2
            goto L2a
        L23:
            if (r0 == 0) goto L2a
            int r3 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId     // Catch: java.lang.Throwable -> L80
            if (r3 != 0) goto L2a
            goto L21
        L2a:
            if (r1 == 0) goto L9a
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r1 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()     // Catch: java.lang.Throwable -> L80
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = r1.getDownloadHandler(r7)     // Catch: java.lang.Throwable -> L80
            boolean r2 = r1.isServiceAlive()     // Catch: java.lang.Throwable -> L80
            if (r2 == 0) goto L69
            boolean r2 = r1.isServiceForeground()     // Catch: java.lang.Throwable -> L80
            if (r2 != 0) goto L69
            java.lang.String r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG     // Catch: java.lang.Throwable -> L80
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            r3.<init>()     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = "doNotify, startForeground, ======== id = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L80
            r3.append(r7)     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = ", isIndependentProcess = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L80
            r3.append(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L80
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r3)     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L63
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId = r7     // Catch: java.lang.Throwable -> L80
            goto L65
        L63:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId = r7     // Catch: java.lang.Throwable -> L80
        L65:
            r1.startForeground(r7, r8)     // Catch: java.lang.Throwable -> L80
            goto L9a
        L69:
            java.lang.String r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.TAG     // Catch: java.lang.Throwable -> L80
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            r2.<init>()     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = "doNotify: canStartForeground = true, but proxy can not startForeground, isIndependentProcess = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L80
            r2.append(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L80
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)     // Catch: java.lang.Throwable -> L80
            goto L9a
        L80:
            r0 = move-exception
            r0.printStackTrace()
            goto L9a
        L85:
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId
            if (r0 == r7) goto L8d
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId
            if (r0 != r7) goto L9a
        L8d:
            boolean r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugFixNonOngoing
            if (r0 == 0) goto L9a
            int r0 = r8.flags
            r0 = r0 & 2
            if (r0 != 0) goto L9a
            r5.doCancel(r6, r7)
        L9a:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La9
            long r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastNotifyTimestamp     // Catch: java.lang.Throwable -> La9
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto La6
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sLastNotifyTimestamp = r0     // Catch: java.lang.Throwable -> La9
        La6:
            r6.notify(r7, r8)     // Catch: java.lang.Throwable -> La9
        La9:
            return
    }

    private void handleIntent(android.content.Intent r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r4.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            return
        Le:
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r1 = r3.mNotifyThreadHandler
            if (r1 == 0) goto L1a
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService$1 r2 = new com.ss.android.socialbase.downloader.notification.DownloadNotificationService$1
            r2.<init>(r3, r4, r0)
            r1.post(r2)
        L1a:
            return
    }

    private boolean needStartForeground(int r4, android.app.Notification r5) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sAllowStartForeground
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId
            if (r0 == r4) goto L32
            int r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId
            if (r2 != r4) goto Lf
            goto L32
        Lf:
            if (r0 == 0) goto L14
            if (r2 == 0) goto L14
            return r1
        L14:
            boolean r4 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugFixNonOngoing
            if (r4 == 0) goto L1f
            int r4 = r5.flags
            r4 = r4 & 2
            if (r4 != 0) goto L1f
            return r1
        L1f:
            int r4 = android.os.Build.VERSION.SDK_INT
            r0 = 26
            if (r4 < r0) goto L30
            java.lang.String r4 = r5.getChannelId()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L30
            return r1
        L30:
            r4 = 1
            return r4
        L32:
            return r1
    }

    private void performImportantNotify(android.app.NotificationManager r4, int r5) {
            r3 = this;
            android.util.SparseArray<android.app.Notification> r0 = r3.pendingImportantNotify
            monitor-enter(r0)
            android.util.SparseArray<android.app.Notification> r1 = r3.pendingImportantNotify     // Catch: java.lang.Throwable -> L17
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L17
            android.app.Notification r1 = (android.app.Notification) r1     // Catch: java.lang.Throwable -> L17
            android.util.SparseArray<android.app.Notification> r2 = r3.pendingImportantNotify     // Catch: java.lang.Throwable -> L17
            r2.remove(r5)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto L16
            r3.doNotify(r4, r5, r1)
        L16:
            return
        L17:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r4
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r7 = this;
            super.onCreate()
            r7.createNotifyHandlerThread()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r7)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 0
            java.lang.String r2 = "download_service_foreground"
            int r2 = r0.optInt(r2, r1)
            r3 = 3
            r4 = -1
            r5 = 1
            if (r2 == r5) goto L1b
            if (r2 != r3) goto L21
        L1b:
            int r5 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId
            if (r5 != r4) goto L21
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sForegroundId = r1
        L21:
            r5 = 2
            if (r2 == r5) goto L26
            if (r2 != r3) goto L2c
        L26:
            int r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId
            if (r2 != r4) goto L2c
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sIndependentProcessForegroundId = r1
        L2c:
            java.lang.String r2 = "non_going_notification_foreground"
            boolean r2 = r0.optBugFix(r2, r1)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugFixNonOngoing = r2
            java.lang.String r2 = "notify_too_fast"
            boolean r1 = r0.optBugFix(r2, r1)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sBugfixNotifyTooFast = r1
            r1 = 900(0x384, double:4.447E-321)
            java.lang.String r3 = "notification_time_window"
            long r3 = r0.optLong(r3, r1)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sNotifyTimeWindow = r3
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L52
            r5 = 1200(0x4b0, double:5.93E-321)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L54
        L52:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationService.sNotifyTimeWindow = r1
        L54:
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.ss.android.socialbase.downloader.thread.ThreadWithHandler r0 = r1.mNotifyThreadHandler
            if (r0 == 0) goto Ld
            r0.quit()     // Catch: java.lang.Throwable -> La
        La:
            r0 = 0
            r1.mNotifyThreadHandler = r0
        Ld:
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            r0.handleIntent(r1)
            r1 = 2
            return r1
    }
}
