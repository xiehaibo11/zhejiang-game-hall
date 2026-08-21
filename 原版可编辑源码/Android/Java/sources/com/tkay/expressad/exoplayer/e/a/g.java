package com.tkay.expressad.exoplayer.e.a;

import com.tkay.expressad.exoplayer.e.a.a;
import com.tkay.expressad.exoplayer.e.a.b;
import com.tkay.expressad.exoplayer.e.k;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.p;
import com.tkay.expressad.exoplayer.k.s;
import com.tkay.expressad.exoplayer.t;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayDeque;
import java.util.ArrayList;

public final class g implements com.tkay.expressad.exoplayer.e.e, com.tkay.expressad.exoplayer.e.k {
    public static final int e = 1;
    private static final int f = 0;
    private static final int g = 1;
    private static final int h = 2;
    private static final long j = 262144;
    private static final long k = 10485760;
    private long[][] A;
    private int B;
    private long C;
    private boolean D;
    private final int l;
    private final s m;
    private final s n;
    private final s o;
    private final ArrayDeque<a.a> p;
    private int q;
    private int r;
    private long s;
    private int t;
    private s u;
    private int v;
    private int w;
    private int x;
    private com.tkay.expressad.exoplayer.e.g y;
    private b[] z;
    public static final com.tkay.expressad.exoplayer.e.h d = new com.tkay.expressad.exoplayer.e.h() {
        @Override
        public final com.tkay.expressad.exoplayer.e.e[] a() {
            return new com.tkay.expressad.exoplayer.e.e[]{new g()};
        }
    };
    private static final int i = af.f("qt  ");

    @Retention(RetentionPolicy.SOURCE)
    public @interface a {
    }

    @Retention(RetentionPolicy.SOURCE)
    private @interface c {
    }

    @Override
    public final boolean a() {
        return true;
    }

    @Override
    public final void c() {
    }

    public g() {
        this(0);
    }

    public g(int i2) {
        this.l = i2;
        this.o = new s(16);
        this.p = new ArrayDeque<>();
        this.m = new s(p.a);
        this.n = new s(4);
        this.v = -1;
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.e.f fVar) {
        return i.b(fVar);
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.e.g gVar) {
        this.y = gVar;
    }

