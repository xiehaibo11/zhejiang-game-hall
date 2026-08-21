package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class n extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.core.common.f.n f6199a;
    boolean b = true;

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
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
    protected final boolean o() {
        return true;
    }

    public n(com.tkay.core.common.f.n nVar) {
        this.f6199a = nVar;
    }

    public final void p() {
        this.b = false;
    }

    public final com.tkay.core.common.f.n q() {
        return this.f6199a;
    }

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return this.f6199a.b;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        return this.f6199a.d;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        String str = this.f6199a.c;
        HashMap map = new HashMap();
        try {
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                map.put(next, jSONObject.optString(next));
            }
        } catch (Exception unused) {
        }
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        JSONObject jSONObject;
        boolean z = this.f6199a.c != null && this.f6199a.c.contains("gzip");
        JSONObject jSONObject2 = null;
        try {
            jSONObject = new JSONObject(this.f6199a.e);
        } catch (Exception e) {
            e = e;
        }
        try {
            if (this.b) {
                jSONObject.put(c.U, 1);
            }
        } catch (Exception e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        return z ? jSONObject != null ? c(jSONObject.toString()) : new byte[0] : jSONObject != null ? jSONObject.toString().getBytes() : new byte[0];
    }
}
