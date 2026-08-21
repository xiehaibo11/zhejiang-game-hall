package com.ss.android.downloadlib.q;

import android.content.Context;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

public class c implements com.ss.android.socialbase.appdownloader.q.pt {
    private Context rg;

    public c(Context context) {
        this.rg = context.getApplicationContext();
    }

    @Override
    public void rg(Context context, String str) {
        com.ss.android.downloadlib.rg.rg().rg(str);
    }

    @Override
    public void rg(int i, int i2, String str, int i3, long j) {
        DownloadInfo downloadInfo;
        com.ss.android.downloadad.api.rg.df dfVarRg;
        Context context = this.rg;
        if (context == null || (downloadInfo = Downloader.getInstance(context).getDownloadInfo(i)) == null || downloadInfo.getStatus() == 0 || (dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo)) == null) {
            return;
        }
        if (i2 == 1) {
            com.ss.android.downloadlib.rg.rg(downloadInfo, dfVarRg);
            if (AdBaseConstants.MIME_APK.equals(downloadInfo.getMimeType())) {
                com.ss.android.downloadlib.addownload.rg.rg().rg(downloadInfo, dfVarRg.df(), dfVarRg.hq(), dfVarRg.pp(), downloadInfo.getTitle(), dfVarRg.pt(), downloadInfo.getTargetFilePath());
                return;
            }
            return;
        }
        if (i2 == 3) {
            AdEventHandler.rg().rg(EventConstants.Tag.NOTIFICATION, EventConstants.Label.NOTIFICATION_INSTALL, com.ss.android.downloadlib.rg.df(new JSONObject(), downloadInfo), dfVarRg);
            return;
        }
        if (i2 == 5) {
            AdEventHandler.rg().rg(EventConstants.Tag.NOTIFICATION, EventConstants.Label.NOTIFICATION_PAUSE, dfVarRg);
        } else if (i2 == 6) {
            AdEventHandler.rg().rg(EventConstants.Tag.NOTIFICATION, EventConstants.Label.NOTIFICATION_CONTINUE, dfVarRg);
        } else {
            if (i2 != 7) {
                return;
            }
            AdEventHandler.rg().rg(EventConstants.Tag.NOTIFICATION, EventConstants.Label.NOTIFICATION_CLICK, dfVarRg);
        }
    }

    @Override
    public boolean rg(int i, boolean z) {
        if (bm.f() != null) {
            return bm.f().rg(z);
        }
        return false;
    }

    @Override
    public void rg(DownloadInfo downloadInfo) {
        if (downloadInfo == null) {
            return;
        }
        com.ss.android.downloadlib.fw.rg().rg(downloadInfo);
        if (DownloadSetting.obtain(downloadInfo.getId()).optInt("report_download_cancel", 1) == 1) {
            AdEventHandler.rg().rg(downloadInfo, new BaseException(1012, ""));
        } else {
            AdEventHandler.rg().df(downloadInfo, new BaseException(1012, ""));
        }
    }

    @Override
    public void rg(int i, int i2, String str, String str2, String str3) {
        DownloadInfo downloadInfo;
        Context context = this.rg;
        if (context == null || (downloadInfo = Downloader.getInstance(context).getDownloadInfo(i)) == null || downloadInfo.getStatus() != -3) {
            return;
        }
        downloadInfo.setPackageName(str2);
        com.ss.android.downloadlib.addownload.df.rg().rg(this.rg, downloadInfo);
    }

    @Override
    public boolean rg() {
        return com.ss.android.downloadlib.addownload.df.rg().df();
    }
}
