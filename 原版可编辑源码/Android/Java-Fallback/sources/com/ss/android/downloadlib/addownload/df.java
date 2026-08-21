package com.ss.android.downloadlib.addownload;

public class df {
    private static volatile com.ss.android.downloadlib.addownload.df rg;
    private android.os.Handler df;


    public df() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.df = r0
            return
    }

    public static com.ss.android.downloadlib.addownload.df rg() {
            com.ss.android.downloadlib.addownload.df r0 = com.ss.android.downloadlib.addownload.df.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.df> r0 = com.ss.android.downloadlib.addownload.df.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.df r1 = com.ss.android.downloadlib.addownload.df.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.df r1 = new com.ss.android.downloadlib.addownload.df     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.df.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.df r0 = com.ss.android.downloadlib.addownload.df.rg
            return r0
    }

    public boolean df() {
            r3 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            r1 = 0
            java.lang.String r2 = "forbid_invalidte_download_file_install"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto Lf
            return r2
        Lf:
            return r1
    }

    public void rg(android.content.Context r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            r3 = this;
            boolean r0 = r3.df()
            if (r0 != 0) goto L7
            return
        L7:
            if (r5 != 0) goto La
            return
        La:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r5.getSavePath()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r5.getName()     // Catch: java.lang.Exception -> L27
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L27
            boolean r1 = r0.isFile()     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L2b
            boolean r1 = r0.exists()     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L2b
            r0.delete()     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            android.os.Handler r0 = r3.df
            if (r0 != 0) goto L3a
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r3.df = r0
        L3a:
            java.lang.String r0 = r5.getUrl()
            com.ss.android.socialbase.downloader.downloader.Downloader r4 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r4)
            int r5 = r5.getId()
            r4.clearDownloadData(r5)
            android.os.Handler r4 = r3.df
            com.ss.android.downloadlib.addownload.df$1 r5 = new com.ss.android.downloadlib.addownload.df$1
            r5.<init>(r3, r0)
            r4.post(r5)
            return
    }
}
