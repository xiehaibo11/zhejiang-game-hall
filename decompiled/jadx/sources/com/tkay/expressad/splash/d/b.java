package com.tkay.expressad.splash.d;

import com.tkay.expressad.out.p;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements com.tkay.expressad.splash.b.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private p f7118a;
    private c b;
    private String c;
    private String d;

    public b(c cVar) {
        this.b = cVar;
    }

    public final void a(p pVar) {
        this.f7118a = pVar;
    }

    public final void b(String str) {
        this.d = str;
    }

    @Override // com.tkay.expressad.splash.b.c
    public final void a(com.tkay.expressad.foundation.d.c cVar, int i) {
        c cVar2;
        c cVar3 = this.b;
        if (cVar3 == null || !cVar3.a() || cVar == null) {
            return;
        }
        p pVar = this.f7118a;
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

    @Override // com.tkay.expressad.splash.b.c
    public final void a(String str) {
        c cVar = this.b;
        if (cVar == null || !cVar.a()) {
            return;
        }
        p pVar = this.f7118a;
        if (pVar != null) {
            pVar.a(str);
        }
        this.b.b();
    }

    private void a() {
        if (this.f7118a != null) {
            this.f7118a = null;
        }
    }
}
