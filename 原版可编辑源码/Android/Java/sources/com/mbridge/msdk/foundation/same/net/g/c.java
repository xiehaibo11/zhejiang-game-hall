package com.mbridge.msdk.foundation.same.net.g;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.core.common.h.i;
import org.json.JSONObject;

public abstract class c extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {
    private static final String a = c.class.getSimpleName();

    public abstract void a(String str);

    public abstract void a(JSONObject jSONObject);

    @Override
    public void onSuccess(k<JSONObject> kVar) {
        if (kVar == null) {
            a("response is null");
            return;
        }
        if (kVar.c == null) {
            a(kVar);
        } else if (kVar.c.a == 204) {
            a(new JSONObject());
        } else {
            a(kVar);
        }
    }

    private void a(k<JSONObject> kVar) {
        if (kVar.a == null) {
            a("response result is null");
            return;
        }
        int iOptInt = kVar.a.optInt("status", i.j);
        if (iOptInt == -9999) {
            a(kVar.a);
            return;
        }
        if (iOptInt == 1 || iOptInt == 200) {
            a(kVar.a.optJSONObject("data"));
            return;
        }
        String strOptString = kVar.a.optString("msg");
        if (TextUtils.isEmpty(strOptString)) {
            strOptString = "error message is null";
        }
        a(strOptString);
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(a, "errorCode = " + aVar.a);
        a(com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
