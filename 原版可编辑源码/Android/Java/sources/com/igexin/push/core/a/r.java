package com.igexin.push.core.a;

public class r extends a {
    private static final String a = com.igexin.push.config.i.a + "_RegisterFailResultAction";

    @Override
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override
    public boolean a(Object obj) {
        if ((obj instanceof com.igexin.push.d.c.p) && ((com.igexin.push.d.c.p) obj).a == 1) {
            com.igexin.b.a.c.b.a(a + "|Register failed because of the wrong appid", new Object[0]);
            com.igexin.b.a.c.a.f.a().a("Register failed because of the wrong appid = " + com.igexin.push.core.d.a);
            com.igexin.push.core.d.j = true;
            com.igexin.push.core.c.a().i().c();
        }
        return true;
    }
}
