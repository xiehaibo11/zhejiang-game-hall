package com.kwad.sdk.l.a;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class a {
    private final List<b> aGy = new ArrayList();

    public final void addBackPressable(b bVar) {
        if (bVar != null) {
            this.aGy.add(bVar);
        }
    }

    public final void addBackPressable(b bVar, int i) {
        if (bVar != null) {
            this.aGy.add(i, bVar);
        }
    }

    public final boolean bP() {
        Iterator<b> it = this.aGy.iterator();
        while (it.hasNext()) {
            if (it.next().bP()) {
                return true;
            }
        }
        return false;
    }

    public final void removeBackPressable(b bVar) {
        if (bVar != null) {
            this.aGy.remove(bVar);
        }
    }
}
