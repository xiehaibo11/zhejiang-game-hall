package com.igexin.push.core.a;

import org.json.JSONObject;

public class c extends b {
    private static final String a = com.igexin.push.config.i.a + "_BindAliasResultAction";

    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        com.igexin.b.a.c.b.a(a + "|bind alias result resp data = " + jSONObject, new Object[0]);
        if (jSONObject == null) {
            return true;
        }
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("response_bind")) {
                return true;
            }
            com.igexin.push.core.r.a().b(jSONObject.getString("sn"), jSONObject.getString("result"));
            return true;
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(a + "|" + e.toString(), new Object[0]);
            return true;
        }
    }
}
