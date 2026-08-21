package com.tkay.china.common.a;

import android.graphics.Bitmap;
import com.tkay.core.common.f.h;

public final class e {
    public String a;
    public String b;
    public String c;
    public Bitmap d;
    public String e;
    public String f;
    public long g;
    public long h;
    public long i;
    public h j;
    public String k;
    public com.tkay.core.common.g.b l;
    public String m;
    public String n;
    public int p;
    public int q;
    public boolean o = false;
    private volatile a r = a.a;

    public enum a {
        a,
        b,
        c,
        d,
        e,
        f,
        g
    }

    public final a a() {
        return this.r;
    }

    public final boolean b() {
        return this.r == a.a;
    }

    public final boolean c() {
        return this.r == a.c;
    }

    private boolean o() {
        return this.r == a.d;
    }

    public final boolean d() {
        return this.r == a.b;
    }

    public final void e() {
        this.r = a.a;
    }

    public final boolean f() {
        return this.r == a.g;
    }

    public final boolean g() {
        return this.r == a.e;
    }

    public final boolean h() {
        return this.r == a.f;
    }

    public final void i() {
        this.r = a.b;
    }

    public final void j() {
        this.r = a.d;
    }

    public final void k() {
        this.r = a.c;
    }

    public final void l() {
        this.r = a.e;
    }

    public final void m() {
        this.r = a.g;
    }

    public final void n() {
        this.r = a.f;
    }
}
