package com.kwad.components.ad.h;

import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private final AtomicBoolean ol;
    private final List<com.kwad.components.ad.b.a.b> om;

    static class a {
        private static final e on = new e(0);
    }

    private e() {
        this.ol = new AtomicBoolean();
        this.om = new CopyOnWriteArrayList();
    }

    /* synthetic */ e(byte b) {
        this();
    }

    public static e fn() {
        return a.on;
    }

    public final boolean S() {
        return this.ol.get();
    }

    public final void a(com.kwad.components.ad.b.a.b bVar) {
        if (bVar != null) {
            this.om.add(bVar);
        }
    }

    public final void b(com.kwad.components.ad.b.a.b bVar) {
        if (bVar != null) {
            this.om.remove(bVar);
        }
    }

    public final void fj() {
        this.ol.set(true);
        Iterator<com.kwad.components.ad.b.a.b> it = this.om.iterator();
        while (it.hasNext()) {
            it.next().T();
        }
    }

    public final void fl() {
        this.ol.set(false);
        Iterator<com.kwad.components.ad.b.a.b> it = this.om.iterator();
        while (it.hasNext()) {
            it.next().U();
        }
    }
}
