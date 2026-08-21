package com.igexin.push.core.a;

import org.json.JSONObject;

public class u extends b {
    @Override
    public boolean a(Object obj, JSONObject jSONObject) {
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("sendmessage_feedback")) {
                return true;
            }
            String string = jSONObject.getString("appid");
            String string2 = jSONObject.getString("taskid");
            String string3 = jSONObject.getString("actionid");
            String string4 = jSONObject.getString("result");
            long j = jSONObject.getLong("timestamp");
            com.igexin.b.a.c.b.a("SendMessageFeedbackAction|appid:" + string + "|taskid:" + string2 + "|actionid:" + string3, new Object[0]);
            com.igexin.push.core.r.a().a(string, string2, string3, string4, j);
            return true;
        } catch (Exception unused) {
            return true;
        }
    }
}
