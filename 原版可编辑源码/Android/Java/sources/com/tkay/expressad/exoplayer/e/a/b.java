package com.tkay.expressad.exoplayer.e.a;

import android.util.Log;
import android.util.Pair;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.tkay.expressad.exoplayer.e.a.a;
import com.tkay.expressad.exoplayer.e.a.d;
import com.tkay.expressad.exoplayer.g.a;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.o;
import com.tkay.expressad.exoplayer.k.s;
import com.tkay.expressad.exoplayer.t;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

final class b {
    private static final String a = "AtomParsers";
    private static final int b = af.f("vide");
    private static final int c = af.f("soun");
    private static final int d = af.f("text");
    private static final int e = af.f("sbtl");
    private static final int f = af.f("subt");
    private static final int g = af.f("clcp");
    private static final int h = af.f(TTDownloadField.TT_META);
    private static final int i = 3;

    private interface b {
        int a();

        int b();

        boolean c();
    }

    public static final class g extends t {
    }

    /* JADX WARN: Removed duplicated region for block: B:57:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x00e7  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x00f0  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0103  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0113  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x013e  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x014b  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x01a2  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x01b9  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x01c1 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x01c2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static j a(a.a aVar, a.b bVar, long j, com.tkay.expressad.exoplayer.d.e eVar, boolean z, boolean z2) throws t {
        int i2;
        int i3;
        boolean z3;
        long jH;
        int i4;
        a.b bVar2;
        long j2;
        c cVarA;
        long[] jArr;
        long[] jArr2;
        a.a aVarE = aVar.e(com.tkay.expressad.exoplayer.e.a.a.J);
        s sVar = aVarE.d(com.tkay.expressad.exoplayer.e.a.a.X).aV;
        sVar.c(16);
        int i5 = sVar.i();
        if (i5 == c) {
            i3 = 1;
        } else {
            if (i5 == b) {
                i2 = 2;
            } else if (i5 == d || i5 == e || i5 == f || i5 == g) {
                i2 = 3;
            } else {
                i3 = i5 == h ? 4 : -1;
            }
            i3 = i2;
        }
        if (i3 == -1) {
            return null;
        }
        s sVar2 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.T).aV;
        sVar2.c(8);
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar2.i());
        sVar2.d(iA == 0 ? 8 : 16);
        int i6 = sVar2.i();
        sVar2.d(4);
        int iC = sVar2.c();
        int i7 = iA == 0 ? 4 : 8;
        int i8 = 0;
        int i9 = 0;
        while (true) {
            if (i9 >= i7) {
                z3 = true;
                break;
            }
            if (sVar2.a[iC + i9] != -1) {
                z3 = false;
                break;
            }
            i9++;
        }
        if (z3) {
            sVar2.d(i7);
        } else {
            jH = iA == 0 ? sVar2.h() : sVar2.n();
            if (jH == 0) {
            }
            sVar2.d(16);
            i4 = sVar2.i();
            int i10 = sVar2.i();
            sVar2.d(4);
            int i11 = sVar2.i();
            int i12 = sVar2.i();
            if (i4 != 0 && i10 == 65536 && i11 == -65536 && i12 == 0) {
                i8 = 90;
            } else if (i4 != 0 && i10 == -65536 && i11 == 65536 && i12 == 0) {
                i8 = 270;
            } else if (i4 == -65536 && i10 == 0 && i11 == 0 && i12 == -65536) {
                i8 = 180;
            }
            f fVar = new f(i6, jH, i8);
            if (j != -9223372036854775807L) {
                j2 = fVar.b;
                bVar2 = bVar;
            } else {
                bVar2 = bVar;
                j2 = j;
            }
            s sVar3 = bVar2.aV;
            sVar3.c(8);
            sVar3.d(com.tkay.expressad.exoplayer.e.a.a.a(sVar3.i()) != 0 ? 8 : 16);
            long jH2 = sVar3.h();
            long jA = j2 != -9223372036854775807L ? af.a(j2, 1000000L, jH2) : -9223372036854775807L;
            a.a aVarE2 = aVarE.e(com.tkay.expressad.exoplayer.e.a.a.K).e(com.tkay.expressad.exoplayer.e.a.a.L);
            s sVar4 = aVarE.d(com.tkay.expressad.exoplayer.e.a.a.W).aV;
            sVar4.c(8);
            int iA2 = com.tkay.expressad.exoplayer.e.a.a.a(sVar4.i());
            sVar4.d(iA2 != 0 ? 8 : 16);
            long jH3 = sVar4.h();
            sVar4.d(iA2 == 0 ? 4 : 8);
            int iE = sVar4.e();
            StringBuilder sb = new StringBuilder();
            sb.append((char) (((iE >> 10) & 31) + 96));
            sb.append((char) (((iE >> 5) & 31) + 96));
            sb.append((char) ((iE & 31) + 96));
            Pair pairCreate = Pair.create(Long.valueOf(jH3), sb.toString());
            cVarA = a(aVarE2.d(com.tkay.expressad.exoplayer.e.a.a.Y).aV, fVar.a, fVar.c, (String) pairCreate.second, eVar, z2);
            if (z) {
                Pair<long[], long[]> pairA = a(aVar.e(com.tkay.expressad.exoplayer.e.a.a.U));
                long[] jArr3 = (long[]) pairA.first;
                jArr2 = (long[]) pairA.second;
                jArr = jArr3;
            } else {
                jArr = null;
                jArr2 = null;
            }
            if (cVarA.c != null) {
                return null;
            }
            return new j(fVar.a, i3, ((Long) pairCreate.first).longValue(), jH2, jA, cVarA.c, cVarA.e, cVarA.b, cVarA.d, jArr, jArr2);
        }
        jH = -9223372036854775807L;
        sVar2.d(16);
        i4 = sVar2.i();
        int i102 = sVar2.i();
        sVar2.d(4);
        int i112 = sVar2.i();
        int i122 = sVar2.i();
        if (i4 != 0) {
            if (i4 != 0) {
                if (i4 == -65536) {
                    i8 = 180;
                }
            }
        }
        f fVar2 = new f(i6, jH, i8);
        if (j != -9223372036854775807L) {
        }
        s sVar32 = bVar2.aV;
        sVar32.c(8);
        sVar32.d(com.tkay.expressad.exoplayer.e.a.a.a(sVar32.i()) != 0 ? 8 : 16);
        long jH22 = sVar32.h();
        if (j2 != -9223372036854775807L) {
        }
        a.a aVarE22 = aVarE.e(com.tkay.expressad.exoplayer.e.a.a.K).e(com.tkay.expressad.exoplayer.e.a.a.L);
        s sVar42 = aVarE.d(com.tkay.expressad.exoplayer.e.a.a.W).aV;
        sVar42.c(8);
        int iA22 = com.tkay.expressad.exoplayer.e.a.a.a(sVar42.i());
        sVar42.d(iA22 != 0 ? 8 : 16);
        long jH32 = sVar42.h();
        sVar42.d(iA22 == 0 ? 4 : 8);
        int iE2 = sVar42.e();
        StringBuilder sb2 = new StringBuilder();
        sb2.append((char) (((iE2 >> 10) & 31) + 96));
        sb2.append((char) (((iE2 >> 5) & 31) + 96));
        sb2.append((char) ((iE2 & 31) + 96));
        Pair pairCreate2 = Pair.create(Long.valueOf(jH32), sb2.toString());
        cVarA = a(aVarE22.d(com.tkay.expressad.exoplayer.e.a.a.Y).aV, fVar2.a, fVar2.c, (String) pairCreate2.second, eVar, z2);
        if (z) {
        }
        if (cVarA.c != null) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x020c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static m a(j jVar, a.a aVar, com.tkay.expressad.exoplayer.e.i iVar) throws t {
        b eVar;
        boolean z;
        int iM;
        int iM2;
        j jVar2;
        String str;
        long[] jArr;
        int[] iArr;
        int i2;
        long[] jArr2;
        int[] iArr2;
        long j;
        long jA;
        String str2;
        String str3;
        int[] iArr3;
        long[] jArr3;
        long[] jArr4;
        int[] iArr4;
        int i3;
        int[] iArr5;
        int[] iArr6;
        int i4;
        a.b bVarD = aVar.d(com.tkay.expressad.exoplayer.e.a.a.av);
        if (bVarD != null) {
            eVar = new d(bVarD);
        } else {
            a.b bVarD2 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.aw);
            if (bVarD2 == null) {
                throw new t("Track has no sample table size information");
            }
            eVar = new e(bVarD2);
        }
        int iA = eVar.a();
        if (iA == 0) {
            return new m(jVar, new long[0], new int[0], 0, new long[0], new int[0], -9223372036854775807L);
        }
        a.b bVarD3 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.ax);
        if (bVarD3 == null) {
            bVarD3 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.ay);
            z = true;
        } else {
            z = false;
        }
        s sVar = bVarD3.aV;
        s sVar2 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.au).aV;
        s sVar3 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.ar).aV;
        a.b bVarD4 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.as);
        s sVar4 = null;
        s sVar5 = bVarD4 != null ? bVarD4.aV : null;
        a.b bVarD5 = aVar.d(com.tkay.expressad.exoplayer.e.a.a.at);
        s sVar6 = bVarD5 != null ? bVarD5.aV : null;
        a aVar2 = new a(sVar2, sVar, z);
        sVar3.c(12);
        int iM3 = sVar3.m() - 1;
        int iM4 = sVar3.m();
        int iM5 = sVar3.m();
        if (sVar6 != null) {
            sVar6.c(12);
            iM = sVar6.m();
        } else {
            iM = 0;
        }
        if (sVar5 != null) {
            sVar5.c(12);
            iM2 = sVar5.m();
            iM = iM2 > 0 ? sVar5.m() - 1 : -1;
            long j2 = 0;
            if (!eVar.c() && "audio/raw".equals(jVar.h.h) && iM3 == 0 && iM == 0 && iM2 == 0) {
                long[] jArr5 = new long[iA];
                int[] iArr7 = new int[iA];
                int i5 = iM2;
                long[] jArr6 = new long[iA];
                iArr2 = new int[iA];
                int i6 = iM5;
                long j3 = 0;
                long j4 = 0;
                int i7 = iM3;
                int i8 = 0;
                int i9 = 0;
                int iM6 = 0;
                int i10 = 0;
                int i11 = 0;
                int i12 = i5;
                int iM7 = iM;
                int i13 = iM;
                int i14 = iM4;
                while (i8 < iA) {
                    while (i11 == 0) {
                        com.tkay.expressad.exoplayer.k.a.b(aVar2.a());
                        j4 = aVar2.d;
                        i11 = aVar2.c;
                        i7 = i7;
                        i14 = i14;
                    }
                    int i15 = i7;
                    int i16 = i14;
                    if (sVar6 != null) {
                        while (iM6 == 0 && i13 > 0) {
                            iM6 = sVar6.m();
                            i10 = sVar6.i();
                            i13--;
                        }
                        iM6--;
                    }
                    int i17 = i10;
                    jArr5[i8] = j4;
                    iArr7[i8] = eVar.b();
                    if (iArr7[i8] > i9) {
                        i9 = iArr7[i8];
                    }
                    b bVar = eVar;
                    long[] jArr7 = jArr5;
                    jArr6[i8] = j3 + ((long) i17);
                    iArr2[i8] = sVar4 == null ? 1 : 0;
                    if (i8 == iM7) {
                        iArr2[i8] = 1;
                        i12--;
                        if (i12 > 0) {
                            iM7 = sVar4.m() - 1;
                        }
                    }
                    j3 += (long) i6;
                    int iM8 = i16 - 1;
                    if (iM8 == 0 && i15 > 0) {
                        i15--;
                        iM8 = sVar3.m();
                        i6 = sVar3.i();
                    }
                    int i18 = iM8;
                    j4 += (long) iArr7[i8];
                    i11--;
                    i8++;
                    eVar = bVar;
                    jArr5 = jArr7;
                    i14 = i18;
                    i10 = i17;
                    i7 = i15;
                }
                int i19 = i7;
                int i20 = i14;
                int i21 = i10;
                long[] jArr8 = jArr5;
                j = j3 + ((long) i21);
                com.tkay.expressad.exoplayer.k.a.a(iM6 == 0);
                while (i13 > 0) {
                    com.tkay.expressad.exoplayer.k.a.a(sVar6.m() == 0);
                    sVar6.i();
                    i13--;
                }
                if (i12 == 0 && i20 == 0) {
                    i4 = i11;
                    if (i4 == 0 && i19 == 0) {
                        jVar2 = jVar;
                        str = a;
                    }
                    iArr = iArr7;
                    jArr = jArr8;
                    jArr2 = jArr6;
                    i2 = i9;
                } else {
                    i4 = i11;
                }
                StringBuilder sb = new StringBuilder("Inconsistent stbl box for track ");
                jVar2 = jVar;
                sb.append(jVar2.c);
                sb.append(": remainingSynchronizationSamples ");
                sb.append(i12);
                sb.append(", remainingSamplesAtTimestampDelta ");
                sb.append(i20);
                sb.append(", remainingSamplesInChunk ");
                sb.append(i4);
                sb.append(", remainingTimestampDeltaChanges ");
                sb.append(i19);
                String string = sb.toString();
                str = a;
                Log.w(str, string);
                iArr = iArr7;
                jArr = jArr8;
                jArr2 = jArr6;
                i2 = i9;
            } else {
                jVar2 = jVar;
                str = a;
                long[] jArr9 = new long[aVar2.a];
                int[] iArr8 = new int[aVar2.a];
                while (aVar2.a()) {
                    jArr9[aVar2.b] = aVar2.d;
                    iArr8[aVar2.b] = aVar2.c;
                }
                d.a aVarA = com.tkay.expressad.exoplayer.e.a.d.a(af.b(jVar2.h.w, jVar2.h.u), jArr9, iArr8, iM5);
                jArr = aVarA.a;
                iArr = aVarA.b;
                i2 = aVarA.c;
                jArr2 = aVarA.d;
                iArr2 = aVarA.e;
                j = aVarA.f;
            }
            jA = af.a(j, 1000000L, jVar2.e);
            if (jVar2.j != null || iVar.a()) {
                af.a(jArr2, jVar2.e);
                return new m(jVar, jArr, iArr, i2, jArr2, iArr2, jA);
            }
            if (jVar2.j.length == 1 && jVar2.d == 1 && jArr2.length >= 2) {
                long j5 = jVar2.k[0];
                long jA2 = j5 + af.a(jVar2.j[0], jVar2.e, jVar2.f);
                int length = jArr2.length - 1;
                str2 = str;
                if (jArr2[0] <= j5 && j5 < jArr2[af.a(3, 0, length)] && jArr2[af.a(jArr2.length - 3, 0, length)] < jA2 && jA2 <= j) {
                    long jA3 = af.a(j5 - jArr2[0], jVar2.h.v, jVar2.e);
                    long jA4 = af.a(j - jA2, jVar2.h.v, jVar2.e);
                    if ((jA3 != 0 || jA4 != 0) && jA3 <= 2147483647L && jA4 <= 2147483647L) {
                        iVar.b = (int) jA3;
                        iVar.c = (int) jA4;
                        af.a(jArr2, jVar2.e);
                        return new m(jVar, jArr, iArr, i2, jArr2, iArr2, jA);
                    }
                }
            } else {
                str2 = str;
            }
            if (jVar2.j.length == 1 && jVar2.j[0] == 0) {
                long j6 = jVar2.k[0];
                for (int i22 = 0; i22 < jArr2.length; i22++) {
                    jArr2[i22] = af.a(jArr2[i22] - j6, 1000000L, jVar2.e);
                }
                return new m(jVar, jArr, iArr, i2, jArr2, iArr2, af.a(j - j6, 1000000L, jVar2.e));
            }
            boolean z2 = jVar2.d == 1;
            boolean z3 = false;
            int i23 = 0;
            int i24 = 0;
            int i25 = 0;
            while (i25 < jVar2.j.length) {
                int[] iArr9 = iArr;
                int i26 = i2;
                long j7 = jVar2.k[i25];
                if (j7 != -1) {
                    iArr6 = iArr9;
                    long jA5 = af.a(jVar2.j[i25], jVar2.e, jVar2.f);
                    int iA2 = af.a(jArr2, j7, true, true);
                    int iA3 = af.a(jArr2, j7 + jA5, z2, false);
                    i23 += iA3 - iA2;
                    z3 |= i24 != iA2;
                    i24 = iA3;
                } else {
                    iArr6 = iArr9;
                }
                i25++;
                iArr = iArr6;
                i2 = i26;
            }
            int[] iArr10 = iArr;
            int i27 = i2;
            boolean z4 = z3 | (i23 != iA);
            long[] jArr10 = z4 ? new long[i23] : jArr;
            int[] iArr11 = z4 ? new int[i23] : iArr10;
            int i28 = z4 ? 0 : i27;
            int[] iArr12 = z4 ? new int[i23] : iArr2;
            long[] jArr11 = new long[i23];
            int i29 = 0;
            int i30 = 0;
            while (i29 < jVar2.j.length) {
                long j8 = jVar2.k[i29];
                long j9 = jVar2.j[i29];
                if (j8 != -1) {
                    int[] iArr13 = iArr2;
                    jArr4 = jArr11;
                    int[] iArr14 = iArr12;
                    i3 = i29;
                    long jA6 = af.a(j9, jVar2.e, jVar2.f) + j8;
                    int iA4 = af.a(jArr2, j8, true, true);
                    int iA5 = af.a(jArr2, jA6, z2, false);
                    if (z4) {
                        int i31 = iA5 - iA4;
                        System.arraycopy(jArr, iA4, jArr10, i30, i31);
                        iArr3 = iArr10;
                        System.arraycopy(iArr3, iA4, iArr11, i30, i31);
                        iArr5 = iArr13;
                        jArr3 = jArr;
                        iArr4 = iArr14;
                        System.arraycopy(iArr5, iA4, iArr4, i30, i31);
                    } else {
                        iArr3 = iArr10;
                        iArr5 = iArr13;
                        jArr3 = jArr;
                        iArr4 = iArr14;
                    }
                    if (iA4 < iA5 && (iArr4[i30] & 1) == 0) {
                        Log.w(str2, "Ignoring edit list: edit does not start with a sync sample.");
                        throw new g();
                    }
                    String str4 = str2;
                    while (iA4 < iA5) {
                        int i32 = iA5;
                        String str5 = str4;
                        long j10 = j8;
                        jArr4[i30] = af.a(j2, 1000000L, jVar2.f) + af.a(jArr2[iA4] - j8, 1000000L, jVar2.e);
                        if (z4 && iArr11[i30] > i28) {
                            i28 = iArr3[iA4];
                        }
                        i30++;
                        iA4++;
                        iA5 = i32;
                        str4 = str5;
                        j8 = j10;
                    }
                    str3 = str4;
                } else {
                    str3 = str2;
                    iArr3 = iArr10;
                    jArr3 = jArr;
                    jArr4 = jArr11;
                    iArr4 = iArr12;
                    i3 = i29;
                    iArr5 = iArr2;
                }
                j2 += j9;
                i29 = i3 + 1;
                iArr2 = iArr5;
                iArr10 = iArr3;
                str2 = str3;
                jArr11 = jArr4;
                iArr12 = iArr4;
                jArr = jArr3;
            }
            return new m(jVar, jArr10, iArr11, i28, jArr11, iArr12, af.a(j2, 1000000L, jVar2.e));
        }
        iM2 = 0;
        sVar4 = sVar5;
        long j22 = 0;
        if (!eVar.c() && "audio/raw".equals(jVar.h.h) && iM3 == 0 && iM == 0 && iM2 == 0) {
        }
        jA = af.a(j, 1000000L, jVar2.e);
        if (jVar2.j != null) {
        }
        af.a(jArr2, jVar2.e);
        return new m(jVar, jArr, iArr, i2, jArr2, iArr2, jA);
    }

    public static com.tkay.expressad.exoplayer.g.a a(a.b bVar, boolean z) {
        if (z) {
            return null;
        }
        s sVar = bVar.aV;
        sVar.c(8);
        while (sVar.a() >= 8) {
            int iC = sVar.c();
            int i2 = sVar.i();
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aG) {
                sVar.c(iC);
                int i3 = iC + i2;
                sVar.d(12);
                while (true) {
                    if (sVar.c() >= i3) {
                        break;
                    }
                    int iC2 = sVar.c();
                    int i4 = sVar.i();
                    if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aH) {
                        sVar.c(iC2);
                        int i5 = iC2 + i4;
                        sVar.d(8);
                        ArrayList arrayList = new ArrayList();
                        while (sVar.c() < i5) {
                            a.a aVarA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
                            if (aVarA != null) {
                                arrayList.add(aVarA);
                            }
                        }
                        if (!arrayList.isEmpty()) {
                            return new com.tkay.expressad.exoplayer.g.a(arrayList);
                        }
                    } else {
                        sVar.d(i4 - 8);
                    }
                }
                return null;
            }
            sVar.d(i2 - 8);
        }
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.a a(s sVar, int i2) {
        sVar.d(12);
        while (sVar.c() < i2) {
            int iC = sVar.c();
            int i3 = sVar.i();
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aH) {
                sVar.c(iC);
                int i4 = iC + i3;
                sVar.d(8);
                ArrayList arrayList = new ArrayList();
                while (sVar.c() < i4) {
                    a.a aVarA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
                    if (aVarA != null) {
                        arrayList.add(aVarA);
                    }
                }
                if (arrayList.isEmpty()) {
                    return null;
                }
                return new com.tkay.expressad.exoplayer.g.a(arrayList);
            }
            sVar.d(i3 - 8);
        }
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.a b(s sVar, int i2) {
        sVar.d(8);
        ArrayList arrayList = new ArrayList();
        while (sVar.c() < i2) {
            a.a aVarA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
            if (aVarA != null) {
                arrayList.add(aVarA);
            }
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        return new com.tkay.expressad.exoplayer.g.a(arrayList);
    }

    private static long a(s sVar) {
        sVar.c(8);
        sVar.d(com.tkay.expressad.exoplayer.e.a.a.a(sVar.i()) != 0 ? 16 : 8);
        return sVar.h();
    }

    private static f b(s sVar) {
        boolean z;
        sVar.c(8);
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
        sVar.d(iA == 0 ? 8 : 16);
        int i2 = sVar.i();
        sVar.d(4);
        int iC = sVar.c();
        int i3 = iA == 0 ? 4 : 8;
        int i4 = 0;
        int i5 = 0;
        while (true) {
            if (i5 >= i3) {
                z = true;
                break;
            }
            if (sVar.a[iC + i5] != -1) {
                z = false;
                break;
            }
            i5++;
        }
        long j = -9223372036854775807L;
        if (z) {
            sVar.d(i3);
        } else {
            long jH = iA == 0 ? sVar.h() : sVar.n();
            if (jH != 0) {
                j = jH;
            }
        }
        sVar.d(16);
        int i6 = sVar.i();
        int i7 = sVar.i();
        sVar.d(4);
        int i8 = sVar.i();
        int i9 = sVar.i();
        if (i6 == 0 && i7 == 65536 && i8 == -65536 && i9 == 0) {
            i4 = 90;
        } else if (i6 == 0 && i7 == -65536 && i8 == 65536 && i9 == 0) {
            i4 = 270;
        } else if (i6 == -65536 && i7 == 0 && i8 == 0 && i9 == -65536) {
            i4 = 180;
        }
        return new f(i2, j, i4);
    }

    private static int c(s sVar) {
        sVar.c(16);
        int i2 = sVar.i();
        if (i2 == c) {
            return 1;
        }
        if (i2 == b) {
            return 2;
        }
        if (i2 == d || i2 == e || i2 == f || i2 == g) {
            return 3;
        }
        return i2 == h ? 4 : -1;
    }

    private static Pair<Long, String> d(s sVar) {
        sVar.c(8);
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
        sVar.d(iA == 0 ? 8 : 16);
        long jH = sVar.h();
        sVar.d(iA == 0 ? 4 : 8);
        int iE = sVar.e();
        StringBuilder sb = new StringBuilder();
        sb.append((char) (((iE >> 10) & 31) + 96));
        sb.append((char) (((iE >> 5) & 31) + 96));
        sb.append((char) ((iE & 31) + 96));
        return Pair.create(Long.valueOf(jH), sb.toString());
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:199:0x031a  */
    /* JADX WARN: Removed duplicated region for block: B:202:0x0349  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static c a(s sVar, int i2, int i3, String str, com.tkay.expressad.exoplayer.d.e eVar, boolean z) throws t {
        int i4;
        int i5;
        int i6;
        int i7;
        com.tkay.expressad.exoplayer.d.e eVar2;
        byte[] bArrCopyOfRange;
        String str2;
        List<byte[]> list;
        String str3;
        com.tkay.expressad.exoplayer.d.e eVarA;
        int iE;
        int iK;
        int iM;
        com.tkay.expressad.exoplayer.d.e eVar3;
        String str4;
        String str5;
        com.tkay.expressad.exoplayer.d.e eVar4;
        int i8;
        int i9;
        int i10;
        int iC;
        String str6;
        int i11;
        boolean z2;
        String str7;
        String str8;
        int i12;
        String str9;
        com.tkay.expressad.exoplayer.d.e eVarA2;
        String str10;
        List list2;
        String str11;
        long j;
        sVar.c(12);
        int i13 = sVar.i();
        c cVar = new c(i13);
        int i14 = 0;
        int i15 = 0;
        while (i15 < i13) {
            int iC2 = sVar.c();
            int i16 = sVar.i();
            boolean z3 = true;
            String str12 = "childAtomSize should be positive";
            com.tkay.expressad.exoplayer.k.a.a(i16 > 0 ? 1 : i14, "childAtomSize should be positive");
            int i17 = sVar.i();
            if (i17 != com.tkay.expressad.exoplayer.e.a.a.g && i17 != com.tkay.expressad.exoplayer.e.a.a.h && i17 != com.tkay.expressad.exoplayer.e.a.a.ae && i17 != com.tkay.expressad.exoplayer.e.a.a.aq && i17 != com.tkay.expressad.exoplayer.e.a.a.i && i17 != com.tkay.expressad.exoplayer.e.a.a.j && i17 != com.tkay.expressad.exoplayer.e.a.a.k && i17 != com.tkay.expressad.exoplayer.e.a.a.aP && i17 != com.tkay.expressad.exoplayer.e.a.a.aQ) {
                if (i17 != com.tkay.expressad.exoplayer.e.a.a.n && i17 != com.tkay.expressad.exoplayer.e.a.a.af && i17 != com.tkay.expressad.exoplayer.e.a.a.s && i17 != com.tkay.expressad.exoplayer.e.a.a.u && i17 != com.tkay.expressad.exoplayer.e.a.a.w && i17 != com.tkay.expressad.exoplayer.e.a.a.z && i17 != com.tkay.expressad.exoplayer.e.a.a.x && i17 != com.tkay.expressad.exoplayer.e.a.a.y && i17 != com.tkay.expressad.exoplayer.e.a.a.aD && i17 != com.tkay.expressad.exoplayer.e.a.a.aE && i17 != com.tkay.expressad.exoplayer.e.a.a.q && i17 != com.tkay.expressad.exoplayer.e.a.a.r && i17 != com.tkay.expressad.exoplayer.e.a.a.o && i17 != com.tkay.expressad.exoplayer.e.a.a.aT) {
                    if (i17 != com.tkay.expressad.exoplayer.e.a.a.ao && i17 != com.tkay.expressad.exoplayer.e.a.a.az && i17 != com.tkay.expressad.exoplayer.e.a.a.aA && i17 != com.tkay.expressad.exoplayer.e.a.a.aB && i17 != com.tkay.expressad.exoplayer.e.a.a.aC) {
                        if (i17 == com.tkay.expressad.exoplayer.e.a.a.aS) {
                            cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), "application/x-camera-motion", (String) null, (com.tkay.expressad.exoplayer.d.e) null);
                        }
                        i4 = i15;
                        i5 = iC2;
                        i6 = i13;
                        i7 = i16;
                    } else {
                        sVar.c(iC2 + 8 + 8);
                        if (i17 == com.tkay.expressad.exoplayer.e.a.a.ao) {
                            list2 = null;
                            str11 = "application/ttml+xml";
                        } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.az) {
                            int i18 = (i16 - 8) - 8;
                            byte[] bArr = new byte[i18];
                            sVar.a(bArr, i14, i18);
                            List listSingletonList = Collections.singletonList(bArr);
                            str11 = "application/x-quicktime-tx3g";
                            list2 = listSingletonList;
                        } else {
                            if (i17 == com.tkay.expressad.exoplayer.e.a.a.aA) {
                                str10 = "application/x-mp4-vtt";
                            } else if (i17 != com.tkay.expressad.exoplayer.e.a.a.aB) {
                                if (i17 == com.tkay.expressad.exoplayer.e.a.a.aC) {
                                    cVar.e = 1;
                                    str10 = "application/x-mp4-cea-608";
                                } else {
                                    throw new IllegalStateException();
                                }
                            } else {
                                list2 = null;
                                str11 = "application/ttml+xml";
                                j = 0;
                                i4 = i15;
                                i6 = i13;
                                cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), str11, (String) null, -1, 0, str, -1, (com.tkay.expressad.exoplayer.d.e) null, j, (List<byte[]>) list2);
                                i7 = i16;
                                i5 = iC2;
                            }
                            str11 = str10;
                            list2 = null;
                        }
                        j = Long.MAX_VALUE;
                        i4 = i15;
                        i6 = i13;
                        cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), str11, (String) null, -1, 0, str, -1, (com.tkay.expressad.exoplayer.d.e) null, j, (List<byte[]>) list2);
                        i7 = i16;
                        i5 = iC2;
                    }
                } else {
                    i4 = i15;
                    i6 = i13;
                    int i19 = i14;
                    i5 = iC2;
                    sVar.c(i5 + 8 + 8);
                    if (z) {
                        iE = sVar.e();
                        sVar.d(6);
                    } else {
                        sVar.d(8);
                        iE = i19;
                    }
                    if (iE == 0 || iE == 1) {
                        int iE2 = sVar.e();
                        sVar.d(6);
                        iK = sVar.k();
                        if (iE == 1) {
                            sVar.d(16);
                        }
                        iM = iE2;
                    } else if (iE == 2) {
                        sVar.d(16);
                        iK = (int) Math.round(Double.longBitsToDouble(sVar.j()));
                        iM = sVar.m();
                        sVar.d(20);
                    } else {
                        i7 = i16;
                    }
                    int iC3 = sVar.c();
                    if (i17 == com.tkay.expressad.exoplayer.e.a.a.af) {
                        Pair<Integer, k> pairB = b(sVar, i5, i16);
                        if (pairB != null) {
                            i17 = ((Integer) pairB.first).intValue();
                            eVarA2 = eVar != null ? eVar.a(((k) pairB.second).b) : null;
                            cVar.b[i4] = (k) pairB.second;
                        } else {
                            eVarA2 = eVar;
                        }
                        sVar.c(iC3);
                        eVar3 = eVarA2;
                    } else {
                        eVar3 = eVar;
                    }
                    String str13 = "audio/raw";
                    if (i17 == com.tkay.expressad.exoplayer.e.a.a.s) {
                        str4 = "audio/ac3";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.u) {
                        str4 = "audio/eac3";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.w) {
                        str4 = "audio/vnd.dts";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.x || i17 == com.tkay.expressad.exoplayer.e.a.a.y) {
                        str4 = "audio/vnd.dts.hd";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.z) {
                        str4 = "audio/vnd.dts.hd;profile=lbr";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.aD) {
                        str4 = "audio/3gpp";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.aE) {
                        str4 = "audio/amr-wb";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.q || i17 == com.tkay.expressad.exoplayer.e.a.a.r) {
                        str4 = "audio/raw";
                    } else if (i17 == com.tkay.expressad.exoplayer.e.a.a.o) {
                        str4 = "audio/mpeg";
                    } else {
                        str4 = i17 == com.tkay.expressad.exoplayer.e.a.a.aT ? "audio/alac" : null;
                    }
                    int i20 = iK;
                    int iIntValue = iM;
                    int i21 = iC3;
                    byte[] bArr2 = null;
                    String str14 = str4;
                    while (i21 - i5 < i16) {
                        sVar.c(i21);
                        int i22 = sVar.i();
                        com.tkay.expressad.exoplayer.k.a.a(i22 > 0 ? z3 : i19, str12);
                        int i23 = sVar.i();
                        if (i23 == com.tkay.expressad.exoplayer.e.a.a.O || (z && i23 == com.tkay.expressad.exoplayer.e.a.a.p)) {
                            str5 = str13;
                            String str15 = str12;
                            String str16 = str14;
                            eVar4 = eVar3;
                            i8 = i19;
                            i9 = i22;
                            i10 = i21;
                            if (i23 == com.tkay.expressad.exoplayer.e.a.a.O) {
                                iC = i10;
                                str6 = str15;
                            } else {
                                iC = sVar.c();
                                while (iC - i10 < i9) {
                                    sVar.c(iC);
                                    int i24 = sVar.i();
                                    if (i24 > 0) {
                                        str6 = str15;
                                        z2 = 1;
                                    } else {
                                        z2 = i8;
                                        str6 = str15;
                                    }
                                    com.tkay.expressad.exoplayer.k.a.a(z2, str6);
                                    if (sVar.i() != com.tkay.expressad.exoplayer.e.a.a.O) {
                                        iC += i24;
                                        str15 = str6;
                                    }
                                }
                                str6 = str15;
                                i11 = -1;
                                iC = -1;
                                if (iC == i11) {
                                    Pair<String, byte[]> pairD = d(sVar, iC);
                                    str7 = (String) pairD.first;
                                    bArr2 = (byte[]) pairD.second;
                                    if ("audio/mp4a-latm".equals(str7)) {
                                        Pair<Integer, Integer> pairA = com.tkay.expressad.exoplayer.k.d.a(bArr2);
                                        int iIntValue2 = ((Integer) pairA.first).intValue();
                                        iIntValue = ((Integer) pairA.second).intValue();
                                        i20 = iIntValue2;
                                    }
                                } else {
                                    str7 = str16;
                                }
                                str8 = str7;
                            }
                            i11 = -1;
                            if (iC == i11) {
                            }
                            str8 = str7;
                        } else {
                            if (i23 == com.tkay.expressad.exoplayer.e.a.a.t) {
                                sVar.c(i21 + 8);
                                cVar.c = com.tkay.expressad.exoplayer.b.a.a(sVar, Integer.toString(i2), str, eVar3);
                            } else if (i23 == com.tkay.expressad.exoplayer.e.a.a.v) {
                                sVar.c(i21 + 8);
                                cVar.c = com.tkay.expressad.exoplayer.b.a.b(sVar, Integer.toString(i2), str, eVar3);
                            } else {
                                if (i23 == com.tkay.expressad.exoplayer.e.a.a.A) {
                                    i9 = i22;
                                    i12 = i21;
                                    str5 = str13;
                                    str9 = str12;
                                    str8 = str14;
                                    eVar4 = eVar3;
                                    cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), str14, null, -1, iIntValue, i20, null, eVar3, str);
                                } else {
                                    i9 = i22;
                                    i12 = i21;
                                    str5 = str13;
                                    str9 = str12;
                                    str8 = str14;
                                    eVar4 = eVar3;
                                    if (i23 == com.tkay.expressad.exoplayer.e.a.a.aT) {
                                        byte[] bArr3 = new byte[i9];
                                        i10 = i12;
                                        sVar.c(i10);
                                        i8 = 0;
                                        sVar.a(bArr3, 0, i9);
                                        bArr2 = bArr3;
                                    }
                                    str6 = str9;
                                }
                                i10 = i12;
                                i8 = 0;
                                str6 = str9;
                            }
                            str5 = str13;
                            str9 = str12;
                            str8 = str14;
                            eVar4 = eVar3;
                            i8 = i19;
                            i9 = i22;
                            i10 = i21;
                            str6 = str9;
                        }
                        i21 = i10 + i9;
                        str12 = str6;
                        i19 = i8;
                        eVar3 = eVar4;
                        str13 = str5;
                        str14 = str8;
                        z3 = true;
                    }
                    String str17 = str13;
                    String str18 = str14;
                    com.tkay.expressad.exoplayer.d.e eVar5 = eVar3;
                    if (cVar.c != null || str18 == null) {
                        i7 = i16;
                    } else {
                        i7 = i16;
                        cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), str18, (String) null, -1, iIntValue, i20, str17.equals(str18) ? 2 : -1, (List<byte[]>) (bArr2 == null ? null : Collections.singletonList(bArr2)), eVar5, str);
                    }
                }
            } else {
                i4 = i15;
                i5 = iC2;
                i6 = i13;
                i7 = i16;
                sVar.c(i5 + 8 + 8);
                sVar.d(16);
                int iE3 = sVar.e();
                int iE4 = sVar.e();
                sVar.d(50);
                int iC4 = sVar.c();
                if (i17 == com.tkay.expressad.exoplayer.e.a.a.ae) {
                    Pair<Integer, k> pairB2 = b(sVar, i5, i7);
                    if (pairB2 != null) {
                        i17 = ((Integer) pairB2.first).intValue();
                        eVarA = eVar == null ? null : eVar.a(((k) pairB2.second).b);
                        cVar.b[i4] = (k) pairB2.second;
                    } else {
                        eVarA = eVar;
                    }
                    sVar.c(iC4);
                    eVar2 = eVarA;
                } else {
                    eVar2 = eVar;
                }
                int i25 = -1;
                float fM = 1.0f;
                String str19 = null;
                List<byte[]> listSingletonList2 = null;
                byte[] bArr4 = null;
                boolean z4 = false;
                while (iC4 - i5 < i7) {
                    sVar.c(iC4);
                    int iC5 = sVar.c();
                    int i26 = sVar.i();
                    if (i26 == 0 && sVar.c() - i5 == i7) {
                        break;
                    }
                    com.tkay.expressad.exoplayer.k.a.a(i26 > 0, "childAtomSize should be positive");
                    int i27 = sVar.i();
                    if (i27 == com.tkay.expressad.exoplayer.e.a.a.M) {
                        com.tkay.expressad.exoplayer.k.a.b(str19 == null);
                        sVar.c(iC5 + 8);
                        com.tkay.expressad.exoplayer.l.a aVarA = com.tkay.expressad.exoplayer.l.a.a(sVar);
                        list = aVarA.a;
                        cVar.d = aVarA.b;
                        if (!z4) {
                            fM = aVarA.e;
                        }
                        str3 = "video/avc";
                    } else if (i27 == com.tkay.expressad.exoplayer.e.a.a.N) {
                        com.tkay.expressad.exoplayer.k.a.b(str19 == null);
                        sVar.c(iC5 + 8);
                        com.tkay.expressad.exoplayer.l.d dVarA = com.tkay.expressad.exoplayer.l.d.a(sVar);
                        list = dVarA.a;
                        cVar.d = dVarA.b;
                        str3 = "video/hevc";
                    } else {
                        if (i27 == com.tkay.expressad.exoplayer.e.a.a.aR) {
                            com.tkay.expressad.exoplayer.k.a.b(str19 == null);
                            str2 = i17 == com.tkay.expressad.exoplayer.e.a.a.aP ? "video/x-vnd.on2.vp8" : "video/x-vnd.on2.vp9";
                        } else if (i27 == com.tkay.expressad.exoplayer.e.a.a.l) {
                            com.tkay.expressad.exoplayer.k.a.b(str19 == null);
                            str2 = "video/3gpp";
                        } else {
                            if (i27 == com.tkay.expressad.exoplayer.e.a.a.O) {
                                com.tkay.expressad.exoplayer.k.a.b(str19 == null);
                                Pair<String, byte[]> pairD2 = d(sVar, iC5);
                                String str20 = (String) pairD2.first;
                                listSingletonList2 = Collections.singletonList((byte[]) pairD2.second);
                                str19 = str20;
                            } else if (i27 != com.tkay.expressad.exoplayer.e.a.a.an) {
                                if (i27 == com.tkay.expressad.exoplayer.e.a.a.aN) {
                                    int i28 = iC5 + 8;
                                    while (true) {
                                        if (i28 - iC5 >= i26) {
                                            bArrCopyOfRange = null;
                                            break;
                                        }
                                        sVar.c(i28);
                                        int i29 = sVar.i();
                                        if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aO) {
                                            bArrCopyOfRange = Arrays.copyOfRange(sVar.a, i28, i29 + i28);
                                            break;
                                        }
                                        i28 += i29;
                                    }
                                    bArr4 = bArrCopyOfRange;
                                } else {
                                    if (i27 == com.tkay.expressad.exoplayer.e.a.a.aM) {
                                        int iD = sVar.d();
                                        sVar.d(3);
                                        if (iD == 0) {
                                            int iD2 = sVar.d();
                                            if (iD2 == 0) {
                                                i25 = 0;
                                            } else if (iD2 == 1) {
                                                i25 = 1;
                                            } else if (iD2 == 2) {
                                                i25 = 2;
                                            } else if (iD2 == 3) {
                                                i25 = 3;
                                            }
                                        }
                                    }
                                    iC4 += i26;
                                }
                            } else {
                                sVar.c(iC5 + 8);
                                fM = sVar.m() / sVar.m();
                                z4 = true;
                            }
                            iC4 += i26;
                        }
                        str19 = str2;
                        iC4 += i26;
                    }
                    str19 = str3;
                    listSingletonList2 = list;
                    iC4 += i26;
                }
                if (str19 != null) {
                    cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i2), str19, null, -1, -1, iE3, iE4, -1.0f, listSingletonList2, i3, fM, bArr4, i25, null, eVar2);
                }
            }
            sVar.c(i5 + i7);
            i15 = i4 + 1;
            i13 = i6;
            i14 = 0;
        }
        return cVar;
    }

    private static void a(s sVar, int i2, int i3, int i4, int i5, String str, c cVar) {
        sVar.c(i3 + 8 + 8);
        String str2 = "application/ttml+xml";
        List listSingletonList = null;
        long j = Long.MAX_VALUE;
        if (i2 != com.tkay.expressad.exoplayer.e.a.a.ao) {
            if (i2 == com.tkay.expressad.exoplayer.e.a.a.az) {
                int i6 = (i4 - 8) - 8;
                byte[] bArr = new byte[i6];
                sVar.a(bArr, 0, i6);
                listSingletonList = Collections.singletonList(bArr);
                str2 = "application/x-quicktime-tx3g";
            } else if (i2 == com.tkay.expressad.exoplayer.e.a.a.aA) {
                str2 = "application/x-mp4-vtt";
            } else if (i2 == com.tkay.expressad.exoplayer.e.a.a.aB) {
                j = 0;
            } else if (i2 == com.tkay.expressad.exoplayer.e.a.a.aC) {
                cVar.e = 1;
                str2 = "application/x-mp4-cea-608";
            } else {
                throw new IllegalStateException();
            }
        }
        cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i5), str2, (String) null, -1, 0, str, -1, (com.tkay.expressad.exoplayer.d.e) null, j, (List<byte[]>) listSingletonList);
    }

    private static void a(s sVar, int i2, int i3, int i4, int i5, int i6, com.tkay.expressad.exoplayer.d.e eVar, c cVar, int i7) throws t {
        int i8 = i3;
        com.tkay.expressad.exoplayer.d.e eVarA = eVar;
        sVar.c(i8 + 8 + 8);
        sVar.d(16);
        int iE = sVar.e();
        int iE2 = sVar.e();
        sVar.d(50);
        int iC = sVar.c();
        int iIntValue = i2;
        if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.ae) {
            Pair<Integer, k> pairB = b(sVar, i8, i4);
            if (pairB != null) {
                iIntValue = ((Integer) pairB.first).intValue();
                eVarA = eVarA == null ? null : eVarA.a(((k) pairB.second).b);
                cVar.b[i7] = (k) pairB.second;
            }
            sVar.c(iC);
        }
        com.tkay.expressad.exoplayer.d.e eVar2 = eVarA;
        int i9 = -1;
        float fM = 1.0f;
        String str = null;
        boolean z = false;
        List<byte[]> listSingletonList = null;
        byte[] bArrCopyOfRange = null;
        while (iC - i8 < i4) {
            sVar.c(iC);
            int iC2 = sVar.c();
            int i10 = sVar.i();
            if (i10 == 0 && sVar.c() - i8 == i4) {
                break;
            }
            com.tkay.expressad.exoplayer.k.a.a(i10 > 0, "childAtomSize should be positive");
            int i11 = sVar.i();
            if (i11 == com.tkay.expressad.exoplayer.e.a.a.M) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                sVar.c(iC2 + 8);
                com.tkay.expressad.exoplayer.l.a aVarA = com.tkay.expressad.exoplayer.l.a.a(sVar);
                listSingletonList = aVarA.a;
                cVar.d = aVarA.b;
                if (!z) {
                    fM = aVarA.e;
                }
                str = "video/avc";
            } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.N) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                sVar.c(iC2 + 8);
                com.tkay.expressad.exoplayer.l.d dVarA = com.tkay.expressad.exoplayer.l.d.a(sVar);
                listSingletonList = dVarA.a;
                cVar.d = dVarA.b;
                str = "video/hevc";
            } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.aR) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                str = iIntValue == com.tkay.expressad.exoplayer.e.a.a.aP ? "video/x-vnd.on2.vp8" : "video/x-vnd.on2.vp9";
            } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.l) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                str = "video/3gpp";
            } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.O) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                Pair<String, byte[]> pairD = d(sVar, iC2);
                String str2 = (String) pairD.first;
                listSingletonList = Collections.singletonList((byte[]) pairD.second);
                str = str2;
            } else if (i11 != com.tkay.expressad.exoplayer.e.a.a.an) {
                if (i11 == com.tkay.expressad.exoplayer.e.a.a.aN) {
                    int i12 = iC2 + 8;
                    while (true) {
                        if (i12 - iC2 >= i10) {
                            bArrCopyOfRange = null;
                            break;
                        }
                        sVar.c(i12);
                        int i13 = sVar.i();
                        if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aO) {
                            bArrCopyOfRange = Arrays.copyOfRange(sVar.a, i12, i13 + i12);
                            break;
                        }
                        i12 += i13;
                    }
                } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.aM) {
                    int iD = sVar.d();
                    sVar.d(3);
                    if (iD == 0) {
                        int iD2 = sVar.d();
                        if (iD2 == 0) {
                            i9 = 0;
                        } else if (iD2 == 1) {
                            i9 = 1;
                        } else if (iD2 == 2) {
                            i9 = 2;
                        } else if (iD2 == 3) {
                            i9 = 3;
                        }
                    }
                }
            } else {
                sVar.c(iC2 + 8);
                fM = sVar.m() / sVar.m();
                z = true;
            }
            iC += i10;
            i8 = i3;
        }
        if (str == null) {
            return;
        }
        cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i5), str, null, -1, -1, iE, iE2, -1.0f, listSingletonList, i6, fM, bArrCopyOfRange, i9, null, eVar2);
    }

    private static Pair<long[], long[]> a(a.a aVar) {
        a.b bVarD;
        if (aVar == null || (bVarD = aVar.d(com.tkay.expressad.exoplayer.e.a.a.V)) == null) {
            return Pair.create(null, null);
        }
        s sVar = bVarD.aV;
        sVar.c(8);
        int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
        int iM = sVar.m();
        long[] jArr = new long[iM];
        long[] jArr2 = new long[iM];
        for (int i2 = 0; i2 < iM; i2++) {
            jArr[i2] = iA == 1 ? sVar.n() : sVar.h();
            jArr2[i2] = iA == 1 ? sVar.j() : sVar.i();
            if (sVar.f() != 1) {
                throw new IllegalArgumentException("Unsupported media rate.");
            }
            sVar.d(2);
        }
        return Pair.create(jArr, jArr2);
    }

    private static float c(s sVar, int i2) {
        sVar.c(i2 + 8);
        return sVar.m() / sVar.m();
    }

    private static void a(s sVar, int i2, int i3, int i4, int i5, String str, boolean z, com.tkay.expressad.exoplayer.d.e eVar, c cVar, int i6) {
        int iE;
        int iK;
        int iM;
        String str2;
        int i7;
        int i8;
        String str3;
        String str4;
        com.tkay.expressad.exoplayer.d.e eVar2;
        boolean z2;
        int iC;
        com.tkay.expressad.exoplayer.d.e eVarA = eVar;
        sVar.c(i3 + 8 + 8);
        if (z) {
            iE = sVar.e();
            sVar.d(6);
        } else {
            sVar.d(8);
            iE = 0;
        }
        boolean z3 = true;
        if (iE == 0 || iE == 1) {
            int iE2 = sVar.e();
            sVar.d(6);
            iK = sVar.k();
            if (iE == 1) {
                sVar.d(16);
            }
            iM = iE2;
        } else {
            if (iE != 2) {
                return;
            }
            sVar.d(16);
            iK = (int) Math.round(Double.longBitsToDouble(sVar.j()));
            iM = sVar.m();
            sVar.d(20);
        }
        int iC2 = sVar.c();
        int iIntValue = i2;
        if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.af) {
            Pair<Integer, k> pairB = b(sVar, i3, i4);
            if (pairB != null) {
                iIntValue = ((Integer) pairB.first).intValue();
                eVarA = eVarA == null ? null : eVarA.a(((k) pairB.second).b);
                cVar.b[i6] = (k) pairB.second;
            }
            sVar.c(iC2);
        }
        com.tkay.expressad.exoplayer.d.e eVar3 = eVarA;
        String str5 = "audio/raw";
        if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.s) {
            str2 = "audio/ac3";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.u) {
            str2 = "audio/eac3";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.w) {
            str2 = "audio/vnd.dts";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.x || iIntValue == com.tkay.expressad.exoplayer.e.a.a.y) {
            str2 = "audio/vnd.dts.hd";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.z) {
            str2 = "audio/vnd.dts.hd;profile=lbr";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.aD) {
            str2 = "audio/3gpp";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.aE) {
            str2 = "audio/amr-wb";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.q || iIntValue == com.tkay.expressad.exoplayer.e.a.a.r) {
            str2 = "audio/raw";
        } else if (iIntValue == com.tkay.expressad.exoplayer.e.a.a.o) {
            str2 = "audio/mpeg";
        } else {
            str2 = iIntValue == com.tkay.expressad.exoplayer.e.a.a.aT ? "audio/alac" : null;
        }
        String str6 = str2;
        int i9 = iK;
        int iIntValue2 = iM;
        int i10 = iC2;
        byte[] bArr = null;
        while (i10 - i3 < i4) {
            sVar.c(i10);
            int i11 = sVar.i();
            com.tkay.expressad.exoplayer.k.a.a(i11 > 0 ? z3 : false, "childAtomSize should be positive");
            int i12 = sVar.i();
            if (i12 == com.tkay.expressad.exoplayer.e.a.a.O || (z && i12 == com.tkay.expressad.exoplayer.e.a.a.p)) {
                i7 = i11;
                i8 = i10;
                str3 = str6;
                str4 = str5;
                eVar2 = eVar3;
                z2 = true;
                if (i12 != com.tkay.expressad.exoplayer.e.a.a.O) {
                    iC = sVar.c();
                    while (true) {
                        if (iC - i8 >= i7) {
                            iC = -1;
                            break;
                        }
                        sVar.c(iC);
                        int i13 = sVar.i();
                        com.tkay.expressad.exoplayer.k.a.a(i13 > 0, "childAtomSize should be positive");
                        if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.O) {
                            break;
                        } else {
                            iC += i13;
                        }
                    }
                } else {
                    iC = i8;
                }
                if (iC != -1) {
                    Pair<String, byte[]> pairD = d(sVar, iC);
                    String str7 = (String) pairD.first;
                    byte[] bArr2 = (byte[]) pairD.second;
                    if ("audio/mp4a-latm".equals(str7)) {
                        Pair<Integer, Integer> pairA = com.tkay.expressad.exoplayer.k.d.a(bArr2);
                        int iIntValue3 = ((Integer) pairA.first).intValue();
                        bArr = bArr2;
                        str6 = str7;
                        iIntValue2 = ((Integer) pairA.second).intValue();
                        i9 = iIntValue3;
                    } else {
                        bArr = bArr2;
                        str6 = str7;
                    }
                }
                i10 = i8 + i7;
                z3 = z2;
                eVar3 = eVar2;
                str5 = str4;
            } else {
                if (i12 == com.tkay.expressad.exoplayer.e.a.a.t) {
                    sVar.c(i10 + 8);
                    cVar.c = com.tkay.expressad.exoplayer.b.a.a(sVar, Integer.toString(i5), str, eVar3);
                } else if (i12 == com.tkay.expressad.exoplayer.e.a.a.v) {
                    sVar.c(i10 + 8);
                    cVar.c = com.tkay.expressad.exoplayer.b.a.b(sVar, Integer.toString(i5), str, eVar3);
                } else if (i12 == com.tkay.expressad.exoplayer.e.a.a.A) {
                    i7 = i11;
                    str3 = str6;
                    str4 = str5;
                    eVar2 = eVar3;
                    i8 = i10;
                    z2 = true;
                    cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i5), str6, null, -1, iIntValue2, i9, null, eVar3, str);
                } else {
                    i7 = i11;
                    i8 = i10;
                    str3 = str6;
                    str4 = str5;
                    eVar2 = eVar3;
                    z2 = true;
                    if (i12 == com.tkay.expressad.exoplayer.e.a.a.aT) {
                        byte[] bArr3 = new byte[i7];
                        sVar.c(i8);
                        sVar.a(bArr3, 0, i7);
                        bArr = bArr3;
                    }
                }
                i7 = i11;
                i8 = i10;
                str3 = str6;
                str4 = str5;
                eVar2 = eVar3;
                z2 = true;
            }
            str6 = str3;
            i10 = i8 + i7;
            z3 = z2;
            eVar3 = eVar2;
            str5 = str4;
        }
        String str8 = str6;
        String str9 = str5;
        com.tkay.expressad.exoplayer.d.e eVar4 = eVar3;
        if (cVar.c != null || str8 == null) {
            return;
        }
        cVar.c = com.tkay.expressad.exoplayer.m.a(Integer.toString(i5), str8, (String) null, -1, iIntValue2, i9, str9.equals(str8) ? 2 : -1, (List<byte[]>) (bArr == null ? null : Collections.singletonList(bArr)), eVar4, str);
    }

    private static int a(s sVar, int i2, int i3) {
        int iC = sVar.c();
        while (iC - i2 < i3) {
            sVar.c(iC);
            int i4 = sVar.i();
            com.tkay.expressad.exoplayer.k.a.a(i4 > 0, "childAtomSize should be positive");
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.O) {
                return iC;
            }
            iC += i4;
        }
        return -1;
    }

    private static Pair<String, byte[]> d(s sVar, int i2) {
        sVar.c(i2 + 8 + 4);
        sVar.d(1);
        e(sVar);
        sVar.d(2);
        int iD = sVar.d();
        if ((iD & 128) != 0) {
            sVar.d(2);
        }
        if ((iD & 64) != 0) {
            sVar.d(sVar.e());
        }
        if ((iD & 32) != 0) {
            sVar.d(2);
        }
        sVar.d(1);
        e(sVar);
        String strA = o.a(sVar.d());
        if ("audio/mpeg".equals(strA) || "audio/vnd.dts".equals(strA) || "audio/vnd.dts.hd".equals(strA)) {
            return Pair.create(strA, null);
        }
        sVar.d(12);
        sVar.d(1);
        int iE = e(sVar);
        byte[] bArr = new byte[iE];
        sVar.a(bArr, 0, iE);
        return Pair.create(strA, bArr);
    }

    private static Pair<Integer, k> b(s sVar, int i2, int i3) {
        Pair<Integer, k> pairC;
        int iC = sVar.c();
        while (iC - i2 < i3) {
            sVar.c(iC);
            int i4 = sVar.i();
            com.tkay.expressad.exoplayer.k.a.a(i4 > 0, "childAtomSize should be positive");
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aa && (pairC = c(sVar, iC, i4)) != null) {
                return pairC;
            }
            iC += i4;
        }
        return null;
    }

    private static Pair<Integer, k> c(s sVar, int i2, int i3) {
        int i4 = i2 + 8;
        int i5 = -1;
        String strO = null;
        Integer numValueOf = null;
        int i6 = 0;
        while (i4 - i2 < i3) {
            sVar.c(i4);
            int i7 = sVar.i();
            int i8 = sVar.i();
            if (i8 == com.tkay.expressad.exoplayer.e.a.a.ag) {
                numValueOf = Integer.valueOf(sVar.i());
            } else if (i8 == com.tkay.expressad.exoplayer.e.a.a.ab) {
                sVar.d(4);
                strO = sVar.o();
            } else if (i8 == com.tkay.expressad.exoplayer.e.a.a.ac) {
                i5 = i4;
                i6 = i7;
            }
            i4 += i7;
        }
        if (!"cenc".equals(strO) && !"cbc1".equals(strO) && !"cens".equals(strO) && !"cbcs".equals(strO)) {
            return null;
        }
        com.tkay.expressad.exoplayer.k.a.a(numValueOf != null, "frma atom is mandatory");
        com.tkay.expressad.exoplayer.k.a.a(i5 != -1, "schi atom is mandatory");
        k kVarA = a(sVar, i5, i6, strO);
        com.tkay.expressad.exoplayer.k.a.a(kVarA != null, "tenc atom is mandatory");
        return Pair.create(numValueOf, kVarA);
    }

    private static k a(s sVar, int i2, int i3, String str) {
        int i4;
        int i5;
        int i6 = i2 + 8;
        while (true) {
            byte[] bArr = null;
            if (i6 - i2 >= i3) {
                return null;
            }
            sVar.c(i6);
            int i7 = sVar.i();
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.ad) {
                int iA = com.tkay.expressad.exoplayer.e.a.a.a(sVar.i());
                sVar.d(1);
                if (iA == 0) {
                    sVar.d(1);
                    i5 = 0;
                    i4 = 0;
                } else {
                    int iD = sVar.d();
                    i4 = iD & 15;
                    i5 = (iD & PsExtractor.VIDEO_STREAM_MASK) >> 4;
                }
                boolean z = sVar.d() == 1;
                int iD2 = sVar.d();
                byte[] bArr2 = new byte[16];
                sVar.a(bArr2, 0, 16);
                if (z && iD2 == 0) {
                    int iD3 = sVar.d();
                    bArr = new byte[iD3];
                    sVar.a(bArr, 0, iD3);
                }
                return new k(z, str, iD2, bArr2, i5, i4, bArr);
            }
            i6 += i7;
        }
    }

    private static byte[] d(s sVar, int i2, int i3) {
        int i4 = i2 + 8;
        while (i4 - i2 < i3) {
            sVar.c(i4);
            int i5 = sVar.i();
            if (sVar.i() == com.tkay.expressad.exoplayer.e.a.a.aO) {
                return Arrays.copyOfRange(sVar.a, i4, i5 + i4);
            }
            i4 += i5;
        }
        return null;
    }

    private static int e(s sVar) {
        int iD = sVar.d();
        int i2 = iD & 127;
        while ((iD & 128) == 128) {
            iD = sVar.d();
            i2 = (i2 << 7) | (iD & 127);
        }
        return i2;
    }

    private static boolean a(long[] jArr, long j, long j2, long j3) {
        int length = jArr.length - 1;
        return jArr[0] <= j2 && j2 < jArr[af.a(3, 0, length)] && jArr[af.a(jArr.length - 3, 0, length)] < j3 && j3 <= j;
    }

    private b() {
    }

    private static final class a {
        public final int a;
        public int b;
        public int c;
        public long d;
        private final boolean e;
        private final s f;
        private final s g;
        private int h;
        private int i;

        public a(s sVar, s sVar2, boolean z) {
            this.g = sVar;
            this.f = sVar2;
            this.e = z;
            sVar2.c(12);
            this.a = sVar2.m();
            sVar.c(12);
            this.i = sVar.m();
            com.tkay.expressad.exoplayer.k.a.b(sVar.i() == 1, "first_chunk must be 1");
            this.b = -1;
        }

        public final boolean a() {
            int i = this.b + 1;
            this.b = i;
            if (i == this.a) {
                return false;
            }
            this.d = this.e ? this.f.n() : this.f.h();
            if (this.b == this.h) {
                this.c = this.g.m();
                this.g.d(4);
                int i2 = this.i - 1;
                this.i = i2;
                this.h = i2 > 0 ? this.g.m() - 1 : -1;
            }
            return true;
        }
    }

    private static final class f {
        private final int a;
        private final long b;
        private final int c;

        public f(int i, long j, int i2) {
            this.a = i;
            this.b = j;
            this.c = i2;
        }
    }

    private static final class c {
        public static final int a = 8;
        public final k[] b;
        public com.tkay.expressad.exoplayer.m c;
        public int d;
        public int e = 0;

        public c(int i) {
            this.b = new k[i];
        }
    }

    static final class d implements b {
        private final int a;
        private final int b;
        private final s c;

        public d(a.b bVar) {
            s sVar = bVar.aV;
            this.c = sVar;
            sVar.c(12);
            this.a = this.c.m();
            this.b = this.c.m();
        }

        @Override
        public final int a() {
            return this.b;
        }

        @Override
        public final int b() {
            int i = this.a;
            return i == 0 ? this.c.m() : i;
        }

        @Override
        public final boolean c() {
            return this.a != 0;
        }
    }

    static final class e implements b {
        private final s a;
        private final int b;
        private final int c;
        private int d;
        private int e;

        @Override
        public final boolean c() {
            return false;
        }

        public e(a.b bVar) {
            s sVar = bVar.aV;
            this.a = sVar;
            sVar.c(12);
            this.c = this.a.m() & 255;
            this.b = this.a.m();
        }

        @Override
        public final int a() {
            return this.b;
        }

        @Override
        public final int b() {
            int i = this.c;
            if (i == 8) {
                return this.a.d();
            }
            if (i == 16) {
                return this.a.e();
            }
            int i2 = this.d;
            this.d = i2 + 1;
            if (i2 % 2 == 0) {
                int iD = this.a.d();
                this.e = iD;
                return (iD & PsExtractor.VIDEO_STREAM_MASK) >> 4;
            }
            return this.e & 15;
        }
    }
}
