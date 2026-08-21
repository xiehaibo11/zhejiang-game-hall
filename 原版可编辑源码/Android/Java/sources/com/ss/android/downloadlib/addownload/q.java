package com.ss.android.downloadlib.addownload;

import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.util.concurrent.ConcurrentHashMap;

public class q {
    private static volatile q df;
    private static String rg = q.class.getSimpleName();
    private ConcurrentHashMap<Long, Runnable> q;

    public q() {
        this.q = null;
        this.q = new ConcurrentHashMap<>();
    }

    public static q rg() {
        if (df == null) {
            synchronized (q.class) {
                if (df == null) {
                    df = new q();
                }
            }
        }
        return df;
    }

    public void rg(pp ppVar, boolean z, int i, DownloadModel downloadModel) {
        if (downloadModel instanceof AdDownloadModel) {
            ((AdDownloadModel) downloadModel).setFunnelType(3);
        }
        long id = downloadModel.getId();
        if (i == 4) {
            if (!z) {
                rg(id, false, 2);
                ppVar.df(false);
                return;
            } else {
                rg(id, true, 2);
                return;
            }
        }
        if (i == 5) {
            if (!z) {
                rg(id, false, 1);
                ppVar.q(false);
                return;
            } else {
                rg(id, true, 1);
                return;
            }
        }
        if (i != 7) {
            return;
        }
        Runnable runnableRemove = this.q.remove(Long.valueOf(id));
        if (z) {
            AdEventHandler.rg().rg(id, 1);
            rg(id, true, 1);
        } else {
            if (runnableRemove != null) {
                com.ss.android.downloadlib.fw.rg().df().post(runnableRemove);
            }
            rg(id, false, 1);
        }
    }

    private void rg(long j, boolean z, int i) {
        AdEventHandler.rg().rg(j, z, i);
        if (z) {
            bm.n().rg(null, null, null, null, null, 3);
        }
    }

    public void rg(final pp ppVar, final int i, final DownloadModel downloadModel) {
        com.ss.android.downloadlib.df.pp.rg().rg(new com.ss.android.downloadlib.df.pt() {
            @Override
            public void rg(boolean z) {
                q.this.rg(ppVar, z, i, downloadModel);
            }
        }, df());
    }

    public long df() {
        return bm.rz().optLong("quick_app_check_internal", 1200L);
    }

    public static boolean rg(DownloadInfo downloadInfo) {
        return downloadInfo == null || downloadInfo.getStatus() == 0 || downloadInfo.getStatus() == -4;
    }
}
