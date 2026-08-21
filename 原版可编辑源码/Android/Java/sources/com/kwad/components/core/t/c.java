package com.kwad.components.core.t;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public final class c {
    private Set<b> Rk;

    static class a {
        private static c Rl = new c(0);
    }

    public interface b {
        void onPageClose();
    }

    private c() {
        this.Rk = new HashSet();
    }

    c(byte b2) {
        this();
    }

    public static c qk() {
        return a.Rl;
    }

    public final void a(b bVar) {
        this.Rk.add(bVar);
    }

    public final void b(b bVar) {
        this.Rk.remove(bVar);
    }

    public final void ql() {
        if (this.Rk.size() == 0) {
            return;
        }
        Iterator<b> it = this.Rk.iterator();
        while (it.hasNext()) {
            it.next().onPageClose();
        }
    }
}
