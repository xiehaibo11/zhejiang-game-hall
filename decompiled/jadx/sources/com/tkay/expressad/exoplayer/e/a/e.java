package com.tkay.expressad.exoplayer.e.a;

import android.util.Log;
import android.util.Pair;
import android.util.SparseArray;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.tkay.expressad.exoplayer.d.e;
import com.tkay.expressad.exoplayer.e.a.a;
import com.tkay.expressad.exoplayer.e.k;
import com.tkay.expressad.exoplayer.e.m;
import com.tkay.expressad.exoplayer.k.ac;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.p;
import com.tkay.expressad.exoplayer.k.s;
import com.tkay.expressad.exoplayer.t;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.UUID;

/* JADX INFO: loaded from: classes3.dex */
public final class e implements com.tkay.expressad.exoplayer.e.e {
    public static final int e = 1;
    public static final int f = 2;
    public static final int g = 4;
    public static final int h = 16;
    private static final int i = 8;
    private static final String j = "FragmentedMp4Extractor";
    private static final int n = 0;
    private static final int o = 1;
    private static final int p = 2;
    private static final int q = 3;
    private static final int r = 4;
    private final ac A;
    private final s B;
    private final byte[] C;
    private final ArrayDeque<a.C0442a> D;
    private final ArrayDeque<b> E;
    private final com.tkay.expressad.exoplayer.e.m F;
    private int G;
    private int H;
    private long I;
    private int J;
    private s K;
    private long L;
    private int M;
    private long N;
    private long O;
    private long P;
    private c Q;
    private int R;
    private int S;
    private int T;
    private boolean U;
    private com.tkay.expressad.exoplayer.e.g V;
    private com.tkay.expressad.exoplayer.e.m[] W;
    private com.tkay.expressad.exoplayer.e.m[] X;
    private boolean Y;
    private final int s;
    private final j t;
    private final List<com.tkay.expressad.exoplayer.m> u;
    private final com.tkay.expressad.exoplayer.d.e v;
    private final SparseArray<c> w;
    private final s x;
    private final s y;
    private final s z;
    public static final com.tkay.expressad.exoplayer.e.h d = new com.tkay.expressad.exoplayer.e.h() { // from class: com.tkay.expressad.exoplayer.e.a.e.1
        @Override // com.tkay.expressad.exoplayer.e.h
        public final com.tkay.expressad.exoplayer.e.e[] a() {
            return new com.tkay.expressad.exoplayer.e.e[]{new e()};
        }
    };
    private static final int k = af.f("seig");
    private static final byte[] l = {-94, 57, 79, 82, 90, -101, 79, 20, -94, 68, 108, 66, 124, 100, -115, -12};
    private static final com.tkay.expressad.exoplayer.m m = com.tkay.expressad.exoplayer.m.a((String) null, "application/x-emsg");

    @Retention(RetentionPolicy.SOURCE)
    public @interface a {
    }

    @Override // com.tkay.expressad.exoplayer.e.e
    public final void c() {
    }

    public e() {
        this(0);
    }

    public e(int i2) {
        this(i2, null);
    }

    private e(int i2, ac acVar) {
        this(i2, acVar, null, null);
    }

    private e(int i2, ac acVar, j jVar, com.tkay.expressad.exoplayer.d.e eVar) {
        this(i2, acVar, jVar, eVar, Collections.emptyList());
    }

    private e(int i2, ac acVar, j jVar, com.tkay.expressad.exoplayer.d.e eVar, List<com.tkay.expressad.exoplayer.m> list) {
        this(i2, acVar, jVar, eVar, list, null);
    }

    private e(int i2, ac acVar, j jVar, com.tkay.expressad.exoplayer.d.e eVar, List<com.tkay.expressad.exoplayer.m> list, com.tkay.expressad.exoplayer.e.m mVar) {
        this.s = i2 | (jVar != null ? 8 : 0);
        this.A = acVar;
        this.t = jVar;
        this.v = eVar;
        this.u = Collections.unmodifiableList(list);
        this.F = mVar;
        this.B = new s(16);
        this.x = new s(p.f6769a);
        this.y = new s(5);
        this.z = new s();
        this.C = new byte[16];
        this.D = new ArrayDeque<>();
        this.E = new ArrayDeque<>();
        this.w = new SparseArray<>();
        this.O = -9223372036854775807L;
        this.N = -9223372036854775807L;
        this.P = -9223372036854775807L;
        a();
    }

    @Override // com.tkay.expressad.exoplayer.e.e
    public final boolean a(com.tkay.expressad.exoplayer.e.f fVar) {
        return i.a(fVar);
    }

    @Override // com.tkay.expressad.exoplayer.e.e
    public final void a(com.tkay.expressad.exoplayer.e.g gVar) {
        this.V = gVar;
        j jVar = this.t;
        if (jVar != null) {
            c cVar = new c(gVar.a(0, jVar.d));
            cVar.a(this.t, new com.tkay.expressad.exoplayer.e.a.c(0, 0, 0, 0));
            this.w.put(0, cVar);
            b();
            this.V.c_();
        }
    }

