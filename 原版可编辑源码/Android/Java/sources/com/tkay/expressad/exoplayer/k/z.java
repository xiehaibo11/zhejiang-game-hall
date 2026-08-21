package com.tkay.expressad.exoplayer.k;

public final class z implements n {
    private final c a;
    private boolean b;
    private long c;
    private long d;
    private com.tkay.expressad.exoplayer.v e = com.tkay.expressad.exoplayer.v.a;

    public z(c cVar) {
        this.a = cVar;
    }

    public final void a() {
        if (this.b) {
            return;
        }
        this.d = this.a.a();
        this.b = true;
    }

    public final void b() {
        if (this.b) {
            a(d());
            this.b = false;
        }
    }

    public final void a(long j) {
        this.c = j;
        if (this.b) {
            this.d = this.a.a();
        }
    }

    @Override
    public final long d() {
        long jA;
        long j = this.c;
        if (!this.b) {
            return j;
        }
        long jA2 = this.a.a() - this.d;
        if (this.e.b == 1.0f) {
            jA = com.tkay.expressad.exoplayer.b.b(jA2);
        } else {
            jA = this.e.a(jA2);
        }
        return j + jA;
    }

    @Override
    public final com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v vVar) {
        if (this.b) {
            a(d());
        }
        this.e = vVar;
        return vVar;
    }

    @Override
    public final com.tkay.expressad.exoplayer.v e() {
        return this.e;
    }
}
