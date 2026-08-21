package com.igexin.b.a.b.a.a;

/* JADX INFO: loaded from: classes2.dex */
class i implements com.igexin.b.a.b.a.a.a.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f2435a;

    i(f fVar) {
        this.f2435a = fVar;
    }

    @Override // com.igexin.b.a.b.a.a.a.c
    public void a(m mVar) {
        if (com.igexin.push.util.j.b()) {
            return;
        }
        this.f2435a.b(mVar);
    }

    @Override // com.igexin.b.a.b.a.a.a.a
    public void a(com.igexin.b.a.b.e eVar) {
        this.f2435a.n.sendEmptyMessage(q.INTERRUPT_SUCCESS.ordinal());
    }

    @Override // com.igexin.b.a.b.a.a.a.c
    public void a(Exception exc) {
        com.igexin.b.a.c.b.a("GS-M|w ex = " + exc.toString(), new Object[0]);
        this.f2435a.i();
    }
}
