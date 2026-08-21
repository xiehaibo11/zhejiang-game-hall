package com.igexin.push.core.a.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class c implements a {
    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    @Override // com.igexin.push.core.a.a.a
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (!jSONObject.has("do") || !jSONObject.has("actionid")) {
                return null;
            }
            BaseAction baseAction = new BaseAction();
            baseAction.setType(jSONObject.getString("type"));
            baseAction.setActionId(jSONObject.getString("actionid"));
            baseAction.setDoActionId(jSONObject.getString("do"));
            return baseAction;
        } catch (JSONException unused) {
            return null;
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.b.i.a().a(false);
        if (baseAction.getDoActionId().equals("")) {
            return true;
        }
        com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), baseAction.getDoActionId());
        return true;
    }
}
