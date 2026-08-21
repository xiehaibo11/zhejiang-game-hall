package com.tkay.core.common.h.a;

import com.tkay.core.common.b.m;
import com.tkay.core.common.f.n;
import com.tkay.core.common.l.f;
import com.tkay.core.common.u;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class e extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    List<com.tkay.core.common.f.e> f6191a;
    boolean b;
    private final String c = getClass().getSimpleName();

    @Override // com.tkay.core.common.h.a.c
    public final int c() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a.c
    public final int d() {
        return 3;
    }

    @Override // com.tkay.core.common.h.a.c
    protected final int g() {
        return 6;
    }

    public e(List<com.tkay.core.common.f.e> list) {
        this.f6191a = list;
    }

    @Override // com.tkay.core.common.h.a.c
    public final byte[] e() {
        List<com.tkay.core.common.f.e> list = this.f6191a;
        return (list == null || list.size() <= 0) ? new byte[0] : a(a(false));
    }

    @Override // com.tkay.core.common.h.a.c
    public final boolean f() {
        return this.b;
    }

    @Override // com.tkay.core.common.h.a.c
    public final void a(String str, String str2, String str3, int i) {
        if (this.b) {
            return;
        }
        String str4 = str3 + Constants.COLON_SEPARATOR + i;
        List<com.tkay.core.common.f.e> list = this.f6191a;
        com.tkay.core.common.k.c.a("tk", str, str2, str4, (String) null, String.valueOf(list != null ? list.size() : 0), "1");
        u.a().a(3, "", "", a(true), n.a(1000));
    }

    private String a(boolean z) {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObjectH = super.h();
        JSONObject jSONObjectA = com.tkay.core.common.h.c.a();
        try {
            jSONObjectH.put("app_id", m.a().o());
            jSONObjectH.put(com.tkay.core.common.h.c.T, this.i);
            jSONObjectH.put(com.tkay.core.common.h.c.V, this.j);
            Iterator<String> itKeys = jSONObjectA.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                jSONObjectH.put(next, jSONObjectA.opt(next));
            }
            Map<String, Object> mapL = m.a().l();
            if (mapL != null && mapL.size() > 0 && mapL != null) {
                JSONObject jSONObject2 = new JSONObject();
                for (String str : mapL.keySet()) {
                    Object obj = mapL.get(str);
                    if (obj != null) {
                        jSONObject2.put(str, obj.toString());
                    }
                }
                jSONObjectH.put("custom", jSONObject2);
            }
        } catch (Throwable unused) {
        }
        String strA = com.tkay.core.common.l.c.a(jSONObjectH.toString());
        JSONArray jSONArray = new JSONArray();
        List<com.tkay.core.common.f.e> list = this.f6191a;
        if (list != null) {
            Iterator<com.tkay.core.common.f.e> it = list.iterator();
            while (it.hasNext()) {
                JSONObject jSONObjectA2 = it.next().a();
                if (z && jSONObjectA2 != null) {
                    try {
                        jSONObjectA2.put(com.tkay.core.common.h.c.U, 1);
                    } catch (JSONException e) {
                        e.printStackTrace();
                    }
                }
                jSONArray.put(jSONObjectA2);
            }
        }
        String strA2 = com.tkay.core.common.l.c.a(jSONArray.toString());
        String strC = f.c(m.a().p() + "api_ver=1.0&common=" + strA + "&data=" + strA2);
        try {
            jSONObject.put("common", strA);
            jSONObject.put("data", strA2);
            jSONObject.put(com.tkay.core.common.h.c.O, "1.0");
            jSONObject.put("sign", strC);
        } catch (Exception unused2) {
        }
        return jSONObject.toString();
    }
}
