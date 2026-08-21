package com.igexin.push.f.b;

import com.igexin.push.config.j;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public class d extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f2648a;
    private AtomicBoolean b;

    public d() {
        super(604800000L);
        this.f2648a = j.m;
        this.b = new AtomicBoolean(false);
        this.o = true;
    }

    private void a(long j) {
        a(j, TimeUnit.MILLISECONDS);
    }

    public static d i() {
        return e.f2649a;
    }

    @Override // com.igexin.b.a.d.a.e
    public int b_() {
        return 20160629;
    }

    @Override // com.igexin.push.f.b.g
    protected void d_() {
        a(this.f2648a, TimeUnit.MILLISECONDS);
        boolean zA = com.igexin.push.util.a.a(System.currentTimeMillis());
        if (!com.igexin.push.core.d.n && com.igexin.push.core.d.i && com.igexin.push.core.d.k && !zA && com.igexin.push.util.a.a()) {
            com.igexin.b.a.c.b.a("PollingTimerTask|run = true", new Object[0]);
            com.igexin.push.d.b.a().g();
            com.igexin.push.core.d.F = 100L;
            f.i().j();
        }
    }

    public void j() {
        if (!this.b.get()) {
            com.igexin.b.a.b.c.b().a(this, false, true);
            this.b.set(true);
        }
        a(this.f2648a);
    }

    public void k() {
        a(604800000L, TimeUnit.MILLISECONDS);
    }
}
