package com.ss.android.socialbase.downloader.depend;

import com.ss.android.socialbase.downloader.model.DownloadInfo;

public interface IOpenInstallerListener {
    void onOpenInstaller(DownloadInfo downloadInfo, String str);
}
