package com.tkay.expressad.advanced.d;

import com.tkay.expressad.out.i;
import java.util.ArrayList;

public final class b implements com.tkay.expressad.advanced.b.a {
    private i a;
    private c b;

    private static void a() {
    }

    public b(c cVar) {
        this.b = cVar;
    }

    public final void a(i iVar) {
        this.a = iVar;
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar, int i) {
        c cVar2;
        c cVar3 = this.b;
        if (cVar3 == null || !cVar3.a() || cVar == null) {
            return;
        }
        i iVar = this.a;
        if (iVar != null && this.b != null) {
            iVar.a();
        }
        this.b.b();
        new ArrayList().add(cVar);
        if (i != 2 || (cVar2 = this.b) == null) {
            return;
        }
        cVar2.a(cVar, true);
    }

    @Override
    public final void a(String str, int i) {
        StringBuilder sb = new StringBuilder("onLoadFailed: ");
        sb.append(i);
        sb.append(str);
        c cVar = this.b;
        if (cVar == null || !cVar.a()) {
            return;
        }
        i iVar = this.a;
        if (iVar != null) {
            iVar.a(str);
        }
        this.b.b();
    }

    private void b() {
        if (this.a != null) {
            this.a = null;
        }
        if (this.b != null) {
            this.b = null;
        }
    }
}
