package com.ss.android.downloadlib.addownload.df;

import com.ss.android.downloadlib.utils.b;
import com.ss.android.downloadlib.utils.bm;
import com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceCallback;
import com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;

public class rg implements IDownloadDiskSpaceHandler {
    private int rg;

    public void rg(int i) {
        this.rg = i;
    }

    @Override
    public boolean cleanUpDisk(long j, long j2, IDownloadDiskSpaceCallback iDownloadDiskSpaceCallback) throws Throwable {
        long j3;
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(this.rg);
        if (!rg(downloadSettingObtain)) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        pt.rg().q();
        long jRg = b.rg(0L);
        rg();
        long jRg2 = b.rg(0L);
        long jCurrentTimeMillis2 = System.currentTimeMillis() - jCurrentTimeMillis;
        if (jRg2 < j2) {
            long jDf = df(downloadSettingObtain);
            if (jDf > 0) {
                jRg2 = b.rg(0L);
            }
            j3 = jDf;
        } else {
            j3 = 0;
        }
        bm.df("AppDownloadDiskSpaceHandler", "cleanUpDisk, byteRequired = " + j2 + ", byteAvailableAfter = " + jRg2 + ", cleaned = " + (jRg2 - jRg), null);
        long j4 = jRg2;
        rg(jRg, jRg2, j2, jCurrentTimeMillis2, j3);
        if (j4 < j2) {
            return false;
        }
        if (iDownloadDiskSpaceCallback == null) {
            return true;
        }
        iDownloadDiskSpaceCallback.onDiskCleaned();
        return true;
    }

    private boolean rg(DownloadSetting downloadSetting) {
        if (downloadSetting.optInt("clear_space_use_disk_handler", 0) != 1) {
            return false;
        }
        return System.currentTimeMillis() - pt.rg().df() >= downloadSetting.optLong("clear_space_min_time_interval", 600000L);
    }

    private void rg() throws Throwable {
        com.ss.android.download.api.config.pp ppVarV = com.ss.android.downloadlib.addownload.bm.v();
        if (ppVarV != null) {
            ppVarV.rg();
        }
        q.rg();
        q.df();
    }

    private long df(DownloadSetting downloadSetting) {
        long jOptLong = downloadSetting.optLong("clear_space_sleep_time", 0L);
        if (jOptLong <= 0) {
            return 0L;
        }
        if (jOptLong > 5000) {
            jOptLong = 5000;
        }
        bm.df("AppDownloadDiskSpaceHandler", "waiting for space clear, sleepTime = " + jOptLong, null);
        try {
            Thread.sleep(jOptLong);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        bm.df("AppDownloadDiskSpaceHandler", "waiting end!", null);
        return jOptLong;
    }

    private void rg(long j, long j2, long j3, long j4, long j5) {
        DownloadInfo downloadInfo = Downloader.getInstance(com.ss.android.downloadlib.addownload.bm.getContext()).getDownloadInfo(this.rg);
        if (downloadInfo == null) {
            return;
        }
        try {
            com.ss.android.downloadlib.rg.rg().rg(downloadInfo, j, j2, j3, j4, j5, j2 > j3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
