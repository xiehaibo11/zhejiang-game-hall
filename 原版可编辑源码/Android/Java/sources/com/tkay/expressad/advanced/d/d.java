package com.tkay.expressad.advanced.d;

import com.tkay.expressad.out.i;
import java.util.Random;

public final class d implements com.tkay.expressad.advanced.b.b {
    private static final String a = "NativeAdvancedShowListenerImpl";
    private i b;
    private com.tkay.expressad.foundation.d.c c;
    private boolean d;
    private c e;

    @Override
    public final void b() {
    }

    @Override
    public final void d() {
    }

    @Override
    public final void e() {
    }

    @Override
    public final void f() {
    }

    public d(c cVar, i iVar, double d, com.tkay.expressad.foundation.d.c cVar2) {
        this.e = cVar;
        this.b = iVar;
        this.c = cVar2;
        this.d = a(d, cVar2);
    }

    @Override
    public final void a() {
        c cVar = this.e;
        if (cVar != null) {
            cVar.d = true;
        }
        StringBuffer stringBuffer = new StringBuffer("load_to=0&allow_skip=");
        stringBuffer.append(this.e.d());
        stringBuffer.append("&");
        i iVar = this.b;
        if (iVar == null || this.d) {
            return;
        }
        iVar.b();
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        i iVar = this.b;
        if (iVar == null || this.d) {
            return;
        }
        iVar.a(cVar);
    }

    @Override
    public final void c() {
        i iVar = this.b;
        if (iVar != null) {
            iVar.f();
            c cVar = this.e;
            if (cVar != null) {
                cVar.d = false;
            }
        }
    }

    private void g() {
        if (this.b != null) {
            this.b = null;
        }
    }

    private static boolean a(double d, com.tkay.expressad.foundation.d.c cVar) {
        try {
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.a aVarC = com.tkay.expressad.d.b.c();
            long jL = aVarC.l() * 1000;
            long jX = aVarC.x() * 1000;
            StringBuilder sb = new StringBuilder("cbp : ");
            sb.append(d);
            sb.append(" plct : ");
            sb.append(jX);
            sb.append(" plctb : ");
            sb.append(jL);
            if (cVar != null) {
                if (cVar.a(jX, jL)) {
                    cVar.e(1);
                    return true;
                }
                cVar.e(0);
            }
        } catch (Exception unused) {
        }
        if (cVar == null || cVar.A() || d == 1.0d) {
            return false;
        }
        double dNextDouble = new Random().nextDouble();
        StringBuilder sb2 = new StringBuilder("hit : ");
        sb2.append(dNextDouble);
        sb2.append(" ");
        sb2.append(dNextDouble > d);
        return dNextDouble > d;
    }
}
