package com.igexin.push.f.b;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class a extends g {
    private static a b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private List<c> f2646a;

    private a() {
        super(60000L);
        this.o = true;
        this.f2646a = new ArrayList();
    }

    public static a i() {
        if (b == null) {
            b = new a();
        }
        return b;
    }

    private void j() {
        a(360000L, TimeUnit.MILLISECONDS);
    }

    public boolean a(c cVar) {
        List<c> list = this.f2646a;
        return (list == null || list.contains(cVar) || !this.f2646a.add(cVar)) ? false : true;
    }

    @Override // com.igexin.b.a.d.a.e
    public int b_() {
        return 0;
    }

    @Override // com.igexin.push.f.b.g
    protected void d_() {
        com.igexin.push.core.a.e.a().l();
        for (c cVar : this.f2646a) {
            if (cVar.b()) {
                cVar.a();
                cVar.a(System.currentTimeMillis());
            }
        }
        j();
        com.igexin.b.a.b.c.b().a(this);
    }
}
