package com.tkay.core.common.i;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.m;
import com.tkay.core.common.i;
import com.tkay.core.common.l.f;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public final class c extends com.tkay.core.common.h.a {
    private Context b;
    private int c;
    private String f;
    private com.tkay.core.common.f.d g;
    private com.tkay.core.c.d h;
    boolean a = false;
    private String d = m.a().o();
    private String e = m.a().p();

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

    public c(Context context, int i, String str, com.tkay.core.common.f.d dVar, com.tkay.core.c.d dVar2) {
        this.b = context;
        this.c = i;
        this.g = dVar;
        this.h = dVar2;
        this.f = str;
    }

    @Override
    protected final String b() {
        i.a();
        return i.i();
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
        return c(g());
    }

    @Override
    protected final String h() {
        return this.d;
    }

    @Override
    protected final Context i() {
        return this.b;
    }

    @Override
    protected final String j() {
        return this.e;
    }

    @Override
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        JSONObject jSONObjectF = super.f();
        try {
            jSONObjectE.put("app_id", this.d);
            Iterator<String> itKeys = jSONObjectF.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                jSONObjectE.put(next, jSONObjectF.opt(next));
            }
            Map<String, Object> mapL = m.a().l();
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

    @Override
    protected final String g() {
        JSONObject jSONObject = new JSONObject();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        String strC = f.c(this.e + "api_ver=1.0&common=" + strA + "&data=" + this.f + "&ss_a=" + this.c);
        try {
            jSONObject.put("common", strA);
            jSONObject.put("ss_a", this.c);
            jSONObject.put("data", this.f);
            jSONObject.put(com.tkay.core.common.h.c.O, "1.0");
            jSONObject.put("sign", strC);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }

    @Override
    protected final Object a(String str) {
        return str.trim();
    }

    @Override
    protected final void b(AdError adError) {
        try {
            if (!ErrorCode.httpStatuException.equals(adError.getCode())) {
                if (this.a) {
                    com.tkay.core.common.k.c.a(this.g, this.h, adError.getPlatformCode(), adError.getPlatformMSG());
                    return;
                } else {
                    this.a = true;
                    com.tkay.core.common.l.b.a.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            c cVar = c.this;
                            cVar.a(0, cVar.m);
                        }
                    }, 5000L);
                    return;
                }
            }
            com.tkay.core.common.k.c.a(this.g, this.h, adError.getPlatformCode(), adError.getPlatformMSG());
        } catch (Throwable unused) {
        }
    }
}
