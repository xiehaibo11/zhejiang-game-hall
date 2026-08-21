package com.tkay.core.common.f;

import android.text.TextUtils;
import com.tkay.core.c.d;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends p {
    public String A;
    public String B;
    public String C;
    public String D;
    public JSONObject E;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6155a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public String l;
    public String m;
    public String n;
    public String o;
    public String p;
    public String q;
    public String r;
    public String s;
    public String t;
    public String u;
    public String v;
    public String w;
    public String x;
    public String y;
    public String z;

    private g() {
    }

    public g(String str, String str2) {
        this.A = str;
        this.B = str2;
    }

    @Override // com.tkay.core.common.f.p
    public final JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("key", this.f6155a);
            jSONObject.put("requestid", this.b);
            jSONObject.put("unitid", this.d);
            jSONObject.put(com.tkay.core.common.b.d.c, this.e);
            jSONObject.put("sessionid", this.f);
            jSONObject.put("groupid", this.g);
            jSONObject.put("unitgroupid", this.h);
            jSONObject.put("timestamp", this.i);
            jSONObject.put("asid", this.j);
            jSONObject.put("refresh", this.k);
            jSONObject.put("traffic_group_id", this.l);
            jSONObject.put("msg", this.m);
            jSONObject.put("msg1", this.n);
            jSONObject.put("msg2", this.o);
            jSONObject.put("msg3", this.p);
            jSONObject.put("msg4", this.q);
            jSONObject.put("msg5", this.r);
            jSONObject.put("msg6", this.s);
            jSONObject.put("msg7", this.t);
            jSONObject.put("msg8", this.u);
            jSONObject.put("msg9", this.v);
            jSONObject.put("msg10", this.w);
            jSONObject.put("msg11", this.x);
            jSONObject.put("msg12", this.y);
            jSONObject.put("msg13", this.z);
            jSONObject.put(d.a.U, this.C);
            jSONObject.put(com.tkay.core.common.h.c.am, this.D);
            if (this.E != null) {
                jSONObject.put("p_c", this.E);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public static g a(String str) {
        g gVar = new g();
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has("key")) {
                    gVar.f6155a = jSONObject.optString("key", "");
                }
                if (jSONObject.has("requestid")) {
                    gVar.b = jSONObject.optString("requestid", "");
                }
                if (jSONObject.has("unitid")) {
                    gVar.d = jSONObject.optString("unitid", "");
                }
                if (jSONObject.has(com.tkay.core.common.b.d.c)) {
                    gVar.e = jSONObject.optString(com.tkay.core.common.b.d.c, "");
                }
                if (jSONObject.has("sessionid")) {
                    gVar.f = jSONObject.optString("sessionid", "");
                }
                if (jSONObject.has("groupid")) {
                    gVar.g = jSONObject.optString("groupid", "");
                }
                if (jSONObject.has("unitgroupid")) {
                    gVar.h = jSONObject.optString("unitgroupid", "");
                }
                if (jSONObject.has("timestamp")) {
                    gVar.i = jSONObject.optString("timestamp", "");
                }
                if (jSONObject.has("asid")) {
                    gVar.j = jSONObject.optString("asid", "");
                }
                if (jSONObject.has("refresh")) {
                    gVar.k = jSONObject.optString("refresh", "");
                }
                if (jSONObject.has("traffic_group_id")) {
                    gVar.l = jSONObject.optString("traffic_group_id", "");
                }
                if (jSONObject.has("msg")) {
                    gVar.m = jSONObject.optString("msg", "");
                }
                if (jSONObject.has("msg1")) {
                    gVar.n = jSONObject.optString("msg1", "");
                }
                if (jSONObject.has("msg2")) {
                    gVar.o = jSONObject.optString("msg2", "");
                }
                if (jSONObject.has("msg3")) {
                    gVar.p = jSONObject.optString("msg3", "");
                }
                if (jSONObject.has("msg4")) {
                    gVar.q = jSONObject.optString("msg4", "");
                }
                if (jSONObject.has("msg5")) {
                    gVar.r = jSONObject.optString("msg5", "");
                }
                if (jSONObject.has("msg6")) {
                    gVar.s = jSONObject.optString("msg6", "");
                }
                if (jSONObject.has("msg7")) {
                    gVar.t = jSONObject.optString("msg7", "");
                }
                if (jSONObject.has("msg8")) {
                    gVar.u = jSONObject.optString("msg8", "");
                }
                if (jSONObject.has("msg9")) {
                    gVar.v = jSONObject.optString("msg9", "");
                }
                if (jSONObject.has("msg10")) {
                    gVar.w = jSONObject.optString("msg10", "");
                }
                if (jSONObject.has("msg11")) {
                    gVar.x = jSONObject.optString("msg11", "");
                }
                if (jSONObject.has("msg12")) {
                    gVar.y = jSONObject.optString("msg12", "");
                }
                if (jSONObject.has("msg13")) {
                    gVar.z = jSONObject.optString("msg13", "");
                }
                if (jSONObject.has(d.a.U)) {
                    gVar.C = jSONObject.optString(d.a.U, "");
                }
                if (jSONObject.has(com.tkay.core.common.h.c.am)) {
                    gVar.D = jSONObject.optString(com.tkay.core.common.h.c.am, "");
                }
                if (jSONObject.has("p_c")) {
                    gVar.E = jSONObject.optJSONObject("p_c");
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return gVar;
    }
}
