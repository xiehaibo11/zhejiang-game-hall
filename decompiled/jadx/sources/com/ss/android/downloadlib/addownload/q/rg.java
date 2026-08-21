package com.ss.android.downloadlib.addownload.q;

import android.content.Context;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.rz;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.expressad.d.a.b;
import java.text.DecimalFormat;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class rg implements pt {
    private static com.ss.android.downloadlib.addownload.rg.q rg;

    public static com.ss.android.downloadlib.addownload.rg.q rg() {
        return rg;
    }

    @Override // com.ss.android.downloadlib.addownload.q.pt
    public boolean rg(final com.ss.android.downloadad.api.rg.df dfVar, int i, final q qVar) {
        DownloadInfo downloadInfoDf;
        if (dfVar == null || dfVar.t() || !rg(dfVar) || (downloadInfoDf = ux.rg((Context) null).df(dfVar.rg())) == null) {
            return false;
        }
        long jRg = rz.rg(downloadInfoDf.getId(), downloadInfoDf.getCurBytes(), downloadInfoDf.getTotalBytes());
        long totalBytes = downloadInfoDf.getTotalBytes();
        if (jRg <= 0 || totalBytes <= 0 || totalBytes > rg(dfVar.qx())) {
            return false;
        }
        rg = new com.ss.android.downloadlib.addownload.rg.q() { // from class: com.ss.android.downloadlib.addownload.q.rg.1
            @Override // com.ss.android.downloadlib.addownload.rg.q
            public void rg() {
                com.ss.android.downloadlib.addownload.rg.q unused = rg.rg = null;
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, EventConstants.ExtraJson.APK_SIZE);
                    jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_ACTION, "confirm");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVar);
            }

            @Override // com.ss.android.downloadlib.addownload.rg.q
            public void df() {
                com.ss.android.downloadlib.addownload.rg.q unused = rg.rg = null;
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, EventConstants.ExtraJson.APK_SIZE);
                    jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_ACTION, b.dO);
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVar);
                qVar.rg(dfVar);
            }
        };
        TTDelegateActivity.rg(dfVar, String.format("该下载任务仅需%s，即将下载完成，是否继续下载？", rg(totalBytes - jRg)), "继续", "暂停");
        dfVar.f(true);
        return true;
    }

    private int rg(int i) {
        return DownloadSetting.obtain(i).optInt("pause_optimise_apk_size", 100) * 1024 * 1024;
    }

    private boolean rg(com.ss.android.downloadad.api.rg.rg rgVar) {
        return com.ss.android.downloadlib.utils.pt.rg(rgVar).optInt("pause_optimise_apk_size_switch", 0) == 1 && rgVar.z();
    }

    private static String rg(long j) {
        DecimalFormat decimalFormat = new DecimalFormat("0.00");
        if (j >= DownloadConstants.GB) {
            return (j / DownloadConstants.GB) + "G";
        }
        if (j >= 1048576) {
            return (j / 1048576) + "M";
        }
        return decimalFormat.format(j / 1048576.0f) + "M";
    }
}
