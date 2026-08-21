package com.kwad.components.core.internal.api;

import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private List<b> KV = new CopyOnWriteArrayList();
    private boolean KW = false;
    private boolean KX = false;

    public final void a(b bVar) {
        if (bVar == null) {
            return;
        }
        this.KV.add(bVar);
    }

    public final void b(b bVar) {
        if (bVar == null) {
            return;
        }
        this.KV.remove(bVar);
    }

    public final void h(a aVar) {
        com.kwad.sdk.core.e.c.d("KsAdListenerHolder", "notifyAdEnter: " + aVar + ", hadNotifiedEnter: " + this.KX);
        if (this.KX) {
            return;
        }
        Iterator<b> it = this.KV.iterator();
        while (it.hasNext()) {
            it.next().c(aVar);
        }
        this.KX = true;
    }

    public final void i(a aVar) {
        com.kwad.sdk.core.e.c.d("KsAdListenerHolder", "notifyAdExit: " + aVar + ", hadNotifiedExit: " + this.KW);
        if (this.KW) {
            return;
        }
        Iterator<b> it = this.KV.iterator();
        while (it.hasNext()) {
            it.next().d(aVar);
        }
        this.KW = true;
    }
}
