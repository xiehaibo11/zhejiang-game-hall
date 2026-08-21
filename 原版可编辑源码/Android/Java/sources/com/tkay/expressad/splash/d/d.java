package com.tkay.expressad.splash.d;

import android.text.TextUtils;
import com.tkay.expressad.out.q;
import java.util.Random;

public class d implements com.tkay.expressad.splash.b.d {
    private static final String a = "SplashShowListenerImpl";
    private q b;
    private com.tkay.expressad.foundation.d.c c;
    private boolean d;
    private c e;

    private static void d() {
    }

    private static void e() {
    }

    @Override
    public final void c() {
    }

    public d(c cVar, q qVar, double d, com.tkay.expressad.foundation.d.c cVar2) {
        this.e = cVar;
        this.b = qVar;
        this.c = cVar2;
        this.d = a(d, cVar2);
    }

    @Override
    public final void a() {
        c cVar = this.e;
        if (cVar != null) {
            cVar.a = true;
        }
        StringBuffer stringBuffer = new StringBuffer("load_to=");
        stringBuffer.append(this.e.c());
        stringBuffer.append("&allow_skip=");
        stringBuffer.append(this.e.d() ? 1 : 0);
        stringBuffer.append("&countdown=");
        stringBuffer.append(this.e.e());
        stringBuffer.append("&");
        q qVar = this.b;
        if (qVar == null || this.d) {
            return;
        }
        qVar.a();
    }

    @Override
    public final void a(String str) {
        c cVar = this.e;
        if (cVar != null) {
            cVar.a = false;
        }
        q qVar = this.b;
        if (qVar != null) {
            qVar.a(str);
        }
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        q qVar = this.b;
        if (qVar == null || this.d) {
            return;
        }
        qVar.a(cVar);
    }

    @Override
    public final void b() {
        q qVar = this.b;
        if (qVar != null) {
            qVar.b();
        }
        c cVar = this.e;
        if (cVar != null) {
            cVar.a = false;
        }
    }

    private void f() {
        if (this.b != null) {
            this.b = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x002a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean a(double d, com.tkay.expressad.foundation.d.c cVar) {
        long j;
        try {
            long jX = 0;
            if (!TextUtils.isEmpty(com.tkay.expressad.foundation.b.b.b().e())) {
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                if (aVarB != null) {
                    long jL = aVarB.l() * 1000;
                    jX = 1000 * aVarB.x();
                    j = jL;
                } else {
                    j = 0;
                }
                StringBuilder sb = new StringBuilder("cbp : ");
                sb.append(d);
                sb.append(" plct : ");
                sb.append(jX);
                sb.append(" plctb : ");
                sb.append(j);
                if (cVar != null) {
                    if (cVar.a(jX, j)) {
                        cVar.e(1);
                        return true;
                    }
                    cVar.e(0);
                }
                if (cVar == null || cVar.A() || d == 1.0d) {
                    return false;
                }
                double dNextDouble = new Random().nextDouble();
                StringBuilder sb2 = new StringBuilder("hit : ");
                sb2.append(dNextDouble);
                sb2.append(" ");
                sb2.append(dNextDouble > d);
                if (dNextDouble > d) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }
}
