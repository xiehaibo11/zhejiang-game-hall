package com.tkay.core.common.h;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.s;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public class l extends a {
    public static final String a = "sdk_custom";
    private static final String d = l.class.getSimpleName();
    long b;
    long c;
    private String e = com.tkay.core.common.b.m.a().q();
    private String f;
    private String g;
    private Context h;
    private String i;
    private String j;
    private String k;
    private Map<String, Object> l;
    private JSONObject p;
    private Map<String, Object> q;

    @Override
    protected final int a() {
        return 1;
    }

    @Override
    protected final void a(AdError adError) {
    }

    @Override
    protected final boolean a(int i) {
        return false;
    }

    @Override
    protected final String k() {
        return "1.0";
    }

    @Override
    protected final Map<String, Object> l() {
        return null;
    }

    @Override
    protected final int m() {
        return 15;
    }

    @Override
    protected final boolean n() {
        return true;
    }

    public l(Context context, String str, String str2, String str3, String str4, Map<String, Object> map, Map<String, Object> map2) {
        this.i = str;
        this.j = str2;
        this.h = context;
        this.g = str3;
        this.f = com.tkay.core.common.b.m.a().g(str3);
        this.k = str4;
        this.l = map;
        this.q = map2;
    }

    @Override
    public final void a(int i, k kVar) {
        this.b = System.currentTimeMillis();
        this.c = SystemClock.elapsedRealtime();
        super.a(i, kVar);
    }

    @Override
    protected final String b() {
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.c();
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Accept-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final byte[] d() {
        try {
            return g().getBytes("utf-8");
        } catch (Exception unused) {
            return g().getBytes();
        }
    }

    @Override
    protected final String h() {
        return this.i;
    }

    @Override
    protected final Context i() {
        return this.h;
    }

    @Override
    protected final String j() {
        return this.j;
    }

    @Override
    protected final JSONObject e() {
        Object obj;
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", this.i);
            jSONObjectE.put("pl_id", this.g);
            jSONObjectE.put("session_id", this.f);
            jSONObjectE.put("nw_ver", com.tkay.core.common.l.d.h());
            jSONObjectE.put("exclude_myofferid", s.a().a(this.h));
            if (com.tkay.core.common.b.m.a().k() != null) {
                jSONObjectE.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.EXCLUDE_OFFER, com.tkay.core.common.b.m.a().k());
            }
            String strX = com.tkay.core.common.b.m.a().x();
            if (!TextUtils.isEmpty(strX)) {
                jSONObjectE.put("sy_id", strX);
            }
            String strY = com.tkay.core.common.b.m.a().y();
            if (!TextUtils.isEmpty(strY)) {
                jSONObjectE.put("bk_id", strY);
            } else {
                com.tkay.core.common.b.m.a().j(com.tkay.core.common.b.m.a().w());
                jSONObjectE.put("bk_id", com.tkay.core.common.b.m.a().w());
            }
            JSONObject jSONObjectA = c.a(this.l);
            if (jSONObjectA != null) {
                jSONObjectE.put("custom", jSONObjectA);
            }
            if (com.tkay.core.common.b.m.a().b() != null) {
                jSONObjectE.put("deny", com.tkay.core.common.l.d.o(com.tkay.core.common.b.m.a().f()));
            }
            if (com.tkay.core.common.b.m.a().u()) {
                com.tkay.core.common.b.m.a().v().fillRequestParam(jSONObjectE);
            }
            jSONObjectE.put(c.ap, com.tkay.core.common.n.a().c());
            if (this.q != null && (obj = this.q.get(TYAdConst.KEY.CP_PLACEMENT_ID)) != null) {
                jSONObjectE.put(c.am, obj.toString());
            }
        } catch (JSONException unused) {
        }
        return jSONObjectE;
    }

    @Override
    protected final JSONObject f() {
        JSONObject jSONObjectF = super.f();
        try {
            if (com.tkay.core.common.b.m.a().b() != null) {
                jSONObjectF.put("btts", com.tkay.core.common.l.d.g());
            }
        } catch (JSONException unused) {
        }
        return jSONObjectF;
    }

    @Override
    protected final Object a(String str) {
        String strTrim = str.trim();
        try {
            JSONObject jSONObject = new JSONObject(strTrim);
            if (this.l != null) {
                jSONObject.put(a, new JSONObject(this.l));
            }
            strTrim = jSONObject.toString();
        } catch (Exception unused) {
        }
        com.tkay.core.common.k.c.a("placement", this.g, this.b, System.currentTimeMillis(), SystemClock.elapsedRealtime() - this.c);
        return strTrim;
    }

    @Override
    protected final void b(AdError adError) {
        com.tkay.core.common.k.c.a("placement", adError.getPlatformCode(), adError.getPlatformMSG(), b(), this.g, "", "");
    }
}
