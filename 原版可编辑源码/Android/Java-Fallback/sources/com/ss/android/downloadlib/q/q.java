package com.ss.android.downloadlib.q;

public class q implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler {
    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.io.File rg(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            java.lang.String r4 = r0.getName()
            r1 = 46
            int r1 = r4.lastIndexOf(r1)
            if (r1 <= 0) goto L16
            r3 = 0
            java.lang.String r3 = r4.substring(r3, r1)
        L16:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = ".apk"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.io.File r4 = new java.io.File
            java.lang.String r0 = r0.getParent()
            r4.<init>(r0, r3)
            return r4
    }

    @Override
    public void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r6 = this;
            com.ss.android.download.api.config.oh r0 = com.ss.android.downloadlib.addownload.bm.bm()
            if (r7 == 0) goto L3b
            if (r0 == 0) goto L3b
            java.lang.String r1 = r7.getPackageName()
            java.lang.String r2 = r7.getTargetFilePath()
            java.io.File r3 = r6.rg(r1, r2)
            com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r4 = r4.rg(r7)
            r5 = 0
            if (r4 == 0) goto L28
            org.json.JSONObject r4 = r4.fw()
            org.json.JSONObject r4 = com.ss.android.downloadlib.utils.b.rg(r4)
            goto L29
        L28:
            r4 = r5
        L29:
            r0.rg(r1, r2, r3, r4)
            java.lang.String r0 = "application/vnd.android.package-archive"
            r7.setMimeType(r0)
            java.lang.String r0 = r3.getName()
            r7.setName(r0)
            r7.setMd5(r5)
        L3b:
            return
    }

    @Override
    public boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            if (r2 == 0) goto L13
            int r0 = r2.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r2 = r2.getMimeType()
            boolean r2 = com.ss.android.download.api.q.df.rg(r0, r2)
            return r2
        L13:
            r2 = 0
            return r2
    }
}
