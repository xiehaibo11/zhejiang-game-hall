package com.ss.android.downloadlib.pt;

import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.model.c;
import com.ss.android.socialbase.appdownloader.q.bm;
import com.ss.android.socialbase.appdownloader.q.rz;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

/* JADX INFO: loaded from: classes3.dex */
public class rg implements bm {
    @Override // com.ss.android.socialbase.appdownloader.q.bm
    public void rg(DownloadInfo downloadInfo, final rz rzVar) {
        rg(downloadInfo, new com.ss.android.downloadlib.guide.install.rg() { // from class: com.ss.android.downloadlib.pt.rg.1
            @Override // com.ss.android.downloadlib.guide.install.rg
            public void rg() {
                rzVar.rg();
            }
        });
    }

    public void rg(final DownloadInfo downloadInfo, final com.ss.android.downloadlib.guide.install.rg rgVar) {
        com.ss.android.downloadad.api.rg.df dfVarRg = c.rg().rg(downloadInfo);
        if (dfVarRg != null && com.ss.android.downloadlib.df.rz.rg(dfVarRg)) {
            TTDelegateActivity.rg(dfVarRg, new com.ss.android.downloadlib.guide.install.rg() { // from class: com.ss.android.downloadlib.pt.rg.2
                @Override // com.ss.android.downloadlib.guide.install.rg
                public void rg() {
                    rg.this.df(downloadInfo, rgVar);
                }
            });
        } else {
            df(downloadInfo, rgVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void df(DownloadInfo downloadInfo, final com.ss.android.downloadlib.guide.install.rg rgVar) {
        com.ss.android.downloadad.api.rg.df dfVarRg = c.rg().rg(downloadInfo);
        boolean zRg = com.ss.android.downloadlib.df.c.rg(dfVarRg);
        boolean zDf = com.ss.android.downloadlib.df.c.df(dfVarRg);
        if (!zRg || !zDf) {
            rgVar.rg();
        } else {
            com.ss.android.downloadlib.df.q.rg(dfVarRg, new com.ss.android.downloadlib.guide.install.rg() { // from class: com.ss.android.downloadlib.pt.rg.3
                @Override // com.ss.android.downloadlib.guide.install.rg
                public void rg() {
                    rgVar.rg();
                }
            });
        }
    }
}
