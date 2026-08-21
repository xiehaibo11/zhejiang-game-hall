package com.igexin.push.c;

import android.text.TextUtils;

public class s extends m implements p {
    private static s e;

    private s() {
        super(com.igexin.push.core.d.ag, com.igexin.push.core.d.ai);
        this.d.a(true);
    }

    public static synchronized s a() {
        if (e == null) {
            e = new s();
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
        return h.a;
    }

    @Override
    public p c() {
        return this;
    }
}
