package com.tramini.plugin.a.d;

import android.content.Context;
import com.tramini.plugin.a.g.h;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class d extends a {
    @Override
    protected final int a() {
        return 1;
    }

    @Override
    public final boolean g() {
        return true;
    }

    @Override
    protected final String b() {
        com.tramini.plugin.a.a.a();
        return com.tramini.plugin.a.a.b();
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final JSONObject e() {
        String str = "1";
        JSONObject jSONObject = new JSONObject();
        Context contextB = com.tramini.plugin.a.a.c.a().b();
        try {
            jSONObject.put("platform", "1");
            jSONObject.put("os_vn", com.tramini.plugin.a.g.e.b());
            jSONObject.put("os_vc", com.tramini.plugin.a.g.e.a());
            jSONObject.put("package_name", com.tramini.plugin.a.g.e.c(contextB));
            jSONObject.put("app_vn", com.tramini.plugin.a.g.e.b(contextB));
            jSONObject.put("app_vc", com.tramini.plugin.a.g.e.a(contextB));
            jSONObject.put("sdk_ver", com.tramini.plugin.a.a.a.a);
            jSONObject.put("android_id", com.tramini.plugin.a.g.e.d(contextB));
            if (!h.a(contextB)) {
                str = "0";
            }
            jSONObject.put(a.i, str);
            jSONObject.put(a.j, "3");
        } catch (Exception unused) {
        }
        return jSONObject;
    }

    @Override
    protected final byte[] d() {
        try {
            return f().getBytes("utf-8");
        } catch (Exception unused) {
            return f().getBytes();
        }
    }

    @Override
    protected final Object a(String str) {
        return str.trim();
    }
}
