package com.ss.android.socialbase.downloader.notification;

public class DownloadNotificationManager {
    private static final java.lang.String KEY_NOTIFS_STRING = "notifs_string";
    private static volatile com.ss.android.socialbase.downloader.notification.DownloadNotificationManager instance;
    private static final java.lang.Object sLock = null;
    private final long PROGRESS_NOTIFY_DURATION;
    private final java.util.Map<java.lang.Integer, java.lang.Long> PROGRESS_NOTIFY_LAST_TIME_INFO;
    private final android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> notificationItemArray;
    private final java.util.Set<java.lang.String> notificationTagSet;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.sLock = r0
            return
    }

    private DownloadNotificationManager() {
            r2 = this;
            r2.<init>()
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.PROGRESS_NOTIFY_DURATION = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.PROGRESS_NOTIFY_LAST_TIME_INFO = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.notificationTagSet = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.notificationItemArray = r0
            return
    }

    public static com.ss.android.socialbase.downloader.notification.DownloadNotificationManager getInstance() {
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.downloader.notification.DownloadNotificationManager> r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = new com.ss.android.socialbase.downloader.notification.DownloadNotificationManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.instance
            return r0
    }

    static boolean isCompleteAndVisible(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            boolean r0 = r1.isDownloadOverStatus()
            if (r0 == 0) goto L12
            int r1 = r1.getNotificationVisibility()
            boolean r1 = isCompleteVisibility(r1)
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    static boolean isCompleteVisibility(int r2) {
            r0 = 1
            if (r2 == r0) goto L9
            r1 = 3
            if (r2 != r1) goto L7
            goto L9
        L7:
            r2 = 0
            return r2
        L9:
            return r0
    }

    public void addNotification(com.ss.android.socialbase.downloader.notification.AbsNotificationItem r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r0 = r3.notificationItemArray
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r1 = r3.notificationItemArray     // Catch: java.lang.Throwable -> L11
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L11
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r4
    }

    public void cancel(int r4) {
            r3 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L22
            if (r4 != 0) goto L9
            goto L22
        L9:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L1e
            java.lang.Class<com.ss.android.socialbase.downloader.notification.DownloadNotificationService> r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.class
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "android.ss.intent.action.DOWNLOAD_NOTIFICATION_CANCEL"
            r1.setAction(r2)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "DOWNLOAD_NOTIFICATION_BUNDLE_EXTRA_ID"
            r1.putExtra(r2, r4)     // Catch: java.lang.Throwable -> L1e
            r0.startService(r1)     // Catch: java.lang.Throwable -> L1e
            goto L22
        L1e:
            r4 = move-exception
            r4.printStackTrace()
        L22:
            return
    }

    void cancelCompleteNotification(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            boolean r0 = isCompleteAndVisible(r2)
            if (r0 == 0) goto Ld
            int r2 = r2.getId()
            r1.cancelNotification(r2)
        Ld:
            return
    }

    public void cancelNotification(int r2) {
            r1 = this;
            r1.removeNotification(r2)
            if (r2 == 0) goto Lc
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = getInstance()
            r0.cancel(r2)
        Lc:
            return
    }

    public void clearNotification() {
            r3 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r0 = r3.notificationItemArray
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r1 = r3.notificationItemArray     // Catch: java.lang.Throwable -> L27
            android.util.SparseArray r1 = r1.clone()     // Catch: java.lang.Throwable -> L27
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r2 = r3.notificationItemArray     // Catch: java.lang.Throwable -> L27
            r2.clear()     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            r0 = 0
        L10:
            int r2 = r1.size()
            if (r0 >= r2) goto L26
            int r2 = r1.keyAt(r0)
            java.lang.Object r2 = r1.get(r2)
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r2 = (com.ss.android.socialbase.downloader.notification.AbsNotificationItem) r2
            r2.cancel()
            int r0 = r0 + 1
            goto L10
        L26:
            return
        L27:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r1
    }

    android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> getAllNotificationItems() {
            r2 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r0 = r2.notificationItemArray
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r1 = r2.notificationItemArray     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public com.ss.android.socialbase.downloader.notification.AbsNotificationItem getNotificationItem(int r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r0 = r2.notificationItemArray
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r1 = r2.notificationItemArray     // Catch: java.lang.Throwable -> L11
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L11
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r3 = (com.ss.android.socialbase.downloader.notification.AbsNotificationItem) r3     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return r3
        L11:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r3
    }

    public void hideNotification(int r2) {
            r1 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            if (r2 != 0) goto Lf
            return
        Lf:
            r1.updateNotificationState(r2)
            r1.cancelCompleteNotification(r2)
            return
    }

    public void notifyByService(int r10, int r11, android.app.Notification r12) {
            r9 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L6a
            if (r10 == 0) goto L6a
            if (r12 != 0) goto Lb
            goto L6a
        Lb:
            r1 = 4
            if (r11 != r1) goto L47
            java.util.Map<java.lang.Integer, java.lang.Long> r1 = r9.PROGRESS_NOTIFY_LAST_TIME_INFO
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, java.lang.Long> r2 = r9.PROGRESS_NOTIFY_LAST_TIME_INFO     // Catch: java.lang.Throwable -> L44
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L44
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L44
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L35
            long r5 = r2.longValue()     // Catch: java.lang.Throwable -> L44
            long r5 = r3 - r5
            long r5 = java.lang.Math.abs(r5)     // Catch: java.lang.Throwable -> L44
            r7 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r2 >= 0) goto L35
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L44
            return
        L35:
            java.util.Map<java.lang.Integer, java.lang.Long> r2 = r9.PROGRESS_NOTIFY_LAST_TIME_INFO     // Catch: java.lang.Throwable -> L44
            java.lang.Integer r5 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L44
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L44
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L44
            goto L47
        L44:
            r10 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L44
            throw r10
        L47:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L66
            java.lang.Class<com.ss.android.socialbase.downloader.notification.DownloadNotificationService> r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationService.class
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "android.ss.intent.action.DOWNLOAD_NOTIFICATION_NOTIFY"
            r1.setAction(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "DOWNLOAD_NOTIFICATION_EXTRA_STATUS"
            r1.putExtra(r2, r11)     // Catch: java.lang.Throwable -> L66
            java.lang.String r11 = "DOWNLOAD_NOTIFICATION_BUNDLE_EXTRA_ID"
            r1.putExtra(r11, r10)     // Catch: java.lang.Throwable -> L66
            java.lang.String r10 = "DOWNLOAD_NOTIFICATION_BUNDLE_EXTRA"
            r1.putExtra(r10, r12)     // Catch: java.lang.Throwable -> L66
            r0.startService(r1)     // Catch: java.lang.Throwable -> L66
            goto L6a
        L66:
            r10 = move-exception
            r10.printStackTrace()
        L6a:
            return
    }

    public com.ss.android.socialbase.downloader.notification.AbsNotificationItem removeNotification(int r5) {
            r4 = this;
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r0 = r4.notificationItemArray
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r1 = r4.notificationItemArray     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L2c
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r1 = (com.ss.android.socialbase.downloader.notification.AbsNotificationItem) r1     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2a
            android.util.SparseArray<com.ss.android.socialbase.downloader.notification.AbsNotificationItem> r2 = r4.notificationItemArray     // Catch: java.lang.Throwable -> L2c
            r2.remove(r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = "removeNotificationId "
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c
            r2.append(r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L2c
            com.ss.android.socialbase.downloader.logger.Logger.d(r5)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return r1
        L2c:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r5
    }

    void updateNotificationState(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r1 = r3.isDownloadOverStatus()
            if (r1 == 0) goto L19
            r1 = 3
            r3.setNotificationVisibility(r1)
            r0.updateDownloadInfo(r3)     // Catch: android.database.sqlite.SQLiteException -> L15
            goto L19
        L15:
            r3 = move-exception
            r3.printStackTrace()
        L19:
            return
    }
}
