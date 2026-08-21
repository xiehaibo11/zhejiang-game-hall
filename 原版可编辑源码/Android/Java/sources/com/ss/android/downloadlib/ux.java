package com.ss.android.downloadlib;

import android.content.Context;
import android.text.TextUtils;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.OnItemClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.downloadlib.addownload.b;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;

public class ux {
    private static volatile ux rg;
    private long c;
    private final com.ss.android.download.api.rg df;
    private com.ss.android.downloadad.api.df pp;
    private final com.ss.android.downloadad.api.rg pt;
    private final fw q;

    public static ux rg(final Context context) {
        if (rg == null) {
            synchronized (ux.class) {
                if (rg == null) {
                    com.ss.android.downloadlib.exception.df.rg(new Runnable() {
                        @Override
                        public void run() {
                            ux unused = ux.rg = new ux(context);
                        }
                    });
                }
            }
        }
        return rg;
    }

    private ux(Context context) {
        this.q = fw.rg();
        this.df = new pp();
        this.c = System.currentTimeMillis();
        df(context);
        this.pt = rg.rg();
    }

    private void df(Context context) {
        bm.rg(context);
        Downloader.getInstance(bm.getContext());
        com.ss.android.downloadlib.addownload.model.c.rg().df();
        com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), "misc_config", new com.ss.android.downloadlib.q.fw(), new com.ss.android.downloadlib.q.c(context), new q());
        com.ss.android.downloadlib.q.pt ptVar = new com.ss.android.downloadlib.q.pt();
        com.ss.android.socialbase.appdownloader.pt.bm().rg(ptVar);
        Downloader.getInstance(context).registerDownloadCacheSyncListener(ptVar);
        com.ss.android.socialbase.appdownloader.pt.bm().rg(new b());
        DownloadComponentManager.setDownloadEventListener(new com.ss.android.downloadlib.q.pp());
        com.ss.android.socialbase.appdownloader.pt.bm().rg(com.ss.android.downloadlib.pt.q.rg());
    }

    public com.ss.android.download.api.rg rg() {
        return this.df;
    }

    public com.ss.android.download.api.rg rg(String str) {
        com.ss.android.download.api.config.c cVarDf = c.rg().df();
        if (cVarDf != null && cVarDf.rg(str)) {
            return cVarDf.df(str);
        }
        return this.df;
    }

    public long df() {
        return this.c;
    }

    public void q() {
        this.c = System.currentTimeMillis();
    }

    public com.ss.android.downloadad.api.rg pt() {
        return this.pt;
    }

    public com.ss.android.downloadad.api.df pp() {
        if (this.pp == null) {
            this.pp = df.rg();
        }
        return this.pp;
    }

    private fw ux() {
        return this.q;
    }

    public void rg(final Context context, final int i, final DownloadStatusChangeListener downloadStatusChangeListener, final DownloadModel downloadModel) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(context, i, downloadStatusChangeListener, downloadModel);
            }
        });
    }

    public void rg(final String str, final long j, final int i, final DownloadEventConfig downloadEventConfig, final DownloadController downloadController, final OnItemClickListener onItemClickListener, final IDownloadButtonClickListener iDownloadButtonClickListener) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(str, j, i, downloadEventConfig, downloadController, onItemClickListener, iDownloadButtonClickListener);
            }
        });
    }

    public void rg(final String str, final long j, final int i, final DownloadEventConfig downloadEventConfig, final DownloadController downloadController) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(str, j, i, downloadEventConfig, downloadController);
            }
        });
    }

    public void rg(final String str, final long j, final int i, final DownloadEventConfig downloadEventConfig, final DownloadController downloadController, final IDownloadButtonClickListener iDownloadButtonClickListener) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(str, j, i, downloadEventConfig, downloadController, iDownloadButtonClickListener);
            }
        });
    }

    public void rg(final String str, final int i) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(str, i);
            }
        });
    }

    public void rg(final String str, final boolean z) {
        com.ss.android.downloadlib.exception.df.rg(new Runnable() {
            @Override
            public void run() {
                ux.this.ux().rg(str, z);
            }
        });
    }

    public void rg(com.ss.android.download.api.download.rg.rg rgVar) {
        ux().rg(rgVar);
    }

    public String c() {
        return bm.oh();
    }

    public void fw() {
        pt.rg().pp();
    }

    public DownloadInfo df(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext(), str);
    }
}
