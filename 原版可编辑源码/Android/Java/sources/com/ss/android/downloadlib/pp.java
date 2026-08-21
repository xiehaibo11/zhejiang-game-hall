package com.ss.android.downloadlib;

import android.text.TextUtils;
import com.ss.android.download.api.config.hq;
import com.ss.android.download.api.config.ou;
import com.ss.android.download.api.config.rz;
import com.ss.android.download.api.config.z;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.appdownloader.DownloadHandlerService;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.depend.INotificationClickCallback;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.downloader.DownloaderBuilder;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;

class pp implements com.ss.android.download.api.rg {
    pp() {
    }

    @Override
    public com.ss.android.download.api.rg rg(rz rzVar) {
        bm.rg(rzVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.fw fwVar) {
        bm.rg(fwVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(hq hqVar) {
        bm.rg(hqVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.ux uxVar) {
        bm.rg(uxVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.bm bmVar) {
        bm.rg(bmVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.model.rg rgVar) {
        bm.rg(rgVar);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(String str) {
        bm.rg(str);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(final com.ss.android.download.api.config.df dfVar) {
        bm.rg(dfVar);
        AppStatusManager.getInstance().setInnerAppStatusChangeCaller(new AppStatusManager.InnerAppStatusChangeCaller() {
            @Override
            public boolean isAppInBackground() {
                return dfVar.rg();
            }
        });
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(DownloaderBuilder downloaderBuilder) {
        if (downloaderBuilder.getNotificationClickCallback() == null) {
            downloaderBuilder.notificationClickCallback(new INotificationClickCallback() {
                @Override
                public boolean onClickWhenSuccess(DownloadInfo downloadInfo) {
                    return false;
                }

                @Override
                public boolean onClickWhenUnSuccess(DownloadInfo downloadInfo) {
                    DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
                    if (downloadSettingObtain.optInt("notification_opt_2") == 1) {
                        if (downloadInfo.getStatus() == -2) {
                            DownloadHandlerService.rg(bm.getContext(), downloadInfo, com.ss.android.socialbase.appdownloader.pt.bm().df(), Downloader.getInstance(bm.getContext()).getDownloadNotificationEventListener(downloadInfo.getId()));
                        }
                        return true;
                    }
                    boolean zRg = rg(downloadInfo);
                    if (downloadSettingObtain.optInt("disable_delete_dialog", 0) == 1) {
                        return true;
                    }
                    return zRg;
                }

                private boolean rg(DownloadInfo downloadInfo) {
                    String strRg;
                    ou ouVarR = bm.r();
                    if (ouVarR == null) {
                        return false;
                    }
                    com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
                    if (dfVarRg != null && dfVarRg.q()) {
                        strRg = DownloadSetting.obtain(downloadInfo.getId()).optString("ad_notification_jump_url", null);
                    } else {
                        strRg = com.ss.android.downloadlib.addownload.ux.rg(downloadInfo);
                    }
                    if (TextUtils.isEmpty(strRg)) {
                        return false;
                    }
                    return ouVarR.rg(bm.getContext(), strRg);
                }

                @Override
                public boolean onClickWhenInstalled(DownloadInfo downloadInfo) {
                    if (downloadInfo == null) {
                        return false;
                    }
                    com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
                    if (dfVarRg != null) {
                        com.ss.android.downloadlib.df.rg.rg(dfVarRg);
                    } else {
                        com.ss.android.downloadlib.utils.ux.df(bm.getContext(), downloadInfo.getPackageName());
                    }
                    DownloadNotificationManager.getInstance().cancelNotification(downloadInfo.getId());
                    return true;
                }
            });
        }
        downloaderBuilder.addDownloadCompleteHandler(new com.ss.android.downloadlib.q.q());
        Downloader.initOrCover(downloaderBuilder, true);
        return this;
    }

    @Override
    public com.ss.android.download.api.rg rg(z zVar) {
        bm.rg(zVar);
        return this;
    }

    @Override
    public void rg() {
        if (!bm.y()) {
            com.ss.android.downloadlib.exception.q.rg().rg("ttdownloader init error");
        }
        bm.rg(com.ss.android.downloadlib.exception.q.rg());
        try {
            com.ss.android.socialbase.appdownloader.pt.bm().df(bm.ou());
        } catch (Exception e) {
            e.printStackTrace();
        }
        com.ss.android.socialbase.appdownloader.pt.bm().rg(rg.rg());
        pt.rg().df(new Runnable() {
            @Override
            public void run() {
                com.ss.android.socialbase.appdownloader.c.pt.rg("");
                if (com.ss.android.socialbase.appdownloader.c.pt.f()) {
                    DownloadComponentManager.setNotAutoRebootService(true);
                }
                if (DownloadSetting.obtainGlobal().optInt("disable_security_init", 1) == 1) {
                    com.ss.android.socialbase.appdownloader.c.pp.rg(bm.getContext());
                }
            }
        });
    }
}
