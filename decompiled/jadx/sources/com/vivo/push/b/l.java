package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public final class l extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7883a;
    private int b;

    public l() {
        super(2016);
        this.f7883a = -1;
        this.b = -1;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("key_dispatch_environment", this.f7883a);
        aVar.a("key_dispatch_area", this.b);
    }

    public final int d() {
        return this.f7883a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7883a = aVar.b("key_dispatch_environment", 1);
        this.b = aVar.b("key_dispatch_area", 1);
    }

    public final int e() {
        return this.b;
    }
}
