package com.ss.android.downloadlib.addownload;

import com.ss.android.download.api.model.DownloadShortInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;

/* JADX INFO: loaded from: classes3.dex */
public class rz {
    public static int rg(int i, int i2) {
        return (i2 <= 0 || i2 >= 100 || !rg(i)) ? i2 : (int) (Math.sqrt(i2) * 10.0d);
    }

    public static long rg(int i, long j, long j2) {
        if (!rg(i)) {
            return j;
        }
        if (j <= 0) {
            return 0L;
        }
        return j2 <= 0 ? j : (j2 * ((long) rg(i, (int) ((j * 100) / j2)))) / 100;
    }

    public static DownloadShortInfo rg(DownloadShortInfo downloadShortInfo) {
        if (downloadShortInfo != null && rg((int) downloadShortInfo.id)) {
            downloadShortInfo.currentBytes = rg((int) downloadShortInfo.id, downloadShortInfo.currentBytes, downloadShortInfo.totalBytes);
        }
        return downloadShortInfo;
    }

    private static boolean rg(int i) {
        return DownloadSetting.obtain(i).optInt("pause_optimise_pretend_download_percent_switch", 0) == 1 && DownloadSetting.obtain(i).optInt("pause_optimise_switch", 0) == 1;
    }
}
