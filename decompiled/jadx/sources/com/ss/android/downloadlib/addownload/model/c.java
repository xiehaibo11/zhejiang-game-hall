package com.ss.android.downloadlib.addownload.model;

import android.text.TextUtils;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class c {
    private final ConcurrentHashMap<Long, DownloadModel> df;
    private final ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> pp;
    private final ConcurrentHashMap<Long, DownloadController> pt;
    private final ConcurrentHashMap<Long, DownloadEventConfig> q;
    private volatile boolean rg;

    private static class rg {
        private static c rg = new c();
    }

    public static c rg() {
        return rg.rg;
    }

    private c() {
        this.rg = false;
        this.df = new ConcurrentHashMap<>();
        this.q = new ConcurrentHashMap<>();
        this.pt = new ConcurrentHashMap<>();
        this.pp = new ConcurrentHashMap<>();
    }

    public void df() {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.addownload.model.c.1
            @Override // java.lang.Runnable
            public void run() {
                if (c.this.rg) {
                    return;
                }
                synchronized (c.class) {
                    if (!c.this.rg) {
                        c.this.pp.putAll(ux.rg().df());
                        c.this.rg = true;
                    }
                }
            }
        }, true);
    }

    public void rg(DownloadModel downloadModel) {
        if (downloadModel != null) {
            this.df.put(Long.valueOf(downloadModel.getId()), downloadModel);
            if (downloadModel.getDeepLink() != null) {
                downloadModel.getDeepLink().setId(downloadModel.getId());
                downloadModel.getDeepLink().setPackageName(downloadModel.getPackageName());
            }
        }
    }

    public void rg(long j, DownloadEventConfig downloadEventConfig) {
        if (downloadEventConfig != null) {
            this.q.put(Long.valueOf(j), downloadEventConfig);
        }
    }

    public void rg(long j, DownloadController downloadController) {
        if (downloadController != null) {
            this.pt.put(Long.valueOf(j), downloadController);
        }
    }

    public synchronized void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return;
        }
        this.pp.put(Long.valueOf(dfVar.df()), dfVar);
        ux.rg().rg(dfVar);
    }

    public DownloadModel rg(long j) {
        return this.df.get(Long.valueOf(j));
    }

    public DownloadEventConfig df(long j) {
        return this.q.get(Long.valueOf(j));
    }

    public DownloadController q(long j) {
        return this.pt.get(Long.valueOf(j));
    }

    public com.ss.android.downloadad.api.rg.df pt(long j) {
        return this.pp.get(Long.valueOf(j));
    }

    public ConcurrentHashMap<Long, com.ss.android.downloadad.api.rg.df> q() {
        return this.pp;
    }

    public com.ss.android.downloadad.api.rg.df rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        for (com.ss.android.downloadad.api.rg.df dfVar : this.pp.values()) {
            if (dfVar != null && str.equals(dfVar.pp())) {
                return dfVar;
            }
        }
        return null;
    }

    public com.ss.android.downloadad.api.rg.df df(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        for (com.ss.android.downloadad.api.rg.df dfVar : this.pp.values()) {
            if (dfVar != null && str.equals(dfVar.rg())) {
                return dfVar;
            }
        }
        return null;
    }

    public com.ss.android.downloadad.api.rg.df rg(DownloadInfo downloadInfo) {
        if (downloadInfo == null) {
            return null;
        }
        for (com.ss.android.downloadad.api.rg.df dfVar : this.pp.values()) {
            if (dfVar != null && dfVar.qx() == downloadInfo.getId()) {
                return dfVar;
            }
        }
        if (!TextUtils.isEmpty(downloadInfo.getExtra())) {
            try {
                long jRg = b.rg(new JSONObject(downloadInfo.getExtra()), "extra");
                if (jRg != 0) {
                    for (com.ss.android.downloadad.api.rg.df dfVar2 : this.pp.values()) {
                        if (dfVar2 != null && dfVar2.df() == jRg) {
                            return dfVar2;
                        }
                    }
                    com.ss.android.downloadlib.exception.q.rg().rg("getNativeModelByInfo");
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        for (com.ss.android.downloadad.api.rg.df dfVar3 : this.pp.values()) {
            if (dfVar3 != null && TextUtils.equals(dfVar3.rg(), downloadInfo.getUrl())) {
                return dfVar3;
            }
        }
        return null;
    }

    public com.ss.android.downloadad.api.rg.df rg(int i) {
        for (com.ss.android.downloadad.api.rg.df dfVar : this.pp.values()) {
            if (dfVar != null && dfVar.qx() == i) {
                return dfVar;
            }
        }
        return null;
    }

    public pp pp(long j) {
        pp ppVar = new pp();
        ppVar.rg = j;
        ppVar.df = rg(j);
        ppVar.q = df(j);
        if (ppVar.q == null) {
            ppVar.q = new com.ss.android.download.api.download.q();
        }
        ppVar.pt = q(j);
        if (ppVar.pt == null) {
            ppVar.pt = new com.ss.android.download.api.download.df();
        }
        return ppVar;
    }

    public void c(long j) {
        this.df.remove(Long.valueOf(j));
        this.q.remove(Long.valueOf(j));
        this.pt.remove(Long.valueOf(j));
    }

    public Map<Long, com.ss.android.downloadad.api.rg.df> rg(String str, String str2) {
        HashMap map = new HashMap();
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            for (com.ss.android.downloadad.api.rg.df dfVar : this.pp.values()) {
                if (dfVar != null && TextUtils.equals(dfVar.rg(), str)) {
                    dfVar.df(str2);
                    map.put(Long.valueOf(dfVar.df()), dfVar);
                }
            }
        }
        return map;
    }

    public void df(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        for (DownloadModel downloadModel : this.df.values()) {
            if ((downloadModel instanceof AdDownloadModel) && TextUtils.equals(downloadModel.getDownloadUrl(), str)) {
                ((AdDownloadModel) downloadModel).setPackageName(str2);
            }
        }
    }

    public synchronized void rg(List<Long> list) {
        ArrayList arrayList = new ArrayList();
        Iterator<Long> it = list.iterator();
        while (it.hasNext()) {
            long jLongValue = it.next().longValue();
            arrayList.add(String.valueOf(jLongValue));
            this.pp.remove(Long.valueOf(jLongValue));
        }
        ux.rg().rg((List<String>) arrayList);
    }
}
