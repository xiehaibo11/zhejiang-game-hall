package com.ss.android.downloadlib.addownload.q;

import android.content.Context;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.rz;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.expressad.d.a.b;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class df implements pt {
    private static com.ss.android.downloadlib.addownload.rg.q rg;

    public static com.ss.android.downloadlib.addownload.rg.q rg() {
        return rg;
    }

    @Override // com.ss.android.downloadlib.addownload.q.pt
    public boolean rg(final com.ss.android.downloadad.api.rg.df dfVar, int i, final q qVar) {
        DownloadInfo downloadInfoDf;
        if (dfVar == null || dfVar.vd() || !rg(dfVar) || (downloadInfoDf = ux.rg((Context) null).df(dfVar.rg())) == null) {
            return false;
        }
        long curBytes = downloadInfoDf.getCurBytes();
        long totalBytes = downloadInfoDf.getTotalBytes();
        if (curBytes > 0 && totalBytes > 0) {
            int iRg = rz.rg(downloadInfoDf.getId(), (int) ((curBytes * 100) / totalBytes));
            if (iRg > rg(dfVar.qx())) {
                rg = new com.ss.android.downloadlib.addownload.rg.q() { // from class: com.ss.android.downloadlib.addownload.q.df.1
                    @Override // com.ss.android.downloadlib.addownload.rg.q
                    public void rg() {
                        com.ss.android.downloadlib.addownload.rg.q unused = df.rg = null;
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, "download_percent");
                            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_ACTION, "confirm");
                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                        AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVar);
                    }

                    @Override // com.ss.android.downloadlib.addownload.rg.q
                    public void df() {
                        com.ss.android.downloadlib.addownload.rg.q unused = df.rg = null;
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_TYPE, "download_percent");
                            jSONObject.putOpt(EventConstants.ExtraJson.PAUSE_OPTIMISE_ACTION, b.dO);
                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                        AdEventHandler.rg().rg(EventConstants.UnityLabel.PAUSE_OPTIMISE, jSONObject, dfVar);
                        qVar.rg(dfVar);
                    }
                };
                TTDelegateActivity.df(dfVar, String.format("已下载%s%%，即将下载完成，是否继续下载？", Integer.valueOf(iRg)), "继续", "暂停");
                dfVar.v(true);
                return true;
            }
        }
        return false;
    }

    private int rg(int i) {
        return DownloadSetting.obtain(i).optInt("pause_optimise_download_percent", 50);
    }

    private boolean rg(com.ss.android.downloadad.api.rg.rg rgVar) {
        return com.ss.android.downloadlib.utils.pt.rg(rgVar).optInt("pause_optimise_download_percent_switch", 0) == 1 && rgVar.z();
    }
}
