package com.loc;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: RssiManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dv {

    /* JADX INFO: compiled from: RssiManager.java */
    public static class a implements dt {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f2933a;
        private int b;
        private int c;

        a(int i, int i2, int i3) {
            this.f2933a = i;
            this.b = i2;
            this.c = i3;
        }

        @Override // com.loc.dt
        public final long a() {
            return dv.a(this.f2933a, this.b);
        }

        @Override // com.loc.dt
        public final int b() {
            return this.c;
        }
    }

    /* JADX INFO: compiled from: RssiManager.java */
    public static class b implements dt {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private long f2934a;
        private int b;

        b(long j, int i) {
            this.f2934a = j;
            this.b = i;
        }

        @Override // com.loc.dt
        public final long a() {
            return this.f2934a;
        }

        @Override // com.loc.dt
        public final int b() {
            return this.b;
        }
    }

    public static long a(int i, int i2) {
        return (((long) i2) & 4294967295L) | ((((long) i) & 4294967295L) << 32);
    }

    public static synchronized short a(long j) {
        return du.a().a(j);
    }

    public static synchronized void a(List<dz> list) {
        a aVar;
        if (list != null) {
            if (!list.isEmpty()) {
                ArrayList arrayList = new ArrayList(list.size());
                for (dz dzVar : list) {
                    if (dzVar instanceof eb) {
                        eb ebVar = (eb) dzVar;
                        aVar = new a(ebVar.j, ebVar.k, ebVar.c);
                    } else if (dzVar instanceof ec) {
                        ec ecVar = (ec) dzVar;
                        aVar = new a(ecVar.j, ecVar.k, ecVar.c);
                    } else if (dzVar instanceof ed) {
                        ed edVar = (ed) dzVar;
                        aVar = new a(edVar.j, edVar.k, edVar.c);
                    } else if (dzVar instanceof ea) {
                        ea eaVar = (ea) dzVar;
                        aVar = new a(eaVar.k, eaVar.l, eaVar.c);
                    }
                    arrayList.add(aVar);
                }
                du.a().a(arrayList);
            }
        }
    }

    public static synchronized short b(long j) {
        return du.a().b(j);
    }

    public static synchronized void b(List<eg> list) {
        if (list != null) {
            if (!list.isEmpty()) {
                ArrayList arrayList = new ArrayList(list.size());
                for (eg egVar : list) {
                    arrayList.add(new b(egVar.f2941a, egVar.c));
                }
                du.a().b(arrayList);
            }
        }
    }
}
