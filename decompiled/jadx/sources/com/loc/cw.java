package com.loc;

import android.os.SystemClock;
import com.loc.cz;
import java.util.List;

/* JADX INFO: compiled from: FpsBufferBuilder.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cw extends cv {
    public cw() {
        super(2048);
    }

    private int a(long j, List<eg> list) {
        b(list);
        int size = list.size();
        if (size <= 0) {
            return -1;
        }
        int[] iArr = new int[size];
        for (int i = 0; i < size; i++) {
            eg egVar = list.get(i);
            iArr[i] = ds.a(this.f2916a, egVar.f2941a == j && egVar.f2941a != -1, egVar.f2941a, (short) egVar.c, this.f2916a.a(egVar.b), egVar.g, (short) egVar.d);
        }
        return dr.a(this.f2916a, dr.a(this.f2916a, iArr));
    }

    private int a(cz.a aVar) {
        int iA;
        int i;
        cx cxVar;
        int i2;
        int i3;
        int i4;
        byte b;
        int iA2;
        a(aVar.f);
        int size = aVar.f.size();
        int[] iArr = new int[size];
        for (int i5 = 0; i5 < size; i5++) {
            dz dzVar = aVar.f.get(i5);
            if (dzVar instanceof eb) {
                eb ebVar = (eb) dzVar;
                iA2 = !ebVar.i ? dm.a(this.f2916a, ebVar.j, ebVar.k, ebVar.c, ebVar.l) : dm.a(this.f2916a, ebVar.b(), ebVar.c(), ebVar.j, ebVar.k, ebVar.c, ebVar.m, ebVar.n, ebVar.d, ebVar.l);
                i4 = -1;
                b = 1;
            } else if (dzVar instanceof ec) {
                ec ecVar = (ec) dzVar;
                iA2 = dn.a(this.f2916a, ecVar.b(), ecVar.c(), ecVar.j, ecVar.k, ecVar.l, ecVar.c, ecVar.m, ecVar.d);
                i4 = -1;
                b = 3;
            } else if (dzVar instanceof ea) {
                ea eaVar = (ea) dzVar;
                boolean z = eaVar.i;
                cx cxVar2 = this.f2916a;
                int i6 = eaVar.j;
                int i7 = eaVar.k;
                int i8 = eaVar.l;
                int i9 = eaVar.m;
                int i10 = eaVar.n;
                int i11 = eaVar.c;
                iA2 = !z ? dg.a(cxVar2, i6, i7, i8, i9, i10, i11) : dg.a(cxVar2, i6, i7, i8, i9, i10, i11, eaVar.d);
                i4 = -1;
                b = 2;
            } else if (dzVar instanceof ed) {
                ed edVar = (ed) dzVar;
                iA2 = dq.a(this.f2916a, edVar.b(), edVar.c(), edVar.j, edVar.k, edVar.l, edVar.c, edVar.m, edVar.d);
                i4 = -1;
                b = 4;
            } else {
                i4 = -1;
                b = 0;
                iA2 = -1;
            }
            if (iA2 == i4) {
                return i4;
            }
            iArr[i5] = dj.a(this.f2916a, dzVar.h ? (byte) 1 : (byte) 0, dzVar.i ? (byte) 1 : (byte) 0, (short) dzVar.g, b, iA2);
        }
        int iA3 = this.f2916a.a(aVar.b);
        int iA4 = dh.a(this.f2916a, iArr);
        int size2 = aVar.g.size();
        int[] iArr2 = new int[size2];
        for (int i12 = 0; i12 < size2; i12++) {
            dz dzVar2 = aVar.g.get(i12);
            long jElapsedRealtime = (SystemClock.elapsedRealtime() - dzVar2.e) / 1000;
            if (jElapsedRealtime > 32767 || jElapsedRealtime < 0) {
                jElapsedRealtime = 32767;
            }
            if (dzVar2 instanceof eb) {
                eb ebVar2 = (eb) dzVar2;
                cxVar = this.f2916a;
                i2 = ebVar2.j;
                i3 = ebVar2.k;
            } else if (dzVar2 instanceof ec) {
                ec ecVar2 = (ec) dzVar2;
                cxVar = this.f2916a;
                i2 = ecVar2.j;
                i3 = ecVar2.k;
            } else {
                if (dzVar2 instanceof ea) {
                    ea eaVar2 = (ea) dzVar2;
                    iA = Cdo.a(this.f2916a, eaVar2.j, eaVar2.k, eaVar2.l, (short) jElapsedRealtime);
                    i = 2;
                } else if (dzVar2 instanceof ed) {
                    ed edVar2 = (ed) dzVar2;
                    cxVar = this.f2916a;
                    i2 = edVar2.j;
                    i3 = edVar2.k;
                } else {
                    iA = 0;
                    i = 0;
                }
                iArr2[i12] = di.a(this.f2916a, (byte) i, iA);
            }
            iA = dp.a(cxVar, i2, i3, (short) jElapsedRealtime);
            i = 1;
            iArr2[i12] = di.a(this.f2916a, (byte) i, iA);
        }
        return dh.a(this.f2916a, iA3, aVar.f2918a, iA4, dh.b(this.f2916a, iArr2));
    }

    private int a(ef efVar) {
        return dl.a(this.f2916a, efVar.c, efVar.k, (int) (efVar.e * 1000000.0d), (int) (efVar.d * 1000000.0d), (int) efVar.f, (int) efVar.i, (int) efVar.g, (short) efVar.h, efVar.l);
    }

    private static void a(List<dz> list) {
        int i;
        int i2;
        if (list == null || list.size() == 0) {
            return;
        }
        for (dz dzVar : list) {
            if (dzVar instanceof eb) {
                eb ebVar = (eb) dzVar;
                i = ebVar.j;
                i2 = ebVar.k;
            } else if (dzVar instanceof ec) {
                ec ecVar = (ec) dzVar;
                i = ecVar.j;
                i2 = ecVar.k;
            } else if (dzVar instanceof ed) {
                ed edVar = (ed) dzVar;
                i = edVar.j;
                i2 = edVar.k;
            } else if (dzVar instanceof ea) {
                ea eaVar = (ea) dzVar;
                i = eaVar.k;
                i2 = eaVar.l;
            }
            dzVar.g = dv.a(dv.a(i, i2));
        }
    }

    private static void b(List<eg> list) {
        for (eg egVar : list) {
            egVar.g = dv.b(egVar.f2941a);
        }
    }

    public final byte[] a(ef efVar, cz.a aVar, long j, List<eg> list) {
        super.a();
        try {
            int iA = a(efVar);
            int iA2 = -1;
            int iA3 = (aVar == null || aVar.f == null || aVar.f.size() <= 0) ? -1 : a(aVar);
            if (list != null && list.size() > 0) {
                iA2 = a(j, list);
            }
            de.a(this.f2916a);
            de.a(this.f2916a, iA);
            if (iA3 > 0) {
                de.c(this.f2916a, iA3);
            }
            if (iA2 > 0) {
                de.b(this.f2916a, iA2);
            }
            this.f2916a.c(de.b(this.f2916a));
            return this.f2916a.c();
        } catch (Throwable th) {
            ej.a(th);
            return null;
        }
    }
}
