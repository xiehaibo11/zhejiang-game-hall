package com.tkay.expressad.exoplayer.e.a;

import com.tencent.mm.opensdk.constants.ConstantsAPI;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.s;

/* JADX INFO: loaded from: classes3.dex */
final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f6564a = 4096;
    private static final int[] b = {af.f("isom"), af.f("iso2"), af.f("iso3"), af.f("iso4"), af.f("iso5"), af.f("iso6"), af.f("avc1"), af.f("hvc1"), af.f("hev1"), af.f("mp41"), af.f("mp42"), af.f("3g2a"), af.f("3g2b"), af.f("3gr6"), af.f("3gs6"), af.f("3ge6"), af.f("3gg6"), af.f("M4V "), af.f("M4A "), af.f("f4v "), af.f("kddi"), af.f("M4VP"), af.f("qt  "), af.f("MSNV")};

    public static boolean a(com.tkay.expressad.exoplayer.e.f fVar) {
        return a(fVar, true);
    }

    public static boolean b(com.tkay.expressad.exoplayer.e.f fVar) {
        return a(fVar, false);
    }

    private static boolean a(com.tkay.expressad.exoplayer.e.f fVar, boolean z) {
        boolean z2;
        long jD = fVar.d();
        long j = -1;
        if (jD == -1 || jD > ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF) {
            jD = 4096;
        }
        int i = (int) jD;
        s sVar = new s(64);
        int i2 = 0;
        boolean z3 = false;
        while (i2 < i) {
            sVar.a(8);
            fVar.d(sVar.f6774a, 0, 8);
            long jH = sVar.h();
            int i3 = sVar.i();
            int i4 = 16;
            if (jH == 1) {
                fVar.d(sVar.f6774a, 8, 8);
                sVar.b(16);
                jH = sVar.n();
            } else {
                if (jH == 0) {
                    long jD2 = fVar.d();
                    if (jD2 != j) {
                        jH = 8 + (jD2 - fVar.c());
                    }
                }
                i4 = 8;
            }
            long j2 = i4;
            if (jH < j2) {
                return false;
            }
            i2 += i4;
            if (i3 != a.G) {
                if (i3 != a.P && i3 != a.R) {
                    if ((((long) i2) + jH) - j2 >= i) {
                        break;
                    }
                    int i5 = (int) (jH - j2);
                    i2 += i5;
                    if (i3 == a.f) {
                        if (i5 < 8) {
                            return false;
                        }
                        sVar.a(i5);
                        fVar.d(sVar.f6774a, 0, i5);
                        int i6 = i5 / 4;
                        int i7 = 0;
                        while (true) {
                            if (i7 >= i6) {
                                break;
                            }
                            if (i7 == 1) {
                                sVar.d(4);
                            } else if (a(sVar.i())) {
                                z3 = true;
                                break;
                            }
                            i7++;
                        }
                        if (!z3) {
                            return false;
                        }
                    } else if (i5 != 0) {
                        fVar.e(i5);
                    }
                } else {
                    z2 = true;
                    break;
                }
            }
            j = -1;
        }
        z2 = false;
        return z3 && z == z2;
    }

    private static boolean a(int i) {
        if ((i >>> 8) == af.f("3gp")) {
            return true;
        }
        for (int i2 : b) {
            if (i2 == i) {
                return true;
            }
        }
        return false;
    }

    private i() {
    }
}