    @Override
    public final void a(long j2, long j3) {
        this.p.clear();
        this.t = 0;
        this.v = -1;
        this.w = 0;
        this.x = 0;
        if (j2 == 0) {
            d();
            return;
        }
        b[] bVarArr = this.z;
        if (bVarArr != null) {
            for (b bVar : bVarArr) {
                m mVar = bVar.b;
                int iA = mVar.a(j3);
                if (iA == -1) {
                    iA = mVar.b(j3);
                }
                bVar.d = iA;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:109:0x0226  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x023b  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x0273  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x01f3 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:200:0x0343 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:203:0x0006 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:97:0x01f0  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int a(com.tkay.expressad.exoplayer.e.f fVar, com.tkay.expressad.exoplayer.e.j jVar) throws t {
        boolean z;
        boolean z2;
        long j2;
        boolean z3;
        while (true) {
            int i2 = this.q;
            if (i2 != 0) {
                if (i2 != 1) {
                    if (i2 != 2) {
                        throw new IllegalStateException();
                    }
                    long jC = fVar.c();
                    if (this.v == -1) {
                        int i3 = -1;
                        int i4 = -1;
                        boolean z4 = true;
                        boolean z5 = true;
                        long j3 = Long.MAX_VALUE;
                        long j4 = Long.MAX_VALUE;
                        long j5 = Long.MAX_VALUE;
                        int i5 = 0;
                        while (true) {
                            b[] bVarArr = this.z;
                            if (i5 >= bVarArr.length) {
                                break;
                            }
                            b bVar = bVarArr[i5];
                            int i6 = bVar.d;
                            if (i6 != bVar.b.b) {
                                long j6 = bVar.b.c[i6];
                                long j7 = this.A[i5][i6];
                                long j8 = j6 - jC;
                                boolean z6 = j8 < 0 || j8 >= j;
                                if ((!z6 && z5) || (z6 == z5 && j8 < j5)) {
                                    i4 = i5;
                                    z5 = z6;
                                    j5 = j8;
                                    j4 = j7;
                                }
                                if (j7 < j3) {
                                    i3 = i5;
                                    z4 = z6;
                                    j3 = j7;
                                }
                            }
                            i5++;
                        }
                        int i7 = (j3 == Long.MAX_VALUE || !z4 || j4 < j3 + k) ? i4 : i3;
                        this.v = i7;
                        if (i7 == -1) {
                            return -1;
                        }
                    }
                    b bVar2 = this.z[this.v];
                    com.tkay.expressad.exoplayer.e.m mVar = bVar2.c;
                    int i8 = bVar2.d;
                    long j9 = bVar2.b.c[i8];
                    int i9 = bVar2.b.d[i8];
                    long j10 = (j9 - jC) + ((long) this.w);
                    if (j10 < 0 || j10 >= j) {
                        jVar.a = j9;
                        return 1;
                    }
                    if (bVar2.a.i == 1) {
                        j10 += 8;
                        i9 -= 8;
                    }
                    fVar.c((int) j10);
                    if (bVar2.a.l == 0) {
                        while (true) {
                            int i10 = this.w;
                            if (i10 >= i9) {
                                break;
                            }
                            int iA = mVar.a(fVar, i9 - i10, false);
                            this.w += iA;
                            this.x -= iA;
                        }
                    } else {
                        byte[] bArr = this.n.a;
                        bArr[0] = 0;
                        bArr[1] = 0;
                        bArr[2] = 0;
                        int i11 = bVar2.a.l;
                        int i12 = 4 - bVar2.a.l;
                        while (this.w < i9) {
                            int i13 = this.x;
                            if (i13 == 0) {
                                fVar.b(this.n.a, i12, i11);
                                this.n.c(0);
                                this.x = this.n.m();
                                this.m.c(0);
                                mVar.a(this.m, 4);
                                this.w += 4;
                                i9 += i12;
                            } else {
                                int iA2 = mVar.a(fVar, i13, false);
                                this.w += iA2;
                                this.x -= iA2;
                            }
                        }
                    }
                    mVar.a(bVar2.b.f[i8], bVar2.b.g[i8], i9, 0, null);
                    bVar2.d++;
                    this.v = -1;
                    this.w = 0;
                    this.x = 0;
                    return 0;
                }
                long j11 = this.s - ((long) this.t);
                long jC2 = fVar.c() + j11;
                s sVar = this.u;
                if (sVar != null) {
                    fVar.b(sVar.a, this.t, (int) j11);
                    if (this.r == com.tkay.expressad.exoplayer.e.a.a.f) {
                        s sVar2 = this.u;
                        sVar2.c(8);
                        if (sVar2.i() == i) {
                            z2 = true;
                            this.D = z2;
                        } else {
                            sVar2.d(4);
                            while (sVar2.a() > 0) {
                                if (sVar2.i() == i) {
                                    z2 = true;
                                    break;
                                }
                            }
                            z2 = false;
                            this.D = z2;
                        }
                    } else if (!this.p.isEmpty()) {
                        this.p.peek().a(new a.b(this.r, this.u));
                    }
                } else if (j11 < j) {
                    fVar.c((int) j11);
                } else {
                    jVar.a = fVar.c() + j11;
                    z = true;
                    b(jC2);
                    if (!((z || this.q == 2) ? false : true)) {
                        return 1;
                    }
                }
                z = false;
                b(jC2);
                if (z) {
                    if (!((z || this.q == 2) ? false : true)) {
                    }
                }
            } else if (this.t == 0) {
                boolean z7 = false;
                if (fVar.a(this.o.a, 0, 8, true)) {
                    this.t = 8;
                    this.o.c(0);
                    this.s = this.o.h();
                    this.r = this.o.i();
                    j2 = this.s;
                    if (j2 != 1) {
                        fVar.b(this.o.a, 8, 8);
                        this.t += 8;
                        this.s = this.o.n();
                    } else if (j2 == 0) {
                        long jD = fVar.d();
                        if (jD == -1 && !this.p.isEmpty()) {
                            jD = this.p.peek().aV;
                        }
                        if (jD != -1) {
                            this.s = (jD - fVar.c()) + ((long) this.t);
                        }
                    }
                    if (this.s >= this.t) {
                        throw new t("Atom size less than header length (unsupported).");
                    }
                    int i14 = this.r;
                    if (i14 == com.tkay.expressad.exoplayer.e.a.a.G || i14 == com.tkay.expressad.exoplayer.e.a.a.I || i14 == com.tkay.expressad.exoplayer.e.a.a.J || i14 == com.tkay.expressad.exoplayer.e.a.a.K || i14 == com.tkay.expressad.exoplayer.e.a.a.L || i14 == com.tkay.expressad.exoplayer.e.a.a.U) {
                        long jC3 = (fVar.c() + this.s) - ((long) this.t);
                        this.p.push(new a.a(this.r, jC3));
                        if (this.s == this.t) {
                            b(jC3);
                        } else {
                            d();
                        }
                        z3 = true;
                    } else {
                        int i15 = this.r;
                        if (i15 == com.tkay.expressad.exoplayer.e.a.a.W || i15 == com.tkay.expressad.exoplayer.e.a.a.H || i15 == com.tkay.expressad.exoplayer.e.a.a.X || i15 == com.tkay.expressad.exoplayer.e.a.a.Y || i15 == com.tkay.expressad.exoplayer.e.a.a.ar || i15 == com.tkay.expressad.exoplayer.e.a.a.as || i15 == com.tkay.expressad.exoplayer.e.a.a.at || i15 == com.tkay.expressad.exoplayer.e.a.a.V || i15 == com.tkay.expressad.exoplayer.e.a.a.au || i15 == com.tkay.expressad.exoplayer.e.a.a.av || i15 == com.tkay.expressad.exoplayer.e.a.a.aw || i15 == com.tkay.expressad.exoplayer.e.a.a.ax || i15 == com.tkay.expressad.exoplayer.e.a.a.ay || i15 == com.tkay.expressad.exoplayer.e.a.a.T || i15 == com.tkay.expressad.exoplayer.e.a.a.f || i15 == com.tkay.expressad.exoplayer.e.a.a.aF) {
                            com.tkay.expressad.exoplayer.k.a.b(this.t == 8);
                            com.tkay.expressad.exoplayer.k.a.b(this.s <= 2147483647L);
                            this.u = new s((int) this.s);
                            System.arraycopy(this.o.a, 0, this.u.a, 0, 8);
                            z3 = true;
                            this.q = 1;
                        } else {
                            z3 = true;
                            this.u = null;
                            this.q = 1;
                        }
                    }
                    z7 = z3;
                }
                if (!z7) {
                    return -1;
                }
            } else {
                j2 = this.s;
                if (j2 != 1) {
                }
                if (this.s >= this.t) {
                }
            }
        }
    }

    @Override
    public final long b() {
        return this.C;
    }

    @Override
    public final k.a a(long j2) {
        long j3;
        long jA;
        long j4;
        long j5;
        int iB;
        b[] bVarArr = this.z;
        if (bVarArr.length == 0) {
            return new k.a(com.tkay.expressad.exoplayer.e.l.a);
        }
        int i2 = this.B;
        if (i2 != -1) {
            m mVar = bVarArr[i2].b;
            int iA = a(mVar, j2);
            if (iA == -1) {
                return new k.a(com.tkay.expressad.exoplayer.e.l.a);
            }
            long j6 = mVar.f[iA];
            j3 = mVar.c[iA];
            if (j6 >= j2 || iA >= mVar.b - 1 || (iB = mVar.b(j2)) == -1 || iB == iA) {
                j5 = -1;
                j4 = -9223372036854775807L;
            } else {
                j4 = mVar.f[iB];
                j5 = mVar.c[iB];
            }
            jA = j5;
            j2 = j6;
        } else {
            j3 = Long.MAX_VALUE;
            jA = -1;
            j4 = -9223372036854775807L;
        }
        int i3 = 0;
        while (true) {
            b[] bVarArr2 = this.z;
            if (i3 >= bVarArr2.length) {
                break;
            }
            if (i3 != this.B) {
                m mVar2 = bVarArr2[i3].b;
                long jA2 = a(mVar2, j2, j3);
                if (j4 != -9223372036854775807L) {
                    jA = a(mVar2, j4, jA);
                }
                j3 = jA2;
            }
            i3++;
        }
        com.tkay.expressad.exoplayer.e.l lVar = new com.tkay.expressad.exoplayer.e.l(j2, j3);
        if (j4 == -9223372036854775807L) {
            return new k.a(lVar);
        }
        return new k.a(lVar, new com.tkay.expressad.exoplayer.e.l(j4, jA));
    }

    private void d() {
        this.q = 0;
        this.t = 0;
    }

    private boolean b(com.tkay.expressad.exoplayer.e.f fVar) throws t {
        if (this.t == 0) {
            if (!fVar.a(this.o.a, 0, 8, true)) {
                return false;
            }
            this.t = 8;
            this.o.c(0);
            this.s = this.o.h();
            this.r = this.o.i();
        }
        long j2 = this.s;
        if (j2 == 1) {
            fVar.b(this.o.a, 8, 8);
            this.t += 8;
            this.s = this.o.n();
        } else if (j2 == 0) {
            long jD = fVar.d();
            if (jD == -1 && !this.p.isEmpty()) {
                jD = this.p.peek().aV;
            }
            if (jD != -1) {
                this.s = (jD - fVar.c()) + ((long) this.t);
            }
        }
        if (this.s < this.t) {
            throw new t("Atom size less than header length (unsupported).");
        }
        int i2 = this.r;
        if (i2 == com.tkay.expressad.exoplayer.e.a.a.G || i2 == com.tkay.expressad.exoplayer.e.a.a.I || i2 == com.tkay.expressad.exoplayer.e.a.a.J || i2 == com.tkay.expressad.exoplayer.e.a.a.K || i2 == com.tkay.expressad.exoplayer.e.a.a.L || i2 == com.tkay.expressad.exoplayer.e.a.a.U) {
            long jC = (fVar.c() + this.s) - ((long) this.t);
            this.p.push(new a.a(this.r, jC));
            if (this.s == this.t) {
                b(jC);
            } else {
                d();
            }
        } else {
            int i3 = this.r;
            if (i3 == com.tkay.expressad.exoplayer.e.a.a.W || i3 == com.tkay.expressad.exoplayer.e.a.a.H || i3 == com.tkay.expressad.exoplayer.e.a.a.X || i3 == com.tkay.expressad.exoplayer.e.a.a.Y || i3 == com.tkay.expressad.exoplayer.e.a.a.ar || i3 == com.tkay.expressad.exoplayer.e.a.a.as || i3 == com.tkay.expressad.exoplayer.e.a.a.at || i3 == com.tkay.expressad.exoplayer.e.a.a.V || i3 == com.tkay.expressad.exoplayer.e.a.a.au || i3 == com.tkay.expressad.exoplayer.e.a.a.av || i3 == com.tkay.expressad.exoplayer.e.a.a.aw || i3 == com.tkay.expressad.exoplayer.e.a.a.ax || i3 == com.tkay.expressad.exoplayer.e.a.a.ay || i3 == com.tkay.expressad.exoplayer.e.a.a.T || i3 == com.tkay.expressad.exoplayer.e.a.a.f || i3 == com.tkay.expressad.exoplayer.e.a.a.aF) {
                com.tkay.expressad.exoplayer.k.a.b(this.t == 8);
                com.tkay.expressad.exoplayer.k.a.b(this.s <= 2147483647L);
                this.u = new s((int) this.s);
                System.arraycopy(this.o.a, 0, this.u.a, 0, 8);
                this.q = 1;
            } else {
                this.u = null;
                this.q = 1;
            }
        }
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x007e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean b(com.tkay.expressad.exoplayer.e.f fVar, com.tkay.expressad.exoplayer.e.j jVar) throws t {
        boolean z;
        boolean z2;
        long j2 = this.s - ((long) this.t);
        long jC = fVar.c() + j2;
        s sVar = this.u;
        if (sVar != null) {
            fVar.b(sVar.a, this.t, (int) j2);
            if (this.r == com.tkay.expressad.exoplayer.e.a.a.f) {
                s sVar2 = this.u;
                sVar2.c(8);
                if (sVar2.i() == i) {
                    z2 = true;
                    this.D = z2;
                } else {
                    sVar2.d(4);
                    while (sVar2.a() > 0) {
                        if (sVar2.i() == i) {
                            z2 = true;
                            break;
                        }
                    }
                    z2 = false;
                    this.D = z2;
                }
                b(jC);
                return (z || this.q == 2) ? false : true;
            }
            if (!this.p.isEmpty()) {
                this.p.peek().a(new a.b(this.r, this.u));
            }
        } else if (j2 < j) {
            fVar.c((int) j2);
        } else {
            jVar.a = fVar.c() + j2;
            z = true;
            b(jC);
            if (z) {
            }
        }
        z = false;
        b(jC);
        if (z) {
        }
    }

    private void b(long j2) throws t {
        while (!this.p.isEmpty() && this.p.peek().aV == j2) {
            a.a aVarPop = this.p.pop();
            if (aVarPop.aU == com.tkay.expressad.exoplayer.e.a.a.G) {
                a(aVarPop);
                this.p.clear();
                this.q = 2;
            } else if (!this.p.isEmpty()) {
                this.p.peek().a(aVarPop);
            }
        }
        if (this.q != 2) {
            d();
        }
    }

    private void a(a.a aVar) throws t {
        com.tkay.expressad.exoplayer.g.a aVarA;
        ArrayList<m> arrayListA;
        ArrayList arrayList = new ArrayList();
        com.tkay.expressad.exoplayer.e.i iVar = new com.tkay.expressad.exoplayer.e.i();
        a.b bVarD = aVar.d(com.tkay.expressad.exoplayer.e.a.a.aF);
        if (bVarD != null) {
            aVarA = com.tkay.expressad.exoplayer.e.a.b.a(bVarD, this.D);
            if (aVarA != null) {
                iVar.a(aVarA);
            }
        } else {
            aVarA = null;
        }
        int i2 = 1;
        int i3 = 0;
        try {
            arrayListA = a(aVar, iVar, (this.l & 1) != 0);
        } catch (b.g unused) {
            iVar = new com.tkay.expressad.exoplayer.e.i();
            arrayListA = a(aVar, iVar, true);
        }
        int size = arrayListA.size();
        int size2 = -1;
        long jMax = -9223372036854775807L;
        while (i3 < size) {
            m mVar = arrayListA.get(i3);
            j jVar = mVar.a;
            b bVar = new b(jVar, mVar, this.y.a(i3, jVar.d));
            com.tkay.expressad.exoplayer.m mVarA = jVar.h.a(mVar.e + 30);
            if (jVar.d == i2) {
                if (iVar.a()) {
                    mVarA = mVarA.a(iVar.b, iVar.c);
                }
                if (aVarA != null) {
                    mVarA = mVarA.a(aVarA);
                }
            }
            bVar.c.a(mVarA);
            jMax = Math.max(jMax, jVar.g != -9223372036854775807L ? jVar.g : mVar.h);
            if (jVar.d == 2 && size2 == -1) {
                size2 = arrayList.size();
            }
            arrayList.add(bVar);
            i3++;
            i2 = 1;
        }
        this.B = size2;
        this.C = jMax;
        b[] bVarArr = (b[]) arrayList.toArray(new b[arrayList.size()]);
        this.z = bVarArr;
        this.A = a(bVarArr);
        this.y.c_();
        this.y.a(this);
    }

    private ArrayList<m> a(a.a aVar, com.tkay.expressad.exoplayer.e.i iVar, boolean z) throws t {
        j jVarA;
        ArrayList<m> arrayList = new ArrayList<>();
        for (int i2 = 0; i2 < aVar.aX.size(); i2++) {
            a.a aVar2 = aVar.aX.get(i2);
            if (aVar2.aU == com.tkay.expressad.exoplayer.e.a.a.I && (jVarA = com.tkay.expressad.exoplayer.e.a.b.a(aVar2, aVar.d(com.tkay.expressad.exoplayer.e.a.a.H), -9223372036854775807L, (com.tkay.expressad.exoplayer.d.e) null, z, this.D)) != null) {
                m mVarA = com.tkay.expressad.exoplayer.e.a.b.a(jVarA, aVar2.e(com.tkay.expressad.exoplayer.e.a.a.J).e(com.tkay.expressad.exoplayer.e.a.a.K).e(com.tkay.expressad.exoplayer.e.a.a.L), iVar);
                if (mVarA.b != 0) {
                    arrayList.add(mVarA);
                }
            }
        }
        return arrayList;
    }

    private int c(com.tkay.expressad.exoplayer.e.f fVar, com.tkay.expressad.exoplayer.e.j jVar) {
        int i2;
        com.tkay.expressad.exoplayer.e.j jVar2;
        long jC = fVar.c();
        if (this.v == -1) {
            int i3 = -1;
            int i4 = -1;
            int i5 = 0;
            boolean z = true;
            long j2 = Long.MAX_VALUE;
            boolean z2 = true;
            long j3 = Long.MAX_VALUE;
            long j4 = Long.MAX_VALUE;
            while (true) {
                b[] bVarArr = this.z;
                if (i5 >= bVarArr.length) {
                    break;
                }
                b bVar = bVarArr[i5];
                int i6 = bVar.d;
                if (i6 != bVar.b.b) {
                    long j5 = bVar.b.c[i6];
                    long j6 = this.A[i5][i6];
                    long j7 = j5 - jC;
                    boolean z3 = j7 < 0 || j7 >= j;
                    if ((!z3 && z) || (z3 == z && j7 < j4)) {
                        i4 = i5;
                        z = z3;
                        j4 = j7;
                        j3 = j6;
                    }
                    if (j6 < j2) {
                        i3 = i5;
                        z2 = z3;
                        j2 = j6;
                    }
                }
                i5++;
            }
            int i7 = (j2 == Long.MAX_VALUE || !z2 || j3 < j2 + k) ? i4 : i3;
            this.v = i7;
            if (i7 == -1) {
                return -1;
            }
        }
        b bVar2 = this.z[this.v];
        com.tkay.expressad.exoplayer.e.m mVar = bVar2.c;
        int i8 = bVar2.d;
        long j8 = bVar2.b.c[i8];
        int i9 = bVar2.b.d[i8];
        long j9 = (j8 - jC) + ((long) this.w);
        if (j9 < 0) {
            i2 = 1;
            jVar2 = jVar;
        } else {
            if (j9 < j) {
                if (bVar2.a.i == 1) {
                    j9 += 8;
                    i9 -= 8;
                }
                fVar.c((int) j9);
                if (bVar2.a.l == 0) {
                    while (true) {
                        int i10 = this.w;
                        if (i10 >= i9) {
                            break;
                        }
                        int iA = mVar.a(fVar, i9 - i10, false);
                        this.w += iA;
                        this.x -= iA;
                    }
                } else {
                    byte[] bArr = this.n.a;
                    bArr[0] = 0;
                    bArr[1] = 0;
                    bArr[2] = 0;
                    int i11 = bVar2.a.l;
                    int i12 = 4 - bVar2.a.l;
                    while (this.w < i9) {
                        int i13 = this.x;
                        if (i13 == 0) {
                            fVar.b(this.n.a, i12, i11);
                            this.n.c(0);
                            this.x = this.n.m();
                            this.m.c(0);
                            mVar.a(this.m, 4);
                            this.w += 4;
                            i9 += i12;
                        } else {
                            int iA2 = mVar.a(fVar, i13, false);
                            this.w += iA2;
                            this.x -= iA2;
                        }
                    }
                }
                mVar.a(bVar2.b.f[i8], bVar2.b.g[i8], i9, 0, null);
                bVar2.d++;
                this.v = -1;
                this.w = 0;
                this.x = 0;
                return 0;
            }
            jVar2 = jVar;
            i2 = 1;
        }
        jVar2.a = j8;
        return i2;
    }

    private int c(long j2) {
        int i2 = -1;
        int i3 = -1;
        int i4 = 0;
        long j3 = Long.MAX_VALUE;
        boolean z = true;
        long j4 = Long.MAX_VALUE;
        boolean z2 = true;
        long j5 = Long.MAX_VALUE;
        while (true) {
            b[] bVarArr = this.z;
            if (i4 >= bVarArr.length) {
                break;
            }
            b bVar = bVarArr[i4];
            int i5 = bVar.d;
            if (i5 != bVar.b.b) {
                long j6 = bVar.b.c[i5];
                long j7 = this.A[i4][i5];
                long j8 = j6 - j2;
                boolean z3 = j8 < 0 || j8 >= j;
                if ((!z3 && z2) || (z3 == z2 && j8 < j5)) {
                    z2 = z3;
                    j5 = j8;
                    i3 = i4;
                    j4 = j7;
                }
                if (j7 < j3) {
                    z = z3;
                    i2 = i4;
                    j3 = j7;
                }
            }
            i4++;
        }
        return (j3 == Long.MAX_VALUE || !z || j4 < j3 + k) ? i3 : i2;
    }

    private void d(long j2) {
        for (b bVar : this.z) {
            m mVar = bVar.b;
            int iA = mVar.a(j2);
            if (iA == -1) {
                iA = mVar.b(j2);
            }
            bVar.d = iA;
        }
    }

    private static long[][] a(b[] bVarArr) {
        long[][] jArr = new long[bVarArr.length][];
        int[] iArr = new int[bVarArr.length];
        long[] jArr2 = new long[bVarArr.length];
        boolean[] zArr = new boolean[bVarArr.length];
        for (int i2 = 0; i2 < bVarArr.length; i2++) {
            jArr[i2] = new long[bVarArr[i2].b.b];
            jArr2[i2] = bVarArr[i2].b.f[0];
        }
        long j2 = 0;
        int i3 = 0;
        while (i3 < bVarArr.length) {
            long j3 = Long.MAX_VALUE;
            int i4 = -1;
            for (int i5 = 0; i5 < bVarArr.length; i5++) {
                if (!zArr[i5] && jArr2[i5] <= j3) {
                    j3 = jArr2[i5];
                    i4 = i5;
                }
            }
            int i6 = iArr[i4];
            jArr[i4][i6] = j2;
            j2 += (long) bVarArr[i4].b.d[i6];
            int i7 = i6 + 1;
            iArr[i4] = i7;
            if (i7 < jArr[i4].length) {
                jArr2[i4] = bVarArr[i4].b.f[i7];
            } else {
                zArr[i4] = true;
                i3++;
            }
        }
        return jArr;
    }

    private static long a(m mVar, long j2, long j3) {
        int iA = a(mVar, j2);
        return iA == -1 ? j3 : Math.min(mVar.c[iA], j3);
    }

    private static int a(m mVar, long j2) {
        int iA = mVar.a(j2);
        return iA == -1 ? mVar.b(j2) : iA;
    }

    private static boolean a(s sVar) {
        sVar.c(8);
        if (sVar.i() == i) {
            return true;
        }
        sVar.d(4);
        while (sVar.a() > 0) {
            if (sVar.i() == i) {
                return true;
            }
        }
        return false;
    }

    private static boolean a(int i2) {
        return i2 == com.tkay.expressad.exoplayer.e.a.a.W || i2 == com.tkay.expressad.exoplayer.e.a.a.H || i2 == com.tkay.expressad.exoplayer.e.a.a.X || i2 == com.tkay.expressad.exoplayer.e.a.a.Y || i2 == com.tkay.expressad.exoplayer.e.a.a.ar || i2 == com.tkay.expressad.exoplayer.e.a.a.as || i2 == com.tkay.expressad.exoplayer.e.a.a.at || i2 == com.tkay.expressad.exoplayer.e.a.a.V || i2 == com.tkay.expressad.exoplayer.e.a.a.au || i2 == com.tkay.expressad.exoplayer.e.a.a.av || i2 == com.tkay.expressad.exoplayer.e.a.a.aw || i2 == com.tkay.expressad.exoplayer.e.a.a.ax || i2 == com.tkay.expressad.exoplayer.e.a.a.ay || i2 == com.tkay.expressad.exoplayer.e.a.a.T || i2 == com.tkay.expressad.exoplayer.e.a.a.f || i2 == com.tkay.expressad.exoplayer.e.a.a.aF;
    }

    private static boolean b(int i2) {
        return i2 == com.tkay.expressad.exoplayer.e.a.a.G || i2 == com.tkay.expressad.exoplayer.e.a.a.I || i2 == com.tkay.expressad.exoplayer.e.a.a.J || i2 == com.tkay.expressad.exoplayer.e.a.a.K || i2 == com.tkay.expressad.exoplayer.e.a.a.L || i2 == com.tkay.expressad.exoplayer.e.a.a.U;
    }

    private static final class b {
        public final j a;
        public final m b;
        public final com.tkay.expressad.exoplayer.e.m c;
        public int d;

        public b(j jVar, m mVar, com.tkay.expressad.exoplayer.e.m mVar2) {
            this.a = jVar;
            this.b = mVar;
            this.c = mVar2;
        }
    }
}
