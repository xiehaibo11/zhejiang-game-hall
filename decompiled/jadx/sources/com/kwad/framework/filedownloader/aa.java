package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.message.e;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class aa implements e.b {
    private static boolean a(List<a.InterfaceC0181a> list, MessageSnapshot messageSnapshot) {
        if (list.size() > 1 && messageSnapshot.sX() == -3) {
            Iterator<a.InterfaceC0181a> it = list.iterator();
            while (it.hasNext()) {
                if (it.next().tg().c(messageSnapshot)) {
                    return true;
                }
            }
        }
        Iterator<a.InterfaceC0181a> it2 = list.iterator();
        while (it2.hasNext()) {
            if (it2.next().tg().b(messageSnapshot)) {
                return true;
            }
        }
        if (-4 == messageSnapshot.sX()) {
            Iterator<a.InterfaceC0181a> it3 = list.iterator();
            while (it3.hasNext()) {
                if (it3.next().tg().d(messageSnapshot)) {
                    return true;
                }
            }
        }
        if (list.size() == 1) {
            return list.get(0).tg().a(messageSnapshot);
        }
        return false;
    }

    @Override // com.kwad.framework.filedownloader.message.e.b
    public final void r(MessageSnapshot messageSnapshot) {
        synchronized (Integer.toString(messageSnapshot.getId()).intern()) {
            List<a.InterfaceC0181a> listAV = h.tD().aV(messageSnapshot.getId());
            if (listAV.size() > 0) {
                a aVarTf = listAV.get(0).tf();
                if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.c(this, "~~~callback %s old[%s] new[%s] %d", Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(aVarTf.sX()), Byte.valueOf(messageSnapshot.sX()), Integer.valueOf(listAV.size()));
                }
                if (!a(listAV, messageSnapshot)) {
                    StringBuilder sb = new StringBuilder("The event isn't consumed, id:" + messageSnapshot.getId() + " status:" + ((int) messageSnapshot.sX()) + " task-count:" + listAV.size());
                    for (a.InterfaceC0181a interfaceC0181a : listAV) {
                        sb.append(" | ");
                        sb.append((int) interfaceC0181a.tf().sX());
                    }
                    com.kwad.framework.filedownloader.f.d.b(this, sb.toString(), new Object[0]);
                }
            } else {
                com.kwad.framework.filedownloader.f.d.b(this, "Receive the event %d, but there isn't any running task in the upper layer", Byte.valueOf(messageSnapshot.sX()));
            }
        }
    }
}
