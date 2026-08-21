package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.n;
import com.tkay.core.common.f.z;
import com.tkay.core.common.i;
import com.tkay.core.common.u;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class f extends com.tkay.core.common.h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5701a;
    JSONObject b;
    int c;
    String d;
    z e;
    Map<String, Object> f;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
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

    public f(int i, z zVar, String str, Map<String, Object> map) {
        this.c = i;
        this.e = zVar;
        this.f = map;
        this.d = str;
    }

    public final void b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.b.put("scenario", str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        try {
            if (!TextUtils.isEmpty(this.d)) {
                this.b = new JSONObject(this.d);
                for (Map.Entry<String, Object> entry : this.f.entrySet()) {
                    this.b.put(entry.getKey(), entry.getValue());
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        i.a();
        String strG = i.g();
        this.f5701a = strG;
        return strG;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        j jVarK;
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        z zVar = this.e;
        if (zVar != null && (jVarK = zVar.k()) != null && com.tkay.basead.a.b.a(this.c, jVarK)) {
            String strI = com.tkay.core.common.l.d.i();
            if (!TextUtils.isEmpty(strI)) {
                map.put("User-Agent", strI);
            }
        }
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        return c(this.b.toString());
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
        JSONObject jSONObject2 = this.b;
        String string2 = jSONObject2 != null ? jSONObject2.toString() : "";
        u.a().a(1, b(), string, string2, n.a(1000));
        com.tkay.core.common.k.c.a("tk", adError.getPlatformCode(), adError.getPlatformMSG(), this.f5701a, "", "1", "");
    }
}
