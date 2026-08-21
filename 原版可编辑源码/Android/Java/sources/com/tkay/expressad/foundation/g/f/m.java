package com.tkay.expressad.foundation.g.f;

import android.content.Context;

public final class m {
    private static m c;
    private j a;
    private com.tkay.expressad.foundation.g.f.d.b b;

    private m() {
    }

    public static void a(Context context) {
        if (c == null) {
            m mVar = new m();
            c = mVar;
            mVar.a = new j(context.getApplicationContext());
            c.b = new com.tkay.expressad.foundation.g.f.d.b(b());
        }
    }

    public static void a(i iVar) {
        b().a(iVar);
    }

    private static j b() {
        m mVar = c;
        if (mVar != null) {
            j jVar = mVar.a;
            if (jVar != null) {
                return jVar;
            }
            mVar.a = new j(com.tkay.core.common.b.m.a().f());
            return c.a;
        }
        m mVar2 = new m();
        c = mVar2;
        if (mVar2.a == null) {
            mVar2.a = new j(com.tkay.core.common.b.m.a().f());
        }
        return c.a;
    }

    public static com.tkay.expressad.foundation.g.f.d.b a() {
        m mVar = c;
        if (mVar != null) {
            com.tkay.expressad.foundation.g.f.d.b bVar = mVar.b;
            if (bVar != null) {
                return bVar;
            }
            mVar.b = new com.tkay.expressad.foundation.g.f.d.b(b());
            return c.b;
        }
        m mVar2 = new m();
        c = mVar2;
        if (mVar2.b == null) {
            mVar2.b = new com.tkay.expressad.foundation.g.f.d.b(b());
        }
        return c.b;
    }

    private static void c() {
        com.tkay.expressad.foundation.g.f.d.b bVar;
        m mVar = c;
        if (mVar == null || (bVar = mVar.b) == null) {
            return;
        }
        bVar.a();
        c.b = null;
    }
}
