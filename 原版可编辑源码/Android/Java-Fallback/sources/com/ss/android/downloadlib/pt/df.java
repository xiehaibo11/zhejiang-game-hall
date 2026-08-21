package com.ss.android.downloadlib.pt;

public class df implements com.ss.android.socialbase.appdownloader.q.bm {
    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, com.ss.android.socialbase.appdownloader.q.rz r3) {
            r1 = this;
            if (r2 == 0) goto L13
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r2)
            if (r0 == 0) goto L13
            int r0 = r0.om()
            r2.setLinkMode(r0)
        L13:
            if (r3 == 0) goto L18
            r3.rg()
        L18:
            return
    }
}
