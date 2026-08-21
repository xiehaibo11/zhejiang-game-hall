package com.ss.android.socialbase.appdownloader.c;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.io.File;

public class df {
    public static void rg(DownloadInfo downloadInfo) {
        df(downloadInfo);
    }

    private static void df(final DownloadInfo downloadInfo) {
        final Context appContext = DownloadComponentManager.getAppContext();
        boolean z = true;
        if (((downloadInfo.isAutoResumed() && !downloadInfo.isShowNotificationForNetworkResumed()) || com.ss.android.socialbase.appdownloader.q.df(downloadInfo.getExtra()) || TextUtils.isEmpty(downloadInfo.getMimeType()) || !downloadInfo.getMimeType().equals(AdBaseConstants.MIME_APK)) && DownloadSetting.obtain(downloadInfo.getId()).optInt("auto_install_when_resume", 0) != 1) {
            z = false;
        }
        final int iRg = z ? com.ss.android.socialbase.appdownloader.q.rg(appContext, downloadInfo.getId(), false) : 2;
        DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
            @Override
            public void run() {
                com.ss.android.socialbase.appdownloader.q.pt ptVarDf = com.ss.android.socialbase.appdownloader.pt.bm().df();
                IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(appContext).getDownloadNotificationEventListener(downloadInfo.getId());
                if (ptVarDf == null && downloadNotificationEventListener == null) {
                    return;
                }
                File file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
                if (file.exists()) {
                    try {
                        PackageInfo packageInfoRg = com.ss.android.socialbase.appdownloader.q.rg(downloadInfo, file);
                        if (packageInfoRg != null) {
                            String packageName = (iRg == 1 || TextUtils.isEmpty(downloadInfo.getPackageName())) ? packageInfoRg.packageName : downloadInfo.getPackageName();
                            if (ptVarDf != null) {
                                ptVarDf.rg(downloadInfo.getId(), 1, packageName, -3, downloadInfo.getDownloadTime());
                            }
                            if (downloadNotificationEventListener != null) {
                                downloadNotificationEventListener.onNotificationEvent(1, downloadInfo, packageName, "");
                            }
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }
}
