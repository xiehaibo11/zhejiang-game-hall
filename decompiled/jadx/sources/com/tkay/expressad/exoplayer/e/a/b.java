package com.tkay.expressad.exoplayer.e.a;

import android.util.Pair;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.tkay.expressad.exoplayer.e.a.a;
import com.tkay.expressad.exoplayer.g.a;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.o;
import com.tkay.expressad.exoplayer.k.s;
import com.tkay.expressad.exoplayer.t;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6549a = "AtomParsers";
    private static final int b = af.f("vide");
    private static final int c = af.f("soun");
    private static final int d = af.f("text");
    private static final int e = af.f("sbtl");
    private static final int f = af.f("subt");
    private static final int g = af.f("clcp");
    private static final int h = af.f(TTDownloadField.TT_META);
    private static final int i = 3;

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.e.a.b$b, reason: collision with other inner class name */
    private interface InterfaceC0443b {
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.tkay.expressad.exoplayer.e.a.j a(com.tkay.expressad.exoplayer.e.a.a.C0442a r25, com.tkay.expressad.exoplayer.e.a.a.b r26, long r27, com.tkay.expressad.exoplayer.d.e r29, boolean r30, boolean r31) throws com.tkay.expressad.exoplayer.t {
        /*
            Method dump skipped, instruction units count: 485
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.e.a.b.a(com.tkay.expressad.exoplayer.e.a.a$a, com.tkay.expressad.exoplayer.e.a.a$b, long, com.tkay.expressad.exoplayer.d.e, boolean, boolean):com.tkay.expressad.exoplayer.e.a.j");
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x020c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.tkay.expressad.exoplayer.e.a.m a(com.tkay.expressad.exoplayer.e.a.j r43, com.tkay.expressad.exoplayer.e.a.a.C0442a r44, com.tkay.expressad.exoplayer.e.i r45) throws com.tkay.expressad.exoplayer.t {
        /*
            Method dump skipped, instruction units count: 1240
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.e.a.b.a(com.tkay.expressad.exoplayer.e.a.j, com.tkay.expressad.exoplayer.e.a.a$a, com.tkay.expressad.exoplayer.e.i):com.tkay.expressad.exoplayer.e.a.m");
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
                            a.InterfaceC0446a interfaceC0446aA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
                            if (interfaceC0446aA != null) {
                                arrayList.add(interfaceC0446aA);
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
                    a.InterfaceC0446a interfaceC0446aA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
                    if (interfaceC0446aA != null) {
                        arrayList.add(interfaceC0446aA);
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
            a.InterfaceC0446a interfaceC0446aA = com.tkay.expressad.exoplayer.e.a.f.a(sVar);
            if (interfaceC0446aA != null) {
                arrayList.add(interfaceC0446aA);
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
            if (sVar.f6774a[iC + i5] != -1) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.e.a.b.c a(com.tkay.expressad.exoplayer.k.s r47, int r48, int r49, java.lang.String r50, com.tkay.expressad.exoplayer.d.e r51, boolean r52) throws com.tkay.expressad.exoplayer.t {
        /*
            Method dump skipped, instruction units count: 1357
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.e.a.b.a(com.tkay.expressad.exoplayer.k.s, int, int, java.lang.String, com.tkay.expressad.exoplayer.d.e, boolean):com.tkay.expressad.exoplayer.e.a.b$c");
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
                listSingletonList = aVarA.f6783a;
                cVar.d = aVarA.b;
                if (!z) {
                    fM = aVarA.e;
                }
                str = "video/avc";
            } else if (i11 == com.tkay.expressad.exoplayer.e.a.a.N) {
                com.tkay.expressad.exoplayer.k.a.b(str == null);
                sVar.c(iC2 + 8);
                com.tkay.expressad.exoplayer.l.d dVarA = com.tkay.expressad.exoplayer.l.d.a(sVar);
                listSingletonList = dVarA.f6787a;
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
                            bArrCopyOfRange = Arrays.copyOfRange(sVar.f6774a, i12, i13 + i12);
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

    private static Pair<long[], long[]> a(a.C0442a c0442a) {
        a.b bVarD;
        if (c0442a == null || (bVarD = c0442a.d(com.tkay.expressad.exoplayer.e.a.a.V)) == null) {
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
                return Arrays.copyOfRange(sVar.f6774a, i4, i5 + i4);
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6550a;
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
            this.f6550a = sVar2.m();
            sVar.c(12);
            this.i = sVar.m();
            com.tkay.expressad.exoplayer.k.a.b(sVar.i() == 1, "first_chunk must be 1");
            this.b = -1;
        }

        public final boolean a() {
            int i = this.b + 1;
            this.b = i;
            if (i == this.f6550a) {
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f6554a;
        private final long b;
        private final int c;

        public f(int i, long j, int i2) {
            this.f6554a = i;
            this.b = j;
            this.c = i2;
        }
    }

    private static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f6551a = 8;
        public final k[] b;
        public com.tkay.expressad.exoplayer.m c;
        public int d;
        public int e = 0;

        public c(int i) {
            this.b = new k[i];
        }
    }

    static final class d implements InterfaceC0443b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f6552a;
        private final int b;
        private final s c;

        public d(a.b bVar) {
            s sVar = bVar.aV;
            this.c = sVar;
            sVar.c(12);
            this.f6552a = this.c.m();
            this.b = this.c.m();
        }

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final int a() {
            return this.b;
        }

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final int b() {
            int i = this.f6552a;
            return i == 0 ? this.c.m() : i;
        }

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final boolean c() {
            return this.f6552a != 0;
        }
    }

    static final class e implements InterfaceC0443b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final s f6553a;
        private final int b;
        private final int c;
        private int d;
        private int e;

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final boolean c() {
            return false;
        }

        public e(a.b bVar) {
            s sVar = bVar.aV;
            this.f6553a = sVar;
            sVar.c(12);
            this.c = this.f6553a.m() & 255;
            this.b = this.f6553a.m();
        }

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final int a() {
            return this.b;
        }

        @Override // com.tkay.expressad.exoplayer.e.a.b.InterfaceC0443b
        public final int b() {
            int i = this.c;
            if (i == 8) {
                return this.f6553a.d();
            }
            if (i == 16) {
                return this.f6553a.e();
            }
            int i2 = this.d;
            this.d = i2 + 1;
            if (i2 % 2 == 0) {
                int iD = this.f6553a.d();
                this.e = iD;
                return (iD & PsExtractor.VIDEO_STREAM_MASK) >> 4;
            }
            return this.e & 15;
        }
    }
}