    @Override // com.tkay.expressad.exoplayer.e.e
    public final void a(long j2, long j3) {
        int size = this.w.size();
        for (int i2 = 0; i2 < size; i2++) {
            this.w.valueAt(i2).a();
        }
        this.E.clear();
        this.M = 0;
        this.N = j3;
        this.D.clear();
        a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:154:0x044e  */
    /* JADX WARN: Removed duplicated region for block: B:155:0x0463  */
    /* JADX WARN: Removed duplicated region for block: B:167:0x049d  */
    /* JADX WARN: Removed duplicated region for block: B:274:0x023f A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:283:0x05dd A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:284:0x05e7 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:288:0x0004 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:292:0x0004 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00b3  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00f0  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00f8  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x01ac A[LOOP:10: B:63:0x01ac->B:65:0x01b2, LOOP_START] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x01c6  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x01df  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x01f8  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0236  */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // com.tkay.expressad.exoplayer.e.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final int a(com.tkay.expressad.exoplayer.e.f r25, com.tkay.expressad.exoplayer.e.j r26) throws com.tkay.expressad.exoplayer.t {
        /*
            Method dump skipped, instruction units count: 1519
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.e.a.e.a(com.tkay.expressad.exoplayer.e.f, com.tkay.expressad.exoplayer.e.j):int");
    }

    private void a() {
        this.G = 0;
        this.J = 0;
    }

    private boolean b(com.tkay.expressad.exoplayer.e.f fVar) throws t {
        if (this.J == 0) {
            if (!fVar.a(this.B.f6774a, 0, 8, true)) {
                return false;
            }
            this.J = 8;
            this.B.c(0);
            this.I = this.B.h();
            this.H = this.B.i();
        }
        long j2 = this.I;
        if (j2 == 1) {
            fVar.b(this.B.f6774a, 8, 8);
            this.J += 8;
            this.I = this.B.n();
        } else if (j2 == 0) {
            long jD = fVar.d();
            if (jD == -1 && !this.D.isEmpty()) {
                jD = this.D.peek().aV;
            }
            if (jD != -1) {
                this.I = (jD - fVar.c()) + ((long) this.J);
            }
        }
        if (this.I < this.J) {
            throw new t("Atom size less than header length (unsupported).");
        }
        long jC = fVar.c() - ((long) this.J);
        if (this.H == com.tkay.expressad.exoplayer.e.a.a.P) {
            int size = this.w.size();
            for (int i2 = 0; i2 < size; i2++) {
                l lVar = this.w.valueAt(i2).b;
                lVar.b = jC;
                lVar.d = jC;
                lVar.c = jC;
            }
        }
        if (this.H == com.tkay.expressad.exoplayer.e.a.a.m) {
            this.Q = null;
            this.L = this.I + jC;
            if (!this.Y) {
                this.V.a(new k.b(this.O, jC));
                this.Y = true;
            }
            this.G = 2;
            return true;
        }
        int i3 = this.H;
        if (i3 == com.tkay.expressad.exoplayer.e.a.a.G || i3 == com.tkay.expressad.exoplayer.e.a.a.I || i3 == com.tkay.expressad.exoplayer.e.a.a.J || i3 == com.tkay.expressad.exoplayer.e.a.a.K || i3 == com.tkay.expressad.exoplayer.e.a.a.L || i3 == com.tkay.expressad.exoplayer.e.a.a.P || i3 == com.tkay.expressad.exoplayer.e.a.a.Q || i3 == com.tkay.expressad.exoplayer.e.a.a.R || i3 == com.tkay.expressad.exoplayer.e.a.a.U) {
            long jC2 = (fVar.c() + this.I) - 8;
            this.D.push(new a.C0442a(this.H, jC2));
            if (this.I == this.J) {
                a(jC2);
            } else {
                a();
            }
        } else {
            int i4 = this.H;
            if (i4 == com.tkay.expressad.exoplayer.e.a.a.X || i4 == com.tkay.expressad.exoplayer.e.a.a.W || i4 == com.tkay.expressad.exoplayer.e.a.a.H || i4 == com.tkay.expressad.exoplayer.e.a.a.F || i4 == com.tkay.expressad.exoplayer.e.a.a.Y || i4 == com.tkay.expressad.exoplayer.e.a.a.B || i4 == com.tkay.expressad.exoplayer.e.a.a.C || i4 == com.tkay.expressad.exoplayer.e.a.a.T || i4 == com.tkay.expressad.exoplayer.e.a.a.D || i4 == com.tkay.expressad.exoplayer.e.a.a.E || i4 == com.tkay.expressad.exoplayer.e.a.a.Z || i4 == com.tkay.expressad.exoplayer.e.a.a.ah || i4 == com.tkay.expressad.exoplayer.e.a.a.ai || i4 == com.tkay.expressad.exoplayer.e.a.a.am || i4 == com.tkay.expressad.exoplayer.e.a.a.al || i4 == com.tkay.expressad.exoplayer.e.a.a.aj || i4 == com.tkay.expressad.exoplayer.e.a.a.ak || i4 == com.tkay.expressad.exoplayer.e.a.a.V || i4 == com.tkay.expressad.exoplayer.e.a.a.S || i4 == com.tkay.expressad.exoplayer.e.a.a.aL) {
                if (this.J != 8) {
                    throw new t("Leaf atom defines extended atom size (unsupported).");
                }
                long j3 = this.I;
                if (j3 > 2147483647L) {
                    throw new t("Leaf atom with length > 2147483647 (unsupported).");
                }
                this.K = new s((int) j3);
                System.arraycopy(this.B.f6774a, 0, this.K.f6774a, 0, 8);
                this.G = 1;
            } else {
                if (this.I > 2147483647L) {
                    throw new t("Skipping atom with length > 2147483647 (unsupported).");
                }
                this.K = null;
                this.G = 1;
            }
        }
        return true;
    }

    private void c(com.tkay.expressad.exoplayer.e.f fVar) throws t {
        long jN;
        long jN2;
        int i2 = ((int) this.I) - this.J;
        s sVar = this.K;
        if (sVar != null) {
            fVar.b(sVar.f6774a, 8, i2);
            a.b bVar = new a.b(this.H, this.K);
            long jC = fVar.c();
            if (!this.D.isEmpty()) {
                this.D.peek().a(bVar);
            } else {
                int i3 = 0;
                if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.F) {
                    s sVar2 = bVar.aV;
                    sVar2.c(8);
                    int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar2.i());
                    sVar2.d(4);
                    long jH = sVar2.h();
                    if (iA == 0) {
                        jN = sVar2.h();
                        jN2 = sVar2.h();
                    } else {
                        jN = sVar2.n();
                        jN2 = sVar2.n();
                    }
                    long j2 = jC + jN2;
                    long j3 = jN;
                    long jA = af.a(j3, 1000000L, jH);
                    sVar2.d(2);
                    int iE = sVar2.e();
                    int[] iArr = new int[iE];
                    long[] jArr = new long[iE];
                    long[] jArr2 = new long[iE];
                    long[] jArr3 = new long[iE];
                    long jA2 = jA;
                    while (i3 < iE) {
                        int i4 = sVar2.i();
                        if ((i4 & Integer.MIN_VALUE) != 0) {
                            throw new t("Unhandled indirect reference");
                        }
                        long jH2 = sVar2.h();
                        iArr[i3] = i4 & Integer.MAX_VALUE;
                        jArr[i3] = j2;
                        jArr3[i3] = jA2;
                        j3 += jH2;
                        long[] jArr4 = jArr3;
                        long[] jArr5 = jArr2;
                        jA2 = af.a(j3, 1000000L, jH);
                        jArr5[i3] = jA2 - jArr4[i3];
                        sVar2.d(4);
                        j2 += (long) iArr[i3];
                        i3++;
                        jArr2 = jArr5;
                        jArr = jArr;
                        iE = iE;
                        jArr3 = jArr4;
                    }
                    Pair pairCreate = Pair.create(Long.valueOf(jA), new com.tkay.expressad.exoplayer.e.a(iArr, jArr, jArr2, jArr3));
                    this.P = ((Long) pairCreate.first).longValue();
                    this.V.a((com.tkay.expressad.exoplayer.e.k) pairCreate.second);
                    this.Y = true;
                } else if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.aL) {
                    s sVar3 = bVar.aV;
                    com.tkay.expressad.exoplayer.e.m[] mVarArr = this.W;
                    if (mVarArr != null && mVarArr.length != 0) {
                        sVar3.c(12);
                        int iA2 = sVar3.a();
                        sVar3.p();
                        sVar3.p();
                        long jA3 = af.a(sVar3.h(), 1000000L, sVar3.h());
                        for (com.tkay.expressad.exoplayer.e.m mVar : this.W) {
                            sVar3.c(12);
                            mVar.a(sVar3, iA2);
                        }
                        long j4 = this.P;
                        if (j4 != -9223372036854775807L) {
                            long jB = j4 + jA3;
                            ac acVar = this.A;
                            if (acVar != null) {
                                jB = acVar.b(jB);
                            }
                            com.tkay.expressad.exoplayer.e.m[] mVarArr2 = this.W;
                            int length = mVarArr2.length;
                            while (i3 < length) {
                                mVarArr2[i3].a(jB, 1, iA2, 0, null);
                                i3++;
                            }
                        } else {
                            this.E.addLast(new b(jA3, iA2));
                            this.M += iA2;
                        }
                    }
                }
            }
        } else {
            fVar.c(i2);
        }
        a(fVar.c());
    }

    private void a(long j2) throws t {
        while (!this.D.isEmpty() && this.D.peek().aV == j2) {
            a(this.D.pop());
        }
        a();
    }

    private void a(a.b bVar, long j2) throws t {
        long jN;
        long jN2;
        if (!this.D.isEmpty()) {
            this.D.peek().a(bVar);
            return;
        }
        int i2 = 0;
        if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.F) {
            s sVar = bVar.aV;
            sVar.c(8);
            int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
            sVar.d(4);
            long jH = sVar.h();
            if (iA == 0) {
                jN = sVar.h();
                jN2 = sVar.h();
            } else {
                jN = sVar.n();
                jN2 = sVar.n();
            }
            long j3 = jN;
            long j4 = j2 + jN2;
            long jA = af.a(j3, 1000000L, jH);
            sVar.d(2);
            int iE = sVar.e();
            int[] iArr = new int[iE];
            long[] jArr = new long[iE];
            long[] jArr2 = new long[iE];
            long[] jArr3 = new long[iE];
            long jA2 = jA;
            while (i2 < iE) {
                int i3 = sVar.i();
                if ((i3 & Integer.MIN_VALUE) != 0) {
                    throw new t("Unhandled indirect reference");
                }
                long jH2 = sVar.h();
                iArr[i2] = i3 & Integer.MAX_VALUE;
                jArr[i2] = j4;
                jArr3[i2] = jA2;
                long j5 = j3 + jH2;
                int i4 = iE;
                long[] jArr4 = jArr2;
                long[] jArr5 = jArr3;
                int[] iArr2 = iArr;
                jA2 = af.a(j5, 1000000L, jH);
                jArr4[i2] = jA2 - jArr5[i2];
                sVar.d(4);
                j4 += (long) iArr2[i2];
                i2++;
                jArr3 = jArr5;
                iArr = iArr2;
                jArr = jArr;
                j3 = j5;
                iE = i4;
                jArr2 = jArr4;
            }
            Pair pairCreate = Pair.create(Long.valueOf(jA), new com.tkay.expressad.exoplayer.e.a(iArr, jArr, jArr2, jArr3));
            this.P = ((Long) pairCreate.first).longValue();
            this.V.a((com.tkay.expressad.exoplayer.e.k) pairCreate.second);
            this.Y = true;
            return;
        }
        if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.aL) {
            s sVar2 = bVar.aV;
            com.tkay.expressad.exoplayer.e.m[] mVarArr = this.W;
            if (mVarArr == null || mVarArr.length == 0) {
                return;
            }
            sVar2.c(12);
            int iA2 = sVar2.a();
            sVar2.p();
            sVar2.p();
            long jA3 = af.a(sVar2.h(), 1000000L, sVar2.h());
            for (com.tkay.expressad.exoplayer.e.m mVar : this.W) {
                sVar2.c(12);
                mVar.a(sVar2, iA2);
            }
            long j6 = this.P;
            if (j6 != -9223372036854775807L) {
                long jB = j6 + jA3;
                ac acVar = this.A;
                if (acVar != null) {
                    jB = acVar.b(jB);
                }
                com.tkay.expressad.exoplayer.e.m[] mVarArr2 = this.W;
                int length = mVarArr2.length;
                while (i2 < length) {
                    mVarArr2[i2].a(jB, 1, iA2, 0, null);
                    i2++;
                }
                return;
            }
            this.E.addLast(new b(jA3, iA2));
            this.M += iA2;
        }
    }

    private void a(a.C0442a c0442a) throws t {
        if (c0442a.aU == com.tkay.expressad.exoplayer.e.a.a.G) {
            b(c0442a);
        } else if (c0442a.aU == com.tkay.expressad.exoplayer.e.a.a.P) {
            c(c0442a);
        } else {
            if (this.D.isEmpty()) {
                return;
            }
            this.D.peek().a(c0442a);
        }
    }

    private void b(a.C0442a c0442a) throws t {
        int i2;
        int i3;
        int i4 = 0;
        com.tkay.expressad.exoplayer.k.a.b(this.t == null, "Unexpected moov box.");
        com.tkay.expressad.exoplayer.d.e eVarA = this.v;
        if (eVarA == null) {
            eVarA = a(c0442a.aW);
        }
        a.C0442a c0442aE = c0442a.e(com.tkay.expressad.exoplayer.e.a.a.R);
        SparseArray sparseArray = new SparseArray();
        int size = c0442aE.aW.size();
        long jC = -9223372036854775807L;
        for (int i5 = 0; i5 < size; i5++) {
            a.b bVar = c0442aE.aW.get(i5);
            if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.D) {
                Pair<Integer, com.tkay.expressad.exoplayer.e.a.c> pairB = b(bVar.aV);
                sparseArray.put(((Integer) pairB.first).intValue(), (com.tkay.expressad.exoplayer.e.a.c) pairB.second);
            } else if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.S) {
                jC = c(bVar.aV);
            }
        }
        SparseArray sparseArray2 = new SparseArray();
        int size2 = c0442a.aX.size();
        int i6 = 0;
        while (i6 < size2) {
            a.C0442a c0442a2 = c0442a.aX.get(i6);
            if (c0442a2.aU == com.tkay.expressad.exoplayer.e.a.a.I) {
                i2 = i6;
                i3 = size2;
                j jVarA = com.tkay.expressad.exoplayer.e.a.b.a(c0442a2, c0442a.d(com.tkay.expressad.exoplayer.e.a.a.H), jC, eVarA, (this.s & 16) != 0, false);
                if (jVarA != null) {
                    sparseArray2.put(jVarA.c, jVarA);
                }
            } else {
                i2 = i6;
                i3 = size2;
            }
            i6 = i2 + 1;
            size2 = i3;
        }
        int size3 = sparseArray2.size();
        if (this.w.size() == 0) {
            while (i4 < size3) {
                j jVar = (j) sparseArray2.valueAt(i4);
                c cVar = new c(this.V.a(i4, jVar.d));
                cVar.a(jVar, a((SparseArray<com.tkay.expressad.exoplayer.e.a.c>) sparseArray, jVar.c));
                this.w.put(jVar.c, cVar);
                this.O = Math.max(this.O, jVar.g);
                i4++;
            }
            b();
            this.V.c_();
            return;
        }
        com.tkay.expressad.exoplayer.k.a.b(this.w.size() == size3);
        while (i4 < size3) {
            j jVar2 = (j) sparseArray2.valueAt(i4);
            this.w.get(jVar2.c).a(jVar2, a((SparseArray<com.tkay.expressad.exoplayer.e.a.c>) sparseArray, jVar2.c));
            i4++;
        }
    }

    private static com.tkay.expressad.exoplayer.e.a.c a(SparseArray<com.tkay.expressad.exoplayer.e.a.c> sparseArray, int i2) {
        if (sparseArray.size() == 1) {
            return sparseArray.valueAt(0);
        }
        return (com.tkay.expressad.exoplayer.e.a.c) com.tkay.expressad.exoplayer.k.a.a(sparseArray.get(i2));
    }

    private void c(a.C0442a c0442a) throws t {
        a(c0442a, this.w, this.s, this.C);
        com.tkay.expressad.exoplayer.d.e eVarA = this.v != null ? null : a(c0442a.aW);
        if (eVarA != null) {
            int size = this.w.size();
            for (int i2 = 0; i2 < size; i2++) {
                this.w.valueAt(i2).a(eVarA);
            }
        }
        if (this.N != -9223372036854775807L) {
            int size2 = this.w.size();
            for (int i3 = 0; i3 < size2; i3++) {
                this.w.valueAt(i3).a(this.N);
            }
            this.N = -9223372036854775807L;
        }
    }

    private void b() {
        int i2;
        if (this.W == null) {
            com.tkay.expressad.exoplayer.e.m[] mVarArr = new com.tkay.expressad.exoplayer.e.m[2];
            this.W = mVarArr;
            com.tkay.expressad.exoplayer.e.m mVar = this.F;
            if (mVar != null) {
                mVarArr[0] = mVar;
                i2 = 1;
            } else {
                i2 = 0;
            }
            if ((this.s & 4) != 0) {
                this.W[i2] = this.V.a(this.w.size(), 4);
                i2++;
            }
            com.tkay.expressad.exoplayer.e.m[] mVarArr2 = (com.tkay.expressad.exoplayer.e.m[]) Arrays.copyOf(this.W, i2);
            this.W = mVarArr2;
            for (com.tkay.expressad.exoplayer.e.m mVar2 : mVarArr2) {
                mVar2.a(m);
            }
        }
        if (this.X == null) {
            this.X = new com.tkay.expressad.exoplayer.e.m[this.u.size()];
            for (int i3 = 0; i3 < this.X.length; i3++) {
                com.tkay.expressad.exoplayer.e.m mVarA = this.V.a(this.w.size() + 1 + i3, 3);
                mVarA.a(this.u.get(i3));
                this.X[i3] = mVarA;
            }
        }
    }

    private void a(s sVar) {
        com.tkay.expressad.exoplayer.e.m[] mVarArr = this.W;
        if (mVarArr == null || mVarArr.length == 0) {
            return;
        }
        sVar.c(12);
        int iA = sVar.a();
        sVar.p();
        sVar.p();
        long jA = af.a(sVar.h(), 1000000L, sVar.h());
        for (com.tkay.expressad.exoplayer.e.m mVar : this.W) {
            sVar.c(12);
            mVar.a(sVar, iA);
        }
        long j2 = this.P;
        if (j2 != -9223372036854775807L) {
            long jB = j2 + jA;
            ac acVar = this.A;
            if (acVar != null) {
                jB = acVar.b(jB);
            }
            long j3 = jB;
            for (com.tkay.expressad.exoplayer.e.m mVar2 : this.W) {
                mVar2.a(j3, 1, iA, 0, null);
            }
            return;
        }
        this.E.addLast(new b(jA, iA));
        this.M += iA;
    }

    private static Pair<Integer, com.tkay.expressad.exoplayer.e.a.c> b(s sVar) {
        sVar.c(12);
        return Pair.create(Integer.valueOf(sVar.i()), new com.tkay.expressad.exoplayer.e.a.c(sVar.m() - 1, sVar.m(), sVar.m(), sVar.i()));
    }

    private static long c(s sVar) {
        sVar.c(8);
        return com.tkay.expressad.exoplayer.e.a.a.a(sVar.i()) == 0 ? sVar.h() : sVar.n();
    }

    private static void a(a.C0442a c0442a, SparseArray<c> sparseArray, int i2, byte[] bArr) throws t {
        int size = c0442a.aX.size();
        for (int i3 = 0; i3 < size; i3++) {
            a.C0442a c0442a2 = c0442a.aX.get(i3);
            if (c0442a2.aU == com.tkay.expressad.exoplayer.e.a.a.Q) {
                b(c0442a2, sparseArray, i2, bArr);
            }
        }
    }

    private static void b(a.C0442a c0442a, SparseArray<c> sparseArray, int i2, byte[] bArr) throws t {
        c cVarA = a(c0442a.d(com.tkay.expressad.exoplayer.e.a.a.C).aV, sparseArray);
        if (cVarA == null) {
            return;
        }
        l lVar = cVarA.b;
        long jD = lVar.s;
        cVarA.a();
        if (c0442a.d(com.tkay.expressad.exoplayer.e.a.a.B) != null && (i2 & 2) == 0) {
            jD = d(c0442a.d(com.tkay.expressad.exoplayer.e.a.a.B).aV);
        }
        a(c0442a, cVarA, jD, i2);
        k kVarA = cVarA.c.a(lVar.f6567a.f6555a);
        a.b bVarD = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.ah);
        if (bVarD != null) {
            a(kVarA, bVarD.aV, lVar);
        }
        a.b bVarD2 = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.ai);
        if (bVarD2 != null) {
            a(bVarD2.aV, lVar);
        }
        a.b bVarD3 = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.am);
        if (bVarD3 != null) {
            a(bVarD3.aV, 0, lVar);
        }
        a.b bVarD4 = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.aj);
        a.b bVarD5 = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.ak);
        if (bVarD4 != null && bVarD5 != null) {
            a(bVarD4.aV, bVarD5.aV, kVarA != null ? kVarA.b : null, lVar);
        }
        int size = c0442a.aW.size();
        for (int i3 = 0; i3 < size; i3++) {
            a.b bVar = c0442a.aW.get(i3);
            if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.al) {
                a(bVar.aV, lVar, bArr);
            }
        }
    }

    private static void a(a.C0442a c0442a, c cVar, long j2, int i2) {
        List<a.b> list = c0442a.aW;
        int size = list.size();
        int i3 = 0;
        int i4 = 0;
        for (int i5 = 0; i5 < size; i5++) {
            a.b bVar = list.get(i5);
            if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.E) {
                s sVar = bVar.aV;
                sVar.c(12);
                int iM = sVar.m();
                if (iM > 0) {
                    i4 += iM;
                    i3++;
                }
            }
        }
        cVar.g = 0;
        cVar.f = 0;
        cVar.e = 0;
        cVar.b.a(i3, i4);
        int i6 = 0;
        int iA = 0;
        for (int i7 = 0; i7 < size; i7++) {
            a.b bVar2 = list.get(i7);
            if (bVar2.aU == com.tkay.expressad.exoplayer.e.a.a.E) {
                iA = a(cVar, i6, j2, i2, bVar2.aV, iA);
                i6++;
            }
        }
    }

    private static void a(k kVar, s sVar, l lVar) throws t {
        int i2;
        int i3 = kVar.d;
        sVar.c(8);
        if ((com.tkay.expressad.exoplayer.e.a.a.b(sVar.i()) & 1) == 1) {
            sVar.d(8);
        }
        int iD = sVar.d();
        int iM = sVar.m();
        if (iM != lVar.f) {
            throw new t("Length mismatch: " + iM + ", " + lVar.f);
        }
        if (iD == 0) {
            boolean[] zArr = lVar.n;
            i2 = 0;
            for (int i4 = 0; i4 < iM; i4++) {
                int iD2 = sVar.d();
                i2 += iD2;
                zArr[i4] = iD2 > i3;
            }
        } else {
            i2 = (iD * iM) + 0;
            Arrays.fill(lVar.n, 0, iM, iD > i3);
        }
        lVar.a(i2);
    }

    private static void a(s sVar, l lVar) throws t {
        sVar.c(8);
        int i2 = sVar.i();
        if ((com.tkay.expressad.exoplayer.e.a.a.b(i2) & 1) == 1) {
            sVar.d(8);
        }
        int iM = sVar.m();
        if (iM != 1) {
            throw new t("Unexpected saio entry count: ".concat(String.valueOf(iM)));
        }
        lVar.d += com.tkay.expressad.exoplayer.e.a.a.a(i2) == 0 ? sVar.h() : sVar.n();
    }

    private static c a(s sVar, SparseArray<c> sparseArray) {
        sVar.c(8);
        int iB = com.tkay.expressad.exoplayer.e.a.a.b(sVar.i());
        c cVarB = b(sparseArray, sVar.i());
        if (cVarB == null) {
            return null;
        }
        if ((iB & 1) != 0) {
            long jN = sVar.n();
            cVarB.b.c = jN;
            cVarB.b.d = jN;
        }
        com.tkay.expressad.exoplayer.e.a.c cVar = cVarB.d;
        cVarB.b.f6567a = new com.tkay.expressad.exoplayer.e.a.c((iB & 2) != 0 ? sVar.m() - 1 : cVar.f6555a, (iB & 8) != 0 ? sVar.m() : cVar.b, (iB & 16) != 0 ? sVar.m() : cVar.c, (iB & 32) != 0 ? sVar.m() : cVar.d);
        return cVarB;
    }

    private static c b(SparseArray<c> sparseArray, int i2) {
        if (sparseArray.size() == 1) {
            return sparseArray.valueAt(0);
        }
        return sparseArray.get(i2);
    }

    private static long d(s sVar) {
        sVar.c(8);
        return com.tkay.expressad.exoplayer.e.a.a.a(sVar.i()) == 1 ? sVar.n() : sVar.h();
    }

    private static int a(c cVar, int i2, long j2, int i3, s sVar, int i4) {
        int iM;
        boolean z;
        int iM2;
        boolean z2;
        int i5;
        boolean z3;
        boolean z4;
        boolean z5;
        boolean z6;
        sVar.c(8);
        int iB = com.tkay.expressad.exoplayer.e.a.a.b(sVar.i());
        j jVar = cVar.c;
        l lVar = cVar.b;
        com.tkay.expressad.exoplayer.e.a.c cVar2 = lVar.f6567a;
        lVar.h[i2] = sVar.m();
        lVar.g[i2] = lVar.c;
        if ((iB & 1) != 0) {
            long[] jArr = lVar.g;
            jArr[i2] = jArr[i2] + ((long) sVar.i());
        }
        boolean z7 = (iB & 4) != 0;
        int iM3 = cVar2.d;
        if (z7) {
            iM3 = sVar.m();
        }
        boolean z8 = (iB & 256) != 0;
        boolean z9 = (iB & 512) != 0;
        boolean z10 = (iB & 1024) != 0;
        boolean z11 = (iB & 2048) != 0;
        long jA = 0;
        if (jVar.j != null && jVar.j.length == 1 && jVar.j[0] == 0) {
            jA = af.a(jVar.k[0], 1000L, jVar.e);
        }
        int[] iArr = lVar.i;
        int[] iArr2 = lVar.j;
        long[] jArr2 = lVar.k;
        boolean[] zArr = lVar.l;
        int i6 = iM3;
        boolean z12 = jVar.d == 2 && (i3 & 1) != 0;
        int i7 = i4 + lVar.h[i2];
        long j3 = jVar.e;
        long j4 = jA;
        long j5 = i2 > 0 ? lVar.s : j2;
        int i8 = i4;
        while (i8 < i7) {
            if (z8) {
                iM = sVar.m();
            } else {
                iM = cVar2.b;
            }
            if (z9) {
                z = z8;
                iM2 = sVar.m();
            } else {
                z = z8;
                iM2 = cVar2.c;
            }
            if (i8 == 0 && z7) {
                z2 = z7;
                i5 = i6;
            } else if (z10) {
                z2 = z7;
                i5 = sVar.i();
            } else {
                z2 = z7;
                i5 = cVar2.d;
            }
            if (z11) {
                z3 = z11;
                z4 = z9;
                z5 = z10;
                iArr2[i8] = (int) ((((long) sVar.i()) * 1000) / j3);
                z6 = false;
            } else {
                z3 = z11;
                z4 = z9;
                z5 = z10;
                z6 = false;
                iArr2[i8] = 0;
            }
            jArr2[i8] = af.a(j5, 1000L, j3) - j4;
            iArr[i8] = iM2;
            zArr[i8] = (((i5 >> 16) & 1) != 0 || (z12 && i8 != 0)) ? z6 : true;
            i8++;
            j5 += (long) iM;
            j3 = j3;
            z8 = z;
            z7 = z2;
            z11 = z3;
            z9 = z4;
            z10 = z5;
        }
        lVar.s = j5;
        return i7;
    }

    private static void a(s sVar, l lVar, byte[] bArr) throws t {
        sVar.c(8);
        sVar.a(bArr, 0, 16);
        if (Arrays.equals(bArr, l)) {
            a(sVar, 16, lVar);
        }
    }

    private static void b(s sVar, l lVar) throws t {
        a(sVar, 0, lVar);
    }

    private static void a(s sVar, int i2, l lVar) throws t {
        sVar.c(i2 + 8);
        int iB = com.tkay.expressad.exoplayer.e.a.a.b(sVar.i());
        if ((iB & 1) != 0) {
            throw new t("Overriding TrackEncryptionBox parameters is unsupported.");
        }
        boolean z = (iB & 2) != 0;
        int iM = sVar.m();
        if (iM != lVar.f) {
            throw new t("Length mismatch: " + iM + ", " + lVar.f);
        }
        Arrays.fill(lVar.n, 0, iM, z);
        lVar.a(sVar.a());
        lVar.a(sVar);
    }

    private static void a(s sVar, s sVar2, String str, l lVar) throws t {
        byte[] bArr;
        sVar.c(8);
        int i2 = sVar.i();
        if (sVar.i() != k) {
            return;
        }
        if (com.tkay.expressad.exoplayer.e.a.a.a(i2) == 1) {
            sVar.d(4);
        }
        if (sVar.i() != 1) {
            throw new t("Entry count in sbgp != 1 (unsupported).");
        }
        sVar2.c(8);
        int i3 = sVar2.i();
        if (sVar2.i() != k) {
            return;
        }
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(i3);
        if (iA == 1) {
            if (sVar2.h() == 0) {
                throw new t("Variable length description in sgpd found (unsupported)");
            }
        } else if (iA >= 2) {
            sVar2.d(4);
        }
        if (sVar2.h() != 1) {
            throw new t("Entry count in sgpd != 1 (unsupported).");
        }
        sVar2.d(1);
        int iD = sVar2.d();
        int i4 = (iD & PsExtractor.VIDEO_STREAM_MASK) >> 4;
        int i5 = iD & 15;
        if (sVar2.d() == 1) {
            int iD2 = sVar2.d();
            byte[] bArr2 = new byte[16];
            sVar2.a(bArr2, 0, 16);
            if (iD2 == 0) {
                int iD3 = sVar2.d();
                byte[] bArr3 = new byte[iD3];
                sVar2.a(bArr3, 0, iD3);
                bArr = bArr3;
            } else {
                bArr = null;
            }
            lVar.m = true;
            lVar.o = new k(true, str, iD2, bArr2, i4, i5, bArr);
        }
    }

    private static Pair<Long, com.tkay.expressad.exoplayer.e.a> a(s sVar, long j2) throws t {
        long jN;
        long jN2;
        sVar.c(8);
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
        sVar.d(4);
        long jH = sVar.h();
        if (iA == 0) {
            jN = sVar.h();
            jN2 = sVar.h();
        } else {
            jN = sVar.n();
            jN2 = sVar.n();
        }
        long j3 = jN;
        long j4 = j2 + jN2;
        long jA = af.a(j3, 1000000L, jH);
        sVar.d(2);
        int iE = sVar.e();
        int[] iArr = new int[iE];
        long[] jArr = new long[iE];
        long[] jArr2 = new long[iE];
        long[] jArr3 = new long[iE];
        long j5 = jA;
        int i2 = 0;
        long j6 = j3;
        while (i2 < iE) {
            int i3 = sVar.i();
            if ((i3 & Integer.MIN_VALUE) != 0) {
                throw new t("Unhandled indirect reference");
            }
            long jH2 = sVar.h();
            iArr[i2] = i3 & Integer.MAX_VALUE;
            jArr[i2] = j4;
            jArr3[i2] = j5;
            long j7 = j6 + jH2;
            long[] jArr4 = jArr2;
            long[] jArr5 = jArr3;
            int i4 = iE;
            int[] iArr2 = iArr;
            long jA2 = af.a(j7, 1000000L, jH);
            jArr4[i2] = jA2 - jArr5[i2];
            sVar.d(4);
            j4 += (long) iArr2[i2];
            i2++;
            iArr = iArr2;
            jArr3 = jArr5;
            jArr2 = jArr4;
            jArr = jArr;
            iE = i4;
            j6 = j7;
            j5 = jA2;
        }
        return Pair.create(Long.valueOf(jA), new com.tkay.expressad.exoplayer.e.a(iArr, jArr, jArr2, jArr3));
    }

    private void d(com.tkay.expressad.exoplayer.e.f fVar) throws t {
        int size = this.w.size();
        c cVarValueAt = null;
        long j2 = Long.MAX_VALUE;
        for (int i2 = 0; i2 < size; i2++) {
            l lVar = this.w.valueAt(i2).b;
            if (lVar.r && lVar.d < j2) {
                long j3 = lVar.d;
                cVarValueAt = this.w.valueAt(i2);
                j2 = j3;
            }
        }
        if (cVarValueAt == null) {
            this.G = 3;
            return;
        }
        int iC = (int) (j2 - fVar.c());
        if (iC < 0) {
            throw new t("Offset to encryption data was negative.");
        }
        fVar.c(iC);
        l lVar2 = cVarValueAt.b;
        fVar.b(lVar2.q.f6774a, 0, lVar2.p);
        lVar2.q.c(0);
        lVar2.r = false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private boolean e(com.tkay.expressad.exoplayer.e.f fVar) throws t {
        int i2;
        m.a aVar;
        k kVarA;
        int iA;
        int i3 = 4;
        int i4 = 1;
        if (this.G == 3) {
            if (this.Q == null) {
                SparseArray<c> sparseArray = this.w;
                long j2 = Long.MAX_VALUE;
                int size = sparseArray.size();
                c cVar = null;
                for (int i5 = 0; i5 < size; i5++) {
                    c cVarValueAt = sparseArray.valueAt(i5);
                    if (cVarValueAt.g != cVarValueAt.b.e) {
                        long j3 = cVarValueAt.b.g[cVarValueAt.g];
                        if (j3 < j2) {
                            cVar = cVarValueAt;
                            j2 = j3;
                        }
                    }
                }
                if (cVar == null) {
                    int iC = (int) (this.L - fVar.c());
                    if (iC < 0) {
                        throw new t("Offset to end of mdat was negative.");
                    }
                    fVar.c(iC);
                    a();
                    return false;
                }
                int iC2 = (int) (cVar.b.g[cVar.g] - fVar.c());
                if (iC2 < 0) {
                    Log.w(j, "Ignoring negative offset to sample data.");
                    iC2 = 0;
                }
                fVar.c(iC2);
                this.Q = cVar;
            }
            this.R = this.Q.b.i[this.Q.e];
            if (this.Q.e < this.Q.h) {
                fVar.c(this.R);
                c.a(this.Q);
                if (!this.Q.b()) {
                    this.Q = null;
                }
                this.G = 3;
                return true;
            }
            if (this.Q.c.i == 1) {
                this.R -= 8;
                fVar.c(8);
            }
            int iC3 = this.Q.c();
            this.S = iC3;
            this.R += iC3;
            this.G = 4;
            this.T = 0;
        }
        l lVar = this.Q.b;
        j jVar = this.Q.c;
        com.tkay.expressad.exoplayer.e.m mVar = this.Q.f6559a;
        int i6 = this.Q.e;
        long jB = lVar.b(i6) * 1000;
        ac acVar = this.A;
        if (acVar != null) {
            jB = acVar.b(jB);
        }
        long j4 = jB;
        if (jVar.l == 0) {
            while (true) {
                int i7 = this.S;
                int i8 = this.R;
                if (i7 >= i8) {
                    break;
                }
                this.S += mVar.a(fVar, i8 - i7, false);
            }
        } else {
            byte[] bArr = this.y.f6774a;
            bArr[0] = 0;
            bArr[1] = 0;
            bArr[2] = 0;
            int i9 = jVar.l + 1;
            int i10 = 4 - jVar.l;
            while (this.S < this.R) {
                int i11 = this.T;
                if (i11 == 0) {
                    fVar.b(bArr, i10, i9);
                    this.y.c(0);
                    this.T = this.y.m() - i4;
                    this.x.c(0);
                    mVar.a(this.x, i3);
                    mVar.a(this.y, i4);
                    this.U = (this.X.length <= 0 || !p.a(jVar.h.h, bArr[i3])) ? 0 : i4;
                    this.S += 5;
                    this.R += i10;
                } else {
                    if (this.U) {
                        this.z.a(i11);
                        fVar.b(this.z.f6774a, 0, this.T);
                        mVar.a(this.z, this.T);
                        iA = this.T;
                        int iA2 = p.a(this.z.f6774a, this.z.b());
                        this.z.c("video/hevc".equals(jVar.h.h) ? 1 : 0);
                        this.z.b(iA2);
                    } else {
                        iA = mVar.a(fVar, i11, false);
                    }
                    this.S += iA;
                    this.T -= iA;
                    i3 = 4;
                    i4 = 1;
                }
            }
        }
        boolean z = lVar.l[i6];
        if (lVar.m) {
            int i12 = (z ? 1 : 0) | 1073741824;
            if (lVar.o != null) {
                kVarA = lVar.o;
            } else {
                kVarA = jVar.a(lVar.f6567a.f6555a);
            }
            i2 = i12;
            aVar = kVarA.c;
        } else {
            i2 = z ? 1 : 0;
            aVar = null;
        }
        mVar.a(j4, i2, this.R, 0, aVar);
        while (!this.E.isEmpty()) {
            b bVarRemoveFirst = this.E.removeFirst();
            this.M -= bVarRemoveFirst.b;
            long jB2 = j4 + bVarRemoveFirst.f6558a;
            ac acVar2 = this.A;
            if (acVar2 != null) {
                jB2 = acVar2.b(jB2);
            }
            for (com.tkay.expressad.exoplayer.e.m mVar2 : this.W) {
                mVar2.a(jB2, 1, bVarRemoveFirst.b, this.M, null);
            }
        }
        if (!this.Q.b()) {
            this.Q = null;
        }
        this.G = 3;
        return true;
    }

    private void b(long j2) {
        while (!this.E.isEmpty()) {
            b bVarRemoveFirst = this.E.removeFirst();
            this.M -= bVarRemoveFirst.b;
            long jB = bVarRemoveFirst.f6558a + j2;
            ac acVar = this.A;
            if (acVar != null) {
                jB = acVar.b(jB);
            }
            for (com.tkay.expressad.exoplayer.e.m mVar : this.W) {
                mVar.a(jB, 1, bVarRemoveFirst.b, this.M, null);
            }
        }
    }

    private static c a(SparseArray<c> sparseArray) {
        int size = sparseArray.size();
        c cVar = null;
        long j2 = Long.MAX_VALUE;
        for (int i2 = 0; i2 < size; i2++) {
            c cVarValueAt = sparseArray.valueAt(i2);
            if (cVarValueAt.g != cVarValueAt.b.e) {
                long j3 = cVarValueAt.b.g[cVarValueAt.g];
                if (j3 < j2) {
                    cVar = cVarValueAt;
                    j2 = j3;
                }
            }
        }
        return cVar;
    }

    private static com.tkay.expressad.exoplayer.d.e a(List<a.b> list) {
        int size = list.size();
        ArrayList arrayList = null;
        for (int i2 = 0; i2 < size; i2++) {
            a.b bVar = list.get(i2);
            if (bVar.aU == com.tkay.expressad.exoplayer.e.a.a.Z) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                byte[] bArr = bVar.aV.f6774a;
                UUID uuidA = h.a(bArr);
                if (uuidA == null) {
                    Log.w(j, "Skipped pssh atom (failed to extract uuid)");
                } else {
                    arrayList.add(new e.a(uuidA, "video/mp4", bArr));
                }
            }
        }
        if (arrayList == null) {
            return null;
        }
        return new com.tkay.expressad.exoplayer.d.e(arrayList);
    }

    private static boolean a(int i2) {
        return i2 == com.tkay.expressad.exoplayer.e.a.a.X || i2 == com.tkay.expressad.exoplayer.e.a.a.W || i2 == com.tkay.expressad.exoplayer.e.a.a.H || i2 == com.tkay.expressad.exoplayer.e.a.a.F || i2 == com.tkay.expressad.exoplayer.e.a.a.Y || i2 == com.tkay.expressad.exoplayer.e.a.a.B || i2 == com.tkay.expressad.exoplayer.e.a.a.C || i2 == com.tkay.expressad.exoplayer.e.a.a.T || i2 == com.tkay.expressad.exoplayer.e.a.a.D || i2 == com.tkay.expressad.exoplayer.e.a.a.E || i2 == com.tkay.expressad.exoplayer.e.a.a.Z || i2 == com.tkay.expressad.exoplayer.e.a.a.ah || i2 == com.tkay.expressad.exoplayer.e.a.a.ai || i2 == com.tkay.expressad.exoplayer.e.a.a.am || i2 == com.tkay.expressad.exoplayer.e.a.a.al || i2 == com.tkay.expressad.exoplayer.e.a.a.aj || i2 == com.tkay.expressad.exoplayer.e.a.a.ak || i2 == com.tkay.expressad.exoplayer.e.a.a.V || i2 == com.tkay.expressad.exoplayer.e.a.a.S || i2 == com.tkay.expressad.exoplayer.e.a.a.aL;
    }

    private static boolean b(int i2) {
        return i2 == com.tkay.expressad.exoplayer.e.a.a.G || i2 == com.tkay.expressad.exoplayer.e.a.a.I || i2 == com.tkay.expressad.exoplayer.e.a.a.J || i2 == com.tkay.expressad.exoplayer.e.a.a.K || i2 == com.tkay.expressad.exoplayer.e.a.a.L || i2 == com.tkay.expressad.exoplayer.e.a.a.P || i2 == com.tkay.expressad.exoplayer.e.a.a.Q || i2 == com.tkay.expressad.exoplayer.e.a.a.R || i2 == com.tkay.expressad.exoplayer.e.a.a.U;
    }

    private static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final long f6558a;
        public final int b;

        public b(long j, int i) {
            this.f6558a = j;
            this.b = i;
        }
    }

    private static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final com.tkay.expressad.exoplayer.e.m f6559a;
        public j c;
        public com.tkay.expressad.exoplayer.e.a.c d;
        public int e;
        public int f;
        public int g;
        public int h;
        public final l b = new l();
        private final s i = new s(1);
        private final s j = new s();

        public c(com.tkay.expressad.exoplayer.e.m mVar) {
            this.f6559a = mVar;
        }

        public final void a(j jVar, com.tkay.expressad.exoplayer.e.a.c cVar) {
            this.c = (j) com.tkay.expressad.exoplayer.k.a.a(jVar);
            this.d = (com.tkay.expressad.exoplayer.e.a.c) com.tkay.expressad.exoplayer.k.a.a(cVar);
            this.f6559a.a(jVar.h);
            a();
        }

        public final void a(com.tkay.expressad.exoplayer.d.e eVar) {
            k kVarA = this.c.a(this.b.f6567a.f6555a);
            this.f6559a.a(this.c.h.a(eVar.a(kVarA != null ? kVarA.b : null)));
        }

        public final void a() {
            this.b.a();
            this.e = 0;
            this.g = 0;
            this.f = 0;
            this.h = 0;
        }

        public final void a(long j) {
            long jA = com.tkay.expressad.exoplayer.b.a(j);
            for (int i = this.e; i < this.b.f && this.b.b(i) < jA; i++) {
                if (this.b.l[i]) {
                    this.h = i;
                }
            }
        }

        public final boolean b() {
            this.e++;
            int i = this.f + 1;
            this.f = i;
            int[] iArr = this.b.h;
            int i2 = this.g;
            if (i != iArr[i2]) {
                return true;
            }
            this.g = i2 + 1;
            this.f = 0;
            return false;
        }

        public final int c() {
            s sVar;
            int length;
            if (!this.b.m) {
                return 0;
            }
            k kVarE = e();
            if (kVarE.d != 0) {
                sVar = this.b.q;
                length = kVarE.d;
            } else {
                byte[] bArr = kVarE.e;
                this.j.a(bArr, bArr.length);
                sVar = this.j;
                length = bArr.length;
            }
            boolean z = this.b.n[this.e];
            this.i.f6774a[0] = (byte) ((z ? 128 : 0) | length);
            this.i.c(0);
            this.f6559a.a(this.i, 1);
            this.f6559a.a(sVar, length);
            if (!z) {
                return length + 1;
            }
            s sVar2 = this.b.q;
            int iE = sVar2.e();
            sVar2.d(-2);
            int i = (iE * 6) + 2;
            this.f6559a.a(sVar2, i);
            return length + 1 + i;
        }

        private void d() {
            if (this.b.m) {
                s sVar = this.b.q;
                k kVarE = e();
                if (kVarE.d != 0) {
                    sVar.d(kVarE.d);
                }
                if (this.b.n[this.e]) {
                    sVar.d(sVar.e() * 6);
                }
            }
        }

        private k e() {
            int i = this.b.f6567a.f6555a;
            if (this.b.o != null) {
                return this.b.o;
            }
            return this.c.a(i);
        }

        static /* synthetic */ void a(c cVar) {
            if (cVar.b.m) {
                s sVar = cVar.b.q;
                k kVarE = cVar.e();
                if (kVarE.d != 0) {
                    sVar.d(kVarE.d);
                }
                if (cVar.b.n[cVar.e]) {
                    sVar.d(sVar.e() * 6);
                }
            }
        }
    }
}
