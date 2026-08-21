package com.ss.android.downloadlib.pt;

public class rg implements com.ss.android.socialbase.appdownloader.q.bm {




    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df(com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.downloadlib.guide.install.rg r4) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r3 = r0.rg(r3)
            boolean r0 = com.ss.android.downloadlib.df.c.rg(r3)
            boolean r1 = com.ss.android.downloadlib.df.c.df(r3)
            if (r0 == 0) goto L1e
            if (r1 != 0) goto L15
            goto L1e
        L15:
            com.ss.android.downloadlib.pt.rg$3 r0 = new com.ss.android.downloadlib.pt.rg$3
            r0.<init>(r2, r4)
            com.ss.android.downloadlib.df.q.rg(r3, r0)
            return
        L1e:
            r4.rg()
            return
    }

    static void rg(com.ss.android.downloadlib.pt.rg r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.downloadlib.guide.install.rg r2) {
            r0.df(r1, r2)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.downloadlib.guide.install.rg r4) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r3)
            if (r0 == 0) goto L19
            boolean r1 = com.ss.android.downloadlib.df.rz.rg(r0)
            if (r1 == 0) goto L19
            com.ss.android.downloadlib.pt.rg$2 r1 = new com.ss.android.downloadlib.pt.rg$2
            r1.<init>(r2, r3, r4)
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r0, r1)
            goto L1c
        L19:
            r2.df(r3, r4)
        L1c:
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, com.ss.android.socialbase.appdownloader.q.rz r3) {
            r1 = this;
            com.ss.android.downloadlib.pt.rg$1 r0 = new com.ss.android.downloadlib.pt.rg$1
            r0.<init>(r1, r3)
            r1.rg(r2, r0)
            return
    }
}
