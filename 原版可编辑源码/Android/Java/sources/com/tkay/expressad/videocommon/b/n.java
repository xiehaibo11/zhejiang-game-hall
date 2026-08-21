package com.tkay.expressad.videocommon.b;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.videocommon.b.h;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutorService;

public final class n {
    private static final String c = "UnitCacheCtroller";
    private com.tkay.expressad.videocommon.d.b f;
    private ConcurrentHashMap<String, com.tkay.expressad.videocommon.d.b> g;
    private ExecutorService k;
    private String m;
    private com.tkay.expressad.videocommon.e.d n;
    private int p;
    private com.tkay.expressad.d.c q;
    private List<com.tkay.expressad.foundation.d.c> d = new ArrayList();
    private boolean e = true;
    private d h = new d() {
        @Override
        public final void a(long j, int i) {
            if (i == 5 || i == 4) {
                n.a(n.this);
                n.this.a();
            }
            if (i == 2) {
                n.a(n.this);
            }
        }
    };
    private CopyOnWriteArrayList<Map<String, a>> i = new CopyOnWriteArrayList<>();
    private long l = com.tkay.expressad.d.a.b.P;
    private int o = 2;
    com.tkay.expressad.d.c a = null;
    com.tkay.expressad.d.c b = null;
    private Context j = com.tkay.core.common.b.m.a().f();

    private static boolean g() {
        return true;
    }

    static boolean a(n nVar) {
        nVar.e = true;
        return true;
    }

    public n(List<com.tkay.expressad.foundation.d.c> list, ExecutorService executorService, String str, int i) {
        this.p = 1;
        List<com.tkay.expressad.foundation.d.c> list2 = this.d;
        if (list2 != null && list != null) {
            list2.addAll(list);
        }
        this.k = executorService;
        this.m = str;
        this.p = i;
        b(this.d);
    }

    public n(com.tkay.expressad.foundation.d.c cVar, ExecutorService executorService, String str, int i) {
        this.p = 1;
        List<com.tkay.expressad.foundation.d.c> list = this.d;
        if (list != null && cVar != null) {
            list.add(cVar);
        }
        this.k = executorService;
        this.m = str;
        this.p = i;
        b(this.d);
    }

    public final void a(com.tkay.expressad.videocommon.d.b bVar) {
        this.f = bVar;
    }

    public final void a(String str, com.tkay.expressad.videocommon.d.b bVar) {
        if (this.g == null) {
            this.g = new ConcurrentHashMap<>();
        }
        this.g.put(str, bVar);
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        List<com.tkay.expressad.foundation.d.c> list2 = this.d;
        if (list2 != null && list != null) {
            list2.addAll(list);
        }
        b(this.d);
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        List<com.tkay.expressad.foundation.d.c> list = this.d;
        if (list != null && cVar != null) {
            list.add(cVar);
        }
        b(this.d);
    }

