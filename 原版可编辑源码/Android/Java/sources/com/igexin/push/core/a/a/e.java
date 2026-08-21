package com.igexin.push.core.a.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONException;
import org.json.JSONObject;

public class e implements a {
    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
    public BaseAction a(JSONObject jSONObject) {
        try {
            BaseAction baseAction = new BaseAction();
            baseAction.setType("null");
            baseAction.setActionId(jSONObject.getString("actionid"));
            return baseAction;
        } catch (JSONException unused) {
            return null;
        }
    }

    @Override
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        String strA = com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId());
        com.igexin.b.a.c.b.a("EndAction execute, remove key = " + strA, new Object[0]);
        try {
            com.igexin.push.core.d.Z.remove(strA);
            return true;
        } catch (Exception unused) {
            return true;
        }
    }
}
