package com.vivo.push.b;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
public final class a extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ArrayList<String> f7876a;

    public a(boolean z, String str, ArrayList<String> arrayList) {
        super(z ? 2002 : 2003, str);
        this.f7876a = arrayList;
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("tags", this.f7876a);
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7876a = aVar.c("tags");
    }

    @Override // com.vivo.push.b.c, com.vivo.push.o
    public final String toString() {
        return "AliasCommand:" + b();
    }
}
