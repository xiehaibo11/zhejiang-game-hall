package com.igexin.push.f.b;

import com.igexin.push.core.h;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class b extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f2647a;

    public b() {
        super(h.a().b());
        this.o = true;
    }

    public static b i() {
        if (f2647a == null) {
            f2647a = new b();
        }
        return f2647a;
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return -2147483642;
    }

    @Override // com.igexin.b.a.d.e
    public void c() {
        super.c();
        if (this.k) {
            return;
        }
        j();
    }

    @Override // com.igexin.b.a.d.e
    public void d() {
    }

    @Override // com.igexin.push.f.b.g
    protected void d_() {
        com.igexin.push.core.a.e.a().l();
        com.igexin.push.core.d.G = System.currentTimeMillis();
        if (com.igexin.push.core.d.n) {
            com.igexin.b.a.c.b.a("heartbeatReq", new Object[0]);
            com.igexin.push.core.c.a().j().b();
        } else {
            com.igexin.b.a.c.b.a("HeartBeatTimerTask doTaskMethod isOnline = false, refresh wait time !!!!!!", new Object[0]);
            j();
        }
    }

    public void j() {
        a(h.a().b(), TimeUnit.MILLISECONDS);
    }

    public void k() {
    }
}
