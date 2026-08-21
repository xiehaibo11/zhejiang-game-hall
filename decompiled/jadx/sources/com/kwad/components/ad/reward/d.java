package com.kwad.components.ad.reward;

import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private final Set<com.kwad.components.ad.reward.e.k> ow;

    static class a {
        private static final d oz = new d(0);
    }

    private d() {
        this.ow = new HashSet();
    }

    /* synthetic */ d(byte b) {
        this();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(com.kwad.components.core.webview.b.b.q qVar) {
        if (this.ow.size() == 0) {
            return;
        }
        Iterator<com.kwad.components.ad.reward.e.k> it = this.ow.iterator();
        while (it.hasNext()) {
            it.next().a(qVar);
        }
    }

    public static d fw() {
        return a.oz;
    }

    public final void a(com.kwad.components.ad.reward.e.k kVar) {
        if (kVar != null) {
            this.ow.add(kVar);
        }
    }

    public final void b(com.kwad.components.ad.reward.e.k kVar) {
        this.ow.remove(kVar);
    }

    public final void c(final com.kwad.components.core.webview.b.b.q qVar) {
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.d.1
            @Override // java.lang.Runnable
            public final void run() {
                d.this.b(qVar);
            }
        });
    }
}
