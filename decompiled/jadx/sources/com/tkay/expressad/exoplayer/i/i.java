package com.tkay.expressad.exoplayer.i;

import com.tkay.expressad.exoplayer.aa;
import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6703a;
    public final aa[] b;
    public final g c;
    public final Object d;

    public i(aa[] aaVarArr, f[] fVarArr, Object obj) {
        this.b = aaVarArr;
        this.c = new g(fVarArr);
        this.d = obj;
        this.f6703a = aaVarArr.length;
    }

    public final boolean a(int i) {
        return this.b[i] != null;
    }

    public final boolean a(i iVar) {
        if (iVar == null || iVar.c.f6701a != this.c.f6701a) {
            return false;
        }
        for (int i = 0; i < this.c.f6701a; i++) {
            if (!a(iVar, i)) {
                return false;
            }
        }
        return true;
    }

    public final boolean a(i iVar, int i) {
        return iVar != null && af.a(this.b[i], iVar.b[i]) && af.a(this.c.a(i), iVar.c.a(i));
    }
}
