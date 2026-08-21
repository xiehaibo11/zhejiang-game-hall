package com.vivo.push.b;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
public final class m extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ArrayList<String> f7884a;

    public m() {
        super(8);
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("tags_list", this.f7884a);
    }

    public final ArrayList<String> d() {
        return this.f7884a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7884a = aVar.c("tags_list");
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnListTagCommand";
    }
}
