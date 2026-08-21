package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.common.f.aj;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile x f6322a;
    private final String c = "Waterfall_Final";
    private ConcurrentHashMap<String, a> b = new ConcurrentHashMap<>();

    private x() {
    }

    public static x a() {
        if (f6322a == null) {
            synchronized (x.class) {
                if (f6322a == null) {
                    f6322a = new x();
                }
            }
        }
        return f6322a;
    }

    public final synchronized void a(String str, String str2, com.tkay.core.c.d dVar, List<aj> list) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            aVar = new a();
        }
        a.C0427a c0427a = aVar.b.get(str2);
        boolean z = c0427a != null ? c0427a.c : false;
        a.C0427a c0427a2 = aVar.new C0427a();
        c0427a2.f6324a = dVar;
        CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        copyOnWriteArrayList.addAll(list);
        c0427a2.b = copyOnWriteArrayList;
        aVar.b.put(str2, c0427a2);
        aVar.f6323a = str2;
        this.b.put(str, aVar);
        aVar.d(str2);
        if (z) {
            a.b(aVar, str2);
        }
    }

    public final synchronized void a(String str, String str2, List<aj> list) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            return;
        }
        for (aj ajVar : list) {
            a.C0427a c0427a = aVar.b.get(str2);
            if (c0427a != null) {
                c0427a.a(ajVar);
            }
        }
    }

    public final synchronized void b(String str, String str2, List<aj> list) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            return;
        }
        a.a(aVar, str2, list);
        a(str, str2, list);
    }

    public final synchronized void a(String str, String str2, aj ajVar) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            return;
        }
        ArrayList arrayList = new ArrayList(2);
        arrayList.add(ajVar);
        a.a(aVar, str2, arrayList);
    }

    public final synchronized void a(String str, String str2) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            return;
        }
        a.b(aVar, str2);
    }

    public final List<aj> a(String str) {
        a aVar = this.b.get(str);
        List listC = aVar != null ? a.c(aVar, aVar.f6323a) : null;
        if (listC == null) {
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(str);
            if (dVarA != null) {
                return dVarA.G();
            }
            return null;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(listC);
        return arrayList;
    }

    public final List<aj> b(String str, String str2) {
        a aVar = this.b.get(str);
        if (aVar != null) {
            return a.c(aVar, str2);
        }
        return null;
    }

    public final String b(String str) {
        a aVar = this.b.get(str);
        return aVar != null ? aVar.f6323a : "";
    }

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f6323a;
        ConcurrentHashMap<String, C0427a> b = new ConcurrentHashMap<>();

        a() {
        }

        private void a(String str, com.tkay.core.c.d dVar, List<aj> list) {
            C0427a c0427a = new C0427a();
            c0427a.f6324a = dVar;
            CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
            copyOnWriteArrayList.addAll(list);
            c0427a.b = copyOnWriteArrayList;
            this.b.put(str, c0427a);
        }

        private List<aj> a(String str) {
            C0427a c0427a = this.b.get(str);
            if (c0427a != null) {
                return c0427a.b;
            }
            return null;
        }

        private boolean b(String str) {
            C0427a c0427a = this.b.get(str);
            if (c0427a != null) {
                return c0427a.c;
            }
            return false;
        }

        private void a(String str, aj ajVar) {
            C0427a c0427a = this.b.get(str);
            if (c0427a != null) {
                c0427a.a(ajVar);
            }
        }

        private void a(String str, List<aj> list) {
            C0427a c0427a = this.b.get(str);
            if (c0427a != null) {
                c0427a.a(list);
            }
        }

        private void c(String str) {
            C0427a c0427a = this.b.get(str);
            if (c0427a != null) {
                c0427a.b();
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public synchronized void d(String str) {
            Iterator<Map.Entry<String, C0427a>> it = this.b.entrySet().iterator();
            while (it.hasNext()) {
                String key = it.next().getKey();
                if (key != null) {
                    String string = key.toString();
                    if (this.b.get(string).c && !TextUtils.equals(str, string)) {
                        it.remove();
                    }
                }
            }
        }

        /* JADX INFO: renamed from: com.tkay.core.common.x$a$a, reason: collision with other inner class name */
        class C0427a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            com.tkay.core.c.d f6324a;
            CopyOnWriteArrayList<aj> b;
            boolean c;

            C0427a() {
            }

            private List<aj> a() {
                return this.b;
            }

            /* JADX INFO: Access modifiers changed from: private */
            public synchronized void a(aj ajVar) {
                com.tkay.core.common.l.g.a((List<aj>) this.b, ajVar, true);
            }

            /* JADX INFO: Access modifiers changed from: private */
            public synchronized void a(List<aj> list) {
                if (this.b != null && this.b.size() > 0) {
                    this.b.removeAll(list);
                }
            }

            /* JADX INFO: Access modifiers changed from: private */
            public synchronized void b() {
                if (this.c) {
                    return;
                }
                this.c = true;
            }

            private boolean c() {
                return this.c;
            }
        }

        private static /* synthetic */ boolean d(a aVar, String str) {
            C0427a c0427a = aVar.b.get(str);
            if (c0427a != null) {
                return c0427a.c;
            }
            return false;
        }

        private static /* synthetic */ void a(a aVar, String str, com.tkay.core.c.d dVar, List list) {
            C0427a c0427a = aVar.new C0427a();
            c0427a.f6324a = dVar;
            CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
            copyOnWriteArrayList.addAll(list);
            c0427a.b = copyOnWriteArrayList;
            aVar.b.put(str, c0427a);
        }

        static /* synthetic */ void b(a aVar, String str) {
            C0427a c0427a = aVar.b.get(str);
            if (c0427a != null) {
                c0427a.b();
            }
        }

        private static /* synthetic */ void a(a aVar, String str, aj ajVar) {
            C0427a c0427a = aVar.b.get(str);
            if (c0427a != null) {
                c0427a.a(ajVar);
            }
        }

        static /* synthetic */ void a(a aVar, String str, List list) {
            C0427a c0427a = aVar.b.get(str);
            if (c0427a != null) {
                c0427a.a((List<aj>) list);
            }
        }

        static /* synthetic */ List c(a aVar, String str) {
            C0427a c0427a = aVar.b.get(str);
            if (c0427a != null) {
                return c0427a.b;
            }
            return null;
        }
    }
}
