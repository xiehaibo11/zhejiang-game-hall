package com.igexin.push.a.a;

import com.igexin.push.core.a.e;
import com.igexin.push.core.w;

public class b implements com.igexin.push.f.b.c {
    public static final String a = b.class.getName();
    private long b = 0;

    @Override
    public void a() {
        com.igexin.b.a.c.b.a("start cron-keep task", new Object[0]);
        e.a().j();
        w.a().c();
        w.a().e();
        e.a().h();
        e.a().k();
    }

    @Override
    public void a(long j) {
        this.b = j;
    }

    @Override
    public boolean b() {
        return System.currentTimeMillis() - this.b > 3600000;
    }
}
