package com.tkay.core.b;

import android.text.TextUtils;
import com.tkay.core.api.MediationBidManager;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.l;
import com.tkay.core.common.l.p;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public final class c {
    private static c h;
    ConcurrentHashMap<String, List<aj>> d;
    ConcurrentHashMap<String, Integer> e;
    private MediationBidManager i;
    private final String g = getClass().getSimpleName();
    ConcurrentHashMap<String, l> a = new ConcurrentHashMap<>();
    ConcurrentHashMap<String, j> b = new ConcurrentHashMap<>(5);
    ConcurrentHashMap<String, aj> c = new ConcurrentHashMap<>(5);
    List<Integer> f = new CopyOnWriteArrayList();

    private c() {
    }

    public static c a() {
        if (h == null) {
            h = new c();
        }
        return h;
    }

    private void a(aj ajVar, l lVar) {
        this.a.put(ajVar.t(), lVar);
        if (ajVar.l() == 3 || ajVar.l() == 7) {
            a(ajVar.t(), lVar);
        }
    }

    public final void a(String str) {
        this.a.remove(str);
    }

    public static void a(String str, l lVar) {
        p.a(m.a().f(), com.tkay.core.common.b.f.u, str, lVar.c());
    }

    public static void b(String str) {
        p.a(m.a().f(), com.tkay.core.common.b.f.u, str);
    }

    public final l a(aj ajVar) {
        l lVarA = this.a.get(ajVar.t());
        if (lVarA == null && (ajVar.l() == 3 || ajVar.l() == 7)) {
            String strB = p.b(m.a().f(), com.tkay.core.common.b.f.u, ajVar.t(), "");
            if (!TextUtils.isEmpty(strB)) {
                lVarA = l.a(strB);
            }
            if (lVarA != null) {
                this.a.put(ajVar.t(), lVarA);
            }
        }
        return lVarA;
    }

    public final void a(MediationBidManager mediationBidManager) {
        this.i = mediationBidManager;
    }

    public final MediationBidManager b() {
        return this.i;
    }

    public final double b(aj ajVar) {
        l lVarM;
        if (ajVar == null || (lVarM = ajVar.M()) == null) {
            return 0.0d;
        }
        return a(lVarM.g, ajVar.t());
    }

    public final double a(String str, String str2) {
        j jVar = this.b.get(str + "_" + str2);
        if (jVar != null) {
            return jVar.c;
        }
        return 0.0d;
    }

    private j c(aj ajVar) {
        if (ajVar != null) {
            return b(ajVar.M().g, ajVar.M().k);
        }
        return null;
    }

    public final j b(String str, String str2) {
        return this.b.get(str + "_" + str2);
    }

    public final void a(String str, String str2, j jVar) {
        this.b.put(str + "_" + str2, jVar);
    }

    public final void c(String str, String str2) {
        this.b.remove(str + "_" + str2);
    }

    private void d(aj ajVar) {
        l lVarM;
        if (ajVar == null || (lVarM = ajVar.M()) == null) {
            return;
        }
        c(lVarM.g, lVarM.k);
    }

    private void d(String str) {
        if (this.e == null) {
            this.e = new ConcurrentHashMap<>();
        }
        this.e.put(str + "_c2sfirstStatus", 1);
    }

    private boolean e(String str) {
        ConcurrentHashMap<String, Integer> concurrentHashMap = this.e;
        if (concurrentHashMap == null) {
            return true;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append("_c2sfirstStatus");
        return concurrentHashMap.get(sb.toString()) == null;
    }

    public final void a(String str, aj ajVar) {
        this.c.put(str, ajVar);
    }

    public final aj c(String str) {
        return this.c.get(str);
    }

    public final void a(int i) {
        synchronized (this.f) {
            if (!this.f.contains(Integer.valueOf(i))) {
                this.f.add(Integer.valueOf(i));
            }
        }
    }

    public final boolean b(int i) {
        boolean z;
        synchronized (this.f) {
            z = !this.f.contains(Integer.valueOf(i));
        }
        return z;
    }
}
