package com.ss.android.socialbase.downloader.depend;

public interface INotificationClickCallback {
    boolean onClickWhenInstalled(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    boolean onClickWhenSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    boolean onClickWhenUnSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1);
}
