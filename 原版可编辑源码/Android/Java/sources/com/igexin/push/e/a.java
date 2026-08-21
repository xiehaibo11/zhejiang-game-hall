package com.igexin.push.e;

import com.igexin.b.a.b.a.a.f;
import com.igexin.b.a.b.a.a.m;
import com.igexin.b.a.b.a.a.q;
import com.igexin.b.a.c.b;
import com.igexin.push.config.SDKUrlConfig;
import com.igexin.push.config.j;
import com.igexin.push.core.a.e;
import com.igexin.push.core.d;
import com.igexin.push.core.r;
import com.igexin.push.d.c.c;
import com.igexin.push.d.c.g;
import com.igexin.push.d.c.i;
import com.igexin.push.d.h;
import com.igexin.push.util.EncryptUtils;

public class a {
    private static String a = a.class.getName();
    private boolean b;

    private void b(boolean z) {
        b.a(a + "|call setActive, param active = " + z + "; this.active = " + this.b, new Object[0]);
        boolean z2 = this.b;
        if (z2 == z) {
            if (!z2 || d.n || d.F <= 1500) {
                return;
            }
            b.a(a + "|start active again, online = false, reset delay", new Object[0]);
            d.F = 0L;
            d();
            return;
        }
        this.b = z;
        if (z) {
            b.a(a + "|active = true, start connect~~~~", new Object[0]);
            e();
            return;
        }
        b.a(a + "|active = false, disconnect...", new Object[0]);
        a(true);
    }

    public int a(String str, c cVar) {
        return a(str, cVar, false);
    }

    public int a(String str, c cVar, boolean z) {
        if (str == null || cVar == null) {
            return -1;
        }
        if (!d.n && !(cVar instanceof g) && !(cVar instanceof i) && !(cVar instanceof com.igexin.push.d.c.d)) {
            b.a("networkLayer|sendData|not online|" + cVar.getClass().getName(), new Object[0]);
            return -3;
        }
        if (this.b) {
            if (z) {
                if (com.igexin.b.a.b.c.b().a(SDKUrlConfig.getCmAddress(), 3, com.igexin.push.core.c.a().h(), cVar, true, j.e > 0 ? j.e : 10, new h()) == null) {
                    return -2;
                }
            } else if (com.igexin.b.a.b.c.b().a(SDKUrlConfig.getCmAddress(), 3, com.igexin.push.core.c.a().h(), cVar, true) == null) {
                return -2;
            }
        }
        return 0;
    }

    public void a(q qVar) {
        com.igexin.b.a.b.c cVarB;
        Object aVar;
        if (qVar == q.a) {
            cVarB = com.igexin.b.a.b.c.b();
            aVar = new com.igexin.push.d.b.b();
        } else {
            if (qVar != q.b) {
                return;
            }
            cVarB = com.igexin.b.a.b.c.b();
            aVar = new com.igexin.push.d.b.a();
        }
        cVarB.a(aVar);
        com.igexin.b.a.b.c.b().c();
    }

    public void a(c cVar) {
        if (cVar == null) {
            return;
        }
        e.a().a(cVar);
    }

    public void a(boolean z) {
        b.a(a + "|call -> disconnect, reset delay = " + z, new Object[0]);
        if (z) {
            d.F = 0L;
        }
        f.a().c();
    }

    public boolean a() {
        return this.b;
    }

    public void b() {
        boolean z = d.k;
        boolean zA = com.igexin.push.util.a.a(System.currentTimeMillis());
        boolean zA2 = com.igexin.push.util.a.a();
        b.a(a + "|start: isPushOn = " + z + " silentTime = " + zA + " isBlockEndTime = " + zA2, new Object[0]);
        if (z && !zA && zA2) {
            b(true);
        }
    }

    public void c() {
        b.a(a + "|stop by user", new Object[0]);
        b(false);
        if (d.n) {
            d.n = false;
            r.a().b();
        }
    }

    public void d() {
        d.F = com.igexin.push.d.b.a().c().a();
        com.igexin.push.f.b.f.i().j();
    }

    public void e() {
        b.a(a + "|call -> tryConnect and reset delay = 0", new Object[0]);
        a(true);
    }

    public void f() {
        com.igexin.push.c.i.a().d().c();
        com.igexin.push.c.a aVarD = com.igexin.push.c.i.a().d();
        com.igexin.push.core.h.a().a(com.igexin.push.core.j.c);
        aVarD.i();
        if (h()) {
            b.a(a + "|sdkOn = false or pushOn = false, disconect|user", new Object[0]);
        } else {
            b.a(a + "|disconnect by network", new Object[0]);
        }
        com.igexin.b.a.b.c.b().a(m.class);
        a(false);
    }

    public void g() {
        com.igexin.push.d.a.b.b = -1;
        if (d.j) {
            b.a(a + "|isAppidWrong = true", new Object[0]);
            com.igexin.b.a.c.a.f.a().a("isAppidWrong = true");
            return;
        }
        if (!EncryptUtils.isLoadSuccess()) {
            b.a(a + "|so error ++++++++", new Object[0]);
            return;
        }
        if (d.al) {
            d();
            return;
        }
        b.a(a + "|initSuccess = false", new Object[0]);
    }

    public boolean h() {
        return !d.k;
    }

    public void i() {
        com.igexin.push.core.h.a().a(com.igexin.push.core.j.d);
        boolean zF = com.igexin.push.util.a.f();
        b.a(a + "|network changed, available = " + zF + ", last = " + d.i, new Object[0]);
        com.igexin.push.d.b.a().b();
        if (!zF) {
            b.a(a + "|network changed, available = false, do nothing", new Object[0]);
        } else if (!d.i) {
            b.a(a + "|network changed, try connect reset delay", new Object[0]);
            e();
        }
        if (zF) {
            com.igexin.push.c.i.a().c();
        }
        d.i = zF;
    }
}
