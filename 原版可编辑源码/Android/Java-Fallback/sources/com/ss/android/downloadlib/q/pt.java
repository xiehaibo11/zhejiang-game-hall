package com.ss.android.downloadlib.q;

public class pt implements com.ss.android.socialbase.appdownloader.q.fw, com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener {


    public pt() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onSuccess() {
            r4 = this;
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.q.pt$1 r1 = new com.ss.android.downloadlib.q.pt$1
            r1.<init>(r4)
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.rg(r1, r2)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6, int r7, boolean r8) {
            r5 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            r0.df()
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r6)
            if (r0 != 0) goto L12
            return
        L12:
            if (r8 == 0) goto L1c
            int r1 = r6.getFailedResumeCount()     // Catch: java.lang.Throwable -> La4
            r0.q(r1)     // Catch: java.lang.Throwable -> La4
            goto L27
        L1c:
            int r1 = r0.dj()     // Catch: java.lang.Throwable -> La4
            r2 = -1
            if (r1 != r2) goto L24
            return
        L24:
            r0.q(r2)     // Catch: java.lang.Throwable -> La4
        L27:
            com.ss.android.downloadlib.addownload.model.ux r1 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> La4
            r1.rg(r0)     // Catch: java.lang.Throwable -> La4
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La4
            r1.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "download_id"
            int r3 = r6.getId()     // Catch: java.lang.Throwable -> La4
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "name"
            java.lang.String r3 = r6.getName()     // Catch: java.lang.Throwable -> La4
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "url"
            java.lang.String r3 = r6.getUrl()     // Catch: java.lang.Throwable -> La4
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "download_time"
            long r3 = r6.getDownloadTime()     // Catch: java.lang.Throwable -> La4
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r2 = "download_status"
            r1.put(r2, r7)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "cur_bytes"
            long r2 = r6.getCurBytes()     // Catch: java.lang.Throwable -> La4
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "total_bytes"
            long r2 = r6.getTotalBytes()     // Catch: java.lang.Throwable -> La4
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "only_wifi"
            boolean r2 = r6.isOnlyWifi()     // Catch: java.lang.Throwable -> La4
            r3 = 1
            if (r2 == 0) goto L79
            r2 = r3
            goto L7a
        L79:
            r2 = 0
        L7a:
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "chunk_count"
            int r2 = r6.getChunkCount()     // Catch: java.lang.Throwable -> La4
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "launch_resumed"
            if (r8 == 0) goto L8b
            goto L8c
        L8b:
            r3 = 2
        L8c:
            r1.put(r7, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "failed_resume_count"
            int r6 = r6.getFailedResumeCount()     // Catch: java.lang.Throwable -> La4
            r1.put(r7, r6)     // Catch: java.lang.Throwable -> La4
            com.ss.android.downloadlib.event.AdEventHandler r6 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "embeded_ad"
            java.lang.String r8 = "download_uncompleted"
            r6.rg(r7, r8, r1, r0)     // Catch: java.lang.Throwable -> La4
            goto La8
        La4:
            r6 = move-exception
            r6.printStackTrace()
        La8:
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, boolean r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = r2.getRealStatus()
            r1.rg(r2, r0, r3)
            return
    }

    @Override
    public void rg(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r1) {
            r0 = this;
            return
    }
}
