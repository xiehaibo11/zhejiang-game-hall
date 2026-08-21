package com.igexin.push.c;

import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

public class k extends com.igexin.push.f.b.g {
    private static k c;
    private boolean e;
    private static final String b = "DT_" + k.class.getName();
    public static final AtomicBoolean a = new AtomicBoolean(false);

    private k() {
        super(10L);
        this.o = true;
    }

    public static synchronized k c_() {
        if (c == null) {
            c = new k();
        }
        return c;
    }

    public void a(long j) {
        a(j, TimeUnit.MILLISECONDS);
    }

    @Override
    public int b_() {
        return 20150607;
    }

    @Override
    protected void d_() {
        a(f.a, TimeUnit.MILLISECONDS);
        if (this.e) {
            com.igexin.b.a.c.b.a(b + "|detect task already stop", new Object[0]);
            return;
        }
        com.igexin.b.a.c.b.a(b + "|" + (f.a / 1000) + "s passed, do task method, start redect ~~~~", new Object[0]);
        com.igexin.push.core.d.i = com.igexin.push.util.a.f();
        if (com.igexin.push.core.d.i) {
            i.a().c();
            return;
        }
        com.igexin.b.a.c.b.a(b + "|" + (f.a / 1000) + "s passed, network is unavailable, stop ###", new Object[0]);
    }

    public void h() {
        this.o = false;
        this.e = true;
        p();
    }
}
