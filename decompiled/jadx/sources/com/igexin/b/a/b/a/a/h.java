package com.igexin.b.a.b.a.a;

/* JADX INFO: loaded from: classes2.dex */
class h implements com.igexin.b.a.b.a.a.a.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f2434a;

    h(f fVar) {
        this.f2434a = fVar;
    }

    @Override // com.igexin.b.a.b.a.a.a.a
    public void a(com.igexin.b.a.b.e eVar) {
        this.f2434a.n.sendEmptyMessage(q.INTERRUPT_SUCCESS.ordinal());
    }

    @Override // com.igexin.b.a.b.a.a.a.b
    public void a(Exception exc) {
        com.igexin.b.a.c.b.a("GS-M|r ex = " + exc.toString(), new Object[0]);
        if (exc.getMessage() != null && exc.getMessage().equals("end of stream")) {
            com.igexin.push.d.b.a().d();
        }
        this.f2434a.i();
    }
}
