package com.vivo.push.b;

import java.io.Serializable;
import java.util.ArrayList;

public final class z extends c {
    private ArrayList<String> a;

    public z(boolean z, String str, ArrayList<String> arrayList) {
        super(z ? 2004 : 2005, str);
        this.a = arrayList;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("tags", (Serializable) this.a);
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.c("tags");
    }

    @Override
    public final String toString() {
        return "TagCommand";
    }
}
