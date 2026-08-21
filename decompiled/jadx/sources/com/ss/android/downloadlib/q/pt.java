package com.ss.android.downloadlib.q;

import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.constants.SpJsonConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pt implements com.ss.android.socialbase.appdownloader.q.fw, IDownloadCacheSyncStatusListener {
    @Override // com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener
    public void onStart() {
    }

    @Override // com.ss.android.socialbase.appdownloader.q.fw
    public void rg(List<DownloadInfo> list) {
    }

    @Override // com.ss.android.socialbase.appdownloader.q.fw
    public void rg(DownloadInfo downloadInfo, boolean z) {
        if (downloadInfo == null) {
            return;
        }
        rg(downloadInfo, downloadInfo.getRealStatus(), z);
    }

    public void rg(DownloadInfo downloadInfo, int i, boolean z) {
        com.ss.android.downloadlib.addownload.model.c.rg().df();
        com.ss.android.downloadad.api.rg.df dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo);
        if (dfVarRg == null) {
            return;
        }
        try {
            if (z) {
                dfVarRg.q(downloadInfo.getFailedResumeCount());
            } else if (dfVarRg.dj() == -1) {
                return;
            } else {
                dfVarRg.q(-1);
            }
            com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVarRg);
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("download_id", downloadInfo.getId());
            jSONObject.put("name", downloadInfo.getName());
            jSONObject.put("url", downloadInfo.getUrl());
            jSONObject.put("download_time", downloadInfo.getDownloadTime());
            jSONObject.put("download_status", i);
            jSONObject.put("cur_bytes", downloadInfo.getCurBytes());
            jSONObject.put("total_bytes", downloadInfo.getTotalBytes());
            int i2 = 1;
            jSONObject.put(MonitorConstants.EXTRA_DOWNLOAD_ONLY_WIFI, downloadInfo.isOnlyWifi() ? 1 : 0);
            jSONObject.put("chunk_count", downloadInfo.getChunkCount());
            if (!z) {
                i2 = 2;
            }
            jSONObject.put(EventConstants.ExtraJson.KEY_LAUNCH_RESUMED, i2);
            jSONObject.put("failed_resume_count", downloadInfo.getFailedResumeCount());
            AdEventHandler.rg().rg(EventConstants.Tag.EMBEDED_AD, EventConstants.Label.DOWNLOAD_UNCOMPLETED, jSONObject, dfVarRg);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener
    public void onSuccess() {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.q.pt.1
            @Override // java.lang.Runnable
            public void run() {
                DownloadInfo downloadInfo;
                int spIntVal;
                com.ss.android.downloadlib.addownload.model.c.rg().df();
                for (com.ss.android.downloadad.api.rg.df dfVar : com.ss.android.downloadlib.addownload.model.c.rg().q().values()) {
                    int iQx = dfVar.qx();
                    if (iQx != 0) {
                        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(iQx);
                        if (downloadSettingObtain.optInt("notification_opt_2") == 1 && (downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(iQx)) != null) {
                            if (b.df(dfVar) && !b.q(dfVar.pp())) {
                                int spIntVal2 = downloadInfo.getSpIntVal(SpJsonConstants.RESTART_NOTIFY_OPEN_APP_COUNT);
                                if (spIntVal2 < downloadSettingObtain.optInt("noti_open_restart_times", 1)) {
                                    ux.rg().pp(dfVar);
                                    downloadInfo.setSpValue(SpJsonConstants.RESTART_NOTIFY_OPEN_APP_COUNT, String.valueOf(spIntVal2 + 1));
                                }
                            } else if (downloadInfo.getRealStatus() == -2) {
                                int spIntVal3 = downloadInfo.getSpIntVal(SpJsonConstants.RESTART_NOTIFY_CONTINUE_COUNT);
                                if (spIntVal3 < downloadSettingObtain.optInt("noti_continue_restart_times", 1)) {
                                    ux.rg().rg(dfVar);
                                    downloadInfo.setSpValue(SpJsonConstants.RESTART_NOTIFY_CONTINUE_COUNT, String.valueOf(spIntVal3 + 1));
                                }
                            } else if (downloadInfo.getRealStatus() == -3 && DownloadUtils.isFileDownloaded(downloadInfo) && !b.df(dfVar) && (spIntVal = downloadInfo.getSpIntVal(SpJsonConstants.RESTART_NOTIFY_INSTALL_COUNT)) < downloadSettingObtain.optInt("noti_install_restart_times", 1)) {
                                ux.rg().q(dfVar);
                                downloadInfo.setSpValue(SpJsonConstants.RESTART_NOTIFY_INSTALL_COUNT, String.valueOf(spIntVal + 1));
                            }
                        }
                    }
                }
            }
        }, 5000L);
    }
}
