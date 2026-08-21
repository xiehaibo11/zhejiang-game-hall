package com.kwad.sdk;

import android.content.Context;
import com.kwad.framework.filedownloader.f.c;
import com.kwad.framework.filedownloader.r;
import com.kwad.framework.filedownloader.services.c;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.k;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.av;
import java.io.File;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class c {
    private com.kwad.sdk.a agN;
    private d agP;
    private Context mContext;
    private final Map<Integer, DownloadTask> agL = new ConcurrentHashMap();
    private final Map<String, Integer> agM = new ConcurrentHashMap();
    private boolean agO = false;

    static final class a {
        private static final c agR = new c();
    }

    private void a(int i, DownloadTask.DownloadRequest downloadRequest) {
        DownloadTask downloadTask = this.agL.get(Integer.valueOf(i));
        if (downloadTask != null) {
            downloadTask.resume(downloadRequest);
        }
    }

    private void a(int i, com.kwad.sdk.a... aVarArr) {
        DownloadTask downloadTask = this.agL.get(Integer.valueOf(i));
        if (downloadTask != null) {
            for (int i2 = 0; i2 < 2; i2++) {
                com.kwad.sdk.a aVar = aVarArr[i2];
                if (aVar != null) {
                    aVar.setId(i);
                    downloadTask.addListener(aVar);
                }
            }
        }
    }

    private void bM(int i) {
        DownloadTask downloadTask = this.agL.get(Integer.valueOf(i));
        if (downloadTask != null) {
            downloadTask.clearListener();
        }
    }

    private void h(DownloadTask downloadTask) {
        this.agL.remove(Integer.valueOf(downloadTask.getId()));
        this.agM.remove(downloadTask.getUrl());
    }

    public static c wP() {
        return a.agR;
    }

    public static boolean wS() {
        try {
            Class.forName("com.kwad.sdk.api.proxy.app.BaseFragmentActivity.RequestInstallPermissionActivity");
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    private void wT() {
        k.a aVar;
        try {
            aVar = new k.a(true);
        } catch (Throwable th) {
            th.printStackTrace();
            aVar = null;
        }
        if (aVar != null) {
            com.kwad.framework.filedownloader.download.b.up().b(new c.b().bC(Integer.MAX_VALUE).a(aVar));
            this.agO = true;
        }
    }

    private static void wU() {
        k.a aVar;
        try {
            aVar = new k.a(false);
        } catch (Throwable th) {
            th.printStackTrace();
            aVar = null;
        }
        if (aVar != null) {
            com.kwad.framework.filedownloader.download.b.up().b(new c.b().bC(Integer.MAX_VALUE).a(aVar));
        }
    }

    public final int a(DownloadTask.DownloadRequest downloadRequest, com.kwad.sdk.a aVar) {
        DownloadTask downloadTask = new DownloadTask(downloadRequest);
        if (downloadRequest.getDownloadUrl().contains("downali.game.uc.cn")) {
            wT();
        } else if (this.agO) {
            wU();
        }
        if (this.agL.get(Integer.valueOf(downloadTask.getId())) != null) {
            a(downloadTask.getId(), downloadRequest);
            bM(downloadTask.getId());
        } else {
            this.agL.put(Integer.valueOf(downloadTask.getId()), downloadTask);
            this.agM.put(downloadTask.getUrl(), Integer.valueOf(downloadTask.getId()));
            downloadTask.submit();
        }
        a(downloadTask.getId(), null, this.agN);
        return downloadTask.getId();
    }

    public final void a(com.kwad.sdk.a aVar) {
        this.agN = aVar;
    }

    public final DownloadTask bL(int i) {
        return this.agL.get(Integer.valueOf(i));
    }

    public final void bN(int i) {
        DownloadTask downloadTaskBL = bL(i);
        if (downloadTaskBL == null) {
            return;
        }
        if (downloadTaskBL.isUserPause()) {
            resume(i);
        } else {
            pause(i);
        }
    }

    public final void cancel(int i) {
        DownloadTask downloadTask = this.agL.get(Integer.valueOf(i));
        if (downloadTask != null) {
            downloadTask.cancel();
            h(downloadTask);
        }
    }

    public final void g(DownloadTask downloadTask) {
        if (ak.an(this.mContext, downloadTask.getTargetFilePath())) {
            com.kwad.sdk.core.download.c.Aw().cN(ad.bp(downloadTask.getUrl()));
        }
    }

    public final Context getContext() {
        return this.mContext;
    }

    public final void init(Context context) {
        this.mContext = context;
        r.a(context, new c.b().bC(Integer.MAX_VALUE).a(new c.a() {
            @Override
            public final c.b uv() {
                try {
                    k.a aVar = new k.a(false);
                    aVar.aZ("");
                    return aVar;
                } catch (Throwable unused) {
                    return null;
                }
            }
        }));
    }

    public final void pause(int i) {
        DownloadTask downloadTask = this.agL.get(Integer.valueOf(i));
        if (downloadTask != null) {
            downloadTask.userPause();
        }
    }

    public final void resume(int i) {
        a(i, (DownloadTask.DownloadRequest) null);
    }

    public final File wQ() {
        return av.cK(this.mContext);
    }

    public final d wR() {
        if (this.agP == null) {
            this.agP = new com.kwad.sdk.core.download.b.a();
        }
        return this.agP;
    }

    public final boolean wV() {
        Iterator<Map.Entry<Integer, DownloadTask>> it = this.agL.entrySet().iterator();
        while (true) {
            boolean z = false;
            while (it.hasNext()) {
                DownloadTask value = it.next().getValue();
                if (value != null) {
                    int status = value.getStatus();
                    if (status == -2 || status == 1 || status == 2 || status == 3 || status == 5 || status == 6 || status == 10 || status == 11 || Math.abs(value.getStatusUpdateTime() - System.currentTimeMillis()) <= 120000) {
                        break;
                    }
                    z = true;
                }
            }
            return z;
        }
    }
}
