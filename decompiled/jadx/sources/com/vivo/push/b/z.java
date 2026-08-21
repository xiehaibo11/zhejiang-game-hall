package com.vivo.push.b;

import java.io.Serializable;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
public final class z extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ArrayList<String> f7896a;

    public z(boolean z, String str, ArrayList<String> arrayList) {
        super(z ? 2004 : 2005, str);
        this.f7896a = arrayList;
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("tags", (Serializable) this.f7896a);
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7896a = aVar.c("tags");
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final String toString() {
        return "TagCommand";
    }
}
