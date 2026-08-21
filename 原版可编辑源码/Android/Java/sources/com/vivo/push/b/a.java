package com.vivo.push.b;

import java.util.ArrayList;

public final class a extends c {
    private ArrayList<String> a;

    public a(boolean z, String str, ArrayList<String> arrayList) {
        super(z ? 2002 : 2003, str);
        this.a = arrayList;
    }

    @Override
    public final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("tags", this.a);
    }

    @Override
    public final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.c("tags");
    }

    @Override
    public final String toString() {
        return "AliasCommand:" + b();
    }
}
