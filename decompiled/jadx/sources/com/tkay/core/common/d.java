package com.tkay.core.common;

import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.aj;

/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.core.common.f.d f6110a;
    aj b;
    long c;
    TYBaseAdAdapter d;
    int e;
    Runnable f;
    Runnable g;
    boolean h;
    boolean i;
    private Boolean j;

    private d(int i) {
        this.e = i;
    }

    private boolean b() {
        return this.j != null;
    }

    private com.tkay.core.common.f.d c() {
        return this.f6110a;
    }

    private void a(com.tkay.core.common.f.d dVar) {
        this.f6110a = dVar;
    }

    private long d() {
        return this.c;
    }

    private void a(long j) {
        this.c = j;
    }

    private void a(TYBaseAdAdapter tYBaseAdAdapter) {
        this.d = tYBaseAdAdapter;
    }

    private void e() {
        this.d = null;
    }

    private int f() {
        return this.e;
    }

    private void a(long j, final Runnable runnable, long j2, final Runnable runnable2) {
        if (j != -1 && runnable != null) {
            this.f = new Runnable() { // from class: com.tkay.core.common.d.1
                @Override // java.lang.Runnable
                public final void run() {
                    synchronized (d.this) {
                        d.this.i = true;
                        runnable.run();
                    }
                }
            };
            com.tkay.core.common.b.m.a().a(this.f, j);
        }
        if (j2 == -1 || runnable2 == null) {
            return;
        }
        this.g = new Runnable() { // from class: com.tkay.core.common.d.2
            @Override // java.lang.Runnable
            public final void run() {
                synchronized (d.this) {
                    d.this.h = true;
                    runnable2.run();
                }
            }
        };
        com.tkay.core.common.b.m.a().a(this.g, j2);
    }

    private void h() {
        if (this.f != null) {
            com.tkay.core.common.b.m.a().c(this.f);
            this.f = null;
        }
    }

    private void i() {
        if (this.g != null) {
            com.tkay.core.common.b.m.a().c(this.g);
            this.g = null;
        }
    }

    private void a(boolean z) {
        this.j = Boolean.valueOf(z);
    }

    private Boolean j() {
        return this.j;
    }

    private boolean k() {
        return this.h || this.i;
    }

    private aj l() {
        return this.b;
    }

    private void a(aj ajVar) {
        this.b = ajVar;
    }

    private boolean a() {
        if (this.j != null) {
            if (this.h || this.i) {
                return false;
            }
        }
        return true;
    }

    private void g() {
        if (this.f != null) {
            com.tkay.core.common.b.m.a().c(this.f);
            this.f = null;
        }
        if (this.g != null) {
            com.tkay.core.common.b.m.a().c(this.g);
            this.g = null;
        }
    }
}
