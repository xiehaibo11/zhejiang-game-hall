package com.tkay.core.c;

import android.text.TextUtils;
import com.tkay.core.common.l.h;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class c {
    private static String m = "ofm_logger";
    private static String n = "ofm_tk_sw";
    private static String o = "ofm_da_sw";
    private static String p = "tk_address";
    private static String q = "tk_max_amount";
    private static String r = "tk_interval";
    private static String s = "da_rt_keys_ft";
    private static String t = "tk_no_t_ft";
    private static String u = "da_not_keys_ft";
    private static String v = "ofm_system";
    private static String w = "ofm_tid";
    private static String x = "ofm_firm_info";
    private static String y = "ofm_st_vt";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6002a = String.valueOf(hashCode());
    public Map<String, Object> b;
    private boolean c;
    private int d;
    private int e;
    private long f;
    private int g;
    private int h;
    private String i;
    private int j;
    private long k;
    private Map<String, String> l;

    private Map<String, Object> b(String str) {
        try {
            if (this.b != null) {
                return h.c(this.b.get(str).toString());
            }
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    private int b() {
        return this.d;
    }

    private int c() {
        return this.e;
    }

    public final long a() {
        return this.f;
    }

    private int d() {
        return this.g;
    }

    private int e() {
        return this.h;
    }

    private String f() {
        return this.i;
    }

    private int g() {
        return this.j;
    }

    private long h() {
        return this.k;
    }

    private Map<String, String> i() {
        return this.l;
    }

    private String j() {
        return this.f6002a;
    }

    private boolean k() {
        return this.c;
    }

    public static c a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            c cVar = new c();
            JSONObject jSONObject = new JSONObject(str);
            cVar.d = jSONObject.optInt(v);
            cVar.e = jSONObject.optInt(w);
            cVar.f = jSONObject.optLong(y);
            cVar.b = h.c(jSONObject.optString(x));
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(m);
            if (jSONObjectOptJSONObject != null) {
                cVar.g = jSONObjectOptJSONObject.optInt(n);
                cVar.h = jSONObjectOptJSONObject.optInt(o);
                cVar.i = jSONObjectOptJSONObject.optString(p);
                cVar.j = jSONObjectOptJSONObject.optInt(q);
                cVar.k = jSONObjectOptJSONObject.optLong(r);
                try {
                    JSONObject jSONObject2 = new JSONObject(jSONObjectOptJSONObject.optString(t));
                    Iterator<String> itKeys = jSONObject2.keys();
                    HashMap map = new HashMap();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        map.put(next, jSONObject2.optString(next));
                    }
                    cVar.l = map;
                } catch (Throwable unused) {
                }
            }
            return cVar;
        } catch (Throwable unused2) {
            return null;
        }
    }

    private static c c(String str) {
        try {
            c cVar = new c();
            JSONObject jSONObject = new JSONObject(str);
            cVar.c = true;
            cVar.d = jSONObject.optInt(v);
            cVar.b = h.c(jSONObject.optString(x));
            cVar.g = 1;
            cVar.h = 1;
            return cVar;
        } catch (Throwable unused) {
            return null;
        }
    }
}
