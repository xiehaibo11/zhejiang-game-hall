package com.kwad.components.core.j;

import java.util.concurrent.CopyOnWriteArrayList;

public final class a {
    private CopyOnWriteArrayList<b> KY = new CopyOnWriteArrayList<>();
    private volatile boolean KZ;

    static final class a {
        private static final a La = new a();
    }

    public static class b {
        private final c Lb;
        public boolean Lc;

        public b(c cVar) {
            this.Lb = cVar;
        }
    }

    public interface c {
        void bi();
    }

    public static boolean b(b bVar) {
        if (bVar == null) {
            return true;
        }
        return bVar.Lc;
    }

    public static a oa() {
        return a.La;
    }

    public final void a(b bVar) {
        if (this.KY.contains(bVar)) {
            return;
        }
        if (!this.KZ) {
            this.KZ = true;
            bVar.Lc = true;
        }
        this.KY.add(bVar);
    }

    public final void c(b bVar) {
        if (bVar == null) {
            return;
        }
        if (bVar.Lc) {
            bVar.Lc = false;
            this.KZ = false;
        }
        this.KY.remove(bVar);
        if (this.KY.size() == 0 || this.KZ) {
            return;
        }
        this.KY.get(0).Lc = true;
        this.KZ = true;
        this.KY.get(0).Lb.bi();
    }
}
