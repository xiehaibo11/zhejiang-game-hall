package com.kwad.framework.filedownloader.message;

import com.kwad.framework.filedownloader.message.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes2.dex */
public final class g {
    private final e.b adP;
    private final List<a> adR = new ArrayList();

    public class a {
        private final List<Integer> adS = new ArrayList();
        private final Executor adT;

        public a(int i) {
            this.adT = com.kwad.framework.filedownloader.f.b.j(1, "Flow-" + i);
        }

        public final void bw(int i) {
            this.adS.add(Integer.valueOf(i));
        }

        public final void u(final MessageSnapshot messageSnapshot) {
            this.adT.execute(new Runnable() { // from class: com.kwad.framework.filedownloader.message.g.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    g.this.adP.r(messageSnapshot);
                    try {
                        a.this.adS.remove(Integer.valueOf(messageSnapshot.getId()));
                    } catch (Exception unused) {
                    }
                }
            });
        }
    }

    g(int i, e.b bVar) {
        this.adP = bVar;
        for (int i2 = 0; i2 < 5; i2++) {
            this.adR.add(new a(i2));
        }
    }

    public final void u(MessageSnapshot messageSnapshot) {
        a aVar = null;
        try {
            synchronized (this.adR) {
                int id = messageSnapshot.getId();
                Iterator<a> it = this.adR.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    a next = it.next();
                    if (next.adS.contains(Integer.valueOf(id))) {
                        aVar = next;
                        break;
                    }
                }
                if (aVar == null) {
                    int size = 0;
                    Iterator<a> it2 = this.adR.iterator();
                    while (true) {
                        if (!it2.hasNext()) {
                            break;
                        }
                        a next2 = it2.next();
                        if (next2.adS.size() <= 0) {
                            aVar = next2;
                            break;
                        } else if (size == 0 || next2.adS.size() < size) {
                            size = next2.adS.size();
                            aVar = next2;
                        }
                    }
                }
                if (aVar != null) {
                    aVar.bw(id);
                }
            }
        } finally {
            if (aVar != null) {
                aVar.u(messageSnapshot);
            }
        }
    }
}
