package com.ss.android.socialbase.downloader.downloader;

import com.ss.android.socialbase.downloader.model.DownloadInfo;

public interface IReserveWifiStatusListener {
    void onStatusChanged(DownloadInfo downloadInfo, int i, int i2);
}
