package com.igexin.push.core.a;

import org.json.JSONObject;

public class w extends b {
    private static final String a = com.igexin.push.config.i.a + "_UnBindAliasResultAction";

    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        com.igexin.b.a.c.b.a(a + "|unbind alias result resp data = " + jSONObject, new Object[0]);
        if (jSONObject == null) {
            return true;
        }
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("response_unbind")) {
                return true;
            }
            com.igexin.push.core.r.a().c(jSONObject.getString("sn"), jSONObject.getString("result"));
            return true;
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(a + "|" + e.toString(), new Object[0]);
            return true;
        }
    }
}
