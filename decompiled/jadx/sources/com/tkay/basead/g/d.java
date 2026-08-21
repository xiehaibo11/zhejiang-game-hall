package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.i;
import com.tkay.core.common.n;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class d extends com.tkay.core.common.h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5699a;
    String b;
    String c;
    int d;
    int e;
    int f;
    int g;
    String[] h;
    int i;
    int j;
    String k;
    String l = "OnlineOfferLoader";

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

    public d(i iVar, int i, int i2, String[] strArr, String str) {
        this.f5699a = iVar.d;
        this.b = iVar.b;
        this.c = iVar.c;
        this.i = iVar.e;
        this.f = i;
        this.g = i2;
        this.h = strArr;
        this.d = iVar.h;
        this.e = iVar.i;
        this.j = iVar.j;
        this.k = str;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.h();
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
            jSONObjectE.put("pl_id", this.b);
            jSONObjectE.put("session_id", m.a().g(this.b));
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
            jSONObjectE.put(com.tkay.core.common.h.c.ap, n.a().c());
            JSONObject jSONObjectA = com.tkay.core.common.h.c.a(this.b);
            if (jSONObjectA != null) {
                jSONObjectE.put("customs", jSONObjectA);
            }
            com.tkay.core.common.h.c.a(jSONObjectE);
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

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00e1  */
    @Override // com.tkay.core.common.h.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final java.lang.String g() {
        /*
            Method dump skipped, instruction units count: 264
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.g.d.g():java.lang.String");
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(int i, Object obj) {
        if (obj == null) {
            a(i, com.tkay.core.common.h.i.l, "Return Empty Ad.", ErrorCode.getErrorCode(ErrorCode.noADError, "", ""));
            return;
        }
        try {
            if (TextUtils.isEmpty(new JSONObject(obj.toString()).optString("data"))) {
                a(i, com.tkay.core.common.h.i.m, obj.toString(), ErrorCode.getErrorCode(ErrorCode.noADError, "", obj.toString()));
            } else {
                super.a(i, obj);
            }
        } catch (Throwable th) {
            a(i, com.tkay.core.common.h.i.n, obj != null ? obj.toString() : th.getMessage(), ErrorCode.getErrorCode(ErrorCode.noADError, "", obj != null ? obj.toString() : "Online Api Service Error."));
        }
    }
}
