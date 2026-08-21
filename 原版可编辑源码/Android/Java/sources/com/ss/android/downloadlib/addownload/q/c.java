package com.ss.android.downloadlib.addownload.q;

import android.content.Context;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.ux;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.util.ArrayList;
import java.util.List;

public class c {
    private static c rg;
    private List<pt> df;

    public static c rg() {
        if (rg == null) {
            synchronized (c.class) {
                if (rg == null) {
                    rg = new c();
                }
            }
        }
        return rg;
    }

    private c() {
        ArrayList arrayList = new ArrayList();
        this.df = arrayList;
        arrayList.add(new pp());
        this.df.add(new fw());
        this.df.add(new df());
        this.df.add(new rg());
    }

    public void rg(com.ss.android.downloadad.api.rg.df dfVar, int i, q qVar) {
        List<pt> list = this.df;
        if (list == null || list.size() == 0 || dfVar == null) {
            qVar.rg(dfVar);
            return;
        }
        DownloadInfo downloadInfoDf = ux.rg((Context) null).df(dfVar.rg());
        if (downloadInfoDf == null || !AdBaseConstants.MIME_APK.equals(downloadInfoDf.getMimeType())) {
            qVar.rg(dfVar);
            return;
        }
        boolean z = DownloadSetting.obtain(dfVar.qx()).optInt("pause_optimise_switch", 0) == 1;
        for (pt ptVar : this.df) {
            if (z || (ptVar instanceof fw)) {
                if (ptVar.rg(dfVar, i, qVar)) {
                    return;
                }
            }
        }
        qVar.rg(dfVar);
    }
}
