package com.tramini.plugin.a.d;

import android.content.Context;
import com.tramini.plugin.a.g.f;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public final class e extends a {
    public static final int o = 10001;
    private Context p;
    private String q;
    private JSONObject r;
    private JSONObject s;

    @Override
    protected final int a() {
        return 1;
    }

    @Override
    public final boolean g() {
        return false;
    }

    public e(Context context, String str, JSONObject jSONObject, JSONObject jSONObject2) {
        this.p = context;
        this.q = str;
        this.r = jSONObject;
        this.s = jSONObject2;
    }

    @Override
    protected final String b() {
        com.tramini.plugin.a.c.c cVar = com.tramini.plugin.b.b.a(this.p).b().e().get(this.q);
        com.tramini.plugin.a.a.a();
        return cVar != null ? cVar.a : com.tramini.plugin.a.a.c();
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final byte[] d() {
        return b(f());
    }

    @Override
    protected final JSONObject e() {
        JSONObject jSONObject = this.r;
        return jSONObject == null ? super.e() : jSONObject;
    }

    @Override
    protected final String f() {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObjectE = e();
        try {
            jSONObjectE.put(a.j, "3");
        } catch (Throwable unused) {
        }
        String strB = com.tramini.plugin.a.g.c.b(jSONObjectE.toString());
        JSONArray jSONArray = new JSONArray();
        jSONArray.put(this.s);
        String strB2 = com.tramini.plugin.a.g.c.b(jSONArray.toString());
        String strA = f.a("d_version=1.0&dt=" + strB2 + "&cm=" + strB);
        try {
            jSONObject.put("cm", strB);
            jSONObject.put("dt", strB2);
            jSONObject.put("d_version", "1.0");
            jSONObject.put("d_sign", strA);
            jSONObject.put("pl_c", "4");
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }

    @Override
    protected final Object a(String str) {
        return str.trim();
    }
}
