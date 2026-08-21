package com.ss.android.socialbase.appdownloader.pp;

import android.content.Context;
import com.ss.android.socialbase.downloader.depend.AbsNotificationListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;

public class df extends AbsNotificationListener {
    private String c;
    private int df;
    private AbsNotificationItem fw;
    private String pp;
    private String pt;
    private String q;
    private Context rg;

    public df(Context context, int i, String str, String str2, String str3, String str4) {
        if (context != null) {
            this.rg = context.getApplicationContext();
        } else {
            this.rg = DownloadComponentManager.getAppContext();
        }
        this.df = i;
        this.q = str;
        this.pt = str2;
        this.pp = str3;
        this.c = str4;
    }

    public df(AbsNotificationItem absNotificationItem) {
        this.rg = DownloadComponentManager.getAppContext();
        this.fw = absNotificationItem;
    }

    @Override
    public AbsNotificationItem createNotificationItem() {
        Context context;
        if (this.fw == null && (context = this.rg) != null) {
            return new rg(context, this.df, this.q, this.pt, this.pp, this.c);
        }
        return this.fw;
    }

    @Override
    public void onPrepare(DownloadInfo downloadInfo) {
        if (downloadInfo == null || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        super.onPrepare(downloadInfo);
    }

    @Override
    public void onStart(DownloadInfo downloadInfo) {
        if (downloadInfo == null || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        super.onStart(downloadInfo);
    }

    @Override
    public void onPause(DownloadInfo downloadInfo) {
        if (downloadInfo == null || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        super.onPause(downloadInfo);
    }

    @Override
    public void onProgress(DownloadInfo downloadInfo) {
        if (downloadInfo == null || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        super.onProgress(downloadInfo);
    }

    @Override
    public void onSuccessed(DownloadInfo downloadInfo) {
        if (downloadInfo == null || this.rg == null) {
            return;
        }
        if (downloadInfo.canShowNotification() && (!downloadInfo.isAutoInstallWithoutNotification() || !downloadInfo.isAutoInstall())) {
            super.onSuccessed(downloadInfo);
        }
        if (downloadInfo.isAutoInstall()) {
            com.ss.android.socialbase.appdownloader.c.df.rg(downloadInfo);
        }
    }

    @Override
    public void onFailed(DownloadInfo downloadInfo, BaseException baseException) {
        if (downloadInfo == null || this.rg == null || !downloadInfo.canShowNotification() || downloadInfo.isAutoInstallWithoutNotification()) {
            return;
        }
        super.onFailed(downloadInfo, baseException);
    }
}
