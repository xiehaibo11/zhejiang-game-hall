package com.ss.android.downloadlib.q;

public class df implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler {
    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r4) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r3 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r1 = r4.getSavePath()
            java.lang.String r2 = r4.getName()
            android.content.pm.PackageInfo r0 = com.ss.android.socialbase.appdownloader.q.rg(r0, r4, r1, r2)
            if (r0 == 0) goto L17
            int r0 = r0.versionCode
            r4.setAppVersionCode(r0)
        L17:
            return
    }

    @Override
    public boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto L10
            boolean r0 = com.ss.android.downloadlib.utils.pt.df()
            if (r0 == 0) goto L10
            android.content.pm.PackageInfo r2 = r2.getPackageInfo()
            if (r2 != 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }
}
