package com.igexin.push.extension.distribution.basic.a;

import android.os.Handler;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONObject;

public class e implements com.igexin.push.core.a.a.a {
    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
    public BaseAction a(JSONObject jSONObject) {
        try {
            return com.igexin.push.extension.distribution.basic.b.b.a(jSONObject.toString());
        } catch (Exception unused) {
            return null;
        }
    }

    @Override
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.extension.distribution.basic.b.b bVar = (com.igexin.push.extension.distribution.basic.b.b) baseAction;
        new Handler().postDelayed(new f(this, bVar, pushTaskBean), bVar.a());
        return true;
    }
}
