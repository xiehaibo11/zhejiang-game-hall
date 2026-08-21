package com.tkay.core.common.h;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class d extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6194a = "custom";
    private static final String e = d.class.getSimpleName();
    long b;
    long c;
    Map<String, Object> d = com.tkay.core.common.b.m.a().l();
    private String f;
    private String g;
    private Context h;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
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
    protected int m() {
        return 11;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean n() {
        return true;
    }

    public d(Context context, String str, String str2) {
        this.f = str;
        this.g = str2;
        this.h = context;
    }

    @Override // com.tkay.core.common.h.a
    public final void a(int i, k kVar) {
        this.b = System.currentTimeMillis();
        this.c = SystemClock.elapsedRealtime();
        super.a(i, kVar);
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.b();
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Accept-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        try {
            return g().getBytes("utf-8");
        } catch (Exception unused) {
            return g().getBytes();
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final String h() {
        return this.f;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return this.h;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return this.g;
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", this.f);
            jSONObjectE.put("nw_ver", com.tkay.core.common.l.d.h());
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
            JSONObject jSONObjectB = c.b();
            if (jSONObjectB != null) {
                jSONObjectE.put("custom", jSONObjectB);
            }
            if (com.tkay.core.common.b.m.a().b() != null) {
                jSONObjectE.put("deny", com.tkay.core.common.l.d.o(com.tkay.core.common.b.m.a().f()));
            }
            jSONObjectE.put("rc", com.tkay.core.common.b.m.a().G() ? 1 : 2);
            if (com.tkay.core.common.b.m.a().u()) {
                jSONObjectE.put("is_test", 1);
            }
            jSONObjectE.put(c.ap, com.tkay.core.common.n.a().c());
            com.tkay.core.common.n.a();
            jSONObjectE.put("pil_offset", com.tkay.core.common.n.b());
        } catch (JSONException unused) {
        }
        return jSONObjectE;
    }

    @Override // com.tkay.core.common.h.a
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

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        String strTrim = str.trim();
        try {
            JSONObject jSONObject = new JSONObject(strTrim);
            if (this.d != null) {
                jSONObject.put("custom", new JSONObject(this.d));
            }
            strTrim = jSONObject.toString();
        } catch (Exception unused) {
        }
        com.tkay.core.common.k.c.a("app", (String) null, this.b, System.currentTimeMillis(), SystemClock.elapsedRealtime() - this.c);
        return strTrim;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
        com.tkay.core.common.k.c.a("app", adError.getPlatformCode(), adError.getPlatformMSG(), b(), "", "", "");
    }
}
