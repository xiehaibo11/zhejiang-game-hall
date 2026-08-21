package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class z extends e implements v {
    private final ArrayList<a.a> abD = new ArrayList<>();

    @Override
    public final boolean d(a.a aVar) {
        return !this.abD.isEmpty() && this.abD.contains(aVar);
    }

    @Override
    public final void e(a.a aVar) {
        if (this.abD.isEmpty()) {
            return;
        }
        synchronized (this.abD) {
            this.abD.remove(aVar);
        }
    }

    @Override
    public final boolean f(a.a aVar) {
        r.tW();
        if (!r.tY()) {
            synchronized (this.abD) {
                r.tW();
                if (!r.tY()) {
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                        com.kwad.framework.filedownloader.f.d.c(this, "Waiting for connecting with the downloader service... %d", Integer.valueOf(aVar.tf().getId()));
                    }
                    n.tO().an(com.kwad.framework.filedownloader.f.c.vM());
                    if (!this.abD.contains(aVar)) {
                        aVar.free();
                        this.abD.add(aVar);
                    }
                    return true;
                }
            }
        }
        e(aVar);
        return false;
    }

    @Override
    public final void ty() {
        w wVarTZ = r.tW().tZ();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "The downloader service is connected.", new Object[0]);
        }
        synchronized (this.abD) {
            List<a.a> list = (List) this.abD.clone();
            this.abD.clear();
            ArrayList arrayList = new ArrayList(wVarTZ.ud());
            for (a.a aVar : list) {
                int iTh = aVar.th();
                if (wVarTZ.bc(iTh)) {
                    aVar.tf().sO().tn();
                    if (!arrayList.contains(Integer.valueOf(iTh))) {
                        arrayList.add(Integer.valueOf(iTh));
                    }
                } else {
                    aVar.tl();
                }
            }
            wVarTZ.m(arrayList);
        }
    }

    @Override
    public final void tz() {
        if (tA() != DownloadServiceConnectChangedEvent.ConnectStatus.lost) {
            if (h.tD().size() > 0) {
                com.kwad.framework.filedownloader.f.d.d(this, "file download service has be unbound but the size of active tasks are not empty %d ", Integer.valueOf(h.tD().size()));
                return;
            }
            return;
        }
        w wVarTZ = r.tW().tZ();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "lost the connection to the file download service, and current active task size is %d", Integer.valueOf(h.tD().size()));
        }
        if (h.tD().size() > 0) {
            synchronized (this.abD) {
                h.tD().l(this.abD);
                Iterator<a.a> it = this.abD.iterator();
                while (it.hasNext()) {
                    it.next().free();
                }
                wVarTZ.uc();
            }
            r.tW().tX();
        }
    }
}
