package com.ss.android.downloadlib.q;

public class rg implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler {


    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private void rg(android.content.Context r12, com.ss.android.socialbase.downloader.model.DownloadInfo r13) {
            r11 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r13.getSavePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = r13.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.content.ContentResolver r1 = r12.getContentResolver()
            java.lang.String r7 = "external"
            android.net.Uri r2 = android.provider.MediaStore.Files.getContentUri(r7)
            java.lang.String r8 = "_id"
            java.lang.String[] r3 = new java.lang.String[]{r8}
            r9 = 1
            java.lang.String[] r5 = new java.lang.String[r9]
            r10 = 0
            r5[r10] = r0
            java.lang.String r4 = "_data=? "
            r6 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6)
            if (r1 == 0) goto L5c
            boolean r2 = r1.moveToFirst()
            if (r2 == 0) goto L5c
            int r12 = r1.getColumnIndex(r8)
            int r12 = r1.getInt(r12)
            android.net.Uri r0 = android.provider.MediaStore.Files.getContentUri(r7)
            long r2 = (long) r12
            android.net.Uri r12 = android.content.ContentUris.withAppendedId(r0, r2)
            java.lang.String r12 = r12.toString()
            java.lang.String r0 = "file_content_uri"
            r13.safePutToDBJsonData(r0, r12)
            goto L6e
        L5c:
            java.lang.String[] r2 = new java.lang.String[r9]
            r2[r10] = r0
            java.lang.String r0 = "application/vnd.android.package-archive"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            com.ss.android.downloadlib.q.rg$1 r3 = new com.ss.android.downloadlib.q.rg$1
            r3.<init>(r11, r13)
            android.media.MediaScannerConnection.scanFile(r12, r2, r0, r3)
        L6e:
            android.database.Cursor[] r12 = new android.database.Cursor[r9]
            r12[r10] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r12)
            return
    }

    private boolean rg(com.ss.android.socialbase.downloader.model.DownloadInfo r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.getSavePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = r7.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            android.content.pm.PackageInfo r2 = com.ss.android.socialbase.appdownloader.q.rg(r7, r1)
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.rg.pp.rg(r3, r2, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            r3 = 0
            if (r2 != 0) goto L7c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ".apk"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = r7.getName()
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L51
            r7 = 1
            return r7
        L51:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78
            r4.<init>()     // Catch: java.lang.Exception -> L78
            java.lang.String r5 = r7.getSavePath()     // Catch: java.lang.Exception -> L78
            r4.append(r5)     // Catch: java.lang.Exception -> L78
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Exception -> L78
            r4.append(r5)     // Catch: java.lang.Exception -> L78
            r4.append(r0)     // Catch: java.lang.Exception -> L78
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L78
            r2.<init>(r4)     // Catch: java.lang.Exception -> L78
            boolean r3 = r1.renameTo(r2)     // Catch: java.lang.Exception -> L78
            if (r3 == 0) goto L7c
            r7.setName(r0)     // Catch: java.lang.Exception -> L78
            goto L7c
        L78:
            r7 = move-exception
            r7.printStackTrace()
        L7c:
            return r3
    }

    @Override
    public void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r2) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r1 = this;
            if (r2 == 0) goto Lf
            boolean r0 = r1.rg(r2)
            if (r0 == 0) goto Lf
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r1.rg(r0, r2)
        Lf:
            return
    }

    @Override
    public boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            if (r1 == 0) goto Lf
            int r1 = r1.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            boolean r1 = com.ss.android.downloadlib.utils.pt.df(r1)
            return r1
        Lf:
            r1 = 0
            return r1
    }
}
