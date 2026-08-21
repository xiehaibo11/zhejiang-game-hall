package com.tkay.expressad.exoplayer;

/* JADX INFO: loaded from: classes3.dex */
final class e implements com.tkay.expressad.exoplayer.k.n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final com.tkay.expressad.exoplayer.k.z f6546a;
    private final a b;
    private y c;
    private com.tkay.expressad.exoplayer.k.n d;

    public interface a {
        void a(v vVar);
    }

    public e(a aVar, com.tkay.expressad.exoplayer.k.c cVar) {
        this.b = aVar;
        this.f6546a = new com.tkay.expressad.exoplayer.k.z(cVar);
    }

    public final void a() {
        this.f6546a.a();
    }

    public final void b() {
        this.f6546a.b();
    }

    public final void a(long j) {
        this.f6546a.a(j);
    }

    public final void a(y yVar) throws g {
        com.tkay.expressad.exoplayer.k.n nVar;
        com.tkay.expressad.exoplayer.k.n nVarC = yVar.c();
        if (nVarC == null || nVarC == (nVar = this.d)) {
            return;
        }
        if (nVar != null) {
            throw g.a(new IllegalStateException("Multiple renderer media clocks enabled."));
        }
        this.d = nVarC;
        this.c = yVar;
        nVarC.a(this.f6546a.e());
        f();
    }

    public final void b(y yVar) {
        if (yVar == this.c) {
            this.d = null;
            this.c = null;
        }
    }

    public final long c() {
        if (g()) {
            f();
            return this.d.d();
        }
        return this.f6546a.d();
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final long d() {
        if (g()) {
            return this.d.d();
        }
        return this.f6546a.d();
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v a(v vVar) {
        com.tkay.expressad.exoplayer.k.n nVar = this.d;
        if (nVar != null) {
            vVar = nVar.a(vVar);
        }
        this.f6546a.a(vVar);
        this.b.a(vVar);
        return vVar;
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v e() {
        com.tkay.expressad.exoplayer.k.n nVar = this.d;
        return nVar != null ? nVar.e() : this.f6546a.e();
    }

    private void f() {
        this.f6546a.a(this.d.d());
        v vVarE = this.d.e();
        if (vVarE.equals(this.f6546a.e())) {
            return;
        }
        this.f6546a.a(vVarE);
        this.b.a(vVarE);
    }

    private boolean g() {
        y yVar = this.c;
        if (yVar == null || yVar.v()) {
            return false;
        }
        return this.c.u() || !this.c.g();
    }
}
