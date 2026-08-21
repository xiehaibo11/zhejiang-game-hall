package com.tkay.expressad.videocommon;

import android.text.TextUtils;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.b;
import com.tkay.expressad.foundation.d.c;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class a {
    private static final String a = "TemplateWebviewCache";
    private static ConcurrentHashMap<String, a> b = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> c = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> d = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> e = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> f = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> g = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> h = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> i = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> j = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, a> k = new ConcurrentHashMap<>();

    public static class a {
        private WindVaneWebView a;
        private boolean b;

        public final WindVaneWebView a() {
            return this.a;
        }

        public final void a(WindVaneWebView windVaneWebView) {
            this.a = windVaneWebView;
        }

        public final void a(String str) {
            WindVaneWebView windVaneWebView = this.a;
            if (windVaneWebView != null) {
                windVaneWebView.setTag(str);
            }
        }

        public final String b() {
            WindVaneWebView windVaneWebView = this.a;
            return windVaneWebView != null ? (String) windVaneWebView.getTag() : "";
        }

        public final boolean c() {
            return this.b;
        }

        public final void a(boolean z) {
            this.b = z;
        }
    }

    public static a a(String str) {
        if (h.containsKey(str)) {
            return h.get(str);
        }
        if (i.containsKey(str)) {
            return i.get(str);
        }
        if (j.containsKey(str)) {
            return j.get(str);
        }
        if (k.containsKey(str)) {
            return k.get(str);
        }
        return null;
    }

    public static void a(String str, a aVar, boolean z, boolean z2) {
        if (z) {
            if (z2) {
                i.put(str, aVar);
                return;
            } else {
                h.put(str, aVar);
                return;
            }
        }
        if (z2) {
            k.put(str, aVar);
        } else {
            j.put(str, aVar);
        }
    }

    public static void b(String str) {
        if (h.containsKey(str)) {
            h.remove(str);
        }
        if (j.containsKey(str)) {
            j.remove(str);
        }
        if (i.containsKey(str)) {
            i.remove(str);
        }
        if (k.containsKey(str)) {
            k.remove(str);
        }
    }

    public static void a() {
        h.clear();
        i.clear();
    }

    public static void c(String str) {
        if (!TextUtils.isEmpty(str)) {
            for (String str2 : h.keySet()) {
                if (!TextUtils.isEmpty(str2) && str2.startsWith(str)) {
                    h.remove(str2);
                }
            }
        } else {
            h.clear();
        }
        i.clear();
    }

    public static void b() {
        j.clear();
        k.clear();
    }

    private static void a(String str, boolean z, boolean z2) {
        if (z) {
            if (z2) {
                for (Map.Entry<String, a> entry : i.entrySet()) {
                    if (entry.getKey().startsWith(str)) {
                        i.remove(entry.getKey());
                    }
                }
                return;
            }
            for (Map.Entry<String, a> entry2 : h.entrySet()) {
                if (entry2.getKey().startsWith(str)) {
                    h.remove(entry2.getKey());
                }
            }
            return;
        }
        if (z2) {
            for (Map.Entry<String, a> entry3 : k.entrySet()) {
                if (entry3.getKey().startsWith(str)) {
                    k.remove(entry3.getKey());
                }
            }
            return;
        }
        for (Map.Entry<String, a> entry4 : j.entrySet()) {
            if (entry4.getKey().startsWith(str)) {
                j.remove(entry4.getKey());
            }
        }
    }

    public static void d(String str) {
        for (Map.Entry<String, a> entry : h.entrySet()) {
            if (entry.getKey().contains(str)) {
                h.remove(entry.getKey());
            }
        }
    }

    public static void e(String str) {
        for (Map.Entry<String, a> entry : i.entrySet()) {
            if (entry.getKey().contains(str)) {
                i.remove(entry.getKey());
            }
        }
    }

    private static void f(String str) {
        for (Map.Entry<String, a> entry : j.entrySet()) {
            if (entry.getKey().startsWith(str)) {
                j.remove(entry.getKey());
            }
        }
    }

    private static void g(String str) {
        for (Map.Entry<String, a> entry : k.entrySet()) {
            if (entry.getKey().startsWith(str)) {
                k.remove(entry.getKey());
            }
        }
    }

    private static void c() {
        h.clear();
    }

    public static a a(int i2, c cVar) {
        if (cVar == null) {
            return null;
        }
        try {
            String strAa = cVar.aa();
            if (i2 != 94) {
                if (i2 == 287) {
                    if (cVar.A()) {
                        if (d != null && d.size() > 0) {
                            return d.get(strAa);
                        }
                    } else if (g != null && g.size() > 0) {
                        return g.get(strAa);
                    }
                } else if (b != null && b.size() > 0) {
                    return b.get(strAa);
                }
            } else if (cVar.A()) {
                if (c != null && c.size() > 0) {
                    return c.get(strAa);
                }
            } else if (f != null && f.size() > 0) {
                return f.get(strAa);
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
        return null;
    }

    private static ConcurrentHashMap<String, a> a(int i2, boolean z) {
        if (i2 == 94) {
            return z ? c : f;
        }
        if (i2 != 287) {
            return b;
        }
        return z ? d : g;
    }

    public static void b(int i2, c cVar) {
        if (cVar == null) {
            return;
        }
        try {
            String strAa = cVar.aa();
            if (i2 == 94) {
                if (cVar.A()) {
                    if (c != null) {
                        c.remove(strAa);
                        return;
                    }
                    return;
                } else {
                    if (f != null) {
                        f.remove(strAa);
                        return;
                    }
                    return;
                }
            }
            if (i2 == 287) {
                if (cVar.A()) {
                    if (d != null) {
                        d.remove(strAa);
                        return;
                    }
                    return;
                } else {
                    if (g != null) {
                        g.remove(strAa);
                        return;
                    }
                    return;
                }
            }
            if (b != null) {
                b.remove(strAa);
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    public static void a(int i2) {
        try {
            if (i2 != 94) {
                if (i2 != 287) {
                    return;
                }
                if (d != null) {
                    d.clear();
                }
            } else if (c != null) {
                c.clear();
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    public static void b(int i2) {
        try {
            if (i2 == 94) {
                if (f != null) {
                    f.clear();
                }
            } else if (i2 == 287) {
                if (g != null) {
                    g.clear();
                }
            } else if (b != null) {
                b.clear();
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    public static void a(int i2, String str, a aVar) {
        try {
            if (i2 == 94) {
                if (c == null) {
                    c = new ConcurrentHashMap<>();
                }
                c.put(str, aVar);
            } else {
                if (i2 != 287) {
                    return;
                }
                if (d == null) {
                    d = new ConcurrentHashMap<>();
                }
                d.put(str, aVar);
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    public static void b(int i2, String str, a aVar) {
        try {
            if (i2 == 94) {
                if (f == null) {
                    f = new ConcurrentHashMap<>();
                }
                f.put(str, aVar);
            } else if (i2 == 287) {
                if (g == null) {
                    g = new ConcurrentHashMap<>();
                }
                g.put(str, aVar);
            } else {
                if (b == null) {
                    b = new ConcurrentHashMap<>();
                }
                b.put(str, aVar);
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }
}
