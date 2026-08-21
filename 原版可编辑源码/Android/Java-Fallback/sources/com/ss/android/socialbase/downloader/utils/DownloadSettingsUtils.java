package com.ss.android.socialbase.downloader.utils;

public class DownloadSettingsUtils {
    public DownloadSettingsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isOptimizeAddListener(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            int r2 = r2.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r1 = "optimize_add_listener"
            int r2 = r2.optInt(r1)
            r1 = 1
            if (r2 != r1) goto L16
            r0 = r1
        L16:
            return r0
    }

    public static boolean isOptimizeHeadRequest(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            int r2 = r2.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r1 = "optimize_head_request"
            int r2 = r2.optInt(r1)
            r1 = 1
            if (r2 != r1) goto L16
            r0 = r1
        L16:
            return r0
    }

    public static boolean isOptimizeSavePath(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            int r2 = r2.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r1 = "optimize_save_path"
            int r2 = r2.optInt(r1)
            r1 = 1
            if (r2 != r1) goto L16
            r0 = r1
        L16:
            return r0
    }
}
