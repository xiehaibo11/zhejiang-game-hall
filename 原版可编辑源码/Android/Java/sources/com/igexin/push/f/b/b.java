package com.igexin.push.f.b;

import com.igexin.push.core.h;
import java.util.concurrent.TimeUnit;

public class b extends g {
    private static b a;

    public b() {
        super(h.a().b());
        this.o = true;
    }

    public static b i() {
        if (a == null) {
            a = new b();
        }
        return a;
    }

    @Override
    public final int b_() {
        return -2147483642;
    }

    @Override
    public void c() {
        super.c();
        if (this.k) {
            return;
        }
        j();
    }

    @Override
    public void d() {
    }

    @Override
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
