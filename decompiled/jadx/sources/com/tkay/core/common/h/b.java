package com.tkay.core.common.h;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.u;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f6192a;
    int b;
    List<String> e;
    int f;
    boolean g = false;
    String c = com.tkay.core.common.b.m.a().o();
    String d = com.tkay.core.common.b.m.a().p();

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
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
        return 4;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean o() {
        return true;
    }

    public b(Context context, int i, List<String> list) {
        this.f6192a = context;
        this.e = list;
        this.b = list.size();
        this.f = i;
    }

    public final void p() {
        this.g = true;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.k();
    }

    @Override // com.tkay.core.common.h.a
    public final void a(int i, k kVar) {
        if (!TextUtils.isEmpty(b())) {
            super.a(i, kVar);
        } else if (kVar != null) {
            kVar.onLoadFinish(i, Integer.valueOf(this.b));
        }
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
    protected final String h() {
        return this.c;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return this.f6192a;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return this.d;
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        if (jSONObjectE != null) {
            try {
                jSONObjectE.put("app_id", this.c);
                jSONObjectE.put("nw_ver", com.tkay.core.common.l.d.h());
                Map<String, Object> mapL = com.tkay.core.common.b.m.a().l();
                if (mapL != null) {
                    try {
                        if (mapL.size() > 0 && mapL != null) {
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
                }
                JSONArray jSONArray = new JSONArray();
                if (this.e != null && this.e.size() > 0) {
                    for (String str2 : this.e) {
                        if (!TextUtils.isEmpty(str2)) {
                            jSONArray.put(new JSONObject(str2));
                        }
                    }
                }
                jSONObjectE.put("data", jSONArray);
            } catch (Exception unused2) {
            }
        }
        return jSONObjectE;
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject f() {
        JSONObject jSONObjectF = super.f();
        if (jSONObjectF != null) {
            try {
                jSONObjectF.put(c.T, this.f);
            } catch (Exception unused) {
            }
        }
        return jSONObjectF;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return Integer.valueOf(this.b);
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
        if (this.g) {
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
            String strG = g();
            u.a().a(1, b(), string, strG, com.tkay.core.common.f.n.a(1001));
        }
    }

    private static String b(String str) {
        try {
            return URLEncoder.encode(str, "utf-8");
        } catch (UnsupportedEncodingException unused) {
            return null;
        }
    }
}
