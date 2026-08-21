package com.igexin.push.core.a;

import com.igexin.assist.action.MessageManger;
import org.json.JSONObject;

public class o extends b {
    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        e eVarA;
        String str;
        try {
            com.igexin.push.d.c.m mVar = (com.igexin.push.d.c.m) obj;
            if (jSONObject.has("action") && jSONObject.getString("action").equals("pushmessage")) {
                byte[] bArr = mVar.f instanceof byte[] ? (byte[]) mVar.f : null;
                String string = jSONObject.getString("taskid");
                com.igexin.b.a.c.b.a("getui receive message : %s", jSONObject);
                if (bArr != null && com.igexin.assist.sdk.a.i(com.igexin.push.core.d.g)) {
                    if (new com.igexin.push.core.b.d(com.igexin.push.core.d.g).a(string)) {
                        eVarA = e.a();
                        str = "1" + MessageManger.getInstance().getBrandCode(com.igexin.push.core.d.g);
                    } else {
                        eVarA = e.a();
                        str = "10";
                    }
                    eVarA.a(jSONObject, str);
                }
                com.igexin.push.core.w.a().a(jSONObject, bArr, true);
            }
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("PushmessageAction|" + e.toString(), new Object[0]);
        }
        return true;
    }
}