    /* JADX WARN: Removed duplicated region for block: B:101:0x0095 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(List<com.tkay.expressad.foundation.d.c> list) {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList;
        boolean z;
        if (list == null || list.size() == 0) {
            return;
        }
        f();
        e();
        int i = this.p;
        if (i == 1) {
            try {
                if (!TextUtils.isEmpty(this.m)) {
                    com.tkay.expressad.d.b.a();
                    com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                    this.a = cVarC;
                    if (cVarC == null) {
                        this.a = com.tkay.expressad.d.c.c(this.m);
                    }
                    if (this.a != null) {
                        this.l = this.a.i();
                        this.o = this.a.m();
                    }
                }
            } catch (Exception unused) {
                return;
            }
        } else if (i == 287) {
            try {
                com.tkay.expressad.videocommon.e.a aVarB = com.tkay.expressad.videocommon.e.c.a().b();
                if (aVarB == null) {
                    com.tkay.expressad.videocommon.e.c.a();
                    com.tkay.expressad.videocommon.e.c.c();
                }
                if (aVarB != null) {
                    this.l = aVarB.e();
                }
                if (!TextUtils.isEmpty(this.m)) {
                    this.n = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                }
                if (this.n != null) {
                    this.o = this.n.F();
                }
            } catch (Exception unused2) {
                return;
            }
        } else if (i == 298) {
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.c cVarD = com.tkay.expressad.d.b.d(com.tkay.expressad.foundation.b.b.b().e(), this.m);
            this.b = cVarD;
            if (cVarD == null) {
                com.tkay.expressad.d.b.a();
                this.b = com.tkay.expressad.d.b.b(com.tkay.expressad.foundation.b.b.b().e(), this.m);
            }
            com.tkay.expressad.d.c cVar = this.b;
            if (cVar != null) {
                this.l = cVar.i();
                this.o = this.b.m();
            }
        } else if (i != 94) {
            if (i == 95) {
                try {
                    if (!TextUtils.isEmpty(this.m)) {
                        com.tkay.expressad.d.b.a();
                        com.tkay.expressad.d.c cVarC2 = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                        if (cVarC2 == null) {
                            cVarC2 = com.tkay.expressad.d.c.d(this.m);
                        }
                        if (cVarC2 != null) {
                            this.l = cVarC2.i();
                            this.o = cVarC2.m();
                        }
                    }
                } catch (Exception unused3) {
                    return;
                }
            }
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            com.tkay.expressad.foundation.d.c cVar2 = list.get(i2);
            if (cVar2 != null) {
                int i3 = this.p;
                String str = (i3 == 94 || i3 == 287) ? cVar2.Z() + cVar2.aZ() + cVar2.S() : cVar2.aZ() + cVar2.S() + cVar2.B();
                if ((c(cVar2) || !TextUtils.isEmpty(cVar2.S())) && (copyOnWriteArrayList = this.i) != null) {
                    synchronized (copyOnWriteArrayList) {
                        int i4 = 0;
                        while (true) {
                            try {
                                if (i4 >= this.i.size()) {
                                    z = false;
                                    break;
                                }
                                Map<String, a> map = this.i.get(i4);
                                if (map != null && map.containsKey(str)) {
                                    a aVar = map.get(str);
                                    aVar.a(cVar2);
                                    aVar.a(this.o);
                                    aVar.a(false);
                                    map.remove(str);
                                    map.put(str, aVar);
                                    this.i.set(i4, map);
                                    z = true;
                                    break;
                                }
                                i4++;
                            } catch (Throwable unused4) {
                            }
                        }
                        if (!z) {
                            a aVar2 = new a(this.j, cVar2, this.k, this.m);
                            aVar2.a(this.o);
                            aVar2.e(this.p);
                            HashMap map2 = new HashMap();
                            map2.put(str, aVar2);
                            this.i.add(map2);
                        }
                    }
                }
            }
        }
        List<com.tkay.expressad.foundation.d.c> list2 = this.d;
        if (list2 == null || list2.size() <= 0) {
            return;
        }
        this.d.clear();
    }

    private void e() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    int i = 0;
                    while (i < this.i.size()) {
                        Map<String, a> map = this.i.get(i);
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null) {
                                if (jCurrentTimeMillis - value.c() > this.l * 1000 && value.k() == 1) {
                                    value.j();
                                    value.a(this.o);
                                    this.i.remove(map);
                                    i--;
                                }
                                if (value.k() != 1 && value.k() != 5 && value.k() != 0) {
                                    this.i.remove(map);
                                    i--;
                                }
                            }
                        }
                        i++;
                    }
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    private void f() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    int i = 0;
                    while (i < this.i.size()) {
                        Map<String, a> map = this.i.get(i);
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null && value.n() != null && value.b() && value.d()) {
                                value.o();
                                this.i.remove(map);
                                i--;
                            }
                        }
                        i++;
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:61:0x0118 A[Catch: all -> 0x01d2, Exception -> 0x01d4, TryCatch #1 {Exception -> 0x01d4, blocks: (B:5:0x000e, B:6:0x0013, B:8:0x001b, B:9:0x002b, B:11:0x0031, B:13:0x003f, B:16:0x0047, B:17:0x0050, B:19:0x0056, B:22:0x0060, B:24:0x006a, B:26:0x0074, B:28:0x0082, B:33:0x0096, B:38:0x00a4, B:36:0x009e, B:39:0x00bc, B:41:0x00c8, B:43:0x00ce, B:44:0x00d6, B:46:0x00df, B:48:0x00e7, B:50:0x00ed, B:52:0x00f3, B:54:0x00f9, B:55:0x00fe, B:57:0x0104, B:58:0x0109, B:60:0x0113, B:61:0x0118, B:63:0x0127, B:65:0x012d, B:67:0x013b, B:68:0x0140, B:70:0x0146, B:75:0x014e, B:77:0x0159, B:79:0x0167, B:88:0x017c, B:90:0x0182, B:92:0x0186, B:94:0x0190, B:96:0x0196, B:97:0x01a6, B:99:0x01b0, B:101:0x01b6, B:102:0x01ba), top: B:116:0x000e, outer: #0 }] */
    /* JADX WARN: Removed duplicated region for block: B:97:0x01a6 A[Catch: all -> 0x01d2, Exception -> 0x01d4, TryCatch #1 {Exception -> 0x01d4, blocks: (B:5:0x000e, B:6:0x0013, B:8:0x001b, B:9:0x002b, B:11:0x0031, B:13:0x003f, B:16:0x0047, B:17:0x0050, B:19:0x0056, B:22:0x0060, B:24:0x006a, B:26:0x0074, B:28:0x0082, B:33:0x0096, B:38:0x00a4, B:36:0x009e, B:39:0x00bc, B:41:0x00c8, B:43:0x00ce, B:44:0x00d6, B:46:0x00df, B:48:0x00e7, B:50:0x00ed, B:52:0x00f3, B:54:0x00f9, B:55:0x00fe, B:57:0x0104, B:58:0x0109, B:60:0x0113, B:61:0x0118, B:63:0x0127, B:65:0x012d, B:67:0x013b, B:68:0x0140, B:70:0x0146, B:75:0x014e, B:77:0x0159, B:79:0x0167, B:88:0x017c, B:90:0x0182, B:92:0x0186, B:94:0x0190, B:96:0x0196, B:97:0x01a6, B:99:0x01b0, B:101:0x01b6, B:102:0x01ba), top: B:116:0x000e, outer: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<a> a(boolean z, List<com.tkay.expressad.foundation.d.c> list) {
        long j;
        boolean z2 = z;
        ArrayList arrayList = new ArrayList();
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            synchronized (copyOnWriteArrayList) {
                try {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    int i = 0;
                    while (i < this.i.size()) {
                        Map<String, a> map = this.i.get(i);
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value == null || value.n() == null) {
                                j = jCurrentTimeMillis;
                                z2 = z;
                                jCurrentTimeMillis = j;
                            } else {
                                com.tkay.expressad.foundation.d.c cVarN = value.n();
                                boolean z3 = false;
                                for (com.tkay.expressad.foundation.d.c cVar : list) {
                                    if (cVarN != null && cVar != null && !TextUtils.isEmpty(cVarN.Z()) && !TextUtils.isEmpty(cVar.Z()) && cVarN.aZ().equals(cVar.aZ()) && cVarN.Z().equals(cVar.Z())) {
                                        z3 = true;
                                    }
                                }
                                if (z3) {
                                    if ((z2 && !cVarN.A()) || (!z2 && cVarN.A())) {
                                        StringBuilder sb = new StringBuilder("UnitCache isReady ==== isBidCampaign = ");
                                        sb.append(z2);
                                        sb.append(" campaign.isBidCampaign() = ");
                                        sb.append(cVarN.A());
                                    } else {
                                        String strI = cVarN.I();
                                        String strS = cVarN.S();
                                        String strE = "";
                                        if (cVarN != null && cVarN.M() != null) {
                                            strE = cVarN.M().e();
                                        }
                                        cVarN.M();
                                        if (TextUtils.isEmpty(strE) || strE.contains("cmpt=1") || b(cVarN, strE)) {
                                            if (b(strI, cVarN)) {
                                                if (value.b()) {
                                                    value.o();
                                                } else if (w.a(strS)) {
                                                    arrayList.add(value);
                                                } else if (a(value, b(cVarN))) {
                                                    arrayList.add(value);
                                                }
                                            } else {
                                                boolean zIsEmpty = TextUtils.isEmpty(value.m());
                                                int iK = value.k();
                                                if (iK == 5) {
                                                    if (value.b()) {
                                                        value.o();
                                                        this.i.remove(map);
                                                        i--;
                                                    } else if (!zIsEmpty) {
                                                        value.l();
                                                    } else {
                                                        if (!a(strI, cVarN)) {
                                                            return null;
                                                        }
                                                        arrayList.add(value);
                                                    }
                                                } else {
                                                    long jC = value.c();
                                                    if (value.k() == 1) {
                                                        j = jCurrentTimeMillis;
                                                        if (jCurrentTimeMillis - jC > this.l * 1000) {
                                                            value.j();
                                                            this.i.remove(map);
                                                        }
                                                        i--;
                                                        z2 = z;
                                                        jCurrentTimeMillis = j;
                                                    } else {
                                                        j = jCurrentTimeMillis;
                                                    }
                                                    if (iK != 4 && iK != 2) {
                                                        if (iK == 1) {
                                                            if (!value.b()) {
                                                                if (!com.tkay.expressad.b.p && a(value, b(cVarN)) && a(strI, cVarN)) {
                                                                    new StringBuilder("isready  IS_DOWANLOAD_FINSH_PLAY is :").append(com.tkay.expressad.b.p);
                                                                    arrayList.add(value);
                                                                }
                                                            }
                                                            z2 = z;
                                                            jCurrentTimeMillis = j;
                                                        } else {
                                                            if (a(value, b(cVarN)) && a(strI, cVarN)) {
                                                                arrayList.add(value);
                                                            }
                                                            z2 = z;
                                                            jCurrentTimeMillis = j;
                                                        }
                                                    }
                                                    this.i.remove(map);
                                                    i--;
                                                    z2 = z;
                                                    jCurrentTimeMillis = j;
                                                }
                                            }
                                        }
                                    }
                                }
                                j = jCurrentTimeMillis;
                                z2 = z;
                                jCurrentTimeMillis = j;
                            }
                        }
                        i++;
                        z2 = z;
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return arrayList;
    }

    private int b(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null) {
            return -1;
        }
        if (cVar.ao() != -1) {
            return cVar.ao();
        }
        return d(cVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:167:0x0148 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:169:0x010c A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final a a(int i, boolean z) {
        int iK;
        int i2;
        StringBuilder sb = new StringBuilder("isReady unitID ");
        sb.append(this.m);
        sb.append(" ad_type ");
        sb.append(this.p);
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList == null) {
            return null;
        }
        synchronized (copyOnWriteArrayList) {
            try {
                long jCurrentTimeMillis = System.currentTimeMillis();
                int i3 = 0;
                while (i3 < this.i.size()) {
                    Map<String, a> map = this.i.get(i3);
                    Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                    while (it.hasNext()) {
                        a value = it.next().getValue();
                        if (value != null && value.n() != null) {
                            com.tkay.expressad.foundation.d.c cVarN = value.n();
                            if ((z && !cVarN.A()) || (!z && cVarN.A())) {
                                StringBuilder sb2 = new StringBuilder("UnitCache isReady ==== isBidCampaign = ");
                                sb2.append(z);
                                sb2.append(" campaign.isBidCampaign() = ");
                                sb2.append(cVarN.A());
                            } else {
                                String strI = cVarN.I();
                                String strS = cVarN.S();
                                String strE = "";
                                if (cVarN != null && cVarN.M() != null) {
                                    strE = cVarN.M().e();
                                }
                                cVarN.M();
                                if (this.p == 94 || i == 287) {
                                    if (TextUtils.isEmpty(strE) || strE.contains("cmpt=1") || b(cVarN, strE)) {
                                        if (b(strI, cVarN)) {
                                            if (value.b()) {
                                                value.o();
                                            } else {
                                                if (w.a(strS)) {
                                                    return value;
                                                }
                                                if (a(value, b(cVarN))) {
                                                    return value;
                                                }
                                            }
                                        }
                                        boolean zIsEmpty = TextUtils.isEmpty(value.m());
                                        iK = value.k();
                                        if (this.p != 298 && a(value, b(cVarN))) {
                                            return value;
                                        }
                                        if (iK != 5) {
                                            if (value.b()) {
                                                value.o();
                                                this.i.remove(map);
                                                i3--;
                                            } else if (!zIsEmpty) {
                                                value.l();
                                                if (this.p == 95) {
                                                    StringBuilder sb3 = new StringBuilder("isready ==========done but isEffectivePath:");
                                                    sb3.append(zIsEmpty);
                                                    sb3.append(" is feed");
                                                    sb3.append(this.p);
                                                    return value;
                                                }
                                            } else {
                                                if (a(strI, cVarN)) {
                                                    return value;
                                                }
                                                return null;
                                            }
                                        } else {
                                            long jC = value.c();
                                            if (value.k() == 1) {
                                                i2 = iK;
                                                if (jCurrentTimeMillis - jC > this.l * 1000) {
                                                    value.j();
                                                    this.i.remove(map);
                                                    i3--;
                                                    if (this.p != 1 && this.p != 94) {
                                                    }
                                                }
                                            } else {
                                                i2 = iK;
                                            }
                                            if (this.p == 95) {
                                                if (value.b()) {
                                                    value.o();
                                                    this.i.remove(map);
                                                } else {
                                                    new StringBuilder("==========isready ad_type is :").append(this.p);
                                                    return value;
                                                }
                                            } else if (i2 == 4 || i2 == 2) {
                                                this.i.remove(map);
                                            } else {
                                                if (i2 == 1) {
                                                    if (value.b()) {
                                                        continue;
                                                    } else if (!com.tkay.expressad.b.p && a(value, b(cVarN)) && a(strI, cVarN)) {
                                                        new StringBuilder("isready  IS_DOWANLOAD_FINSH_PLAY is :").append(com.tkay.expressad.b.p);
                                                        return value;
                                                    }
                                                }
                                                if (this.p == 94 || this.p == 287) {
                                                    if (a(value, b(cVarN)) && a(strI, cVarN)) {
                                                        return value;
                                                    }
                                                }
                                            }
                                            i3--;
                                        }
                                    }
                                } else {
                                    boolean zIsEmpty2 = TextUtils.isEmpty(value.m());
                                    iK = value.k();
                                    if (this.p != 298) {
                                    }
                                    if (iK != 5) {
                                    }
                                }
                            }
                        }
                    }
                    i3++;
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            return null;
        }
    }

    private static boolean a(a aVar, int i) {
        long jP = aVar.p();
        long jF = aVar.f();
        if (TextUtils.isEmpty(aVar.a())) {
            return true;
        }
        if (i == 0) {
            if (aVar.n() == null || TextUtils.isEmpty(aVar.n().S())) {
                return false;
            }
            a(aVar);
            return true;
        }
        if (jF <= 0 || jP * 100 < jF * ((long) i)) {
            return false;
        }
        a(aVar);
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x000f A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0011 A[Catch: all -> 0x000b, TRY_ENTER, TryCatch #0 {, blocks: (B:6:0x0006, B:13:0x0011, B:15:0x0019, B:17:0x0021), top: B:22:0x0006 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static synchronized void a(a aVar) {
        com.tkay.expressad.foundation.d.c cVarN = null;
        if (aVar != null) {
            cVarN = aVar.n();
            if (cVarN != null) {
                return;
            }
            if (cVarN.w() == 94 || cVarN.w() == 287) {
                aVar.a(c(aVar));
            }
            return;
        }
        if (cVarN != null) {
        }
    }

    private static boolean b(a aVar, int i) {
        return a(aVar, i);
    }

    private static boolean a(String str, com.tkay.expressad.foundation.d.c cVar) {
        try {
            if (cVar.aB() != null && cVar.aB().size() > 0 && cVar.aB().contains(2)) {
                return true;
            }
            if ((!cVar.j() || t.f(str)) && !w.a(str)) {
                return b(str, cVar);
            }
            return true;
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    private static boolean b(String str, com.tkay.expressad.foundation.d.c cVar) {
        if (cVar.H() || TextUtils.isEmpty(str)) {
            return true;
        }
        if (cVar.av() != 1 || c(cVar)) {
            return (cVar.aB() != null && cVar.aB().size() > 0 && cVar.aB().contains(2)) || w.b(g.a().c(str)) || w.b(h.a.a.b(str));
        }
        return true;
    }

    private boolean a(com.tkay.expressad.foundation.d.c cVar, String str) {
        if (!TextUtils.isEmpty(cVar.ar()) || TextUtils.isEmpty(str)) {
            return true;
        }
        return j.a().d(this.m + "_" + cVar.Z() + "_" + str);
    }

    private static boolean b(com.tkay.expressad.foundation.d.c cVar, String str) {
        if (cVar.j()) {
            return true;
        }
        if ((cVar.aB() == null || cVar.aB().size() <= 0 || !cVar.aB().contains(1)) && !TextUtils.isEmpty(str) && cVar.av() == 0) {
            new StringBuilder("check template download state:").append(g.a().c(str));
            if (g.a().c(str) == null) {
                return false;
            }
        }
        return true;
    }

    public final a b(int i, boolean z) {
        try {
            return a(i, z);
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    public final a a(String str) {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList == null) {
            return null;
        }
        synchronized (copyOnWriteArrayList) {
            try {
            } catch (Throwable unused) {
            }
            for (Map<String, a> map : this.i) {
                if (map != null && map.containsKey(str)) {
                    return map.get(str);
                }
                return null;
            }
            return null;
        }
    }

    private static boolean a(CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList) {
        try {
            for (Map<String, a> map : copyOnWriteArrayList) {
                if (map != null) {
                    Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                    while (it.hasNext()) {
                        if (it.next().getValue().k() == 1) {
                            return true;
                        }
                    }
                }
            }
            return false;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private static synchronized String b(a aVar) {
        return c(aVar);
    }

    private static synchronized String c(a aVar) {
        if (aVar == null) {
            return "";
        }
        String strS = aVar.n().S();
        try {
            if (aVar.k() == 5) {
                String strE = aVar.e();
                if (!w.a(strE)) {
                    if (new File(strE).length() > 0) {
                        strS = strE;
                    }
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
        return strS;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00bc A[Catch: all -> 0x01b4, TryCatch #0 {, blocks: (B:5:0x000a, B:7:0x0013, B:8:0x0015, B:9:0x001b, B:11:0x0021, B:13:0x0029, B:14:0x0031, B:16:0x0037, B:18:0x0045, B:20:0x004b, B:22:0x0051, B:23:0x0053, B:25:0x006b, B:27:0x006f, B:28:0x0077, B:29:0x007b, B:31:0x0088, B:33:0x008c, B:36:0x0091, B:38:0x0095, B:40:0x0099, B:41:0x00ac, B:43:0x00b0, B:45:0x00b8, B:47:0x00bc, B:49:0x00c0, B:50:0x00d3, B:52:0x00d7, B:64:0x0109, B:66:0x010e, B:68:0x0114, B:70:0x013b, B:72:0x013f, B:74:0x0145, B:76:0x0149, B:77:0x0152, B:79:0x0156, B:81:0x015e, B:84:0x016e, B:92:0x0180, B:94:0x0184, B:96:0x018f, B:98:0x0193, B:100:0x0197, B:101:0x019c, B:103:0x01a0, B:105:0x01a6, B:108:0x01ad, B:107:0x01aa, B:53:0x00de, B:55:0x00e2, B:59:0x00f7, B:60:0x00fd, B:62:0x0101, B:109:0x01b2), top: B:115:0x000a }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a() {
        int iX;
        com.tkay.expressad.videocommon.d.b bVar;
        e();
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            synchronized (copyOnWriteArrayList) {
                if (!a(this.i)) {
                    this.e = true;
                }
                for (Map<String, a> map : this.i) {
                    if (map != null) {
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null && !value.b()) {
                                if (this.p == 95) {
                                    this.e = true;
                                }
                                int iK = value.k();
                                final com.tkay.expressad.foundation.d.c cVarN = value.n();
                                value.a(new com.tkay.expressad.videocommon.d.b() {
                                    @Override
                                    public final void a(String str) {
                                        com.tkay.expressad.videocommon.d.b bVar2;
                                        if (n.this.f != null) {
                                            n.this.f.a(str);
                                        }
                                        if (n.this.g == null || n.this.g.size() <= 0 || cVarN == null || (bVar2 = (com.tkay.expressad.videocommon.d.b) n.this.g.get(cVarN.Z())) == null) {
                                            return;
                                        }
                                        bVar2.a(str);
                                    }

                                    @Override
                                    public final void a(String str, String str2) {
                                        com.tkay.expressad.videocommon.d.b bVar2;
                                        com.tkay.expressad.foundation.d.c cVar = cVarN;
                                        if (cVar == null || cVar.aB() == null || cVarN.aB().size() <= 0 || !cVarN.aB().contains(0)) {
                                            if (n.this.f != null) {
                                                n.this.f.a(str, str2);
                                            }
                                            if (n.this.g == null || n.this.g.size() <= 0 || cVarN == null || (bVar2 = (com.tkay.expressad.videocommon.d.b) n.this.g.get(cVarN.Z())) == null) {
                                                return;
                                            }
                                            bVar2.a(str, str2);
                                        }
                                    }
                                });
                                int iB = b(cVarN);
                                if (this.p == 1) {
                                    if (this.a == null) {
                                        this.a = com.tkay.expressad.d.c.c(this.m);
                                    }
                                    iB = h();
                                }
                                value.d(iB);
                                if (this.p == 94 || this.p == 287 || this.p == 95) {
                                    if (this.n == null) {
                                        this.n = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.m, this.p == 287);
                                    }
                                    iX = this.n != null ? this.n.x() : 0;
                                } else if (this.p == 298) {
                                    if (this.b == null) {
                                        com.tkay.expressad.d.b.a();
                                        this.b = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                                    }
                                    if (this.b != null) {
                                        iX = this.b.g();
                                    }
                                    if (this.p == 1) {
                                    }
                                } else {
                                    iX = 0;
                                    if (this.p == 1) {
                                        if (this.a == null) {
                                            com.tkay.expressad.d.b.a();
                                            this.a = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                                        }
                                        if (this.a != null) {
                                            iX = this.a.g();
                                        }
                                    }
                                }
                                value.b(iX);
                                int iAC = cVarN != null ? cVarN.aC() : 1;
                                value.c(iAC);
                                StringBuilder sb = new StringBuilder("ready_rate : ");
                                sb.append(iB);
                                sb.append(" cd_rate : ");
                                sb.append(iX);
                                sb.append(" videoCtnType : ");
                                sb.append(iAC);
                                if (a(value, b(cVarN))) {
                                    if (this.f != null && (this.p == 297 || this.p == 298)) {
                                        this.f.a(cVarN.S());
                                    }
                                    if (this.g != null && this.g.size() > 0 && (bVar = this.g.get(cVarN.Z())) != null && cVarN != null) {
                                        bVar.a(cVarN.S());
                                    }
                                }
                                if (iK != 1 && iK != 5 && iK != 4 && (iK == 2 || this.e)) {
                                    value.a(this.h);
                                    if (a(value, iB)) {
                                        if (this.p == 94 || this.p == 287) {
                                            value.h();
                                        }
                                    } else {
                                        if (this.p == 1 || this.p == 95 || this.p == 298) {
                                            this.e = false;
                                        }
                                        value.h();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    public final void b() {
        int iK;
        try {
            if (this.i != null) {
                synchronized (this.i) {
                    for (Map<String, a> map : this.i) {
                        if (map != null) {
                            Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                            while (it.hasNext()) {
                                a value = it.next().getValue();
                                if (value != null && (iK = value.k()) != 1 && iK != 5) {
                                    if (com.tkay.expressad.foundation.h.k.a() != 9 && this.o == 2) {
                                        return;
                                    }
                                    if (iK == 2 || iK == 0) {
                                        value.h();
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    public final void c() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    for (Map<String, a> map : this.i) {
                        if (map != null) {
                            Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                            while (it.hasNext()) {
                                a value = it.next().getValue();
                                if (value != null && value.k() == 1) {
                                    value.j();
                                    this.i.remove(map);
                                    return;
                                }
                            }
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    public final void d() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.i;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    for (Map<String, a> map : this.i) {
                        if (map == null) {
                            return;
                        }
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null) {
                                value.o();
                            }
                        }
                    }
                    this.i.clear();
                }
            } catch (Throwable unused) {
            }
        }
        List<com.tkay.expressad.foundation.d.c> list = this.d;
        if (list == null || list.size() <= 0) {
            return;
        }
        this.d.clear();
    }

    private static boolean c(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null) {
            return false;
        }
        try {
            return cVar.J() == 2;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private int h() {
        try {
            if (this.a != null) {
                return this.a.f();
            }
            return 100;
        } catch (Exception unused) {
            return 100;
        }
    }

    public final void b(String str) {
        try {
            synchronized (this.i) {
                if (!TextUtils.isEmpty(str) && this.i != null && this.i.size() > 0) {
                    for (Map<String, a> map : this.i) {
                        if (map != null) {
                            for (Map.Entry<String, a> entry : map.entrySet()) {
                                if (entry != null && TextUtils.equals(entry.getKey(), str)) {
                                    this.i.remove(map);
                                }
                            }
                        }
                    }
                }
            }
        } catch (Exception unused) {
        }
    }

    private int d(com.tkay.expressad.foundation.d.c cVar) {
        try {
            if (cVar.w() == 298) {
                if (this.b == null) {
                    com.tkay.expressad.d.b.a();
                    this.b = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e(), this.m);
                }
                return this.b.f();
            }
            if (cVar.w() == 42) {
                return h();
            }
            if (this.n == null) {
                this.n = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.m, false);
            }
            return this.n.v();
        } catch (Throwable th) {
            th.getMessage();
            return 100;
        }
    }
}
