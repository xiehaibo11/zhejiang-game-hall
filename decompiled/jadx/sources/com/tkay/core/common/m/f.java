package com.tkay.core.common.m;

import android.content.Context;
import com.tkay.core.common.f.ae;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.am;
import com.tkay.core.common.f.l;
import com.tkay.core.common.f.q;
import com.tkay.core.common.y;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6271a = com.tkay.core.common.h.class.getSimpleName();
    final int b;
    int c;
    int d;
    long e;
    am m;
    ae n;
    List<aj> o;
    private List<aj> p;
    volatile int i = 0;
    volatile int j = 0;
    volatile int k = 0;
    volatile int l = 0;
    List<aj> f = Collections.synchronizedList(new ArrayList(5));
    List<aj> g = Collections.synchronizedList(new ArrayList(5));
    List<aj> h = Collections.synchronizedList(new ArrayList(2));

    public f(g gVar) {
        this.c = 1;
        this.f.addAll(gVar.d);
        if (this.o == null) {
            this.o = Collections.synchronizedList(new ArrayList());
        }
        this.o.clear();
        this.o.addAll(gVar.d);
        this.b = gVar.c.an();
        this.c = gVar.c.l();
        this.d = gVar.c.ab();
        this.e = gVar.c.n();
        List<aj> listB = b(gVar.d);
        if (listB != null) {
            this.f.removeAll(listB);
            this.h.addAll(listB);
        }
        this.p = Collections.synchronizedList(new ArrayList(3));
        this.m = gVar.g;
        this.n = gVar.h;
    }

    public final List<aj> a() {
        return this.f;
    }

    public final List<aj> b() {
        return this.g;
    }

    public final List<aj> c() {
        return this.h;
    }

    public final int d() {
        return this.i;
    }

    public final int e() {
        return this.j;
    }

    public final int f() {
        return this.k;
    }

    public final am g() {
        return this.m;
    }

    public final ae h() {
        return this.n;
    }

    public final List<aj> i() {
        List<aj> listB;
        int i = this.c;
        if (i == 1) {
            listB = new ArrayList<>();
            int iMin = Math.min(this.d, this.f.size());
            for (int i2 = 0; i2 < iMin; i2++) {
                listB.add(this.f.get(i2));
            }
        } else {
            listB = i == 2 ? b(1) : null;
        }
        StringBuilder sb = new StringBuilder("startToRequestMediationAd: mRequestNumType: ");
        sb.append(this.c);
        sb.append(", needRequestNum: ");
        sb.append(listB != null ? listB.size() : 0);
        sb.append(", validCacheNum: ");
        sb.append(this.b);
        sb.append(", mWaitingFillTime: ");
        sb.append(this.e);
        if (listB.size() > 0) {
            this.f.removeAll(listB);
        }
        return listB;
    }

    public static String a(List<aj> list) {
        String str = "";
        for (int i = 0; i < list.size(); i++) {
            if (i > 0) {
                str = str + Constants.ACCEPT_TIME_SEPARATOR_SP;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(list.get(i).c());
            str = str + sb.toString();
        }
        return str;
    }

    public final void a(int i, int i2) {
        this.i += i;
        if (i2 == 2) {
            this.k += i;
        } else {
            this.j += i;
        }
    }

    public final void a(int i) {
        if (this.c == 2 && i == 1) {
            this.l--;
        }
    }

    public final List<aj> b(int i) {
        List<aj> list;
        if (i == 2) {
            list = this.h;
        } else {
            list = this.f;
        }
        ArrayList arrayList = new ArrayList();
        if (list != null && list.size() != 0) {
            aj ajVar = list.get(0);
            if (i == 2) {
                arrayList.add(ajVar);
            } else {
                boolean z = com.tkay.core.common.l.g.a(ajVar) > a(true);
                int i2 = this.c;
                if (i2 == 1) {
                    boolean z2 = this.j < this.d;
                    if (z2 && z) {
                        arrayList.add(ajVar);
                    } else {
                        StringBuilder sb = new StringBuilder("getNextRequestList, isLessThenMaxRequestNum: ");
                        sb.append(z2);
                        sb.append(", isExceedCachePrice");
                        sb.append(z);
                    }
                } else if (i2 == 2) {
                    if (this.l == 0 && z) {
                        double dA = com.tkay.core.common.l.g.a(ajVar);
                        int size = list.size();
                        for (int i3 = 0; i3 < size; i3++) {
                            aj ajVar2 = list.get(i3);
                            if (com.tkay.core.common.l.g.a(ajVar2) == dA) {
                                arrayList.add(ajVar2);
                            }
                        }
                        this.l = arrayList.size();
                        new StringBuilder("getNextRequestList: same price, need request num: ").append(this.l);
                    } else {
                        new StringBuilder("getNextRequestList: The number of ad sources with the same price that did not return results: ").append(this.l);
                    }
                }
            }
            if (arrayList.size() > 0) {
                list.removeAll(arrayList);
            }
        }
        return arrayList;
    }

    public final void a(aj ajVar) {
        synchronized (this.o) {
            if (this.o != null) {
                if (this.o.size() == 0) {
                    this.o.add(ajVar);
                    a(ajVar, 0, null);
                    return;
                }
                for (int i = 0; i < this.o.size(); i++) {
                    aj ajVar2 = this.o.get(i);
                    if (com.tkay.core.common.l.g.a(ajVar) > com.tkay.core.common.l.g.a(ajVar2)) {
                        this.o.add(i, ajVar);
                        a(ajVar, i, ajVar2);
                        return;
                    }
                }
                this.o.add(ajVar);
                a(ajVar, this.o.size() - 1, null);
            }
        }
    }

    private void a(aj ajVar, int i, aj ajVar2) {
        l lVarM;
        l lVarM2;
        if (ajVar.j() && (lVarM2 = ajVar.M()) != null) {
            if (ajVar2 != null) {
                lVarM2.q = com.tkay.core.common.l.g.a(ajVar2);
            } else {
                lVarM2.q = com.tkay.core.common.l.g.a(ajVar);
            }
        }
        if (i > 0) {
            aj ajVar3 = this.o.get(i - 1);
            if (!ajVar3.j() || (lVarM = ajVar3.M()) == null) {
                return;
            }
            lVarM.q = com.tkay.core.common.l.g.a(ajVar);
        }
    }

    private static List<aj> b(List<aj> list) {
        ArrayList arrayList = null;
        for (aj ajVar : list) {
            if (ajVar.l() == 8) {
                if (arrayList == null) {
                    arrayList = new ArrayList(4);
                }
                arrayList.add(ajVar);
            }
        }
        return arrayList;
    }

    private double j() {
        return a(false);
    }

    public final double a(boolean z) {
        synchronized (this.p) {
            int size = this.p.size();
            if (size == 0) {
                return 0.0d;
            }
            int i = this.b - 1;
            int i2 = size - 1;
            if (z && i2 < i) {
                return 0.0d;
            }
            return com.tkay.core.common.l.g.a(this.p.get(Math.min(i, i2)));
        }
    }

    private double k() {
        return a(true);
    }

    public final void b(aj ajVar) {
        synchronized (this.p) {
            if (this.p.size() == 0) {
                this.p.add(ajVar);
            } else {
                double dA = com.tkay.core.common.l.g.a(ajVar);
                int i = 0;
                while (true) {
                    if (i >= this.p.size()) {
                        break;
                    }
                    if (dA > com.tkay.core.common.l.g.a(this.p.get(i))) {
                        this.p.add(i, ajVar);
                        break;
                    } else {
                        if (i == this.p.size() - 1) {
                            this.p.add(ajVar);
                            break;
                        }
                        i++;
                    }
                }
            }
        }
    }

    public final void a(com.tkay.core.common.f.d dVar, aj ajVar) {
        ArrayList arrayList = new ArrayList(5);
        synchronized (this.p) {
            a(arrayList, this.p);
        }
        synchronized (this.g) {
            a(arrayList, this.g);
        }
        Iterator<aj> it = arrayList.iterator();
        while (it.hasNext()) {
            a(it.next(), dVar, ajVar, false);
        }
    }

    public static void a(aj ajVar, com.tkay.core.common.f.d dVar, aj ajVar2, boolean z) {
        l lVarM;
        if (ajVar2 == null || (lVarM = ajVar.M()) == null) {
            return;
        }
        double dA = com.tkay.core.common.l.g.a(ajVar2);
        q qVar = new q();
        qVar.f6162a = 2;
        qVar.b = dA;
        qVar.e = dVar;
        qVar.c = ajVar2;
        qVar.d = ajVar;
        lVarM.a(qVar, z);
    }

    private void a(List<aj> list, List<aj> list2) {
        int iAe;
        int size = list2.size();
        int size2 = this.p.size();
        for (int i = 0; i < size; i++) {
            aj ajVar = list2.get(i);
            if (ajVar.j() && (iAe = ajVar.ae()) > 0 && iAe <= size2 && com.tkay.core.common.l.g.a(ajVar) < com.tkay.core.common.l.g.a(this.p.get(iAe - 1))) {
                list.add(ajVar);
            }
        }
    }

    public final boolean c(aj ajVar) {
        double dA;
        double dA2 = com.tkay.core.common.l.g.a(ajVar);
        double dA3 = a(true);
        synchronized (this.g) {
            Iterator<aj> it = this.g.iterator();
            while (true) {
                if (!it.hasNext()) {
                    dA = 0.0d;
                    break;
                }
                aj next = it.next();
                dA = com.tkay.core.common.l.g.a(next);
                if (next.j() && dA > com.tkay.core.common.l.g.a(ajVar)) {
                    break;
                }
            }
        }
        return dA2 > Math.max(dA3, dA);
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(com.tkay.core.common.f.aj r4, com.tkay.core.common.m.h r5) {
        /*
            int r0 = r4.Y()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r0 == 0) goto L2c
            int r4 = r4.l()
            if (r4 == r2) goto L25
            r3 = 3
            if (r4 == r3) goto L25
            r3 = 6
            if (r4 == r3) goto L1d
            r3 = 7
            if (r4 == r3) goto L25
            goto L2c
        L1d:
            boolean r4 = r5.g
            if (r4 == 0) goto L22
            goto L2d
        L22:
            r5.g = r2
            goto L2c
        L25:
            boolean r4 = r5.f
            if (r4 == 0) goto L2a
            goto L2d
        L2a:
            r5.f = r2
        L2c:
            r1 = r0
        L2d:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.m.f.a(com.tkay.core.common.f.aj, com.tkay.core.common.m.h):boolean");
    }

    public static void a(Context context, String str, String str2, aj ajVar, aj ajVar2) {
        am.a aVar;
        am.a aVar2 = null;
        if (ajVar != null) {
            am.a aVar3 = new am.a(ajVar);
            aVar = null;
            aVar2 = aVar3;
        } else {
            aVar = ajVar2 != null ? new am.a(ajVar2) : null;
        }
        y.a(context).a(str, str2, aVar2, aVar);
    }

    public static void a(Context context, String str) {
        y.a(context).a(str);
    }
}
