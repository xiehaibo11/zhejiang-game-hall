package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.report.a;
import org.json.JSONObject;

public final class cw implements com.kwad.sdk.core.d<a.a> {
    private static void a(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.code = jSONObject.optInt("code");
        aVar.msg = jSONObject.optString("msg");
        if (aVar.msg == JSONObject.NULL) {
            aVar.msg = "";
        }
    }

    private static JSONObject b(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.code != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "code", aVar.code);
        }
        if (aVar.msg != null && !aVar.msg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "msg", aVar.msg);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.a) bVar, jSONObject);
    }
}
