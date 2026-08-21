package com.igexin.push.c;

import android.text.TextUtils;

public class l extends m implements p {
    private static l e;

    private l() {
        super(com.igexin.push.core.d.af, com.igexin.push.core.d.ah);
        this.d.a(false);
    }

    public static synchronized l a() {
        if (e == null) {
            e = new l();
        }
        return e;
    }

    @Override
    public void a(g gVar, j jVar) {
        q qVarA;
        if (jVar == null || TextUtils.isEmpty(jVar.a()) || (qVarA = a(jVar.a())) == null) {
            return;
        }
        b(jVar);
        qVarA.d();
        m();
        if (gVar == g.a) {
            l();
        }
    }

    @Override
    public void a(j jVar) {
    }

    @Override
    public h b() {
        return h.b;
    }

    @Override
    public p c() {
        return this;
    }
}
