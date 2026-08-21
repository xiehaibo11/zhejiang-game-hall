package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.m;

public final class j extends a {
    private final int k;
    private final m l;
    private volatile int m;
    private volatile boolean n;

    @Override
    public final void a() {
    }

    private j(com.tkay.expressad.exoplayer.j.h hVar, k kVar, m mVar, int i, Object obj, long j, long j2, long j3, int i2, m mVar2) {
        super(hVar, kVar, mVar, i, obj, j, j2, -9223372036854775807L, j3);
        this.k = i2;
        this.l = mVar2;
    }

    @Override
    public final boolean f() {
        return this.n;
    }

    @Override
    public final long d() {
        return this.m;
    }

    @Override
    public final void b() {
        try {
            long jA = this.i.a(this.b.a(this.m));
            if (jA != -1) {
                jA += (long) this.m;
            }
            com.tkay.expressad.exoplayer.e.b bVar = new com.tkay.expressad.exoplayer.e.b(this.i, this.m, jA);
            b bVarC = c();
            bVarC.a(0L);
            com.tkay.expressad.exoplayer.e.m mVarA = bVarC.a(this.k);
            mVarA.a(this.l);
            for (int iA = 0; iA != -1; iA = mVarA.a(bVar, Integer.MAX_VALUE, true)) {
                this.m += iA;
            }
            mVarA.a(this.g, 1, this.m, 0, null);
            af.a(this.i);
            this.n = true;
        } catch (Throwable th) {
            af.a(this.i);
            throw th;
        }
    }
}
