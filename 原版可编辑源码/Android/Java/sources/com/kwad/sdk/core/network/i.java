package com.kwad.sdk.core.network;

import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class i {
    private static volatile i apf;
    private List<a> ape = new CopyOnWriteArrayList();

    public interface a {
        void a(g gVar, int i);
    }

    private i() {
    }

    public static i Bh() {
        if (apf == null) {
            synchronized (i.class) {
                if (apf == null) {
                    apf = new i();
                }
            }
        }
        return apf;
    }

    public final void a(a aVar) {
        this.ape.add(aVar);
    }

    final void b(g gVar, int i) {
        Iterator<a> it = this.ape.iterator();
        while (it.hasNext()) {
            it.next().a(gVar, i);
        }
    }
}
