package com.tkay.expressad.splash.d;

import com.tkay.expressad.out.p;
import java.util.ArrayList;

public final class b implements com.tkay.expressad.splash.b.c {
    private p a;
    private c b;
    private String c;
    private String d;

    public b(c cVar) {
        this.b = cVar;
    }

    public final void a(p pVar) {
        this.a = pVar;
    }

    public final void b(String str) {
        this.d = str;
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar, int i) {
        c cVar2;
        c cVar3 = this.b;
        if (cVar3 == null || !cVar3.a() || cVar == null) {
            return;
        }
        p pVar = this.a;
        if (pVar != null) {
            pVar.a();
            cVar.t();
        }
        this.b.b();
        new ArrayList().add(cVar);
        if (i != 2 || (cVar2 = this.b) == null) {
            return;
        }
        cVar2.a(cVar, true);
    }

    @Override
    public final void a(String str) {
        c cVar = this.b;
        if (cVar == null || !cVar.a()) {
            return;
        }
        p pVar = this.a;
        if (pVar != null) {
            pVar.a(str);
        }
        this.b.b();
    }

    private void a() {
        if (this.a != null) {
            this.a = null;
        }
    }
}
