package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class z extends e implements v {
    private final ArrayList<a.InterfaceC0181a> abD = new ArrayList<>();

    @Override // com.kwad.framework.filedownloader.v
    public final boolean d(a.InterfaceC0181a interfaceC0181a) {
        return !this.abD.isEmpty() && this.abD.contains(interfaceC0181a);
    }

    @Override // com.kwad.framework.filedownloader.v
    public final void e(a.InterfaceC0181a interfaceC0181a) {
        if (this.abD.isEmpty()) {
            return;
        }
        synchronized (this.abD) {
            this.abD.remove(interfaceC0181a);
        }
    }

    @Override // com.kwad.framework.filedownloader.v
    public final boolean f(a.InterfaceC0181a interfaceC0181a) {
        r.tW();
        if (!r.tY()) {
            synchronized (this.abD) {
                r.tW();
                if (!r.tY()) {
                    if (com.kwad.framework.filedownloader.f.d.aeI) {
                        com.kwad.framework.filedownloader.f.d.c(this, "Waiting for connecting with the downloader service... %d", Integer.valueOf(interfaceC0181a.tf().getId()));
                    }
                    n.tO().an(com.kwad.framework.filedownloader.f.c.vM());
                    if (!this.abD.contains(interfaceC0181a)) {
                        interfaceC0181a.free();
                        this.abD.add(interfaceC0181a);
                    }
                    return true;
                }
            }
        }
        e(interfaceC0181a);
        return false;
    }

    @Override // com.kwad.framework.filedownloader.e
    public final void ty() {
        w wVarTZ = r.tW().tZ();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "The downloader service is connected.", new Object[0]);
        }
        synchronized (this.abD) {
            List<a.InterfaceC0181a> list = (List) this.abD.clone();
            this.abD.clear();
            ArrayList arrayList = new ArrayList(wVarTZ.ud());
            for (a.InterfaceC0181a interfaceC0181a : list) {
                int iTh = interfaceC0181a.th();
                if (wVarTZ.bc(iTh)) {
                    interfaceC0181a.tf().sO().tn();
                    if (!arrayList.contains(Integer.valueOf(iTh))) {
                        arrayList.add(Integer.valueOf(iTh));
                    }
                } else {
                    interfaceC0181a.tl();
                }
            }
            wVarTZ.m(arrayList);
        }
    }

    @Override // com.kwad.framework.filedownloader.e
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
                Iterator<a.InterfaceC0181a> it = this.abD.iterator();
                while (it.hasNext()) {
                    it.next().free();
                }
                wVarTZ.uc();
            }
            r.tW().tX();
        }
    }
}
