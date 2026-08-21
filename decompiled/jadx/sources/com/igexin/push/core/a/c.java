package com.igexin.push.core.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class c extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2504a = com.igexin.push.config.i.f2493a + "_BindAliasResultAction";

    @Override // com.igexin.push.core.a.b
    public boolean a(Object obj, JSONObject jSONObject) {
        com.igexin.b.a.c.b.a(f2504a + "|bind alias result resp data = " + jSONObject, new Object[0]);
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
            com.igexin.b.a.c.b.a(f2504a + "|" + e.toString(), new Object[0]);
            return true;
        }
    }
}
