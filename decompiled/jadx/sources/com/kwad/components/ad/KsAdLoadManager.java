package com.kwad.components.ad;

import com.kwad.components.ad.adbit.c;
import com.kwad.components.core.c.d;
import com.kwad.components.core.c.f;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class KsAdLoadManager {

    enum Holder {
        INSTANCE;

        private final KsAdLoadManager mInstance = new KsAdLoadManager(0);

        Holder() {
        }
    }

    private KsAdLoadManager() {
    }

    /* synthetic */ KsAdLoadManager(byte b) {
        this();
    }

    public static KsAdLoadManager M() {
        return Holder.INSTANCE.mInstance;
    }

    public static void a(com.kwad.components.core.p.a.a aVar) {
        if (c.b(aVar)) {
            return;
        }
        d.mj().c(aVar);
    }

    public final synchronized <T> void a(T t) {
        f.mu().add(t);
    }

    public final synchronized <T> void b(List<T> list) {
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            f.mu().add(it.next());
        }
    }
}
