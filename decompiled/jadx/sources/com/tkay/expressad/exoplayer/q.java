package com.tkay.expressad.exoplayer;

import android.util.Log;
import com.tkay.expressad.exoplayer.h.af;

/* JADX INFO: loaded from: classes3.dex */
final class q {
    private static final String l = "MediaPeriodHolder";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final com.tkay.expressad.exoplayer.h.r f6804a;
    public final Object b;
    public final com.tkay.expressad.exoplayer.h.y[] c;
    public final boolean[] d;
    public long e;
    public boolean f;
    public boolean g;
    public r h;
    public q i;
    public af j;
    public com.tkay.expressad.exoplayer.i.i k;
    private final z[] m;
    private final com.tkay.expressad.exoplayer.i.h n;
    private final com.tkay.expressad.exoplayer.h.s o;
    private com.tkay.expressad.exoplayer.i.i p;

    public q(z[] zVarArr, long j, com.tkay.expressad.exoplayer.i.h hVar, com.tkay.expressad.exoplayer.j.b bVar, com.tkay.expressad.exoplayer.h.s sVar, Object obj, r rVar) {
        this.m = zVarArr;
        this.e = j - rVar.b;
        this.n = hVar;
        this.o = sVar;
        this.b = com.tkay.expressad.exoplayer.k.a.a(obj);
        this.h = rVar;
        this.c = new com.tkay.expressad.exoplayer.h.y[zVarArr.length];
        this.d = new boolean[zVarArr.length];
        com.tkay.expressad.exoplayer.h.r rVarA = sVar.a(rVar.f6805a, bVar);
        this.f6804a = rVar.c != Long.MIN_VALUE ? new com.tkay.expressad.exoplayer.h.d(rVarA, true, 0L, rVar.c) : rVarA;
    }

    private long d() {
        return this.e;
    }

    public final boolean a() {
        if (this.f) {
            return !this.g || this.f6804a.d() == Long.MIN_VALUE;
        }
        return false;
    }

    private long e() {
        return this.h.e;
    }

    public final long a(boolean z) {
        if (!this.f) {
            return this.h.b;
        }
        long jD = this.f6804a.d();
        return (jD == Long.MIN_VALUE && z) ? this.h.e : jD;
    }

    public final long b() {
        if (this.f) {
            return this.f6804a.e();
        }
        return 0L;
    }

    private void b(float f) {
        this.f = true;
        this.j = this.f6804a.b();
        a(f);
        long jB = b(this.h.b);
        this.e += this.h.b - jB;
        r rVar = this.h;
        this.h = new r(rVar.f6805a, jB, rVar.c, rVar.d, rVar.e, rVar.f, rVar.g);
    }

    private void e(long j) {
        if (this.f) {
            this.f6804a.a_(j - this.e);
        }
    }

    public final boolean a(float f) {
        com.tkay.expressad.exoplayer.i.i iVarA = this.n.a(this.m, this.j);
        if (iVarA.a(this.p)) {
            return false;
        }
        this.k = iVarA;
        for (com.tkay.expressad.exoplayer.i.f fVar : iVarA.c.a()) {
            if (fVar != null) {
                fVar.a(f);
            }
        }
        return true;
    }

    public final long b(long j) {
        return a(j, false, new boolean[this.m.length]);
    }

    public final long a(long j, boolean z, boolean[] zArr) {
        int i = 0;
        while (true) {
            boolean z2 = true;
            if (i >= this.k.f6703a) {
                break;
            }
            boolean[] zArr2 = this.d;
            if (z || !this.k.a(this.p, i)) {
                z2 = false;
            }
            zArr2[i] = z2;
            i++;
        }
        a(this.c);
        a(this.k);
        com.tkay.expressad.exoplayer.i.g gVar = this.k.c;
        long jA = this.f6804a.a(gVar.a(), this.d, this.c, zArr, j);
        b(this.c);
        this.g = false;
        int i2 = 0;
        while (true) {
            com.tkay.expressad.exoplayer.h.y[] yVarArr = this.c;
            if (i2 >= yVarArr.length) {
                return jA;
            }
            if (yVarArr[i2] != null) {
                com.tkay.expressad.exoplayer.k.a.b(this.k.a(i2));
                if (this.m[i2].a() != 5) {
                    this.g = true;
                }
            } else {
                com.tkay.expressad.exoplayer.k.a.b(gVar.a(i2) == null);
            }
            i2++;
        }
    }

    public final void c() {
        a((com.tkay.expressad.exoplayer.i.i) null);
        try {
            if (this.h.c != Long.MIN_VALUE) {
                this.o.a(((com.tkay.expressad.exoplayer.h.d) this.f6804a).f6643a);
            } else {
                this.o.a(this.f6804a);
            }
        } catch (RuntimeException e) {
            Log.e(l, "Period release failed.", e);
        }
    }

    private void a(com.tkay.expressad.exoplayer.i.i iVar) {
        com.tkay.expressad.exoplayer.i.i iVar2 = this.p;
        if (iVar2 != null) {
            c(iVar2);
        }
        this.p = iVar;
        if (iVar != null) {
            b(iVar);
        }
    }

    private static void b(com.tkay.expressad.exoplayer.i.i iVar) {
        for (int i = 0; i < iVar.f6703a; i++) {
            boolean zA = iVar.a(i);
            com.tkay.expressad.exoplayer.i.f fVarA = iVar.c.a(i);
            if (zA && fVarA != null) {
                fVarA.a();
            }
        }
    }

    private static void c(com.tkay.expressad.exoplayer.i.i iVar) {
        for (int i = 0; i < iVar.f6703a; i++) {
            iVar.a(i);
            iVar.c.a(i);
        }
    }

    private void a(com.tkay.expressad.exoplayer.h.y[] yVarArr) {
        int i = 0;
        while (true) {
            z[] zVarArr = this.m;
            if (i >= zVarArr.length) {
                return;
            }
            if (zVarArr[i].a() == 5) {
                yVarArr[i] = null;
            }
            i++;
        }
    }

    private void b(com.tkay.expressad.exoplayer.h.y[] yVarArr) {
        int i = 0;
        while (true) {
            z[] zVarArr = this.m;
            if (i >= zVarArr.length) {
                return;
            }
            if (zVarArr[i].a() == 5 && this.k.a(i)) {
                yVarArr[i] = new com.tkay.expressad.exoplayer.h.m();
            }
            i++;
        }
    }

    private long c(long j) {
        return j + this.e;
    }

    private long d(long j) {
        return j - this.e;
    }

    public final void a(long j) {
        this.f6804a.c(j - this.e);
    }
}
