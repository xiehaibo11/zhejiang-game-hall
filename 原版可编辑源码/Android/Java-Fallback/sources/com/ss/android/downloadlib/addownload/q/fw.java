package com.ss.android.downloadlib.addownload.q;

public class fw implements com.ss.android.downloadlib.addownload.q.pt {
    public fw() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean rg(com.ss.android.downloadad.api.rg.df r3, int r4, com.ss.android.downloadlib.addownload.q.q r5) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            r0 = 0
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            java.lang.String r1 = r3.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.df(r1)
            boolean r3 = com.ss.android.downloadlib.addownload.hq.rg(r3, r0, r4, r5)
            return r3
    }
}
