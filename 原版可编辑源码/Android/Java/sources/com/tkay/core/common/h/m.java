package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.v;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public final class m extends a {
    v a;

    @Override
    protected final Object a(String str) {
        return null;
    }

    @Override
    protected final void a(AdError adError) {
    }

    @Override
    protected final boolean a(int i) {
        return i >= 200 && i < 300;
    }

    @Override
    protected final void b(AdError adError) {
    }

    @Override
    protected final byte[] d() {
        return new byte[0];
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

    public m(v vVar) {
        this.a = vVar;
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
}
