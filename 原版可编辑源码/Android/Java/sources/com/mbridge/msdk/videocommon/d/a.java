package com.mbridge.msdk.videocommon.d;

import android.text.TextUtils;
import com.mbridge.msdk.videocommon.b.d;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public class a {
    private Map<String, Integer> a;
    private Map<String, d> b;
    private long c;
    private long d;
    private long e;
    private long f;
    private long g;
    private long h;
    private String j;
    private int i = 0;
    private String k = "";

    public final String a() {
        return this.k;
    }

    public final String b() {
        return this.j;
    }

    public final long c() {
        return this.c * 1000;
    }

    public final void a(long j) {
        this.c = j;
    }

    public final long d() {
        return this.d * 1000;
    }

    public final void b(long j) {
        this.d = j;
    }

    public final long e() {
        return this.e * 1000;
    }

    public final void c(long j) {
        this.e = j;
    }

    public final long f() {
        return this.f;
    }

    public final void d(long j) {
        this.f = j;
    }

    public final long g() {
        return this.g;
    }

    public final void e(long j) {
        this.g = j;
    }

    public final long h() {
        return this.h;
    }

    public final Map<String, Integer> i() {
        if (this.a == null) {
            HashMap map = new HashMap();
            this.a = map;
            map.put("1", 1000);
            this.a.put("9", 1000);
            this.a.put("8", 1000);
        }
        return this.a;
    }

    public final void a(Map<String, Integer> map) {
        this.a = map;
    }

    public final Map<String, d> j() {
        return this.b;
    }

    public final void b(Map<String, d> map) {
        this.b = map;
    }

    public final void a(int i) {
        this.i = i;
    }

    public static a a(String str) {
        a aVar;
        a aVar2 = null;
        if (!TextUtils.isEmpty(str)) {
            try {
                aVar = new a();
            } catch (Exception e) {
                e = e;
            }
            try {
                JSONObject jSONObject = new JSONObject(str);
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(com.tkay.expressad.videocommon.e.b.a);
                aVar.j = jSONObject.optString(com.tkay.expressad.d.a.b.dI, "");
                if (jSONObjectOptJSONObject != null && jSONObjectOptJSONObject.length() > 0) {
                    HashMap map = new HashMap();
                    Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                    while (itKeys != null && itKeys.hasNext()) {
                        String next = itKeys.next();
                        int iIntValue = Integer.valueOf(jSONObjectOptJSONObject.optInt(next, 1000)).intValue();
                        if (!TextUtils.isEmpty(next)) {
                            if (!TextUtils.isEmpty(next) && iIntValue == 0) {
                                map.put(next, 1000);
                            } else {
                                map.put(next, Integer.valueOf(iIntValue));
                            }
                        }
                    }
                    aVar.a = map;
                }
                aVar.b = d.a(jSONObject.optJSONArray("reward"));
                aVar.c = jSONObject.optLong("getpf", 43200L);
                aVar.d = jSONObject.optLong(com.tkay.expressad.videocommon.e.b.x, 5400L);
                aVar.e = jSONObject.optLong("plct", com.tkay.expressad.d.a.b.P);
                aVar.f = jSONObject.optLong("dlct", com.tkay.expressad.d.a.b.P);
                aVar.g = jSONObject.optLong(com.tkay.expressad.videocommon.e.b.A, 5L);
                aVar.h = jSONObject.optLong("current_time");
                aVar.k = jSONObject.optString("vtag", "");
                return aVar;
            } catch (Exception e2) {
                e = e2;
                aVar2 = aVar;
                e.printStackTrace();
                return aVar2;
            }
        }
        return aVar2;
    }

    public final JSONObject k() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.a != null && this.a.size() > 0) {
                try {
                    JSONObject jSONObject2 = new JSONObject();
                    for (Map.Entry<String, Integer> entry : this.a.entrySet()) {
                        jSONObject2.put(entry.getKey(), entry.getValue().intValue());
                    }
                    jSONObject.put(com.tkay.expressad.videocommon.e.b.a, jSONObject2);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            if (this.b != null && this.b.size() > 0) {
                try {
                    JSONArray jSONArray = new JSONArray();
                    for (Map.Entry<String, d> entry2 : this.b.entrySet()) {
                        JSONObject jSONObject3 = new JSONObject();
                        String key = entry2.getKey();
                        d value = entry2.getValue();
                        if (value != null) {
                            jSONObject3.put("name", value.a());
                            jSONObject3.put("amount", value.b());
                            jSONObject3.put("id", key);
                        }
                        jSONArray.put(jSONObject3);
                    }
                    jSONObject.put("reward", jSONArray);
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            jSONObject.put("getpf", this.c);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.x, this.d);
            jSONObject.put("plct", this.e);
            jSONObject.put("dlct", this.f);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.A, this.g);
            jSONObject.put("current_time", this.h);
            jSONObject.put("vtag", this.k);
            jSONObject.put("isDefault", this.i);
            return jSONObject;
        } catch (Exception e3) {
            e3.printStackTrace();
            return jSONObject;
        }
    }
}
