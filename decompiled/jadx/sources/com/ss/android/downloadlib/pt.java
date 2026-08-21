package com.ss.android.downloadlib;

import android.content.SharedPreferences;
import android.util.SparseArray;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.downloader.IDownloadCache;
import com.ss.android.socialbase.downloader.impls.DefaultDownloadCache;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.thread.DefaultThreadFactory;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    private ExecutorService df;
    private ScheduledExecutorService q;
    private ExecutorService rg;

    private static class rg {
        private static pt rg = new pt();
    }

    public static pt rg() {
        return rg.rg;
    }

    private pt() {
    }

    public void rg(Runnable runnable) {
        rg(runnable, false);
    }

    public void df(Runnable runnable) {
        df(runnable, false);
    }

    public void rg(Runnable runnable, boolean z) {
        if (runnable == null) {
            return;
        }
        if (z && !b.rg()) {
            runnable.run();
        } else {
            df().execute(runnable);
        }
    }

    public void df(Runnable runnable, boolean z) {
        if (runnable == null) {
            return;
        }
        if (z && !b.rg()) {
            runnable.run();
        } else {
            q().execute(runnable);
        }
    }

    public void rg(Runnable runnable, long j) {
        try {
            pt().schedule(runnable, j, TimeUnit.MILLISECONDS);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public ExecutorService df() {
        if (this.rg == null) {
            synchronized (pt.class) {
                if (this.rg == null) {
                    this.rg = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 30L, TimeUnit.SECONDS, new SynchronousQueue(), new DefaultThreadFactory(ux.class.getName() + "-CPUThreadPool"));
                }
            }
        }
        return this.rg;
    }

    public ExecutorService q() {
        if (this.df == null) {
            synchronized (pt.class) {
                if (this.df == null) {
                    this.df = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 30L, TimeUnit.SECONDS, new SynchronousQueue(), new DefaultThreadFactory(ux.class.getName() + "-IOThreadPool"));
                }
            }
        }
        return this.df;
    }

    public ScheduledExecutorService pt() {
        if (this.q == null) {
            synchronized (pt.class) {
                if (this.q == null) {
                    this.q = new ScheduledThreadPoolExecutor(0, new DefaultThreadFactory(ux.class.getName() + "-ScheduledThreadPool"));
                }
            }
        }
        return this.q;
    }

    public void pp() {
        rg(new Runnable() { // from class: com.ss.android.downloadlib.pt.1
            @Override // java.lang.Runnable
            public void run() {
                synchronized (pt.class) {
                    try {
                        String[] strArr = {"sp_ad_download_event", "sp_download_finish_cache", "sp_delay_operation_info", "sp_ttdownloader_md5", "sp_name_installed_app", "misc_config", "sp_ad_install_back_dialog", "sp_ttdownloader_clean", "sp_order_download", "sp_a_b_c", DownloadConstants.SP_ANTI_HIJACK_CONFIG, DownloadConstants.SP_DOWNLOAD_INFO, "sp_appdownloader"};
                        for (int i = 0; i < 13; i++) {
                            SharedPreferences sharedPreferences = bm.getContext().getSharedPreferences(strArr[i], 0);
                            if (sharedPreferences != null) {
                                sharedPreferences.edit().clear().apply();
                            }
                        }
                        IDownloadCache downloadCache = DownloadComponentManager.getDownloadCache();
                        if (!(downloadCache instanceof DefaultDownloadCache)) {
                            return;
                        }
                        SparseArray<DownloadInfo> downloadInfoMap = ((DefaultDownloadCache) downloadCache).getDownloadCache().getDownloadInfoMap();
                        for (int size = downloadInfoMap.size() - 1; size >= 0; size--) {
                            DownloadInfo downloadInfo = downloadInfoMap.get(downloadInfoMap.keyAt(size));
                            if (downloadInfo != null) {
                                Downloader.getInstance(bm.getContext()).clearDownloadData(downloadInfo.getId());
                            }
                        }
                    } catch (Throwable unused) {
                    }
                }
            }
        });
    }
}
