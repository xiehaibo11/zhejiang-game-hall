package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.m;
import com.tkay.core.common.c.k;
import com.tkay.core.common.f.i;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends com.tkay.core.common.h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5696a;
    String b;
    String c;
    int d;
    int e;
    String f;
    String g;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return str;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final String h() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String k() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, Object> l() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final int m() {
        return 2;
    }

    public a(i iVar) {
        this.f5696a = iVar.f6156a;
        this.b = iVar.d;
        this.c = iVar.b;
        this.d = iVar.h;
        this.e = iVar.i;
        this.f = iVar.k;
        this.g = iVar.l;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        if (!TextUtils.isEmpty(this.g)) {
            return this.g;
        }
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.f();
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
        try {
            return g().getBytes("utf-8");
        } catch (Exception unused) {
            return g().getBytes();
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", m.a().o());
            jSONObjectE.put("pl_id", this.c);
            jSONObjectE.put("session_id", m.a().g(this.c));
            jSONObjectE.put("t_g_id", this.d);
            jSONObjectE.put("gro_id", this.e);
            String strX = m.a().x();
            if (!TextUtils.isEmpty(strX)) {
                jSONObjectE.put("sy_id", strX);
            }
            String strY = m.a().y();
            if (!TextUtils.isEmpty(strY)) {
                jSONObjectE.put("bk_id", strY);
            } else {
                m.a().j(m.a().w());
                jSONObjectE.put("bk_id", m.a().w());
            }
            if (m.a().b() != null) {
                jSONObjectE.put("deny", com.tkay.core.common.l.d.o(m.a().f()));
            }
            JSONObject jSONObjectA = com.tkay.core.common.h.c.a(this.c);
            if (jSONObjectA != null) {
                jSONObjectE.put("customs", jSONObjectA);
            }
        } catch (Exception unused) {
        }
        return jSONObjectE;
    }

    @Override // com.tkay.core.common.h.a
    protected final JSONObject f() {
        JSONObject jSONObjectF = super.f();
        try {
            if (m.a().b() != null) {
                jSONObjectF.put("btts", com.tkay.core.common.l.d.g());
            }
        } catch (JSONException unused) {
        }
        return jSONObjectF;
    }

    @Override // com.tkay.core.common.h.a
    protected final String g() {
        HashMap map = new HashMap();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        String strA2 = com.tkay.core.common.l.c.a(f().toString());
        map.put("p", strA);
        map.put(com.tkay.core.common.h.c.X, strA2);
        map.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.b);
        map.put(k.a.b, this.f5696a);
        return new JSONObject((Map<String, Object>) map).toString();
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(int i, Object obj) {
        if (obj == null) {
            a(i, com.tkay.core.common.h.i.l, "Return Empty Ad.", ErrorCode.getErrorCode(ErrorCode.noADError, "", ""));
            return;
        }
        try {
            if (TextUtils.isEmpty(new JSONObject(obj.toString()).optString("data"))) {
                a(i, com.tkay.core.common.h.i.m, "Return Empty Ad.", ErrorCode.getErrorCode(ErrorCode.noADError, "", obj.toString()));
            } else {
                super.a(i, obj);
            }
        } catch (Throwable unused) {
            a(i, com.tkay.core.common.h.i.n, "Return Empty Ad.", ErrorCode.getErrorCode(ErrorCode.noADError, "", obj != null ? obj.toString() : "Adx Service Error."));
        }
    }
}
