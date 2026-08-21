package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class c {
    private static final String a = "DownLoadManager";
    private static c b;
    private ThreadPoolExecutor c;
    private boolean d = false;
    private ConcurrentHashMap<String, n> e = new ConcurrentHashMap<>();
    private Map<String, List<Map<String, a>>> f;
    private Map<String, List<com.tkay.expressad.foundation.d.c>> g;
    private Map<String, List<a>> h;

    private c() {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(5, 15, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        this.c = threadPoolExecutor;
        threadPoolExecutor.allowCoreThreadTimeOut(true);
    }

    public static c a() {
        if (b == null) {
            synchronized (c.class) {
                if (b == null) {
                    b = new c();
                }
            }
        }
        return b;
    }

    public final a a(String str, String str2) {
        n nVarC = c(str);
        if (nVarC != null) {
            return nVarC.a(str2);
        }
        return null;
    }

    private List<Map<String, a>> e(String str) {
        Map<String, List<Map<String, a>>> map = this.f;
        if (map == null || !map.containsKey(str)) {
            return null;
        }
        return this.f.get(str);
    }

    public final List<com.tkay.expressad.foundation.d.c> a(String str) {
        Map<String, List<com.tkay.expressad.foundation.d.c>> map = this.g;
        if (map == null || !map.containsKey(str)) {
            return null;
        }
        return this.g.get(str);
    }

    public final List<a> b(String str) {
        Map<String, List<a>> map = this.h;
        if (map == null || !map.containsKey(str)) {
            return null;
        }
        return this.h.get(str);
    }

    private a b(int i, String str, boolean z) {
        n nVarC = c(str);
        if (nVarC != null) {
            return nVarC.b(i, z);
        }
        return null;
    }

    public final n c(String str) {
        ConcurrentHashMap<String, n> concurrentHashMap = this.e;
        if (concurrentHashMap == null || !concurrentHashMap.containsKey(str)) {
            return null;
        }
        return this.e.get(str);
    }

    public final boolean a(int i, String str, boolean z) {
        try {
            n nVarC = c(str);
            if (nVarC != null) {
                return nVarC.a(i, z) != null;
            }
            return false;
        } catch (Exception e) {
            if (!com.tkay.expressad.b.a) {
                return false;
            }
            e.printStackTrace();
            return false;
        }
    }

    public final boolean a(String str, boolean z, int i, boolean z2, int i2, List<com.tkay.expressad.foundation.d.c> list) {
        return b(str, z, i, z2, i2, list);
    }

    /* JADX WARN: Removed duplicated region for block: B:87:0x0174  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean b(String str, boolean z, int i, boolean z2, int i2, List<com.tkay.expressad.foundation.d.c> list) {
        n nVarC;
        com.tkay.expressad.foundation.d.c cVar;
        boolean z3 = false;
        if (list != null) {
            try {
                if (list.size() != 0 && (nVarC = c(str)) != null) {
                    List<a> listA = nVarC.a(z, list);
                    if (listA != null && listA.size() != 0) {
                        if (z2) {
                            boolean z4 = list.size() > 0 && (cVar = list.get(0)) != null && cVar.aB() != null && cVar.aB().size() > 0 && cVar.aB().contains(0);
                            try {
                                if (i2 == 0) {
                                    ArrayList arrayList = new ArrayList();
                                    for (a aVar : listA) {
                                        for (com.tkay.expressad.foundation.d.c cVar2 : list) {
                                            if (aVar != null && aVar.n() != null && cVar2 != null && cVar2.aZ().equals(aVar.n().aZ()) && cVar2.Z().equals(aVar.n().Z())) {
                                                arrayList.add(aVar);
                                            }
                                        }
                                    }
                                    z3 = arrayList.size() > 0 ? true : z4;
                                } else {
                                    ArrayList arrayList2 = new ArrayList();
                                    for (a aVar2 : listA) {
                                        for (com.tkay.expressad.foundation.d.c cVar3 : list) {
                                            if (aVar2 != null && aVar2.n() != null && cVar3 != null && cVar3.aZ().equals(aVar2.n().aZ()) && cVar3.Z().equals(aVar2.n().Z())) {
                                                arrayList2.add(aVar2);
                                            }
                                        }
                                    }
                                    if (arrayList2.size() >= i) {
                                    }
                                }
                            } catch (Exception e) {
                                e = e;
                                z3 = z4;
                                if (com.tkay.expressad.b.a) {
                                    e.printStackTrace();
                                }
                            }
                        } else {
                            ArrayList arrayList3 = new ArrayList();
                            for (a aVar3 : listA) {
                                for (com.tkay.expressad.foundation.d.c cVar4 : list) {
                                    if (aVar3 != null && aVar3.n() != null && cVar4 != null && cVar4.aZ().equals(aVar3.n().aZ()) && cVar4.Z().equals(aVar3.n().Z())) {
                                        arrayList3.add(aVar3);
                                    }
                                }
                            }
                            if (arrayList3.size() > 0) {
                            }
                        }
                    }
                    if (z3) {
                        if (this.f == null) {
                            this.f = new HashMap();
                        } else if (this.f.containsKey(str)) {
                            this.f.remove(str);
                        }
                        if (this.h == null) {
                            this.h = new HashMap();
                        } else if (this.h.containsKey(str)) {
                            this.h.remove(str);
                        }
                        if (this.g == null) {
                            this.g = new HashMap();
                        } else if (this.g.containsKey(str)) {
                            this.g.remove(str);
                        }
                        if (listA != null && listA.size() > 0) {
                            ArrayList arrayList4 = new ArrayList();
                            ArrayList arrayList5 = new ArrayList();
                            ArrayList arrayList6 = new ArrayList();
                            for (a aVar4 : listA) {
                                ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
                                com.tkay.expressad.foundation.d.c cVarN = aVar4.n();
                                concurrentHashMap.put(cVarN.aZ() + cVarN.S() + cVarN.B(), aVar4);
                                arrayList4.add(concurrentHashMap);
                                arrayList5.add(cVarN);
                                arrayList6.add(aVar4);
                            }
                            this.f.put(str, arrayList4);
                            this.g.put(str, arrayList5);
                            this.h.put(str, arrayList6);
                        }
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
        }
        return z3;
    }

    private void b(String str, String str2) {
        n nVarC = c(str);
        if (nVarC != null) {
            try {
                nVarC.b(str2);
            } catch (Exception unused) {
            }
        }
    }

    public final void d(String str) {
        n nVarC = c(str);
        if (nVarC != null) {
            nVarC.a();
        }
    }

    public final n a(String str, List<com.tkay.expressad.foundation.d.c> list, int i, com.tkay.expressad.videocommon.d.b bVar) {
        if (TextUtils.isEmpty(str) || list == null || list.size() == 0) {
            return null;
        }
        if (this.e.containsKey(str)) {
            n nVar = this.e.get(str);
            if (i == 94 || i == 287) {
                nVar.a(list.get(0).Z(), bVar);
            } else {
                nVar.a(bVar);
            }
            nVar.a(list);
            return nVar;
        }
        n nVar2 = new n(list, this.c, str, i);
        if (bVar != null) {
            nVar2.a(bVar);
        }
        this.e.put(str, nVar2);
        return nVar2;
    }

    private n a(String str, com.tkay.expressad.foundation.d.c cVar, int i, com.tkay.expressad.videocommon.d.b bVar) {
        if (TextUtils.isEmpty(str) || cVar == null) {
            return null;
        }
        if (this.e.containsKey(str)) {
            n nVar = this.e.get(str);
            if (i == 94 || i == 287) {
                nVar.a(cVar.Z(), bVar);
            } else {
                nVar.a(bVar);
            }
            nVar.a(cVar);
            return nVar;
        }
        n nVar2 = new n(cVar, this.c, str, i);
        if (bVar != null) {
            nVar2.a(bVar);
        }
        this.e.put(str, nVar2);
        return nVar2;
    }

    public final void b() {
        this.d = false;
        ConcurrentHashMap<String, n> concurrentHashMap = this.e;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, n>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                n value = it.next().getValue();
                if (value != null) {
                    value.c();
                }
            }
        }
    }

    private void d() {
        ConcurrentHashMap<String, n> concurrentHashMap = this.e;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, n>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                n value = it.next().getValue();
                if (value != null) {
                    value.b();
                }
            }
        }
    }

    public final void a(boolean z) {
        if (z) {
            if (this.d) {
                return;
            }
        } else {
            this.d = false;
        }
        ConcurrentHashMap<String, n> concurrentHashMap = this.e;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, n>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                it.next().getValue().a();
            }
        }
    }

    public final void c() {
        ConcurrentHashMap<String, n> concurrentHashMap = this.e;
        if (concurrentHashMap != null) {
            for (Map.Entry<String, n> entry : concurrentHashMap.entrySet()) {
                n value = entry.getValue();
                String key = entry.getKey();
                try {
                    com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), key);
                    if (dVarA != null) {
                        if (dVarA.F() == 2) {
                            value.c();
                        } else {
                            value.a();
                        }
                    }
                } catch (Exception e) {
                    e.getMessage();
                    try {
                        if (!TextUtils.isEmpty(key)) {
                            com.tkay.expressad.d.b.a();
                            com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), key);
                            if (cVarC == null) {
                                cVarC = com.tkay.expressad.d.c.d(key);
                            }
                            if (cVarC.m() == 2) {
                                value.c();
                            } else {
                                value.a();
                            }
                        }
                    } catch (Exception e2) {
                        e2.getMessage();
                    }
                }
            }
        }
    }

    private static void a(n nVar, String str) {
        try {
            com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), str);
            if (dVarA == null) {
                return;
            }
            if (dVarA.F() == 2) {
                nVar.c();
            } else {
                nVar.a();
            }
        } catch (Exception e) {
            e.getMessage();
            try {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), str);
                if (cVarC == null) {
                    cVarC = com.tkay.expressad.d.c.d(str);
                }
                if (cVarC.m() == 2) {
                    nVar.c();
                } else {
                    nVar.a();
                }
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
    }

    private void f(String str) {
        n nVarC = c(str);
        if (nVarC != null) {
            nVarC.d();
        }
    }
}
