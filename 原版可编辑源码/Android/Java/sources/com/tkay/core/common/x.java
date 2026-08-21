package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.common.f.aj;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class x {
    private static volatile x a;
    private final String c = "Waterfall_Final";
    private ConcurrentHashMap<String, a> b = new ConcurrentHashMap<>();

    private x() {
    }

    public static x a() {
        if (a == null) {
            synchronized (x.class) {
                if (a == null) {
                    a = new x();
                }
            }
        }
        return a;
    }

    public final synchronized void a(String str, String str2, com.tkay.core.c.d dVar, List<aj> list) {
        a aVar = this.b.get(str);
        if (aVar == null) {
            aVar = new a();
        }
        a.a aVar2 = aVar.b.get(str2);
        boolean z = aVar2 != null ? aVar2.c : false;
        a.a aVar3 = aVar.new a();
        aVar3.a = dVar;
        CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        copyOnWriteArrayList.addAll(list);
        aVar3.b = copyOnWriteArrayList;
        aVar.b.put(str2, aVar3);
        aVar.a = str2;
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
            a.a aVar2 = aVar.b.get(str2);
            if (aVar2 != null) {
                aVar2.a(ajVar);
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
        List listC = aVar != null ? a.c(aVar, aVar.a) : null;
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
        return aVar != null ? aVar.a : "";
    }

    class a {
        String a;
        ConcurrentHashMap<String, a> b = new ConcurrentHashMap<>();

        a() {
        }

        private void a(String str, com.tkay.core.c.d dVar, List<aj> list) {
            a aVar = new a();
            aVar.a = dVar;
            CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
            copyOnWriteArrayList.addAll(list);
            aVar.b = copyOnWriteArrayList;
            this.b.put(str, aVar);
        }

        private List<aj> a(String str) {
            a aVar = this.b.get(str);
            if (aVar != null) {
                return aVar.b;
            }
            return null;
        }

        private boolean b(String str) {
            a aVar = this.b.get(str);
            if (aVar != null) {
                return aVar.c;
            }
            return false;
        }

        private void a(String str, aj ajVar) {
            a aVar = this.b.get(str);
            if (aVar != null) {
                aVar.a(ajVar);
            }
        }

        private void a(String str, List<aj> list) {
            a aVar = this.b.get(str);
            if (aVar != null) {
                aVar.a(list);
            }
        }

        private void c(String str) {
            a aVar = this.b.get(str);
            if (aVar != null) {
                aVar.b();
            }
        }

        private synchronized void d(String str) {
            Iterator<Map.Entry<String, a>> it = this.b.entrySet().iterator();
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

        class a {
            com.tkay.core.c.d a;
            CopyOnWriteArrayList<aj> b;
            boolean c;

            a() {
            }

            private List<aj> a() {
                return this.b;
            }

            private synchronized void a(aj ajVar) {
                com.tkay.core.common.l.g.a((List<aj>) this.b, ajVar, true);
            }

            private synchronized void a(List<aj> list) {
                if (this.b != null && this.b.size() > 0) {
                    this.b.removeAll(list);
                }
            }

            private synchronized void b() {
                if (this.c) {
                    return;
                }
                this.c = true;
            }

            private boolean c() {
                return this.c;
            }
        }

        private static boolean d(a aVar, String str) {
            a aVar2 = aVar.b.get(str);
            if (aVar2 != null) {
                return aVar2.c;
            }
            return false;
        }

        private static void a(a aVar, String str, com.tkay.core.c.d dVar, List list) {
            a aVar2 = aVar.new a();
            aVar2.a = dVar;
            CopyOnWriteArrayList<aj> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
            copyOnWriteArrayList.addAll(list);
            aVar2.b = copyOnWriteArrayList;
            aVar.b.put(str, aVar2);
        }

        static void b(a aVar, String str) {
            a aVar2 = aVar.b.get(str);
            if (aVar2 != null) {
                aVar2.b();
            }
        }

        private static void a(a aVar, String str, aj ajVar) {
            a aVar2 = aVar.b.get(str);
            if (aVar2 != null) {
                aVar2.a(ajVar);
            }
        }

        static void a(a aVar, String str, List list) {
            a aVar2 = aVar.b.get(str);
            if (aVar2 != null) {
                aVar2.a((List<aj>) list);
            }
        }

        static List c(a aVar, String str) {
            a aVar2 = aVar.b.get(str);
            if (aVar2 != null) {
                return aVar2.b;
            }
            return null;
        }
    }
}
