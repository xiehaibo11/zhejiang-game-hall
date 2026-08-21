package com.ss.android.downloadlib.q;

import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class ux {

    private static class rg {
        private static ux rg = new ux();
    }

    public static ux rg() {
        return rg.rg;
    }

    private ux() {
    }

    public void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        df(dfVar, 5L);
    }

    public void df(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return;
        }
        df(dfVar, DownloadSetting.obtain(dfVar.qx()).optInt("noti_continue_delay_secs", 5));
    }

    private void df(final com.ss.android.downloadad.api.rg.df dfVar, long j) {
        final int iQx = dfVar.qx();
        if (DownloadSetting.obtain(iQx).optInt("notification_opt_2") != 1) {
            return;
        }
        rg(iQx);
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.q.ux.1
            @Override // java.lang.Runnable
            public void run() {
                DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(iQx);
                JSONObject jSONObject = new JSONObject();
                b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, (Object) 1);
                com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
                if (downloadInfo != null && -2 == downloadInfo.getRealStatus() && !downloadInfo.isPauseReserveOnWifi()) {
                    ux.this.rg(iQx, dfVar, jSONObject);
                } else {
                    b.rg(jSONObject, "error_code", (Object) 1001);
                }
                AdEventHandler.rg().df(EventConstants.Label.NOTIFICATION_TRY_SHOW, jSONObject, dfVar);
            }
        }, j * 1000);
    }

    public void q(com.ss.android.downloadad.api.rg.df dfVar) {
        q(dfVar, 5L);
    }

    public void pt(com.ss.android.downloadad.api.rg.df dfVar) {
        q(dfVar, DownloadSetting.obtain(dfVar.qx()).optInt("noti_install_delay_secs", 5));
    }

    private void q(final com.ss.android.downloadad.api.rg.df dfVar, long j) {
        final int iQx = dfVar.qx();
        if (DownloadSetting.obtain(iQx).optInt("notification_opt_2") != 1) {
            return;
        }
        rg(iQx);
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.q.ux.2
            @Override // java.lang.Runnable
            public void run() {
                DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(iQx);
                JSONObject jSONObject = new JSONObject();
                b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, (Object) 2);
                com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
                if (!b.df(dfVar)) {
                    ux.this.rg(iQx, dfVar, jSONObject);
                } else {
                    b.rg(jSONObject, "error_code", (Object) 1002);
                }
                AdEventHandler.rg().df(EventConstants.Label.NOTIFICATION_TRY_SHOW, jSONObject, dfVar);
            }
        }, j * 1000);
    }

    public void pp(com.ss.android.downloadad.api.rg.df dfVar) {
        rg(dfVar, 5L);
    }

    public void c(com.ss.android.downloadad.api.rg.df dfVar) {
        rg(dfVar, DownloadSetting.obtain(dfVar.qx()).optInt("noti_open_delay_secs", 5));
    }

    public void rg(final com.ss.android.downloadad.api.rg.df dfVar, long j) {
        final int iQx = dfVar.qx();
        if (DownloadSetting.obtain(iQx).optInt("notification_opt_2") != 1) {
            return;
        }
        rg(iQx);
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.q.ux.3
            @Override // java.lang.Runnable
            public void run() {
                DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(iQx);
                JSONObject jSONObject = new JSONObject();
                b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, (Object) 3);
                com.ss.android.downloadlib.utils.pp.q(downloadInfo, jSONObject);
                if (!b.q(dfVar.pp())) {
                    ux.this.rg(iQx, dfVar, jSONObject);
                } else {
                    b.rg(jSONObject, "error_code", (Object) 1003);
                }
                AdEventHandler.rg().df(EventConstants.Label.NOTIFICATION_TRY_SHOW, jSONObject, dfVar);
            }
        }, j * 1000);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rg(int i, com.ss.android.downloadad.api.rg.df dfVar, JSONObject jSONObject) {
        if (!com.ss.android.socialbase.appdownloader.pp.pt.rg()) {
            b.rg(jSONObject, "error_code", (Object) 1004);
            return;
        }
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(i);
        if (downloadInfo == null) {
            b.rg(jSONObject, "error_code", (Object) 1005);
            return;
        }
        if (DownloadNotificationManager.getInstance().getNotificationItem(i) != null) {
            DownloadNotificationManager.getInstance().cancelNotification(i);
        }
        com.ss.android.socialbase.appdownloader.pp.rg rgVar = new com.ss.android.socialbase.appdownloader.pp.rg(bm.getContext(), i, downloadInfo.getTitle(), downloadInfo.getSavePath(), downloadInfo.getName(), downloadInfo.getExtra());
        rgVar.setCurBytes(downloadInfo.getCurBytes());
        rgVar.setTotalBytes(downloadInfo.getTotalBytes());
        rgVar.refreshStatus(downloadInfo.getStatus(), null, false, false);
        DownloadNotificationManager.getInstance().addNotification(rgVar);
        rgVar.updateNotification(null, false);
        AdEventHandler.rg().df(EventConstants.Label.NOTIFICATION_SHOW, jSONObject, dfVar);
    }

    public void rg(int i) {
        DownloadInfo downloadInfo;
        if (com.ss.android.socialbase.appdownloader.pp.q.rg().rg(i) != null || (downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(i)) == null) {
            return;
        }
        com.ss.android.socialbase.appdownloader.pp.q.rg().rg(i, downloadInfo.getIconUrl());
    }
}
