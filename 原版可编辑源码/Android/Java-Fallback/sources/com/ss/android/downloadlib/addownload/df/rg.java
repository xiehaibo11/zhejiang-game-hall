package com.ss.android.downloadlib.addownload.df;

public class rg implements com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler {
    private int rg;

    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private long df(com.ss.android.socialbase.downloader.setting.DownloadSetting r5) {
            r4 = this;
            r0 = 0
            java.lang.String r2 = "clear_space_sleep_time"
            long r2 = r5.optLong(r2, r0)
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 > 0) goto Ld
            return r0
        Ld:
            r0 = 5000(0x1388, double:2.4703E-320)
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 <= 0) goto L14
            r2 = r0
        L14:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "waiting for space clear, sleepTime = "
            r5.append(r0)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r0 = 0
            java.lang.String r1 = "AppDownloadDiskSpaceHandler"
            com.ss.android.downloadlib.utils.bm.df(r1, r5, r0)
            java.lang.Thread.sleep(r2)     // Catch: java.lang.InterruptedException -> L2f
            goto L33
        L2f:
            r5 = move-exception
            r5.printStackTrace()
        L33:
            java.lang.String r5 = "waiting end!"
            com.ss.android.downloadlib.utils.bm.df(r1, r5, r0)
            return r2
    }

    private void rg() {
            r1 = this;
            com.ss.android.download.api.config.pp r0 = com.ss.android.downloadlib.addownload.bm.v()
            if (r0 == 0) goto L9
            r0.rg()
        L9:
            com.ss.android.downloadlib.addownload.df.q.rg()
            com.ss.android.downloadlib.addownload.df.q.df()
            return
    }

    private void rg(long r17, long r19, long r21, long r23, long r25) {
            r16 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            r1 = r16
            int r2 = r1.rg
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.getDownloadInfo(r2)
            if (r4 != 0) goto L13
            return
        L13:
            r0 = 0
            int r2 = (r19 > r21 ? 1 : (r19 == r21 ? 0 : -1))
            if (r2 <= 0) goto L19
            r0 = 1
        L19:
            r15 = r0
            com.ss.android.downloadlib.rg r3 = com.ss.android.downloadlib.rg.rg()     // Catch: java.lang.Exception -> L2c
            r5 = r17
            r7 = r19
            r9 = r21
            r11 = r23
            r13 = r25
            r3.rg(r4, r5, r7, r9, r11, r13, r15)     // Catch: java.lang.Exception -> L2c
            goto L30
        L2c:
            r0 = move-exception
            r0.printStackTrace()
        L30:
            return
    }

    private boolean rg(com.ss.android.socialbase.downloader.setting.DownloadSetting r10) {
            r9 = this;
            r0 = 0
            java.lang.String r1 = "clear_space_use_disk_handler"
            int r1 = r10.optInt(r1, r0)
            r2 = 1
            if (r1 == r2) goto Lb
            return r0
        Lb:
            r3 = 600000(0x927c0, double:2.964394E-318)
            java.lang.String r1 = "clear_space_min_time_interval"
            long r3 = r10.optLong(r1, r3)
            long r5 = java.lang.System.currentTimeMillis()
            com.ss.android.downloadlib.addownload.df.pt r10 = com.ss.android.downloadlib.addownload.df.pt.rg()
            long r7 = r10.df()
            long r5 = r5 - r7
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 >= 0) goto L26
            return r0
        L26:
            return r2
    }

    @Override
    public boolean cleanUpDisk(long r20, long r22, com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceCallback r24) {
            r19 = this;
            r11 = r19
            r12 = r22
            int r0 = r11.rg
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            boolean r1 = r11.rg(r0)
            r14 = 0
            if (r1 != 0) goto L12
            return r14
        L12:
            long r1 = java.lang.System.currentTimeMillis()
            com.ss.android.downloadlib.addownload.df.pt r3 = com.ss.android.downloadlib.addownload.df.pt.rg()
            r3.q()
            r3 = 0
            long r5 = com.ss.android.downloadlib.utils.b.rg(r3)
            r19.rg()
            long r7 = com.ss.android.downloadlib.utils.b.rg(r3)
            long r9 = java.lang.System.currentTimeMillis()
            long r9 = r9 - r1
            int r1 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r1 >= 0) goto L41
            long r0 = r11.df(r0)
            int r2 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r2 <= 0) goto L3f
            long r7 = com.ss.android.downloadlib.utils.b.rg(r3)
        L3f:
            r15 = r0
            goto L42
        L41:
            r15 = r3
        L42:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cleanUpDisk, byteRequired = "
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = ", byteAvailableAfter = "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = ", cleaned = "
            r0.append(r1)
            long r1 = r7 - r5
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.String r2 = "AppDownloadDiskSpaceHandler"
            com.ss.android.downloadlib.utils.bm.df(r2, r0, r1)
            r0 = r19
            r1 = r5
            r3 = r7
            r5 = r22
            r17 = r7
            r7 = r9
            r9 = r15
            r0.rg(r1, r3, r5, r7, r9)
            int r0 = (r17 > r12 ? 1 : (r17 == r12 ? 0 : -1))
            if (r0 >= 0) goto L7d
            return r14
        L7d:
            if (r24 == 0) goto L82
            r24.onDiskCleaned()
        L82:
            r0 = 1
            return r0
    }

    public void rg(int r1) {
            r0 = this;
            r0.rg = r1
            return
    }
}
