package com.ss.android.downloadlib.addownload;

public class rz {
    public static int rg(int r2, int r3) {
            if (r3 <= 0) goto L17
            r0 = 100
            if (r3 >= r0) goto L17
            boolean r2 = rg(r2)
            if (r2 != 0) goto Ld
            goto L17
        Ld:
            double r2 = (double) r3
            double r2 = java.lang.Math.sqrt(r2)
            r0 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r2 = r2 * r0
            int r2 = (int) r2
            return r2
        L17:
            return r3
    }

    public static long rg(int r3, long r4, long r6) {
            boolean r0 = rg(r3)
            if (r0 != 0) goto L7
            return r4
        L7:
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 > 0) goto Le
            return r0
        Le:
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto L13
            return r4
        L13:
            r0 = 100
            long r4 = r4 * r0
            long r4 = r4 / r6
            int r4 = (int) r4
            int r3 = rg(r3, r4)
            long r3 = (long) r3
            long r6 = r6 * r3
            long r6 = r6 / r0
            return r6
    }

    public static com.ss.android.download.api.model.DownloadShortInfo rg(com.ss.android.download.api.model.DownloadShortInfo r5) {
            if (r5 == 0) goto L19
            long r0 = r5.id
            int r0 = (int) r0
            boolean r0 = rg(r0)
            if (r0 != 0) goto Lc
            goto L19
        Lc:
            long r0 = r5.id
            int r0 = (int) r0
            long r1 = r5.currentBytes
            long r3 = r5.totalBytes
            long r0 = rg(r0, r1, r3)
            r5.currentBytes = r0
        L19:
            return r5
    }

    private static boolean rg(int r3) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            r1 = 0
            java.lang.String r2 = "pause_optimise_pretend_download_percent_switch"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L1b
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "pause_optimise_switch"
            int r3 = r3.optInt(r0, r1)
            if (r3 != r2) goto L1b
            r1 = r2
        L1b:
            return r1
    }
}
