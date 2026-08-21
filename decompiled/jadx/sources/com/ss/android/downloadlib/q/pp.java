package com.ss.android.downloadlib.q;

import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.monitor.InnerEventListener;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pp implements InnerEventListener {
    @Override // com.ss.android.socialbase.downloader.monitor.InnerEventListener
    public void onEvent(int i, String str, JSONObject jSONObject) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(i);
        if (downloadInfo == null || (dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo)) == null) {
            return;
        }
        if (MonitorConstants.EventLabel.INSTALL_VIEW_RESULT.equals(str)) {
            jSONObject = b.rg(jSONObject);
            com.ss.android.downloadlib.rg.rg(jSONObject, downloadInfo);
            b.rg(jSONObject, EventConstants.ExtraJson.MODEL_ID, Long.valueOf(dfVarRg.df()));
        }
        AdEventHandler.rg().df(str, jSONObject, dfVarRg);
    }

    @Override // com.ss.android.socialbase.downloader.monitor.InnerEventListener
    public void onUnityEvent(int i, String str, JSONObject jSONObject) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        DownloadInfo downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(i);
        if (downloadInfo == null || (dfVarRg = com.ss.android.downloadlib.addownload.model.c.rg().rg(downloadInfo)) == null) {
            return;
        }
        AdEventHandler.rg().rg(str, jSONObject, dfVarRg);
    }
}
