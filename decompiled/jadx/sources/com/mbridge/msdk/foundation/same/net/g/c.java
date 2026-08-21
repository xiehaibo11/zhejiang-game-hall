package com.mbridge.msdk.foundation.same.net.g;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.core.common.h.i;
import org.json.JSONObject;

/* JADX INFO: compiled from: CommonMBListener.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class c extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3455a = c.class.getSimpleName();

    public abstract void a(String str);

    public abstract void a(JSONObject jSONObject);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        if (kVar == null) {
            a("response is null");
            return;
        }
        if (kVar.c == null) {
            a(kVar);
        } else if (kVar.c.f3448a == 204) {
            a(new JSONObject());
        } else {
            a(kVar);
        }
    }

    private void a(k<JSONObject> kVar) {
        if (kVar.f3462a == null) {
            a("response result is null");
            return;
        }
        int iOptInt = kVar.f3462a.optInt("status", i.j);
        if (iOptInt == -9999) {
            a(kVar.f3462a);
            return;
        }
        if (iOptInt == 1 || iOptInt == 200) {
            a(kVar.f3462a.optJSONObject("data"));
            return;
        }
        String strOptString = kVar.f3462a.optString("msg");
        if (TextUtils.isEmpty(strOptString)) {
            strOptString = "error message is null";
        }
        a(strOptString);
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3455a, "errorCode = " + aVar.f3429a);
        a(com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
