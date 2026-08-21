package com.ss.android.downloadlib.addownload.df;

public class q {
    public static void df() {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            java.lang.String r1 = "application/vnd.android.package-archive"
            java.util.List r0 = r0.getSuccessedDownloadInfosWithMimeType(r1)
            if (r0 == 0) goto L8e
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L18
            goto L8e
        L18:
            r1 = 0
            r2 = r1
        L1a:
            int r3 = r0.size()
            if (r2 >= r3) goto L8e
            java.lang.Object r3 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r3
            if (r3 == 0) goto L8b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r3.getSavePath()
            r4.append(r5)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            java.lang.String r5 = r3.getName()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.io.File r5 = new java.io.File
            r5.<init>(r4)
            boolean r6 = r5.exists()
            if (r6 == 0) goto L8b
            long r6 = java.lang.System.currentTimeMillis()
            long r8 = r5.lastModified()
            long r6 = r6 - r8
            int r3 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r8 = "download_complete_file_expire_hours"
            int r3 = r3.optInt(r8, r1)
            long r8 = (long) r3
            r10 = 3600000(0x36ee80, double:1.7786363E-317)
            long r8 = r8 * r10
            r10 = 0
            int r3 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r3 > 0) goto L74
            r8 = 604800000(0x240c8400, double:2.988109026E-315)
        L74:
            int r3 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            r6 = 1
            if (r3 < 0) goto L7a
            goto L86
        L7a:
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r3 = com.ss.android.downloadlib.utils.b.pp(r3, r4)
            if (r3 == 0) goto L85
            goto L86
        L85:
            r6 = r1
        L86:
            if (r6 == 0) goto L8b
            rg(r5)
        L8b:
            int r2 = r2 + 1
            goto L1a
        L8e:
            return
    }

    public static void rg() {
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.util.List r0 = r0.rg(r1)
            if (r0 == 0) goto L79
            int r1 = r0.size()
            if (r1 <= 0) goto L79
            r1 = 0
            r2 = r1
        L16:
            int r3 = r0.size()
            if (r2 >= r3) goto L79
            java.lang.Object r3 = r0.get(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r3
            java.io.File r4 = new java.io.File
            java.lang.String r5 = r3.getTempPath()
            java.lang.String r6 = r3.getTempName()
            r4.<init>(r5, r6)
            long r5 = r4.lastModified()
            int r7 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r7)
            java.lang.String r8 = "download_file_expire_hours"
            int r7 = r7.optInt(r8, r1)
            long r7 = (long) r7
            r9 = 3600000(0x36ee80, double:1.7786363E-317)
            long r7 = r7 * r9
            r9 = 0
            int r9 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r9 > 0) goto L4f
            r7 = 604800000(0x240c8400, double:2.988109026E-315)
        L4f:
            boolean r9 = r4.isFile()
            if (r9 == 0) goto L76
            boolean r9 = r4.exists()
            if (r9 == 0) goto L76
            long r9 = java.lang.System.currentTimeMillis()
            long r9 = r9 - r5
            int r5 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r5 < 0) goto L76
            rg(r4)
            android.content.Context r4 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r4 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r4)
            int r3 = r3.getId()
            r4.clearDownloadData(r3)
        L76:
            int r2 = r2 + 1
            goto L16
        L79:
            return
    }

    public static void rg(android.content.Context r0) {
            if (r0 == 0) goto L14
            java.io.File r0 = r0.getExternalCacheDir()
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L10
            rg(r0)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            return
    }

    public static void rg(java.io.File r3) {
            r0 = 0
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            java.lang.String r0 = "1"
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L13 java.lang.Throwable -> L2c
            r1.write(r0)     // Catch: java.lang.Exception -> L13 java.lang.Throwable -> L2c
            r1.close()     // Catch: java.lang.Exception -> L13 java.lang.Throwable -> L2c
            goto L28
        L13:
            r0 = move-exception
            goto L1b
        L15:
            r3 = move-exception
            goto L2e
        L17:
            r1 = move-exception
            r2 = r1
            r1 = r0
            r0 = r2
        L1b:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L28
            r1.close()     // Catch: java.lang.Exception -> L24
            goto L28
        L24:
            r0 = move-exception
            r0.printStackTrace()
        L28:
            r3.delete()
            return
        L2c:
            r3 = move-exception
            r0 = r1
        L2e:
            if (r0 == 0) goto L38
            r0.close()     // Catch: java.lang.Exception -> L34
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()
        L38:
            throw r3
    }

    private static void rg(java.lang.String r7) {
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Lc
            return
        Lc:
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L16
            r0.delete()
            return
        L16:
            java.lang.String[] r1 = r0.list()
            if (r1 != 0) goto L1d
            return
        L1d:
            int r2 = r1.length
            r3 = 0
        L1f:
            if (r3 >= r2) goto L6c
            r4 = r1[r3]
            if (r4 != 0) goto L26
            goto L69
        L26:
            java.lang.String r5 = java.io.File.separator
            boolean r5 = r7.endsWith(r5)
            if (r5 == 0) goto L3e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r7)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            goto L52
        L3e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r7)
            java.lang.String r6 = java.io.File.separator
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
        L52:
            java.io.File r5 = new java.io.File
            r5.<init>(r4)
            boolean r6 = r5.isFile()
            if (r6 == 0) goto L60
            r5.delete()
        L60:
            boolean r5 = r5.isDirectory()
            if (r5 == 0) goto L69
            rg(r4)
        L69:
            int r3 = r3 + 1
            goto L1f
        L6c:
            r0.delete()
            return
    }
}
