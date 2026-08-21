package com.ss.android.downloadlib.q;

import android.content.pm.PackageInfo;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

public class df implements IDownloadCompleteHandler {
    @Override
    public void handle(DownloadInfo downloadInfo) throws BaseException {
        PackageInfo packageInfoRg = com.ss.android.socialbase.appdownloader.q.rg(bm.getContext(), downloadInfo, downloadInfo.getSavePath(), downloadInfo.getName());
        if (packageInfoRg != null) {
            downloadInfo.setAppVersionCode(packageInfoRg.versionCode);
        }
    }

    @Override
    public boolean needHandle(DownloadInfo downloadInfo) {
        return downloadInfo != null && com.ss.android.downloadlib.utils.pt.df() && downloadInfo.getPackageInfo() == null;
    }
}
