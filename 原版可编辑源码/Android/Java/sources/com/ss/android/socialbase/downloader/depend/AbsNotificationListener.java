package com.ss.android.socialbase.downloader.depend;

import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;

public abstract class AbsNotificationListener extends AbsDownloadListener implements IDownloadExtListener {
    protected abstract AbsNotificationItem createNotificationItem();

    @Override
    public void onPrepare(DownloadInfo downloadInfo) {
        super.onPrepare(downloadInfo);
        addNotificationItem(downloadInfo);
        updateNotification(1, downloadInfo, null, true);
    }

    @Override
    public void onStart(DownloadInfo downloadInfo) {
        super.onStart(downloadInfo);
        updateNotification(2, downloadInfo, null, false);
    }

    @Override
    public void onProgress(DownloadInfo downloadInfo) {
        super.onProgress(downloadInfo);
        updateNotificationProgress(downloadInfo);
    }

    @Override
    public void onPause(DownloadInfo downloadInfo) {
        super.onPause(downloadInfo);
        updateNotification(-2, downloadInfo, null, false);
    }

    @Override
    public void onSuccessed(DownloadInfo downloadInfo) {
        super.onSuccessed(downloadInfo);
        updateNotification(-3, downloadInfo, null, false);
    }

    @Override
    public void onFailed(DownloadInfo downloadInfo, BaseException baseException) {
        super.onFailed(downloadInfo, baseException);
        updateNotification(-1, downloadInfo, baseException, false);
    }

    private void addNotificationItem(DownloadInfo downloadInfo) {
        if (downloadInfo == null || !downloadInfo.canShowNotification()) {
            return;
        }
        AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
        if (notificationItem == null) {
            DownloadNotificationManager.getInstance().addNotification(createNotificationItem());
        } else {
            notificationItem.updateNotificationItem(downloadInfo);
        }
    }

    private void updateNotification(int i, DownloadInfo downloadInfo, BaseException baseException, boolean z) {
        if (downloadInfo == null || !downloadInfo.canShowNotification() || i == 4) {
            return;
        }
        AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
        if (notificationItem == null) {
            notificationItem = createNotificationItem();
        }
        notificationItem.setTotalBytes(downloadInfo.getTotalBytes());
        if (i == -3) {
            notificationItem.setCurBytes(downloadInfo.getTotalBytes());
        } else {
            notificationItem.setCurBytes(downloadInfo.getCurBytes());
        }
        notificationItem.refreshStatus(i, baseException, z);
    }

    private void updateNotificationProgress(DownloadInfo downloadInfo) {
        if (downloadInfo != null && downloadInfo.canShowNotification() && downloadInfo.getStatus() == 4) {
            AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
            if (notificationItem == null) {
                notificationItem = createNotificationItem();
            }
            notificationItem.refreshProgress(downloadInfo.getCurBytes(), downloadInfo.getTotalBytes());
        }
    }

    @Override
    public void onWaitingDownloadCompleteHandler(DownloadInfo downloadInfo) {
        if (downloadInfo == null || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        updateNotification(11, downloadInfo, null, true);
    }
}
