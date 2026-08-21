package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public final class n extends a {
    com.tkay.core.common.f.n a;
    boolean b = true;

    @Override
    protected final Object a(String str) {
        return null;
    }

    @Override
    protected final void a(AdError adError) {
    }

    @Override
    protected final boolean a(int i) {
        return false;
    }

    @Override
    protected final void b(AdError adError) {
    }

    @Override
    protected final String h() {
        return null;
    }

    @Override
    protected final Context i() {
        return null;
    }

    @Override
    protected final String j() {
        return null;
    }

    @Override
    protected final String k() {
        return null;
    }

    @Override
    protected final Map<String, Object> l() {
        return null;
    }

    @Override
    protected final boolean o() {
        return true;
    }

    public n(com.tkay.core.common.f.n nVar) {
        this.a = nVar;
    }

    public final void p() {
        this.b = false;
    }

    public final com.tkay.core.common.f.n q() {
        return this.a;
    }

    @Override
    protected final int a() {
        return this.a.b;
    }

    @Override
    protected final String b() {
        return this.a.d;
    }

    @Override
    protected final Map<String, String> c() {
        String str = this.a.c;
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

    @Override
    protected final byte[] d() {
        JSONObject jSONObject;
        boolean z = this.a.c != null && this.a.c.contains("gzip");
        JSONObject jSONObject2 = null;
        try {
            jSONObject = new JSONObject(this.a.e);
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
