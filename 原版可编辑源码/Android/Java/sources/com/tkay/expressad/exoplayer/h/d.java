package com.tkay.expressad.exoplayer.h;

import com.tkay.expressad.exoplayer.h.r;

public final class d implements r, r.a {
    public final r a;
    long b;
    long c;
    private r.a d;
    private a[] e = new a[0];
    private long f;

    public d(r rVar, boolean z, long j, long j2) {
        this.a = rVar;
        this.f = z ? j : -9223372036854775807L;
        this.b = j;
        this.c = j2;
    }

    public final void a(long j, long j2) {
        this.b = j;
        this.c = j2;
    }

    @Override
    public final void a(r.a aVar, long j) {
        this.d = aVar;
        this.a.a(this, j);
    }

    @Override
    public final void a() {
        this.a.a();
    }

    @Override
    public final af b() {
        return this.a.b();
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0086  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long a(com.tkay.expressad.exoplayer.i.f[] fVarArr, boolean[] zArr, y[] yVarArr, boolean[] zArr2, long j) {
        long j2;
        boolean z;
        this.e = new a[yVarArr.length];
        y[] yVarArr2 = new y[yVarArr.length];
        int i = 0;
        while (true) {
            y yVar = null;
            if (i >= yVarArr.length) {
                break;
            }
            a[] aVarArr = this.e;
            aVarArr[i] = (a) yVarArr[i];
            if (aVarArr[i] != null) {
                yVar = aVarArr[i].a;
            }
            yVarArr2[i] = yVar;
            i++;
        }
        long jA = this.a.a(fVarArr, zArr, yVarArr2, zArr2, j);
        boolean z2 = true;
        if (f()) {
            long j3 = this.b;
            if (j != j3) {
                j2 = -9223372036854775807L;
            } else if (j3 != 0) {
                for (com.tkay.expressad.exoplayer.i.f fVar : fVarArr) {
                    if (fVar != null && !com.tkay.expressad.exoplayer.k.o.a(fVar.h().h)) {
                        z = true;
                        break;
                    }
                }
                z = false;
                if (!z) {
                    j2 = jA;
                }
            } else {
                z = false;
                if (!z) {
                }
            }
        }
        this.f = j2;
        if (jA != j) {
            if (jA >= this.b) {
                long j4 = this.c;
                if (j4 != Long.MIN_VALUE && jA > j4) {
                    z2 = false;
                }
            }
        }
        com.tkay.expressad.exoplayer.k.a.b(z2);
        for (int i2 = 0; i2 < yVarArr.length; i2++) {
            if (yVarArr2[i2] == null) {
                this.e[i2] = null;
            } else if (yVarArr[i2] == null || this.e[i2].a != yVarArr2[i2]) {
                this.e[i2] = new a(yVarArr2[i2]);
            }
            yVarArr[i2] = this.e[i2];
        }
        return jA;
    }

    @Override
    public final void a(long j, boolean z) {
        this.a.a(j, z);
    }

    @Override
    public final void a_(long j) {
        this.a.a_(j);
    }

    @Override
    public final long c() {
        if (f()) {
            long j = this.f;
            this.f = -9223372036854775807L;
            long jC = c();
            return jC != -9223372036854775807L ? jC : j;
        }
        long jC2 = this.a.c();
        if (jC2 == -9223372036854775807L) {
            return -9223372036854775807L;
        }
        boolean z = true;
        com.tkay.expressad.exoplayer.k.a.b(jC2 >= this.b);
        long j2 = this.c;
        if (j2 != Long.MIN_VALUE && jC2 > j2) {
            z = false;
        }
        com.tkay.expressad.exoplayer.k.a.b(z);
        return jC2;
    }

    @Override
    public final long d() {
        long jD = this.a.d();
        if (jD != Long.MIN_VALUE) {
            long j = this.c;
            if (j == Long.MIN_VALUE || jD < j) {
                return jD;
            }
        }
        return Long.MIN_VALUE;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0034  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long b(long j) {
        this.f = -9223372036854775807L;
        boolean z = false;
        for (a aVar : this.e) {
            if (aVar != null) {
                aVar.a();
            }
        }
        long jB = this.a.b(j);
        if (jB == j) {
            z = true;
        } else if (jB >= this.b) {
            long j2 = this.c;
            if (j2 == Long.MIN_VALUE || jB <= j2) {
            }
        }
        com.tkay.expressad.exoplayer.k.a.b(z);
        return jB;
    }

    @Override
    public final long a(long j, com.tkay.expressad.exoplayer.ac acVar) {
        long j2 = this.b;
        if (j == j2) {
            return j2;
        }
        long jA = com.tkay.expressad.exoplayer.k.af.a(acVar.f, j - this.b);
        long j3 = acVar.g;
        long j4 = this.c;
        long jA2 = com.tkay.expressad.exoplayer.k.af.a(j3, j4 == Long.MIN_VALUE ? Long.MAX_VALUE : j4 - j);
        if (jA != acVar.f || jA2 != acVar.g) {
            acVar = new com.tkay.expressad.exoplayer.ac(jA, jA2);
        }
        return this.a.a(j, acVar);
    }

    @Override
    public final long e() {
        long jE = this.a.e();
        if (jE != Long.MIN_VALUE) {
            long j = this.c;
            if (j == Long.MIN_VALUE || jE < j) {
                return jE;
            }
        }
        return Long.MIN_VALUE;
    }

    @Override
    public final boolean c(long j) {
        return this.a.c(j);
    }

    @Override
    public final void a(r rVar) {
        this.d.a((r) this);
    }

    private void g() {
        this.d.a(this);
    }

    final boolean f() {
        return this.f != -9223372036854775807L;
    }

    private com.tkay.expressad.exoplayer.ac b(long j, com.tkay.expressad.exoplayer.ac acVar) {
        long jA = com.tkay.expressad.exoplayer.k.af.a(acVar.f, j - this.b);
        long j2 = acVar.g;
        long j3 = this.c;
        long jA2 = com.tkay.expressad.exoplayer.k.af.a(j2, j3 == Long.MIN_VALUE ? Long.MAX_VALUE : j3 - j);
        return (jA == acVar.f && jA2 == acVar.g) ? acVar : new com.tkay.expressad.exoplayer.ac(jA, jA2);
    }

    private static boolean a(long j, com.tkay.expressad.exoplayer.i.f[] fVarArr) {
        if (j != 0) {
            for (com.tkay.expressad.exoplayer.i.f fVar : fVarArr) {
                if (fVar != null && !com.tkay.expressad.exoplayer.k.o.a(fVar.h().h)) {
                    return true;
                }
            }
        }
        return false;
    }

    private final class a implements y {
        public final y a;
        private boolean c;

        public a(y yVar) {
            this.a = yVar;
        }

        public final void a() {
            this.c = false;
        }

        @Override
        public final boolean b() {
            return !d.this.f() && this.a.b();
        }

        @Override
        public final void c() {
            this.a.c();
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.n nVar, com.tkay.expressad.exoplayer.c.e eVar, boolean z) {
            if (d.this.f()) {
                return -3;
            }
            if (this.c) {
                eVar.a(4);
                return -4;
            }
            int iA = this.a.a(nVar, eVar, z);
            if (iA == -5) {
                com.tkay.expressad.exoplayer.m mVar = nVar.a;
                if (mVar.x != 0 || mVar.y != 0) {
                    nVar.a = mVar.a(d.this.b != 0 ? 0 : mVar.x, d.this.c == Long.MIN_VALUE ? mVar.y : 0);
                }
                return -5;
            }
            if (d.this.c == Long.MIN_VALUE || ((iA != -4 || eVar.f < d.this.c) && !(iA == -3 && d.this.d() == Long.MIN_VALUE))) {
                return iA;
            }
            eVar.a();
            eVar.a(4);
            this.c = true;
            return -4;
        }

        @Override
        public final int a(long j) {
            if (d.this.f()) {
                return -3;
            }
            return this.a.a(j);
        }
    }

    @Override
    public final void a(z zVar) {
        this.d.a(this);
    }
}
