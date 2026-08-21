package com.igexin.push.f.b;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

public class a extends g {
    private static a b;
    private List<c> a;

    private a() {
        super(60000L);
        this.o = true;
        this.a = new ArrayList();
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
        List<c> list = this.a;
        return (list == null || list.contains(cVar) || !this.a.add(cVar)) ? false : true;
    }

    @Override
    public int b_() {
        return 0;
    }

    @Override
    protected void d_() {
        com.igexin.push.core.a.e.a().l();
        for (c cVar : this.a) {
            if (cVar.b()) {
                cVar.a();
                cVar.a(System.currentTimeMillis());
            }
        }
        j();
        com.igexin.b.a.b.c.b().a(this);
    }
}
