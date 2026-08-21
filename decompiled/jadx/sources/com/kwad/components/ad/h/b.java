package com.kwad.components.ad.h;

import com.kwad.components.core.n.h;
import com.kwad.components.core.n.i;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes2.dex */
public class b implements com.kwad.components.core.internal.api.b {
    private static final Object nN = new Object();
    private static volatile b nO;
    private Set<Integer> nP = new HashSet();
    private List<c> nQ = new ArrayList();
    private Map<com.kwad.components.core.internal.api.a, Object> nR = new WeakHashMap();
    private Map<com.kwad.components.core.n.c, Object> nS = new WeakHashMap();
    private i nT = new i() { // from class: com.kwad.components.ad.h.b.1
        @Override // com.kwad.components.core.n.i, com.kwad.sdk.core.c.c
        /* JADX INFO: renamed from: a */
        public final void c(com.kwad.components.core.n.c cVar) {
            super.c(cVar);
            b.this.nS.put(cVar, b.nN);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.kwad.components.core.n.i, com.kwad.sdk.core.c.c
        public final void b(com.kwad.components.core.n.c cVar) {
            super.b(cVar);
            b.this.nS.remove(cVar);
            if (b.this.nS.isEmpty()) {
                b.this.fb();
            }
        }
    };

    private b() {
        h.py().a(this.nT);
        this.nP.add(2);
        this.nP.add(3);
        this.nP.add(13);
        this.nP.add(6);
    }

    private void e(com.kwad.components.core.internal.api.a aVar) {
        this.nR.put(aVar, nN);
        if (g(aVar)) {
            c cVar = new c(aVar);
            cVar.fe();
            this.nQ.add(cVar);
        }
    }

    private void f(com.kwad.components.core.internal.api.a aVar) {
        this.nR.remove(aVar);
        Iterator<c> it = this.nQ.iterator();
        while (it.hasNext()) {
            it.next().d(aVar);
        }
        if (n(aVar.getAdTemplate())) {
            fb();
        }
    }

    public static b fa() {
        if (nO == null) {
            synchronized (b.class) {
                if (nO == null) {
                    nO = new b();
                }
            }
        }
        return nO;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void fb() {
        boolean zFc = fc();
        com.kwad.sdk.core.e.c.d("KsAdGlobalWatcher", "checkCurrentPage noSDKPage: " + zFc);
        if (zFc) {
            Iterator<c> it = this.nQ.iterator();
            while (it.hasNext()) {
                it.next().fg();
            }
        }
    }

    private static boolean g(com.kwad.components.core.internal.api.a aVar) {
        if (aVar.ae()) {
            return com.kwad.sdk.core.response.b.a.cD(com.kwad.sdk.core.response.b.d.cg(aVar.getAdTemplate()));
        }
        return false;
    }

    private boolean n(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return false;
        }
        return this.nP.contains(Integer.valueOf(adTemplate.adStyle));
    }

    public final void a(c cVar) {
        if (cVar != null) {
            this.nQ.remove(cVar);
        }
    }

    public final void a(com.kwad.components.core.internal.api.a aVar) {
        if (aVar != null) {
            aVar.a(this);
        }
    }

    public final void b(com.kwad.components.core.internal.api.a aVar) {
        if (aVar != null) {
            aVar.b(this);
        }
    }

    @Override // com.kwad.components.core.internal.api.b
    public final void c(com.kwad.components.core.internal.api.a aVar) {
        e(aVar);
    }

    @Override // com.kwad.components.core.internal.api.b
    public final void d(com.kwad.components.core.internal.api.a aVar) {
        f(aVar);
        b(aVar);
    }

    public final synchronized boolean fc() {
        Iterator<com.kwad.components.core.internal.api.a> it = this.nR.keySet().iterator();
        while (it.hasNext()) {
            if (n(it.next().getAdTemplate())) {
                return false;
            }
        }
        return this.nS.isEmpty();
    }
}
