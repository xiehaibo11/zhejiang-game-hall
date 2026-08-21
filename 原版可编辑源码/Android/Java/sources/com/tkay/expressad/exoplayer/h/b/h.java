package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.m;

public final class h extends a {
    private final int k;
    private final long l;
    private final d m;
    private volatile int n;
    private volatile boolean o;
    private volatile boolean p;

    private h(com.tkay.expressad.exoplayer.j.h hVar, k kVar, m mVar, int i, Object obj, long j, long j2, long j3, long j4, int i2, long j5, d dVar) {
        super(hVar, kVar, mVar, i, obj, j, j2, j3, j4);
        this.k = i2;
        this.l = j5;
        this.m = dVar;
    }

    @Override
    public final long e() {
        return this.j + ((long) this.k);
    }

    @Override
    public final boolean f() {
        return this.p;
    }

    @Override
    public final long d() {
        return this.n;
    }

    @Override
    public final void a() {
        this.o = true;
    }

    @Override
    public final void b() {
        k kVarA = this.b.a(this.n);
        try {
            com.tkay.expressad.exoplayer.e.b bVar = new com.tkay.expressad.exoplayer.e.b(this.i, kVarA.e, this.i.a(kVarA));
            if (this.n == 0) {
                b bVarC = c();
                bVarC.a(this.l);
                this.m.a(bVarC, this.a == -9223372036854775807L ? 0L : this.a - this.l);
            }
            try {
                com.tkay.expressad.exoplayer.e.e eVar = this.m.a;
                int iA = 0;
                while (iA == 0 && !this.o) {
                    iA = eVar.a(bVar, (com.tkay.expressad.exoplayer.e.j) null);
                }
                com.tkay.expressad.exoplayer.k.a.b(iA != 1);
                af.a(this.i);
                this.p = true;
            } finally {
                this.n = (int) (bVar.c() - this.b.e);
            }
        } catch (Throwable th) {
            af.a(this.i);
            throw th;
        }
    }
}
