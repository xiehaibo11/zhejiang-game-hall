package com.ss.android.downloadlib.pt;

import com.ss.android.socialbase.appdownloader.q.bm;
import com.ss.android.socialbase.appdownloader.q.rz;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.util.ArrayList;
import java.util.List;

public class q implements bm {
    private static volatile q rg;
    private List<bm> df;

    public static q rg() {
        if (rg == null) {
            synchronized (q.class) {
                if (rg == null) {
                    rg = new q();
                }
            }
        }
        return rg;
    }

    private q() {
        ArrayList arrayList = new ArrayList();
        this.df = arrayList;
        arrayList.add(new df());
        this.df.add(new rg());
    }

    @Override
    public void rg(DownloadInfo downloadInfo, rz rzVar) {
        if (downloadInfo != null && this.df.size() != 0) {
            rg(downloadInfo, 0, rzVar);
        } else if (rzVar != null) {
            rzVar.rg();
        }
    }

    private void rg(final DownloadInfo downloadInfo, final int i, final rz rzVar) {
        if (i == this.df.size() || i < 0) {
            rzVar.rg();
        } else {
            this.df.get(i).rg(downloadInfo, new rz() {
                @Override
                public void rg() {
                    q.this.rg(downloadInfo, i + 1, rzVar);
                }
            });
        }
    }
}
