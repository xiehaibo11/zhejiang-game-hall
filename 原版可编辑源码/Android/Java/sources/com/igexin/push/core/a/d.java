package com.igexin.push.core.a;

import org.json.JSONObject;

public class d extends b {
    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("block_client") || !jSONObject.has(com.tkay.expressad.foundation.d.r.ag)) {
                return true;
            }
            long j = jSONObject.getLong(com.tkay.expressad.foundation.d.r.ag) * 1000;
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (j == 0) {
                return true;
            }
            com.igexin.push.config.j.c = jCurrentTimeMillis + j;
            com.igexin.push.config.a.a().e();
            com.igexin.push.a.a.c.c().d();
            return true;
        } catch (Exception unused) {
            return true;
        }
    }
}
