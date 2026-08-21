package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class h {
    private final ArrayList<a.InterfaceC0181a> aaX;

    static final class a {
        private static final h aaY = new h(0);
    }

    private h() {
        this.aaX = new ArrayList<>();
    }

    /* synthetic */ h(byte b) {
        this();
    }

    public static h tD() {
        return a.aaY;
    }

    final boolean a(a.InterfaceC0181a interfaceC0181a) {
        return this.aaX.isEmpty() || !this.aaX.contains(interfaceC0181a);
    }

    public final boolean a(a.InterfaceC0181a interfaceC0181a, MessageSnapshot messageSnapshot) {
        boolean zRemove;
        byte bSX = messageSnapshot.sX();
        synchronized (this.aaX) {
            zRemove = this.aaX.remove(interfaceC0181a);
        }
        if (com.kwad.framework.filedownloader.f.d.aeI && this.aaX.size() == 0) {
            com.kwad.framework.filedownloader.f.d.e(this, "remove %s left %d %d", interfaceC0181a, Byte.valueOf(bSX), Integer.valueOf(this.aaX.size()));
        }
        if (zRemove) {
            t tVarTv = interfaceC0181a.tg().tv();
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
            com.kwad.framework.filedownloader.f.d.a(this, "remove error, not exist: %s %d", interfaceC0181a, Byte.valueOf(bSX));
        }
        return zRemove;
    }

    final int aU(int i) {
        int i2;
        synchronized (this.aaX) {
            Iterator<a.InterfaceC0181a> it = this.aaX.iterator();
            i2 = 0;
            while (it.hasNext()) {
                if (it.next().aT(i)) {
                    i2++;
                }
            }
        }
        return i2;
    }

    final List<a.InterfaceC0181a> aV(int i) {
        byte bSX;
        ArrayList arrayList = new ArrayList();
        synchronized (this.aaX) {
            for (a.InterfaceC0181a interfaceC0181a : this.aaX) {
                if (interfaceC0181a.aT(i) && !interfaceC0181a.isOver() && (bSX = interfaceC0181a.tf().sX()) != 0 && bSX != 10) {
                    arrayList.add(interfaceC0181a);
                }
            }
        }
        return arrayList;
    }

    final List<a.InterfaceC0181a> aW(int i) {
        ArrayList arrayList = new ArrayList();
        synchronized (this.aaX) {
            for (a.InterfaceC0181a interfaceC0181a : this.aaX) {
                if (interfaceC0181a.aT(i) && !interfaceC0181a.isOver()) {
                    arrayList.add(interfaceC0181a);
                }
            }
        }
        return arrayList;
    }

    final void b(a.InterfaceC0181a interfaceC0181a) {
        if (!interfaceC0181a.tf().sQ()) {
            interfaceC0181a.ti();
        }
        if (interfaceC0181a.tg().tv().tI()) {
            c(interfaceC0181a);
        }
    }

    final void c(a.InterfaceC0181a interfaceC0181a) {
        if (interfaceC0181a.tj()) {
            return;
        }
        synchronized (this.aaX) {
            if (this.aaX.contains(interfaceC0181a)) {
                com.kwad.framework.filedownloader.f.d.d(this, "already has %s", interfaceC0181a);
            } else {
                interfaceC0181a.tk();
                this.aaX.add(interfaceC0181a);
                if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.e(this, "add list in all %s %d %d", interfaceC0181a, Byte.valueOf(interfaceC0181a.tf().sX()), Integer.valueOf(this.aaX.size()));
                }
            }
        }
    }

    final void l(List<a.InterfaceC0181a> list) {
        synchronized (this.aaX) {
            for (a.InterfaceC0181a interfaceC0181a : this.aaX) {
                if (!list.contains(interfaceC0181a)) {
                    list.add(interfaceC0181a);
                }
            }
            this.aaX.clear();
        }
    }

    final int size() {
        return this.aaX.size();
    }
}
