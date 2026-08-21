package com.igexin.b.a.d;

import java.util.concurrent.TimeUnit;

public abstract class b implements com.igexin.b.a.d.a.f {
    protected boolean a = true;

    public void a() {
        this.a = false;
    }

    @Override
    public boolean a(long j, e eVar) {
        return TimeUnit.SECONDS.toMillis((long) eVar.y) < j - eVar.w;
    }

    @Override
    public long b(long j, e eVar) {
        return (TimeUnit.SECONDS.toMillis(eVar.y) + eVar.w) - j;
    }
}
