package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.m;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.tkay.expressad.exoplayer.h.b.i
    public final long e() {
        return this.j + ((long) this.k);
    }

    @Override // com.tkay.expressad.exoplayer.h.b.i
    public final boolean f() {
        return this.p;
    }

    @Override // com.tkay.expressad.exoplayer.h.b.c
    public final long d() {
        return this.n;
    }

    @Override // com.tkay.expressad.exoplayer.j.t.c
    public final void a() {
        this.o = true;
    }

    @Override // com.tkay.expressad.exoplayer.j.t.c
    public final void b() {
        k kVarA = this.b.a(this.n);
        try {
            com.tkay.expressad.exoplayer.e.b bVar = new com.tkay.expressad.exoplayer.e.b(this.i, kVarA.e, this.i.a(kVarA));
            if (this.n == 0) {
                b bVarC = c();
                bVarC.a(this.l);
                this.m.a(bVarC, this.f6635a == -9223372036854775807L ? 0L : this.f6635a - this.l);
            }
            try {
                com.tkay.expressad.exoplayer.e.e eVar = this.m.f6637a;
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
