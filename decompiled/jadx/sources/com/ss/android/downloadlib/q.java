package com.ss.android.downloadlib;

import android.os.Environment;
import android.os.Handler;
import android.os.Looper;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.downloadlib.utils.bm;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class q implements com.ss.android.socialbase.appdownloader.q.ux {
    private static String rg = q.class.getSimpleName();
    private Handler df = new Handler(Looper.getMainLooper());

    @Override // com.ss.android.socialbase.appdownloader.q.ux
    public void rg(DownloadInfo downloadInfo, BaseException baseException, int i) {
        final DownloadModel downloadModelRg;
        if (downloadInfo == null) {
            return;
        }
        if (i == -1 && baseException != null) {
            JSONObject jSONObject = new JSONObject();
            com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
            rg.rg(jSONObject, downloadInfo);
            bm.rg("download_failed", jSONObject.toString());
        }
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            return;
        }
        try {
            if (i != -1) {
                if (i == -3) {
                    rg.rg(downloadInfo, dfVarRg);
                    return;
                }
                if (i == 2001) {
                    rg.rg().rg(downloadInfo, dfVarRg, 2001);
                    return;
                } else {
                    if (i == 11) {
                        rg.rg().rg(downloadInfo, dfVarRg, 2000);
                        if (dfVarRg.gk()) {
                            return;
                        }
                        rg(downloadInfo, dfVarRg);
                        return;
                    }
                    return;
                }
            }
            BaseException baseException2 = null;
            if (baseException != null) {
                if (DownloadSetting.obtain(downloadInfo.getId()).optInt("toast_without_network", 0) == 1 && baseException.getErrorCode() == 1049) {
                    this.df.post(new Runnable() { // from class: com.ss.android.downloadlib.q.1
                        @Override // java.lang.Runnable
                        public void run() {
                            com.ss.android.downloadlib.addownload.bm.q().rg(5, com.ss.android.downloadlib.addownload.bm.getContext(), null, "无网络，请检查网络设置", null, 0);
                        }
                    });
                }
                if (DownloadUtils.isInsufficientSpaceError(baseException)) {
                    if (com.ss.android.downloadlib.addownload.bm.hq() != null) {
                        com.ss.android.downloadlib.addownload.bm.hq().rg(dfVarRg.df());
                    }
                    AdEventHandler.rg().rg(EventConstants.UnityLabel.DOWNLOAD_FAILED_FOR_SPACE, dfVarRg);
                    if (!dfVarRg.mc()) {
                        AdEventHandler.rg().rg(EventConstants.UnityLabel.DOWNLOAD_CAN_RESTART, dfVarRg);
                        rg(downloadInfo);
                    }
                    if ((com.ss.android.downloadlib.addownload.bm.hq() == null || !com.ss.android.downloadlib.addownload.bm.hq().pt()) && (downloadModelRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(dfVarRg.df())) != null && downloadModelRg.isShowToast()) {
                        final DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
                        if (downloadSettingObtain.optInt("show_no_enough_space_toast", 0) == 1) {
                            this.df.post(new Runnable() { // from class: com.ss.android.downloadlib.q.2
                                @Override // java.lang.Runnable
                                public void run() {
                                    com.ss.android.downloadlib.addownload.bm.q().rg(2, com.ss.android.downloadlib.addownload.bm.getContext(), downloadModelRg, downloadSettingObtain.optString("no_enough_space_toast_text", "您的存储空间不足，请清理后再试"), null, 0);
                                }
                            });
                        }
                    }
                }
                baseException2 = new BaseException(baseException.getErrorCode(), b.rg(baseException.getMessage(), com.ss.android.downloadlib.addownload.bm.rz().optInt(DownloadSettingKeys.KEY_EXCEPTION_MSG_LENGTH, 500)));
            }
            AdEventHandler.rg().df(downloadInfo, baseException2);
            fw.rg().rg(downloadInfo, baseException, "");
        } catch (Exception e) {
            com.ss.android.downloadlib.addownload.bm.qx().rg(e, "onAppDownloadMonitorSend");
        }
    }

    private void rg(final DownloadInfo downloadInfo, final com.ss.android.downloadad.api.rg.df dfVar) {
        final long jRg = b.rg(Environment.getDataDirectory(), -1L);
        long jMin = Math.min(524288000L, b.rg(Environment.getDataDirectory()) / 10);
        final long totalBytes = downloadInfo.getTotalBytes();
        final double d = (totalBytes * 2.5d) + jMin;
        if (jRg > -1 && totalBytes > -1) {
            double d2 = jRg;
            if (d2 < d && d - d2 > com.ss.android.downloadlib.addownload.pt.df()) {
                com.ss.android.downloadlib.addownload.pt.rg(downloadInfo.getId());
            }
        }
        AppStatusManager.getInstance().registerAppSwitchListener(new AppStatusManager.AppStatusChangeListener() { // from class: com.ss.android.downloadlib.q.3
            @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
            public void onAppBackground() {
            }

            @Override // com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener
            public void onAppForeground() {
                if (!b.df(dfVar)) {
                    long j = jRg;
                    if (j <= -1 || totalBytes <= -1 || j >= d) {
                        return;
                    }
                    AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_SPACE_INSTALL, com.ss.android.downloadlib.addownload.pt.rg("install_no_enough_space"), dfVar);
                    if (com.ss.android.downloadlib.addownload.pt.rg(downloadInfo, ((long) d) - jRg)) {
                        AppStatusManager.getInstance().unregisterAppSwitchListener(this);
                        dfVar.fw(true);
                        return;
                    }
                    return;
                }
                AppStatusManager.getInstance().unregisterAppSwitchListener(this);
            }
        });
    }

    private void rg(DownloadInfo downloadInfo) {
        if (com.ss.android.downloadlib.utils.pt.c(downloadInfo.getId())) {
            pt.rg().df(new com.ss.android.downloadlib.addownload.df.df(downloadInfo));
        }
    }
}
