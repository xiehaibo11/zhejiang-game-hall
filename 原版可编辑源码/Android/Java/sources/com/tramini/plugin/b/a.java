package com.tramini.plugin.b;

import android.text.TextUtils;
import com.tramini.plugin.a.c.c;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    public static final String a = a.class.getSimpleName();
    private String b;
    private long c;
    private List d;
    private ConcurrentHashMap<String, c> e;
    private String f;
    private String g;
    private String h;
    private String i;
    private String j;
    private String k;
    private String l;
    private String m;
    private int n;
    private int o;
    private String p;
    private String q;
    private String r;
    private String s;

    public final int a() {
        return this.o;
    }

    private void a(int i) {
        this.o = i;
    }

    public final String b() {
        return this.b;
    }

    private void b(String str) {
        this.b = str;
    }

    public final long c() {
        return this.c;
    }

    private void a(long j) {
        this.c = j;
    }

    public final List<String> d() {
        return this.d;
    }

    private void a(List list) {
        this.d = list;
    }

    public final ConcurrentHashMap<String, c> e() {
        return this.e;
    }

    private void a(ConcurrentHashMap<String, c> concurrentHashMap) {
        this.e = concurrentHashMap;
    }

    public final String f() {
        return this.f;
    }

    private void c(String str) {
        this.f = str;
    }

    public final String g() {
        return this.g;
    }

    private void d(String str) {
        this.g = str;
    }

    public final String h() {
        return this.h;
    }

    private void e(String str) {
        this.h = str;
    }

    public final String i() {
        return this.i;
    }

    private void f(String str) {
        this.i = str;
    }

    private void g(String str) {
        this.j = str;
    }

    public final String j() {
        return this.j;
    }

    private String p() {
        return this.k;
    }

    private void h(String str) {
        this.k = str;
    }

    public final String k() {
        return this.l;
    }

    private void i(String str) {
        this.l = str;
    }

    public final String l() {
        return this.m;
    }

    private void j(String str) {
        this.m = str;
    }

    public final int m() {
        return this.n;
    }

    private void b(int i) {
        this.n = i;
    }

    public final String n() {
        return this.p;
    }

    private void k(String str) {
        this.p = str;
    }

    public final String o() {
        return this.q;
    }

    private void l(String str) {
        this.q = str;
    }

    private String q() {
        return this.r;
    }

    private void m(String str) {
        this.r = str;
    }

    private String r() {
        return this.s;
    }

    private void n(String str) {
        this.s = str;
    }

    static class a {
        private static String a = "si";
        private static String b = "scto";
        private static String c = "tf";
        private static String d = "nl";
        private static String e = "t_sw";
        private static String f = "att_sw";
        private static String g = "plst_addr";
        private static String h = "pltk_addr";
        private static String i = "cn_plst_addr";
        private static String j = "cn_pltk_addr";

        a() {
        }
    }

    public static a a(String str) {
        JSONArray jSONArray;
        int length;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        a aVar = new a();
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.isNull(a.a)) {
                aVar.b = "";
            } else {
                aVar.b = jSONObject.optString(a.a);
            }
            if (jSONObject.isNull(a.b)) {
                aVar.c = 3600000L;
            } else {
                aVar.c = jSONObject.optInt(a.b);
            }
            if (jSONObject.isNull(a.f)) {
                aVar.o = 0;
            } else {
                aVar.o = jSONObject.optInt(a.f);
            }
            if (!jSONObject.isNull(a.g)) {
                aVar.p = jSONObject.optString(a.g);
            }
            if (!jSONObject.isNull(a.h)) {
                aVar.q = jSONObject.optString(a.h);
            }
            if (!jSONObject.isNull(a.i)) {
                aVar.r = jSONObject.optString(a.i);
            }
            if (!jSONObject.isNull(a.j)) {
                aVar.s = jSONObject.optString(a.j);
            }
            if (!jSONObject.isNull(a.c)) {
                ConcurrentHashMap<String, c> concurrentHashMap = new ConcurrentHashMap<>();
                try {
                    JSONObject jSONObject2 = new JSONObject(jSONObject.optString(a.c));
                    Iterator<String> itKeys = jSONObject2.keys();
                    while (itKeys.hasNext()) {
                        try {
                            String next = itKeys.next();
                            c cVar = new c();
                            JSONObject jSONObjectOptJSONObject = jSONObject2.optJSONObject(next);
                            cVar.d = jSONObjectOptJSONObject.optString("pml");
                            cVar.a = jSONObjectOptJSONObject.optString("uu");
                            cVar.b = jSONObjectOptJSONObject.optInt("dmin");
                            cVar.c = jSONObjectOptJSONObject.optInt("dmax");
                            if (jSONObjectOptJSONObject.has("p_s") && !TextUtils.isEmpty(jSONObjectOptJSONObject.optString("p_s"))) {
                                cVar.e = new JSONArray(jSONObjectOptJSONObject.optString("p_s"));
                            }
                            concurrentHashMap.put(next, cVar);
                        } catch (Exception unused) {
                        }
                    }
                } catch (Exception unused2) {
                }
                aVar.e = concurrentHashMap;
            }
            if (!jSONObject.isNull(a.d)) {
                JSONObject jSONObject3 = new JSONObject(jSONObject.optString(a.d));
                aVar.f = jSONObject3.optString("p1");
                aVar.g = jSONObject3.optString(com.tkay.core.common.h.c.X);
                aVar.h = jSONObject3.optString("p3");
                aVar.i = jSONObject3.optString("p4");
                aVar.j = jSONObject3.optString("p5");
                aVar.k = jSONObject3.optString("p6");
                aVar.l = jSONObject3.optString("p7");
                aVar.m = jSONObject3.optString("p8");
                if (!jSONObject3.isNull("notifications") && (length = (jSONArray = new JSONArray(jSONObject3.optString("notifications"))).length()) > 0) {
                    ArrayList arrayList = new ArrayList(length);
                    for (int i = 0; i < length; i++) {
                        arrayList.add(jSONArray.optString(i));
                    }
                    aVar.d = arrayList;
                }
            }
            if (jSONObject.isNull(a.e)) {
                aVar.n = 0;
            } else {
                aVar.n = jSONObject.optInt(a.e);
            }
            return aVar;
        } catch (JSONException unused3) {
            return null;
        }
    }
}
