package com.igexin.push.core.a;

/* JADX INFO: loaded from: classes2.dex */
public class k extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2511a = k.class.getName();

    @Override // com.igexin.push.core.a.a
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(Object obj) {
        if (obj instanceof com.igexin.push.d.c.h) {
            com.igexin.push.d.c.h hVar = (com.igexin.push.d.c.h) obj;
            boolean z = hVar.f2601a == 0;
            com.igexin.b.a.c.b.a(f2511a + "|KeyNego result = " + ((int) hVar.f2601a), new Object[0]);
            if (z) {
                com.igexin.b.a.c.b.a(f2511a + "|KeyNego success and login", new Object[0]);
                com.igexin.push.core.m.a().c();
            }
        }
        return true;
    }
}
