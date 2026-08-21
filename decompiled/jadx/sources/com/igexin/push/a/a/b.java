package com.igexin.push.a.a;

import com.igexin.push.core.a.e;
import com.igexin.push.core.w;

/* JADX INFO: loaded from: classes2.dex */
public class b implements com.igexin.push.f.b.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f2462a = b.class.getName();
    private long b = 0;

    @Override // com.igexin.push.f.b.c
    public void a() {
        com.igexin.b.a.c.b.a("start cron-keep task", new Object[0]);
        e.a().j();
        w.a().c();
        w.a().e();
        e.a().h();
        e.a().k();
    }

    @Override // com.igexin.push.f.b.c
    public void a(long j) {
        this.b = j;
    }

    @Override // com.igexin.push.f.b.c
    public boolean b() {
        return System.currentTimeMillis() - this.b > 3600000;
    }
}
