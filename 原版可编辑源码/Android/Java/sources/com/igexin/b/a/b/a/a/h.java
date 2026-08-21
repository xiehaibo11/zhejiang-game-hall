package com.igexin.b.a.b.a.a;

class h implements com.igexin.b.a.b.a.a.a.b {
    final f a;

    h(f fVar) {
        this.a = fVar;
    }

    @Override
    public void a(com.igexin.b.a.b.e eVar) {
        this.a.n.sendEmptyMessage(q.f.ordinal());
    }

    @Override
    public void a(Exception exc) {
        com.igexin.b.a.c.b.a("GS-M|r ex = " + exc.toString(), new Object[0]);
        if (exc.getMessage() != null && exc.getMessage().equals("end of stream")) {
            com.igexin.push.d.b.a().d();
        }
        this.a.i();
    }
}
