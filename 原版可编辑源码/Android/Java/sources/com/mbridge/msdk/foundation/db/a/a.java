package com.mbridge.msdk.foundation.db.a;

import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.n;
import com.mbridge.msdk.foundation.same.a.b;
import java.util.Collection;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

public final class a {
    private n a;
    private b b;

    private a() {
        this.b = new b(1000);
        try {
            n nVarA = n.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
            this.a = nVarA;
            a(nVarA.a(), false);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static class a {
        private static a a = new a();
    }

    public static a a() {
        return a.a;
    }

    public final JSONObject a(String str) {
        n nVar;
        JSONObject jSONObjectB = this.b.b(str);
        if (jSONObjectB != null || (nVar = this.a) == null) {
            return jSONObjectB;
        }
        JSONObject jSONObjectA = nVar.a(str);
        if (jSONObjectA != null) {
            this.b.a(str, jSONObjectA);
        }
        return jSONObjectA;
    }

    public final void a(JSONObject jSONObject, final boolean z) {
        if (jSONObject != null) {
            Iterator<String> itKeys = jSONObject.keys();
            final b bVar = new b(100);
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(next);
                this.b.a(next, jSONObjectOptJSONObject);
                bVar.a(next, jSONObjectOptJSONObject);
            }
            com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                @Override
                public final void run() {
                    if (!z || a.this.a == null) {
                        return;
                    }
                    for (String str : bVar.a()) {
                        a.this.a.a(str, a.this.b.b(str));
                    }
                }
            });
        }
    }

    public final JSONArray b() {
        return new JSONArray((Collection<Object>) this.b.a());
    }
}
