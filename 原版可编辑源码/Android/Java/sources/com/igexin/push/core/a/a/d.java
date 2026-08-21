package com.igexin.push.core.a.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONException;
import org.json.JSONObject;

public class d implements a {
    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (!jSONObject.has("do") || !jSONObject.has("actionid") || !jSONObject.has(r.ag)) {
                return null;
            }
            com.igexin.push.core.bean.d dVar = new com.igexin.push.core.bean.d();
            dVar.setType(jSONObject.getString("type"));
            dVar.setActionId(jSONObject.getString("actionid"));
            dVar.setDoActionId(jSONObject.getString("do"));
            if (jSONObject.has(r.ag)) {
                dVar.a(Long.valueOf(jSONObject.getString(r.ag)).longValue());
            }
            return dVar;
        } catch (JSONException unused) {
            return null;
        }
    }

    @Override
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        long jCurrentTimeMillis = System.currentTimeMillis() + (((com.igexin.push.core.bean.d) baseAction).a() * 1000);
        com.igexin.push.core.b.i.a().a(true);
        com.igexin.push.core.b.i.a().c(jCurrentTimeMillis);
        return true;
    }
}
