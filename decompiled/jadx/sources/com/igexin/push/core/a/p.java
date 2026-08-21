package com.igexin.push.core.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class p extends b {
    @Override // com.igexin.push.core.a.b
    public boolean a(Object obj, JSONObject jSONObject) {
        try {
            if (jSONObject.has("action") && jSONObject.getString("action").equals("received")) {
                String string = jSONObject.getString("id");
                com.igexin.b.a.c.b.a("ReceivedAction received, cmd id :" + string, new Object[0]);
                try {
                    com.igexin.push.core.b.e.a().a(Long.parseLong(string), true, false);
                    e.a().d();
                } catch (NumberFormatException e) {
                    com.igexin.b.a.c.b.a("ReceivedAction|" + e.toString(), new Object[0]);
                }
            }
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("ReceivedAction|" + e2.toString(), new Object[0]);
        }
        return true;
    }
}
