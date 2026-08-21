package com.ss.android.socialbase.downloader.depend;

public abstract class AbsNotificationListener extends com.ss.android.socialbase.downloader.depend.AbsDownloadListener implements com.ss.android.socialbase.downloader.depend.IDownloadExtListener {
    public AbsNotificationListener() {
            r0 = this;
            r0.<init>()
            return
    }

    private void addNotificationItem(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            if (r3 == 0) goto L26
            boolean r0 = r3.canShowNotification()
            if (r0 != 0) goto L9
            goto L26
        L9:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r1 = r3.getId()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r0.getNotificationItem(r1)
            if (r0 != 0) goto L23
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r3 = r2.createNotificationItem()
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r0.addNotification(r3)
            goto L26
        L23:
            r0.updateNotificationItem(r3)
        L26:
            return
    }

    private void updateNotification(int r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5, com.ss.android.socialbase.downloader.exception.BaseException r6, boolean r7) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            boolean r0 = r5.canShowNotification()
            if (r0 == 0) goto L3b
            r0 = 4
            if (r4 != r0) goto Ld
            goto L3b
        Ld:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r1 = r5.getId()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r0.getNotificationItem(r1)
            if (r0 != 0) goto L1f
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r3.createNotificationItem()
        L1f:
            long r1 = r5.getTotalBytes()
            r0.setTotalBytes(r1)
            r1 = -3
            if (r4 != r1) goto L31
            long r1 = r5.getTotalBytes()
            r0.setCurBytes(r1)
            goto L38
        L31:
            long r1 = r5.getCurBytes()
            r0.setCurBytes(r1)
        L38:
            r0.refreshStatus(r4, r6, r7)
        L3b:
            return
    }

    private void updateNotificationProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r6) {
            r5 = this;
            if (r6 == 0) goto L2d
            boolean r0 = r6.canShowNotification()
            if (r0 == 0) goto L2d
            int r0 = r6.getStatus()
            r1 = 4
            if (r0 == r1) goto L10
            goto L2d
        L10:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r1 = r6.getId()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r0.getNotificationItem(r1)
            if (r0 != 0) goto L22
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r5.createNotificationItem()
        L22:
            long r1 = r6.getCurBytes()
            long r3 = r6.getTotalBytes()
            r0.refreshProgress(r1, r3)
        L2d:
            return
    }

    protected abstract com.ss.android.socialbase.downloader.notification.AbsNotificationItem createNotificationItem();

    @Override
    public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.socialbase.downloader.exception.BaseException r4) {
            r2 = this;
            super.onFailed(r3, r4)
            r0 = -1
            r1 = 0
            r2.updateNotification(r0, r3, r4, r1)
            return
    }

    @Override
    public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            super.onPause(r4)
            r0 = -2
            r1 = 0
            r2 = 0
            r3.updateNotification(r0, r4, r1, r2)
            return
    }

    @Override
    public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            super.onPrepare(r3)
            r2.addNotificationItem(r3)
            r0 = 1
            r1 = 0
            r2.updateNotification(r0, r3, r1, r0)
            return
    }

    @Override
    public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            super.onProgress(r1)
            r0.updateNotificationProgress(r1)
            return
    }

    @Override
    public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            super.onStart(r4)
            r0 = 2
            r1 = 0
            r2 = 0
            r3.updateNotification(r0, r4, r1, r2)
            return
    }

    @Override
    public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            super.onSuccessed(r4)
            r0 = -3
            r1 = 0
            r2 = 0
            r3.updateNotification(r0, r4, r1, r2)
            return
    }

    @Override
    public void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            if (r4 == 0) goto L10
            boolean r0 = r4.isAutoInstallWithoutNotification()
            if (r0 == 0) goto L9
            goto L10
        L9:
            r0 = 11
            r1 = 0
            r2 = 1
            r3.updateNotification(r0, r4, r1, r2)
        L10:
            return
    }
}
