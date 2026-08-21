package com.igexin.push.core.a.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONException;
import org.json.JSONObject;

public class f implements a {
    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
    public BaseAction a(JSONObject jSONObject) {
        try {
            com.igexin.push.core.bean.f fVar = new com.igexin.push.core.bean.f();
            fVar.setType("goto");
            fVar.setActionId(jSONObject.getString("actionid"));
            fVar.setDoActionId(jSONObject.getString("do"));
            return fVar;
        } catch (JSONException unused) {
            return null;
        }
    }

    @Override
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        if (pushTaskBean == null || baseAction == null || baseAction.getDoActionId() == null || baseAction.getDoActionId().equals("")) {
            return true;
        }
        com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), baseAction.getDoActionId());
        return true;
    }
}
