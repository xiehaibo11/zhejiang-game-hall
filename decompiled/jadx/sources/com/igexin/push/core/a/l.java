package com.igexin.push.core.a;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public class l extends a {
    private void b() throws Throwable {
        com.igexin.b.a.c.a.f.a().a("Login successed with cid = " + com.igexin.push.core.d.u);
        com.igexin.push.d.b.a().f();
        com.igexin.b.a.c.b.a("loginRsp|" + com.igexin.push.core.d.u + "|success", new Object[0]);
        StringBuilder sb = new StringBuilder();
        sb.append("isCidBroadcasted|");
        sb.append(com.igexin.push.core.d.o);
        com.igexin.b.a.c.b.a(sb.toString(), new Object[0]);
        if (!com.igexin.push.core.d.o) {
            com.igexin.push.core.r.a().c();
            com.igexin.push.core.d.o = true;
        }
        com.igexin.push.core.d.n = true;
        com.igexin.push.core.r.a().b();
        e.a().d();
        if (TextUtils.isEmpty(com.igexin.push.core.d.A)) {
            e.a().e();
        }
        com.igexin.push.util.c.f();
        a();
        com.igexin.push.core.b.i.a().b();
        d();
        e();
    }

    private void c() {
        com.igexin.b.a.c.b.a("loginRsp|" + com.igexin.push.core.d.u + "|failed", new Object[0]);
        com.igexin.b.a.c.a.f.a().a("Login " + com.igexin.push.core.d.u + " failed");
        com.igexin.b.a.c.b.a("LoginResultAction login failed, clear session or cid", new Object[0]);
        com.igexin.push.core.b.i.a().c();
        com.igexin.push.core.m.a().c();
    }

    private void d() {
        if (com.igexin.push.core.d.u.equals(com.igexin.push.core.d.v)) {
            return;
        }
        com.igexin.push.core.d.v = com.igexin.push.core.d.u;
    }

    private void e() {
        if (com.igexin.assist.sdk.a.i(com.igexin.push.core.d.g)) {
            com.igexin.b.a.b.c.b().a(new m(this), false, true);
        }
    }

    public void a() {
        boolean z = (System.currentTimeMillis() - com.igexin.push.core.d.H) - 86400000 > 0;
        boolean z2 = !com.igexin.b.b.a.a(com.igexin.push.core.d.C, com.igexin.push.core.d.B);
        boolean zEquals = true ^ com.igexin.push.core.d.u.equals(com.igexin.push.core.d.v);
        com.igexin.b.a.c.b.a("LoginResultAction|isOverOneDay = " + z + ", isDeviceTokenDiff = " + z2 + ", isCidDiff = " + zEquals, new Object[0]);
        if (z || z2 || zEquals) {
            e.a().f();
        }
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(Object obj) throws Throwable {
        if (!(obj instanceof com.igexin.push.d.c.k)) {
            return true;
        }
        com.igexin.push.core.d.F = 0L;
        if (com.igexin.push.core.d.n) {
            return true;
        }
        com.igexin.push.c.i.a().d().h();
        if (((com.igexin.push.d.c.k) obj).f2604a) {
            b();
            return true;
        }
        c();
        return true;
    }
}
