package com.kwad.framework.filedownloader.services;

import android.util.SparseArray;
import com.kwad.framework.filedownloader.download.DownloadLaunchRunnable;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadPoolExecutor;

/* JADX INFO: loaded from: classes2.dex */
final class h {
    private int aeB;
    private ThreadPoolExecutor aez;
    private SparseArray<DownloadLaunchRunnable> aey = new SparseArray<>();
    private final String aeA = "Network";
    private int aeC = 0;

    h(int i) {
        this.aez = com.kwad.framework.filedownloader.f.b.j(i, "Network");
        this.aeB = i;
    }

    private synchronized void vG() {
        SparseArray<DownloadLaunchRunnable> sparseArray = new SparseArray<>();
        int size = this.aey.size();
        for (int i = 0; i < size; i++) {
            int iKeyAt = this.aey.keyAt(i);
            DownloadLaunchRunnable downloadLaunchRunnable = this.aey.get(iKeyAt);
            if (downloadLaunchRunnable.isAlive()) {
                sparseArray.put(iKeyAt, downloadLaunchRunnable);
            }
        }
        this.aey = sparseArray;
    }

    public final void a(DownloadLaunchRunnable downloadLaunchRunnable) {
        int i;
        downloadLaunchRunnable.uz();
        synchronized (this) {
            this.aey.put(downloadLaunchRunnable.getId(), downloadLaunchRunnable);
        }
        this.aez.execute(downloadLaunchRunnable);
        int i2 = this.aeC;
        if (i2 >= 600) {
            vG();
            i = 0;
        } else {
            i = i2 + 1;
        }
        this.aeC = i;
    }

    public final boolean bF(int i) {
        DownloadLaunchRunnable downloadLaunchRunnable = this.aey.get(i);
        return downloadLaunchRunnable != null && downloadLaunchRunnable.isAlive();
    }

    public final synchronized boolean bs(int i) {
        if (vH() > 0) {
            com.kwad.framework.filedownloader.f.d.d(this, "Can't change the max network thread count, because the  network thread pool isn't in IDLE, please try again after all running tasks are completed or invoking FileDownloader#pauseAll directly.", new Object[0]);
            return false;
        }
        int iBG = com.kwad.framework.filedownloader.f.e.bG(i);
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "change the max network thread count, from %d to %d", Integer.valueOf(this.aeB), Integer.valueOf(iBG));
        }
        List<Runnable> listShutdownNow = this.aez.shutdownNow();
        this.aez = com.kwad.framework.filedownloader.f.b.j(iBG, "Network");
        if (listShutdownNow.size() > 0) {
            com.kwad.framework.filedownloader.f.d.d(this, "recreate the network thread pool and discard %d tasks", Integer.valueOf(listShutdownNow.size()));
        }
        this.aeB = iBG;
        return true;
    }

    public final void cancel(int i) {
        vG();
        synchronized (this) {
            DownloadLaunchRunnable downloadLaunchRunnable = this.aey.get(i);
            if (downloadLaunchRunnable != null) {
                downloadLaunchRunnable.pause();
                boolean zRemove = this.aez.remove(downloadLaunchRunnable);
                if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.c(this, "successful cancel %d %B", Integer.valueOf(i), Boolean.valueOf(zRemove));
                }
            }
            this.aey.remove(i);
        }
    }

    public final int l(String str, int i) {
        if (str == null) {
            return 0;
        }
        int size = this.aey.size();
        for (int i2 = 0; i2 < size; i2++) {
            DownloadLaunchRunnable downloadLaunchRunnableValueAt = this.aey.valueAt(i2);
            if (downloadLaunchRunnableValueAt != null && downloadLaunchRunnableValueAt.isAlive() && downloadLaunchRunnableValueAt.getId() != i && str.equals(downloadLaunchRunnableValueAt.uE())) {
                return downloadLaunchRunnableValueAt.getId();
            }
        }
        return 0;
    }

    public final synchronized int vH() {
        vG();
        return this.aey.size();
    }

    public final synchronized List<Integer> vI() {
        ArrayList arrayList;
        vG();
        arrayList = new ArrayList();
        for (int i = 0; i < this.aey.size(); i++) {
            arrayList.add(Integer.valueOf(this.aey.get(this.aey.keyAt(i)).getId()));
        }
        return arrayList;
    }
}
