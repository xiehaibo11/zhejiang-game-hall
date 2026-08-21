package com.igexin.push.core.a;

import java.util.Iterator;
import org.json.JSONObject;

class m extends com.igexin.push.f.b {
    final l a;

    m(l lVar) {
        this.a = lVar;
    }

    @Override
    protected void a() {
        try {
            com.igexin.push.core.b.d dVar = new com.igexin.push.core.b.d(com.igexin.push.core.d.g);
            JSONObject jSONObjectC = dVar.c();
            if (jSONObjectC == null) {
                return;
            }
            Iterator<String> itKeys = jSONObjectC.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                JSONObject jSONObject = jSONObjectC.getJSONObject(next);
                com.igexin.b.a.c.b.a("LoginResultAction|send unFeedback taskid = " + next, new Object[0]);
                jSONObject.put("appid", com.igexin.push.core.d.a);
                jSONObject.put("appkey", com.igexin.push.core.d.b);
                e.a().a(jSONObject, jSONObject.getString("multaid"));
                itKeys.remove();
            }
            dVar.d();
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("LoginResultAction|feedbackMultiBrandPushMessage exception :" + th.toString(), new Object[0]);
        }
    }
}
