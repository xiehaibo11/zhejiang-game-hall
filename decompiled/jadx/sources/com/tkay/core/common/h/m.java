package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.v;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class m extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    v f6198a;

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return i >= 200 && i < 300;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        return new byte[0];
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

    public m(v vVar) {
        this.f6198a = vVar;
    }

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return this.f6198a.b;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        return this.f6198a.d;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        String str = this.f6198a.c;
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
