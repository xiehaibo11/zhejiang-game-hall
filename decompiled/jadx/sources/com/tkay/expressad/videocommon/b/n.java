package com.tkay.expressad.videocommon.b;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.videocommon.b.h;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes3.dex */
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
    private d h = new d() { // from class: com.tkay.expressad.videocommon.b.n.1
        @Override // com.tkay.expressad.videocommon.b.d
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.expressad.d.c f7476a = null;
    com.tkay.expressad.d.c b = null;
    private Context j = com.tkay.core.common.b.m.a().f();

    private static boolean g() {
        return true;
    }

    static /* synthetic */ boolean a(n nVar) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(java.util.List<com.tkay.expressad.foundation.d.c> r13) {
        /*
            Method dump skipped, instruction units count: 497
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.n.b(java.util.List):void");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.tkay.expressad.videocommon.b.a> a(boolean r22, java.util.List<com.tkay.expressad.foundation.d.c> r23) {
        /*
            Method dump skipped, instruction units count: 477
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.n.a(boolean, java.util.List):java.util.List");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.tkay.expressad.videocommon.b.a a(int r22, boolean r23) {
        /*
            Method dump skipped, instruction units count: 518
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.n.a(int, boolean):com.tkay.expressad.videocommon.b.a");
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized void a(com.tkay.expressad.videocommon.b.a r4) {
        /*
            java.lang.Class<com.tkay.expressad.videocommon.b.n> r0 = com.tkay.expressad.videocommon.b.n.class
            monitor-enter(r0)
            r1 = 0
            if (r4 == 0) goto Ld
            com.tkay.expressad.foundation.d.c r1 = r4.n()     // Catch: java.lang.Throwable -> Lb
            goto Ld
        Lb:
            r4 = move-exception
            goto L2a
        Ld:
            if (r1 != 0) goto L11
            monitor-exit(r0)
            return
        L11:
            int r2 = r1.w()     // Catch: java.lang.Throwable -> Lb
            r3 = 94
            if (r2 == r3) goto L21
            int r1 = r1.w()     // Catch: java.lang.Throwable -> Lb
            r2 = 287(0x11f, float:4.02E-43)
            if (r1 != r2) goto L28
        L21:
            java.lang.String r1 = c(r4)     // Catch: java.lang.Throwable -> Lb
            r4.a(r1)     // Catch: java.lang.Throwable -> Lb
        L28:
            monitor-exit(r0)
            return
        L2a:
            monitor-exit(r0)
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.n.a(com.tkay.expressad.videocommon.b.a):void");
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
            return (cVar.aB() != null && cVar.aB().size() > 0 && cVar.aB().contains(2)) || w.b(g.a().c(str)) || w.b(h.a.f7468a.b(str));
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
            if (!com.tkay.expressad.b.f6449a) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a() {
        /*
            Method dump skipped, instruction units count: 440
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.n.a():void");
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
            if (!com.tkay.expressad.b.f6449a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private int h() {
        try {
            if (this.f7476a != null) {
                return this.f7476a.f();
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
