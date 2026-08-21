package com.loc;

import android.os.SystemClock;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: CellCollector.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cz {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private dz f2917a;
    private dz b;
    private ef c;
    private a d = new a();
    private final List<dz> e = new ArrayList(3);

    /* JADX INFO: compiled from: CellCollector.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public byte f2918a;
        public String b;
        public dz c;
        public dz d;
        public dz e;
        public List<dz> f = new ArrayList();
        public List<dz> g = new ArrayList();

        public static boolean a(dz dzVar, dz dzVar2) {
            if (dzVar == null || dzVar2 == null) {
                return (dzVar == null) == (dzVar2 == null);
            }
            if ((dzVar instanceof eb) && (dzVar2 instanceof eb)) {
                eb ebVar = (eb) dzVar;
                eb ebVar2 = (eb) dzVar2;
                return ebVar.j == ebVar2.j && ebVar.k == ebVar2.k;
            }
            if ((dzVar instanceof ea) && (dzVar2 instanceof ea)) {
                ea eaVar = (ea) dzVar;
                ea eaVar2 = (ea) dzVar2;
                return eaVar.l == eaVar2.l && eaVar.k == eaVar2.k && eaVar.j == eaVar2.j;
            }
            if ((dzVar instanceof ec) && (dzVar2 instanceof ec)) {
                ec ecVar = (ec) dzVar;
                ec ecVar2 = (ec) dzVar2;
                return ecVar.j == ecVar2.j && ecVar.k == ecVar2.k;
            }
            if ((dzVar instanceof ed) && (dzVar2 instanceof ed)) {
                ed edVar = (ed) dzVar;
                ed edVar2 = (ed) dzVar2;
                if (edVar.j == edVar2.j && edVar.k == edVar2.k) {
                    return true;
                }
            }
            return false;
        }

        public final void a() {
            this.f2918a = (byte) 0;
            this.b = "";
            this.c = null;
            this.d = null;
            this.e = null;
            this.f.clear();
            this.g.clear();
        }

        public final void a(byte b, String str, List<dz> list) {
            a();
            this.f2918a = b;
            this.b = str;
            if (list != null) {
                this.f.addAll(list);
                for (dz dzVar : this.f) {
                    if (!dzVar.i && dzVar.h) {
                        this.d = dzVar;
                    } else if (dzVar.i && dzVar.h) {
                        this.e = dzVar;
                    }
                }
            }
            dz dzVar2 = this.d;
            if (dzVar2 == null) {
                dzVar2 = this.e;
            }
            this.c = dzVar2;
        }

        public final String toString() {
            return "CellInfo{radio=" + ((int) this.f2918a) + ", operator='" + this.b + "', mainCell=" + this.c + ", mainOldInterCell=" + this.d + ", mainNewInterCell=" + this.e + ", cells=" + this.f + ", historyMainCellList=" + this.g + '}';
        }
    }

    private void a(a aVar) {
        synchronized (this.e) {
            for (dz dzVar : aVar.f) {
                if (dzVar != null && dzVar.h) {
                    dz dzVarClone = dzVar.clone();
                    dzVarClone.e = SystemClock.elapsedRealtime();
                    a(dzVarClone);
                }
            }
            this.d.g.clear();
            this.d.g.addAll(this.e);
        }
    }

    private void a(dz dzVar) {
        if (dzVar == null) {
            return;
        }
        int size = this.e.size();
        if (size != 0) {
            long jMin = Long.MAX_VALUE;
            int i = 0;
            int i2 = -1;
            int i3 = -1;
            while (true) {
                if (i >= size) {
                    i2 = i3;
                    break;
                }
                dz dzVar2 = this.e.get(i);
                if (!dzVar.equals(dzVar2)) {
                    jMin = Math.min(jMin, dzVar2.e);
                    if (jMin == dzVar2.e) {
                        i3 = i;
                    }
                    i++;
                } else if (dzVar.c != dzVar2.c) {
                    dzVar2.e = dzVar.c;
                    dzVar2.c = dzVar.c;
                }
            }
            if (i2 < 0) {
                return;
            }
            if (size >= 3) {
                if (dzVar.e <= jMin || i2 >= size) {
                    return;
                }
                this.e.remove(i2);
                this.e.add(dzVar);
                return;
            }
        }
        this.e.add(dzVar);
    }

    private boolean a(ef efVar) {
        return efVar.a(this.c) > ((double) ((efVar.g > 10.0f ? 1 : (efVar.g == 10.0f ? 0 : -1)) > 0 ? 2000.0f : (efVar.g > 2.0f ? 1 : (efVar.g == 2.0f ? 0 : -1)) > 0 ? 500.0f : 100.0f));
    }

    final a a(ef efVar, boolean z, byte b, String str, List<dz> list) {
        if (z) {
            this.d.a();
            return null;
        }
        this.d.a(b, str, list);
        if (this.d.c == null) {
            return null;
        }
        if (!(this.c == null || a(efVar) || !a.a(this.d.d, this.f2917a) || !a.a(this.d.e, this.b))) {
            return null;
        }
        this.f2917a = this.d.d;
        this.b = this.d.e;
        this.c = efVar;
        dv.a(this.d.f);
        a(this.d);
        return this.d;
    }
}
