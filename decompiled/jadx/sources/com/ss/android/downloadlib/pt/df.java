package com.ss.android.downloadlib.pt;

import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.socialbase.appdownloader.q.bm;
import com.ss.android.socialbase.appdownloader.q.rz;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

/* JADX INFO: loaded from: classes3.dex */
public class df implements bm {
    @Override // com.ss.android.socialbase.appdownloader.q.bm
    public void rg(DownloadInfo downloadInfo, rz rzVar) {
        com.ss.android.downloadad.api.rg.df dfVarRg;
        if (downloadInfo != null && (dfVarRg = c.rg().rg(downloadInfo)) != null) {
            downloadInfo.setLinkMode(dfVarRg.om());
        }
        if (rzVar != null) {
            rzVar.rg();
        }
    }
}
