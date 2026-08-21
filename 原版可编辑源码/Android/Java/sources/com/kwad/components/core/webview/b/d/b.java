package com.kwad.components.core.webview.b.d;

import com.kwad.components.core.webview.b.e.e;
import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;

public final class b {
    private final Set<e> XF;

    static class a {
        private static final b XJ = new b(0);
    }

    private b() {
        this.XF = new CopyOnWriteArraySet();
    }

    b(byte b) {
        this();
    }

    private void aR(String str) {
        if (this.XF.size() == 0) {
            return;
        }
        Iterator it = new HashSet(this.XF).iterator();
        while (it.hasNext()) {
            ((e) it.next()).q(str);
        }
    }

    private void b(String str, long j, long j2, long j3) {
        if (this.XF.size() == 0) {
            return;
        }
        Iterator it = new HashSet(this.XF).iterator();
        while (it.hasNext()) {
            ((e) it.next()).a(str, j, j2, j3);
        }
    }

    public static b sf() {
        return a.XJ;
    }

    public final void a(e eVar) {
        if (eVar != null) {
            this.XF.add(eVar);
        }
    }

    public final void aS(final String str) {
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                b.this.aR(str);
            }
        });
    }

    public final void b(e eVar) {
        this.XF.remove(eVar);
    }

    public final void c(final String str, final long j, final long j2, final long j3) {
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                b.this.b(str, j, j2, j3);
            }
        });
    }

    public final void sg() {
        this.XF.clear();
    }
}
