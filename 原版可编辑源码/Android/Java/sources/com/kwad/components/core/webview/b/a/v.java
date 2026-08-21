package com.kwad.components.core.webview.b.a;

import com.kwad.sdk.utils.bj;
import java.util.concurrent.CopyOnWriteArrayList;

public abstract class v implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c WJ;
    private CopyOnWriteArrayList<com.kwad.sdk.core.b> WK = new CopyOnWriteArrayList<>();

    @Override
    public void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.WJ = cVar;
        if (this.WK.size() > 0) {
            for (com.kwad.sdk.core.b bVar : this.WK) {
                b(bVar);
                this.WK.remove(bVar);
            }
        }
    }

    public final void b(final com.kwad.sdk.core.b bVar) {
        if (this.WJ != null) {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (v.this.WJ != null) {
                        v.this.WJ.a(bVar);
                    }
                }
            });
        } else {
            this.WK.add(bVar);
        }
    }

    @Override
    public void onDestroy() {
        this.WJ = null;
    }
}
