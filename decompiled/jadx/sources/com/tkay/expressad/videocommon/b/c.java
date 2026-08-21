package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7458a = "DownLoadManager";
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
            if (!com.tkay.expressad.b.f6449a) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean b(java.lang.String r9, boolean r10, int r11, boolean r12, int r13, java.util.List<com.tkay.expressad.foundation.d.c> r14) {
        /*
            Method dump skipped, instruction units count: 566
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.c.b(java.lang.String, boolean, int, boolean, int, java.util.List):boolean");
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
