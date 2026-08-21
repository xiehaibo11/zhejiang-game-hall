package com.igexin.push.c;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
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

    @Override // com.igexin.push.c.p
    public void a(g gVar, j jVar) {
        q qVarA;
        if (jVar == null || TextUtils.isEmpty(jVar.a()) || (qVarA = a(jVar.a())) == null) {
            return;
        }
        b(jVar);
        qVarA.d();
        m();
        if (gVar == g.SUCCESS) {
            l();
        }
    }

    @Override // com.igexin.push.c.p
    public void a(j jVar) {
    }

    @Override // com.igexin.push.c.m
    public h b() {
        return h.WIFI;
    }

    @Override // com.igexin.push.c.m
    public p c() {
        return this;
    }
}
