package com.ss.android.download.api.download.rg;

import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface rg {
    void df(DownloadInfo downloadInfo, String str);

    void rg(DownloadModel downloadModel, DownloadController downloadController, DownloadEventConfig downloadEventConfig);

    void rg(DownloadInfo downloadInfo);

    void rg(DownloadInfo downloadInfo, BaseException baseException, String str);

    void rg(DownloadInfo downloadInfo, String str);
}
