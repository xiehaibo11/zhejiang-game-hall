package com.ss.android.downloadlib;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.OnItemClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.lang.ref.SoftReference;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class fw {
    private static volatile fw rg;
    private long c;
    private final List<com.ss.android.downloadlib.addownload.c> q = new CopyOnWriteArrayList();
    private final Map<String, com.ss.android.downloadlib.addownload.c> pt = new ConcurrentHashMap();
    private final CopyOnWriteArrayList<Object> pp = new CopyOnWriteArrayList<>();
    private final Handler df = new Handler(Looper.getMainLooper());

    private fw() {
    }

    public static fw rg() {
        if (rg == null) {
            synchronized (fw.class) {
                if (rg == null) {
                    rg = new fw();
                }
            }
        }
        return rg;
    }

    public void rg(Context context, int i, DownloadStatusChangeListener downloadStatusChangeListener, DownloadModel downloadModel) {
        if (downloadModel == null || TextUtils.isEmpty(downloadModel.getDownloadUrl())) {
            return;
        }
        com.ss.android.downloadlib.addownload.c cVar = this.pt.get(downloadModel.getDownloadUrl());
        if (cVar != null) {
            cVar.df(context).df(i, downloadStatusChangeListener).df(downloadModel).rg();
        } else if (!this.q.isEmpty()) {
            df(context, i, downloadStatusChangeListener, downloadModel);
        } else {
            q(context, i, downloadStatusChangeListener, downloadModel);
        }
    }

    public com.ss.android.downloadlib.addownload.pp rg(String str) {
        Map<String, com.ss.android.downloadlib.addownload.c> map = this.pt;
        if (map != null && map.size() != 0 && !TextUtils.isEmpty(str)) {
            com.ss.android.downloadlib.addownload.c cVar = this.pt.get(str);
            if (cVar instanceof com.ss.android.downloadlib.addownload.pp) {
                return (com.ss.android.downloadlib.addownload.pp) cVar;
            }
        }
        return null;
    }

    private synchronized void df(Context context, int i, DownloadStatusChangeListener downloadStatusChangeListener, DownloadModel downloadModel) {
        if (this.q.size() <= 0) {
            q(context, i, downloadStatusChangeListener, downloadModel);
        } else {
            com.ss.android.downloadlib.addownload.c cVarRemove = this.q.remove(0);
            cVarRemove.df(context).df(i, downloadStatusChangeListener).df(downloadModel).rg();
            this.pt.put(downloadModel.getDownloadUrl(), cVarRemove);
        }
    }

    private void q(Context context, int i, DownloadStatusChangeListener downloadStatusChangeListener, DownloadModel downloadModel) {
        if (downloadModel == null) {
            return;
        }
        com.ss.android.downloadlib.addownload.pp ppVar = new com.ss.android.downloadlib.addownload.pp();
        ppVar.df(context).df(i, downloadStatusChangeListener).df(downloadModel).rg();
        this.pt.put(downloadModel.getDownloadUrl(), ppVar);
    }

    public void rg(String str, int i) {
        com.ss.android.downloadlib.addownload.c cVar;
        if (TextUtils.isEmpty(str) || (cVar = this.pt.get(str)) == null) {
            return;
        }
        if (cVar.rg(i)) {
            this.q.add(cVar);
            this.pt.remove(str);
        }
        q();
    }

    public void rg(String str, boolean z) {
        com.ss.android.downloadlib.addownload.c cVar;
        if (TextUtils.isEmpty(str) || (cVar = this.pt.get(str)) == null) {
            return;
        }
        cVar.rg(z);
    }

    public void rg(String str, long j, int i, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        rg(str, j, i, downloadEventConfig, downloadController, (OnItemClickListener) null, null);
    }

    public void rg(String str, long j, int i, DownloadEventConfig downloadEventConfig, DownloadController downloadController, IDownloadButtonClickListener iDownloadButtonClickListener) {
        rg(str, j, i, downloadEventConfig, downloadController, (OnItemClickListener) null, iDownloadButtonClickListener);
    }

    public void rg(String str, long j, int i, DownloadEventConfig downloadEventConfig, DownloadController downloadController, OnItemClickListener onItemClickListener, IDownloadButtonClickListener iDownloadButtonClickListener) {
        com.ss.android.downloadlib.addownload.c cVar;
        if (TextUtils.isEmpty(str) || (cVar = this.pt.get(str)) == null) {
            return;
        }
        cVar.rg(j).df(downloadEventConfig).df(downloadController).rg(onItemClickListener).rg(iDownloadButtonClickListener).df(i);
    }

    public void rg(com.ss.android.download.api.download.rg.rg rgVar) {
        if (rgVar != null) {
            if (DownloadSetting.obtainGlobal().optBugFix("fix_listener_oom", false)) {
                this.pp.add(new SoftReference(rgVar));
            } else {
                this.pp.add(rgVar);
            }
        }
    }

    private void q() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.c < 300000) {
            return;
        }
        this.c = jCurrentTimeMillis;
        if (this.q.isEmpty()) {
            return;
        }
        pt();
    }

    private void pt() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        ArrayList arrayList = new ArrayList();
        for (com.ss.android.downloadlib.addownload.c cVar : this.q) {
            if (!cVar.df() && jCurrentTimeMillis - cVar.pt() > 300000) {
                cVar.ux();
                arrayList.add(cVar);
            }
        }
        if (arrayList.isEmpty()) {
            return;
        }
        this.q.removeAll(arrayList);
    }

    public void rg(final DownloadModel downloadModel, final DownloadController downloadController, final DownloadEventConfig downloadEventConfig) {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                for (Object obj : fw.this.pp) {
                    if (obj instanceof com.ss.android.download.api.download.rg.rg) {
                        ((com.ss.android.download.api.download.rg.rg) obj).rg(downloadModel, downloadController, downloadEventConfig);
                    } else if (obj instanceof SoftReference) {
                        SoftReference softReference = (SoftReference) obj;
                        if (softReference.get() instanceof com.ss.android.download.api.download.rg.rg) {
                            ((com.ss.android.download.api.download.rg.rg) softReference.get()).rg(downloadModel, downloadController, downloadEventConfig);
                        }
                    }
                }
            }
        });
    }

    public void rg(final DownloadInfo downloadInfo, final BaseException baseException, final String str) {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                for (Object obj : fw.this.pp) {
                    if (obj instanceof com.ss.android.download.api.download.rg.rg) {
                        ((com.ss.android.download.api.download.rg.rg) obj).rg(downloadInfo, baseException, str);
                    } else if (obj instanceof SoftReference) {
                        SoftReference softReference = (SoftReference) obj;
                        if (softReference.get() instanceof com.ss.android.download.api.download.rg.rg) {
                            ((com.ss.android.download.api.download.rg.rg) softReference.get()).rg(downloadInfo, baseException, str);
                        }
                    }
                }
            }
        });
    }

    public void rg(final DownloadInfo downloadInfo, final String str) {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                for (Object obj : fw.this.pp) {
                    if (obj instanceof com.ss.android.download.api.download.rg.rg) {
                        ((com.ss.android.download.api.download.rg.rg) obj).rg(downloadInfo, str);
                    } else if (obj instanceof SoftReference) {
                        SoftReference softReference = (SoftReference) obj;
                        if (softReference.get() instanceof com.ss.android.download.api.download.rg.rg) {
                            ((com.ss.android.download.api.download.rg.rg) softReference.get()).rg(downloadInfo, str);
                        }
                    }
                }
            }
        });
    }

    public void df(final DownloadInfo downloadInfo, final String str) {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                for (Object obj : fw.this.pp) {
                    if (obj instanceof com.ss.android.download.api.download.rg.rg) {
                        ((com.ss.android.download.api.download.rg.rg) obj).df(downloadInfo, str);
                    } else if (obj instanceof SoftReference) {
                        SoftReference softReference = (SoftReference) obj;
                        if (softReference.get() instanceof com.ss.android.download.api.download.rg.rg) {
                            ((com.ss.android.download.api.download.rg.rg) softReference.get()).df(downloadInfo, str);
                        }
                    }
                }
            }
        });
    }

    public void rg(final DownloadInfo downloadInfo) {
        this.df.post(new Runnable() {
            @Override
            public void run() {
                for (Object obj : fw.this.pp) {
                    if (obj instanceof com.ss.android.download.api.download.rg.rg) {
                        ((com.ss.android.download.api.download.rg.rg) obj).rg(downloadInfo);
                    } else if (obj instanceof SoftReference) {
                        SoftReference softReference = (SoftReference) obj;
                        if (softReference.get() instanceof com.ss.android.download.api.download.rg.rg) {
                            ((com.ss.android.download.api.download.rg.rg) softReference.get()).rg(downloadInfo);
                        }
                    }
                }
            }
        });
    }

    public Handler df() {
        return this.df;
    }
}
