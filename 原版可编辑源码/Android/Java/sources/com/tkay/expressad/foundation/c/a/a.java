package com.tkay.expressad.foundation.c.a;

import com.tkay.expressad.foundation.g.a.d;
import java.util.Collection;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;

public final class a {
    private d a;

    a(byte b) {
        this();
    }

    private a() {
        this.a = new d();
    }

    private static class a {
        private static a a = new a(0);

        private a() {
        }
    }

    public static a a() {
        return a.a;
    }

    public final JSONObject a(String str) {
        JSONObject jSONObjectB = this.a.b(str);
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
                this.a.a(next, jSONObject.optJSONObject(next));
            }
        }
    }

    private JSONArray b() {
        return new JSONArray((Collection<Object>) this.a.a());
    }
}
