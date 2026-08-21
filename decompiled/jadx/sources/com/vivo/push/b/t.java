package com.vivo.push.b;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class t extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ArrayList<String> f7890a;
    private ArrayList<String> b;

    public t(int i) {
        super(i);
        this.f7890a = null;
        this.b = null;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("content", this.f7890a);
        aVar.a("error_msg", this.b);
    }

    public final ArrayList<String> d() {
        return this.f7890a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7890a = aVar.c("content");
        this.b = aVar.c("error_msg");
    }

    public final List<String> e() {
        return this.b;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnSetTagsCommand";
    }
}
