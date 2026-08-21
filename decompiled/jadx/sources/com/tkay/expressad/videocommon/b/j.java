package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;
import com.tkay.expressad.foundation.d.c;
import java.io.File;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class j {
    private static Map<String, Boolean> b = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, Boolean> f7469a;
    private Map<String, Boolean> c;
    private Map<String, Boolean> d;
    private Map<String, Boolean> e;

    /* synthetic */ j(byte b2) {
        this();
    }

    private j() {
        this.f7469a = new HashMap();
        this.c = new HashMap();
        this.d = new HashMap();
        this.e = new HashMap();
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static j f7470a = new j(0);

        private a() {
        }
    }

    public static j a() {
        return a.f7470a;
    }

    public final boolean a(String str) {
        if (this.f7469a == null || TextUtils.isEmpty(str) || !this.f7469a.containsKey(str)) {
            return false;
        }
        return this.f7469a.get(str).booleanValue();
    }

    public final boolean b(String str) {
        if (this.c == null || TextUtils.isEmpty(str) || !this.c.containsKey(str)) {
            return false;
        }
        return this.c.get(str).booleanValue();
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            if (cVar != null) {
                b(cVar);
                e(cVar.aZ());
            }
        }
    }

    private void a(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null) {
            b(cVar);
            e(cVar.aZ());
        }
    }

    private void e(String str) {
        if (this.d == null) {
            this.d = new HashMap();
        }
        this.d.put(str, Boolean.FALSE);
    }

    public final void a(String str, boolean z) {
        if (this.f7469a == null) {
            this.f7469a = new HashMap();
        }
        this.f7469a.put(str, Boolean.valueOf(z));
    }

    public final void b(String str, boolean z) {
        if (this.c == null) {
            this.c = new HashMap();
        }
        this.c.put(str, Boolean.valueOf(z));
    }

    public static void c(String str) {
        if (b == null) {
            b = new HashMap();
        }
        b.put(str, Boolean.TRUE);
    }

    public final void c(String str, boolean z) {
        if (this.e == null) {
            this.e = new HashMap();
        }
        this.e.put(str, Boolean.valueOf(z));
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        List<c.C0460c.a> listF;
        if (cVar != null) {
            String strS = cVar.S();
            Map<String, Boolean> map = this.f7469a;
            if (map != null && !map.containsKey(strS)) {
                this.f7469a.put(strS, Boolean.FALSE);
            }
            String strI = cVar.I();
            Map<String, Boolean> map2 = this.c;
            if (map2 != null && !map2.containsKey(strI)) {
                this.c.put(strI, Boolean.FALSE);
            }
            c.C0460c c0460cM = cVar.M();
            if (c0460cM == null || (listF = c0460cM.f()) == null) {
                return;
            }
            for (c.C0460c.a aVar : listF) {
                if (aVar != null) {
                    b(aVar.b);
                }
            }
        }
    }

    private static void b(List<String> list) {
        Map<String, Boolean> map;
        if (list == null || list.size() == 0) {
            return;
        }
        for (String str : list) {
            if (!TextUtils.isEmpty(str) && (map = b) != null && !map.containsKey(str)) {
                b.put(str, Boolean.valueOf(com.tkay.expressad.foundation.g.d.b.a(com.tkay.expressad.foundation.b.b.b().d()).b(str)));
            }
        }
    }

    private static boolean a(Map<String, Boolean> map, String str) {
        if (TextUtils.isEmpty(str)) {
            return true;
        }
        if (map != null) {
            if (map.containsKey(str)) {
                return map.get(str).booleanValue();
            }
            map.put(str, Boolean.FALSE);
            return false;
        }
        new HashMap().put(str, Boolean.FALSE);
        return false;
    }

    public final boolean d(String str) {
        if (!TextUtils.isEmpty(str) && this.e.containsKey(str)) {
            return this.e.get(str).booleanValue();
        }
        return false;
    }

    private void f(String str) {
        if (this.e.containsKey(str)) {
            this.e.remove(str);
        }
    }

    private boolean a(boolean z, String str) {
        boolean zA = a(this.c, str);
        if (zA || !z || TextUtils.isEmpty(g.a().c(str))) {
            return zA;
        }
        this.c.put(str, Boolean.TRUE);
        return true;
    }

    private static boolean a(c.C0460c c0460c) {
        List<c.C0460c.a> listF;
        if (c0460c != null && (listF = c0460c.f()) != null) {
            for (c.C0460c.a aVar : listF) {
                if (aVar != null && aVar.b != null) {
                    for (String str : aVar.b) {
                        boolean zA = a(b, str);
                        if (zA || com.tkay.expressad.foundation.g.d.b.a(com.tkay.expressad.foundation.b.b.b().d()).b(str)) {
                            zA = true;
                        }
                        if (!zA) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }

    private static boolean g(String str) {
        boolean zA = a(b, str);
        if (zA || com.tkay.expressad.foundation.g.d.b.a(com.tkay.expressad.foundation.b.b.b().d()).b(str)) {
            return true;
        }
        return zA;
    }

    private static boolean h(String str) {
        File file = new File(com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.ANYTHINK_VC) + File.separator + com.tkay.expressad.foundation.h.m.d(str));
        try {
            if (file.exists() && file.isFile()) {
                return file.canRead();
            }
            return false;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.f6449a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }
}
