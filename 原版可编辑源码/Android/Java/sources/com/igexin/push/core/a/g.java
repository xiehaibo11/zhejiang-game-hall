package com.igexin.push.core.a;

class g extends com.igexin.push.f.b {
    final e a;

    g(e eVar) {
        this.a = eVar;
    }

    @Override
    protected void a() {
        try {
            com.igexin.push.core.bean.a aVar = new com.igexin.push.core.bean.a();
            long j = aVar.n;
            String strA = com.igexin.push.core.bean.a.a(aVar);
            com.igexin.b.a.c.b.a("addphoneinfo| " + strA, new Object[0]);
            com.igexin.push.core.b.e.a().a(new com.igexin.push.core.bean.h(j, strA, (byte) 5, j));
            com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
            bVar.b();
            bVar.a = (int) j;
            bVar.d = "17258000";
            bVar.e = strA;
            bVar.g = com.igexin.push.core.d.u;
            com.igexin.push.core.c.a().i().a("C-" + com.igexin.push.core.d.u, bVar);
            if (com.igexin.b.b.a.a(com.igexin.push.core.d.C, com.igexin.push.core.d.B)) {
                return;
            }
            com.igexin.push.core.b.i.a().d(com.igexin.push.core.d.B);
        } catch (Throwable unused) {
        }
    }
}
