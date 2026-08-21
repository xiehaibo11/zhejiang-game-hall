package com.tkay.basead.d.c;

import android.text.TextUtils;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.z;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    private static void a(aa aaVar, com.tkay.basead.d.c cVar) {
        if (aaVar == null || cVar == null) {
            return;
        }
        aaVar.v(cVar.a());
        aaVar.w(cVar.b());
        aaVar.a(cVar.d());
        aaVar.p(cVar.c());
        aaVar.o(cVar.e());
        aaVar.b(cVar.f());
        aaVar.n(cVar.g());
        aaVar.a(cVar.h());
        aaVar.b(cVar.i());
        aaVar.b(cVar.j());
    }

    public static void a(i iVar, z zVar) {
        j jVar;
        if (iVar == null || zVar == null || (jVar = iVar.m) == null || !(iVar.m instanceof aa)) {
            return;
        }
        j jVarK = zVar.k();
        if (jVarK != null) {
            jVarK.v(jVar.y());
            jVarK.w(jVar.z());
            jVarK.p(jVar.s());
            jVarK.a(jVar.r());
            jVarK.q(jVar.t());
            jVarK.o(jVar.q());
            jVarK.b(jVar.n());
            jVarK.n(jVar.p());
            jVarK.b(jVar.b());
            jVarK.a(jVar.a());
            jVarK.b(jVar.E());
            iVar.m = jVarK;
        } else {
            zVar.a(iVar.m);
        }
        if ((!(zVar instanceof f) || TextUtils.isEmpty(((f) zVar).a())) && TextUtils.isEmpty(zVar.A())) {
            iVar.m.r(0);
            iVar.m.t(0);
            iVar.m.H(2);
            iVar.m.h(2);
            iVar.m.A(1);
            iVar.m.s(-2);
        }
    }
}
