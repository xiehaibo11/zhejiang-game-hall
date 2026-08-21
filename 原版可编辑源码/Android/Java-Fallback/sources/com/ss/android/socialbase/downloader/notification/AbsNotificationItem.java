package com.ss.android.socialbase.downloader.notification;

public abstract class AbsNotificationItem {
    private int clickInstallTimes;
    private long curBytes;
    private java.lang.String description;
    private long firstShowTime;
    private int id;
    protected android.app.Notification notification;
    private boolean ongoing;
    private int status;
    private java.lang.String title;
    private long totalBytes;

    public AbsNotificationItem(int r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.status = r0
            r1.id = r2
            r1.title = r3
            return
    }

    public void cancel() {
            r2 = this;
            int r0 = r2.id
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r1 = r2.id
            r0.cancel(r1)
            return
    }

    public int getClickInstallTimes() {
            r1 = this;
            int r0 = r1.clickInstallTimes
            return r0
    }

    public long getCurBytes() {
            r2 = this;
            long r0 = r2.curBytes
            return r0
    }

    public java.lang.String getDescription() {
            r1 = this;
            java.lang.String r0 = r1.description
            return r0
    }

    public long getFirstShowTime() {
            r4 = this;
            long r0 = r4.firstShowTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = java.lang.System.currentTimeMillis()
            r4.firstShowTime = r0
        Le:
            long r0 = r4.firstShowTime
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public android.app.Notification getNotification() {
            r1 = this;
            android.app.Notification r0 = r1.notification
            return r0
    }

    public int getStatus() {
            r1 = this;
            int r0 = r1.status
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public long getTotalBytes() {
            r2 = this;
            long r0 = r2.totalBytes
            return r0
    }

    public boolean isOngoing() {
            r1 = this;
            boolean r0 = r1.ongoing
            return r0
    }

    public void notify(android.app.Notification r4) {
            r3 = this;
            int r0 = r3.id
            if (r0 == 0) goto L12
            if (r4 != 0) goto L7
            goto L12
        L7:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r1 = r3.id
            int r2 = r3.status
            r0.notifyByService(r1, r2, r4)
        L12:
            return
    }

    public synchronized void recordClickInstall() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.clickInstallTimes     // Catch: java.lang.Throwable -> L9
            int r0 = r0 + 1
            r1.clickInstallTimes = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void refreshProgress(long r1, long r3) {
            r0 = this;
            r0.curBytes = r1
            r0.totalBytes = r3
            r1 = 4
            r0.status = r1
            r1 = 0
            r2 = 0
            r0.updateNotification(r1, r2)
            return
    }

    public void refreshStatus(int r2, com.ss.android.socialbase.downloader.exception.BaseException r3, boolean r4) {
            r1 = this;
            r0 = 0
            r1.refreshStatus(r2, r3, r4, r0)
            return
    }

    public void refreshStatus(int r1, com.ss.android.socialbase.downloader.exception.BaseException r2, boolean r3, boolean r4) {
            r0 = this;
            if (r4 != 0) goto L7
            int r4 = r0.status
            if (r4 != r1) goto L7
            return
        L7:
            r0.status = r1
            r0.updateNotification(r2, r3)
            return
    }

    public void setCurBytes(long r1) {
            r0 = this;
            r0.curBytes = r1
            return
    }

    public void setDescription(java.lang.String r1) {
            r0 = this;
            r0.description = r1
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    protected void setOngoing(boolean r1) {
            r0 = this;
            r0.ongoing = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public void setTotalBytes(long r1) {
            r0 = this;
            r0.totalBytes = r1
            return
    }

    public abstract void updateNotification(com.ss.android.socialbase.downloader.exception.BaseException r1, boolean r2);

    public void updateNotificationItem(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = r2.getId()
            r1.id = r0
            java.lang.String r2 = r2.getTitle()
            r1.title = r2
            return
    }
}
