package com.tkay.expressad.exoplayer.h;

import com.tkay.expressad.exoplayer.h.r;

/* JADX INFO: loaded from: classes3.dex */
public final class d implements r, r.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final r f6643a;
    long b;
    long c;
    private r.a d;
    private a[] e = new a[0];
    private long f;

    public d(r rVar, boolean z, long j, long j2) {
        this.f6643a = rVar;
        this.f = z ? j : -9223372036854775807L;
        this.b = j;
        this.c = j2;
    }

    public final void a(long j, long j2) {
        this.b = j;
        this.c = j2;
    }

    @Override // com.tkay.expressad.exoplayer.h.r
    public final void a(r.a aVar, long j) {
        this.d = aVar;
        this.f6643a.a(this, j);
    }

    @Override // com.tkay.expressad.exoplayer.h.r
    public final void a() {
        this.f6643a.a();
    }

    @Override // com.tkay.expressad.exoplayer.h.r
    public final af b() {
        return this.f6643a.b();
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0086  */
    @Override // com.tkay.expressad.exoplayer.h.r
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final long a(com.tkay.expressad.exoplayer.i.f[] r16, boolean[] r17, com.tkay.expressad.exoplayer.h.y[] r18, boolean[] r19, long r20) {
        /*
            r15 = this;
            r0 = r15
            r8 = r16
            r9 = r18
            int r1 = r9.length
            com.tkay.expressad.exoplayer.h.d$a[] r1 = new com.tkay.expressad.exoplayer.h.d.a[r1]
            r0.e = r1
            int r1 = r9.length
            com.tkay.expressad.exoplayer.h.y[] r10 = new com.tkay.expressad.exoplayer.h.y[r1]
            r11 = 0
            r1 = r11
        Lf:
            int r2 = r9.length
            r12 = 0
            if (r1 >= r2) goto L28
            com.tkay.expressad.exoplayer.h.d$a[] r2 = r0.e
            r3 = r9[r1]
            com.tkay.expressad.exoplayer.h.d$a r3 = (com.tkay.expressad.exoplayer.h.d.a) r3
            r2[r1] = r3
            r3 = r2[r1]
            if (r3 == 0) goto L23
            r2 = r2[r1]
            com.tkay.expressad.exoplayer.h.y r12 = r2.f6644a
        L23:
            r10[r1] = r12
            int r1 = r1 + 1
            goto Lf
        L28:
            com.tkay.expressad.exoplayer.h.r r1 = r0.f6643a
            r2 = r16
            r3 = r17
            r4 = r10
            r5 = r19
            r6 = r20
            long r1 = r1.a(r2, r3, r4, r5, r6)
            boolean r3 = r15.f()
            r4 = 1
            if (r3 == 0) goto L68
            long r5 = r0.b
            int r3 = (r20 > r5 ? 1 : (r20 == r5 ? 0 : -1))
            if (r3 != 0) goto L68
            r13 = 0
            int r3 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r3 == 0) goto L63
            int r3 = r8.length
            r5 = r11
        L4c:
            if (r5 >= r3) goto L63
            r6 = r8[r5]
            if (r6 == 0) goto L60
            com.tkay.expressad.exoplayer.m r6 = r6.h()
            java.lang.String r6 = r6.h
            boolean r6 = com.tkay.expressad.exoplayer.k.o.a(r6)
            if (r6 != 0) goto L60
            r3 = r4
            goto L64
        L60:
            int r5 = r5 + 1
            goto L4c
        L63:
            r3 = r11
        L64:
            if (r3 == 0) goto L68
            r5 = r1
            goto L6d
        L68:
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L6d:
            r0.f = r5
            int r3 = (r1 > r20 ? 1 : (r1 == r20 ? 0 : -1))
            if (r3 == 0) goto L87
            long r5 = r0.b
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 < 0) goto L86
            long r5 = r0.c
            r7 = -9223372036854775808
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 == 0) goto L87
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 > 0) goto L86
            goto L87
        L86:
            r4 = r11
        L87:
            com.tkay.expressad.exoplayer.k.a.b(r4)
        L8a:
            int r3 = r9.length
            if (r11 >= r3) goto Lb8
            r3 = r10[r11]
            if (r3 != 0) goto L96
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3[r11] = r12
            goto Laf
        L96:
            r3 = r9[r11]
            if (r3 == 0) goto La4
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3 = r3[r11]
            com.tkay.expressad.exoplayer.h.y r3 = r3.f6644a
            r4 = r10[r11]
            if (r3 == r4) goto Laf
        La4:
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            com.tkay.expressad.exoplayer.h.d$a r4 = new com.tkay.expressad.exoplayer.h.d$a
            r5 = r10[r11]
            r4.<init>(r5)
            r3[r11] = r4
        Laf:
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3 = r3[r11]
            r9[r11] = r3
            int r11 = r11 + 1
            goto L8a
        Lb8:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.h.d.a(com.tkay.expressad.exoplayer.i.f[], boolean[], com.tkay.expressad.exoplayer.h.y[], boolean[], long):long");
    }

    @Override // com.tkay.expressad.exoplayer.h.r
    public final void a(long j, boolean z) {
        this.f6643a.a(j, z);
    }

    @Override // com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.z
    public final void a_(long j) {
        this.f6643a.a_(j);
    }

    @Override // com.tkay.expressad.exoplayer.h.r
    public final long c() {
        if (f()) {
            long j = this.f;
            this.f = -9223372036854775807L;
            long jC = c();
            return jC != -9223372036854775807L ? jC : j;
        }
        long jC2 = this.f6643a.c();
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

    @Override // com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.z
    public final long d() {
        long jD = this.f6643a.d();
        if (jD != Long.MIN_VALUE) {
            long j = this.c;
            if (j == Long.MIN_VALUE || jD < j) {
                return jD;
            }
        }
        return Long.MIN_VALUE;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0034  */
    @Override // com.tkay.expressad.exoplayer.h.r
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final long b(long r6) {
        /*
            r5 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r5.f = r0
            com.tkay.expressad.exoplayer.h.d$a[] r0 = r5.e
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lc:
            if (r3 >= r1) goto L18
            r4 = r0[r3]
            if (r4 == 0) goto L15
            r4.a()
        L15:
            int r3 = r3 + 1
            goto Lc
        L18:
            com.tkay.expressad.exoplayer.h.r r0 = r5.f6643a
            long r0 = r0.b(r6)
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 == 0) goto L34
            long r6 = r5.b
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 < 0) goto L35
            long r6 = r5.c
            r3 = -9223372036854775808
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 > 0) goto L35
        L34:
            r2 = 1
        L35:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.h.d.b(long):long");
    }

    @Override // com.tkay.expressad.exoplayer.h.r
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
        return this.f6643a.a(j, acVar);
    }

    @Override // com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.z
    public final long e() {
        long jE = this.f6643a.e();
        if (jE != Long.MIN_VALUE) {
            long j = this.c;
            if (j == Long.MIN_VALUE || jE < j) {
                return jE;
            }
        }
        return Long.MIN_VALUE;
    }

    @Override // com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.z
    public final boolean c(long j) {
        return this.f6643a.c(j);
    }

    @Override // com.tkay.expressad.exoplayer.h.r.a
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y f6644a;
        private boolean c;

        public a(y yVar) {
            this.f6644a = yVar;
        }

        public final void a() {
            this.c = false;
        }

        @Override // com.tkay.expressad.exoplayer.h.y
        public final boolean b() {
            return !d.this.f() && this.f6644a.b();
        }

        @Override // com.tkay.expressad.exoplayer.h.y
        public final void c() {
            this.f6644a.c();
        }

        @Override // com.tkay.expressad.exoplayer.h.y
        public final int a(com.tkay.expressad.exoplayer.n nVar, com.tkay.expressad.exoplayer.c.e eVar, boolean z) {
            if (d.this.f()) {
                return -3;
            }
            if (this.c) {
                eVar.a(4);
                return -4;
            }
            int iA = this.f6644a.a(nVar, eVar, z);
            if (iA == -5) {
                com.tkay.expressad.exoplayer.m mVar = nVar.f6802a;
                if (mVar.x != 0 || mVar.y != 0) {
                    nVar.f6802a = mVar.a(d.this.b != 0 ? 0 : mVar.x, d.this.c == Long.MIN_VALUE ? mVar.y : 0);
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

        @Override // com.tkay.expressad.exoplayer.h.y
        public final int a(long j) {
            if (d.this.f()) {
                return -3;
            }
            return this.f6644a.a(j);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.z.a
    public final /* bridge */ /* synthetic */ void a(z zVar) {
        this.d.a(this);
    }
}
