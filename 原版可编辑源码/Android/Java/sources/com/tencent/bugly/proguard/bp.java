package com.tencent.bugly.proguard;

import java.util.ArrayList;
import java.util.Collection;

public final class bp extends m implements Cloneable {
    static ArrayList<bo> b;
    public ArrayList<bo> a = null;

    @Override
    public final void a(StringBuilder sb, int i) {
    }

    @Override
    public final void a(l lVar) {
        lVar.a((Collection) this.a, 0);
    }

    @Override
    public final void a(k kVar) {
        if (b == null) {
            b = new ArrayList<>();
            b.add(new bo());
        }
        this.a = (ArrayList) kVar.a(b, 0, true);
    }
}
