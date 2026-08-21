package com.igexin.push.core.a;

import org.json.JSONObject;

public class v extends b {
    private static final String a = com.igexin.push.config.i.a + "_SetTagResultAction";

    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        com.igexin.b.a.c.b.a(a + "|set tag result resp data = " + jSONObject, new Object[0]);
        if (jSONObject == null) {
            return true;
        }
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("settag_result")) {
                return true;
            }
            com.igexin.push.core.r.a().a(jSONObject.getString("sn"), jSONObject.getString("error_code"));
            return true;
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(a + "|" + e.toString(), new Object[0]);
            return true;
        }
    }
}
