package com.ss.android.socialbase.downloader.depend;

public interface IDownloadNotificationEventListener {
    java.lang.String getNotifyProcessName();

    boolean interceptAfterNotificationSuccess(boolean r1);

    void onNotificationEvent(int r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2, java.lang.String r3, java.lang.String r4);
}
