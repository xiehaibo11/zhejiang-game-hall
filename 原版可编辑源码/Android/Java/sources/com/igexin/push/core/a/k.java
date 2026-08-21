package com.igexin.push.core.a;

public class k extends a {
    private static final String a = k.class.getName();

    @Override
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override
    public boolean a(Object obj) {
        if (obj instanceof com.igexin.push.d.c.h) {
            com.igexin.push.d.c.h hVar = (com.igexin.push.d.c.h) obj;
            boolean z = hVar.a == 0;
            com.igexin.b.a.c.b.a(a + "|KeyNego result = " + ((int) hVar.a), new Object[0]);
            if (z) {
                com.igexin.b.a.c.b.a(a + "|KeyNego success and login", new Object[0]);
                com.igexin.push.core.m.a().c();
            }
        }
        return true;
    }
}
