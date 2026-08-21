package com.igexin.push.core.a;

/* JADX INFO: loaded from: classes2.dex */
public class r extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2515a = com.igexin.push.config.i.f2493a + "_RegisterFailResultAction";

    @Override // com.igexin.push.core.a.a
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(Object obj) {
        if ((obj instanceof com.igexin.push.d.c.p) && ((com.igexin.push.d.c.p) obj).f2608a == 1) {
            com.igexin.b.a.c.b.a(f2515a + "|Register failed because of the wrong appid", new Object[0]);
            com.igexin.b.a.c.a.f.a().a("Register failed because of the wrong appid = " + com.igexin.push.core.d.f2565a);
            com.igexin.push.core.d.j = true;
            com.igexin.push.core.c.a().i().c();
        }
        return true;
    }
}
