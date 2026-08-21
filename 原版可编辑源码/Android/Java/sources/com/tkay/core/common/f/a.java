package com.tkay.core.common.f;

import android.util.Log;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBaseAdAdapter;

public class a implements Comparable<a> {
    private int a;
    private long b;
    private TYBaseAdAdapter c;
    private BaseAd d;
    private int e;
    private boolean f;
    private long g;
    private String h;
    private int i;
    private long j;
    private boolean k;

    @Override
    public int compareTo(a aVar) {
        return com.tkay.core.common.l.g.a(this.c.getUnitGroupInfo()) > com.tkay.core.common.l.g.a(aVar.c.getUnitGroupInfo()) ? -1 : 1;
    }

    public final boolean a() {
        return this.i == 1 && System.currentTimeMillis() - this.b < this.j;
    }

    public final void a(long j) {
        this.j = j;
    }

    public final void a(String str) {
        this.h = str;
    }

    public final String b() {
        return this.h;
    }

    private long l() {
        return this.g;
    }

    public final void b(long j) {
        this.g = j;
    }

    public final boolean c() {
        return this.f;
    }

    public final void a(boolean z) {
        this.f = z;
    }

    public final int d() {
        return this.e;
    }

    public final void a(int i) {
        this.e = i;
        if (i > 0) {
            this.i = 0;
        }
    }

    private int m() {
        return this.a;
    }

    public final void b(int i) {
        this.a = i;
    }

    private long n() {
        return this.b;
    }

    public final void c(long j) {
        this.i = 1;
        this.b = j;
    }

    public final TYBaseAdAdapter e() {
        return this.c;
    }

    public final void a(TYBaseAdAdapter tYBaseAdAdapter) {
        this.c = tYBaseAdAdapter;
    }

    public final BaseAd f() {
        return this.d;
    }

    public final void a(BaseAd baseAd) {
        this.d = baseAd;
    }

    public final boolean g() {
        try {
            if (this.c != null && this.d != null) {
                return true;
            }
            if (this.c != null) {
                return this.c.isAdReady();
            }
            return false;
        } catch (Exception e) {
            Log.e("AdCacheInfo", "isNetworkAdReady()  >>> " + e.getMessage());
            return false;
        }
    }

    public final d h() {
        BaseAd baseAd = this.d;
        return baseAd != null ? baseAd.getDetail() : this.c.getTrackingInfo();
    }

    public final boolean i() {
        return this.b + this.g > System.currentTimeMillis();
    }

    public final boolean j() {
        return i() && g();
    }

    public final synchronized void k() {
        if (this.k) {
            return;
        }
        this.k = true;
        com.tkay.core.common.b.m.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    if (a.this.c != null) {
                        a.this.c.destory();
                    }
                } catch (Throwable unused) {
                }
            }
        });
    }

    private int b(a aVar) {
        return com.tkay.core.common.l.g.a(this.c.getUnitGroupInfo()) > com.tkay.core.common.l.g.a(aVar.c.getUnitGroupInfo()) ? -1 : 1;
    }
}
