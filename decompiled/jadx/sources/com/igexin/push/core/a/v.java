package com.igexin.push.core.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class v extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2518a = com.igexin.push.config.i.f2493a + "_SetTagResultAction";

    @Override // com.igexin.push.core.a.b
    public boolean a(Object obj, JSONObject jSONObject) {
        com.igexin.b.a.c.b.a(f2518a + "|set tag result resp data = " + jSONObject, new Object[0]);
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
            com.igexin.b.a.c.b.a(f2518a + "|" + e.toString(), new Object[0]);
            return true;
        }
    }
}
