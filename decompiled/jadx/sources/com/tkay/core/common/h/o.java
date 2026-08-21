package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.common.u;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class o extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6200a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 6;
    public static final int g = 7;
    public static final int h = 8;
    public static final int i = 9;
    public static final int j = 10;
    public static final int k = 11;
    public static final int l = 12;
    public static final int p = 13;
    public static final int q = 15;
    public static final int r = 16;
    public static final int s = 18;
    public static final int t = 19;
    public static final int u = 20;
    public static final int v = 21;
    private static final String x = o.class.getSimpleName();
    private List<com.tkay.core.common.f.e> B;
    private com.tkay.core.common.f.e C;
    private int D;
    private Context y;
    boolean w = false;
    private String z = com.tkay.core.common.b.m.a().o();
    private String A = com.tkay.core.common.b.m.a().p();

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i2) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final String k() {
        return "1.0";
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, Object> l() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final int m() {
        return 6;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean o() {
        return true;
    }

    public o(Context context, int i2, List<com.tkay.core.common.f.e> list) {
        this.y = context;
        this.D = i2;
        this.B = list;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        com.tkay.core.common.f.e eVar = this.C;
        if (eVar == null) {
            com.tkay.core.common.i.a();
            return com.tkay.core.common.i.j();
        }
        return eVar.b.ao;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        return c(g());
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
        List<com.tkay.core.common.f.e> list = this.B;
        com.tkay.core.common.k.c.a("tk", adError.getPlatformCode(), adError.getPlatformMSG(), b(), (String) null, String.valueOf(list != null ? list.size() : 1), "0");
    }

    @Override // com.tkay.core.common.h.a
    protected final String h() {
        return this.z;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return this.y;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return this.A;
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        JSONObject jSONObjectF = super.f();
        try {
            jSONObjectE.put("app_id", this.z);
            jSONObjectE.put(c.T, this.D);
            Iterator<String> itKeys = jSONObjectF.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                jSONObjectE.put(next, jSONObjectF.opt(next));
            }
            Map<String, Object> mapL = com.tkay.core.common.b.m.a().l();
            if (mapL != null && mapL.size() > 0 && mapL != null) {
                JSONObject jSONObject = new JSONObject();
                for (String str : mapL.keySet()) {
                    Object obj = mapL.get(str);
                    if (obj != null) {
                        jSONObject.put(str, obj.toString());
                    }
                }
                jSONObjectE.put("custom", jSONObject);
            }
        } catch (Throwable unused) {
        }
        return jSONObjectE;
    }

    @Override // com.tkay.core.common.h.a
    protected final String g() {
        JSONObject jSONObject = new JSONObject();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        JSONArray jSONArray = new JSONArray();
        List<com.tkay.core.common.f.e> list = this.B;
        if (list != null) {
            Iterator<com.tkay.core.common.f.e> it = list.iterator();
            while (it.hasNext()) {
                JSONObject jSONObjectA = it.next().a();
                a(jSONObjectA);
                jSONArray.put(jSONObjectA);
            }
        } else {
            com.tkay.core.common.f.e eVar = this.C;
            if (eVar != null) {
                JSONObject jSONObjectA2 = eVar.a();
                a(jSONObjectA2);
                jSONArray.put(jSONObjectA2);
            }
        }
        String strA2 = com.tkay.core.common.l.c.a(jSONArray.toString());
        String strC = com.tkay.core.common.l.f.c(this.A + "api_ver=1.0&common=" + strA + "&data=" + strA2);
        try {
            jSONObject.put("common", strA);
            jSONObject.put("data", strA2);
            jSONObject.put(c.O, "1.0");
            jSONObject.put("sign", strC);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return jSONObject.toString();
    }

    private void a(JSONObject jSONObject) {
        if (!this.w || jSONObject == null) {
            return;
        }
        try {
            jSONObject.put(c.U, 1);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return str.trim();
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
        JSONObject jSONObject = new JSONObject();
        Map<String, String> mapC = c();
        if (mapC != null) {
            try {
                for (String str : mapC.keySet()) {
                    jSONObject.put(str, mapC.get(str));
                }
            } catch (Exception unused) {
            }
        }
        String string = jSONObject.toString();
        this.w = true;
        String strG = g();
        this.w = false;
        u.a().a(1, b(), string, strG, com.tkay.core.common.f.n.a(1000));
    }
}
