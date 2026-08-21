package com.ss.android.downloadlib.addownload.df;

import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.downloadlib.addownload.model.ux;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class df implements Runnable {
    private DownloadInfo rg;

    public df(DownloadInfo downloadInfo) {
        this.rg = downloadInfo;
    }

    @Override // java.lang.Runnable
    public void run() throws Throwable {
        final com.ss.android.downloadad.api.rg.df dfVarRg;
        if (this.rg == null || (dfVarRg = c.rg().rg(this.rg)) == null) {
            return;
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_SPACE_TASK, dfVarRg);
        long jLongValue = Double.valueOf((com.ss.android.downloadlib.utils.pt.rg(this.rg.getId()) + 1.0d) * this.rg.getTotalBytes()).longValue() - this.rg.getCurBytes();
        long jRg = b.rg(0L);
        if (bm.hq() != null) {
            bm.hq().pp();
        }
        q.rg();
        q.df();
        if (com.ss.android.downloadlib.utils.pt.fw(dfVarRg.qx())) {
            q.rg(bm.getContext());
        }
        long jRg2 = b.rg(0L);
        if (jRg2 >= jLongValue) {
            dfVarRg.hq("1");
            ux.rg().rg(dfVarRg);
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.putOpt(EventConstants.ExtraJson.QUITE_CLEAN_SIZE, Long.valueOf(jRg2 - jRg));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            AdEventHandler.rg().rg(EventConstants.UnityLabel.DOWNLOAD_AFTER_QUITE_CLEAN, jSONObject, dfVarRg);
            Downloader.getInstance(bm.getContext()).restart(this.rg.getId());
            return;
        }
        if (bm.hq() != null) {
            dfVarRg.pt(false);
            pt.rg().rg(dfVarRg.rg(), new pp() { // from class: com.ss.android.downloadlib.addownload.df.df.1
            });
            if (bm.hq().rg(this.rg.getId(), this.rg.getUrl(), true, jLongValue)) {
                dfVarRg.pp(true);
                return;
            }
            return;
        }
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.putOpt(EventConstants.ExtraJson.CLEAN_SHOW_DIALOG_RESULT, 3);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_SHOW_DIALOG, jSONObject2, dfVarRg);
    }
}
