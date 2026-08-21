package com.igexin.push.d;

import android.content.Intent;
import android.os.Bundle;
import com.igexin.push.config.j;

public class b {
    private int a;
    private int b;
    private boolean c;
    private int d;
    private long e;
    private int f;
    private long g;
    private d h;
    private i i;

    private b() {
        this.a = j.l;
        this.b = j.n;
        this.i = new f();
        this.h = com.igexin.push.util.a.b() ? d.a : d.b;
    }

    public static b a() {
        return e.a;
    }

    private void a(int i) {
        if (com.igexin.push.core.d.g == null) {
            return;
        }
        try {
            Intent intent = new Intent();
            intent.setAction("com.igexin.sdk.action.polling");
            Bundle bundle = new Bundle();
            bundle.putInt("code", i);
            intent.putExtras(bundle);
            intent.setPackage(com.igexin.push.core.d.g.getPackageName());
            com.igexin.push.core.d.g.sendBroadcast(intent);
        } catch (Throwable unused) {
        }
    }

    private void h() {
        com.igexin.b.a.c.b.a("ConnectModelCoordinator|reset current model = normal", new Object[0]);
        i iVar = this.i;
        if (iVar != null && !(iVar instanceof f)) {
            this.i = new f();
        }
        com.igexin.push.f.b.d.i().k();
        this.f = 0;
        this.d = 0;
        this.c = false;
        com.igexin.push.core.b.i.a().b(this.c);
    }

    private void i() {
        a(0);
    }

    private void j() {
        a(1);
    }

    public void a(boolean z) {
        this.c = z;
        com.igexin.b.a.c.b.a("ConnectModelCoordinator|init, current is polling model = " + z, new Object[0]);
        if (z) {
            com.igexin.push.f.b.d.i().j();
        }
    }

    public synchronized void b() {
        d dVar = com.igexin.push.util.a.b() ? d.a : d.b;
        if (dVar != this.h) {
            com.igexin.b.a.c.b.a("ConnectModelCoordinator|net type changed " + this.h + "->" + dVar, new Object[0]);
            h();
            this.h = dVar;
        }
    }

    public i c() {
        return this.i;
    }

    public synchronized void d() {
        if (this.c) {
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis() - this.e;
        if (jCurrentTimeMillis > 20000 && jCurrentTimeMillis < 200000) {
            this.d++;
            com.igexin.b.a.c.b.a("ConnectModelCoordinator|read len = -1, interval = " + jCurrentTimeMillis + ", disconnect =" + this.d, new Object[0]);
            if (this.d >= this.a) {
                com.igexin.b.a.c.b.a("ConnectModelCoordinator|enter polling mode ####", new Object[0]);
                i();
                this.c = true;
                this.i = new g();
                com.igexin.push.f.b.d.i().j();
                com.igexin.push.core.b.i.a().b(this.c);
            }
        }
    }

    public synchronized void e() {
        if (this.c) {
            if (System.currentTimeMillis() - this.g >= 120000) {
                this.f++;
                com.igexin.b.a.c.b.a("ConnectModelCoordinator|polling mode, cur hearbeat =" + this.f, new Object[0]);
                if (this.f >= this.b) {
                    com.igexin.b.a.c.b.a("ConnectModelCoordinator|enter normal mode ####", new Object[0]);
                    j();
                    com.igexin.push.core.d.F = 0L;
                    h();
                }
            }
            this.g = System.currentTimeMillis();
        }
    }

    public void f() {
        this.e = System.currentTimeMillis();
        if (this.c) {
            this.i = new g();
            com.igexin.push.f.b.d.i().j();
            this.f = 0;
        }
    }

    public void g() {
        i iVar;
        if (!this.c || (iVar = this.i) == null || (iVar instanceof f)) {
            return;
        }
        this.i = new f();
    }
}
