package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class h {
    private final ArrayList<a.a> aaX;

    static final class a {
        private static final h aaY = new h(0);
    }

    private h() {
        this.aaX = new ArrayList<>();
    }

    h(byte b) {
        this();
    }

    public static h tD() {
        return a.aaY;
    }

    final boolean a(a.a aVar) {
        return this.aaX.isEmpty() || !this.aaX.contains(aVar);
    }

    public final boolean a(a.a aVar, MessageSnapshot messageSnapshot) {
        boolean zRemove;
        byte bSX = messageSnapshot.sX();
        synchronized (this.aaX) {
            zRemove = this.aaX.remove(aVar);
        }
        if (com.kwad.framework.filedownloader.f.d.aeI && this.aaX.size() == 0) {
            com.kwad.framework.filedownloader.f.d.e(this, "remove %s left %d %d", aVar, Byte.valueOf(bSX), Integer.valueOf(this.aaX.size()));
        }
        if (zRemove) {
            t tVarTv = aVar.tg().tv();
            if (bSX == -4) {
                tVarTv.l(messageSnapshot);
            } else if (bSX == -3) {
                tVarTv.j(com.kwad.framework.filedownloader.message.f.t(messageSnapshot));
            } else if (bSX == -2) {
                tVarTv.n(messageSnapshot);
            } else if (bSX == -1) {
                tVarTv.m(messageSnapshot);
            }
        } else {
            com.kwad.framework.filedownloader.f.d.a(this, "remove error, not exist: %s %d", aVar, Byte.valueOf(bSX));
        }
        return zRemove;
    }

    final int aU(int i) {
        int i2;
        synchronized (this.aaX) {
            Iterator<a.a> it = this.aaX.iterator();
            i2 = 0;
            while (it.hasNext()) {
                if (it.next().aT(i)) {
                    i2++;
                }
            }
        }
        return i2;
    }

    final List<a.a> aV(int i) {
        byte bSX;
        ArrayList arrayList = new ArrayList();
        synchronized (this.aaX) {
            for (a.a aVar : this.aaX) {
                if (aVar.aT(i) && !aVar.isOver() && (bSX = aVar.tf().sX()) != 0 && bSX != 10) {
                    arrayList.add(aVar);
                }
            }
        }
        return arrayList;
    }

    final List<a.a> aW(int i) {
        ArrayList arrayList = new ArrayList();
        synchronized (this.aaX) {
            for (a.a aVar : this.aaX) {
                if (aVar.aT(i) && !aVar.isOver()) {
                    arrayList.add(aVar);
                }
            }
        }
        return arrayList;
    }

    final void b(a.a aVar) {
        if (!aVar.tf().sQ()) {
            aVar.ti();
        }
        if (aVar.tg().tv().tI()) {
            c(aVar);
        }
    }

    final void c(a.a aVar) {
        if (aVar.tj()) {
            return;
        }
        synchronized (this.aaX) {
            if (this.aaX.contains(aVar)) {
                com.kwad.framework.filedownloader.f.d.d(this, "already has %s", aVar);
            } else {
                aVar.tk();
                this.aaX.add(aVar);
                if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.e(this, "add list in all %s %d %d", aVar, Byte.valueOf(aVar.tf().sX()), Integer.valueOf(this.aaX.size()));
                }
            }
        }
    }

    final void l(List<a.a> list) {
        synchronized (this.aaX) {
            for (a.a aVar : this.aaX) {
                if (!list.contains(aVar)) {
                    list.add(aVar);
                }
            }
            this.aaX.clear();
        }
    }

    final int size() {
        return this.aaX.size();
    }
}
