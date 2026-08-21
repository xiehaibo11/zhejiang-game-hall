package com.tkay.expressad.foundation.c.a;

import com.tkay.expressad.foundation.g.a.d;
import java.util.Collection;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private d f6823a;

    /* synthetic */ a(byte b) {
        this();
    }

    private a() {
        this.f6823a = new d();
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.c.a.a$a, reason: collision with other inner class name */
    private static class C0459a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f6824a = new a(0);

        private C0459a() {
        }
    }

    public static a a() {
        return C0459a.f6824a;
    }

    public final JSONObject a(String str) {
        JSONObject jSONObjectB = this.f6823a.b(str);
        if (jSONObjectB != null) {
            return jSONObjectB;
        }
        return null;
    }

    public final void a(JSONObject jSONObject) {
        if (jSONObject != null) {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                this.f6823a.a(next, jSONObject.optJSONObject(next));
            }
        }
    }

    private JSONArray b() {
        return new JSONArray((Collection<Object>) this.f6823a.a());
    }
}
