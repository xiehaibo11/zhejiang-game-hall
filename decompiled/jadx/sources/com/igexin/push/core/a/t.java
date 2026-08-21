package com.igexin.push.core.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class t extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2517a = com.igexin.push.config.i.f2493a;

    @Override // com.igexin.push.core.a.b
    public boolean a(Object obj, JSONObject jSONObject) {
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("response_deviceid")) {
                return true;
            }
            String string = jSONObject.getString("deviceid");
            com.igexin.b.a.c.b.a(f2517a + " get devid resp, devid : " + string + ", save 2db and file", new Object[0]);
            com.igexin.push.core.b.i.a().b(string);
            if (com.igexin.push.core.d.A != null) {
                com.igexin.push.core.c.a().j().f();
            }
            com.igexin.b.a.c.b.a("deviceidRsp|" + com.igexin.push.core.d.A, new Object[0]);
            return true;
        } catch (Exception unused) {
            return true;
        }
    }
}
