package com.ss.android.downloadlib.addownload;

import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.impls.RetryScheduler;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class hq {
    private static com.ss.android.downloadlib.addownload.rg.q rg;

    public static boolean rg(int i) {
        return i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 7 || i == 8;
    }

    public static com.ss.android.downloadlib.addownload.rg.q rg() {
        return rg;
    }

    public static void rg(com.ss.android.downloadlib.addownload.rg.q qVar) {
        rg = qVar;
    }

    public static boolean rg(final com.ss.android.downloadad.api.rg.df dfVar, DownloadInfo downloadInfo, int i, final com.ss.android.downloadlib.addownload.q.q qVar) {
        if (dfVar == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("tryReverseWifi nativeModel null");
            return false;
        }
        if (downloadInfo == null) {
            com.ss.android.downloadlib.exception.q.rg().rg("tryReverseWifi info null");
            return false;
        }
        final int id = downloadInfo.getId();
        boolean zDf = com.ss.android.downloadlib.utils.pt.df(dfVar);
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.SWITCH_STATUS, Integer.valueOf(zDf ? 1 : 0));
        } catch (Exception e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_RESERVE_WIFI_SWITCH_STATUS, jSONObject, dfVar);
        if (!zDf || !rg(i) || DownloadUtils.isWifi(bm.getContext()) || downloadInfo.hasPauseReservedOnWifi()) {
            return false;
        }
        rg(new com.ss.android.downloadlib.addownload.rg.q() { // from class: com.ss.android.downloadlib.addownload.hq.1
            @Override // com.ss.android.downloadlib.addownload.rg.q
            public void rg() {
                hq.rg((com.ss.android.downloadlib.addownload.rg.q) null);
                DownloadInfo downloadInfo2 = Downloader.getInstance(bm.getContext()).getDownloadInfo(id);
                if (downloadInfo2 != null) {
                    downloadInfo2.startPauseReserveOnWifi();
                    RetryScheduler.getInstance().tryStartScheduleRetry(downloadInfo2);
                    AdEventHandler.rg().df(EventConstants.Label.PAUSE_RESERVE_WIFI_CONFIRM, dfVar);
                }
                qVar.rg(dfVar);
            }

            @Override // com.ss.android.downloadlib.addownload.rg.q
            public void df() {
                hq.rg((com.ss.android.downloadlib.addownload.rg.q) null);
                DownloadInfo downloadInfo2 = Downloader.getInstance(bm.getContext()).getDownloadInfo(id);
                if (downloadInfo2 != null) {
                    downloadInfo2.stopPauseReserveOnWifi();
                }
                AdEventHandler.rg().df(EventConstants.Label.PAUSE_RESERVE_WIFI_CANCEL, dfVar);
                qVar.rg(dfVar);
            }
        });
        TTDelegateActivity.df(dfVar);
        return true;
    }
}
