package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.report.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cw implements com.kwad.sdk.core.d<a.C0214a> {
    private static void a(a.C0214a c0214a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0214a.code = jSONObject.optInt("code");
        c0214a.msg = jSONObject.optString("msg");
        if (c0214a.msg == JSONObject.NULL) {
            c0214a.msg = "";
        }
    }

    private static JSONObject b(a.C0214a c0214a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0214a.code != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "code", c0214a.code);
        }
        if (c0214a.msg != null && !c0214a.msg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "msg", c0214a.msg);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.C0214a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.C0214a) bVar, jSONObject);
    }
}
